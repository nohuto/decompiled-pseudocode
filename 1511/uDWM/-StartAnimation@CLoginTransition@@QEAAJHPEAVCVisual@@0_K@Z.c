/*
 * XREFs of ?StartAnimation@CLoginTransition@@QEAAJHPEAVCVisual@@0_K@Z @ 0x18004055C
 * Callers:
 *     ?SwitchDesktop@CWindowList@@UEAAJK_K@Z @ 0x18002CF00 (-SwitchDesktop@CWindowList@@UEAAJK_K@Z.c)
 * Callees:
 *     ?Create@CAnimatedTransitionVisual@@SAJQEAUMIL_CHANNEL__@@PEAPEAV1@@Z @ 0x18000C06C (-Create@CAnimatedTransitionVisual@@SAJQEAUMIL_CHANNEL__@@PEAPEAV1@@Z.c)
 *     ?ProcessSnapshotOnVisual@CAnimatedTransitionVisual@@QEAAJPEAVCVisual@@AEBUtagRECT@@@Z @ 0x18000D8A4 (-ProcessSnapshotOnVisual@CAnimatedTransitionVisual@@QEAAJPEAVCVisual@@AEBUtagRECT@@@Z.c)
 *     ?SetVisual@CAnimatedTransitionVisual@@QEAAJPEAVCVisual@@_NPEBUtagRECT@@@Z @ 0x18000D970 (-SetVisual@CAnimatedTransitionVisual@@QEAAJPEAVCVisual@@_NPEBUtagRECT@@@Z.c)
 *     ?SetBeginAlpha@CAnimatedTransitionVisual@@QEAAXM@Z @ 0x18000DCC0 (-SetBeginAlpha@CAnimatedTransitionVisual@@QEAAXM@Z.c)
 *     ?SetBeginRect@CAnimatedTransitionVisual@@QEAAXPEBUtagRECT@@@Z @ 0x18000DCF8 (-SetBeginRect@CAnimatedTransitionVisual@@QEAAXPEBUtagRECT@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800118D8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?Create@CVisual@@SAJQEAUMIL_CHANNEL__@@PEAPEAV1@@Z @ 0x18001803C (-Create@CVisual@@SAJQEAUMIL_CHANNEL__@@PEAPEAV1@@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18001CDE0 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z @ 0x180020020 (-InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z.c)
 *     ?PostStartAnimations@CDesktopManager@@QEAAJXZ @ 0x180021844 (-PostStartAnimations@CDesktopManager@@QEAAJXZ.c)
 *     ?MoveToFront@CVisual@@QEAAJ_N@Z @ 0x180021FC8 (-MoveToFront@CVisual@@QEAAJ_N@Z.c)
 *     ?SetOffset@CVisual@@QEAAXPEBUtagPOINT@@@Z @ 0x1800224E8 (-SetOffset@CVisual@@QEAAXPEBUtagPOINT@@@Z.c)
 *     ?SetDirtyFlags@CVisual@@UEAAXK@Z @ 0x180022D90 (-SetDirtyFlags@CVisual@@UEAAXK@Z.c)
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x18002B05C (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x18002B384 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?GetRenderTargetRootVisualForDesktop@CWindowList@@QEAAPEAVCVisual@@_K@Z @ 0x18002C690 (-GetRenderTargetRootVisualForDesktop@CWindowList@@QEAAPEAVCVisual@@_K@Z.c)
 *     ?Release@CAnimationEngine@@UEAAKXZ @ 0x180036E40 (-Release@CAnimationEngine@@UEAAKXZ.c)
 *     ?RegisterForAnimationCompleteNotification@CAnimationEngine@@QEAAJPEAUIAnimationListener@@@Z @ 0x1800389A4 (-RegisterForAnimationCompleteNotification@CAnimationEngine@@QEAAJPEAUIAnimationListener@@@Z.c)
 *     ?ScheduleStartAnimation@CAnimationEngine@@QEAAJHAEBV?$DynArray@PEAUIAnimatedVisual@@$0A@@@PEAI@Z @ 0x180038C5C (-ScheduleStartAnimation@CAnimationEngine@@QEAAJHAEBV-$DynArray@PEAUIAnimatedVisual@@$0A@@@PEAI@Z.c)
 *     ?_CleanupAnimation@CLoginTransition@@AEAAXXZ @ 0x180040338 (-_CleanupAnimation@CLoginTransition@@AEAAXXZ.c)
 *     ?StopAnimation@CLoginTransition@@QEAAJXZ @ 0x180040534 (-StopAnimation@CLoginTransition@@QEAAJXZ.c)
 *     ?AcquireAnimationEngine@CDesktopManager@@SAPEAVCAnimationEngine@@XZ @ 0x180040AFC (-AcquireAnimationEngine@CDesktopManager@@SAPEAVCAnimationEngine@@XZ.c)
 *     __security_check_cookie @ 0x18004EBE0 (__security_check_cookie.c)
 *     ?OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z @ 0x18004EF10 (-OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z.c)
 *     TemplateEventDescriptor @ 0x180073BC8 (TemplateEventDescriptor.c)
 */

