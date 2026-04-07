/*
 * XREFs of ?RegisterForGlobalTimeChangeNotification@CDesktopManager@@SAJPEAVCVisual@@@Z @ 0x18003EAA0
 * Callers:
 *     ?ActivateTimeline@CButton@@AEAAJPEAPEAV?$CTimeline@M@@NMMW4InterpolationMode@@@Z @ 0x18001063C (-ActivateTimeline@CButton@@AEAAJPEAPEAV-$CTimeline@M@@NMMW4InterpolationMode@@@Z.c)
 *     ?StartAnimation@CTopLevelWindow3D@@AEAAJW4WindowAnimationType@1@@Z @ 0x180033D70 (-StartAnimation@CTopLevelWindow3D@@AEAAJW4WindowAnimationType@1@@Z.c)
 *     ?OnWindowStyleUpdated@CTopLevelWindow3D@@QEAAJXZ @ 0x1800359D0 (-OnWindowStyleUpdated@CTopLevelWindow3D@@QEAAJXZ.c)
 *     ?_FadeOutToGlass@CLivePreview@@AEAAJPEBVCWindowData@@@Z @ 0x18004E044 (-_FadeOutToGlass@CLivePreview@@AEAAJPEBVCWindowData@@@Z.c)
 *     ?RegisterGlobalTimer@CTouchVisual@@IEAAJXZ @ 0x18006FEDC (-RegisterGlobalTimer@CTouchVisual@@IEAAJXZ.c)
 *     ?_FadeInToNormal@CLivePreview@@AEAAJXZ @ 0x180072268 (-_FadeInToNormal@CLivePreview@@AEAAJXZ.c)
 *     ?StartIconicAnimation@CTopLevelWindow@@QEAAXXZ @ 0x18007E1C0 (-StartIconicAnimation@CTopLevelWindow@@QEAAXXZ.c)
 *     ?StartLivePreviewAnimation@CTopLevelWindow@@QEAAJW4Enum@LivePreviewAnimation@@@Z @ 0x18007E1F4 (-StartLivePreviewAnimation@CTopLevelWindow@@QEAAJW4Enum@LivePreviewAnimation@@@Z.c)
 *     ?RegisterGlobalTimer@CAnimatedGlassSheet@@AEAAJXZ @ 0x1800835EC (-RegisterGlobalTimer@CAnimatedGlassSheet@@AEAAJXZ.c)
 *     ?RegisterGlobalTimer@CRippleEffect@@AEAAJXZ @ 0x180084098 (-RegisterGlobalTimer@CRippleEffect@@AEAAJXZ.c)
 *     ?SetupTimeline@CScreenRotation@@AEAAJW4RotationTimelineReason@1@@Z @ 0x180092108 (-SetupTimeline@CScreenRotation@@AEAAJW4RotationTimelineReason@1@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800118D8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x18002B384 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 */

__int64 __fastcall CDesktopManager::RegisterForGlobalTimeChangeNotification(struct CVisual *a1)
{
  CDesktopManager *v1; // r10
  unsigned int v2; // eax
  unsigned int v3; // edx
  unsigned int v4; // ebx
  int v6; // eax
  struct CVisual *v7; // [rsp+40h] [rbp+8h] BYREF

  v7 = a1;
  v1 = CDesktopManager::s_pDesktopManagerInstance;
  v2 = *((_DWORD *)CDesktopManager::s_pDesktopManagerInstance + 362);
  v3 = v2 + 1;
  if ( v2 + 1 < v2 )
  {
    v4 = -2147024362;
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, -2147024362, 0xB5u);
    goto LABEL_9;
  }
  v4 = 0;
  if ( v3 > *((_DWORD *)CDesktopManager::s_pDesktopManagerInstance + 361) )
  {
    v6 = DynArrayImpl<0>::AddMultipleAndSet((__int64)CDesktopManager::s_pDesktopManagerInstance + 1424, 8u, 1, &v7);
    v4 = v6;
    if ( v6 >= 0 )
      goto LABEL_4;
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v6, 0xC0u);
LABEL_9:
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v4, 0x4E0u);
    return v4;
  }
  *(_QWORD *)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 178) + 8LL * v2) = v7;
  *((_DWORD *)v1 + 362) = v3;
LABEL_4:
  _InterlockedIncrement((volatile signed __int32 *)v7 + 2);
  return v4;
}
