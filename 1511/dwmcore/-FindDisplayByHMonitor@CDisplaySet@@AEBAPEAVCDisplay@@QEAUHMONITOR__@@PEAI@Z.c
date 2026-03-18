/*
 * XREFs of ?FindDisplayByHMonitor@CDisplaySet@@AEBAPEAVCDisplay@@QEAUHMONITOR__@@PEAI@Z @ 0x18006F890
 * Callers:
 *     ?CreateFullScreenRenderTargets@CDesktopRenderTarget@@AEAAJXZ @ 0x18007575C (-CreateFullScreenRenderTargets@CDesktopRenderTarget@@AEAAJXZ.c)
 *     ?RealizeBitmapSource@@YAJQEAUHMONITOR__@@AEBU_GUID@@PEAVIBitmapSource@@PEBUPixelFormatInfo@@@Z @ 0x18013A9D4 (-RealizeBitmapSource@@YAJQEAUHMONITOR__@@AEBU_GUID@@PEAVIBitmapSource@@PEBUPixelFormatInfo@@@Z.c)
 * Callees:
 *     <none>
 */

HMONITOR *__fastcall CDisplaySet::FindDisplayByHMonitor(CDisplaySet *this, HMONITOR a2, unsigned int *a3)
{
  __int64 v3; // r8
  HMONITOR *result; // rax

  v3 = (unsigned int)(*((_DWORD *)this + 18) - 1);
  if ( (int)v3 < 0 )
    return 0LL;
  while ( 1 )
  {
    result = *(HMONITOR **)(*((_QWORD *)this + 6) + 8 * v3);
    if ( result[3] == a2 )
      break;
    v3 = (unsigned int)(v3 - 1);
    if ( (int)v3 < 0 )
      return 0LL;
  }
  return result;
}
