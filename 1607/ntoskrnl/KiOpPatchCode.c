/*
 * XREFs of KiOpPatchCode @ 0x1401DB18C
 * Callers:
 *     KiOp_MOVAPS @ 0x1401DB5E0 (KiOp_MOVAPS.c)
 *     KiOp_MOVDQA @ 0x1401DB64C (KiOp_MOVDQA.c)
 * Callees:
 *     KeReleaseGuardedMutex @ 0x14000C5C0 (KeReleaseGuardedMutex.c)
 *     ExAcquireFastMutex @ 0x14002CC20 (ExAcquireFastMutex.c)
 *     MmProbeAndLockPages @ 0x14002ECA0 (MmProbeAndLockPages.c)
 *     MmUnlockPages @ 0x140051600 (MmUnlockPages.c)
 *     MmMapLockedPagesSpecifyCache @ 0x1400DC0C0 (MmMapLockedPagesSpecifyCache.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     ZwProtectVirtualMemory @ 0x14015ABF0 (ZwProtectVirtualMemory.c)
 *     memset @ 0x140171AC0 (memset.c)
 */

__int64 __fastcall KiOpPatchCode(__int64 a1, unsigned __int64 a2, char a3)
{
  NTSTATUS v5; // esi
  unsigned int v7; // edi
  _BYTE *v8; // rax
  ULONG NewAccessProtection; // [rsp+30h] [rbp-78h] BYREF
  SIZE_T NumberOfBytesToProtect; // [rsp+38h] [rbp-70h] BYREF
  PVOID BaseAddress; // [rsp+40h] [rbp-68h] BYREF
  _BYTE MemoryDescriptorList[56]; // [rsp+48h] [rbp-60h] BYREF

  BaseAddress = (PVOID)a2;
  NumberOfBytesToProtect = 1LL;
  ExAcquireFastMutex(&KiUserCodePatchMutex);
  v5 = ZwProtectVirtualMemory(
         (HANDLE)0xFFFFFFFFFFFFFFFFLL,
         &BaseAddress,
         &NumberOfBytesToProtect,
         0x40u,
         &NewAccessProtection);
  if ( v5 >= 0 )
  {
    memset(MemoryDescriptorList, 0, sizeof(MemoryDescriptorList));
    *(_QWORD *)MemoryDescriptorList = 0LL;
    *(_WORD *)&MemoryDescriptorList[8] = 8 * ((((a2 & 0xFFF) + 4096) >> 12) + 6);
    *(_WORD *)&MemoryDescriptorList[10] = 0;
    *(_QWORD *)&MemoryDescriptorList[32] = a2 & 0xFFFFFFFFFFFFF000uLL;
    *(_DWORD *)&MemoryDescriptorList[44] = a2 & 0xFFF;
    *(_DWORD *)&MemoryDescriptorList[40] = 1;
    v7 = 0;
    MmProbeAndLockPages((PMDL)MemoryDescriptorList, 1, IoWriteAccess);
    if ( (MemoryDescriptorList[10] & 5) != 0 )
      v8 = *(_BYTE **)&MemoryDescriptorList[24];
    else
      v8 = MmMapLockedPagesSpecifyCache((PMDL)MemoryDescriptorList, 0, MmCached, 0LL, 0, 0x40000010u);
    if ( v8 )
      *v8 = a3;
    else
      v7 = -1073741670;
    MmUnlockPages((PMDL)MemoryDescriptorList);
    ZwProtectVirtualMemory(
      (HANDLE)0xFFFFFFFFFFFFFFFFLL,
      &BaseAddress,
      &NumberOfBytesToProtect,
      NewAccessProtection,
      &NewAccessProtection);
    KeReleaseGuardedMutex(&KiUserCodePatchMutex);
    return v7;
  }
  else
  {
    KeReleaseGuardedMutex(&KiUserCodePatchMutex);
    return (unsigned int)v5;
  }
}
