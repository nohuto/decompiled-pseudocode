/*
 * XREFs of HvpFindFreeCell @ 0x140479CB0
 * Callers:
 *     HvpDoAllocateCell @ 0x1403F4630 (HvpDoAllocateCell.c)
 * Callees:
 *     HvpMapEntryGetBinAddress @ 0x14003B3D0 (HvpMapEntryGetBinAddress.c)
 *     HvpMapEntryIsDiscardable @ 0x14003B420 (HvpMapEntryIsDiscardable.c)
 *     HvpMapEntryIsNewAlloc @ 0x1400A04B8 (HvpMapEntryIsNewAlloc.c)
 *     HvpMapEntryIsTrimmed @ 0x1400A04C0 (HvpMapEntryIsTrimmed.c)
 *     RtlFindSetBits @ 0x1400A04CC (RtlFindSetBits.c)
 *     HvpMapEntryReleaseBlockAddress @ 0x14014FEAC (HvpMapEntryReleaseBlockAddress.c)
 *     KeBugCheckEx @ 0x140153DC0 (KeBugCheckEx.c)
 *     HvpGetCellMap @ 0x1403F7A80 (HvpGetCellMap.c)
 *     HvpFindFreeCellInBin @ 0x140479C10 (HvpFindFreeCellInBin.c)
 */

__int64 __fastcall HvpFindFreeCell(ULONG_PTR BugCheckParameter2, unsigned int a2, unsigned int a3, int a4, __int64 *a5)
{
  __int64 v7; // r12
  __int64 v8; // r15
  unsigned int v9; // edi
  unsigned int v10; // eax
  ULONG v11; // r10d
  ULONG SetBits; // r14d
  ULONG v13; // eax
  ULONG v14; // r14d
  __int64 CellMap; // rax
  unsigned int v16; // r8d
  struct _EX_RUNDOWN_REF *v17; // rbx
  __int64 v18; // rcx
  __int64 v19; // rcx
  struct _EX_RUNDOWN_REF *v20; // rcx
  _DWORD *BinAddress; // rax
  __int64 v22; // rcx
  int FreeCellInBin; // eax
  __int64 v25; // rbx
  unsigned int v26; // [rsp+40h] [rbp-48h] BYREF
  int v27; // [rsp+44h] [rbp-44h] BYREF
  int v28; // [rsp+90h] [rbp+8h]
  BOOLEAN v29; // [rsp+98h] [rbp+10h] BYREF
  unsigned int v30; // [rsp+A0h] [rbp+18h]
  ULONG v31; // [rsp+A8h] [rbp+20h]

  v30 = a3;
  v7 = 632LL * a4;
  v8 = a2;
  v9 = *(_DWORD *)(v7 + BugCheckParameter2 + 2024) & ~((1 << a2) - 1);
  if ( v9 )
  {
    _BitScanForward(&v10, v9);
    if ( v10 != a2 )
      v8 = v10;
    v28 = -1;
    v11 = *(_DWORD *)(v7 + 24 * v8 + BugCheckParameter2 + 1436);
    while ( 1 )
    {
      do
      {
        SetBits = RtlFindSetBits((PRTL_BITMAP)(BugCheckParameter2 + v7 + 24 * (v8 + 60)), 1u, v11);
        *(_DWORD *)(v7 + 24 * v8 + BugCheckParameter2 + 1436) = SetBits;
        v13 = v28;
        v31 = SetBits + 1;
        if ( v28 == SetBits )
        {
          v9 &= v9 - 1;
          if ( !v9 )
            return 0xFFFFFFFFLL;
          _BitScanForward((unsigned int *)&v8, v9);
          v25 = v7 + 24 * v8;
          v13 = RtlFindSetBits(
                  (PRTL_BITMAP)(BugCheckParameter2 + v7 + 24 * ((unsigned int)v8 + 60LL)),
                  1u,
                  *(_DWORD *)(v25 + BugCheckParameter2 + 1436));
          SetBits = v13;
          *(_DWORD *)(v25 + BugCheckParameter2 + 1436) = v13;
          v31 = v13 + 1;
        }
        if ( v13 == -1 )
          v13 = SetBits;
        v14 = SetBits << 12;
        v28 = v13;
        v26 = v14 + (a4 << 31);
        CellMap = HvpGetCellMap(BugCheckParameter2, v26);
        v17 = (struct _EX_RUNDOWN_REF *)CellMap;
        if ( !CellMap )
          KeBugCheckEx(0x51u, 1uLL, BugCheckParameter2, v16, 0x436uLL);
      }
      while ( HvpMapEntryIsDiscardable(CellMap)
           || (unsigned __int8)HvpMapEntryIsTrimmed(v18)
           || !(unsigned __int8)HvpMapEntryIsNewAlloc(v19) );
      BinAddress = (_DWORD *)HvpMapEntryGetBinAddress((__int64)v20, v20, &v29, &v27);
      LOBYTE(v22) = *(_BYTE *)(BugCheckParameter2 + 4168);
      if ( !(_BYTE)v22 || a4 == 1 || (_BYTE)v22 == 1 && v14 >= *(_DWORD *)(BugCheckParameter2 + 4172) )
      {
        FreeCellInBin = HvpFindFreeCellInBin(BugCheckParameter2, v30, a4, BinAddress, &v26, a5);
        if ( FreeCellInBin >= 0 )
        {
          if ( v29 )
            HvpMapEntryReleaseBlockAddress(v22, v17);
          return v26;
        }
        if ( FreeCellInBin != -1073741275 )
          break;
      }
      v11 = v31;
      if ( v29 )
      {
        HvpMapEntryReleaseBlockAddress(v22, v17);
        v11 = v31;
        v29 = 0;
      }
    }
    if ( v29 )
      HvpMapEntryReleaseBlockAddress(v22, v17);
  }
  return 0xFFFFFFFFLL;
}
