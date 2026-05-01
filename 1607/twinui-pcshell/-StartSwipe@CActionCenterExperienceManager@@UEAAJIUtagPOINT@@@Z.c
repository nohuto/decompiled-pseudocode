/*
 * XREFs of ?StartSwipe@CActionCenterExperienceManager@@UEAAJIUtagPOINT@@@Z @ 0x180010B10
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180002DE0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalEntryPointInvoked@CActionCenterExperienceManager@@AEAAJ_N@Z @ 0x180011C4C (-InternalEntryPointInvoked@CActionCenterExperienceManager@@AEAAJ_N@Z.c)
 */

__int64 __fastcall CActionCenterExperienceManager::StartSwipe(
        CActionCenterExperienceManager *this,
        bool a2,
        struct tagPOINT a3)
{
  int v3; // eax
  unsigned int v4; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v3 = CActionCenterExperienceManager::InternalEntryPointInvoked(
         (CActionCenterExperienceManager *)((char *)this - 40),
         a2);
  v4 = v3;
  if ( v3 < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x196,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\actioncenterexperiencemanager.cpp",
      (const char *)(unsigned int)v3);
  return v4;
}
