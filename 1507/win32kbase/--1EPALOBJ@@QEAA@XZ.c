/*
 * XREFs of ??1EPALOBJ@@QEAA@XZ @ 0x1C005AB38
 * Callers:
 *     ??0PDEVOBJ@@QEAA@PEAU_LDEV@@PEAU_devicemodeW@@PEAG22PEAXPEAUtagREMOTETYPEONENODE@@PEAU_GDIINFO@@PEAUtagDEVINFO@@HKK@Z @ 0x1C00349B0 (--0PDEVOBJ@@QEAA@PEAU_LDEV@@PEAU_devicemodeW@@PEAG22PEAXPEAUtagREMOTETYPEONENODE@@PEAU_GDIINFO@@.c)
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
