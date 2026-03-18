/*
 * XREFs of SmFirstTimeInit @ 0x1404F9AFC
 * Callers:
 *     SmProcessCreateRequest @ 0x1404F946C (SmProcessCreateRequest.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     SmFpCleanup @ 0x1400DAA84 (SmFpCleanup.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400F30E0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1400F36F8 (ExfTryToWakePushLock.c)
 *     MmStoreChargeResidentAvailableForRead @ 0x14014F32C (MmStoreChargeResidentAvailableForRead.c)
 *     ?SmStorePrepare@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@@Z @ 0x140170D7C (-SmStorePrepare@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@@Z.c)
 *     SmFpPreAllocate @ 0x140170E0C (SmFpPreAllocate.c)
 *     SmFpInitialize @ 0x1402575B8 (SmFpInitialize.c)
 *     SmRegistrationCtxStart @ 0x1405BD204 (SmRegistrationCtxStart.c)
 *     MmStoreRegister @ 0x1405C5F98 (MmStoreRegister.c)
 *     ExAllocatePrivateWorkerPool @ 0x1405C660C (ExAllocatePrivateWorkerPool.c)
 */

__int64 __fastcall SmFirstTimeInit(int a1, __int64 a2, __int64 a3, __int64 a4)
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // r9
  signed __int8 v10; // cf
  __int64 v11; // rdi
  int v12; // ecx
  int PrivateWorkerPool; // edi
  struct _KTHREAD *v14; // rcx
  __int16 v15; // ax
  unsigned int v17; // [rsp+48h] [rbp+10h] BYREF
  unsigned int v18; // [rsp+50h] [rbp+18h] BYREF
  unsigned int v19; // [rsp+54h] [rbp+1Ch]

  v18 = 2097156;
  v19 = 2097154;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v6 = KeAbPreAcquire((ULONG_PTR)&qword_140352D08, 0LL, 0LL, a4);
  v10 = _interlockedbittestandset64((volatile signed __int32 *)&qword_140352D08, 0LL);
  v11 = v6;
  if ( v10 )
    ExfAcquirePushLockExclusiveEx(&qword_140352D08, v6, (ULONG_PTR)&qword_140352D08, v9);
  if ( v11 )
    *(_BYTE *)(v11 + 26) |= 1u;
  LOBYTE(v12) = dword_140352D00;
  if ( (dword_140352D00 & 8) == 0 )
  {
    PrivateWorkerPool = SmRegistrationCtxStart(&qword_140352F98);
    if ( PrivateWorkerPool < 0 )
      goto LABEL_13;
    LOBYTE(v12) = dword_140352D00 | 8;
    dword_140352D00 |= 8u;
  }
  if ( (v12 & 2) == 0 )
  {
    PrivateWorkerPool = SMKM_STORE_MGR<SM_TRAITS>::SmStorePrepare((__int64)SmGlobals);
    if ( PrivateWorkerPool >= 0 )
      PrivateWorkerPool = 0;
    if ( PrivateWorkerPool < 0 )
      goto LABEL_13;
    LOBYTE(v12) = dword_140352D00 | 2;
    dword_140352D00 |= 2u;
  }
  if ( (v12 & 0x10) == 0 )
  {
    v12 = ((unsigned __int8)dword_140352D00 ^ (unsigned __int8)(16
                                                              * MmStoreChargeResidentAvailableForRead(1LL, v7, v8, v9))) & 0x10 ^ dword_140352D00;
    dword_140352D00 = v12;
    if ( (v12 & 0x10) == 0 )
    {
      PrivateWorkerPool = -1073741670;
      goto LABEL_13;
    }
  }
  if ( dword_140352D04 )
  {
    if ( a1 != dword_140352D04 )
    {
      PrivateWorkerPool = -1073741800;
      goto LABEL_13;
    }
  }
  else
  {
    v17 = (a1 & 0xFFFF000 | 0x10000300u) >> 8;
    v19 = v17 & 0xFFFF0 | 0x200002;
    v18 = v17 & 0xFFFF0 | 0x200004;
    PrivateWorkerPool = SmFpPreAllocate((__int64)&unk_140352FB8, &v18, 2u);
    if ( PrivateWorkerPool < 0 )
      goto LABEL_13;
    PrivateWorkerPool = SmFpPreAllocate((__int64)&unk_140353020, &v17, 1u);
    if ( PrivateWorkerPool < 0 )
    {
      SmFpCleanup((__int64)&unk_140352FB8);
      SmFpInitialize((__int64)&unk_140352FB8);
      goto LABEL_13;
    }
    LOBYTE(v12) = dword_140352D00;
    dword_140352D04 = a1;
  }
  if ( (v12 & 0x20) == 0 )
  {
    PrivateWorkerPool = ExAllocatePrivateWorkerPool(&qword_140352D18);
    if ( PrivateWorkerPool < 0 )
      goto LABEL_13;
    LOBYTE(v12) = dword_140352D00 | 0x20;
    dword_140352D00 |= 0x20u;
  }
  if ( (v12 & 1) != 0 )
  {
LABEL_12:
    PrivateWorkerPool = 0;
    goto LABEL_13;
  }
  PrivateWorkerPool = MmStoreRegister();
  if ( PrivateWorkerPool >= 0 )
  {
    dword_140352D00 |= 1u;
    goto LABEL_12;
  }
LABEL_13:
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140352D08, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&qword_140352D08);
  KeAbPostRelease((ULONG_PTR)&qword_140352D08);
  v14 = KeGetCurrentThread();
  v15 = v14->KernelApcDisable + 1;
  v14->KernelApcDisable = v15;
  if ( !v15
    && ($CD287064E7C9F7953DE243E927CFCB99 *)v14->ApcState.ApcListHead[0].Flink != &v14->152
    && !v14->SpecialApcDisable )
  {
    KiCheckForKernelApcDelivery();
  }
  return (unsigned int)PrivateWorkerPool;
}
