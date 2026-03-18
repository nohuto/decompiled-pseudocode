/*
 * XREFs of ??0UsageEventData@DwmCoreAsimov@@QEAA@W4DwmEventType@1@@Z @ 0x180016F58
 * Callers:
 *     ?SetFlipState@CDwmEventManager@DwmCoreAsimov@@QEAAXPEAXW4HwFlipState@2@@Z @ 0x1800697A0 (-SetFlipState@CDwmEventManager@DwmCoreAsimov@@QEAAXPEAXW4HwFlipState@2@@Z.c)
 *     ?StartUsageLogging@CDwmEventManager@DwmCoreAsimov@@QEAAXPEAXW4DwmEventType@2@@Z @ 0x180139CA4 (-StartUsageLogging@CDwmEventManager@DwmCoreAsimov@@QEAAXPEAXW4DwmEventType@2@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DwmCoreAsimov::UsageEventData::UsageEventData(__int64 a1, int a2)
{
  const wchar_t *v2; // rax
  int v4; // edx
  int v5; // edx
  int v6; // edx
  int v7; // edx

  *(_QWORD *)(a1 + 24) = 0LL;
  *(_QWORD *)(a1 + 32) = 0LL;
  *(_QWORD *)a1 = &DwmCoreAsimov::UsageEventData::`vftable';
  *(_QWORD *)(a1 + 16) = &unk_18016D648;
  *(_DWORD *)(a1 + 8) = a2;
  if ( a2 )
  {
    v4 = a2 - 2;
    if ( v4 )
    {
      v5 = v4 - 2;
      if ( v5 )
      {
        v6 = v5 - 1;
        if ( v6 )
        {
          v7 = v6 - 1;
          if ( v7 )
          {
            if ( v7 == 2 )
              v2 = L"HighErrorRate";
            else
              v2 = L"UnkownEventTypeCount_Quality_Code";
          }
          else
          {
            v2 = L"DesktopCloneUsage";
          }
        }
        else
        {
          v2 = L"DDAUsage";
        }
      }
      else
      {
        v2 = L"RemoteAppRenderTargetUsage";
      }
    }
    else
    {
      v2 = L"OverlayUsage";
    }
  }
  else
  {
    v2 = L"DFlipUsage";
  }
  *(_QWORD *)(a1 + 16) = v2;
  return a1;
}
