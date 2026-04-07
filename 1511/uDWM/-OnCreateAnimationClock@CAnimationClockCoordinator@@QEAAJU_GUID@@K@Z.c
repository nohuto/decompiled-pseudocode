/*
 * XREFs of ?OnCreateAnimationClock@CAnimationClockCoordinator@@QEAAJU_GUID@@K@Z @ 0x180005850
 * Callers:
 *     ?_OnBeginAnimationClock@CAnimationScheduler@@AEAAJPEAVCStoryboard@@PEBU_GUID@@PEAU3@@Z @ 0x1800067FC (-_OnBeginAnimationClock@CAnimationScheduler@@AEAAJPEAVCStoryboard@@PEBU_GUID@@PEAU3@@Z.c)
 *     ?ProcessSyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEAXI_NKPEBU_REMOTE_PORT_VIEW@@PEAJPEAI@Z @ 0x180032890 (-ProcessSyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEAXI_NKPEBU_REMOTE_PORT_VIEW@@PEAJPEAI@Z.c)
 * Callees:
 *     ?Create@CAnimationClockFactory@@SAJU_GUID@@PEAPEAVCAnimationClock@@@Z @ 0x180004BF0 (-Create@CAnimationClockFactory@@SAJU_GUID@@PEAPEAVCAnimationClock@@@Z.c)
 *     ?SetEventCallback@CAnimationClock@@QEAAJPEAUIAnimationClockEventListener@@@Z @ 0x180004F84 (-SetEventCallback@CAnimationClock@@QEAAJPEAUIAnimationClockEventListener@@@Z.c)
 *     ?Initialize@CAnimationClock@@QEAAJU_GUID@@K@Z @ 0x180005458 (-Initialize@CAnimationClock@@QEAAJU_GUID@@K@Z.c)
 *     ?GetAnimationClock@CAnimationClockCoordinator@@QEAAJU_GUID@@PEAPEAVCAnimationClock@@@Z @ 0x180005624 (-GetAnimationClock@CAnimationClockCoordinator@@QEAAJU_GUID@@PEAPEAVCAnimationClock@@@Z.c)
 *     ?_ClearExpiredAnimationClocks@CAnimationClockCoordinator@@AEAAJXZ @ 0x18000579C (-_ClearExpiredAnimationClocks@CAnimationClockCoordinator@@AEAAJXZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800118D8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18001CDE0 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x18002B384 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x180038FB0 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x18004EBE0 (__security_check_cookie.c)
 *     ?Reset@CAnimationClock@@QEAAJK@Z @ 0x18009DAD8 (-Reset@CAnimationClock@@QEAAJK@Z.c)
 *     ?Remove@?$DynArray@PEAVCBitmapSource@@$0A@@@QEAAHAEBQEAVCBitmapSource@@@Z @ 0x18009DF64 (-Remove@-$DynArray@PEAVCBitmapSource@@$0A@@@QEAAHAEBQEAVCBitmapSource@@@Z.c)
 *     Template_jq @ 0x18009DFC4 (Template_jq.c)
 */

