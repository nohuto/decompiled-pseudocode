/*
 * XREFs of HvlFinalizeSecureImageHash @ 0x1402700F0
 * Callers:
 *     <none>
 * Callees:
 *     MmProbeAndLockPages @ 0x140034050 (MmProbeAndLockPages.c)
 *     MmUnlockPages @ 0x1400B0D00 (MmUnlockPages.c)
 *     HvlpEnterIumSecureMode @ 0x1401289D4 (HvlpEnterIumSecureMode.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 */

__int64 __fastcall HvlFinalizeSecureImageHash(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  struct _MDL MemoryDescriptorList; // [rsp+20h] [rbp-C8h] BYREF
  __int128 v6; // [rsp+50h] [rbp-98h]
  unsigned __int8 v7[8]; // [rsp+60h] [rbp-88h] BYREF
  __int64 v8; // [rsp+68h] [rbp-80h]
  __int64 v9; // [rsp+70h] [rbp-78h]
  __int128 v10; // [rsp+78h] [rbp-70h]

  v2 = a2;
  MemoryDescriptorList.Next = 0LL;
  MemoryDescriptorList.Size = 8 * ((((unsigned __int64)(a2 & 0xFFF) + 4160) >> 12) + 6);
  MemoryDescriptorList.MdlFlags = 0;
  MemoryDescriptorList.StartVa = (PVOID)(a2 & 0xFFFFFFFFFFFFF000uLL);
  MemoryDescriptorList.ByteOffset = a2 & 0xFFF;
  MemoryDescriptorList.ByteCount = 65;
  MmProbeAndLockPages(&MemoryDescriptorList, 0, IoWriteAccess);
  v8 = a1;
  v9 = v2;
  v10 = v6;
  LODWORD(v2) = HvlpEnterIumSecureMode(1u, 20, 0, v7);
  MmUnlockPages(&MemoryDescriptorList);
  return (unsigned int)v2;
}
