/*
 * XREFs of SmFirstTimeInit @ 0x1404D1E70
 * Callers:
 *     SmProcessCreateRequest @ 0x1404D185C (SmProcessCreateRequest.c)
 * Callees:
 *     ExfAcquirePushLockExclusiveEx @ 0x140020CE0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x140030AD8 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x140042090 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegion @ 0x140042660 (KeLeaveCriticalRegion.c)
 *     KeAbPreAcquire @ 0x140042DA0 (KeAbPreAcquire.c)
 *     SmFpCleanup @ 0x1400F6A78 (SmFpCleanup.c)
 *     MmStoreChargeResidentAvailableForRead @ 0x14011AFF4 (MmStoreChargeResidentAvailableForRead.c)
 *     ?SmStorePrepare@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@@Z @ 0x140142E98 (-SmStorePrepare@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@@Z.c)
 *     SmFpPreAllocate @ 0x140142F28 (SmFpPreAllocate.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     SmFpInitialize @ 0x140208324 (SmFpInitialize.c)
 *     SmRegistrationCtxStart @ 0x140545D38 (SmRegistrationCtxStart.c)
 *     MmStoreRegister @ 0x14054E108 (MmStoreRegister.c)
 *     ExAllocatePrivateWorkerPool @ 0x14054E918 (ExAllocatePrivateWorkerPool.c)
 */

__int64 __fastcall SmFirstTimeInit(int a1)
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 v3; // rax
  signed __int8 v4; // cf
  __int64 v5; // rdi
  int v6; // ecx
  int PrivateWorkerPool; // edi
  unsigned int v9; // [rsp+20h] [rbp-38h] BYREF
  unsigned int v10; // [rsp+28h] [rbp-30h] BYREF
  unsigned int v11; // [rsp+2Ch] [rbp-2Ch]
  int v12; // [rsp+30h] [rbp-28h]

  CurrentThread = KeGetCurrentThread();
  v10 = 1048581;
  v11 = 1048578;
  v12 = 1048596;
  --CurrentThread->KernelApcDisable;
  v3 = KeAbPreAcquire((ULONG_PTR)&qword_140304F98, 0LL, 0LL);
  v4 = _interlockedbittestandset64((volatile signed __int32 *)&qword_140304F98, 0LL);
  v5 = v3;
  if ( v4 )
    ExfAcquirePushLockExclusiveEx(&qword_140304F98, v3, (ULONG_PTR)&qword_140304F98);
  if ( v5 )
    *(_BYTE *)(v5 + 26) |= 1u;
  LOBYTE(v6) = dword_140304F90;
  if ( (dword_140304F90 & 8) == 0 )
  {
    PrivateWorkerPool = SmRegistrationCtxStart(&qword_140305228);
    if ( PrivateWorkerPool < 0 )
      goto LABEL_13;
    LOBYTE(v6) = dword_140304F90 | 8;
    dword_140304F90 |= 8u;
  }
  if ( (v6 & 2) == 0 )
  {
    PrivateWorkerPool = SMKM_STORE_MGR<SM_TRAITS>::SmStorePrepare((__int64)&SmGlobals);
    if ( PrivateWorkerPool >= 0 )
      PrivateWorkerPool = 0;
    if ( PrivateWorkerPool < 0 )
      goto LABEL_13;
    LOBYTE(v6) = dword_140304F90 | 2;
    dword_140304F90 |= 2u;
  }
  if ( (v6 & 0x10) == 0 )
  {
    v6 = ((unsigned __int8)dword_140304F90 ^ (unsigned __int8)(16 * MmStoreChargeResidentAvailableForRead(1LL))) & 0x10 ^ dword_140304F90;
    dword_140304F90 = v6;
    if ( (v6 & 0x10) == 0 )
    {
      PrivateWorkerPool = -1073741670;
      goto LABEL_13;
    }
  }
  if ( dword_140304F94 )
  {
    if ( a1 != dword_140304F94 )
    {
      PrivateWorkerPool = -1073741800;
      goto LABEL_13;
    }
  }
  else
  {
    v9 = (a1 & 0xFFFF000 | 0x10000300u) >> 8;
    v11 = v9 & 0xFFFF0 | 0x100002;
    v10 = v9 & 0xFFFF0 | 0x100005;
    PrivateWorkerPool = SmFpPreAllocate(&dword_140305248, &v10, 3u);
    if ( PrivateWorkerPool < 0 )
      goto LABEL_13;
    PrivateWorkerPool = SmFpPreAllocate(&dword_1403052B8, &v9, 1u);
    if ( PrivateWorkerPool < 0 )
    {
      SmFpCleanup((__int64)&dword_140305248);
      SmFpInitialize((__int64)&dword_140305248);
      goto LABEL_13;
    }
    LOBYTE(v6) = dword_140304F90;
    dword_140304F94 = a1;
  }
  if ( (v6 & 0x20) == 0 )
  {
    PrivateWorkerPool = ExAllocatePrivateWorkerPool(&qword_140304FA8);
    if ( PrivateWorkerPool < 0 )
      goto LABEL_13;
    LOBYTE(v6) = dword_140304F90 | 0x20;
    dword_140304F90 |= 0x20u;
  }
  if ( (v6 & 1) != 0 )
  {
LABEL_12:
    PrivateWorkerPool = 0;
    goto LABEL_13;
  }
  PrivateWorkerPool = MmStoreRegister();
  if ( PrivateWorkerPool >= 0 )
  {
    dword_140304F90 |= 1u;
    goto LABEL_12;
  }
LABEL_13:
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140304F98, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&qword_140304F98);
  KeAbPostRelease((ULONG_PTR)&qword_140304F98);
  KeLeaveCriticalRegion();
  return (unsigned int)PrivateWorkerPool;
}
