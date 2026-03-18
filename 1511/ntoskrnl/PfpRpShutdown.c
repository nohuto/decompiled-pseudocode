/*
 * XREFs of PfpRpShutdown @ 0x140631828
 * Callers:
 *     PfpParametersPropagate @ 0x140631C58 (PfpParametersPropagate.c)
 * Callees:
 *     ExWaitForRundownProtectionRelease @ 0x14002D988 (ExWaitForRundownProtectionRelease.c)
 *     ExfTryToWakePushLock @ 0x140030AD8 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x140042090 (KeAbPostRelease.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140088F60 (KiLeaveCriticalRegionUnsafe.c)
 *     PfLockExclusiveAcquire @ 0x1400FEFB4 (PfLockExclusiveAcquire.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PfpRpShutdown(__int64 a1)
{
  _QWORD **v2; // rcx
  _QWORD *v3; // rdi
  _BYTE *i; // rdi
  void *v5; // r10
  __int64 v6; // rdx
  _BYTE *j; // rdi
  void *v8; // rcx
  __int64 v10; // [rsp+70h] [rbp+8h]

  *(_DWORD *)(a1 + 152) &= ~1u;
  ExWaitForRundownProtectionRelease((PEX_RUNDOWN_REF)(a1 + 136));
  PfLockExclusiveAcquire((unsigned __int64 *)(a1 + 48));
  v2 = *(_QWORD ***)(a1 + 8);
  if ( !v2 || (v3 = *v2, ((unsigned __int8)*v2 & 1) != 0) )
  {
    for ( i = v2 + 1; ; i += 8 )
    {
      if ( (unsigned __int64)i >= *(_QWORD *)(a1 + 8) + 8 * ((unsigned __int64)*(unsigned int *)(a1 + 4) >> 5) )
      {
        v3 = 0LL;
        goto LABEL_19;
      }
      if ( (*i & 1) == 0 )
        break;
    }
    v3 = *(_QWORD **)i;
  }
LABEL_19:
  while ( v3 )
  {
    v5 = v3;
    v10 = v3[1] & (-1LL << (*(_DWORD *)(a1 + 4) & 0x1F));
    v6 = *(_QWORD *)(a1 + 8)
       + 8LL
       * ((37
         * (BYTE6(v10)
          + 37
          * (BYTE5(v10)
           + 37
           * (BYTE4(v10)
            + 37 * (BYTE3(v10) + 37 * (BYTE2(v10) + 37 * (BYTE1(v10) + 37 * ((unsigned __int8)v10 + 11623883)))))))
         + HIBYTE(v10)) & (unsigned int)((*(_DWORD *)(a1 + 4) >> 5) - 1));
    if ( (*v3 & 0x8000000000000002uLL) == 0x8000000000000002uLL )
      v6 = *(_QWORD *)(a1 + 8)
         + 8LL
         * ((37
           * (BYTE6(v10)
            + 37
            * (BYTE5(v10)
             + 37
             * (BYTE4(v10)
              + 37 * (BYTE3(v10) + 37 * (BYTE2(v10) + 37 * (BYTE1(v10) + 37 * ((unsigned __int8)v10 + 11623883)))))))
           + HIBYTE(v10)) & (unsigned int)((*(_DWORD *)(a1 + 4) >> 5) - 1));
    v3 = (_QWORD *)*v3;
    if ( ((unsigned __int8)v3 & 1) != 0 )
    {
      for ( j = (_BYTE *)(v6 + 8); ; j += 8 )
      {
        if ( (unsigned __int64)j >= *(_QWORD *)(a1 + 8) + 8 * ((unsigned __int64)*(unsigned int *)(a1 + 4) >> 5) )
        {
          v3 = 0LL;
          goto LABEL_18;
        }
        if ( (*j & 1) == 0 )
          break;
      }
      v3 = *(_QWORD **)j;
    }
LABEL_18:
    ExFreePoolWithTag(v5, 0);
  }
  v8 = *(void **)(a1 + 8);
  if ( v8 )
    ExFreePoolWithTag(v8, 0);
  *(_QWORD *)(a1 + 16) = a1 + 24;
  *(_QWORD *)a1 = 0LL;
  *(_QWORD *)(a1 + 8) = 0LL;
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 48), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)(a1 + 48));
  KeAbPostRelease(a1 + 48);
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  return PfpRpControlRequestReset(a1);
}
