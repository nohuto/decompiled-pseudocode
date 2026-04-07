/*
 * XREFs of ?GetSyncedWindowData@CWindowList@@QEAAJPEAUIDwmWindow@@_NPEAPEAVCWindowData@@@Z @ 0x1800335A0
 * Callers:
 *     ?IsCursorChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x18000B0B0 (-IsCursorChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 *     ?ForceConnectClientNode@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x18000B2A0 (-ForceConnectClientNode@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 *     ?FreezeRepresentationChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x18000B380 (-FreezeRepresentationChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 *     ?ProcessFreezeSnapshotAndRelease@CWindowSnapshot@@QEAAJPEAVCWindowData@@@Z @ 0x180012518 (-ProcessFreezeSnapshotAndRelease@CWindowSnapshot@@QEAAJPEAVCWindowData@@@Z.c)
 *     ?UpdateProperties@CThumbnailVisual@@QEAAJK@Z @ 0x180019DC0 (-UpdateProperties@CThumbnailVisual@@QEAAJK@Z.c)
 *     ?WindowMinimizing@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x18002D1E0 (-WindowMinimizing@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 *     ?HitTestQuery@CWindowList@@AEAAJPEAUMILCMD_DWM_REDIRECTION_HITTESTQUERY@@@Z @ 0x18002D520 (-HitTestQuery@CWindowList@@AEAAJPEAUMILCMD_DWM_REDIRECTION_HITTESTQUERY@@@Z.c)
 *     ?ForceDisconnectClientNode@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x18002DAA0 (-ForceDisconnectClientNode@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 *     ?WindowTransitionChange@CWindowList@@UEAAJPEAUIDwmWindow@@W4DWMTRANSITION_TARGET@@AEBUtagRECT@@2222@Z @ 0x18002DB60 (-WindowTransitionChange@CWindowList@@UEAAJPEAUIDwmWindow@@W4DWMTRANSITION_TARGET@@AEBUtagRECT@@2.c)
 *     ?HasIconicBitmapChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x18002DC50 (-HasIconicBitmapChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 *     ?CloakChange@CWindowList@@UEAAJPEAUIDwmWindow@@0_N@Z @ 0x18002DD80 (-CloakChange@CWindowList@@UEAAJPEAUIDwmWindow@@0_N@Z.c)
 *     ?DPIChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x18002DF80 (-DPIChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 *     ?ForceActiveWindowAppearanceChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x18002E220 (-ForceActiveWindowAppearanceChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 *     ?LivePreviewExcludeChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x18002E2C0 (-LivePreviewExcludeChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 *     ?AccentPolicyChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x18002E360 (-AccentPolicyChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 *     ?GDISurfaceChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x18002E470 (-GDISurfaceChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 *     ?ChildContentChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x18002E7B0 (-ChildContentChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 *     ?ClipChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x18002E890 (-ClipChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 *     ?BlurBehindChange@CWindowList@@UEAAJPEAUIDwmWindow@@PEBU_DWM_BLURBEHIND@@@Z @ 0x18002EA30 (-BlurBehindChange@CWindowList@@UEAAJPEAUIDwmWindow@@PEBU_DWM_BLURBEHIND@@@Z.c)
 *     ?AlphaChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x18002EAF0 (-AlphaChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 *     ?ActivationChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x18002EC40 (-ActivationChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 *     ?ClientGlassChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x18002EEF0 (-ClientGlassChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 *     ?OwnerChange@CWindowList@@UEAAJPEAUIDwmWindow@@0@Z @ 0x18002F9F0 (-OwnerChange@CWindowList@@UEAAJPEAUIDwmWindow@@0@Z.c)
 *     ?TextChange@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_NOTIFYTEXTCHANGE@@@Z @ 0x1800303DC (-TextChange@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_NOTIFYTEXTCHANGE@@@Z.c)
 *     ?ZorderBandChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x180030540 (-ZorderBandChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 *     ?ShowHide@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x180031780 (-ShowHide@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 *     ?DestroySprite@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x180031F30 (-DestroySprite@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 *     ?GetSyncedWindowDataByHwnd@CWindowList@@QEAAJPEAUHWND__@@PEAPEAVCWindowData@@@Z @ 0x180032568 (-GetSyncedWindowDataByHwnd@CWindowList@@QEAAJPEAUHWND__@@PEAPEAVCWindowData@@@Z.c)
 *     ?CreateSprite@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x180032600 (-CreateSprite@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 *     ?GhostChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x180040BB0 (-GhostChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 *     ?ContentProtectionChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x18007F1B0 (-ContentProtectionChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 *     ?DesktopThumbnailChange@CWindowList@@UEAAJPEAUIDwmWindow@@UtagRECT@@1EK@Z @ 0x18007FB70 (-DesktopThumbnailChange@CWindowList@@UEAAJPEAUIDwmWindow@@UtagRECT@@1EK@Z.c)
 *     ?DisallowPeekChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x18007FE60 (-DisallowPeekChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 *     ?ForceIconicRepresentationChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x180080260 (-ForceIconicRepresentationChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 *     ?GetRootVisualForWindow@CWindowList@@UEAAJ_NPEAUIDwmWindow@@PEAPEAUMIL_CHANNEL__@@PEAI@Z @ 0x180080550 (-GetRootVisualForWindow@CWindowList@@UEAAJ_NPEAUIDwmWindow@@PEAPEAUMIL_CHANNEL__@@PEAI@Z.c)
 *     ?RemoveSwapchainTargetFromWindow@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x180081410 (-RemoveSwapchainTargetFromWindow@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 *     ?SetSwapchainTargetForWindow@CWindowList@@UEAAJPEAUIDwmWindow@@_NPEAUMIL_CHANNEL__@@I@Z @ 0x180081A80 (-SetSwapchainTargetForWindow@CWindowList@@UEAAJPEAUIDwmWindow@@_NPEAUMIL_CHANNEL__@@I@Z.c)
 *     ?TransitionsForceDisabledChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x180081C10 (-TransitionsForceDisabledChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 *     ?v_ShouldIncludeInSnapshot@CVirtualDesktopThumbnail@@MEAA_NPEAVCWindowData@@@Z @ 0x18009B480 (-v_ShouldIncludeInSnapshot@CVirtualDesktopThumbnail@@MEAA_NPEAVCWindowData@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800118D8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ??0CWindowData@@QEAA@XZ @ 0x18001D5D8 (--0CWindowData@@QEAA@XZ.c)
 *     ?AllocClear@ProcessHeapImpl@WPF@@UEAAPEAX_K@Z @ 0x18002B470 (-AllocClear@ProcessHeapImpl@WPF@@UEAAPEAX_K@Z.c)
 *     ?SyncWindowData@CWindowList@@QEAAJPEAUIDwmWindow@@PEAVCWindowData@@@Z @ 0x180032060 (-SyncWindowData@CWindowList@@QEAAJPEAUIDwmWindow@@PEAVCWindowData@@@Z.c)
 *     ?OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z @ 0x18004EF10 (-OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z.c)
 */

