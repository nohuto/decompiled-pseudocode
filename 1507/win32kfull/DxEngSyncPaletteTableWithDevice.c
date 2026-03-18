/*
 * XREFs of DxEngSyncPaletteTableWithDevice @ 0x1C0263E74
 * Callers:
 *     NtGdiDdDDICreateDCFromMemory @ 0x1C00EAC10 (NtGdiDdDDICreateDCFromMemory.c)
 * Callees:
 *     ?vDestructor@DEVLOCKOBJ@@QEAAXXZ @ 0x1C00192B0 (-vDestructor@DEVLOCKOBJ@@QEAAXXZ.c)
 *     ??0DEVLOCKOBJ@@QEAA@AEAVPDEVOBJ@@@Z @ 0x1C0019730 (--0DEVLOCKOBJ@@QEAA@AEAVPDEVOBJ@@@Z.c)
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C00D6F48 (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     ??0EPALOBJ@@QEAA@PEAUHPALETTE__@@@Z @ 0x1C00EB1E4 (--0EPALOBJ@@QEAA@PEAUHPALETTE__@@@Z.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C025E250 (--1DCOBJ@@QEAA@XZ.c)
 *     ?apalColorSet@XEPALOBJ@@QEAAXPEAVPALETTE@@@Z @ 0x1C0263DC0 (-apalColorSet@XEPALOBJ@@QEAAXPEAVPALETTE@@@Z.c)
 */

__int64 __fastcall DxEngSyncPaletteTableWithDevice(HPALETTE a1, __int64 a2)
{
  unsigned int v3; // esi
  _BYTE v5[32]; // [rsp+20h] [rbp-29h] BYREF
  _BYTE v6[96]; // [rsp+40h] [rbp-9h] BYREF
  __int64 v7; // [rsp+B8h] [rbp+6Fh] BYREF
  __int64 v8; // [rsp+C0h] [rbp+77h] BYREF
  __int64 v9; // [rsp+C8h] [rbp+7Fh] BYREF

  v8 = a2;
  v3 = 0;
  EPALOBJ::EPALOBJ((EPALOBJ *)&v7, a1);
  if ( a2 )
  {
    if ( !v7 )
      return v3;
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
  if ( v7 )
    DEC_SHARE_REF_CNT(v7);
  return v3;
}
