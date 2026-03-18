/*
 * XREFs of CcZeroDataInCache @ 0x140079230
 * Callers:
 *     CcZeroData @ 0x1404B124C (CcZeroData.c)
 * Callees:
 *     RtlRaiseStatus @ 0x14001BB3C (RtlRaiseStatus.c)
 *     CcSetDirtyPinnedData @ 0x14002F920 (CcSetDirtyPinnedData.c)
 *     IoFreeMdl @ 0x140031620 (IoFreeMdl.c)
 *     IoAllocateMdl @ 0x140033BF0 (IoAllocateMdl.c)
 *     MmProbeAndLockPages @ 0x140034050 (MmProbeAndLockPages.c)
 *     CcPinFileData @ 0x140051C40 (CcPinFileData.c)
 *     MmSetAddressRangeModified @ 0x14007C280 (MmSetAddressRangeModified.c)
 *     MmUnlockPages @ 0x1400B0D00 (MmUnlockPages.c)
 *     CcUnpinFileDataEx @ 0x1400F2430 (CcUnpinFileDataEx.c)
 */

char __fastcall CcZeroDataInCache(__int64 a1, __int64 *a2, unsigned int a3, char a4)
{
  unsigned int v7; // ebx
  PVOID v8; // rdi
  char v10; // [rsp+50h] [rbp-58h]
  unsigned int Length; // [rsp+54h] [rbp-54h]
  unsigned int Length_4; // [rsp+58h] [rbp-50h]
  PVOID BcbVoid; // [rsp+60h] [rbp-48h] BYREF
  PMDL MemoryDescriptorList; // [rsp+68h] [rbp-40h]
  __int64 v15; // [rsp+70h] [rbp-38h] BYREF
  PVOID VirtualAddress; // [rsp+78h] [rbp-30h] BYREF
  __int64 v17; // [rsp+80h] [rbp-28h] BYREF
  char v18; // [rsp+B8h] [rbp+10h]

  v7 = 0;
  v15 = *a2;
  BcbVoid = 0LL;
  VirtualAddress = 0LL;
  MemoryDescriptorList = 0LL;
  v18 = 1;
  while ( (unsigned __int8)CcPinFileData(
                             a1,
                             &v15,
                             a3 - v7,
                             0,
                             1,
                             a4,
                             (ULONG_PTR *)&BcbVoid,
                             (__int64 *)&VirtualAddress,
                             &v17) )
  {
    Length = v17 - v15;
    Length_4 = v17 - v15 + v7;
    MemoryDescriptorList = IoAllocateMdl(VirtualAddress, (int)v17 - (int)v15, 0, 0, 0LL);
    if ( !MemoryDescriptorList )
      RtlRaiseStatus(-1073741670);
    v10 = BYTE1(KeGetCurrentThread()[1].Teb) + 2;
    BYTE1(KeGetCurrentThread()[1].Teb) = 1;
    MmProbeAndLockPages(MemoryDescriptorList, 0, IoReadAccess);
    BYTE1(KeGetCurrentThread()[1].Teb) = v10 - 2;
    v15 = v17;
    MmSetAddressRangeModified(VirtualAddress, Length);
    CcSetDirtyPinnedData(BcbVoid, 0LL);
    CcUnpinFileDataEx(BcbVoid, 0LL, 0LL);
    v8 = 0LL;
    BcbVoid = 0LL;
    MmUnlockPages(MemoryDescriptorList);
    IoFreeMdl(MemoryDescriptorList);
    MemoryDescriptorList = 0LL;
    v7 = Length_4;
    if ( a3 <= Length_4 )
      goto LABEL_8;
  }
  v18 = 0;
  v8 = BcbVoid;
LABEL_8:
  if ( v8 )
    CcUnpinFileDataEx(v8, 0LL, 0LL);
  return v18;
}
