/*
 * XREFs of GetDPIServerInfoForDpi @ 0x1C00C67B4
 * Callers:
 *     xxxDrawMenuItem @ 0x1C00144C0 (xxxDrawMenuItem.c)
 *     ?xxxMNItemSize@@YAHPEAUtagMENU@@PEAUtagWND@@HPEAUHDC__@@PEAUtagITEM@@HPEAUtagPOINT@@@Z @ 0x1C006BFBC (-xxxMNItemSize@@YAHPEAUtagMENU@@PEAUtagWND@@HPEAUHDC__@@PEAUtagITEM@@HPEAUtagPOINT@@@Z.c)
 *     ?xxxMNGetBitmapSize@@YAHPEAUtagMENU@@PEAUtagITEM@@PEAUtagWND@@HPEAUHDC__@@@Z @ 0x1C00C6670 (-xxxMNGetBitmapSize@@YAHPEAUtagMENU@@PEAUtagITEM@@PEAUtagWND@@HPEAUHDC__@@@Z.c)
 * Callees:
 *     ?EnsureKMDpiMetricsCacheNode@@YAPEAUtagDpiKMMetricsCacheNode@@H@Z @ 0x1C01E934C (-EnsureKMDpiMetricsCacheNode@@YAPEAUtagDpiKMMetricsCacheNode@@H@Z.c)
 *     ?RefreshDpiKMMetricsCacheNode@@YAXPEAUtagDpiKMMetricsCacheNode@@@Z @ 0x1C01E9540 (-RefreshDpiKMMetricsCacheNode@@YAXPEAUtagDpiKMMetricsCacheNode@@@Z.c)
 */

__int64 __fastcall GetDPIServerInfoForDpi(int a1)
{
  struct tagDpiKMMetricsCacheNode *v2; // rax
  __int64 v3; // rcx
  struct tagDpiKMMetricsCacheNode *v4; // rbx
  __int64 v5; // rcx

  if ( a1 == *(unsigned __int16 *)(gpsi + 7286LL) )
    return gpsi + 4024LL;
  if ( a1 == 96 )
    return gpsi + 4128LL;
  v2 = EnsureKMDpiMetricsCacheNode(a1);
  v4 = v2;
  if ( v2 )
  {
    RefreshDpiKMMetricsCacheNode(v2);
    return (__int64)v4 + 16;
  }
  else if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v3) + 776) & 0x2000) != 0
         || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v5) + 776) & 0x4000) != 0 )
  {
    return gpsi + 4024LL;
  }
  else
  {
    return gpsi + 4128LL;
  }
}
