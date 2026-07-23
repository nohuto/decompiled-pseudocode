/*
 * XREFs of HvpSetRangeProtection @ 0x1404F6D94
 * Callers:
 *     HvpAddBin @ 0x14047CC64 (HvpAddBin.c)
 *     HvInitializeHive @ 0x14047E8F8 (HvInitializeHive.c)
 *     HvpResetPageProtection @ 0x14049C320 (HvpResetPageProtection.c)
 *     HvpMarkDirty @ 0x1404F6BD0 (HvpMarkDirty.c)
 * Callees:
 *     HvpMapEntryReleaseBinAddress @ 0x14002CF80 (HvpMapEntryReleaseBinAddress.c)
 *     HvpMapEntryGetBinAddress @ 0x14002D1E0 (HvpMapEntryGetBinAddress.c)
 *     HvpGetBinContextInitialize @ 0x14002D300 (HvpGetBinContextInitialize.c)
 *     ExProtectPoolEx @ 0x1400E80E0 (ExProtectPoolEx.c)
 *     HvpMapEntryGetFreeBin @ 0x1400EDF80 (HvpMapEntryGetFreeBin.c)
 *     HvpMapEntryIsBinPresent @ 0x1400EDF9C (HvpMapEntryIsBinPresent.c)
 *     KeBugCheckEx @ 0x14015DA70 (KeBugCheckEx.c)
 *     HvpGetBinContextInTempBin @ 0x1401B6BBC (HvpGetBinContextInTempBin.c)
 *     HvpGetCellMap @ 0x1404F6FB0 (HvpGetCellMap.c)
 *     HvViewMapPinForFileOffset @ 0x14060FD20 (HvViewMapPinForFileOffset.c)
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
