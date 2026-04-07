/*
 * XREFs of ?_SetStoryboardTriggerForAnimationClock@CAnimationScheduler@@AEAAJU_GUID@@@Z @ 0x1800060A0
 * Callers:
 *     ?OnAnimationClockChanged@CAnimationScheduler@@UEAAXU_GUID@@W4AnimationClockState@@@Z @ 0x180005F80 (-OnAnimationClockChanged@CAnimationScheduler@@UEAAXU_GUID@@W4AnimationClockState@@@Z.c)
 * Callees:
 *     ?OnGetAnimationClockToken@CAnimationClockCoordinator@@QEAAJU_GUID@@PEAPEAX@Z @ 0x180005AB8 (-OnGetAnimationClockToken@CAnimationClockCoordinator@@QEAAJU_GUID@@PEAPEAX@Z.c)
 *     ?SetStartTrigger@CAnimatedTransitionVisual@@UEAAJPEAVCResource@@@Z @ 0x18000C190 (-SetStartTrigger@CAnimatedTransitionVisual@@UEAAJPEAVCResource@@@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18001CDE0 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?WrapExistingResource@CResource@@SAJQEAUMIL_CHANNEL__@@IPEAPEAV1@@Z @ 0x18001D004 (-WrapExistingResource@CResource@@SAJQEAUMIL_CHANNEL__@@IPEAPEAV1@@Z.c)
 *     ?DuplicateSharedResourceOnChannel@@YAJPEAUMIL_CHANNEL__@@W4MIL_RESOURCE_TYPE@@PEAXPEAI@Z @ 0x18003FC1C (-DuplicateSharedResourceOnChannel@@YAJPEAUMIL_CHANNEL__@@W4MIL_RESOURCE_TYPE@@PEAXPEAI@Z.c)
 *     __security_check_cookie @ 0x18004EBE0 (__security_check_cookie.c)
 */

__int64 __fastcall CAnimationScheduler::_SetStoryboardTriggerForAnimationClock(
        CAnimationScheduler *this,
        struct _GUID *a2)
{
  struct CResource *v2; // rdi
  int AnimationClockToken; // ebx
  __int64 v4; // r15
  __int64 v7; // rcx
  char *v8; // rax
  unsigned int v9; // r8d
  __int64 v10; // rdx
  CAnimationClockCoordinator *v12; // rcx
  int v13; // eax
  __int64 v14; // rsi
  __int64 v15; // r14
  unsigned int v16; // [rsp+20h] [rbp-40h] BYREF
  struct CResource *v17; // [rsp+28h] [rbp-38h] BYREF
  struct _GUID v18; // [rsp+30h] [rbp-30h] BYREF
  HANDLE hObject[2]; // [rsp+40h] [rbp-20h] BYREF

  v2 = 0LL;
  AnimationClockToken = 0;
  v4 = 0LL;
  v17 = 0LL;
  if ( !*((_DWORD *)this + 10) )
    return (unsigned int)AnimationClockToken;
  while ( AnimationClockToken >= 0 )
  {
    v7 = *(_QWORD *)(*((_QWORD *)this + 2) + 8 * v4);
    *(_OWORD *)hObject = *(_OWORD *)(v7 + 48);
    v8 = (char *)hObject[0] - *(_QWORD *)&a2->Data1;
    if ( hObject[0] == *(HANDLE *)&a2->Data1 )
      v8 = (char *)hObject[1] - *(_QWORD *)a2->Data4;
    if ( v8 )
      goto LABEL_10;
    if ( *(_DWORD *)(v7 + 24) == 4 )
      goto LABEL_10;
    v9 = *(_DWORD *)(v7 + 112);
    v10 = 0LL;
    if ( !v9 )
      goto LABEL_10;
    while ( !*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v7 + 88) + 8 * v10) + 40LL) + 960LL) )
    {
      v10 = (unsigned int)(v10 + 1);
      if ( (unsigned int)v10 >= v9 )
        goto LABEL_10;
    }
    if ( v2 )
      goto LABEL_18;
    v16 = 0;
    hObject[0] = 0LL;
    v12 = (CAnimationClockCoordinator *)*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 21);
    v18 = *a2;
    AnimationClockToken = CAnimationClockCoordinator::OnGetAnimationClockToken(v12, &v18, hObject);
    if ( AnimationClockToken >= 0 )
    {
      AnimationClockToken = DuplicateSharedResourceOnChannel(
                              *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 4),
                              91LL,
                              hObject[0],
                              &v16);
      CloseHandle(hObject[0]);
      if ( AnimationClockToken >= 0 )
      {
        v13 = CResource::WrapExistingResource(
                *((struct MIL_CHANNEL__ *const *)CDesktopManager::s_pDesktopManagerInstance + 4),
                v16,
                &v17);
        v2 = v17;
        AnimationClockToken = v13;
LABEL_18:
        if ( AnimationClockToken >= 0 )
        {
          v14 = 0LL;
          v15 = *(_QWORD *)(*((_QWORD *)this + 2) + 8 * v4);
          if ( *(_DWORD *)(v15 + 112) )
          {
            do
            {
              CAnimatedTransitionVisual::SetStartTrigger(
                *(CAnimatedTransitionVisual **)(*(_QWORD *)(*(_QWORD *)(v15 + 88) + 8 * v14) + 40LL),
                v2);
              v14 = (unsigned int)(v14 + 1);
            }
            while ( (unsigned int)v14 < *(_DWORD *)(v15 + 112) );
          }
        }
      }
    }
LABEL_10:
    v4 = (unsigned int)(v4 + 1);
    if ( (unsigned int)v4 >= *((_DWORD *)this + 10) )
      break;
  }
  if ( v2 )
    CBaseObject::Release(v2);
  return (unsigned int)AnimationClockToken;
}
