/*
 * XREFs of DxEngSyncPaletteTableWithDevice @ 0x1C025FFE0
 * Callers:
 *     NtGdiDdDDICreateDCFromMemory @ 0x1C0007B20 (NtGdiDdDDICreateDCFromMemory.c)
 * Callees:
 *     ?vDestructor@DEVLOCKOBJ@@QEAAXXZ @ 0x1C0048990 (-vDestructor@DEVLOCKOBJ@@QEAAXXZ.c)
 *     ??0DEVLOCKOBJ@@QEAA@AEAVPDEVOBJ@@@Z @ 0x1C0048D90 (--0DEVLOCKOBJ@@QEAA@AEAVPDEVOBJ@@@Z.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C004A0A0 (--1DCOBJ@@QEAA@XZ.c)
 *     ??0EPALOBJ@@QEAA@PEAUHPALETTE__@@@Z @ 0x1C00F0E34 (--0EPALOBJ@@QEAA@PEAUHPALETTE__@@@Z.c)
 *     ??1EPALOBJ@@QEAA@XZ @ 0x1C00F0E60 (--1EPALOBJ@@QEAA@XZ.c)
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C00FDC0C (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     ?apalColorSet@XEPALOBJ@@QEAAXPEAVPALETTE@@@Z @ 0x1C025FF10 (-apalColorSet@XEPALOBJ@@QEAAXPEAVPALETTE@@@Z.c)
 */

__int64 __fastcall DxEngSyncPaletteTableWithDevice(HPALETTE a1, __int64 a2)
{
  unsigned int v3; // ebx
  _BYTE v5[32]; // [rsp+20h] [rbp-29h] BYREF
  _BYTE v6[96]; // [rsp+40h] [rbp-9h] BYREF
  __int64 v7; // [rsp+B8h] [rbp+6Fh] BYREF
  __int64 v8; // [rsp+C0h] [rbp+77h] BYREF
  __int64 v9; // [rsp+C8h] [rbp+7Fh] BYREF

  v8 = a2;
  v3 = 0;
  EPALOBJ::EPALOBJ((EPALOBJ *)&v7, a1);
  if ( a2 && v7 )
  {
    v9 = *(_QWORD *)(a2 + 72);
    GreAcquireSemaphore(v9);
    DEVLOCKOBJ::DEVLOCKOBJ((DEVLOCKOBJ *)v5, (struct PDEVOBJ *)&v8);
    v8 = ghsemPalette;
    GreAcquireSemaphore(ghsemPalette);
    XEPALOBJ::apalColorSet((XEPALOBJ *)&v7, *(struct PALETTE **)(a2 + 1832));
    v3 = 1;
    SEMOBJ::vUnlock((SEMOBJ *)&v8);
    DEVLOCKOBJ::vDestructor((DEVLOCKOBJ *)v5);
    DCOBJ::~DCOBJ((DCOBJ *)v6);
    SEMOBJ::vUnlock((SEMOBJ *)&v9);
  }
  EPALOBJ::~EPALOBJ((EPALOBJ *)&v7);
  return v3;
}
