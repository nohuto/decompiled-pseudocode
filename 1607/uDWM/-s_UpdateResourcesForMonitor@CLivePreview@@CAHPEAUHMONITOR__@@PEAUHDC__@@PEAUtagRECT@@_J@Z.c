/*
 * XREFs of ?s_UpdateResourcesForMonitor@CLivePreview@@CAHPEAUHMONITOR__@@PEAUHDC__@@PEAUtagRECT@@_J@Z @ 0x180075950
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x18004F240 (__security_check_cookie.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800503F8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     memset_0 @ 0x1800505A6 (memset_0.c)
 *     ?AddMultipleAndSet@?$DynArray@ULivePreviewResource@@$0A@@@QEAAJPEFBULivePreviewResource@@I@Z @ 0x180072EE4 (-AddMultipleAndSet@-$DynArray@ULivePreviewResource@@$0A@@@QEAAJPEFBULivePreviewResource@@I@Z.c)
 *     ?_UpdateResourcesForMonitor@CLivePreview@@AEAAJPEAULivePreviewResource@@@Z @ 0x180075098 (-_UpdateResourcesForMonitor@CLivePreview@@AEAAJPEAULivePreviewResource@@@Z.c)
 */

__int64 __fastcall CLivePreview::s_UpdateResourcesForMonitor(HMONITOR a1, HDC a2, const RECT *a3, CLivePreview *a4)
{
  int updated; // eax
  unsigned int v7; // ebx
  int v8; // edi
  _BYTE v10[112]; // [rsp+30h] [rbp-A8h] BYREF
  struct tagRECT rcDst; // [rsp+A0h] [rbp-38h] BYREF

  memset_0(v10, 0, 0x88uLL);
  CopyRect(&rcDst, a3);
  updated = CLivePreview::_UpdateResourcesForMonitor(a4, (struct LivePreviewResource *)v10);
  v7 = 0;
  v8 = updated;
  if ( updated >= 0 )
    DynArray<LivePreviewResource,0>::AddMultipleAndSet((__int64)a4 + 352, (__int64)v10);
  else
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, updated, 0x5A0u);
  LOBYTE(v7) = v8 >= 0;
  return v7;
}
