/*
 * XREFs of DxEngSyncPaletteTableWithDevice @ 0x1C02625F4
 * Callers:
 *     NtGdiDdDDICreateDCFromMemory @ 0x1C007F000 (NtGdiDdDDICreateDCFromMemory.c)
 * Callees:
 *     ?vDestructor@DEVLOCKOBJ@@QEAAXXZ @ 0x1C002C870 (-vDestructor@DEVLOCKOBJ@@QEAAXXZ.c)
 *     ??0DEVLOCKOBJ@@QEAA@AEAVPDEVOBJ@@@Z @ 0x1C002CCC0 (--0DEVLOCKOBJ@@QEAA@AEAVPDEVOBJ@@@Z.c)
 *     ??1EPALOBJ@@QEAA@XZ @ 0x1C003A6E4 (--1EPALOBJ@@QEAA@XZ.c)
 *     ??0EPALOBJ@@QEAA@PEAUHPALETTE__@@@Z @ 0x1C007F5A0 (--0EPALOBJ@@QEAA@PEAUHPALETTE__@@@Z.c)
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C00E14B8 (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     ?apalColorSet@XEPALOBJ@@QEAAXPEAVPALETTE@@@Z @ 0x1C0262540 (-apalColorSet@XEPALOBJ@@QEAAXPEAVPALETTE@@@Z.c)
 */

__int64 __fastcall DxEngSyncPaletteTableWithDevice(HPALETTE a1, __int64 a2)
{
  unsigned int v3; // ebx
  _BYTE v5[80]; // [rsp+20h] [rbp-50h] BYREF
  __int64 v6; // [rsp+98h] [rbp+28h] BYREF
  __int64 v7; // [rsp+A0h] [rbp+30h] BYREF
  __int64 v8; // [rsp+A8h] [rbp+38h] BYREF

  v7 = a2;
  v3 = 0;
  EPALOBJ::EPALOBJ((EPALOBJ *)&v6, a1);
  if ( a2 && v6 )
  {
    v8 = *(_QWORD *)(a2 + 72);
    GreAcquireSemaphore(v8);
    DEVLOCKOBJ::DEVLOCKOBJ((DEVLOCKOBJ *)v5, (struct PDEVOBJ *)&v7);
    v7 = ghsemPalette;
    GreAcquireSemaphore(ghsemPalette);
    XEPALOBJ::apalColorSet((XEPALOBJ *)&v6, *(struct PALETTE **)(a2 + 1832));
    v3 = 1;
    SEMOBJ::vUnlock((SEMOBJ *)&v7);
    DEVLOCKOBJ::vDestructor((DEVLOCKOBJ *)v5);
    SEMOBJ::vUnlock((SEMOBJ *)&v8);
  }
  EPALOBJ::~EPALOBJ((EPALOBJ *)&v6);
  return v3;
}
