/*
 * XREFs of CcZeroDataInCache @ 0x14006D5D0
 * Callers:
 *     CcZeroData @ 0x1404584CC (CcZeroData.c)
 * Callees:
 *     MmSetAddressRangeModified @ 0x140016FA0 (MmSetAddressRangeModified.c)
 *     IoAllocateMdl @ 0x14002EF90 (IoAllocateMdl.c)
 *     MmProbeAndLockPages @ 0x14002F120 (MmProbeAndLockPages.c)
 *     CcPinFileData @ 0x140031DE0 (CcPinFileData.c)
 *     MmUnlockPages @ 0x140051A80 (MmUnlockPages.c)
 *     CcSetDirtyPinnedData @ 0x14006F270 (CcSetDirtyPinnedData.c)
 *     IoFreeMdl @ 0x140072230 (IoFreeMdl.c)
 *     CcUnpinFileDataEx @ 0x1400CF860 (CcUnpinFileDataEx.c)
 *     RtlRaiseStatus @ 0x1400F6738 (RtlRaiseStatus.c)
 */

char __fastcall CcZeroDataInCache(__int64 a1, __int64 *a2, unsigned int a3, char a4)
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
  while ( (unsigned __int8)CcPinFileData(a1, &v18, a3 - v7, 0, 1, a4, (ULONG_PTR *)&BcbVoid, &VirtualAddress, &v17) )
  {
    Length = v17 - v8;
    Length_4 = v17 - v8 + v7;
    MemoryDescriptorList = IoAllocateMdl(VirtualAddress, (int)v17 - (int)v8, 0, 0, 0LL);
    if ( !MemoryDescriptorList )
      RtlRaiseStatus(-1073741670);
    v11 = BYTE5(KeGetCurrentThread()[1].Queue) + 2;
    BYTE5(KeGetCurrentThread()[1].Queue) = 1;
    MmProbeAndLockPages(MemoryDescriptorList, 0, IoReadAccess);
    BYTE5(KeGetCurrentThread()[1].Queue) = v11 - 2;
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
