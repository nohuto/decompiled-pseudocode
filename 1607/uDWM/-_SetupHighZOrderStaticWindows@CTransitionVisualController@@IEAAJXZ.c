/*
 * XREFs of ?_SetupHighZOrderStaticWindows@CTransitionVisualController@@IEAAJXZ @ 0x18000CC30
 * Callers:
 *     ?SetupZOrder@CTransitionVisualController@@QEAAJXZ @ 0x18000D208 (-SetupZOrder@CTransitionVisualController@@QEAAJXZ.c)
 *     ?OnVisibilityUpdated@CWindowData@@QEAAJXZ @ 0x18001B188 (-OnVisibilityUpdated@CWindowData@@QEAAJXZ.c)
 * Callees:
 *     ?IsLauncherShownAboveWindow@CImmersiveState@@QEAA_NPEBVCWindowData@@@Z @ 0x180001154 (-IsLauncherShownAboveWindow@CImmersiveState@@QEAA_NPEBVCWindowData@@@Z.c)
 *     ?_IsAnimationComponentVisible@CTransitionVisualController@@IEAA_NPEAVCAnimationComponent@@@Z @ 0x180004424 (-_IsAnimationComponentVisible@CTransitionVisualController@@IEAA_NPEAVCAnimationComponent@@@Z.c)
 *     ?_IsOwnedByVisibleAC@CTransitionVisualController@@IEAA_NPEBVCWindowData@@@Z @ 0x1800044C8 (-_IsOwnedByVisibleAC@CTransitionVisualController@@IEAA_NPEBVCWindowData@@@Z.c)
 *     ?_ShouldMoveOriginalWindowOffscreenForClone@CTransitionVisualController@@IEAA_NPEAVCWindowData@@@Z @ 0x180004540 (-_ShouldMoveOriginalWindowOffscreenForClone@CTransitionVisualController@@IEAA_NPEAVCWindowData@@.c)
 *     ?_CleanupHighZOrderClone@CTransitionVisualController@@IEAAXAEAUTlwPair@1@@Z @ 0x180004640 (-_CleanupHighZOrderClone@CTransitionVisualController@@IEAAXAEAUTlwPair@1@@Z.c)
 *     ?ShouldCloneWindow@CTransitionVisualController@@SA_NPEAUHWND__@@@Z @ 0x1800053D4 (-ShouldCloneWindow@CTransitionVisualController@@SA_NPEAUHWND__@@@Z.c)
 *     ?Create@CImmersiveState@@SAJPEAPEAV1@_K@Z @ 0x18000B5A4 (-Create@CImmersiveState@@SAJPEAPEAV1@_K@Z.c)
 *     ?RemoveAt@?$DynArray@UTlwPair@CTransitionVisualController@@$0A@@@QEAAJI@Z @ 0x18000BE1C (-RemoveAt@-$DynArray@UTlwPair@CTransitionVisualController@@$0A@@@QEAAJI@Z.c)
 *     ?_FindClone@CTransitionVisualController@@IEAAIPEAVCWindowData@@_N@Z @ 0x18000E834 (-_FindClone@CTransitionVisualController@@IEAAIPEAVCWindowData@@_N@Z.c)
 *     ?_StageCloneRelative@CTransitionVisualController@@IEAAJPEAVCTopLevelWindow@@PEAVCVisual@@_N1222PEA_N@Z @ 0x18000E898 (-_StageCloneRelative@CTransitionVisualController@@IEAAJPEAVCTopLevelWindow@@PEAVCVisual@@_N1222P.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180019B60 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z @ 0x18001CE70 (-InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z.c)
 *     ?Free@ProcessHeapImpl@WPF@@UEAAXPEAX@Z @ 0x18002ADD0 (-Free@ProcessHeapImpl@WPF@@UEAAXPEAX@Z.c)
 *     ?Alloc@ProcessHeapImpl@WPF@@UEAAPEAX_K@Z @ 0x18002AE50 (-Alloc@ProcessHeapImpl@WPF@@UEAAPEAX_K@Z.c)
 *     ?GetWindowListForDesktop@CWindowList@@QEAAPEAU_LIST_ENTRY@@_K@Z @ 0x180030360 (-GetWindowListForDesktop@CWindowList@@QEAAPEAU_LIST_ENTRY@@_K@Z.c)
 *     ?HasVisibleStyle@CTransitionVisualController@@SA_NPEAUHWND__@@@Z @ 0x180042168 (-HasVisibleStyle@CTransitionVisualController@@SA_NPEAUHWND__@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800503F8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     memset_0 @ 0x1800505A6 (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800505E0 (_guard_dispatch_icall_nop.c)
 *     Template_pp @ 0x18008F6F4 (Template_pp.c)
 */

