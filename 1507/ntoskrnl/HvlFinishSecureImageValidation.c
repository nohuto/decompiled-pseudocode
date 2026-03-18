/*
 * XREFs of HvlFinishSecureImageValidation @ 0x1402701CC
 * Callers:
 *     <none>
 * Callees:
 *     MmProbeAndLockPages @ 0x140034050 (MmProbeAndLockPages.c)
 *     MmUnlockPages @ 0x1400B0D00 (MmUnlockPages.c)
 *     HvlpEnterIumSecureMode @ 0x1401289D4 (HvlpEnterIumSecureMode.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 */

__int64 __fastcall HvlFinishSecureImageValidation(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        unsigned __int8 a4,
        _BYTE *a5,
        __int64 a6,
        _QWORD *a7,
        _DWORD *a8)
{
  __int64 v9; // rsi
  unsigned int v12; // ebx
  struct _MDL MemoryDescriptorList; // [rsp+30h] [rbp-D8h] BYREF
  __int128 v15; // [rsp+60h] [rbp-A8h]
  unsigned __int8 v16[8]; // [rsp+70h] [rbp-98h] BYREF
  __int64 v17; // [rsp+78h] [rbp-90h]
  __int64 v18; // [rsp+80h] [rbp-88h]
  __int64 v19; // [rsp+88h] [rbp-80h]
  __int64 v20; // [rsp+90h] [rbp-78h]
  __int64 v21; // [rsp+98h] [rbp-70h]
  __int128 v22; // [rsp+A0h] [rbp-68h]

  v9 = a3;
  MemoryDescriptorList.Next = 0LL;
  MemoryDescriptorList.Size = 8 * ((((unsigned __int64)(a6 & 0xFFF) + 0x1FFF) >> 12) + 6);
  MemoryDescriptorList.MdlFlags = 0;
  MemoryDescriptorList.StartVa = (PVOID)(a6 & 0xFFFFFFFFFFFFF000uLL);
  MemoryDescriptorList.ByteOffset = a6 & 0xFFF;
  MemoryDescriptorList.ByteCount = 4096;
  MmProbeAndLockPages(&MemoryDescriptorList, 0, IoWriteAccess);
  v17 = a1;
  v18 = a2;
  v19 = v9;
  v20 = a4;
  v21 = a6;
  v22 = v15;
  v12 = HvlpEnterIumSecureMode(1u, 21, 0, v16);
  *a5 = v18;
  *a7 = v19;
  *a8 = v20;
  MmUnlockPages(&MemoryDescriptorList);
  return v12;
}
