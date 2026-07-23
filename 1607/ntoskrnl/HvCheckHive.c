/*
 * XREFs of HvCheckHive @ 0x1404F6984
 * Callers:
 *     CmCheckRegistry @ 0x14047F0C8 (CmCheckRegistry.c)
 * Callees:
 *     HvpMapEntryReleaseBinAddress @ 0x14002CF80 (HvpMapEntryReleaseBinAddress.c)
 *     HvpMapEntryGetBinAddress @ 0x14002D1E0 (HvpMapEntryGetBinAddress.c)
 *     HvpGetBinContextInitialize @ 0x14002D300 (HvpGetBinContextInitialize.c)
 *     HvpMapEntryGetFreeBin @ 0x1400EDF80 (HvpMapEntryGetFreeBin.c)
 *     SetFailureLocation @ 0x1401B29DC (SetFailureLocation.c)
 *     HvCheckBin @ 0x14042DE90 (HvCheckBin.c)
 *     HvMoveLayoutStats @ 0x14042E93C (HvMoveLayoutStats.c)
 *     HvAddToLayoutStats @ 0x1404CB2E0 (HvAddToLayoutStats.c)
 *     HvpGetCellMap @ 0x1404F6FB0 (HvpGetCellMap.c)
 */

__int64 HvCheckHive(__int64 a1, ...)
{
  __int64 v1; // rbp
  __int64 v2; // r8
  __int64 v3; // rbx
  unsigned int *v4; // r13
  unsigned int v5; // edi
  unsigned int v6; // r14d
  unsigned int v7; // r12d
  int v8; // edx
  _DWORD *v9; // rcx
  __int64 CellMap; // rax
  struct _EX_RUNDOWN_REF *v11; // r15
  __int64 FreeBin; // rax
  struct _EX_RUNDOWN_REF *v13; // rcx
  _DWORD *BinAddress; // rsi
  __int64 v15; // rcx
  unsigned int v16; // eax
  int v17; // eax
  unsigned int v18; // ebp
  _DWORD v20[22]; // [rsp+30h] [rbp-58h] BYREF
  __int64 v22; // [rsp+98h] [rbp+10h] BYREF
  va_list va; // [rsp+98h] [rbp+10h]
  _RTL_BITMAP *v24; // [rsp+A0h] [rbp+18h]
  __int64 v25; // [rsp+A8h] [rbp+20h]
  va_list va1; // [rsp+B0h] [rbp+28h] BYREF

  va_start(va1, a1);
  va_start(va, a1);
  v22 = va_arg(va1, _QWORD);
  v24 = va_arg(va1, _RTL_BITMAP *);
  v25 = va_arg(va1, _QWORD);
  v20[0] = 0;
  v1 = v25;
  HvpGetBinContextInitialize((__int64 *)va);
  v3 = *(_QWORD *)(v2 + 56);
  v4 = (unsigned int *)(v2 + 1400);
  v5 = 0;
  v6 = 0;
  while ( 2 )
  {
    v7 = *v4;
    while ( v5 < v7 )
    {
      CellMap = HvpGetCellMap(v2, v5);
      v11 = (struct _EX_RUNDOWN_REF *)CellMap;
      if ( !CellMap )
      {
        if ( v3 )
        {
          SetFailureLocation(v3, 0, 16, 2005, 0);
          *(_DWORD *)(v3 + 296) = v6;
          *(_DWORD *)(v3 + 300) = v5;
        }
        return 2005LL;
      }
      FreeBin = HvpMapEntryGetFreeBin(CellMap);
      if ( FreeBin )
      {
        v8 = *(_DWORD *)(FreeBin + 16);
        v5 += v8;
        if ( v1 )
        {
          HvAddToLayoutStats(v1, v8);
          HvMoveLayoutStats(v9);
        }
      }
      else
      {
        BinAddress = (_DWORD *)HvpMapEntryGetBinAddress((__int64)v13, v13, (__int64 *)va);
        v15 = v7 - v5;
        v16 = BinAddress[2];
        if ( v16 > (unsigned int)v15
          || v16 < 0x20
          || (v16 & 0xFFF) != 0
          || *BinAddress != 1852400232
          || BinAddress[1] != v5 )
        {
          v18 = 2010;
          if ( v3 )
          {
            SetFailureLocation(v3, 0, 16, 2010, 32);
LABEL_21:
            *(_QWORD *)(v3 + 304) = BinAddress;
            *(_DWORD *)(v3 + 300) = v5;
            *(_DWORD *)(v3 + 296) = v6;
          }
LABEL_22:
          HvpMapEntryReleaseBinAddress(v15, v11, (__int64 *)va);
          return v18;
        }
        v17 = HvCheckBin(a1, BinAddress, v20, v24, v1);
        v18 = v17;
        if ( v17 )
        {
          if ( v3 )
          {
            SetFailureLocation(v3, 0, 16, v17, 48);
            goto LABEL_21;
          }
          goto LABEL_22;
        }
        v5 += BinAddress[2];
        HvpMapEntryReleaseBinAddress(v15, v11, (__int64 *)va);
        v2 = a1;
        v1 = v25;
      }
    }
    ++v6;
    v4 += 158;
    v5 = 0x80000000;
    if ( v6 <= 1 )
      continue;
    return 0LL;
  }
}
