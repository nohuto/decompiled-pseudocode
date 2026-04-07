/*
 * XREFs of ?_FindRecord@CWindowPropertyTracker@@AEAAHPEAUHWND__@@@Z @ 0x18000ABC0
 * Callers:
 *     ?GetWindowBeginStyle@CWindowPropertyTracker@@QEAAJPEAUHWND__@@PEAK@Z @ 0x1800037F0 (-GetWindowBeginStyle@CWindowPropertyTracker@@QEAAJPEAUHWND__@@PEAK@Z.c)
 *     ?_EnsureRecordExists@CWindowPropertyTracker@@AEAAJPEBVCStoryboard@@PEBVCWindowData@@PEAH@Z @ 0x18000AC8C (-_EnsureRecordExists@CWindowPropertyTracker@@AEAAJPEBVCStoryboard@@PEBVCWindowData@@PEAH@Z.c)
 *     ?GetWindowEndPosition@CWindowPropertyTracker@@QEAAJPEAUHWND__@@PEAUtagPOINT@@@Z @ 0x18000B0C4 (-GetWindowEndPosition@CWindowPropertyTracker@@QEAAJPEAUHWND__@@PEAUtagPOINT@@@Z.c)
 *     ?GetWindowEndSize@CWindowPropertyTracker@@QEAAJPEAUHWND__@@PEAUtagSIZE@@@Z @ 0x18000B118 (-GetWindowEndSize@CWindowPropertyTracker@@QEAAJPEAUHWND__@@PEAUtagSIZE@@@Z.c)
 *     ?GetWindowEndCloak@CWindowPropertyTracker@@QEAAJPEAUHWND__@@PEA_N@Z @ 0x18000B16C (-GetWindowEndCloak@CWindowPropertyTracker@@QEAAJPEAUHWND__@@PEA_N@Z.c)
 *     ?StopTrackingWindowImmediately@CWindowPropertyTracker@@QEAAXPEAUHWND__@@@Z @ 0x180070B8C (-StopTrackingWindowImmediately@CWindowPropertyTracker@@QEAAXPEAUHWND__@@@Z.c)
 *     ?GetWindowBeginPosition@CWindowPropertyTracker@@QEAAJPEAUHWND__@@PEAUtagPOINT@@@Z @ 0x180096038 (-GetWindowBeginPosition@CWindowPropertyTracker@@QEAAJPEAUHWND__@@PEAUtagPOINT@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CWindowPropertyTracker::_FindRecord(CWindowPropertyTracker *this, HWND a2)
{
  unsigned int v2; // r10d
  unsigned int v3; // r9d
  __int64 v4; // r8

  v2 = *((_DWORD *)this + 6);
  v3 = -1;
  v4 = 0LL;
  if ( v2 )
  {
    while ( **(HWND **)(*(_QWORD *)this + 8 * v4) != a2 )
    {
      v4 = (unsigned int)(v4 + 1);
      if ( (unsigned int)v4 >= v2 )
        return v3;
    }
    return (unsigned int)v4;
  }
  return v3;
}