__int64 __fastcall CTransitionVisualController::_SetupHighZOrderStaticWindows(CTransitionVisualController *this)
{
  unsigned int v1; // ebx
  _BYTE *v2; // r12
  bool v3; // zf
  __int64 i; // rdx
  __int64 v6; // rcx
  unsigned __int64 v7; // rbx
  unsigned __int64 v8; // r13
  void *(__fastcall *v9)(WPF::ProcessHeapImpl *__hidden, unsigned __int64); // rax
  _BYTE *v10; // rax
  __int64 v11; // rbp
  int v12; // r14d
  struct _LIST_ENTRY *v13; // r15
  int v14; // eax
  struct _LIST_ENTRY *Blink; // rdi
  __int64 v16; // rbx
  HWND v17; // rcx
  CTransitionVisualController *v18; // rcx
  char v19; // bp
  __int64 v20; // rbx
  __int64 v21; // r15
  __int64 v22; // rax
  unsigned int Flink; // eax
  int v24; // ecx
  unsigned int Clone; // eax
  char v26; // r8
  __int64 v27; // r9
  CTransitionVisualController *v28; // rcx
  int v29; // eax
  __int64 v30; // rax
  struct CVisual *v31; // rbx
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // rbx
  __int64 v35; // rdi
  __int64 v36; // rdx
  void (__fastcall *v37)(WPF::ProcessHeapImpl *__hidden, void *); // rax
  bool ShouldMoveOriginalWindowOffscreenForClone; // al
  int v40; // eax
  __int64 v41; // r9
  __int64 v42; // [rsp+50h] [rbp-58h]
  struct _LIST_ENTRY *WindowListForDesktop; // [rsp+58h] [rbp-50h]
  unsigned int v44; // [rsp+B0h] [rbp+8h]
  int v45; // [rsp+B8h] [rbp+10h]
  __int64 v46; // [rsp+C0h] [rbp+18h]
  CImmersiveState *v47; // [rsp+C8h] [rbp+20h] BYREF

  v1 = 0;
  v2 = 0LL;
  v44 = 0;
  v3 = *((_QWORD *)this + 12) == -1LL;
  v47 = 0LL;
  if ( v3 )
    goto LABEL_59;
  for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 12); *(_BYTE *)(*((_QWORD *)this + 3) + 8 * v6 + 17) = 0 )
  {
    v6 = 3 * i;
    i = (unsigned int)(i + 1);
  }
  v7 = *((int *)this + 34);
  v8 = v7;
  v9 = *(void *(__fastcall **)(WPF::ProcessHeapImpl *__hidden, unsigned __int64))(*(_QWORD *)WPF::g_pProcessHeap + 8LL);
  if ( v9 == WPF::ProcessHeapImpl::Alloc )
    v10 = WPF::ProcessHeapImpl::Alloc(WPF::g_pProcessHeap, v7);
  else
    v10 = (_BYTE *)v9(WPF::g_pProcessHeap, v7);
  v2 = v10;
  if ( !v10 )
  {
    v1 = -2147024882;
    MilInstrumentationCheckHR(
      0x14u,
      &CTransitionVisualController::MILINSTRUMENTATIONHRESULTLIST,
      2u,
      -2147024882,
      0x7E4u);
    goto LABEL_59;
  }
  memset_0(v10, 0, v7);
  LODWORD(v11) = v7 - 1;
  v12 = v7 - 1;
  v45 = v7 - 1;
  WindowListForDesktop = CWindowList::GetWindowListForDesktop(
                           *((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 165),
                           *((_QWORD *)this + 12));
  v13 = WindowListForDesktop;
  if ( !WindowListForDesktop )
    goto LABEL_52;
  v14 = CImmersiveState::Create(&v47, *((_QWORD *)this + 12));
  v44 = v14;
  v1 = v14;
  if ( v14 >= 0 )
  {
    Blink = WindowListForDesktop->Blink;
    if ( (int)v11 >= 0 )
    {
      v11 = (int)v11;
      v46 = v11;
      v42 = (int)v11;
LABEL_11:
      if ( Blink == v13 )
        goto LABEL_52;
      do
      {
        v16 = 8LL * (unsigned int)v12;
        v17 = *(HWND *)(*(_QWORD *)(v16 + *((_QWORD *)this + 14)) + 16LL);
        if ( v17 != HWND_MESSAGE|0x2LL )
        {
          if ( (GetWindowLongPtrW(v17, -16) & 0x10000000) != 0
            || CTransitionVisualController::_IsAnimationComponentVisible(
                 v18,
                 *(struct CAnimationComponent **)(v16 + *((_QWORD *)this + 14))) )
          {
            v19 = 0;
            v20 = v8 - 1;
            if ( (__int64)(v8 - 1) >= 0 )
            {
              v21 = v46;
              do
              {
                v22 = *(_QWORD *)(*((_QWORD *)this + 14) + 8 * v20);
                if ( !*(_BYTE *)(v22 + 65)
                  && *(_DWORD *)(*(_QWORD *)(v22 + 128) + 24LL) != 4
                  && (*(_BYTE *)(v22 + 67) || (GetWindowLongPtrW(*(HWND *)(v22 + 16), -16) & 0x10000000) != 0)
                  && *(struct _LIST_ENTRY **)(*(_QWORD *)(*((_QWORD *)this + 14) + 8 * v20) + 16LL) == Blink[2].Blink )
                {
                  v19 = 1;
                  --v12;
                  v2[v20] = 1;
                  --v21;
                }
                --v20;
              }
              while ( v20 >= 0 );
              v46 = v21;
              v13 = WindowListForDesktop;
              if ( v19 )
                goto LABEL_26;
            }
            if ( !Blink[1].Blink )
              goto LABEL_26;
            if ( !Blink[24].Flink )
              goto LABEL_26;
            if ( ((__int64)Blink[36].Flink & 1) == 0 )
              goto LABEL_26;
            if ( (HIDWORD(Blink[6].Flink) & 0x20000000) != 0 )
              goto LABEL_26;
            if ( (BYTE4(Blink[36].Flink) & 1) != 0 )
              goto LABEL_26;
            Flink = (unsigned int)Blink[7].Flink;
            if ( Flink <= 0xC )
            {
              v24 = 4162;
              if ( _bittest(&v24, Flink) )
                goto LABEL_26;
            }
            if ( !CTransitionVisualController::ShouldCloneWindow((HWND)Blink[2].Blink)
              || CImmersiveState::IsLauncherShownAboveWindow(v47, (const struct tagRECT *)Blink)
              || CTransitionVisualController::_IsOwnedByVisibleAC(this, (const struct CWindowData *)Blink) )
            {
              goto LABEL_26;
            }
            Clone = CTransitionVisualController::_FindClone(this, (struct CWindowData *)Blink, 1);
            v27 = Clone;
            if ( Clone >= *((_DWORD *)this + 12) )
              v26 = 0;
            else
              *(_BYTE *)(*((_QWORD *)this + 3) + 24LL * Clone + 17) = v26;
            v28 = (CTransitionVisualController *)v42;
            if ( v42 >= 0 )
            {
              v29 = v45;
              do
              {
                if ( !v2[(_QWORD)v28] )
                  break;
                --v29;
                v28 = (CTransitionVisualController *)((char *)v28 - 1);
              }
              while ( (__int64)v28 >= 0 );
              v42 = (__int64)v28;
              v45 = v29;
            }
            if ( v45 >= 0
              && (_mm_lfence(),
                  v28 = *(CTransitionVisualController **)(*((_QWORD *)this + 14) + 8LL * (unsigned int)v45),
                  (v30 = *((_QWORD *)v28 + 5)) != 0) )
            {
              v31 = (struct CVisual *)(v30 + 8);
            }
            else
            {
              v31 = 0LL;
            }
            if ( !v26 )
            {
              ShouldMoveOriginalWindowOffscreenForClone = CTransitionVisualController::_ShouldMoveOriginalWindowOffscreenForClone(
                                                            v28,
                                                            (struct CWindowData *)Blink);
              v40 = CTransitionVisualController::_StageCloneRelative(
                      this,
                      (struct CTopLevelWindow *)Blink[24].Flink,
                      *((struct CVisual **)this + 2),
                      1,
                      v31,
                      1,
                      0,
                      ShouldMoveOriginalWindowOffscreenForClone,
                      0LL);
              v44 = v40;
              v1 = v40;
              if ( v40 >= 0 )
                goto LABEL_47;
              MilInstrumentationCheckHR(
                0x14u,
                &CTransitionVisualController::MILINSTRUMENTATIONHRESULTLIST,
                2u,
                v40,
                0x86Eu);
              goto LABEL_57;
            }
            VisualCollection::InsertRelative(
              (VisualCollection *)(*((_QWORD *)this + 2) + 32LL),
              *(struct CVisual **)(*((_QWORD *)this + 3) + 24 * v27 + 8),
              v31,
              1,
              1);
LABEL_47:
            if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
            {
              if ( v45 < 0 )
              {
                v41 = 0LL;
              }
              else
              {
                _mm_lfence();
                v33 = *(_QWORD *)(*((_QWORD *)this + 14) + 8LL * (unsigned int)v45);
                v41 = *(_QWORD *)(v33 + 16);
              }
              Template_pp(v33, v32, Blink[2].Blink, v41);
            }
LABEL_26:
            Blink = Blink->Blink;
            if ( v12 < 0 )
              break;
            v11 = v46;
            goto LABEL_11;
          }
          CTransitionVisualController::HasVisibleStyle(*(HWND *)(*(_QWORD *)(v16 + *((_QWORD *)this + 14)) + 16LL));
        }
        v2[v11] = 1;
        --v12;
        v46 = --v11;
      }
      while ( v12 >= 0 );
    }
LABEL_52:
    v34 = (unsigned int)(*((_DWORD *)this + 12) - 1);
    if ( (int)v34 >= 0 )
    {
      v35 = 24LL * (int)v34;
      do
      {
        v36 = *((_QWORD *)this + 3);
        if ( *(_BYTE *)(v36 + v35 + 16) && !*(_BYTE *)(v36 + v35 + 17) )
        {
          CTransitionVisualController::_CleanupHighZOrderClone(this, (struct CTopLevelWindow **)(v36 + 24 * v34));
          DynArray<CTransitionVisualController::TlwPair,0>::RemoveAt((__int64 *)this + 3, v34);
        }
        v35 -= 24LL;
        v34 = (unsigned int)(v34 - 1);
      }
      while ( (int)v34 >= 0 );
    }
    v1 = v44;
    goto LABEL_57;
  }
  MilInstrumentationCheckHR(0x14u, &CTransitionVisualController::MILINSTRUMENTATIONHRESULTLIST, 2u, v14, 0x7EDu);
LABEL_57:
  if ( v47 )
    CBaseObject::Release(v47);
LABEL_59:
  v37 = *(void (__fastcall **)(WPF::ProcessHeapImpl *__hidden, void *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL);
  if ( v37 == WPF::ProcessHeapImpl::Free )
    WPF::ProcessHeapImpl::Free(WPF::g_pProcessHeap, v2);
  else
    v37(WPF::g_pProcessHeap, v2);
  return v1;
}
