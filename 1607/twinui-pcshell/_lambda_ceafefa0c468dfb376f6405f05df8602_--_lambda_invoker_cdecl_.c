/*
 * XREFs of _lambda_ceafefa0c468dfb376f6405f05df8602_::_lambda_invoker_cdecl_ @ 0x180011470
 * Callers:
 *     <none>
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000C888 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?PostTargetedMessage@CActionCenterExperienceManager@@CAJPEAXW4TargetedMessageKind@1@G@Z @ 0x180010BCC (-PostTargetedMessage@CActionCenterExperienceManager@@CAJPEAXW4TargetedMessageKind@1@G@Z.c)
 */

void __fastcall lambda_ceafefa0c468dfb376f6405f05df8602_::_lambda_invoker_cdecl_(
        PTP_CALLBACK_INSTANCE Instance,
        ExperienceManagerUtils *Context,
        __int64 Timer,
        __int64 a4)
{
  int v4; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v4 = CActionCenterExperienceManager::PostTargetedMessage(Context, 3u, Timer, a4);
  if ( v4 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x250,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\actioncenterexperiencemanager.cpp",
      (const char *)(unsigned int)v4);
}
