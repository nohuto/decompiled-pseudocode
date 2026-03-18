/*
 * XREFs of HvpSetRangeProtection @ 0x1403F7AD4
 * Callers:
 *     HvInitializeHive @ 0x1403D0F54 (HvInitializeHive.c)
 *     HvpAddBin @ 0x1403D5214 (HvpAddBin.c)
 *     HvpMarkDirty @ 0x1403F77C0 (HvpMarkDirty.c)
 *     HvpResetPageProtection @ 0x140492D40 (HvpResetPageProtection.c)
 * Callees:
 *     HvpMapEntryIsBinPresent @ 0x140039058 (HvpMapEntryIsBinPresent.c)
 *     HvpMapEntryGetFreeBin @ 0x14003B3B4 (HvpMapEntryGetFreeBin.c)
 *     HvpMapEntryGetBinAddress @ 0x14003B3D0 (HvpMapEntryGetBinAddress.c)
 *     ExProtectPool @ 0x140077FD0 (ExProtectPool.c)
 *     HvpMapEntryReleaseBlockAddress @ 0x14014FEAC (HvpMapEntryReleaseBlockAddress.c)
 *     KeBugCheckEx @ 0x140153DC0 (KeBugCheckEx.c)
 *     HvpGetCellMap @ 0x1403F7A80 (HvpGetCellMap.c)
 *     HvViewMapPinForFileOffset @ 0x1405EB1C8 (HvViewMapPinForFileOffset.c)
 */

char __fastcall HvpSetRangeProtection(
        ULONG_PTR BugCheckParameter2,
        ULONG_PTR BugCheckParameter3,
        unsigned int a3,
        unsigned int a4)
{
  unsigned int v7; // esi
  unsigned int v8; // r14d
  __int64 CellMap; // rax
  struct _EX_RUNDOWN_REF *v10; // rdi
  __int64 FreeBin; // rax
  _DWORD *v12; // rcx
  unsigned int v13; // ebx
  _DWORD *BinAddress; // rax
  __int64 v15; // rcx
  _DWORD *v16; // rdx
  int v17; // eax
  int v18; // eax
  __int64 v19; // rcx
  char v20; // bl
  _DWORD v22[4]; // [rsp+30h] [rbp-38h] BYREF
  BOOLEAN v23; // [rsp+70h] [rbp+8h] BYREF
  int v24; // [rsp+78h] [rbp+10h]

  v24 = BugCheckParameter3;
  if ( (*(_DWORD *)(BugCheckParameter2 + 144) & 0x11) != 0 )
    return 1;
  v7 = BugCheckParameter3;
  v8 = a3;
  if ( !a3 )
    return (*(_BYTE *)(BugCheckParameter2 + 124) & 4) == 0
        || a4 != 4
        || (int)HvViewMapPinForFileOffset(BugCheckParameter2 + 200, (unsigned int)(BugCheckParameter3 + 4096), a3) >= 0;
  while ( 1 )
  {
    CellMap = HvpGetCellMap(BugCheckParameter2, v7);
    v10 = (struct _EX_RUNDOWN_REF *)CellMap;
    if ( !CellMap )
      KeBugCheckEx(0x51u, 1uLL, BugCheckParameter2, v7, 0x3C4uLL);
    if ( !HvpMapEntryIsBinPresent(CellMap) )
    {
      v7 += 4096;
      v8 -= 4096;
      goto LABEL_17;
    }
    FreeBin = HvpMapEntryGetFreeBin();
    v13 = FreeBin ? v7 - *(_DWORD *)(FreeBin + 20) : *v12;
    BinAddress = (_DWORD *)HvpMapEntryGetBinAddress((__int64)v12, v10, &v23, v22);
    v16 = BinAddress;
    if ( *BinAddress != 1852400232 )
      break;
    v15 = (unsigned int)BinAddress[2];
    if ( !(_DWORD)v15 )
      break;
    if ( (v15 & 0xFFF) != 0 )
      break;
    v17 = BinAddress[1];
    if ( (v17 & 0xFFF) != 0 || (unsigned int)(v15 + v17) > *(_DWORD *)(BugCheckParameter2 + 1400) )
      break;
    if ( (*(_BYTE *)(BugCheckParameter2 + 124) & 4) == 0 || v23 )
    {
      v18 = ExProtectPool((unsigned __int64)v16 + v13, 4096LL, a4);
      v20 = v18;
      if ( !v18 && a4 == 4 )
      {
        if ( v23 )
          HvpMapEntryReleaseBlockAddress(v19, v10);
        return v20;
      }
      if ( v23 )
        HvpMapEntryReleaseBlockAddress(v19, v10);
    }
    v8 -= 4096;
    v7 += 4096;
LABEL_17:
    if ( !v8 )
    {
      LODWORD(BugCheckParameter3) = v24;
      return (*(_BYTE *)(BugCheckParameter2 + 124) & 4) == 0
          || a4 != 4
          || (int)HvViewMapPinForFileOffset(BugCheckParameter2 + 200, (unsigned int)(BugCheckParameter3 + 4096), a3) >= 0;
    }
  }
  if ( (_BYTE)KdDebuggerEnabled && !(_BYTE)KdDebuggerNotPresent )
    __debugbreak();
  if ( v23 )
    HvpMapEntryReleaseBlockAddress(v15, v10);
  return 0;
}
