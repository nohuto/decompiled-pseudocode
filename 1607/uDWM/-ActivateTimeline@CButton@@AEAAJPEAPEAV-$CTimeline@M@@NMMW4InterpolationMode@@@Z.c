/*
 * XREFs of ?ActivateTimeline@CButton@@AEAAJPEAPEAV?$CTimeline@M@@NMMW4InterpolationMode@@@Z @ 0x1800070A8
 * Callers:
 *     ?RedrawVisual@CButton@@AEAAJXZ @ 0x18001BB64 (-RedrawVisual@CButton@@AEAAJXZ.c)
 * Callees:
 *     ??0?$CTimeline@M@@QEAA@NMMW4InterpolationMode@@@Z @ 0x180017B34 (--0-$CTimeline@M@@QEAA@NMMW4InterpolationMode@@@Z.c)
 *     ?RegisterForGlobalTimeChangeNotification@CDesktopManager@@SAJPEAVCVisual@@@Z @ 0x180041880 (-RegisterForGlobalTimeChangeNotification@CDesktopManager@@SAJPEAVCVisual@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800503F8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800505E0 (_guard_dispatch_icall_nop.c)
 *     Template_qp @ 0x180075F2C (Template_qp.c)
 */

__int64 __fastcall CButton::ActivateTimeline(struct CVisual *a1, __int64 *a2, double a3)
{
  unsigned int v3; // ebx
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
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0x1DAu);
    }
  }
  return v3;
}
