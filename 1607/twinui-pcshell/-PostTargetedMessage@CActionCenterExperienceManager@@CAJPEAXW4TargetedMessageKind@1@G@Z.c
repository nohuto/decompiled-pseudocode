/*
 * XREFs of ?PostTargetedMessage@CActionCenterExperienceManager@@CAJPEAXW4TargetedMessageKind@1@G@Z @ 0x180010BCC
 * Callers:
 *     _lambda_ceafefa0c468dfb376f6405f05df8602_::_lambda_invoker_cdecl_ @ 0x180011470 (_lambda_ceafefa0c468dfb376f6405f05df8602_--_lambda_invoker_cdecl_.c)
 *     ?ShellReadyCallback@CActionCenterExperienceManager@@CAJU_WNF_STATE_NAME@@KPEAU_WNF_TYPE_ID@@PEAXPEBXK@Z @ 0x180011DA0 (-ShellReadyCallback@CActionCenterExperienceManager@@CAJU_WNF_STATE_NAME@@KPEAU_WNF_TYPE_ID@@PEAX.c)
 *     ?NotificationStateChangedCallback@CActionCenterExperienceManager@@CAJU_WNF_STATE_NAME@@KPEAU_WNF_TYPE_ID@@PEAXPEBXK@Z @ 0x180011DE0 (-NotificationStateChangedCallback@CActionCenterExperienceManager@@CAJU_WNF_STATE_NAME@@KPEAU_WNF.c)
 *     ?CriticalNotificationStateChangedCallback@CActionCenterExperienceManager@@CAJU_WNF_STATE_NAME@@KPEAU_WNF_TYPE_ID@@PEAXPEBXK@Z @ 0x180011E20 (-CriticalNotificationStateChangedCallback@CActionCenterExperienceManager@@CAJU_WNF_STATE_NAME@@K.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180002DE0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?PostToUIThread@ExperienceManagerUtils@@YAJPEAUIUnknown@@PEAX_J@Z @ 0x1800275BC (-PostToUIThread@ExperienceManagerUtils@@YAJPEAUIUnknown@@PEAX_J@Z.c)
 */

__int64 __fastcall CActionCenterExperienceManager::PostTargetedMessage(
        ExperienceManagerUtils *a1,
        unsigned __int16 a2,
        __int64 a3,
        __int64 a4)
{
  int v4; // eax
  unsigned int v5; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v4 = ExperienceManagerUtils::PostToUIThread(a1, (struct IUnknown *)a1, (void *)a2, a4);
  v5 = v4;
  if ( v4 < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1A9,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\actioncenterexperiencemanager.cpp",
      (const char *)(unsigned int)v4);
  return v5;
}
