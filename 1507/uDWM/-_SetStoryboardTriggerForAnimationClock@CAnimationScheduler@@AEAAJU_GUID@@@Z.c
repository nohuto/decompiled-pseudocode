/*
 * XREFs of ?_SetStoryboardTriggerForAnimationClock@CAnimationScheduler@@AEAAJU_GUID@@@Z @ 0x18000BC5C
 * Callers:
 *     ?OnAnimationClockChanged@CAnimationScheduler@@UEAAXU_GUID@@W4AnimationClockState@@@Z @ 0x18000BB40 (-OnAnimationClockChanged@CAnimationScheduler@@UEAAXU_GUID@@W4AnimationClockState@@@Z.c)
 * Callees:
 *     ?DuplicateSharedResourceOnChannel@@YAJPEAUMIL_CHANNEL__@@W4MIL_RESOURCE_TYPE@@PEAXPEAI@Z @ 0x180009700 (-DuplicateSharedResourceOnChannel@@YAJPEAUMIL_CHANNEL__@@W4MIL_RESOURCE_TYPE@@PEAXPEAI@Z.c)
 *     ?OnGetAnimationClockToken@CAnimationClockCoordinator@@QEAAJU_GUID@@PEAPEAX@Z @ 0x18000B684 (-OnGetAnimationClockToken@CAnimationClockCoordinator@@QEAAJU_GUID@@PEAPEAX@Z.c)
 *     ?WrapExistingResource@CResource@@SAJQEAUMIL_CHANNEL__@@IPEAPEAV1@@Z @ 0x1800159F4 (-WrapExistingResource@CResource@@SAJQEAUMIL_CHANNEL__@@IPEAPEAV1@@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x1800176E4 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?SetStartTrigger@CAnimatedTransitionVisual@@UEAAJPEAVCResource@@@Z @ 0x1800376C0 (-SetStartTrigger@CAnimatedTransitionVisual@@UEAAJPEAVCResource@@@Z.c)
 *     __security_check_cookie @ 0x180048580 (__security_check_cookie.c)
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
  unsigned int v10; // r8d
  __int64 v11; // rdx
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
      goto LABEL_6;
    if ( *(_DWORD *)(v7 + 24) == 4 )
      goto LABEL_6;
    v10 = *(_DWORD *)(v7 + 112);
    v11 = 0LL;
    if ( !v10 )
      goto LABEL_6;
    while ( !*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v7 + 88) + 8 * v11) + 40LL) + 960LL) )
    {
      v11 = (unsigned int)(v11 + 1);
      if ( (unsigned int)v11 >= v10 )
        goto LABEL_6;
    }
    if ( v2 )
      goto LABEL_19;
    v16 = 0;
    hObject[0] = 0LL;
    v12 = (CAnimationClockCoordinator *)*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 21);
    v18 = *a2;
    AnimationClockToken = CAnimationClockCoordinator::OnGetAnimationClockToken(v12, &v18, hObject);
    if ( AnimationClockToken >= 0 )
    {
      AnimationClockToken = DuplicateSharedResourceOnChannel(
                              *((struct MIL_CHANNEL__ **)CDesktopManager::s_pDesktopManagerInstance + 4),
                              0x53u,
                              (__int64)hObject[0],
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
LABEL_19:
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
LABEL_6:
    v4 = (unsigned int)(v4 + 1);
    if ( (unsigned int)v4 >= *((_DWORD *)this + 10) )
      break;
  }
  if ( v2 )
    CBaseObject::Release(v2);
  return (unsigned int)AnimationClockToken;
}
