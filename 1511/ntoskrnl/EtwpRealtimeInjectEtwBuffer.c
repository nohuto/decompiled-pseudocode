/*
 * XREFs of EtwpRealtimeInjectEtwBuffer @ 0x1404CAF98
 * Callers:
 *     EtwpRealtimeNotifyConsumers @ 0x1404C9F88 (EtwpRealtimeNotifyConsumers.c)
 *     EtwpRealtimeDeliverBuffer @ 0x1404CAE80 (EtwpRealtimeDeliverBuffer.c)
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x14006EE30 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection @ 0x140079FF0 (ExAcquireRundownProtection.c)
 *     KeSetEvent @ 0x1400875D0 (KeSetEvent.c)
 *     KiStackAttachProcess @ 0x1400A6700 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x1400A6A00 (KiUnstackDetachProcess.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     memmove @ 0x140166980 (memmove.c)
 *     EtwpFindUserBufferSpace @ 0x1404CB178 (EtwpFindUserBufferSpace.c)
 *     EtwpFreeUserBufferSpace @ 0x140667A80 (EtwpFreeUserBufferSpace.c)
 */

__int64 __fastcall EtwpRealtimeInjectEtwBuffer(_DWORD *a1, __int64 a2, __int64 a3)
{
  __int64 v6; // rcx
  signed __int64 *v7; // r8
  signed __int64 *v8; // rdx
  signed __int64 v9; // rax
  signed __int64 v10; // rcx
  _DWORD *v11; // rdx
  volatile signed __int32 *v12; // r8
  int v13; // ecx
  int UserBufferSpace; // [rsp+20h] [rbp-78h]
  void *v16[2]; // [rsp+28h] [rbp-70h] BYREF
  signed __int64 v17; // [rsp+38h] [rbp-60h]
  __int64 v18; // [rsp+40h] [rbp-58h]
  char *v19; // [rsp+48h] [rbp-50h]
  $D4FCF91253F76F57393CBFE908971F67 v20; // [rsp+50h] [rbp-48h] BYREF

  v16[1] = (void *)a2;
  v18 = a3;
  if ( *(_WORD *)(a3 + 54) == 6 )
  {
    ++*(_DWORD *)(a2 + 84);
    if ( (a1[3] & 0x10000000) != 0 || *(_DWORD *)(a2 + 84) > 2u )
      return 0LL;
  }
  else
  {
    *(_DWORD *)(a2 + 84) = 0;
  }
  if ( !ExAcquireRundownProtection((PEX_RUNDOWN_REF)(*(_QWORD *)(a2 + 24) + 736LL)) )
    return 3221225738LL;
  KiStackAttachProcess(*(_KPROCESS **)(a2 + 24), 0LL, (__int64)&v20);
  **(_DWORD **)(a2 + 136) = a1[64];
  **(_DWORD **)(a2 + 144) = a1[69];
  v6 = (unsigned int)(2 * a1[63]);
  if ( **(_DWORD **)(a2 + 64) < (unsigned int)v6 )
  {
    UserBufferSpace = EtwpFindUserBufferSpace(v6, a2, *(unsigned int *)(a3 + 48), v16);
    if ( UserBufferSpace >= 0 )
    {
      memmove(v16[0], (const void *)a3, *(unsigned int *)(a3 + 48));
      if ( (*(_BYTE *)(a2 + 90) & 0x10) != 0 )
      {
        v11 = (char *)v16[0] + 32;
        v19 = (char *)v16[0] + 32;
        v12 = *(volatile signed __int32 **)(a2 + 72);
        LODWORD(v9) = *v12;
        do
        {
          *v11 = v9;
          v13 = v9;
          LODWORD(v9) = _InterlockedCompareExchange(v12, (signed __int32)v11, v9);
        }
        while ( (_DWORD)v9 != v13 );
        v9 = (unsigned int)v9;
      }
      else
      {
        v7 = (signed __int64 *)((char *)v16[0] + 32);
        v8 = *(signed __int64 **)(a2 + 72);
        _m_prefetchw(v8);
        v9 = *v8;
        do
        {
          *v7 = v9;
          v10 = v9;
          v9 = _InterlockedCompareExchange64(v8, (signed __int64)v7, v9);
        }
        while ( v9 != v10 );
      }
      v17 = v9;
      _InterlockedIncrement(*(volatile signed __int32 **)(a2 + 64));
      if ( !v17 )
        KeSetEvent(*(PRKEVENT *)(a2 + 56), 0, 0);
    }
  }
  else
  {
    UserBufferSpace = -1073741764;
  }
  KiUnstackDetachProcess(&v20, 0LL);
  ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)(*(_QWORD *)(a2 + 24) + 736LL));
  return (unsigned int)UserBufferSpace;
}
