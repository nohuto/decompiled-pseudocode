/*
 * XREFs of ?ScheduleStartAnimation@CStoryboard@@QEAAJXZ @ 0x180007770
 * Callers:
 *     ?_ScheduleStartAnimations@CAnimationScheduler@@AEAAJXZ @ 0x180005BB8 (-_ScheduleStartAnimations@CAnimationScheduler@@AEAAJXZ.c)
 * Callees:
 *     ?_NotifyStoryboardState@CStoryboard@@IEAAXW4DWMTRANSITION_STORYBOARD_STATE@@@Z @ 0x180006B24 (-_NotifyStoryboardState@CStoryboard@@IEAAXW4DWMTRANSITION_STORYBOARD_STATE@@@Z.c)
 *     ?_LogStoryboardEvent@CStoryboard@@IEAAXXZ @ 0x180006C18 (-_LogStoryboardEvent@CStoryboard@@IEAAXXZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800118D8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?ImmediateCancelLivePreview@CDesktopManager@@QEAAJXZ @ 0x1800132FC (-ImmediateCancelLivePreview@CDesktopManager@@QEAAJXZ.c)
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x18002B05C (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x18002B384 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?Release@CAnimationEngine@@UEAAKXZ @ 0x180036E40 (-Release@CAnimationEngine@@UEAAKXZ.c)
 *     ?ScheduleStartAnimation@CAnimationEngine@@QEAAJHAEBV?$DynArray@PEAUIAnimatedVisual@@$0A@@@PEAI@Z @ 0x180038C5C (-ScheduleStartAnimation@CAnimationEngine@@QEAAJHAEBV-$DynArray@PEAUIAnimatedVisual@@$0A@@@PEAI@Z.c)
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x180038FB0 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?AcquireAnimationEngine@CDesktopManager@@SAPEAVCAnimationEngine@@XZ @ 0x180040AFC (-AcquireAnimationEngine@CDesktopManager@@SAPEAVCAnimationEngine@@XZ.c)
 *     ?OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z @ 0x18004EF10 (-OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z.c)
 *     ?Abandon@CStoryboard@@QEAAXXZ @ 0x180093430 (-Abandon@CStoryboard@@QEAAXXZ.c)
 */

__int64 __fastcall CStoryboard::ScheduleStartAnimation(CStoryboard *this)
{
  char v2; // r13
  CAnimationEngine *v3; // r15
  int v4; // esi
  int *v5; // rax
  unsigned int v6; // r9d
  unsigned int v7; // edx
  __int64 v8; // r12
  int v9; // eax
  unsigned int v10; // r8d
  int v11; // eax
  int v12; // ebx
  int started; // eax
  __int64 v14; // rdx
  __int64 v16; // rcx
  unsigned int v17; // [rsp+20h] [rbp-30h]
  __int128 v18; // [rsp+30h] [rbp-20h] BYREF
  int v19; // [rsp+40h] [rbp-10h]
  __int64 v20; // [rsp+44h] [rbp-Ch]
  int v21; // [rsp+90h] [rbp+40h]
  __int64 v22; // [rsp+98h] [rbp+48h] BYREF
  struct _RTL_CRITICAL_SECTION *v23; // [rsp+A0h] [rbp+50h] BYREF

  v23 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  v2 = 0;
  v3 = 0LL;
  v4 = -2147467259;
  if ( *((_DWORD *)this + 6) != 2 )
    goto LABEL_30;
  if ( !*((_DWORD *)this + 28) )
  {
    v2 = 1;
    goto LABEL_16;
  }
  v3 = CDesktopManager::AcquireAnimationEngine();
  if ( !v3 )
    goto LABEL_30;
  v5 = (int *)(*(__int64 (__fastcall **)(CStoryboard *))(*(_QWORD *)this + 16LL))(this);
  v19 = 0;
  v6 = 0;
  v7 = 0;
  v20 = 0LL;
  v8 = 0LL;
  v9 = *v5;
  v21 = v9;
  v18 = 0LL;
  if ( *((_DWORD *)this + 28) )
  {
    while ( 1 )
    {
      v10 = v7 + 1;
      v22 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 11) + 8 * v8) + 40LL);
      if ( v7 + 1 < v7 )
        break;
      if ( v10 <= v6 )
      {
        v16 = v7++;
        HIDWORD(v20) = v10;
        *(_QWORD *)(v18 + 8 * v16) = v22;
      }
      else
      {
        v11 = DynArrayImpl<0>::AddMultipleAndSet(&v18, 8LL, 1LL, &v22);
        v12 = v11;
        if ( v11 < 0 )
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v11, 0xC0u);
        v4 = v12;
        if ( v12 < 0 )
          goto LABEL_26;
        v7 = HIDWORD(v20);
        v6 = v20;
      }
      v8 = (unsigned int)(v8 + 1);
      if ( (unsigned int)v8 >= *((_DWORD *)this + 28) )
      {
        v9 = v21;
        goto LABEL_13;
      }
    }
    v12 = -2147024362;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0xB5u);
    v4 = -2147024362;
LABEL_26:
    MilInstrumentationCheckHR(0x14u, &CStoryboard::MILINSTRUMENTATIONHRESULTLIST, 1u, v12, 0x1730u);
    goto LABEL_15;
  }
LABEL_13:
  started = CAnimationEngine::ScheduleStartAnimation(v3, v9);
  v4 = started;
  if ( started < 0 )
  {
    v17 = 5938;
  }
  else
  {
    *((_DWORD *)this + 6) = 3;
    CStoryboard::_LogStoryboardEvent((unsigned __int64)this, v14);
    if ( !(*(unsigned __int8 (__fastcall **)(CStoryboard *))(*(_QWORD *)this + 104LL))(this) )
      goto LABEL_15;
    started = CDesktopManager::ImmediateCancelLivePreview(CDesktopManager::s_pDesktopManagerInstance);
    v4 = started;
    if ( started >= 0 )
      goto LABEL_15;
    v17 = 5943;
  }
  MilInstrumentationCheckHR(0x14u, &CStoryboard::MILINSTRUMENTATIONHRESULTLIST, 1u, started, v17);
LABEL_15:
  DynArrayImpl<0>::~DynArrayImpl<0>(&v18);
LABEL_16:
  if ( v4 >= 0 && !v2 )
  {
    CStoryboard::_NotifyStoryboardState((__int64)this, 3);
    (*(void (__fastcall **)(CStoryboard *))(*(_QWORD *)this + 32LL))(this);
    goto LABEL_19;
  }
LABEL_30:
  CStoryboard::Abandon(this);
LABEL_19:
  if ( v3 )
    CAnimationEngine::Release(v3);
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v23);
  return (unsigned int)v4;
}