__int64 __fastcall CWindowList::GetSyncedWindowData(
        CWindowList *this,
        struct IDwmWindow *a2,
        char a3,
        struct CWindowData **a4)
{
  unsigned int v8; // esi
  struct CWindowData *v9; // rbx
  void *(__fastcall *v11)(WPF::ProcessHeapImpl *, size_t); // rdi
  CWindowData *v12; // rax
  CWindowData *v13; // rax
  int v14; // eax

  v8 = 0;
  v9 = (struct CWindowData *)(*(__int64 (__fastcall **)(struct IDwmWindow *))(*(_QWORD *)a2 + 8LL))(a2);
  if ( v9 || a3 && !(*(__int64 (__fastcall **)(struct IDwmWindow *))(*(_QWORD *)a2 + 16LL))(a2) )
    goto LABEL_2;
  v11 = *(void *(__fastcall **)(WPF::ProcessHeapImpl *, size_t))(*(_QWORD *)WPF::g_pProcessHeap + 16LL);
  if ( v11 == WPF::ProcessHeapImpl::AllocClear )
    v12 = (CWindowData *)WPF::ProcessHeapImpl::AllocClear(WPF::g_pProcessHeap, 0x4C8uLL);
  else
    v12 = (CWindowData *)v11(WPF::g_pProcessHeap, 1224LL);
  if ( v12 )
  {
    v13 = CWindowData::CWindowData(v12);
    v9 = v13;
    if ( v13 )
    {
      *((_QWORD *)v13 + 3) = a2;
      (**(void (__fastcall ***)(struct IDwmWindow *, CWindowData *))a2)(a2, v13);
      *((_QWORD *)v9 + 5) = (*(__int64 (__fastcall **)(struct IDwmWindow *))(*(_QWORD *)a2 + 24LL))(a2);
      v14 = CWindowList::SyncWindowData(this, a2, v9);
      v8 = v14;
      if ( v14 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v14, 0x5FCu);
        return v8;
      }
LABEL_2:
      *a4 = v9;
      return v8;
    }
  }
  MilInstrumentationCheckHR(0x14u, 0LL, 0LL, -2147024882, 0x5F8u);
  return 2147942414LL;
}
