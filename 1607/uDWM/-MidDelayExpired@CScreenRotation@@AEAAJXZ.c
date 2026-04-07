/*
 * XREFs of ?MidDelayExpired@CScreenRotation@@AEAAJXZ @ 0x18009045C
 * Callers:
 *     ?OnAnimationComplete@CScreenRotation@@UEAAJI@Z @ 0x1800906C0 (-OnAnimationComplete@CScreenRotation@@UEAAJI@Z.c)
 *     ?OnGlobalTimeUpdated@CScreenRotation@@MEAAJXZ @ 0x1800907D0 (-OnGlobalTimeUpdated@CScreenRotation@@MEAAJXZ.c)
 *     ?SkipAnimationDelays@CScreenRotation@@QEAAJXZ @ 0x180090C60 (-SkipAnimationDelays@CScreenRotation@@QEAAJXZ.c)
 * Callees:
 *     ?Release@CAnimationEngine@@UEAAKXZ @ 0x180011580 (-Release@CAnimationEngine@@UEAAKXZ.c)
 *     ?RegisterForAnimationCompleteNotification@CAnimationEngine@@QEAAJPEAUIAnimationListener@@@Z @ 0x180012F18 (-RegisterForAnimationCompleteNotification@CAnimationEngine@@QEAAJPEAUIAnimationListener@@@Z.c)
 *     ?ScheduleStartAnimation@CAnimationEngine@@QEAAJHAEBV?$DynArray@PEAUIAnimatedVisual@@$0A@@@PEAI@Z @ 0x1800131F8 (-ScheduleStartAnimation@CAnimationEngine@@QEAAJHAEBV-$DynArray@PEAUIAnimatedVisual@@$0A@@@PEAI@Z.c)
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x18002AA44 (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x18002AD08 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?AcquireAnimationEngine@CDesktopManager@@SAPEAVCAnimationEngine@@XZ @ 0x18003A8C0 (-AcquireAnimationEngine@CDesktopManager@@SAPEAVCAnimationEngine@@XZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800503F8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     TemplateEventDescriptor @ 0x180075A10 (TemplateEventDescriptor.c)
 *     ?CreateLiveDesktopVisual@CScreenRotation@@AEAAJXZ @ 0x180090278 (-CreateLiveDesktopVisual@CScreenRotation@@AEAAJXZ.c)
 */

__int64 __fastcall CScreenRotation::MidDelayExpired(CScreenRotation *this)
{
  int LiveDesktopVisual; // eax
  int v3; // ebx
  CAnimationEngine *v4; // r15
  int v5; // eax
  int v6; // r9d
  __int64 v7; // rax
  int v8; // esi
  __int64 v9; // rcx
  __int64 v10; // rax
  int started; // eax
  int v12; // eax
  __int64 v13; // rcx
  void *v14; // rdx
  unsigned int v16; // [rsp+20h] [rbp-30h]
  __int128 v17; // [rsp+30h] [rbp-20h] BYREF
  int v18; // [rsp+40h] [rbp-10h]
  unsigned int v19; // [rsp+44h] [rbp-Ch]
  unsigned int v20; // [rsp+48h] [rbp-8h]
  __int64 v21; // [rsp+78h] [rbp+28h] BYREF

  v18 = 0;
  v19 = 0;
  v20 = 0;
  v17 = 0LL;
  LiveDesktopVisual = CScreenRotation::CreateLiveDesktopVisual(this);
  v3 = LiveDesktopVisual;
  if ( LiveDesktopVisual < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, LiveDesktopVisual, 0x1D2u);
    goto LABEL_32;
  }
  v4 = CDesktopManager::AcquireAnimationEngine();
  if ( v4 )
  {
    v21 = *((_QWORD *)this + 37);
    v5 = DynArrayImpl<0>::AddMultipleAndSet((__int64)&v17, 8u, 1, &v21);
    v3 = v5;
    if ( v5 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v5, 0xC0u);
    if ( v3 < 0 )
    {
      v16 = 470;
      v6 = v3;
LABEL_10:
      MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v6, v16);
      goto LABEL_31;
    }
    v7 = *((_QWORD *)this + 37);
    *(_DWORD *)(v7 + 720) = 76;
    *(_DWORD *)(v7 + 724) = 2;
    v21 = *((_QWORD *)this + 38);
    if ( v20 + 1 < v20 )
    {
      v8 = -2147024362;
      MilInstrumentationCheckHR(0x14u, 0LL, 0LL, -2147024362, 0xB5u);
      v3 = -2147024362;
LABEL_22:
      MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v8, 0x1D9u);
LABEL_31:
      CAnimationEngine::Release(v4);
      goto LABEL_32;
    }
    if ( v20 + 1 > v19 )
    {
      v12 = DynArrayImpl<0>::AddMultipleAndSet((__int64)&v17, 8u, 1, &v21);
      v8 = v12;
      if ( v12 < 0 )
        MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v12, 0xC0u);
      v3 = v8;
      if ( v8 < 0 )
        goto LABEL_22;
    }
    else
    {
      v9 = v20++;
      *(_QWORD *)(v17 + 8 * v9) = v21;
    }
    v10 = *((_QWORD *)this + 38);
    *(_DWORD *)(v10 + 720) = 76;
    *(_DWORD *)(v10 + 724) = 3;
    started = CAnimationEngine::ScheduleStartAnimation(v4, 76, (__int64)&v17, (unsigned int *)this + 86);
    v3 = started;
    if ( started >= 0 )
    {
      started = CAnimationEngine::RegisterForAnimationCompleteNotification(v4, (CScreenRotation *)((char *)this + 264));
      v3 = started;
      if ( started >= 0 )
      {
        if ( *((_BYTE *)this + 364) )
        {
          if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) == 0 )
            goto LABEL_31;
          v14 = &UdwmHardwareExpression_PostDelayAnimation_Start;
        }
        else
        {
          if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) == 0 )
            goto LABEL_31;
          v14 = &UdwmScreenRotation_PostDelayAnimation_Start;
        }
        TemplateEventDescriptor(v13, (__int64)v14);
        goto LABEL_31;
      }
      v16 = 479;
    }
    else
    {
      v16 = 478;
    }
    v6 = started;
    goto LABEL_10;
  }
  v3 = -2147024882;
  MilInstrumentationCheckHR(0x14u, 0LL, 0LL, -2147024882, 0x1D4u);
LABEL_32:
  DynArrayImpl<0>::~DynArrayImpl<0>((__int64)&v17);
  return (unsigned int)v3;
}
