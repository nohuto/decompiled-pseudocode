/*
 * XREFs of ?FindDisplayByHMonitor@CDisplaySet@@AEBAPEAVCDisplay@@QEAUHMONITOR__@@PEAI@Z @ 0x180054C84
 * Callers:
 *     ?GetDisplayByHMonitorNoRefNoConst@CDisplaySet@@QEBAJQEAUHMONITOR__@@PEAPEAVCDisplay@@@Z @ 0x180054D30 (-GetDisplayByHMonitorNoRefNoConst@CDisplaySet@@QEBAJQEAUHMONITOR__@@PEAPEAVCDisplay@@@Z.c)
 *     ?RealizeBitmapSource@@YAJQEAUHMONITOR__@@AEBU_GUID@@PEAVIBitmapSource@@PEBUPixelFormatInfo@@@Z @ 0x180125678 (-RealizeBitmapSource@@YAJQEAUHMONITOR__@@AEBU_GUID@@PEAVIBitmapSource@@PEBUPixelFormatInfo@@@Z.c)
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
    if ( result[4] == a2 )
      break;
    v3 = (unsigned int)(v3 - 1);
    if ( (int)v3 < 0 )
      return 0LL;
  }
  return result;
}
