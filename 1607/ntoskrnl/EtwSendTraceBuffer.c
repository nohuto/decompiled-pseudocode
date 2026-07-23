/*
 * XREFs of EtwSendTraceBuffer @ 0x140224F50
 * Callers:
 *     <none>
 * Callees:
 *     KeGetEffectiveIrql @ 0x140051224 (KeGetEffectiveIrql.c)
 *     KeSetEvent @ 0x140055E50 (KeSetEvent.c)
 *     EtwpCloseLogger @ 0x1400737B0 (EtwpCloseLogger.c)
 *     EtwpOpenLogger @ 0x1400737E8 (EtwpOpenLogger.c)
 *     KiInsertQueueDpc @ 0x1400D6160 (KiInsertQueueDpc.c)
 */

__int64 __fastcall EtwSendTraceBuffer(unsigned __int16 a1, signed __int64 a2, unsigned int a3, __int64 a4, __int64 a5)
{
  unsigned int v5; // esi
  unsigned int v6; // r14d
  __int64 v11; // rax
  struct _KEVENT *v12; // rbx
  int v13; // ecx
  bool v14; // zf
  signed __int64 Flink; // rcx
  char v16; // [rsp+60h] [rbp+8h] BYREF

  v5 = 0;
  v6 = a1;
  if ( a1 >= 0x40u )
    return 3221225480LL;
  v11 = EtwpOpenLogger(a1, EtwpHostSiloState, 0, &v16);
  v12 = (struct _KEVENT *)v11;
  if ( !v11 )
    return 3221226134LL;
  if ( *(_DWORD *)(v11 + 320) )
  {
    if ( (*(_DWORD *)(v11 + 12) & 0x40000) != 0 )
    {
      if ( a3 )
        _InterlockedExchangeAdd((volatile signed __int32 *)(v11 + 240), a3);
      v13 = *(_DWORD *)(a2 + 48);
      *(_DWORD *)(a2 + 4) = v13;
      v14 = (*(_BYTE *)(a2 + 52) & 0x20) == 0;
      *(_DWORD *)(a2 + 8) = *(_DWORD *)a2 + v13;
      *(_DWORD *)(a2 + 44) = 3;
      *(_WORD *)(a2 + 54) = 5;
      if ( v14 )
        *(_WORD *)(a2 + 40) = *(unsigned __int8 *)(a2 + 40);
      *(_QWORD *)(a2 + 64) = a5;
      *(_QWORD *)(a2 + 56) = a4;
      *(_QWORD *)(a2 + 16) = (*(__int64 (**)(void))(v11 + 40))();
      _m_prefetchw(&v12[5].Header.WaitListHead);
      do
      {
        Flink = (signed __int64)v12[5].Header.WaitListHead.Flink;
        *(_QWORD *)(a2 + 32) = Flink;
      }
      while ( Flink != _InterlockedCompareExchange64((volatile signed __int64 *)&v12[5].Header.WaitListHead, a2, Flink) );
      if ( !Flink )
      {
        if ( KeGetEffectiveIrql() > 2u )
        {
          if ( !_interlockedbittestandset(&v12[34].Header.SignalState, 8u) )
            KiInsertQueueDpc((ULONG_PTR)&v12[23].Header.WaitListHead.Blink, 0LL, 0LL, 0LL, 0);
        }
        else
        {
          KeSetEvent(v12 + 20, 0, 0);
        }
      }
    }
    else
    {
      v5 = -1073741816;
    }
  }
  else
  {
    v5 = -1073741054;
  }
  EtwpCloseLogger(v6, EtwpHostSiloState, v16);
  return v5;
}
