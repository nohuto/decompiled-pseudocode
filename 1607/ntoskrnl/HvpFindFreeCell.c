/*
 * XREFs of HvpFindFreeCell @ 0x140400E10
 * Callers:
 *     HvpDoAllocateCell @ 0x140400C30 (HvpDoAllocateCell.c)
 * Callees:
 *     RtlFindSetBits @ 0x14000AB40 (RtlFindSetBits.c)
 *     HvpMapEntryIsTrimmed @ 0x14000AEA4 (HvpMapEntryIsTrimmed.c)
 *     HvpMapEntryIsNewAlloc @ 0x14000AEB0 (HvpMapEntryIsNewAlloc.c)
 *     HvpMapEntryReleaseBinAddress @ 0x14002CF80 (HvpMapEntryReleaseBinAddress.c)
 *     HvpMapEntryGetBinAddress @ 0x14002D1E0 (HvpMapEntryGetBinAddress.c)
 *     HvpMapEntryIsDiscardable @ 0x14002D250 (HvpMapEntryIsDiscardable.c)
 *     HvpGetBinContextInitialize @ 0x14002D300 (HvpGetBinContextInitialize.c)
 *     KeBugCheckEx @ 0x14015DA70 (KeBugCheckEx.c)
 *     HvpFindFreeCellInBin @ 0x140401050 (HvpFindFreeCellInBin.c)
 *     HvpGetCellMap @ 0x1404F6FB0 (HvpGetCellMap.c)
 */

__int64 __fastcall HvpFindFreeCell(
        ULONG_PTR BugCheckParameter2,
        unsigned int a2,
        int a3,
        int a4,
        __int64 a5,
        __int64 a6)
{
  __int64 v7; // r12
  __int64 v8; // r15
  int v9; // edx
  __int64 v10; // r13
  unsigned int v11; // edi
  unsigned int v12; // eax
  unsigned int v13; // esi
  ULONG v14; // r10d
  ULONG SetBits; // r14d
  ULONG v16; // eax
  ULONG v17; // r14d
  __int64 CellMap; // rax
  unsigned int v19; // r8d
  struct _EX_RUNDOWN_REF *v20; // rbx
  __int64 v21; // rcx
  __int64 v22; // rcx
  struct _EX_RUNDOWN_REF *v23; // rcx
  __int64 v24; // rcx
  unsigned __int64 BinAddress; // r12
  char v26; // al
  int FreeCellInBin; // eax
  __int64 v29; // rbx
  ULONG v30; // [rsp+40h] [rbp-58h]
  unsigned int v31[21]; // [rsp+44h] [rbp-54h] BYREF
  int v32; // [rsp+A0h] [rbp+8h]
  __int16 v33; // [rsp+A8h] [rbp+10h] BYREF
  int v34; // [rsp+B0h] [rbp+18h]
  int v35; // [rsp+B8h] [rbp+20h]

  v35 = a4;
  v34 = a3;
  v7 = a4;
  v8 = a2;
  HvpGetBinContextInitialize(&v33);
  v10 = 632 * v7;
  v11 = *(_DWORD *)(BugCheckParameter2 + 632 * v7 + 2024) & ~((1 << v9) - 1);
  if ( !v11 )
    return (unsigned int)-1;
  _BitScanForward(&v12, v11);
  if ( v12 != v9 )
    v8 = v12;
  v13 = -1;
  v32 = -1;
  v14 = *(_DWORD *)(v10 + 24 * v8 + BugCheckParameter2 + 1436);
  while ( 1 )
  {
    do
    {
      SetBits = RtlFindSetBits((PRTL_BITMAP)(BugCheckParameter2 + v10 + 1440 + 24 * v8), 1u, v14);
      v16 = v32;
      v30 = SetBits + 1;
      *(_DWORD *)(v10 + 24 * v8 + BugCheckParameter2 + 1436) = SetBits;
      if ( v32 == SetBits )
      {
        v11 &= v11 - 1;
        if ( !v11 )
          return v13;
        _BitScanForward((unsigned int *)&v8, v11);
        v29 = v10 + 24 * v8;
        v16 = RtlFindSetBits(
                (PRTL_BITMAP)(BugCheckParameter2 + v10 + 1440 + 24 * v8),
                1u,
                *(_DWORD *)(v29 + BugCheckParameter2 + 1436));
        SetBits = v16;
        *(_DWORD *)(v29 + BugCheckParameter2 + 1436) = v16;
        v30 = v16 + 1;
      }
      if ( v16 == -1 )
        v16 = SetBits;
      v17 = SetBits << 12;
      v32 = v16;
      v31[0] = v17 + ((_DWORD)v7 << 31);
      CellMap = HvpGetCellMap(BugCheckParameter2, v31[0]);
      v20 = (struct _EX_RUNDOWN_REF *)CellMap;
      if ( !CellMap )
        KeBugCheckEx(0x51u, 1uLL, BugCheckParameter2, v19, 0x43CuLL);
    }
    while ( HvpMapEntryIsDiscardable(CellMap)
         || (unsigned __int8)HvpMapEntryIsTrimmed(v21)
         || !(unsigned __int8)HvpMapEntryIsNewAlloc(v22) );
    BinAddress = HvpMapEntryGetBinAddress((__int64)v23, v23, &v33);
    v26 = *(_BYTE *)(BugCheckParameter2 + 4168);
    if ( v26 && v35 != 1 && (v26 != 1 || v17 < *(_DWORD *)(BugCheckParameter2 + 4172)) )
      goto LABEL_19;
    FreeCellInBin = HvpFindFreeCellInBin(BugCheckParameter2, (__int64)v31, a5, a6);
    if ( FreeCellInBin >= 0 )
      break;
    if ( FreeCellInBin != -1073741275 )
      goto LABEL_15;
LABEL_19:
    HvpMapEntryReleaseBinAddress(v24, v20, &v33);
    v14 = v30;
    LODWORD(v7) = v35;
  }
  v13 = v31[0];
LABEL_15:
  if ( BinAddress )
    HvpMapEntryReleaseBinAddress(v24, v20, &v33);
  return v13;
}
