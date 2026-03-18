/*
 * XREFs of ?StartUsageLogging@CDwmEventManager@DwmCoreAsimov@@QEAAXPEAXW4DwmEventType@2@@Z @ 0x180139CA4
 * Callers:
 *     ?EnsureRenderTargets@CDesktopRenderTarget@@UEAAJXZ @ 0x180075420 (-EnsureRenderTargets@CDesktopRenderTarget@@UEAAJXZ.c)
 *     ??0CHwndRenderTargetDDA@@AEAA@PEAVCComposition@@@Z @ 0x1801146E0 (--0CHwndRenderTargetDDA@@AEAA@PEAVCComposition@@@Z.c)
 * Callees:
 *     ??A?$CAtlMap@_KUUsageEventData@DwmCoreAsimov@@V?$CElementTraits@_K@ATL@@V?$CElementTraits@UUsageEventData@DwmCoreAsimov@@@4@@ATL@@QEAAAEAUUsageEventData@DwmCoreAsimov@@_K@Z @ 0x180016EB0 (--A-$CAtlMap@_KUUsageEventData@DwmCoreAsimov@@V-$CElementTraits@_K@ATL@@V-$CElementTraits@UUsage.c)
 *     ??0UsageEventData@DwmCoreAsimov@@QEAA@W4DwmEventType@1@@Z @ 0x180016F58 (--0UsageEventData@DwmCoreAsimov@@QEAA@W4DwmEventType@1@@Z.c)
 *     ?GetNode@?$CAtlMap@_KUUsageEventData@DwmCoreAsimov@@V?$CElementTraits@_K@ATL@@V?$CElementTraits@UUsageEventData@DwmCoreAsimov@@@4@@ATL@@AEBAPEAVCNode@12@_KAEAI1AEAPEAV312@@Z @ 0x180069CA0 (-GetNode@-$CAtlMap@_KUUsageEventData@DwmCoreAsimov@@V-$CElementTraits@_K@ATL@@V-$CElementTraits@.c)
 */

int __fastcall DwmCoreAsimov::CDwmEventManager::StartUsageLogging(_DWORD *a1, __int64 a2, int a3)
{
  __int64 Node; // rax
  time_t v7; // rbx
  __int64 v9; // [rsp+30h] [rbp-38h] BYREF
  _BYTE v10[8]; // [rsp+38h] [rbp-30h] BYREF
  int v11; // [rsp+40h] [rbp-28h]
  __int64 v12; // [rsp+48h] [rbp-20h]
  __int64 v13; // [rsp+58h] [rbp-10h]
  int v14; // [rsp+70h] [rbp+8h] BYREF
  int v15; // [rsp+88h] [rbp+20h] BYREF

  LODWORD(Node) = GetCurrentThreadId();
  if ( (_DWORD)Node == a1[2] )
  {
    Node = ATL::CAtlMap<unsigned __int64,DwmCoreAsimov::UsageEventData,ATL::CElementTraits<unsigned __int64>,ATL::CElementTraits<DwmCoreAsimov::UsageEventData>>::GetNode(
             (__int64 *)(*(_QWORD *)a1 + 168LL),
             a2,
             &v15,
             &v14,
             &v9);
    if ( !Node )
    {
      DwmCoreAsimov::UsageEventData::UsageEventData((__int64)v10, a3);
      v7 = time(0LL);
      Node = ATL::CAtlMap<unsigned __int64,DwmCoreAsimov::UsageEventData,ATL::CElementTraits<unsigned __int64>,ATL::CElementTraits<DwmCoreAsimov::UsageEventData>>::operator[](
               *(_QWORD *)a1 + 168LL,
               a2);
      *(_DWORD *)(Node + 8) = v11;
      *(_QWORD *)(Node + 16) = v12;
      *(_QWORD *)(Node + 32) = v13;
      *(_QWORD *)(Node + 24) = v7;
    }
  }
  return Node;
}
