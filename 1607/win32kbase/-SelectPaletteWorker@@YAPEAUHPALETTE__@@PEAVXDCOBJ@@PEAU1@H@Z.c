/*
 * XREFs of ?SelectPaletteWorker@@YAPEAUHPALETTE__@@PEAVXDCOBJ@@PEAU1@H@Z @ 0x1C005CA28
 * Callers:
 *     ?bCleanDC@XDCOBJ@@QEAAHH@Z @ 0x1C0027340 (-bCleanDC@XDCOBJ@@QEAAHH@Z.c)
 *     GreSelectPalette @ 0x1C005C9C0 (GreSelectPalette.c)
 *     GreRestoreDCInternal @ 0x1C00CD060 (GreRestoreDCInternal.c)
 * Callees:
 *     GreAcquireHmgrSemaphore @ 0x1C0025AB0 (GreAcquireHmgrSemaphore.c)
 *     EngAcquireSemaphore @ 0x1C0025AF0 (EngAcquireSemaphore.c)
 *     GreReleaseHmgrSemaphore @ 0x1C0026BB0 (GreReleaseHmgrSemaphore.c)
 *     ?vRemoveFromList@XEPALOBJ@@QEAAXAEAVXDCOBJ@@@Z @ 0x1C0026C90 (-vRemoveFromList@XEPALOBJ@@QEAAXAEAVXDCOBJ@@@Z.c)
 *     ?vAddToList@XEPALOBJ@@QEAAXAEAVXDCOBJ@@@Z @ 0x1C0026D30 (-vAddToList@XEPALOBJ@@QEAAXAEAVXDCOBJ@@@Z.c)
 *     ?vMakeNoXlate@XEPALOBJ@@QEAAXXZ @ 0x1C0026DD0 (-vMakeNoXlate@XEPALOBJ@@QEAAXXZ.c)
 *     ??0EPALOBJ@@QEAA@PEAUHPALETTE__@@@Z @ 0x1C005CB68 (--0EPALOBJ@@QEAA@PEAUHPALETTE__@@@Z.c)
 *     ??1EPALOBJ@@QEAA@XZ @ 0x1C005CB90 (--1EPALOBJ@@QEAA@XZ.c)
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C0074AF8 (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 */

HPALETTE __fastcall SelectPaletteWorker(struct XDCOBJ *a1, HPALETTE a2, int a3)
{
  int v6; // edx
  __int64 v7; // rcx
  int v8; // r8d
  HPALETTE v9; // rdi
  __int64 v10; // rbx
  __int64 v11; // rcx
  HPALETTE v12; // rsi
  __int64 v14; // r15
  __int64 v15; // rcx
  __int64 v16; // rcx
  HSEMAPHORE v17[7]; // [rsp+20h] [rbp-38h] BYREF
  __int64 v18; // [rsp+60h] [rbp+8h] BYREF
  __int64 v19; // [rsp+78h] [rbp+20h] BYREF

  v17[0] = ghsemPalette;
  EngAcquireSemaphore(ghsemPalette);
  EPALOBJ::EPALOBJ((EPALOBJ *)&v18, a2);
  v9 = 0LL;
  if ( !*(_QWORD *)a1 || (v10 = v18) == 0 || (*(_DWORD *)(v18 + 24) & 0x100) == 0 )
  {
    v12 = 0LL;
LABEL_7:
    v9 = v12;
    goto LABEL_8;
  }
  if ( !a3 )
  {
    hForePID = (struct _W32PROCESS *)PsGetCurrentProcessWin32Process(v7);
    hForePalette = a2;
  }
  v11 = *(_QWORD *)a1;
  v12 = *(HPALETTE *)(*(_QWORD *)a1 + 88LL);
  if ( v12 == a2 )
    goto LABEL_7;
  v19 = *(_QWORD *)(v11 + 96);
  if ( v10 != *(_QWORD *)&WPP_MAIN_CB.DeviceQueue.1 )
  {
    v14 = *(_QWORD *)(v11 + 48);
    if ( *(_QWORD *)(v10 + 48) != v14 )
    {
      if ( *(_DWORD *)(v10 + 56) )
        goto LABEL_8;
      XEPALOBJ::vMakeNoXlate((XEPALOBJ *)&v18);
      *(_QWORD *)(v10 + 48) = v14;
    }
  }
  GreAcquireHmgrSemaphore(v11, v6, v8);
  XEPALOBJ::vRemoveFromList((XEPALOBJ *)&v19, a1);
  *(_QWORD *)(*(_QWORD *)a1 + 88LL) = a2;
  *(_QWORD *)(*(_QWORD *)a1 + 96LL) = v10;
  *(_DWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 80LL) + 8LL) |= 0xFu;
  v15 = *(_QWORD *)(*(_QWORD *)a1 + 512LL);
  if ( v15 && v10 != *(_QWORD *)&WPP_MAIN_CB.DeviceQueue.1 )
    *(_QWORD *)(v15 + 168) = a2;
  XEPALOBJ::vAddToList((XEPALOBJ *)&v18, a1);
  v9 = v12;
  GreReleaseHmgrSemaphore(v16);
LABEL_8:
  EPALOBJ::~EPALOBJ((EPALOBJ *)&v18);
  SEMOBJ::vUnlock((SEMOBJ *)v17);
  return v9;
}
