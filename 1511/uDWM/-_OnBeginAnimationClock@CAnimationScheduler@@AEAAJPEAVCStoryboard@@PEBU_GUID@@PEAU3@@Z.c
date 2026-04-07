/*
 * XREFs of ?_OnBeginAnimationClock@CAnimationScheduler@@AEAAJPEAVCStoryboard@@PEBU_GUID@@PEAU3@@Z @ 0x1800067FC
 * Callers:
 *     ?OnBeginTransitionRequestFromStoryboard@CAnimationScheduler@@QEAAJHPEBU_GUID@@PEAVCStoryboard@@PEAU2@@Z @ 0x180006604 (-OnBeginTransitionRequestFromStoryboard@CAnimationScheduler@@QEAAJHPEBU_GUID@@PEAVCStoryboard@@P.c)
 * Callees:
 *     ?GetAnimationDuration@@YAJHHPEAK@Z @ 0x180003274 (-GetAnimationDuration@@YAJHHPEAK@Z.c)
 *     ?OnCreateAnimationClock@CAnimationClockCoordinator@@QEAAJU_GUID@@K@Z @ 0x180005850 (-OnCreateAnimationClock@CAnimationClockCoordinator@@QEAAJU_GUID@@K@Z.c)
 *     ?OnBeginAnimationClock@CAnimationClockCoordinator@@QEAAJU_GUID@@K@Z @ 0x180005A04 (-OnBeginAnimationClock@CAnimationClockCoordinator@@QEAAJU_GUID@@K@Z.c)
 *     ?_LookupAnimationClockIdFromStoryboard@CAnimationScheduler@@AEAAJHPEBU_GUID@@PEAU2@PEAH@Z @ 0x18000694C (-_LookupAnimationClockIdFromStoryboard@CAnimationScheduler@@AEAAJHPEBU_GUID@@PEAU2@PEAH@Z.c)
 *     __security_check_cookie @ 0x18004EBE0 (__security_check_cookie.c)
 *     ?OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z @ 0x18004EF10 (-OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z.c)
 */

__int64 __fastcall CAnimationScheduler::_OnBeginAnimationClock(
        CAnimationScheduler *this,
        struct _GUID *a2,
        const struct _GUID *a3,
        struct _GUID *a4)
{
  unsigned int v4; // r14d
  int v7; // eax
  __int64 v8; // rdx
  struct _GUID v9; // xmm0
  CDesktopManager *v10; // rax
  CAnimationClockCoordinator *v11; // r15
  unsigned int v12; // eax
  int AnimationDuration; // eax
  unsigned int v14; // r8d
  struct _GUID *v15; // rax
  unsigned int v17; // [rsp+30h] [rbp-50h] BYREF
  int v18[3]; // [rsp+34h] [rbp-4Ch] BYREF
  struct _GUID v19; // [rsp+40h] [rbp-40h] BYREF
  struct _GUID v20; // [rsp+50h] [rbp-30h] BYREF
  struct _GUID v21; // [rsp+60h] [rbp-20h] BYREF

  v4 = *(_DWORD *)a2[4].Data4;
  v21 = GUID_NULL;
  v18[0] = 0;
  v7 = CAnimationScheduler::_LookupAnimationClockIdFromStoryboard(this, v4, a3, &v21, v18);
  v8 = (unsigned int)v7;
  if ( v7 >= 0 )
  {
    v9 = v21;
    v10 = CDesktopManager::s_pDesktopManagerInstance;
    a2[3] = v21;
    v20 = v9;
    v11 = (CAnimationClockCoordinator *)*((_QWORD *)v10 + 21);
    v12 = (*(__int64 (__fastcall **)(struct _GUID *, __int64))(*(_QWORD *)&a2->Data1 + 24LL))(a2, v8);
    LODWORD(v8) = CAnimationClockCoordinator::OnCreateAnimationClock(v11, &v20, v12);
    if ( (int)(v8 + 0x80000000) < 0 || (_DWORD)v8 == -2147019886 )
    {
      v17 = 0;
      AnimationDuration = GetAnimationDuration(v4, v18[0], &v17);
      v14 = v17;
      v19 = v21;
      if ( AnimationDuration < 0 )
        v14 = 0;
      LODWORD(v8) = CAnimationClockCoordinator::OnBeginAnimationClock(v11, &v19, v14);
      if ( (_DWORD)v8 == -2147019873 )
        LODWORD(v8) = 0;
    }
  }
  if ( a4 )
  {
    v15 = &v21;
    if ( (int)v8 < 0 )
      v15 = &GUID_NULL;
    *a4 = *v15;
  }
  return (unsigned int)v8;
}
