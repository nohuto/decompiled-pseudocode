/*
 * XREFs of HvpSetRangeProtection @ 0x1405139A4
 * Callers:
 *     HvpAddBin @ 0x14047DF10 (HvpAddBin.c)
 *     HvInitializeHive @ 0x14047FBA4 (HvInitializeHive.c)
 *     HvpResetPageProtection @ 0x1404B1F40 (HvpResetPageProtection.c)
 *     HvpMarkDirty @ 0x1405137E0 (HvpMarkDirty.c)
 * Callees:
 *     HvpMapEntryReleaseBinAddress @ 0x14002D400 (HvpMapEntryReleaseBinAddress.c)
 *     HvpMapEntryGetBinAddress @ 0x14002D660 (HvpMapEntryGetBinAddress.c)
 *     HvpGetBinContextInitialize @ 0x14002D780 (HvpGetBinContextInitialize.c)
 *     ExProtectPoolEx @ 0x1400EA270 (ExProtectPoolEx.c)
 *     HvpMapEntryGetFreeBin @ 0x1400F0100 (HvpMapEntryGetFreeBin.c)
 *     HvpMapEntryIsBinPresent @ 0x1400F011C (HvpMapEntryIsBinPresent.c)
 *     KeBugCheckEx @ 0x14015D500 (KeBugCheckEx.c)
 *     HvpGetBinContextInTempBin @ 0x1401B6CD8 (HvpGetBinContextInTempBin.c)
 *     HvpGetCellMap @ 0x140513BC0 (HvpGetCellMap.c)
 *     HvViewMapPinForFileOffset @ 0x14060FC6C (HvViewMapPinForFileOffset.c)
 */

char __fastcall HvpSetRangeProtection(ULONG_PTR BugCheckParameter2, unsigned int a2, unsigned int a3, unsigned int a4)
{
  unsigned int v7; // edx
  unsigned int v8; // r8d
  unsigned int v9; // ebp
  unsigned int v10; // r15d
  __int64 CellMap; // rax
  struct _EX_RUNDOWN_REF *v12; // rdi
  __int64 v13; // rcx
  __int64 FreeBin; // rax
  _DWORD *v15; // rcx
  unsigned int v16; // ebx
  _DWORD *BinAddress; // rax
  __int64 v18; // rcx
  unsigned __int64 v19; // r10
  int v20; // esi
  int v21; // eax
  unsigned int v22; // esi
  int v23; // eax
  __int64 v24; // rcx
  char v25; // bl
  __int16 v27; // [rsp+70h] [rbp+8h] BYREF
  unsigned int v28; // [rsp+78h] [rbp+10h]

  v28 = a2;
  HvpGetBinContextInitialize(&v27);
  if ( (*(_DWORD *)(BugCheckParameter2 + 144) & 0x11) != 0 )
    return 1;
  v9 = v7;
  v10 = v8;
  if ( !v8 )
    return (*(_BYTE *)(BugCheckParameter2 + 124) & 4) == 0
        || a4 != 4
        || (int)HvViewMapPinForFileOffset(BugCheckParameter2 + 200, v7 + 4096, a3) >= 0;
  while ( 1 )
  {
    CellMap = HvpGetCellMap(BugCheckParameter2, v9);
    v12 = (struct _EX_RUNDOWN_REF *)CellMap;
    if ( !CellMap )
      KeBugCheckEx(0x51u, 1uLL, BugCheckParameter2, v9, 0x3D2uLL);
    if ( !HvpMapEntryIsBinPresent(CellMap) )
    {
      v9 += 4096;
      v10 -= 4096;
      goto LABEL_17;
    }
    FreeBin = HvpMapEntryGetFreeBin(v13);
    v16 = FreeBin ? v9 - *(_DWORD *)(FreeBin + 20) : *v15;
    BinAddress = (_DWORD *)HvpMapEntryGetBinAddress((__int64)v15, v12, &v27);
    v19 = (unsigned __int64)BinAddress;
    if ( *BinAddress != 1852400232 )
      break;
    v20 = BinAddress[2];
    if ( !v20 )
      break;
    v18 = 4095LL;
    if ( (v20 & 0xFFF) != 0 )
      break;
    v21 = BinAddress[1];
    if ( (v21 & 0xFFF) != 0 || (unsigned int)(v20 + v21) > *(_DWORD *)(BugCheckParameter2 + 1400) )
      break;
    v22 = v20 - v16;
    if ( v10 < v22 )
      v22 = v10;
    if ( (*(_BYTE *)(BugCheckParameter2 + 124) & 4) == 0
      || (unsigned __int8)HvpGetBinContextInTempBin((unsigned __int8 *)&v27) )
    {
      v23 = ExProtectPoolEx(v19, v19 + v16, v22, a4);
      v25 = v23;
      if ( !v23 && a4 == 4 )
      {
        HvpMapEntryReleaseBinAddress(v24, v12, &v27);
        return v25;
      }
    }
    HvpMapEntryReleaseBinAddress(v24, v12, &v27);
    v10 -= v22;
    v9 += v22;
LABEL_17:
    if ( !v10 )
    {
      v7 = v28;
      return (*(_BYTE *)(BugCheckParameter2 + 124) & 4) == 0
          || a4 != 4
          || (int)HvViewMapPinForFileOffset(BugCheckParameter2 + 200, v7 + 4096, a3) >= 0;
    }
  }
  if ( (_BYTE)KdDebuggerEnabled && !(_BYTE)KdDebuggerNotPresent )
    __debugbreak();
  HvpMapEntryReleaseBinAddress(v18, v12, &v27);
  return 0;
}
