/*
 * XREFs of ??0COREACCESS@@QEAA@QEAVDXGADAPTER@@_N@Z @ 0x1C00086BC
 * Callers:
 *     DxgkUnlock @ 0x1C006E9D0 (DxgkUnlock.c)
 *     ?Unlock@DXGDEVICE@@QEAAJPEBU_D3DKMT_UNLOCK@@E@Z @ 0x1C009656C (-Unlock@DXGDEVICE@@QEAAJPEBU_D3DKMT_UNLOCK@@E@Z.c)
 *     DxgkEscape @ 0x1C00B5410 (DxgkEscape.c)
 *     DxgkGetPresentHistory @ 0x1C00CA740 (DxgkGetPresentHistory.c)
 *     DxgkDestroyOverlay @ 0x1C016DAF0 (DxgkDestroyOverlay.c)
 * Callees:
 *     <none>
 */

COREACCESS *__fastcall COREACCESS::COREACCESS(COREACCESS *this, struct DXGADAPTER *const a2)
{
  *((_QWORD *)this + 2) = a2;
  *((_BYTE *)this + 24) = 0;
  if ( a2 )
  {
    _InterlockedIncrement64((volatile signed __int64 *)a2 + 3);
    *((_QWORD *)this + 1) = -1LL;
  }
  return this;
}
