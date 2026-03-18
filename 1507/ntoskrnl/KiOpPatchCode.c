/*
 * XREFs of KiOpPatchCode @ 0x14020A738
 * Callers:
 *     KiOp_MOVAPS @ 0x14020A984 (KiOp_MOVAPS.c)
 *     KiOp_MOVDQA @ 0x14020A9F0 (KiOp_MOVDQA.c)
 * Callees:
 *     MmProbeAndLockPages @ 0x140034050 (MmProbeAndLockPages.c)
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     MmMapLockedPagesSpecifyCache @ 0x1400ABA30 (MmMapLockedPagesSpecifyCache.c)
 *     MmUnlockPages @ 0x1400B0D00 (MmUnlockPages.c)
 *     ExpAcquireFastMutexContended @ 0x1400F2E54 (ExpAcquireFastMutexContended.c)
 *     ExpReleaseFastMutexContended @ 0x1400F3D1C (ExpReleaseFastMutexContended.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     ZwProtectVirtualMemory @ 0x14017F9F0 (ZwProtectVirtualMemory.c)
 *     memset @ 0x140195A80 (memset.c)
 */

__int64 __fastcall KiOpPatchCode(__int64 a1, unsigned __int64 a2, char a3, __int64 a4)
{
  __int64 v6; // rax
  __int64 v7; // r14
  unsigned __int8 CurrentIrql; // r13
  NTSTATUS v9; // r14d
  unsigned __int8 v10; // bl
  signed __int32 v11; // eax
  _BYTE *v12; // rax
  signed __int32 v13; // eax
  ULONG NewAccessProtection; // [rsp+30h] [rbp-88h] BYREF
  SIZE_T NumberOfBytesToProtect; // [rsp+38h] [rbp-80h] BYREF
  PVOID BaseAddress; // [rsp+40h] [rbp-78h] BYREF
  _BYTE MemoryDescriptorList[56]; // [rsp+48h] [rbp-70h] BYREF

  BaseAddress = (PVOID)a2;
  NumberOfBytesToProtect = 1LL;
  v6 = KeAbPreAcquire((ULONG_PTR)&KiUserCodePatchMutex, 0LL, 0LL, a4);
  v7 = v6;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(1uLL);
  if ( !_interlockedbittestandreset((volatile signed __int32 *)&KiUserCodePatchMutex, 0) )
    ExpAcquireFastMutexContended((ULONG_PTR)&KiUserCodePatchMutex, v6);
  if ( v7 )
    *(_BYTE *)(v7 + 26) |= 1u;
  qword_140332848 = (__int64)KeGetCurrentThread();
  dword_140332870 = CurrentIrql;
  v9 = ZwProtectVirtualMemory(
         (HANDLE)0xFFFFFFFFFFFFFFFFLL,
         &BaseAddress,
         &NumberOfBytesToProtect,
         0x40u,
         &NewAccessProtection);
  if ( v9 >= 0 )
  {
    memset(MemoryDescriptorList, 0, sizeof(MemoryDescriptorList));
    *(_QWORD *)MemoryDescriptorList = 0LL;
    *(_WORD *)&MemoryDescriptorList[8] = 8 * ((((a2 & 0xFFF) + 4096) >> 12) + 6);
    *(_WORD *)&MemoryDescriptorList[10] = 0;
    *(_QWORD *)&MemoryDescriptorList[32] = a2 & 0xFFFFFFFFFFFFF000uLL;
    *(_DWORD *)&MemoryDescriptorList[44] = a2 & 0xFFF;
    *(_DWORD *)&MemoryDescriptorList[40] = 1;
    v9 = 0;
    MmProbeAndLockPages((PMDL)MemoryDescriptorList, 1, IoWriteAccess);
    if ( (MemoryDescriptorList[10] & 5) != 0 )
      v12 = *(_BYTE **)&MemoryDescriptorList[24];
    else
      v12 = MmMapLockedPagesSpecifyCache((PMDL)MemoryDescriptorList, 0, MmCached, 0LL, 0, 0x40000010u);
    if ( v12 )
      *v12 = a3;
    else
      v9 = -1073741670;
    MmUnlockPages((PMDL)MemoryDescriptorList);
    ZwProtectVirtualMemory(
      (HANDLE)0xFFFFFFFFFFFFFFFFLL,
      &BaseAddress,
      &NumberOfBytesToProtect,
      NewAccessProtection,
      &NewAccessProtection);
    qword_140332848 = 0LL;
    v10 = dword_140332870;
    v13 = _InterlockedCompareExchange((volatile signed __int32 *)&KiUserCodePatchMutex, 1, 0);
    if ( v13 )
      ExpReleaseFastMutexContended((volatile signed __int32 *)&KiUserCodePatchMutex, v13);
  }
  else
  {
    qword_140332848 = 0LL;
    v10 = dword_140332870;
    v11 = _InterlockedCompareExchange((volatile signed __int32 *)&KiUserCodePatchMutex, 1, 0);
    if ( v11 )
      ExpReleaseFastMutexContended((volatile signed __int32 *)&KiUserCodePatchMutex, v11);
  }
  __writecr8(v10);
  KeAbPostRelease((ULONG_PTR)&KiUserCodePatchMutex);
  return (unsigned int)v9;
}