__int64 __fastcall CAnimationClockCoordinator::OnCreateAnimationClock(
        CAnimationClockCoordinator *this,
        struct _GUID *a2,
        unsigned int a3)
{
  __int64 v5; // rax
  int AnimationClock; // ebx
  struct _RTL_CRITICAL_SECTION *v8; // r15
  __int64 v9; // rcx
  __int64 v10; // rdx
  __int64 v11; // rcx
  unsigned int v12; // eax
  unsigned int v13; // edx
  __int64 v14; // rax
  int v16; // eax
  __int64 v17; // r8
  __int64 v18; // rdx
  __int64 v19; // rax
  __int64 v20; // rdx
  __int64 v21; // rcx
  CAnimationClock *v22; // [rsp+30h] [rbp-59h] BYREF
  char *v23; // [rsp+38h] [rbp-51h] BYREF
  struct _RTL_CRITICAL_SECTION *v24; // [rsp+40h] [rbp-49h] BYREF
  struct _GUID v25; // [rsp+50h] [rbp-39h]
  struct _GUID v26; // [rsp+60h] [rbp-29h] BYREF
  struct _GUID v27; // [rsp+70h] [rbp-19h] BYREF
  struct _GUID v28; // [rsp+80h] [rbp-9h] BYREF
  __int128 v29; // [rsp+90h] [rbp+7h]
  __int128 v30; // [rsp+A0h] [rbp+17h]

  v22 = 0LL;
  v5 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_NULL.Data1;
  AnimationClock = -2147024809;
  if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_NULL.Data1 )
    v5 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_NULL.Data4;
  if ( v5 )
  {
    v8 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 8);
    v23 = (char *)this + 8;
    EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 8));
    v9 = 0LL;
    v25 = *a2;
    if ( !*((_DWORD *)this + 20) )
      goto LABEL_5;
    v17 = *((_QWORD *)this + 7);
    while ( 1 )
    {
      v18 = *(_QWORD *)(v17 + 8 * v9);
      v29 = *(_OWORD *)(v18 + 112);
      v19 = v29 - *(_QWORD *)&v25.Data1;
      if ( (_QWORD)v29 == *(_QWORD *)&v25.Data1 )
        v19 = *((_QWORD *)&v29 + 1) - *(_QWORD *)v25.Data4;
      if ( !v19 )
        break;
      v9 = (unsigned int)(v9 + 1);
      if ( (unsigned int)v9 >= *((_DWORD *)this + 20) )
        goto LABEL_5;
    }
    if ( *(_DWORD *)(v18 + 80) == 7 )
    {
LABEL_5:
      AnimationClock = CAnimationClockCoordinator::_ClearExpiredAnimationClocks(this);
      if ( AnimationClock < 0 )
        goto LABEL_14;
      v28 = *a2;
      AnimationClock = CAnimationClockFactory::Create(&v28, &v22);
      if ( AnimationClock < 0 )
        goto LABEL_14;
      if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
        Template_jq(v11, v10, a2, a3);
      AnimationClock = CAnimationClock::SetEventCallback(v22, this);
      if ( AnimationClock < 0 )
        goto LABEL_14;
      v12 = *((_DWORD *)this + 20);
      v13 = v12 + 1;
      if ( v12 + 1 < v12 )
      {
        AnimationClock = -2147024362;
        MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0xB5u);
      }
      else
      {
        AnimationClock = 0;
        if ( v13 > *((_DWORD *)this + 19) )
        {
          v16 = DynArrayImpl<0>::AddMultipleAndSet((char *)this + 56, 8LL, 1LL, &v22);
          AnimationClock = v16;
          if ( v16 < 0 )
            MilInstrumentationCheckHR(0x14u, 0LL, 0, v16, 0xC0u);
          if ( AnimationClock < 0 )
            goto LABEL_14;
        }
        else
        {
          *(_QWORD *)(*((_QWORD *)this + 7) + 8LL * v12) = v22;
          *((_DWORD *)this + 20) = v13;
        }
        _InterlockedIncrement((volatile signed __int32 *)v22 + 2);
      }
    }
    else
    {
      v26 = *a2;
      AnimationClock = CAnimationClockCoordinator::GetAnimationClock(this, &v26, &v22);
    }
LABEL_14:
    CGuard<CDwmCS>::~CGuard<CDwmCS>(&v23);
    if ( AnimationClock >= 0 )
    {
      v30 = *((_OWORD *)v22 + 7);
      v14 = v30 - *(_QWORD *)&a2->Data1;
      if ( (_QWORD)v30 == *(_QWORD *)&a2->Data1 )
        v14 = *((_QWORD *)&v30 + 1) - *(_QWORD *)a2->Data4;
      if ( v14 )
      {
        v27 = *a2;
        AnimationClock = CAnimationClock::Initialize(v22, &v27, a3);
        if ( AnimationClock < 0 )
        {
          v24 = v8;
          EnterCriticalSection(v8);
          if ( (unsigned int)DynArray<CBitmapSource *,0>::Remove((char *)this + 56, &v22) )
            CBaseObject::Release(v22);
          CGuard<CDwmCS>::~CGuard<CDwmCS>(&v24);
        }
      }
      else if ( (int)CAnimationClock::Reset(v22, a3) < 0 )
      {
        AnimationClock = -2147019886;
      }
      else if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
      {
        Template_jq(v21, v20, a2, a3);
      }
    }
    if ( v22 )
      CBaseObject::Release(v22);
  }
  return (unsigned int)AnimationClock;
}
