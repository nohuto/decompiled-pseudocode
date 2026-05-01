/*
 * XREFs of ?OnIdleStateFlagsChanged@CActionCenterExperienceManager@@UEAAJW4SESSION_IDLE_STATE_FLAGS@@@Z @ 0x180010A60
 * Callers:
 *     <none>
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000C888 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetViewStateAllowed@CActionCenterExperienceManager@@AEAA_NW4ActionCenterViewState@1@@Z @ 0x180011E5C (-GetViewStateAllowed@CActionCenterExperienceManager@@AEAA_NW4ActionCenterViewState@1@@Z.c)
 *     ?TransitionToState@CActionCenterExperienceManager@@AEAAJW4ActionCenterViewState@1@@Z @ 0x180012040 (-TransitionToState@CActionCenterExperienceManager@@AEAAJW4ActionCenterViewState@1@@Z.c)
 *     ?SetZBand@CActionCenterExperienceManager@@AEAAJW4ActionCenterViewState@1@@Z @ 0x180013668 (-SetZBand@CActionCenterExperienceManager@@AEAAJW4ActionCenterViewState@1@@Z.c)
 */

__int64 __fastcall CActionCenterExperienceManager::OnIdleStateFlagsChanged(__int64 a1, char a2)
{
  char v3; // dl
  bool v4; // zf
  int v5; // eax
  __int64 v6; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v3 = (a2 & 2) != 0;
  if ( v3 != *(_BYTE *)(a1 + 412) )
  {
    v4 = *(_DWORD *)(a1 + 296) == 0;
    *(_BYTE *)(a1 + 412) = v3;
    if ( !v4 || (unsigned __int8)CActionCenterExperienceManager::GetViewStateAllowed(a1 - 48, 0LL) )
    {
      if ( *(_DWORD *)(a1 + 296) == 1 )
      {
        if ( (unsigned __int8)CActionCenterExperienceManager::GetViewStateAllowed(a1 - 48, 1LL) )
        {
          v5 = CActionCenterExperienceManager::SetZBand(a1 - 48, *(unsigned int *)(a1 + 296));
          if ( v5 < 0 )
          {
            v6 = 397LL;
            goto LABEL_10;
          }
        }
      }
    }
    else
    {
      v5 = CActionCenterExperienceManager::TransitionToState(a1 - 48, 2LL);
      if ( v5 < 0 )
      {
        v6 = 392LL;
LABEL_10:
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)v6,
          (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\actioncenterexperiencemanager.cpp",
          (const char *)(unsigned int)v5);
      }
    }
  }
  return 0LL;
}
