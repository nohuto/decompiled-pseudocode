/*
 * XREFs of HvIsCellAllocated @ 0x140438890
 * Callers:
 *     CmpValidateHiveSecurityDescriptors @ 0x1403F7AE8 (CmpValidateHiveSecurityDescriptors.c)
 *     CmpCheckValueList @ 0x14043B810 (CmpCheckValueList.c)
 *     CmpCheckKey @ 0x14043C4E0 (CmpCheckKey.c)
 * Callees:
 *     HvpReleaseHCell @ 0x14002CEB0 (HvpReleaseHCell.c)
 *     HvpGetCellContextReinitialize @ 0x14002CF68 (HvpGetCellContextReinitialize.c)
 *     HvpMapEntryReleaseBinAddress @ 0x14002CF80 (HvpMapEntryReleaseBinAddress.c)
 *     HvpMapEntryGetBinAddress @ 0x14002D1E0 (HvpMapEntryGetBinAddress.c)
 *     HvpMapEntryIsDiscardable @ 0x14002D250 (HvpMapEntryIsDiscardable.c)
 *     RtlClearBits @ 0x14002D260 (RtlClearBits.c)
 *     HvpGetBinContextInitialize @ 0x14002D300 (HvpGetBinContextInitialize.c)
 */

char __fastcall HvIsCellAllocated(__int64 a1, unsigned int a2)
{
  unsigned __int64 v3; // rdi
  __int64 v4; // r8
  _RTL_BITMAP *v5; // r10
  unsigned int v6; // ebx
  __int64 v7; // rax
  __int64 v8; // rax
  struct _EX_RUNDOWN_REF *v9; // rbp
  __int64 v10; // rax
  __int64 v11; // rcx
  _DWORD *v12; // rbx
  unsigned __int64 BinAddress; // rax
  __int64 v14; // rcx
  unsigned int v15; // r8d
  unsigned int v16; // edx
  __int64 v17; // r10
  bool v18; // bl
  __int16 v20; // [rsp+40h] [rbp+8h] BYREF
  char v21; // [rsp+58h] [rbp+20h] BYREF

  v3 = a2;
  HvpGetCellContextReinitialize((__int64)&v21);
  HvpGetBinContextInitialize(&v20);
  if ( (*(_BYTE *)(a1 + 124) & 1) != 0 )
    return 1;
  v6 = (unsigned int)v3 >> 31;
  if ( (v3 & 0x7FFFFFFF) >= *(_DWORD *)(632LL * ((unsigned int)v3 >> 31) + a1 + 1400) || (v3 & 7) != 0 )
    return 0;
  if ( v4 && (v3 & 0x80000000) == 0LL )
  {
    if ( _bittest64(*(const signed __int64 **)(v4 + 8), (unsigned int)v3 >> 3) )
    {
      RtlClearBits(v5, (unsigned int)v3 >> 3, 1u);
      goto LABEL_8;
    }
    return 0;
  }
LABEL_8:
  v7 = a1 + 632LL * v6;
  if ( (unsigned int)v3 + (v6 << 31) >= *(_DWORD *)(v7 + 1400) )
    return 0;
  v8 = *(_QWORD *)(*(_QWORD *)(v7 + 1408) + 8 * ((v3 >> 21) & 0x3FF));
  v9 = (struct _EX_RUNDOWN_REF *)(v8 + 40 * ((v3 >> 12) & 0x1FF));
  if ( !v9 || HvpMapEntryIsDiscardable(v8 + 40 * ((v3 >> 12) & 0x1FF)) )
    return 0;
  v10 = (*(__int64 (__fastcall **)(__int64, _QWORD, char *))(a1 + 8))(a1, (unsigned int)v3, &v21);
  if ( !v10 )
    return 1;
  v12 = (_DWORD *)(v10 - 4);
  if ( v10 == 4 )
    return 1;
  BinAddress = HvpMapEntryGetBinAddress(v11, v9, &v20);
  v14 = (unsigned int)*v12;
  v15 = (_DWORD)v12 - BinAddress;
  v16 = -*v12;
  v18 = 0;
  if ( (int)v14 < 0 )
  {
    v14 = v16 - 8;
    if ( (unsigned int)v14 <= 0xFFFF8 )
    {
      v17 = *(unsigned int *)(BinAddress + 8);
      v14 = v17 - 32;
      if ( v16 <= (unsigned __int64)(v17 - 32) && v15 - *v12 <= (unsigned int)v17 && v15 >= 0x20 )
        v18 = 1;
    }
  }
  if ( BinAddress )
    HvpMapEntryReleaseBinAddress(v14, v9, &v20);
  HvpReleaseHCell(a1);
  return v18;
}
