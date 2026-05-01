/*
 * XREFs of ?OnViewShown@CActionCenterExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z @ 0x1800139A0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180002DE0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000C888 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RaiseApplicationEvent@CActionCenterExperienceManager@@AEAAJPEBG_N@Z @ 0x180011714 (-RaiseApplicationEvent@CActionCenterExperienceManager@@AEAAJPEBG_N@Z.c)
 *     ?RegisterWithLightDismiss@CActionCenterExperienceManager@@AEAAJXZ @ 0x180012348 (-RegisterWithLightDismiss@CActionCenterExperienceManager@@AEAAJXZ.c)
 */

__int64 __fastcall CActionCenterExperienceManager::OnViewShown(
        CActionCenterExperienceManager *this,
        struct CSingleViewShellExperience *a2)
{
  int v3; // eax
  int v4; // ebx
  int v5; // eax
  unsigned int v6; // ebx
  __int64 v7; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( *((_BYTE *)this + 256)
    && (*((_BYTE *)this + 256) = 0, v3 = DwmpEndTransitionRequest(*((unsigned int *)this + 65), a2), v4 = v3, v3 < 0) )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x87,
      (__int64)"shell\\twinui\\experiencemanagers\\corelib\\experiencemanageranimationhelper.cpp",
      (const char *)(unsigned int)v3);
  }
  else
  {
    v4 = 0;
  }
  if ( v4 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x5FC,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\actioncenterexperiencemanager.cpp",
      (const char *)(unsigned int)v4);
  v5 = CActionCenterExperienceManager::RaiseApplicationEvent(
         (CActionCenterExperienceManager *)((char *)this - 96),
         L"WindowVisibilityChanged",
         1);
  v6 = v5;
  if ( v5 < 0 )
  {
    v7 = 1535LL;
LABEL_9:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v7,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\actioncenterexperiencemanager.cpp",
      (const char *)(unsigned int)v5);
    return v6;
  }
  if ( !*((_DWORD *)this + 62) )
  {
    v5 = CActionCenterExperienceManager::RegisterWithLightDismiss((CActionCenterExperienceManager *)((char *)this - 96));
    v6 = v5;
    if ( v5 < 0 )
    {
      v7 = 1539LL;
      goto LABEL_9;
    }
  }
  return 0LL;
}
