/*
 * XREFs of ??1EPALOBJ@@QEAA@XZ @ 0x1C00461F0
 * Callers:
 *     ?GrepValidateVisRgn@@YAXPEAVDC@@PEAVREGION@@@Z @ 0x1C0023B18 (-GrepValidateVisRgn@@YAXPEAVDC@@PEAVREGION@@@Z.c)
 *     hbmSelectBitmap @ 0x1C002DCA0 (hbmSelectBitmap.c)
 *     _GetDCEx @ 0x1C002EFC0 (_GetDCEx.c)
 *     ReleaseCacheDC @ 0x1C0034430 (ReleaseCacheDC.c)
 *     ??0PDEVOBJ@@QEAA@PEAU_LDEV@@PEAU_devicemodeW@@PEAG22PEAXPEAUtagREMOTETYPEONENODE@@PEAU_GDIINFO@@PEAUtagDEVINFO@@HKK@Z @ 0x1C0038390 (--0PDEVOBJ@@QEAA@PEAU_LDEV@@PEAU_devicemodeW@@PEAG22PEAXPEAUtagREMOTETYPEONENODE@@PEAU_GDIINFO@@.c)
 * Callees:
 *     <none>
 */

void __fastcall EPALOBJ::~EPALOBJ(EPALOBJ *this)
{
  _DWORD *v1; // rcx

  v1 = *(_DWORD **)this;
  if ( v1 )
    HmgDecrementShareReferenceCount(v1);
}
