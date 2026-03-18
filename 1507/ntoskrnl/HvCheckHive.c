/*
 * XREFs of HvCheckHive @ 0x1404A0AF0
 * Callers:
 *     CmCheckRegistry @ 0x1404ADFB0 (CmCheckRegistry.c)
 * Callees:
 *     HvpMapEntryGetFreeBin @ 0x14006215C (HvpMapEntryGetFreeBin.c)
 *     HvpMapEntryGetBinAddress @ 0x1400CAB30 (HvpMapEntryGetBinAddress.c)
 *     HvpMapEntryReleaseBlockAddress @ 0x14017DF88 (HvpMapEntryReleaseBlockAddress.c)
 *     SetFailureLocation @ 0x1401DE608 (SetFailureLocation.c)
 *     HvpGetCellMap @ 0x14049FB30 (HvpGetCellMap.c)
 *     HvMoveLayoutStats @ 0x1404B7F6C (HvMoveLayoutStats.c)
 *     HvCheckBin @ 0x1404B86C0 (HvCheckBin.c)
 *     HvAddToLayoutStats @ 0x14054D974 (HvAddToLayoutStats.c)
 */

__int64 HvCheckHive(__int64 a1, ...)
{
  unsigned int *v1; // r12
  __int64 v2; // rbx
  unsigned int v3; // edi
  unsigned int v4; // r14d
  __int64 v5; // r15
  __int64 v6; // rax
  unsigned int v7; // r13d
  struct _EX_RUNDOWN_REF *CellMap; // rsi
  __int64 FreeBin; // rax
  struct _EX_RUNDOWN_REF *v10; // rcx
  _DWORD *BinAddress; // rbp
  __int64 v12; // rcx
  unsigned int v13; // eax
  int v14; // eax
  unsigned int v15; // r15d
  int v17; // [rsp+30h] [rbp-58h] BYREF
  _DWORD v18[21]; // [rsp+34h] [rbp-54h] BYREF
  __int64 v20; // [rsp+98h] [rbp+10h] BYREF
  va_list va; // [rsp+98h] [rbp+10h]
  __int64 v22; // [rsp+A0h] [rbp+18h]
  __int64 v23; // [rsp+A8h] [rbp+20h]
  va_list va1; // [rsp+B0h] [rbp+28h] BYREF

  va_start(va1, a1);
  va_start(va, a1);
  v20 = va_arg(va1, _QWORD);
  v22 = va_arg(va1, _QWORD);
  v23 = va_arg(va1, _QWORD);
  v17 = 0;
  v1 = (unsigned int *)(a1 + 1400);
  v2 = *(_QWORD *)(a1 + 56);
  v3 = 0;
  v4 = 0;
  v5 = v23;
  v6 = a1;
  while ( 2 )
  {
    v7 = *v1;
    while ( v3 < v7 )
    {
      CellMap = (struct _EX_RUNDOWN_REF *)HvpGetCellMap(v6, v3);
      if ( !CellMap )
      {
        if ( v2 )
        {
          SetFailureLocation(v2, 0, 16, 2005, 0);
          *(_DWORD *)(v2 + 296) = v4;
          *(_DWORD *)(v2 + 300) = v3;
        }
        return 2005LL;
      }
      FreeBin = HvpMapEntryGetFreeBin();
      if ( FreeBin )
      {
        v3 += *(_DWORD *)(FreeBin + 16);
        if ( v5 )
        {
          HvAddToLayoutStats(v5);
          HvMoveLayoutStats();
        }
      }
      else
      {
        BinAddress = (_DWORD *)HvpMapEntryGetBinAddress((__int64)v10, v10, (BOOLEAN *)va, v18);
        v12 = v7 - v3;
        v13 = BinAddress[2];
        if ( v13 > (unsigned int)v12
          || v13 < 0x20
          || (v13 & 0xFFF) != 0
          || *BinAddress != 1852400232
          || BinAddress[1] != v3 )
        {
          v15 = 2010;
          if ( v2 )
          {
            SetFailureLocation(v2, 0, 16, 2010, 32);
LABEL_24:
            *(_DWORD *)(v2 + 296) = v4;
            *(_DWORD *)(v2 + 300) = v3;
            *(_QWORD *)(v2 + 304) = BinAddress;
          }
LABEL_25:
          if ( (_BYTE)v20 )
            HvpMapEntryReleaseBlockAddress(v12, CellMap);
          return v15;
        }
        v14 = HvCheckBin(a1, BinAddress, &v17, v22, v5);
        v15 = v14;
        if ( v14 )
        {
          if ( v2 )
          {
            SetFailureLocation(v2, 0, 16, v14, 48);
            goto LABEL_24;
          }
          goto LABEL_25;
        }
        v3 += BinAddress[2];
        if ( (_BYTE)v20 )
        {
          HvpMapEntryReleaseBlockAddress(v12, CellMap);
          LOBYTE(v20) = 0;
        }
        v5 = v23;
      }
      v6 = a1;
    }
    ++v4;
    v1 += 158;
    v3 = 0x80000000;
    if ( v4 <= 1 )
      continue;
    return 0LL;
  }
}
