/*
 * XREFs of ?Create@CImmersiveState@@SAJPEAPEAV1@_K@Z @ 0x180010260
 * Callers:
 *     ?_FadeWindow@CFade@@IEAAJPEAVCWindowData@@_N@Z @ 0x1800012D4 (-_FadeWindow@CFade@@IEAAJPEAVCWindowData@@_N@Z.c)
 *     ?ShouldAnimateShowWindow@CStoryboard@@SA_NPEBVCWindowData@@@Z @ 0x18000968C (-ShouldAnimateShowWindow@CStoryboard@@SA_NPEBVCWindowData@@@Z.c)
 *     ?_SetupHighZOrderStaticWindows@CTransitionVisualController@@IEAAJXZ @ 0x18000D470 (-_SetupHighZOrderStaticWindows@CTransitionVisualController@@IEAAJXZ.c)
 *     ?Activate@CLivePreview@@QEAAJ_NPEAUHWND__@@1W4LIVEPREVIEW_TRIGGER@@I0PEAUtagRECT@@@Z @ 0x180030B1C (-Activate@CLivePreview@@QEAAJ_NPEAUHWND__@@1W4LIVEPREVIEW_TRIGGER@@I0PEAUtagRECT@@@Z.c)
 *     ?OnBeginTransitionRequest@CAppLaunchSwitch@@UEAAJXZ @ 0x180091840 (-OnBeginTransitionRequest@CAppLaunchSwitch@@UEAAJXZ.c)
 *     ?OnEndTransitionRequest@CAppArrangementImmediate@@EEAAJXZ @ 0x180091950 (-OnEndTransitionRequest@CAppArrangementImmediate@@EEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180004308 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?Initialize@CImmersiveState@@AEAAJ_K@Z @ 0x180010564 (-Initialize@CImmersiveState@@AEAAJ_K@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x1800176E4 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z @ 0x1800488B0 (-OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z.c)
 */

__int64 __fastcall CImmersiveState::Create(struct CImmersiveState **a1, unsigned __int64 a2)
{
  __int64 v4; // rax
  volatile signed __int32 *v5; // rbx
  int v6; // eax
  unsigned int v7; // edi

  *a1 = 0LL;
  v4 = (*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 8LL))(
         WPF::g_pProcessHeap,
         88LL);
  v5 = (volatile signed __int32 *)v4;
  if ( v4 )
  {
    *(_DWORD *)(v4 + 8) = 1;
    *(_QWORD *)v4 = &CImmersiveState::`vftable';
    *(_QWORD *)(v4 + 16) = 0LL;
    *(_QWORD *)(v4 + 24) = 0LL;
    *(_DWORD *)(v4 + 32) = 0;
    *(_DWORD *)(v4 + 36) = 0;
    *(_DWORD *)(v4 + 40) = 0;
    *(_QWORD *)(v4 + 48) = 0LL;
    *(_QWORD *)(v4 + 64) = 0LL;
    *(_BYTE *)(v4 + 56) = 0;
    *(_QWORD *)(v4 + 72) = 0LL;
    *(_QWORD *)(v4 + 80) = 0LL;
  }
  else
  {
    v5 = 0LL;
  }
  if ( v5 )
  {
    v6 = CImmersiveState::Initialize((CImmersiveState *)v5, a2);
    v7 = v6;
    if ( v6 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v6, 0x23u);
    }
    else
    {
      *a1 = (struct CImmersiveState *)v5;
      _InterlockedIncrement(v5 + 2);
    }
    CBaseObject::Release((CBaseObject *)v5);
  }
  else
  {
    v7 = -2147024882;
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, -2147024882, 0x21u);
  }
  return v7;
}
