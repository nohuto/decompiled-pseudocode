/*
 * XREFs of SmFirstTimeInit @ 0x1403E4E40
 * Callers:
 *     SmProcessCreateRequest @ 0x1403E517C (SmProcessCreateRequest.c)
 * Callees:
 *     SmFpCleanup @ 0x140003F2C (SmFpCleanup.c)
 *     KeAbPreAcquire @ 0x14002BD30 (KeAbPreAcquire.c)
 *     KeLeaveCriticalRegion @ 0x140069880 (KeLeaveCriticalRegion.c)
 *     KeAbPostRelease @ 0x14006AA40 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400C5F10 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1400C65D8 (ExfTryToWakePushLock.c)
 *     KiStackAttachProcess @ 0x1400CB090 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x1400CC6C0 (KiUnstackDetachProcess.c)
 *     MmStoreChargeResidentAvailableForRead @ 0x14012F2F0 (MmStoreChargeResidentAvailableForRead.c)
 *     ?SmStorePrepare@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@@Z @ 0x140148DBC (-SmStorePrepare@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@@Z.c)
 *     SmFpPreAllocate @ 0x140148E48 (SmFpPreAllocate.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     strcpy_s @ 0x1401531F4 (strcpy_s.c)
 *     ZwClose @ 0x14015A3D0 (ZwClose.c)
 *     SmFpInitialize @ 0x140220570 (SmFpInitialize.c)
 *     ObReferenceObjectByHandle @ 0x14044FC10 (ObReferenceObjectByHandle.c)
 *     MmStoreRegister @ 0x140568500 (MmStoreRegister.c)
 *     ExAllocatePrivateWorkerPool @ 0x140575A48 (ExAllocatePrivateWorkerPool.c)
 *     PsCreateMinimalProcess @ 0x14057E7B8 (PsCreateMinimalProcess.c)
 *     SmRegistrationCtxStart @ 0x14057F46C (SmRegistrationCtxStart.c)
 */

