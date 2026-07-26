/*
 * XREFs of NdisGetThreadObjectCompartmentId @ 0x1C000F120
 * Callers:
 *     <none>
 * Callees:
 *     ?ndisCmGetThreadSessionId@@YAKPEAU_ETHREAD@@@Z @ 0x1C0060DC0 (-ndisCmGetThreadSessionId@@YAKPEAU_ETHREAD@@@Z.c)
 */

__int64 __fastcall NdisGetThreadObjectCompartmentId(PETHREAD Thread)
{
  unsigned int *ThreadProperty; // rax
  unsigned int v3; // ebx
  PACCESS_TOKEN v4; // rax
  void *v5; // rsi
  unsigned int CurrentProcessSessionId; // eax
  unsigned int ThreadSessionId; // ebx
  NTSTATUS v9; // ebx
  unsigned int v10; // edi
  KIRQL v11; // al
  PVOID TokenInformation; // [rsp+20h] [rbp-28h] BYREF
  BOOLEAN EffectiveOnly; // [rsp+58h] [rbp+10h] BYREF
  BOOLEAN CopyOnOpen; // [rsp+60h] [rbp+18h] BYREF
  _SECURITY_IMPERSONATION_LEVEL ImpersonationLevel; // [rsp+68h] [rbp+20h] BYREF

  ThreadProperty = (unsigned int *)PsGetThreadProperty(Thread, 0x734E774EuLL, 0);
  if ( ThreadProperty )
  {
    v3 = *ThreadProperty;
    ObfDereferenceObject(ThreadProperty);
  }
  else
  {
    v3 = 0;
  }
  if ( v3 )
    return v3;
  if ( KeGetCurrentIrql() >= 2u )
  {
    CurrentProcessSessionId = PsGetCurrentProcessSessionId();
  }
  else
  {
    v4 = PsReferenceImpersonationToken(Thread, &CopyOnOpen, &EffectiveOnly, &ImpersonationLevel);
    v5 = v4;
    if ( v4 )
    {
      v9 = SeQueryInformationToken(v4, TokenSessionId, &TokenInformation);
      PsDereferenceImpersonationToken(v5);
      if ( v9 >= 0 )
      {
        ThreadSessionId = (unsigned int)TokenInformation;
        goto LABEL_8;
      }
    }
    CurrentProcessSessionId = PsGetThreadSessionId(Thread);
  }
  ThreadSessionId = CurrentProcessSessionId;
LABEL_8:
  if ( ThreadSessionId == -1 )
    ThreadSessionId = ndisCmGetThreadSessionId(KeGetCurrentThread());
  if ( ThreadSessionId < ndisCmSessionCount )
  {
    v10 = 0;
    v11 = KeAcquireSpinLockRaiseToDpc(&ndisCmSessionLock);
    if ( ThreadSessionId < ndisCmSessionCount )
      v10 = *((_DWORD *)ndisCmSession + 6 * ThreadSessionId);
    KeReleaseSpinLock(&ndisCmSessionLock, v11);
    if ( !v10 )
      return 1;
    return v10;
  }
  else
  {
    return 1;
  }
}
