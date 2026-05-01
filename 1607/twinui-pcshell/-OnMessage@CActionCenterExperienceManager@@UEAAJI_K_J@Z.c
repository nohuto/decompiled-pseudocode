/*
 * XREFs of ?OnMessage@CActionCenterExperienceManager@@UEAAJI_K_J@Z @ 0x180010C10
 * Callers:
 *     <none>
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000C888 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?OnTargetedMessage@CActionCenterExperienceManager@@AEAAJW4TargetedMessageKind@1@G@Z @ 0x180010CC0 (-OnTargetedMessage@CActionCenterExperienceManager@@AEAAJW4TargetedMessageKind@1@G@Z.c)
 */

__int64 __fastcall CActionCenterExperienceManager::OnMessage(
        CActionCenterExperienceManager *this,
        int a2,
        char *a3,
        const WCHAR *a4)
{
  int v5; // eax
  __int64 v6; // rdx
  char *v7; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  if ( a2 )
  {
    if ( a2 == 26 )
    {
      if ( (_DWORD)a3 == 67 )
      {
        v5 = CActionCenterExperienceManager::OnTargetedMessage((char *)this - 56, 5LL);
        if ( v5 < 0 )
        {
          v6 = 442LL;
LABEL_13:
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            (void *)v6,
            (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\actioncenterexperiencemanager.cpp",
            (const char *)(unsigned int)v5);
        }
      }
      else if ( a4 )
      {
        if ( CompareStringOrdinal(a4, -1, L"ImmersiveColorSet", -1, 0) == 2 )
        {
          v5 = CActionCenterExperienceManager::OnTargetedMessage((char *)this - 56, 4LL);
          if ( v5 < 0 )
          {
            v6 = 446LL;
            goto LABEL_13;
          }
        }
      }
    }
  }
  else
  {
    v7 = (char *)this - 56;
    if ( a3 == v7 )
    {
      v5 = CActionCenterExperienceManager::OnTargetedMessage(v7, (unsigned __int16)a4);
      if ( v5 < 0 )
      {
        v6 = 436LL;
        goto LABEL_13;
      }
    }
  }
  return 0LL;
}