__int64 __fastcall SmFirstTimeInit(int a1)
{
  unsigned __int64 v1; // rbp
  struct _KTHREAD *CurrentThread; // rax
  _BYTE *v4; // rax
  __int64 v5; // rdx
  signed __int8 v6; // cf
  _BYTE *v7; // rdi
  __int64 v8; // rcx
  __int64 v9; // rdi
  int PrivateWorkerPool; // edi
  unsigned int v12; // ecx
  __int64 v13; // r8
  _BYTE v14[96]; // [rsp+C0h] [rbp+C0h] BYREF

  v1 = (unsigned __int64)v14 & 0xFFFFFFFFFFFFFFE0uLL;
  CurrentThread = KeGetCurrentThread();
  *(_DWORD *)(v1 + 72) = 1048581;
  *(_DWORD *)(v1 + 76) = 1048578;
  *(_DWORD *)(v1 + 80) = 1048596;
  --CurrentThread->KernelApcDisable;
  v4 = (_BYTE *)KeAbPreAcquire((ULONG_PTR)&qword_1403BF128, 0LL, 0);
  v6 = _interlockedbittestandset64((volatile signed __int32 *)&qword_1403BF128, 0LL);
  v7 = v4;
  if ( v6 )
    ExfAcquirePushLockExclusiveEx(&qword_1403BF128, v4, (ULONG_PTR)&qword_1403BF128);
  if ( v7 )
    v7[26] |= 1u;
  v8 = (unsigned int)dword_1403BF110;
  if ( (dword_1403BF110 & 8) == 0 )
  {
    PrivateWorkerPool = SmRegistrationCtxStart(&qword_1403BF3B8);
    if ( PrivateWorkerPool < 0 )
      goto LABEL_15;
    v8 = dword_1403BF110 | 8u;
    dword_1403BF110 |= 8u;
  }
  if ( (v8 & 2) == 0 )
  {
    PrivateWorkerPool = SMKM_STORE_MGR<SM_TRAITS>::SmStorePrepare((__int64)&SmGlobals);
    if ( PrivateWorkerPool >= 0 )
      PrivateWorkerPool = 0;
    if ( PrivateWorkerPool < 0 )
      goto LABEL_15;
    v8 = dword_1403BF110 | 2u;
    dword_1403BF110 |= 2u;
  }
  if ( (v8 & 0x10) == 0 )
  {
    v8 = ((unsigned __int8)dword_1403BF110 ^ (16 * MmStoreChargeResidentAvailableForRead(1LL))) & 0x10 ^ (unsigned int)dword_1403BF110;
    dword_1403BF110 = v8;
    if ( (v8 & 0x10) == 0 )
    {
      PrivateWorkerPool = -1073741670;
      goto LABEL_15;
    }
  }
  if ( dword_1403BF114 )
  {
    if ( a1 != dword_1403BF114 )
    {
      PrivateWorkerPool = -1073741800;
      goto LABEL_15;
    }
  }
  else
  {
    v12 = (a1 & 0xFFFF000 | 0x10000300u) >> 8;
    *(_DWORD *)v1 = v12;
    *(_DWORD *)(((unsigned __int64)v14 & 0xFFFFFFFFFFFFFFE0uLL) + 0x4C) = v12 & 0xFFFF0 | 0x100002;
    *(_DWORD *)(((unsigned __int64)v14 & 0xFFFFFFFFFFFFFFE0uLL) + 0x48) = v12 & 0xFFFF0 | 0x100005;
    PrivateWorkerPool = SmFpPreAllocate(&dword_1403BF3D8, (unsigned int *)(v1 + 72), 3u);
    if ( PrivateWorkerPool < 0 )
      goto LABEL_15;
    PrivateWorkerPool = SmFpPreAllocate(
                          &dword_1403BF448,
                          (unsigned int *)((unsigned __int64)v14 & 0xFFFFFFFFFFFFFFE0uLL),
                          1u);
    if ( PrivateWorkerPool < 0 )
    {
      SmFpCleanup((__int64)&dword_1403BF3D8);
      SmFpInitialize((__int64)&dword_1403BF3D8);
      goto LABEL_15;
    }
    v8 = (unsigned int)dword_1403BF110;
    dword_1403BF114 = a1;
  }
  if ( (v8 & 0x20) == 0 )
  {
    PrivateWorkerPool = ExAllocatePrivateWorkerPool(&qword_1403BF138);
    if ( PrivateWorkerPool < 0 )
      goto LABEL_15;
    v8 = dword_1403BF110 | 0x20u;
    dword_1403BF110 |= 0x20u;
  }
  if ( qword_1403BF118 )
  {
    v9 = qword_1403BF120;
  }
  else
  {
    KiStackAttachProcess(PsInitialSystemProcess, 0, v1 + 24);
    LOBYTE(v13) = BYTE2(PsInitialSystemProcess[2].ActiveProcessors.Bitmap[0]);
    PrivateWorkerPool = PsCreateMinimalProcess(PsInitialSystemProcess, 0LL, v13, 0LL, 0, 0, v1 + 8);
    KiUnstackDetachProcess((struct _KTHREAD *)(v1 + 24), 0);
    if ( PrivateWorkerPool < 0 )
      goto LABEL_15;
    PrivateWorkerPool = ObReferenceObjectByHandle(
                          *(HANDLE *)(((unsigned __int64)v14 & 0xFFFFFFFFFFFFFFE0uLL) + 8),
                          0,
                          0LL,
                          0,
                          (PVOID *)(v1 + 16),
                          0LL);
    if ( PrivateWorkerPool < 0 )
    {
      ZwClose(*(HANDLE *)(((unsigned __int64)v14 & 0xFFFFFFFFFFFFFFE0uLL) + 8));
      goto LABEL_15;
    }
    v9 = *(_QWORD *)(((unsigned __int64)v14 & 0xFFFFFFFFFFFFFFE0uLL) + 0x10);
    strcpy_s((char *)(v9 + 1104), 0xFuLL, "MemCompression");
    v8 = (unsigned int)dword_1403BF110;
    qword_1403BF118 = *(_QWORD *)(((unsigned __int64)v14 & 0xFFFFFFFFFFFFFFE0uLL) + 8);
    qword_1403BF120 = v9;
  }
  if ( (v8 & 1) != 0 )
  {
LABEL_14:
    PrivateWorkerPool = 0;
    goto LABEL_15;
  }
  PrivateWorkerPool = MmStoreRegister(v8, v5, v9);
  if ( PrivateWorkerPool >= 0 )
  {
    dword_1403BF110 |= 1u;
    goto LABEL_14;
  }
LABEL_15:
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_1403BF128, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&qword_1403BF128);
  KeAbPostRelease((ULONG_PTR)&qword_1403BF128);
  KeLeaveCriticalRegion();
  return (unsigned int)PrivateWorkerPool;
}
