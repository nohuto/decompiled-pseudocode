/*
 * XREFs of ?IsMonitorSpecificContent@CBitmapRealization@@QEBA_NXZ @ 0x18000DBC4
 * Callers:
 *     ?IsMonitorSpecificContent@CCompositionSurfaceBitmap@@UEBA_NXZ @ 0x18000BF90 (-IsMonitorSpecificContent@CCompositionSurfaceBitmap@@UEBA_NXZ.c)
 *     ?SetStateOnDevice@CCommonRenderingEffect@@UEBAJPEAVCD3DDeviceLevel1@@AEBU_LUID@@AEBVDisplayId@@AEBW4StereoContext@@@Z @ 0x18007AA50 (-SetStateOnDevice@CCommonRenderingEffect@@UEBAJPEAVCD3DDeviceLevel1@@AEBU_LUID@@AEBVDisplayId@@A.c)
 *     ?PublishSurfaceUpdate@CAnalogExclusiveView@@AEAAXPEBVCRegion@@@Z @ 0x18013B710 (-PublishSurfaceUpdate@CAnalogExclusiveView@@AEAAXPEBVCRegion@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CBitmapRealization::IsMonitorSpecificContent(CBitmapRealization *this)
{
  __int64 result; // rax

  result = 0LL;
  if ( *((_DWORD *)this + 36) )
  {
    if ( *((_QWORD *)this + 17) )
      return 1LL;
  }
  return result;
}
