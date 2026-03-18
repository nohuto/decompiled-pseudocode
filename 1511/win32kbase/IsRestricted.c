/*
 * XREFs of IsRestricted @ 0x1C006DDD0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall IsRestricted(PETHREAD Thread)
{
  PACCESS_TOKEN v2; // rbx
  struct _KPROCESS *ThreadProcess; // rax
  BOOLEAN v4; // di
  unsigned __int8 EffectiveOnly; // [rsp+38h] [rbp+10h] BYREF
  unsigned __int8 CopyOnOpen; // [rsp+40h] [rbp+18h] BYREF
  enum _SECURITY_IMPERSONATION_LEVEL ImpersonationLevel; // [rsp+48h] [rbp+20h] BYREF

  v2 = PsReferenceImpersonationToken(Thread, &CopyOnOpen, &EffectiveOnly, &ImpersonationLevel);
  if ( !v2 || ImpersonationLevel < SecurityImpersonation )
  {
    ThreadProcess = PsGetThreadProcess(Thread);
    v2 = PsReferencePrimaryToken(ThreadProcess);
  }
  v4 = SeTokenIsRestricted(v2);
  ObfDereferenceObject(v2);
  return v4;
}
