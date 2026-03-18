/*
 * XREFs of ?SmStTrimWsStoreBatch@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@PEAKPEAPEAXKK@Z @ 0x140252898
 * Callers:
 *     ?SmStTrimWsStore@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@@Z @ 0x140252598 (-SmStTrimWsStore@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@@Z.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     ExfAcquirePushLockSharedEx @ 0x1400F2F00 (ExfAcquirePushLockSharedEx.c)
 *     ExfReleasePushLockShared @ 0x1400F3600 (ExfReleasePushLockShared.c)
 *     ?SmStUnmapVirtualRegion@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@KKKPEAXK@Z @ 0x140147B04 (-SmStUnmapVirtualRegion@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@KKKPEAXK@Z.c)
 *     ZwUnlockVirtualMemory @ 0x1401825B0 (ZwUnlockVirtualMemory.c)
 */

__int16 __fastcall SMKM_STORE<SM_TRAITS>::SmStTrimWsStoreBatch(
        __int64 a1,
        unsigned int *a2,
        PVOID *a3,
        unsigned int a4)
{
  __int64 v4; // rsi
  volatile signed __int64 *v6; // rbx
  __int64 v9; // r9
  struct _KTHREAD *CurrentThread; // rcx
  __int16 v11; // ax
  __int64 v12; // rdi
  struct _KTHREAD *v13; // rax
  __int64 v14; // rdi
  __int64 v15; // r8
  __int64 v16; // r9
  signed __int64 v17; // rax
  __int64 v18; // rbx
  __int64 v20; // [rsp+20h] [rbp-48h]
  PVOID BaseAddress; // [rsp+30h] [rbp-38h] BYREF
  ULONG_PTR NumberOfBytesToUnlock; // [rsp+70h] [rbp+8h] BYREF

  v4 = a4;
  v6 = (volatile signed __int64 *)(a1 + 4488);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 4488), 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)(a1 + 4488));
  KeAbPostRelease((ULONG_PTR)v6);
  CurrentThread = KeGetCurrentThread();
  v11 = CurrentThread->SpecialApcDisable + 1;
  CurrentThread->SpecialApcDisable = v11;
  if ( !v11 && ($CD287064E7C9F7953DE243E927CFCB99 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
    KiCheckForKernelApcDelivery();
  NumberOfBytesToUnlock = *(unsigned int *)(a1 + 4672);
  if ( (_DWORD)v4 )
  {
    v12 = v4;
    do
    {
      BaseAddress = *a3;
      ZwUnlockVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, &NumberOfBytesToUnlock, 1u);
      ++a3;
      --v12;
    }
    while ( v12 );
  }
  v13 = KeGetCurrentThread();
  --v13->SpecialApcDisable;
  v14 = KeAbPreAcquire((ULONG_PTR)v6, 0LL, 0LL, v9);
  v17 = _InterlockedCompareExchange64(v6, 17LL, 0LL);
  if ( v17 )
    LOWORD(v17) = ExfAcquirePushLockSharedEx((unsigned __int64 *)v6, v14, (ULONG_PTR)v6, v16);
  if ( v14 )
  {
    v17 = *(_QWORD *)(v14 + 32);
    *(_BYTE *)(v14 + 26) |= 1u;
  }
  if ( (_DWORD)v4 )
  {
    v18 = v4;
    do
    {
      LOWORD(v17) = SMKM_STORE<SM_TRAITS>::SmStUnmapVirtualRegion(a1, *a2++, v15, v16, v20, 2u);
      --v18;
    }
    while ( v18 );
  }
  return v17;
}
