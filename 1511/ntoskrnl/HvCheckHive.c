/*
 * XREFs of HvCheckHive @ 0x1403D0558
 * Callers:
 *     CmCheckRegistry @ 0x1403D1730 (CmCheckRegistry.c)
 * Callees:
 *     HvpMapEntryGetFreeBin @ 0x14003B3B4 (HvpMapEntryGetFreeBin.c)
 *     HvpMapEntryGetBinAddress @ 0x14003B3D0 (HvpMapEntryGetBinAddress.c)
 *     HvpMapEntryReleaseBlockAddress @ 0x14014FEAC (HvpMapEntryReleaseBlockAddress.c)
 *     SetFailureLocation @ 0x1401A9C98 (SetFailureLocation.c)
 *     HvpGetCellMap @ 0x1403F7A80 (HvpGetCellMap.c)
 *     HvCheckBin @ 0x140416190 (HvCheckBin.c)
 *     HvMoveLayoutStats @ 0x140416BE4 (HvMoveLayoutStats.c)
 *     HvAddToLayoutStats @ 0x1404B5E50 (HvAddToLayoutStats.c)
 */

__int64 __fastcall HvCheckHive(__int64 a1, _DWORD *a2, __int64 a3, __int64 a4)
{
  unsigned int *v4; // r13
  __int64 v5; // rbx
  unsigned int v6; // edi
  unsigned int v7; // r14d
  __int64 v8; // r15
  struct _EX_RUNDOWN_REF *CellMap; // rsi
  __int64 FreeBin; // rax
  struct _EX_RUNDOWN_REF *v12; // rcx
  _DWORD *BinAddress; // rbp
  __int64 v14; // rcx
  unsigned int v15; // eax
  int v16; // eax
  unsigned int v17; // r15d
  BOOLEAN v19[4]; // [rsp+30h] [rbp-48h] BYREF
  unsigned int v20; // [rsp+34h] [rbp-44h]
  int v21; // [rsp+38h] [rbp-40h] BYREF
  _DWORD v22[15]; // [rsp+3Ch] [rbp-3Ch] BYREF
  __int64 v23; // [rsp+80h] [rbp+8h]

  v23 = a1;
  v21 = 0;
  v4 = (unsigned int *)(a1 + 1400);
  v5 = *(_QWORD *)(a1 + 56);
  v6 = 0;
  v7 = 0;
  v8 = a4;
  while ( 1 )
  {
    v20 = *v4;
    if ( v6 < v20 )
      break;
LABEL_15:
    ++v7;
    v4 += 158;
    v6 = 0x80000000;
    if ( v7 > 1 )
    {
      if ( a2 )
        *a2 = v21;
      return 0LL;
    }
  }
  while ( 1 )
  {
    CellMap = (struct _EX_RUNDOWN_REF *)HvpGetCellMap(a1, v6);
    if ( !CellMap )
      break;
    FreeBin = HvpMapEntryGetFreeBin();
    if ( FreeBin )
    {
      v6 += *(_DWORD *)(FreeBin + 16);
      if ( v8 )
      {
        HvAddToLayoutStats(v8);
        HvMoveLayoutStats();
      }
    }
    else
    {
      BinAddress = (_DWORD *)HvpMapEntryGetBinAddress((__int64)v12, v12, v19, v22);
      v14 = v20 - v6;
      v15 = BinAddress[2];
      if ( v15 > (unsigned int)v14
        || v15 < 0x20
        || (v15 & 0xFFF) != 0
        || *BinAddress != 1852400232
        || BinAddress[1] != v6 )
      {
        v17 = 2010;
        if ( v5 )
        {
          SetFailureLocation(v5, 0, 16, 2010, 32);
LABEL_25:
          *(_DWORD *)(v5 + 296) = v7;
          *(_DWORD *)(v5 + 300) = v6;
          *(_QWORD *)(v5 + 304) = BinAddress;
        }
LABEL_26:
        if ( v19[0] )
          HvpMapEntryReleaseBlockAddress(v14, CellMap);
        return v17;
      }
      v16 = HvCheckBin(v23, BinAddress, &v21, a3, v8);
      v17 = v16;
      if ( v16 )
      {
        if ( v5 )
        {
          SetFailureLocation(v5, 0, 16, v16, 48);
          goto LABEL_25;
        }
        goto LABEL_26;
      }
      v6 += BinAddress[2];
      if ( v19[0] )
      {
        HvpMapEntryReleaseBlockAddress(v14, CellMap);
        v19[0] = 0;
      }
      v8 = a4;
    }
    a1 = v23;
    if ( v6 >= v20 )
      goto LABEL_15;
  }
  if ( v5 )
  {
    SetFailureLocation(v5, 0, 16, 2005, 0);
    *(_DWORD *)(v5 + 296) = v7;
    *(_DWORD *)(v5 + 300) = v6;
  }
  return 2005LL;
}
