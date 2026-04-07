/*
 * XREFs of ?OnBeginTransitionRequestFromStoryboard@CAnimationScheduler@@QEAAJHPEBU_GUID@@PEAVCStoryboard@@PEAU2@@Z @ 0x180006604
 * Callers:
 *     ?StartTransition@CWindowList@@AEAAJPEAUMILCMD_DWM_REDIRECTION_STARTTRANSITION@@@Z @ 0x18000B760 (-StartTransition@CWindowList@@AEAAJPEAUMILCMD_DWM_REDIRECTION_STARTTRANSITION@@@Z.c)
 *     ?OnBeginTransitionRequest@CAppLaunchSwitch@@UEAAJXZ @ 0x1800943C0 (-OnBeginTransitionRequest@CAppLaunchSwitch@@UEAAJXZ.c)
 * Callees:
 *     ?Create@CStoryboardFactory@@SAJHPEAVCStoryboard@@PEAPEAV2@@Z @ 0x180002ED8 (-Create@CStoryboardFactory@@SAJHPEAVCStoryboard@@PEAPEAV2@@Z.c)
 *     ?_RecycleAbandonedStoryboards@CAnimationScheduler@@AEAAXXZ @ 0x180005DB4 (-_RecycleAbandonedStoryboards@CAnimationScheduler@@AEAAXXZ.c)
 *     ?_ShouldContinueStoryboardSetup@CAnimationScheduler@@AEAA_NPEAVCStoryboard@@@Z @ 0x180005E3C (-_ShouldContinueStoryboardSetup@CAnimationScheduler@@AEAA_NPEAVCStoryboard@@@Z.c)
 *     ?_OnBeginAnimationClock@CAnimationScheduler@@AEAAJPEAVCStoryboard@@PEBU_GUID@@PEAU3@@Z @ 0x1800067FC (-_OnBeginAnimationClock@CAnimationScheduler@@AEAAJPEAVCStoryboard@@PEBU_GUID@@PEAU3@@Z.c)
 *     ?Release@CStoryboard@@QEAAKXZ @ 0x18000761C (-Release@CStoryboard@@QEAAKXZ.c)
 *     ?IsEnabled@CStoryboard@@QEAA_NXZ @ 0x180007648 (-IsEnabled@CStoryboard@@QEAA_NXZ.c)
 *     ?SetParentStoryboard@CStoryboard@@QEAAXPEAV1@@Z @ 0x1800076B0 (-SetParentStoryboard@CStoryboard@@QEAAXPEAV1@@Z.c)
 *     ?RemoveTargetsForStoryboard@CTransitionVisualController@@QEAAJPEAVCStoryboard@@_NK@Z @ 0x18000A73C (-RemoveTargetsForStoryboard@CTransitionVisualController@@QEAAJPEAVCStoryboard@@_NK@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800118D8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x18002B384 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x180038FB0 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x18004EBE0 (__security_check_cookie.c)
 *     ?OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z @ 0x18004EF10 (-OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z.c)
 *     Template_q @ 0x18007CFB4 (Template_q.c)
 *     ?Abandon@CStoryboard@@QEAAXXZ @ 0x180093430 (-Abandon@CStoryboard@@QEAAXXZ.c)
 */

__int64 __fastcall CAnimationScheduler::OnBeginTransitionRequestFromStoryboard(
        CAnimationScheduler *this,
        unsigned int a2,
        const struct _GUID *a3,
        struct CStoryboard *a4,
        struct _GUID *a5)
{
  __int64 v9; // rdx
  __int64 v10; // rcx
  int v11; // ebx
  unsigned __int64 v12; // rcx
  int v13; // eax
  CStoryboard *v14; // rcx
  unsigned int v15; // eax
  unsigned int v16; // edx
  CAnimationScheduler *v17; // rcx
  int v19; // eax
  int v20; // edi
  __int64 v21; // r8
  __int64 v22; // rdx
  __int64 v23; // rax
  __int64 v24; // rax
  int v25; // r9d
  unsigned int v26; // [rsp+20h] [rbp-50h]
  struct CStoryboard *v27; // [rsp+30h] [rbp-40h] BYREF
  struct _RTL_CRITICAL_SECTION *v28; // [rsp+38h] [rbp-38h] BYREF
  __int128 v29; // [rsp+40h] [rbp-30h]
  __int128 v30; // [rsp+50h] [rbp-20h]

