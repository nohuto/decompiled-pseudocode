/*
 * XREFs of HvpFindFreeCell @ 0x14049EF7C
 * Callers:
 *     HvpDoAllocateCell @ 0x14049ECFC (HvpDoAllocateCell.c)
 * Callees:
 *     RtlFindSetBits @ 0x140062390 (RtlFindSetBits.c)
 *     HvpMapEntryIsTrimmed @ 0x1400627E0 (HvpMapEntryIsTrimmed.c)
 *     HvpMapEntryIsNewAlloc @ 0x1400627EC (HvpMapEntryIsNewAlloc.c)
 *     HvpMapEntryGetBinAddress @ 0x1400CAB30 (HvpMapEntryGetBinAddress.c)
 *     HvpMapEntryIsDiscardable @ 0x1400CAB70 (HvpMapEntryIsDiscardable.c)
 *     HvpMapEntryReleaseBlockAddress @ 0x14017DF88 (HvpMapEntryReleaseBlockAddress.c)
 *     KeBugCheckEx @ 0x140182750 (KeBugCheckEx.c)
 *     HvpGetCellMap @ 0x14049FB30 (HvpGetCellMap.c)
 *     HvpFindFreeCellInBin @ 0x14049FB90 (HvpFindFreeCellInBin.c)
 */

__int64 __fastcall HvpFindFreeCell(
        ULONG_PTR BugCheckParameter2,
        unsigned int a2,
        int a3,
        int a4,
        __int64 a5,
        __int64 a6)
{
  __int64 v8; // r12
  __int64 v9; // r15
  unsigned int v10; // edi
  unsigned int v11; // eax
  ULONG v12; // r10d
  ULONG SetBits; // r14d
  ULONG v14; // eax
  ULONG v15; // r14d
  __int64 CellMap; // rax
  unsigned int v17; // r8d
  struct _EX_RUNDOWN_REF *v18; // rbx
  __int64 v19; // rcx
  __int64 v20; // rcx
  struct _EX_RUNDOWN_REF *v21; // rcx
  __int64 v22; // rcx
  int FreeCellInBin; // eax
  __int64 v25; // rbx
  ULONG v26; // [rsp+40h] [rbp-48h] BYREF
  int v27; // [rsp+44h] [rbp-44h] BYREF
  int v28; // [rsp+90h] [rbp+8h]
  BOOLEAN v29; // [rsp+98h] [rbp+10h] BYREF
  int v30; // [rsp+A0h] [rbp+18h]
  ULONG v31; // [rsp+A8h] [rbp+20h]

  v30 = a3;
  v8 = 632LL * a4;
  v9 = a2;
  v10 = *(_DWORD *)(v8 + BugCheckParameter2 + 2024) & ~((1 << a2) - 1);
  if ( v10 )
  {
    _BitScanForward(&v11, v10);
    if ( v11 != a2 )
      v9 = v11;
    v28 = -1;
    v12 = *(_DWORD *)(v8 + 24 * v9 + BugCheckParameter2 + 1436);
    while ( 1 )
    {
      do
      {
        SetBits = RtlFindSetBits((PRTL_BITMAP)(BugCheckParameter2 + v8 + 24 * (v9 + 60)), 1u, v12);
        *(_DWORD *)(v8 + 24 * v9 + BugCheckParameter2 + 1436) = SetBits;
        v14 = v28;
        v31 = SetBits + 1;
        if ( v28 == SetBits )
        {
          v10 &= v10 - 1;
          if ( !v10 )
            return 0xFFFFFFFFLL;
          _BitScanForward((unsigned int *)&v9, v10);
          v25 = v8 + 24 * v9;
          v14 = RtlFindSetBits(
                  (PRTL_BITMAP)(BugCheckParameter2 + v8 + 24 * ((unsigned int)v9 + 60LL)),
                  1u,
                  *(_DWORD *)(v25 + BugCheckParameter2 + 1436));
          SetBits = v14;
          *(_DWORD *)(v25 + BugCheckParameter2 + 1436) = v14;
          v31 = v14 + 1;
        }
        if ( v14 == -1 )
          v14 = SetBits;
        v15 = SetBits << 12;
        v28 = v14;
        v26 = v15 + (a4 << 31);
        CellMap = HvpGetCellMap(BugCheckParameter2, v26);
        v18 = (struct _EX_RUNDOWN_REF *)CellMap;
        if ( !CellMap )
          KeBugCheckEx(0x51u, 1uLL, BugCheckParameter2, v17, 0x436uLL);
      }
      while ( HvpMapEntryIsDiscardable(CellMap)
           || (unsigned __int8)HvpMapEntryIsTrimmed(v19)
           || !(unsigned __int8)HvpMapEntryIsNewAlloc(v20) );
      HvpMapEntryGetBinAddress((__int64)v21, v21, &v29, &v27);
      LOBYTE(v22) = *(_BYTE *)(BugCheckParameter2 + 4168);
      if ( !(_BYTE)v22 || a4 == 1 || (_BYTE)v22 == 1 && v15 >= *(_DWORD *)(BugCheckParameter2 + 4172) )
      {
        FreeCellInBin = HvpFindFreeCellInBin(BugCheckParameter2, (__int64)&v26, a5, a6);
        if ( FreeCellInBin >= 0 )
        {
          if ( v29 )
            HvpMapEntryReleaseBlockAddress(v22, v18);
          return v26;
        }
        if ( FreeCellInBin != -1073741275 )
          break;
      }
      v12 = v31;
      if ( v29 )
      {
        HvpMapEntryReleaseBlockAddress(v22, v18);
        v12 = v31;
        v29 = 0;
      }
    }
    if ( v29 )
      HvpMapEntryReleaseBlockAddress(v22, v18);
  }
  return 0xFFFFFFFFLL;
}
