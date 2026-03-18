/*
 * XREFs of ?SetTransformParameters@CHwndRenderTarget@@QEAAXW4DXGI_MODE_ROTATION@@AEBV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMILSurfaceRect_@RectUniqueness@@@@1@Z @ 0x180073A58
 * Callers:
 *     ?ProcessUpdateTransform@CDcompRenderTarget@@QEAAJPEAVCResourceTable@@PEBUMILCMD_DCOMPRENDERTARGET_UPDATETRANSFORM@@@Z @ 0x1800B702C (-ProcessUpdateTransform@CDcompRenderTarget@@QEAAJPEAVCResourceTable@@PEBUMILCMD_DCOMPRENDERTARGE.c)
 *     ?ProcessUpdateMonitorRotation@CDesktopRenderTarget@@QEAAJPEAVCResourceTable@@PEBUMILCMD_DESKTOPRENDERTARGET_UPDATEMONITORROTATION@@@Z @ 0x18011DEA8 (-ProcessUpdateMonitorRotation@CDesktopRenderTarget@@QEAAJPEAVCResourceTable@@PEBUMILCMD_DESKTOPR.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CHwndRenderTarget::SetTransformParameters(__int64 a1, int a2, __int128 *a3, _OWORD *a4)
{
  __int64 result; // rax
  __int128 v5; // xmm1

  result = *(_QWORD *)(a1 + 152);
  *(_OWORD *)(a1 + 384) = *a4;
  v5 = *a3;
  *(_DWORD *)(a1 + 416) = a2;
  *(_OWORD *)(a1 + 400) = v5;
  if ( result )
  {
    *(_OWORD *)(result + 104) = *a4;
    *(_OWORD *)(*(_QWORD *)(a1 + 152) + 88LL) = *a3;
    result = *(_QWORD *)(a1 + 152);
    *(_DWORD *)(result + 292) = a2;
  }
  *(_BYTE *)(a1 + 761) = 1;
  return result;
}
