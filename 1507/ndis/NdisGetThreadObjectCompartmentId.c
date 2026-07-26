/*
 * XREFs of NdisGetThreadObjectCompartmentId @ 0x1C000CF00
 * Callers:
 *     <none>
 * Callees:
 *     ?ndisCmGetThreadSessionId@@YAKPEAU_ETHREAD@@@Z @ 0x1C00615B4 (-ndisCmGetThreadSessionId@@YAKPEAU_ETHREAD@@@Z.c)
 */

__int64 __fastcall NdisGetThreadObjectCompartmentId(PETHREAD Thread)
{
  unsigned int *ThreadProperty; // rax
  PACCESS_TOKEN v3; // rax
  void *v4; // rsi
  unsigned int CurrentProcessSessionId; // eax
  unsigned int ThreadSessionId; // ebx
  unsigned int v8; // ebx
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
    v8 = *ThreadProperty;
    ObfDereferenceObject(ThreadProperty);
    if ( v8 )
      return v8;
  }
  if ( KeGetCurrentIrql() >= 2u )
  {
    CurrentProcessSessionId = PsGetCurrentProcessSessionId();
  }
  else
  {
    v3 = PsReferenceImpersonationToken(Thread, &CopyOnOpen, &EffectiveOnly, &ImpersonationLevel);
    v4 = v3;
    if ( v3 )
    {
      v9 = SeQueryInformationToken(v3, TokenSessionId, &TokenInformation);
      PsDereferenceImpersonationToken(v4);
      if ( v9 >= 0 )
      {
        ThreadSessionId = (unsigned int)TokenInformation;
        goto LABEL_6;
      }
    }
    CurrentProcessSessionId = PsGetThreadSessionId(Thread);
  }
  ThreadSessionId = CurrentProcessSessionId;
LABEL_6:
  if ( ThreadSessionId == -1 )
    ThreadSessionId = ndisCmGetThreadSessionId(KeGetCurrentThread());
  if ( ThreadSessionId >= ndisCmSessionCount )
    return 1LL;
  v10 = 0;
  v11 = KeAcquireSpinLockRaiseToDpc(&ndisCmSessionLock);
  if ( ThreadSessionId < ndisCmSessionCount )
    v10 = *((_DWORD *)ndisCmSession + 6 * ThreadSessionId);
  KeReleaseSpinLock(&ndisCmSessionLock, v11);
  if ( !v10 )
    return 1;
  return v10;
}
