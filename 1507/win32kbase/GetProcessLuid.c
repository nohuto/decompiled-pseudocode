/*
 * XREFs of GetProcessLuid @ 0x1C0031610
 * Callers:
 *     ?InitPreviousUserString@@YAXXZ @ 0x1C0031568 (-InitPreviousUserString@@YAXXZ.c)
 *     xxxInitProcessInfo @ 0x1C0051B44 (xxxInitProcessInfo.c)
 *     xxxODI_ColorInit @ 0x1C007DE20 (xxxODI_ColorInit.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GetProcessLuid(PETHREAD Thread, PLUID AuthenticationId)
{
  struct _KTHREAD *CurrentThread; // rbx
  PACCESS_TOKEN v4; // rdi
  struct _KPROCESS *ThreadProcess; // rax
  unsigned int AuthenticationIdToken; // ebx
  unsigned __int8 EffectiveOnly; // [rsp+40h] [rbp+8h] BYREF
  unsigned __int8 CopyOnOpen; // [rsp+50h] [rbp+18h] BYREF
  enum _SECURITY_IMPERSONATION_LEVEL ImpersonationLevel; // [rsp+58h] [rbp+20h] BYREF

  CurrentThread = Thread;
  if ( !Thread )
    CurrentThread = KeGetCurrentThread();
  v4 = PsReferenceImpersonationToken(CurrentThread, &CopyOnOpen, &EffectiveOnly, &ImpersonationLevel);
  if ( !v4 || ImpersonationLevel < SecurityImpersonation )
  {
    ThreadProcess = PsGetThreadProcess(CurrentThread);
    v4 = PsReferencePrimaryToken(ThreadProcess);
  }
  if ( v4 )
  {
    AuthenticationIdToken = SeQueryAuthenticationIdToken(v4, AuthenticationId);
    ObfDereferenceObject(v4);
  }
  else
  {
    return (unsigned int)-1073741700;
  }
  return AuthenticationIdToken;
}