__int64 __fastcall CLoginTransition::StartAnimation(
        CLoginTransition *this,
        int a2,
        struct tagPOINT *a3,
        struct tagPOINT *a4,
        unsigned __int64 a5)
{
  int v7; // r13d
  __int64 v9; // r12
  CAnimationEngine *v10; // rsi
  int started; // ebx
  __int64 v12; // rax
  int v13; // eax
  int v14; // eax
  unsigned int v15; // edx
  struct CResource ***v17; // r13
  __int64 v18; // rcx
  struct CResource ***v19; // rsi
  __int64 v20; // rcx
  __int64 v21; // rcx
  CBaseObject *v22; // rcx
  struct tagRECT v23; // xmm6
  int v24; // eax
  int v25; // eax
  struct CResource **v26; // rdi
  int v27; // esi
  int v28; // r14d
  int v29; // eax
  int v30; // ecx
  int v31; // esi
  int v32; // eax
  __int64 v33; // rdi
  int v34; // ecx
  int v35; // eax
  struct CResource **v36; // rax
  _QWORD *v37; // rdi
  int v38; // ecx
  __int64 v39; // rax
  struct CResource **v40; // rcx
  __int64 v41; // rcx
  __int64 v42; // rcx
  struct CResource *v43; // rax
  CVisual **v44; // rsi
  struct CVisual *v45; // rbx
  struct CVisual *RenderTargetRootVisualForDesktop; // rax
  int inserted; // eax
  struct CVisual *v48; // rdx
  struct CVisual *v49; // rdx
  int v50; // eax
  unsigned int v51; // eax
  int v52; // r9d
  int v53; // r9d
  int v54; // edi
  int v55; // eax
  unsigned int v56; // [rsp+28h] [rbp-B1h]
  unsigned int v57; // [rsp+28h] [rbp-B1h]
  unsigned int v58; // [rsp+28h] [rbp-B1h]
  bool v59; // [rsp+38h] [rbp-A1h]
  struct CAnimationEngine *v60; // [rsp+40h] [rbp-99h]
  struct CResource *v61; // [rsp+48h] [rbp-91h] BYREF
  int v62; // [rsp+50h] [rbp-89h]
  struct tagPOINT v63; // [rsp+58h] [rbp-81h] BYREF
  __int128 v64; // [rsp+60h] [rbp-79h] BYREF
  __int64 v65; // [rsp+70h] [rbp-69h]
  unsigned int v66; // [rsp+78h] [rbp-61h]
  __int64 v67; // [rsp+80h] [rbp-59h] BYREF
  _DWORD v68[2]; // [rsp+88h] [rbp-51h] BYREF
  __int64 v69; // [rsp+90h] [rbp-49h] BYREF
  struct CResource **v70; // [rsp+98h] [rbp-41h] BYREF
  struct tagRECT v71; // [rsp+A8h] [rbp-31h] BYREF
  struct tagRECT rc; // [rsp+B8h] [rbp-21h] BYREF

  v62 = a2;
  v65 = 0LL;
  v66 = 0;
  v59 = a2 == 55;
  v7 = a2;
  v9 = 0LL;
  v64 = 0LL;
  if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
    TemplateEventDescriptor(this, &UdwmLoginTransition_Start);
  *((_QWORD *)this + 10) = a5;
  *((_DWORD *)this + 18) = v7;
  v60 = CDesktopManager::AcquireAnimationEngine();
  v10 = v60;
  if ( !v60 )
  {
    v56 = 47;
    goto LABEL_67;
  }
  started = CLoginTransition::StopAnimation(this);
  if ( started < 0 )
  {
    v57 = 50;
    goto LABEL_71;
  }
  if ( !v59 )
  {
    *((_QWORD *)this + 4) = a3;
    if ( a3 )
      _InterlockedIncrement((volatile signed __int32 *)&a3[1]);
    *((_QWORD *)this + 5) = a4;
    if ( a4 )
      _InterlockedIncrement((volatile signed __int32 *)&a4[1]);
    v17 = (struct CResource ***)((char *)this + 8);
    v18 = *((_QWORD *)this + 1);
    if ( v18 )
    {
      CBaseObject::Release((CBaseObject *)(v18 + 8));
      *v17 = 0LL;
    }
    v19 = (struct CResource ***)((char *)this + 16);
    v20 = *((_QWORD *)this + 2);
    if ( v20 )
    {
      CBaseObject::Release((CBaseObject *)(v20 + 8));
      *v19 = 0LL;
    }
    v21 = *((_QWORD *)this + 3);
    if ( v21 )
    {
      CBaseObject::Release((CBaseObject *)(v21 + 8));
      *((_QWORD *)this + 3) = 0LL;
    }
    v22 = (CBaseObject *)*((_QWORD *)this + 6);
    if ( v22 )
    {
      CBaseObject::Release(v22);
      *((_QWORD *)this + 6) = 0LL;
    }
    started = CVisual::Create(
                *((struct MIL_CHANNEL__ *const *)CDesktopManager::s_pDesktopManagerInstance + 4),
                (struct CVisual **)this + 6);
    if ( started >= 0 )
    {
      started = CAnimatedTransitionVisual::Create(
                  *((struct MIL_CHANNEL__ *const *)CDesktopManager::s_pDesktopManagerInstance + 4),
                  (struct CAnimatedTransitionVisual **)this + 1);
      if ( started < 0 )
      {
        v58 = 78;
        goto LABEL_78;
      }
      started = CAnimatedTransitionVisual::Create(
                  *((struct MIL_CHANNEL__ *const *)CDesktopManager::s_pDesktopManagerInstance + 4),
                  (struct CAnimatedTransitionVisual **)this + 2);
      if ( started < 0 )
      {
        v58 = 79;
        goto LABEL_78;
      }
      v63.x = -32000;
      v63.y = -32000;
      CVisual::SetOffset(a3, &v63);
      CVisual::SetOffset(a4, &v63);
      v23 = *(struct tagRECT *)((char *)CDesktopManager::s_pDesktopManagerInstance + 1304);
      v71 = v23;
      rc = v23;
      OffsetRect(&rc, -32000, -32000);
      v24 = CAnimatedTransitionVisual::SetVisual(*v17, (struct CVisual *)a3, 1, &rc);
      started = v24;
      if ( v24 < 0 )
      {
        v58 = 97;
        v53 = v24;
        goto LABEL_83;
      }
      started = CAnimatedTransitionVisual::SetVisual(*v19, (struct CVisual *)a4, 0, &rc);
      if ( started < 0 )
      {
        v58 = 98;
        goto LABEL_78;
      }
      v25 = CAnimatedTransitionVisual::ProcessSnapshotOnVisual(*v17, (struct CVisual *)a3, &rc);
      started = v25;
      if ( v25 < 0 )
      {
        v58 = 101;
        v53 = v25;
        goto LABEL_83;
      }
      v26 = *v17;
      v27 = _mm_cvtsi128_si32(_mm_srli_si128((__m128i)v23, 8));
      v28 = _mm_cvtsi128_si32(_mm_srli_si128((__m128i)v23, 12)) - _mm_cvtsi128_si32(_mm_srli_si128((__m128i)v23, 4));
      v29 = _mm_cvtsi128_si32((__m128i)v23);
      v30 = v28;
      if ( v28 < 0 )
        v30 = 0;
      v31 = v27 - v29;
      v68[1] = v30;
      v32 = v31;
      if ( v31 < 0 )
        v32 = 0;
      v68[0] = v32;
      (*((void (__fastcall **)(struct CResource **, _DWORD *))v26[1] + 10))(v26 + 1, v68);
      v33 = *((_QWORD *)this + 2);
      v34 = v28;
      v35 = v31;
      if ( v28 < 0 )
        v34 = 0;
      HIDWORD(v61) = v34;
      if ( v31 < 0 )
        v35 = 0;
      LODWORD(v61) = v35;
      (*(void (__fastcall **)(__int64, struct CResource **))(*(_QWORD *)(v33 + 8) + 80LL))(v33 + 8, &v61);
      v36 = *v17;
      v37 = (_QWORD *)((char *)this + 16);
      v38 = v62;
      *((_DWORD *)v36 + 180) = v62;
      *((_DWORD *)v36 + 181) = 2;
      v39 = *((_QWORD *)this + 2);
      *(_DWORD *)(v39 + 720) = v38;
      *(_DWORD *)(v39 + 724) = 1;
      CAnimatedTransitionVisual::SetBeginRect((struct tagPOINT *)*v17, &v71);
      CAnimatedTransitionVisual::SetBeginRect(*((struct tagPOINT **)this + 2), &v71);
      v40 = *v17;
      *(struct tagRECT *)(v40 + 107) = v23;
      CVisual::SetDirtyFlags((CVisual *)(v40 + 1), 4096);
      v41 = *((_QWORD *)this + 2);
      *(struct tagRECT *)(v41 + 856) = v23;
      CVisual::SetDirtyFlags((CVisual *)(v41 + 8), 4096);
      CAnimatedTransitionVisual::SetBeginAlpha(*((CAnimatedTransitionVisual **)this + 2), 0.0);
      v42 = *((_QWORD *)this + 2);
      if ( v31 < 0 )
        v31 = 0;
      LODWORD(v61) = v31;
      if ( v28 < 0 )
        v28 = 0;
      HIDWORD(v61) = v28;
      v43 = v61;
      *(_QWORD *)(v42 + 936) = v61;
      v44 = (CVisual **)((char *)this + 48);
      (*v17)[117] = v43;
      v45 = (struct CVisual *)*((_QWORD *)this + 6);
      RenderTargetRootVisualForDesktop = CWindowList::GetRenderTargetRootVisualForDesktop(
                                           *((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 167),
                                           *((_QWORD *)this + 10));
      inserted = VisualCollection::InsertRelative(
                   (struct CVisual *)((char *)RenderTargetRootVisualForDesktop + 32),
                   v45,
                   0LL,
                   0,
                   1);
      started = inserted;
      if ( inserted < 0 )
      {
        v58 = 122;
      }
      else
      {
        v48 = (struct CVisual *)(*v17 + 1);
        if ( !*v17 )
          v48 = 0LL;
        inserted = VisualCollection::InsertRelative((CVisual *)((char *)*v44 + 32), v48, 0LL, 0, 1);
        started = inserted;
        if ( inserted < 0 )
        {
          v58 = 123;
        }
        else
        {
          v49 = (struct CVisual *)(*v37 + 8LL);
          if ( !*v37 )
            v49 = 0LL;
          started = VisualCollection::InsertRelative((CVisual *)((char *)*v44 + 32), v49, 0LL, 0, 1);
          if ( started < 0 )
          {
            v58 = 124;
            goto LABEL_78;
          }
          inserted = CVisual::MoveToFront(*v44, 0);
          started = inserted;
          if ( inserted >= 0 )
          {
            v70 = *v17;
            v50 = DynArrayImpl<0>::AddMultipleAndSet((__int64)&v64, 8u, 1, &v70);
            started = v50;
            if ( v50 < 0 )
              MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v50, 0xC0u);
            if ( started >= 0 )
            {
              v67 = *v37;
              v51 = v66;
              if ( v66 + 1 < v66 )
              {
                v54 = -2147024362;
                MilInstrumentationCheckHR(0x14u, 0LL, 0LL, -2147024362, 0xB5u);
                started = -2147024362;
              }
              else
              {
                if ( v66 + 1 <= HIDWORD(v65) )
                {
                  ++v66;
                  *(_QWORD *)(v64 + 8LL * v51) = v67;
LABEL_64:
                  v10 = v60;
                  v7 = v62;
LABEL_10:
                  started = CAnimationEngine::RegisterForAnimationCompleteNotification(v10, this);
                  if ( started < 0 )
                  {
                    v57 = 135;
                  }
                  else
                  {
                    started = CAnimationEngine::ScheduleStartAnimation(
                                v10,
                                v7,
                                (__int64)&v64,
                                (unsigned int *)this + 16);
                    if ( started >= 0 )
                    {
                      v14 = CDesktopManager::PostStartAnimations(CDesktopManager::s_pDesktopManagerInstance);
                      started = v14;
                      if ( v14 >= 0 )
                      {
                        *((_BYTE *)this + 68) = 1;
                        goto LABEL_14;
                      }
                      v57 = 142;
                      v52 = v14;
                      goto LABEL_73;
                    }
                    v57 = 138;
                  }
LABEL_71:
                  v52 = started;
LABEL_73:
                  MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v52, v57);
                  goto LABEL_14;
                }
                v55 = DynArrayImpl<0>::AddMultipleAndSet((__int64)&v64, 8u, 1, &v67);
                v54 = v55;
                if ( v55 < 0 )
                  MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v55, 0xC0u);
                started = v54;
                if ( v54 >= 0 )
                  goto LABEL_64;
              }
              v58 = 130;
              v53 = v54;
LABEL_83:
              MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v53, v58);
              v10 = v60;
LABEL_14:
              if ( started >= 0 )
                goto LABEL_15;
              goto LABEL_68;
            }
            v58 = 129;
LABEL_78:
            v53 = started;
            goto LABEL_83;
          }
          v58 = 127;
        }
      }
      v53 = inserted;
      goto LABEL_83;
    }
    v58 = 77;
    goto LABEL_78;
  }
  v12 = (*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 8LL))(
          WPF::g_pProcessHeap,
          32LL);
  v9 = v12;
  if ( v12 )
  {
    *(_DWORD *)(v12 + 16) = 1;
    *(_QWORD *)v12 = &CNullAnimatedVisual::`vftable'{for `IAnimatedVisual'};
    *(_QWORD *)(v12 + 8) = &CNullAnimatedVisual::`vftable'{for `CBaseObject'};
    *(_DWORD *)(v12 + 24) = 1;
  }
  else
  {
    v9 = 0LL;
  }
  if ( v9 )
  {
    v69 = v9;
    v13 = DynArrayImpl<0>::AddMultipleAndSet((__int64)&v64, 8u, 1, &v69);
    started = v13;
    if ( v13 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v13, 0xC0u);
      v57 = 57;
      goto LABEL_71;
    }
    goto LABEL_10;
  }
  v56 = 56;
LABEL_67:
  started = -2147024882;
  MilInstrumentationCheckHR(0x14u, 0LL, 0LL, -2147024882, v56);
LABEL_68:
  CLoginTransition::_CleanupAnimation(this);
LABEL_15:
  if ( v9 )
    CBaseObject::Release((CBaseObject *)(v9 + 8));
  if ( v10 )
    CAnimationEngine::Release(v10, v15);
  DynArrayImpl<0>::~DynArrayImpl<0>((void **)&v64);
  return (unsigned int)started;
}
