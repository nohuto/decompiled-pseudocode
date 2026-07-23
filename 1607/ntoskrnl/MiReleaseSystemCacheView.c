/*
 * XREFs of MiReleaseSystemCacheView @ 0x140017EF4
 * Callers:
 *     MmUnmapViewInSystemCache @ 0x140048E40 (MmUnmapViewInSystemCache.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLock @ 0x1400122D0 (KeReleaseInStackQueuedSpinLock.c)
 *     InsertTailListPte @ 0x140017A50 (InsertTailListPte.c)
 *     MiGetSystemCacheReverseMap @ 0x140019690 (MiGetSystemCacheReverseMap.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x14001B8C0 (KeAcquireInStackQueuedSpinLock.c)
 *     MiGetAnyMultiplexedVm @ 0x14001CBDC (MiGetAnyMultiplexedVm.c)
 *     RemoveListEntryPte @ 0x1400AA5E4 (RemoveListEntryPte.c)
 *     MiWaitForSystemCacheViewFlush @ 0x1400AD4D4 (MiWaitForSystemCacheViewFlush.c)
 *     MiReturnSystemVa @ 0x1400BE760 (MiReturnSystemVa.c)
 *     MiInsertTbFlushEntry @ 0x1400DE0E0 (MiInsertTbFlushEntry.c)
 *     MiChargeWsles @ 0x1400DF9C0 (MiChargeWsles.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     MiDecrementSystemCacheViewCount @ 0x1401E6BA8 (MiDecrementSystemCacheViewCount.c)
 *     MiSetSystemCacheReverseMap @ 0x1401E6C94 (MiSetSystemCacheReverseMap.c)
 *     MiPteInShadowRange @ 0x1401EF1E4 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x1401EF484 (MiWritePteShadow.c)
 *     MiGetPteLink @ 0x1401F24AC (MiGetPteLink.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 */

void __fastcall MiReleaseSystemCacheView(__int64 a1, __int64 a2)
{
  __int64 AnyMultiplexedVm; // rax
  __int64 v4; // r14
  unsigned __int64 v5; // rsi
  unsigned __int64 v6; // rdi
  unsigned __int64 v7; // r12
  __int64 v8; // rdx
  _QWORD *v9; // r8
  __int64 v10; // rcx
  _QWORD *v11; // rdi
  __int64 v12; // rsi
  void *SystemCacheReverseMap; // rax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-E0h] BYREF
  int v15; // [rsp+40h] [rbp-C0h] BYREF
  __int16 v16; // [rsp+44h] [rbp-BCh]
  int v17; // [rsp+48h] [rbp-B8h]
  int v18; // [rsp+4Ch] [rbp-B4h]
  __int64 v19; // [rsp+50h] [rbp-B0h]
  __int64 v20; // [rsp+58h] [rbp-A8h]
  _QWORD v21[8]; // [rsp+100h] [rbp+0h] BYREF

  AnyMultiplexedVm = MiGetAnyMultiplexedVm(0LL, a2);
  MiChargeWsles(AnyMultiplexedVm, -64LL);
  v4 = 0LL;
  v5 = 0LL;
  KeAcquireInStackQueuedSpinLock(&qword_140326D98, &LockHandle);
  if ( (unsigned __int8)MiDecrementSystemCacheViewCount(a1 << 25 >> 16) )
  {
    InsertTailListPte(&qword_140326D80);
  }
  else
  {
    v5 = a1 & 0xFFFFFFFFFFFFF000uLL;
    v6 = a1 & 0xFFFFFFFFFFFFF000uLL;
    v7 = (a1 & 0xFFFFFFFFFFFFF000uLL) + 4096;
    if ( (a1 & 0xFFFFFFFFFFFFF000uLL) < v7 )
    {
      do
      {
        if ( v6 != a1 )
        {
          RemoveListEntryPte(&qword_140326D80, v6);
          if ( MiGetPteLink(*(_QWORD *)(v6 + 24)) == 1 )
          {
            v21[v4] = v6;
            v4 = (unsigned int)(v4 + 1);
          }
          else
          {
            *v9 = 0LL;
            if ( (unsigned int)MiPteInShadowRange(v9, v8) )
              MiWritePteShadow(v10, 0LL);
          }
        }
        v6 += 512LL;
      }
      while ( v6 < v7 );
    }
  }
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  if ( v5 )
  {
    if ( (_DWORD)v4 )
    {
      v11 = v21;
      do
      {
        MiWaitForSystemCacheViewFlush(*v11++);
        --v4;
      }
      while ( v4 );
    }
    v18 = 0;
    v15 = 0;
    v16 = 0;
    v19 = 0LL;
    v20 = 0LL;
    v12 = v5 << 25;
    v17 = 20;
    MiInsertTbFlushEntry(&v15, v12 >> 16, 512LL);
    SystemCacheReverseMap = (void *)MiGetSystemCacheReverseMap(v12 >> 16);
    ExFreePoolWithTag(SystemCacheReverseMap, 0);
    MiSetSystemCacheReverseMap(v12 >> 16, 0LL);
    MiReturnSystemVa(v12 >> 16, (v12 + 0x2000000000LL) >> 16, 8LL, &v15);
  }
}
