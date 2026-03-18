/*
 * XREFs of ?bRenderLddmDriver@PDEVOBJ@@QEAAHXZ @ 0x1C0037D08
 * Callers:
 *     ?DxLddmCleanupAtProcessDestroy@@YAXK@Z @ 0x1C0045758 (-DxLddmCleanupAtProcessDestroy@@YAXK@Z.c)
 *     ?MulEnablePDEV@@YAPEAUDHPDEV__@@PEAU_devicemodeW@@PEAGKPEAPEAUHSURF__@@KPEAU_GDIINFO@@KPEAUtagDEVINFO@@PEAUHDEV__@@1PEAX@Z @ 0x1C00B7210 (-MulEnablePDEV@@YAPEAUDHPDEV__@@PEAU_devicemodeW@@PEAGKPEAPEAUHSURF__@@KPEAU_GDIINFO@@KPEAUtagDE.c)
 *     ?DxgkEngUpdateSQMData@@YAXXZ @ 0x1C00B82D0 (-DxgkEngUpdateSQMData@@YAXXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PDEVOBJ::bRenderLddmDriver(PDEVOBJ *this)
{
  __int64 v1; // rax
  unsigned int v2; // ecx
  __int64 v3; // rdx
  unsigned int v4; // eax

  v1 = *(_QWORD *)this;
  v2 = 0;
  v3 = *(_QWORD *)(v1 + 2600);
  if ( !v3 )
    return 0LL;
  v4 = *(_DWORD *)(v3 + 160);
  if ( (v4 & 0x4000000) == 0 )
    return (v4 >> 23) & 1;
  if ( gbDisableCddRemoteSessionFiltering )
    return 0LL;
  LOBYTE(v2) = *(_QWORD *)(v3 + 296) != 0LL;
  return v2;
}
