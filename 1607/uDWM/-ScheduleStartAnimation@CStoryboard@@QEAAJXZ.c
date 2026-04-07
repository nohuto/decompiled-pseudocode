/*
 * XREFs of ?ScheduleStartAnimation@CStoryboard@@QEAAJXZ @ 0x18000F810
 * Callers:
 *     ?_ScheduleStartAnimations@CAnimationScheduler@@AEAAJXZ @ 0x18000FC80 (-_ScheduleStartAnimations@CAnimationScheduler@@AEAAJXZ.c)
 * Callees:
 *     ?Abandon@CStoryboard@@QEAAXXZ @ 0x18000436C (-Abandon@CStoryboard@@QEAAXXZ.c)
 *     ?ImmediateCancelLivePreview@CDesktopManager@@QEAAJXZ @ 0x180008D18 (-ImmediateCancelLivePreview@CDesktopManager@@QEAAJXZ.c)
 *     ?_NotifyStoryboardState@CStoryboard@@IEAAXW4DWMTRANSITION_STORYBOARD_STATE@@@Z @ 0x18000ECE0 (-_NotifyStoryboardState@CStoryboard@@IEAAXW4DWMTRANSITION_STORYBOARD_STATE@@@Z.c)
 *     ?_LogStoryboardEvent@CStoryboard@@IEAAXXZ @ 0x18000ED7C (-_LogStoryboardEvent@CStoryboard@@IEAAXXZ.c)
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x180010F54 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?Release@CAnimationEngine@@UEAAKXZ @ 0x180011580 (-Release@CAnimationEngine@@UEAAKXZ.c)
 *     ?ScheduleStartAnimation@CAnimationEngine@@QEAAJHAEBV?$DynArray@PEAUIAnimatedVisual@@$0A@@@PEAI@Z @ 0x1800131F8 (-ScheduleStartAnimation@CAnimationEngine@@QEAAJHAEBV-$DynArray@PEAUIAnimatedVisual@@$0A@@@PEAI@Z.c)
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x18002AA44 (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x18002AD08 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?AcquireAnimationEngine@CDesktopManager@@SAPEAVCAnimationEngine@@XZ @ 0x18003A8C0 (-AcquireAnimationEngine@CDesktopManager@@SAPEAVCAnimationEngine@@XZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800503F8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800505E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CStoryboard::ScheduleStartAnimation(struct _GUID *this)
{
  char v2; // r13
  CAnimationEngine *v3; // r15
  int v4; // edi
  int *v5; // rax
  unsigned int v6; // r9d
  unsigned int v7; // edx
  __int64 v8; // r12
  int v9; // eax
  unsigned int v10; // r8d
  __int64 v11; // rcx
  int started; // eax
  __int64 v13; // rdx
  int v15; // eax
  int v16; // esi
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
  if ( *(_DWORD *)this[1].Data4 != 2 )
    goto LABEL_30;
  if ( !this[7].Data1 )
  {
    v2 = 1;
    goto LABEL_14;
  }
  v3 = CDesktopManager::AcquireAnimationEngine();
  if ( !v3 )
    goto LABEL_30;
  v5 = (int *)(*(__int64 (__fastcall **)(struct _GUID *))(*(_QWORD *)&this->Data1 + 16LL))(this);
  v19 = 0;
  v6 = 0;
  v7 = 0;
  v20 = 0LL;
  v8 = 0LL;
  v9 = *v5;
  v21 = v9;
  v18 = 0LL;
  if ( this[7].Data1 )
  {
    while ( 1 )
    {
      v10 = v7 + 1;
      v22 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)this[5].Data4 + 8 * v8) + 40LL);
      if ( v7 + 1 < v7 )
        break;
      if ( v10 > v6 )
      {
        v15 = DynArrayImpl<0>::AddMultipleAndSet(&v18, 8LL, 1LL, &v22);
        v16 = v15;
        if ( v15 < 0 )
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v15, 0xC0u);
        v4 = v16;
        if ( v16 < 0 )
          goto LABEL_25;
        v7 = HIDWORD(v20);
        v6 = v20;
      }
      else
      {
        v11 = v7++;
        HIDWORD(v20) = v10;
        *(_QWORD *)(v18 + 8 * v11) = v22;
      }
      v8 = (unsigned int)(v8 + 1);
      if ( (unsigned int)v8 >= this[7].Data1 )
      {
        v9 = v21;
        goto LABEL_10;
      }
    }
    v16 = -2147024362;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0xB5u);
    v4 = -2147024362;
LABEL_25:
    MilInstrumentationCheckHR(0x14u, &CStoryboard::MILINSTRUMENTATIONHRESULTLIST, 1u, v16, 0x159Au);
    goto LABEL_13;
  }
LABEL_10:
  started = CAnimationEngine::ScheduleStartAnimation(v3, v9);
  v4 = started;
  if ( started < 0 )
  {
    v17 = 5532;
  }
  else
  {
    *(_DWORD *)this[1].Data4 = 3;
    CStoryboard::_LogStoryboardEvent((unsigned __int64)this, v13);
    if ( !(*(unsigned __int8 (__fastcall **)(struct _GUID *))(*(_QWORD *)&this->Data1 + 104LL))(this) )
      goto LABEL_13;
    started = CDesktopManager::ImmediateCancelLivePreview(CDesktopManager::s_pDesktopManagerInstance);
    v4 = started;
    if ( started >= 0 )
      goto LABEL_13;
    v17 = 5537;
  }
  MilInstrumentationCheckHR(0x14u, &CStoryboard::MILINSTRUMENTATIONHRESULTLIST, 1u, started, v17);
LABEL_13:
  DynArrayImpl<0>::~DynArrayImpl<0>(&v18);
LABEL_14:
  if ( v4 >= 0 && !v2 )
  {
    CStoryboard::_NotifyStoryboardState((__int64)this, 3);
    (*(void (__fastcall **)(struct _GUID *))(*(_QWORD *)&this->Data1 + 32LL))(this);
    goto LABEL_17;
  }
LABEL_30:
  CStoryboard::Abandon(this);
LABEL_17:
  if ( v3 )
    CAnimationEngine::Release(v3);
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v23);
  return (unsigned int)v4;
}
