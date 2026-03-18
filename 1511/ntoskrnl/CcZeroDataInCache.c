/*
 * XREFs of CcZeroDataInCache @ 0x140015F4C
 * Callers:
 *     CcZeroData @ 0x1403CAF50 (CcZeroData.c)
 * Callees:
 *     CcSetDirtyPinnedData @ 0x14001FFA0 (CcSetDirtyPinnedData.c)
 *     RtlRaiseStatus @ 0x140023A24 (RtlRaiseStatus.c)
 *     IoFreeMdl @ 0x1400395A0 (IoFreeMdl.c)
 *     CcUnpinFileDataEx @ 0x14003A5E0 (CcUnpinFileDataEx.c)
 *     MmUnlockPages @ 0x140067610 (MmUnlockPages.c)
 *     CcPinFileData @ 0x1400A2420 (CcPinFileData.c)
 *     MmProbeAndLockPages @ 0x1400A7230 (MmProbeAndLockPages.c)
 *     MmSetAddressRangeModified @ 0x1400B9910 (MmSetAddressRangeModified.c)
 *     IoAllocateMdl @ 0x1400FC2E0 (IoAllocateMdl.c)
 */

char __fastcall CcZeroDataInCache(int a1, __int64 *a2, unsigned int a3, unsigned __int8 a4)
{
  unsigned int v7; // edi
  __int64 v8; // rbx
  PVOID v9; // rsi
  char v11; // [rsp+50h] [rbp-58h]
  unsigned int Length; // [rsp+54h] [rbp-54h]
  unsigned int Length_4; // [rsp+58h] [rbp-50h]
  PVOID BcbVoid; // [rsp+60h] [rbp-48h] BYREF
  PMDL MemoryDescriptorList; // [rsp+68h] [rbp-40h]
  PVOID VirtualAddress; // [rsp+70h] [rbp-38h] BYREF
  __int64 v17; // [rsp+78h] [rbp-30h] BYREF
  __int64 v18; // [rsp+80h] [rbp-28h] BYREF
  char v19; // [rsp+B8h] [rbp+10h]

  v7 = 0;
  v8 = *a2;
  v18 = *a2;
  BcbVoid = 0LL;
  VirtualAddress = 0LL;
  MemoryDescriptorList = 0LL;
  v19 = 1;
  while ( (unsigned __int8)CcPinFileData(
                             a1,
                             (unsigned int)&v18,
                             a3 - v7,
                             0,
                             1,
                             a4,
                             (__int64)&BcbVoid,
                             (__int64)&VirtualAddress,
                             (__int64)&v17) )
  {
    Length = v17 - v8;
    Length_4 = v17 - v8 + v7;
    MemoryDescriptorList = IoAllocateMdl(VirtualAddress, (int)v17 - (int)v8, 0, 0, 0LL);
    if ( !MemoryDescriptorList )
      RtlRaiseStatus(-1073741670);
    v11 = BYTE1(KeGetCurrentThread()[1].Teb) + 2;
    BYTE1(KeGetCurrentThread()[1].Teb) = 1;
    MmProbeAndLockPages(MemoryDescriptorList, 0, IoReadAccess);
    BYTE1(KeGetCurrentThread()[1].Teb) = v11 - 2;
    LODWORD(v8) = v17;
    v18 = v17;
    MmSetAddressRangeModified(VirtualAddress, Length);
    CcSetDirtyPinnedData(BcbVoid, 0LL);
    CcUnpinFileDataEx(BcbVoid, 0LL, 0LL);
    v9 = 0LL;
    BcbVoid = 0LL;
    MmUnlockPages(MemoryDescriptorList);
    IoFreeMdl(MemoryDescriptorList);
    MemoryDescriptorList = 0LL;
    v7 = Length_4;
    if ( a3 <= Length_4 )
      goto LABEL_8;
  }
  v19 = 0;
  v9 = BcbVoid;
LABEL_8:
  if ( v9 )
    CcUnpinFileDataEx(v9, 0LL, 0LL);
  return v19;
}