  v28 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
    Template_q(v10, &UdwmSystemAnimation_BeginTransitionRequest, a2);
  v27 = 0LL;
  v11 = -2147467259;
  CAnimationScheduler::_RecycleAbandonedStoryboards(this, v9);
  v12 = 0LL;
  if ( *((_DWORD *)this + 10) )
  {
    v21 = *((_QWORD *)this + 2);
    while ( 1 )
    {
      v22 = *(_QWORD *)(v21 + 8 * v12);
      if ( *(_DWORD *)(v22 + 72) == a2 )
      {
        v23 = *(_QWORD *)(v22 + 32);
        if ( a3 )
        {
          v30 = *(_OWORD *)(v22 + 32);
          v24 = v23 - *(_QWORD *)&a3->Data1;
          if ( !v24 )
            v24 = *((_QWORD *)&v30 + 1) - *(_QWORD *)a3->Data4;
        }
        else
        {
          v24 = v23 - *(_QWORD *)&GUID_NULL.Data1;
          v29 = *(_OWORD *)(v22 + 32);
          if ( !v24 )
            v24 = *((_QWORD *)&v29 + 1) - *(_QWORD *)GUID_NULL.Data4;
        }
        if ( !v24 && !*(_DWORD *)(v22 + 24) )
          break;
      }
      v12 = (unsigned int)(v12 + 1);
      if ( (unsigned int)v12 >= *((_DWORD *)this + 10) )
        goto LABEL_4;
    }
    v27 = (struct CStoryboard *)v22;
    _InterlockedIncrement((volatile signed __int32 *)(v22 + 8));
    v11 = 0;
  }
LABEL_4:
  if ( !v27 )
  {
    if ( *((_DWORD *)this + 10) > 0xAu )
    {
      v11 = -2147024809;
      goto LABEL_22;
    }
    v13 = CStoryboardFactory::Create(a2, a4, &v27);
    v11 = v13;
    if ( v13 < 0 )
    {
      v26 = 213;
LABEL_41:
      v25 = v13;
LABEL_44:
      MilInstrumentationCheckHR(0x14u, &dword_1800ACEA8, 1u, v25, v26);
      goto LABEL_20;
    }
    if ( a3 )
      *((struct _GUID *)v27 + 2) = *a3;
    if ( CStoryboard::IsEnabled(v14) )
    {
      v15 = *((_DWORD *)this + 10);
      v16 = v15 + 1;
      if ( v15 + 1 < v15 )
      {
        v20 = -2147024362;
        MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0xB5u);
        v11 = -2147024362;
      }
      else
      {
        v11 = 0;
        if ( v16 <= *((_DWORD *)this + 9) )
        {
          v12 = v15;
          *(_QWORD *)(*((_QWORD *)this + 2) + 8LL * v15) = v27;
          *((_DWORD *)this + 10) = v16;
LABEL_13:
          _InterlockedIncrement((volatile signed __int32 *)v27 + 2);
          goto LABEL_14;
        }
        v19 = DynArrayImpl<0>::AddMultipleAndSet((char *)this + 16, 8LL, 1LL, &v27);
        v20 = v19;
        if ( v19 < 0 )
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v19, 0xC0u);
        v11 = v20;
        if ( v20 >= 0 )
          goto LABEL_13;
      }
      v26 = 224;
      v25 = v20;
      goto LABEL_44;
    }
  }
LABEL_14:
  if ( v11 < 0 )
    goto LABEL_20;
  if ( CStoryboard::IsEnabled((CStoryboard *)v12) )
  {
    if ( CAnimationScheduler::_ShouldContinueStoryboardSetup(this, v27) )
    {
      v13 = (*(__int64 (__fastcall **)(struct CStoryboard *))(*(_QWORD *)v27 + 64LL))(v27);
      v11 = v13;
      if ( v13 < 0 )
      {
        v26 = 248;
      }
      else
      {
        CStoryboard::SetParentStoryboard(v27, a4);
        v13 = CTransitionVisualController::RemoveTargetsForStoryboard(
                *((CTransitionVisualController **)CDesktopManager::s_pDesktopManagerInstance + 25),
                v27,
                0,
                0);
        v11 = v13;
        if ( v13 < 0 )
        {
          v26 = 252;
        }
        else
        {
          v13 = CAnimationScheduler::_OnBeginAnimationClock(v17, v27, a3, a5);
          v11 = v13;
          if ( v13 >= 0 )
            goto LABEL_20;
          v26 = 255;
        }
      }
      goto LABEL_41;
    }
    CStoryboard::Abandon(v27);
    v11 = -2147467259;
  }
  else
  {
    v11 = -2147024809;
  }
LABEL_20:
  if ( v27 )
  {
    CStoryboard::Release(v27);
    v27 = 0LL;
  }
LABEL_22:
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v28);
  return (unsigned int)v11;
}
