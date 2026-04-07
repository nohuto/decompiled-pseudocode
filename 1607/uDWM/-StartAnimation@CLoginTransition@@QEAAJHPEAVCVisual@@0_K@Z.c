/*
 * XREFs of ?StartAnimation@CLoginTransition@@QEAAJHPEAVCVisual@@0_K@Z @ 0x18003A2FC
 * Callers:
 *     ?SwitchDesktop@CWindowList@@UEAAJK_K@Z @ 0x18002D4D0 (-SwitchDesktop@CWindowList@@UEAAJK_K@Z.c)
 * Callees:
 *     ?ProcessSnapshotOnVisual@CAnimatedTransitionVisual@@QEAAJPEAVCVisual@@AEBUtagRECT@@@Z @ 0x180005904 (-ProcessSnapshotOnVisual@CAnimatedTransitionVisual@@QEAAJPEAVCVisual@@AEBUtagRECT@@@Z.c)
 *     ?SetVisual@CAnimatedTransitionVisual@@QEAAJPEAVCVisual@@_NPEBUtagRECT@@@Z @ 0x1800059BC (-SetVisual@CAnimatedTransitionVisual@@QEAAJPEAVCVisual@@_NPEBUtagRECT@@@Z.c)
 *     ?Create@CAnimatedTransitionVisual@@SAJPEAUIDwmChannel@@PEAPEAV1@@Z @ 0x18000B1C4 (-Create@CAnimatedTransitionVisual@@SAJPEAUIDwmChannel@@PEAPEAV1@@Z.c)
 *     ?Release@CAnimationEngine@@UEAAKXZ @ 0x180011580 (-Release@CAnimationEngine@@UEAAKXZ.c)
 *     ?RegisterForAnimationCompleteNotification@CAnimationEngine@@QEAAJPEAUIAnimationListener@@@Z @ 0x180012F18 (-RegisterForAnimationCompleteNotification@CAnimationEngine@@QEAAJPEAUIAnimationListener@@@Z.c)
 *     ?ScheduleStartAnimation@CAnimationEngine@@QEAAJHAEBV?$DynArray@PEAUIAnimatedVisual@@$0A@@@PEAI@Z @ 0x1800131F8 (-ScheduleStartAnimation@CAnimationEngine@@QEAAJHAEBV-$DynArray@PEAUIAnimatedVisual@@$0A@@@PEAI@Z.c)
 *     ?SetBeginAlpha@CAnimatedTransitionVisual@@QEAAXM@Z @ 0x180014A64 (-SetBeginAlpha@CAnimatedTransitionVisual@@QEAAXM@Z.c)
 *     ?SetBeginRect@CAnimatedTransitionVisual@@QEAAXPEBUtagRECT@@@Z @ 0x180014AD4 (-SetBeginRect@CAnimatedTransitionVisual@@QEAAXPEBUtagRECT@@@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180019B60 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z @ 0x18001CE70 (-InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z.c)
 *     ?PostStartAnimations@CDesktopManager@@QEAAJXZ @ 0x18001E5C4 (-PostStartAnimations@CDesktopManager@@QEAAJXZ.c)
 *     ?MoveToFront@CVisual@@QEAAJ_N@Z @ 0x18001F250 (-MoveToFront@CVisual@@QEAAJ_N@Z.c)
 *     ?SetOffset@CVisual@@QEAAXPEBUtagPOINT@@@Z @ 0x18001F7A4 (-SetOffset@CVisual@@QEAAXPEBUtagPOINT@@@Z.c)
 *     ?SetDirtyFlags@CVisual@@UEAAXK@Z @ 0x18001FFF0 (-SetDirtyFlags@CVisual@@UEAAXK@Z.c)
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x18002AA44 (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x18002AD08 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?GetRenderTargetRootVisualForDesktop@CWindowList@@QEAAPEAVCVisual@@_K@Z @ 0x18002BDD0 (-GetRenderTargetRootVisualForDesktop@CWindowList@@QEAAPEAVCVisual@@_K@Z.c)
 *     ?Create@CVisual@@SAJPEAUIDwmChannel@@PEAPEAV1@@Z @ 0x180037870 (-Create@CVisual@@SAJPEAUIDwmChannel@@PEAPEAV1@@Z.c)
 *     ?_CleanupAnimation@CLoginTransition@@AEAAXXZ @ 0x18003A144 (-_CleanupAnimation@CLoginTransition@@AEAAXXZ.c)
 *     ?StopAnimation@CLoginTransition@@QEAAJXZ @ 0x18003A2D4 (-StopAnimation@CLoginTransition@@QEAAJXZ.c)
 *     ?AcquireAnimationEngine@CDesktopManager@@SAPEAVCAnimationEngine@@XZ @ 0x18003A8C0 (-AcquireAnimationEngine@CDesktopManager@@SAPEAVCAnimationEngine@@XZ.c)
 *     __security_check_cookie @ 0x18004F240 (__security_check_cookie.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800503F8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800505E0 (_guard_dispatch_icall_nop.c)
 *     TemplateEventDescriptor @ 0x180075A10 (TemplateEventDescriptor.c)
 */

