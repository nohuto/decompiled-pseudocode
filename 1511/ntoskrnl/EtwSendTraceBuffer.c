/*
 * XREFs of EtwSendTraceBuffer @ 0x14020D638
 * Callers:
 *     <none>
 * Callees:
 *     KiInsertQueueDpc @ 0x140043D50 (KiInsertQueueDpc.c)
 *     EtwpGetSiloDriverState @ 0x140077640 (EtwpGetSiloDriverState.c)
 *     KeSetEvent @ 0x1400875D0 (KeSetEvent.c)
 *     PspDereferenceMonitorContextServerSilo @ 0x14009FBBC (PspDereferenceMonitorContextServerSilo.c)
 *     EtwpOpenLogger @ 0x14009FBD4 (EtwpOpenLogger.c)
 *     EtwpCloseLogger @ 0x14009FC5C (EtwpCloseLogger.c)
 *     KeGetEffectiveIrql @ 0x14009FE70 (KeGetEffectiveIrql.c)
 */

__int64 __fastcall EtwSendTraceBuffer(unsigned __int16 a1, signed __int64 a2, unsigned int a3, __int64 a4, __int64 a5)
{
  unsigned int v5; // edi
  unsigned int v6; // r15d
  __int64 SiloDriverState; // r14
  __int64 v12; // rax
  __int64 v13; // rbx
  int v14; // ecx
  bool v15; // zf
  signed __int64 v16; // rcx
  char v17; // [rsp+70h] [rbp+8h] BYREF

  v5 = 0;
  v6 = a1;
  if ( a1 >= 0x40u )
    return 3221225480LL;
  SiloDriverState = EtwpGetSiloDriverState((PVOID)0xFFFFFFFFFFFFFFFFLL);
  v12 = EtwpOpenLogger(v6, SiloDriverState, 0LL, &v17);
  v13 = v12;
  if ( v12 )
  {
    if ( *(_DWORD *)(v12 + 336) )
    {
      if ( (*(_DWORD *)(v12 + 12) & 0x40000) != 0 )
      {
        if ( a3 )
          _InterlockedExchangeAdd((volatile signed __int32 *)(v12 + 256), a3);
        v14 = *(_DWORD *)(a2 + 48);
        *(_DWORD *)(a2 + 4) = v14;
        v15 = (*(_BYTE *)(a2 + 52) & 0x20) == 0;
        *(_DWORD *)(a2 + 8) = *(_DWORD *)a2 + v14;
        *(_DWORD *)(a2 + 44) = 3;
        *(_WORD *)(a2 + 54) = 5;
        if ( v15 )
          *(_WORD *)(a2 + 40) = *(unsigned __int8 *)(a2 + 40);
        *(_QWORD *)(a2 + 64) = a5;
        *(_QWORD *)(a2 + 56) = a4;
        *(_QWORD *)(a2 + 16) = (*(__int64 (**)(void))(v12 + 40))();
        _m_prefetchw((const void *)(v13 + 144));
        do
        {
          v16 = *(_QWORD *)(v13 + 144);
          *(_QWORD *)(a2 + 32) = v16;
        }
        while ( v16 != _InterlockedCompareExchange64((volatile signed __int64 *)(v13 + 144), a2, v16) );
        if ( !v16 )
        {
          if ( KeGetEffectiveIrql() > 2u )
          {
            if ( !_interlockedbittestandset((volatile signed __int32 *)(v13 + 836), 8u) )
              KiInsertQueueDpc(v13 + 584, 0LL, 0LL, 0LL, 0);
          }
          else
          {
            KeSetEvent((PRKEVENT)(v13 + 496), 0, 0);
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
    EtwpCloseLogger(v6, SiloDriverState, v17);
  }
  else
  {
    v5 = -1073741162;
  }
  PspDereferenceMonitorContextServerSilo(SiloDriverState - 128);
  return v5;
}
