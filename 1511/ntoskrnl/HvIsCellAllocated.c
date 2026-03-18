/*
 * XREFs of HvIsCellAllocated @ 0x1403F94C0
 * Callers:
 *     CmpValidateHiveSecurityDescriptors @ 0x1403DDA84 (CmpValidateHiveSecurityDescriptors.c)
 *     CmpCheckValueList @ 0x140403CF0 (CmpCheckValueList.c)
 *     CmpCheckKey @ 0x140404270 (CmpCheckKey.c)
 * Callees:
 *     HvpMapEntryGetBinAddress @ 0x14003B3D0 (HvpMapEntryGetBinAddress.c)
 *     HvpMapEntryIsDiscardable @ 0x14003B420 (HvpMapEntryIsDiscardable.c)
 *     RtlClearBits @ 0x14003B430 (RtlClearBits.c)
 *     HvpReleaseHCell @ 0x140040C50 (HvpReleaseHCell.c)
 *     HvpMapEntryReleaseBlockAddress @ 0x14014FEAC (HvpMapEntryReleaseBlockAddress.c)
 */

char __fastcall HvIsCellAllocated(__int64 a1, unsigned int a2, __int64 a3)
{
  char v3; // al
  char v4; // r14
  unsigned __int64 v5; // rdi
  unsigned int v7; // ebx
  __int64 v8; // rax
  __int64 v9; // rax
  struct _EX_RUNDOWN_REF *v10; // rbp
  __int64 v11; // rax
  __int64 v12; // rcx
  _DWORD *v13; // rbx
  unsigned __int64 BinAddress; // rax
  __int64 v15; // rcx
  unsigned int v16; // r9d
  unsigned int v17; // r8d
  __int64 v18; // r10
  _DWORD v20[10]; // [rsp+20h] [rbp-28h] BYREF
  BOOLEAN v21; // [rsp+50h] [rbp+8h] BYREF
  int v22; // [rsp+68h] [rbp+20h] BYREF

  v3 = *(_BYTE *)(a1 + 124);
  v4 = 1;
  v5 = a2;
  v22 = -1;
  if ( (v3 & 1) != 0 )
    return 1;
  v7 = a2 >> 31;
  if ( (a2 & 0x7FFFFFFF) >= *(_DWORD *)(632LL * (a2 >> 31) + a1 + 1400) || (a2 & 7) != 0 )
    return 0;
  if ( a3 && (a2 & 0x80000000) == 0 )
  {
    if ( _bittest64(*(const signed __int64 **)(a3 + 8), a2 >> 3) )
    {
      RtlClearBits((PRTL_BITMAP)a3, a2 >> 3, 1u);
      goto LABEL_8;
    }
    return 0;
  }
LABEL_8:
  v8 = a1 + 632LL * v7;
  if ( (unsigned int)v5 + (v7 << 31) >= *(_DWORD *)(v8 + 1400) )
    return 0;
  v9 = *(_QWORD *)(*(_QWORD *)(v8 + 1408) + 8 * ((v5 >> 21) & 0x3FF));
  v10 = (struct _EX_RUNDOWN_REF *)(v9 + 40 * ((v5 >> 12) & 0x1FF));
  if ( !v10 || HvpMapEntryIsDiscardable(v9 + 40 * ((v5 >> 12) & 0x1FF)) )
    return 0;
  v11 = (*(__int64 (__fastcall **)(__int64, _QWORD, int *))(a1 + 8))(a1, (unsigned int)v5, &v22);
  if ( !v11 )
    return 1;
  v13 = (_DWORD *)(v11 - 4);
  if ( v11 == 4 )
    return 1;
  BinAddress = HvpMapEntryGetBinAddress(v12, v10, &v21, v20);
  v15 = (unsigned int)*v13;
  v16 = (_DWORD)v13 - BinAddress;
  v17 = -*v13;
  if ( (int)v15 >= 0
    || (v15 = v17 - 8, (unsigned int)v15 > 0xFFFF8)
    || (v18 = *(unsigned int *)(BinAddress + 8), v15 = v18 - 32, v17 > (unsigned __int64)(v18 - 32))
    || v16 - *v13 > (unsigned int)v18
    || v16 < 0x20 )
  {
    v4 = 0;
  }
  if ( v21 )
    HvpMapEntryReleaseBlockAddress(v15, v10);
  HvpReleaseHCell(a1);
  return v4;
}