__int64 __fastcall CLoginTransition::StartAnimation(
        CLoginTransition *this,
        int a2,
        struct tagPOINT *a3,
        struct CVisual *a4,
        unsigned __int64 a5)
{
  int v7; // r13d
  __int64 v9; // r14
  CAnimationEngine *v10; // r12
  int started; // ebx
  __int64 v12; // rax
  int v13; // eax
  int v14; // eax
  struct CResource ***v16; // r15
  __int64 v17; // rcx
  struct CResource ***v18; // r12
  __int64 v19; // rcx
  __int64 v20; // rcx
  CVisual **v21; // r13
  CBaseObject *v22; // rcx
  struct tagRECT v23; // xmm6
  int v24; // eax
  int inserted; // eax
  int v26; // ebx
  int v27; // edi
  int v28; // eax
  int v29; // edx
  int v30; // ebx
  int v31; // eax
  struct CResource **v32; // rcx
  int v33; // edx
  int v34; // eax
  struct CResource **v35; // rcx
  struct CResource **v36; // rax
  struct CResource **v37; // rax
  struct CResource **v38; // rcx
  struct CResource **v39; // rcx
  struct CResource **v40; // rcx
  struct CResource *v41; // rax
  struct CVisual *v42; // rbx
  struct CVisual *RenderTargetRootVisualForDesktop; // rax
  struct CVisual *v44; // rdx
  struct CVisual *v45; // rdx
  int v46; // eax
  unsigned int v47; // eax
  int v48; // eax
  int v49; // edi
  int v50; // r9d
  int v51; // r9d
  unsigned int v52; // [rsp+28h] [rbp-B1h]
  unsigned int v53; // [rsp+28h] [rbp-B1h]
  unsigned int v54; // [rsp+28h] [rbp-B1h]
  bool v55; // [rsp+38h] [rbp-A1h]
  struct CAnimationEngine *v56; // [rsp+40h] [rbp-99h]
  struct CResource *v58; // [rsp+50h] [rbp-89h] BYREF
  struct tagPOINT v59; // [rsp+58h] [rbp-81h] BYREF
  __int128 v60; // [rsp+60h] [rbp-79h] BYREF
  __int64 v61; // [rsp+70h] [rbp-69h]
  unsigned int v62; // [rsp+78h] [rbp-61h]
  CVisual *v63; // [rsp+80h] [rbp-59h]
  _DWORD v64[2]; // [rsp+88h] [rbp-51h] BYREF
  struct CResource **v65; // [rsp+90h] [rbp-49h] BYREF
  __int64 v66; // [rsp+98h] [rbp-41h] BYREF
  struct CResource **v67; // [rsp+A0h] [rbp-39h] BYREF
  struct tagRECT v68; // [rsp+A8h] [rbp-31h] BYREF
  struct tagRECT rc; // [rsp+B8h] [rbp-21h] BYREF

  v63 = a4;
  v61 = 0LL;
  v55 = a2 == 55;
  v62 = 0;
  v7 = a2;
  v9 = 0LL;
  v60 = 0LL;
  if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
    TemplateEventDescriptor(this, &UdwmLoginTransition_Start);
  *((_QWORD *)this + 10) = a5;
  *((_DWORD *)this + 18) = v7;
  v56 = CDesktopManager::AcquireAnimationEngine();
  v10 = v56;
  if ( !v56 )
  {
    v52 = 47;
    goto LABEL_70;
  }
  started = CLoginTransition::StopAnimation(this);
  if ( started < 0 )
  {
    v53 = 50;
    goto LABEL_74;
  }
  if ( !v55 )
  {
    *((_QWORD *)this + 4) = a3;
    if ( a3 )
      _InterlockedIncrement((volatile signed __int32 *)&a3[1]);
    *((_QWORD *)this + 5) = a4;
    if ( a4 )
      _InterlockedIncrement((volatile signed __int32 *)a4 + 2);
    v16 = (struct CResource ***)((char *)this + 8);
    v17 = *((_QWORD *)this + 1);
    if ( v17 )
    {
      CBaseObject::Release((CBaseObject *)(v17 + 8));
      *v16 = 0LL;
    }
    v18 = (struct CResource ***)((char *)this + 16);
    v19 = *((_QWORD *)this + 2);
    if ( v19 )
    {
      CBaseObject::Release((CBaseObject *)(v19 + 8));
      *v18 = 0LL;
    }
    v20 = *((_QWORD *)this + 3);
    if ( v20 )
    {
      CBaseObject::Release((CBaseObject *)(v20 + 8));
      *((_QWORD *)this + 3) = 0LL;
    }
    v21 = (CVisual **)((char *)this + 48);
    v22 = (CBaseObject *)*((_QWORD *)this + 6);
    if ( v22 )
    {
      CBaseObject::Release(v22);
      *v21 = 0LL;
    }
    started = CVisual::Create(
                *((struct IDwmChannel **)CDesktopManager::s_pDesktopManagerInstance + 4),
                (struct CVisual **)this + 6);
    if ( started >= 0 )
    {
      started = CAnimatedTransitionVisual::Create(
                  *((struct IDwmChannel **)CDesktopManager::s_pDesktopManagerInstance + 4),
                  (struct CAnimatedTransitionVisual **)this + 1);
      if ( started < 0 )
      {
        v54 = 78;
        goto LABEL_80;
      }
      started = CAnimatedTransitionVisual::Create(
                  *((struct IDwmChannel **)CDesktopManager::s_pDesktopManagerInstance + 4),
                  (struct CAnimatedTransitionVisual **)this + 2);
      if ( started < 0 )
      {
        v54 = 79;
        goto LABEL_80;
      }
      v59.x = -32000;
      v59.y = -32000;
      CVisual::SetOffset(a3, &v59);
      CVisual::SetOffset((struct tagPOINT *)v63, &v59);
      v23 = *(struct tagRECT *)((char *)CDesktopManager::s_pDesktopManagerInstance + 1288);
      v68 = v23;
      rc = v23;
      OffsetRect(&rc, -32000, -32000);
      v24 = CAnimatedTransitionVisual::SetVisual(*v16, (struct CVisual *)a3, 1, &rc);
      started = v24;
      if ( v24 < 0 )
      {
        v54 = 97;
        v51 = v24;
        goto LABEL_84;
      }
      started = CAnimatedTransitionVisual::SetVisual(*v18, v63, 0, &rc);
      if ( started < 0 )
      {
        v54 = 98;
        goto LABEL_80;
      }
      inserted = CAnimatedTransitionVisual::ProcessSnapshotOnVisual(
                   (CAnimatedTransitionVisual *)*v16,
                   (struct CVisual *)a3,
                   &rc);
      started = inserted;
      if ( inserted < 0 )
      {
        v54 = 101;
      }
      else
      {
        v26 = _mm_cvtsi128_si32(_mm_srli_si128((__m128i)v23, 8));
        v27 = _mm_cvtsi128_si32(_mm_srli_si128((__m128i)v23, 12)) - _mm_cvtsi128_si32(_mm_srli_si128((__m128i)v23, 4));
        v28 = _mm_cvtsi128_si32((__m128i)v23);
        v29 = v27;
        if ( v27 < 0 )
          v29 = 0;
        v30 = v26 - v28;
        v64[1] = v29;
        v31 = v30;
        if ( v30 < 0 )
          v31 = 0;
        v32 = *v16;
        v64[0] = v31;
        (*((void (__fastcall **)(struct CResource **, _DWORD *))v32[1] + 10))(v32 + 1, v64);
        v33 = v27;
        v34 = v30;
        if ( v27 < 0 )
          v33 = 0;
        HIDWORD(v58) = v33;
        if ( v30 < 0 )
          v34 = 0;
        v35 = *v18;
        LODWORD(v58) = v34;
        (*((void (__fastcall **)(struct CResource **, struct CResource **))v35[1] + 10))(v35 + 1, &v58);
        v36 = *v16;
        *((_DWORD *)v36 + 180) = a2;
        *((_DWORD *)v36 + 181) = 2;
        v37 = *v18;
        *((_DWORD *)v37 + 180) = a2;
        *((_DWORD *)v37 + 181) = 1;
        CAnimatedTransitionVisual::SetBeginRect((struct tagPOINT *)*v16, &v68);
        CAnimatedTransitionVisual::SetBeginRect((struct tagPOINT *)*v18, &v68);
        v38 = *v16;
        *(struct tagRECT *)(v38 + 107) = v23;
        CVisual::SetDirtyFlags((CVisual *)(v38 + 1), 4096);
        v39 = *v18;
        *(struct tagRECT *)(v39 + 107) = v23;
        CVisual::SetDirtyFlags((CVisual *)(v39 + 1), 4096);
        CAnimatedTransitionVisual::SetBeginAlpha((CAnimatedTransitionVisual *)*v18, 0.0);
        v40 = *v18;
        if ( v30 < 0 )
          v30 = 0;
        LODWORD(v58) = v30;
        if ( v27 < 0 )
          v27 = 0;
        HIDWORD(v58) = v27;
        v41 = v58;
        v40[117] = v58;
        (*v16)[117] = v41;
        v42 = *v21;
        RenderTargetRootVisualForDesktop = CWindowList::GetRenderTargetRootVisualForDesktop(
                                             *((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 165),
                                             *((_QWORD *)this + 10));
        inserted = VisualCollection::InsertRelative(
                     (struct CVisual *)((char *)RenderTargetRootVisualForDesktop + 32),
                     v42,
                     0LL,
                     0,
                     1);
        started = inserted;
        if ( inserted < 0 )
        {
          v54 = 122;
        }
        else
        {
          v44 = (struct CVisual *)(*v16 + 1);
          if ( !*v16 )
            v44 = 0LL;
          inserted = VisualCollection::InsertRelative((CVisual *)((char *)*v21 + 32), v44, 0LL, 0, 1);
          started = inserted;
          if ( inserted < 0 )
          {
            v54 = 123;
          }
          else
          {
            v45 = (struct CVisual *)(*v18 + 1);
            if ( !*v18 )
              v45 = 0LL;
            started = VisualCollection::InsertRelative((CVisual *)((char *)*v21 + 32), v45, 0LL, 0, 1);
            if ( started < 0 )
            {
              v54 = 124;
              goto LABEL_80;
            }
            inserted = CVisual::MoveToFront(*v21, 0);
            started = inserted;
            if ( inserted >= 0 )
            {
              v67 = *v16;
              v46 = DynArrayImpl<0>::AddMultipleAndSet((__int64)&v60, 8u, 1, &v67);
              started = v46;
              if ( v46 < 0 )
                MilInstrumentationCheckHR(0x14u, 0LL, 0, v46, 0xC0u);
              if ( started >= 0 )
              {
                v65 = *v18;
                v47 = v62;
                if ( v62 + 1 < v62 )
                {
                  v49 = -2147024362;
                  MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0xB5u);
                  started = -2147024362;
                }
                else
                {
                  if ( v62 + 1 <= HIDWORD(v61) )
                  {
                    ++v62;
                    *(_QWORD *)(v60 + 8LL * v47) = v65;
LABEL_64:
                    v10 = v56;
                    v7 = a2;
                    goto LABEL_10;
                  }
                  v48 = DynArrayImpl<0>::AddMultipleAndSet((__int64)&v60, 8u, 1, &v65);
                  v49 = v48;
                  if ( v48 < 0 )
                    MilInstrumentationCheckHR(0x14u, 0LL, 0, v48, 0xC0u);
                  started = v49;
                  if ( v49 >= 0 )
                    goto LABEL_64;
                }
                v54 = 130;
                v51 = v49;
LABEL_84:
                MilInstrumentationCheckHR(0x14u, 0LL, 0, v51, v54);
                v10 = v56;
LABEL_14:
                if ( started >= 0 )
                  goto LABEL_15;
                goto LABEL_71;
              }
              v54 = 129;
LABEL_80:
              v51 = started;
              goto LABEL_84;
            }
            v54 = 127;
          }
        }
      }
      v51 = inserted;
      goto LABEL_84;
    }
    v54 = 77;
    goto LABEL_80;
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
    v66 = v9;
    v13 = DynArrayImpl<0>::AddMultipleAndSet((__int64)&v60, 8u, 1, &v66);
    started = v13;
    if ( v13 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v13, 0xC0u);
      v53 = 57;
      goto LABEL_74;
    }
LABEL_10:
    started = CAnimationEngine::RegisterForAnimationCompleteNotification(v10, this);
    if ( started < 0 )
    {
      v53 = 135;
    }
    else
    {
      started = CAnimationEngine::ScheduleStartAnimation(v10, v7, (__int64)&v60, (unsigned int *)this + 16);
      if ( started >= 0 )
      {
        v14 = CDesktopManager::PostStartAnimations(CDesktopManager::s_pDesktopManagerInstance);
        started = v14;
        if ( v14 >= 0 )
        {
          *((_BYTE *)this + 68) = 1;
          goto LABEL_14;
        }
        v53 = 142;
        v50 = v14;
        goto LABEL_76;
      }
      v53 = 138;
    }
LABEL_74:
    v50 = started;
LABEL_76:
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v50, v53);
    goto LABEL_14;
  }
  v52 = 56;
LABEL_70:
  started = -2147024882;
  MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, v52);
LABEL_71:
  CLoginTransition::_CleanupAnimation(this);
LABEL_15:
  if ( v9 )
    CBaseObject::Release((CBaseObject *)(v9 + 8));
  if ( v10 )
    CAnimationEngine::Release(v10);
  DynArrayImpl<0>::~DynArrayImpl<0>((__int64)&v60);
  return (unsigned int)started;
}
