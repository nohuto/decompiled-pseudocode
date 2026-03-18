/*
 * XREFs of ?DodGetScanLine@ADAPTER_DISPLAY@@QEAAJIPEAU_DXGKARG_GETSCANLINE@@@Z @ 0x1C0123EE4
 * Callers:
 *     DxgkGetScanLine @ 0x1C00B2CE0 (DxgkGetScanLine.c)
 * Callees:
 *     ?DdiGetScanLine@ADAPTER_DISPLAY@@QEAAJPEAU_DXGKARG_GETSCANLINE@@@Z @ 0x1C00B3250 (-DdiGetScanLine@ADAPTER_DISPLAY@@QEAAJPEAU_DXGKARG_GETSCANLINE@@@Z.c)
 *     ?GetScanLineEmulation@BLTQUEUE@@QEAAXPEAIPEAE@Z @ 0x1C0159AF4 (-GetScanLineEmulation@BLTQUEUE@@QEAAXPEAIPEAE@Z.c)
 */

__int64 __fastcall ADAPTER_DISPLAY::DodGetScanLine(
        ADAPTER_DISPLAY *this,
        unsigned int a2,
        struct _DXGKARG_GETSCANLINE *a3)
{
  __int64 v3; // r9
  unsigned int v4; // ebx

  v3 = *((_QWORD *)this + 31);
  v4 = 0;
  if ( !v3 )
    return 3221225485LL;
  if ( *(_BYTE *)(v3 + 96) )
    return (unsigned int)ADAPTER_DISPLAY::DdiGetScanLine(*(ADAPTER_DISPLAY **)(v3 + 88), a3, (__int64)a3);
  else
    BLTQUEUE::GetScanLineEmulation((BLTQUEUE *)(*(_QWORD *)(v3 + 8) + 2384LL * a2), &a3->ScanLine, &a3->InVerticalBlank);
  return v4;
}
