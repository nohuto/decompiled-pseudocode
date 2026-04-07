/*
 * XREFs of ?ActivateTimeline@CButton@@AEAAJPEAPEAV?$CTimeline@M@@NMMW4InterpolationMode@@@Z @ 0x1800038DC
 * Callers:
 *     ?RedrawVisual@CButton@@AEAAJXZ @ 0x18001A070 (-RedrawVisual@CButton@@AEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180004308 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?RegisterForGlobalTimeChangeNotification@CDesktopManager@@SAJPEAVCVisual@@@Z @ 0x18000831C (-RegisterForGlobalTimeChangeNotification@CDesktopManager@@SAJPEAVCVisual@@@Z.c)
 *     ??0?$CTimeline@M@@QEAA@NMMW4InterpolationMode@@@Z @ 0x1800159C0 (--0-$CTimeline@M@@QEAA@NMMW4InterpolationMode@@@Z.c)
 *     ?OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z @ 0x1800488B0 (-OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z.c)
 *     Template_qp @ 0x18006C038 (Template_qp.c)
 */

__int64 __fastcall CButton::ActivateTimeline(struct CVisual *a1, __int64 *a2, double a3)
{
  unsigned int v3; // esi
  __int64 v6; // rax
  __int64 v8; // rax
  int v9; // edx
  int v10; // r8d
  int v11; // r9d
  __int64 v12; // rax

  v3 = 0;
  if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
    Template_qp(a1, &UdwmAnimation_Start, 7LL);
  v6 = *a2;
  if ( *a2 )
  {
    *(_QWORD *)(v6 + 48) = *(_QWORD *)(v6 + 32);
    *(double *)(v6 + 24) = a3;
    *(_WORD *)(v6 + 72) = 256;
    CDesktopManager::s_fTimelineDirty = 1;
  }
  else
  {
    v8 = (*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 16LL))(
           WPF::g_pProcessHeap,
           80LL);
    if ( v8 )
      v12 = CTimeline<float>::CTimeline<float>(v8, v9, v10, v11, 0);
    else
      v12 = 0LL;
    *a2 = v12;
    if ( v12 )
    {
      CDesktopManager::RegisterForGlobalTimeChangeNotification(a1);
    }
    else
    {
      v3 = -2147024882;
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0x23Fu);
    }
  }
  return v3;
}
