/*
 * XREFs of NdisGetThreadObjectCompartmentScope @ 0x1C000D040
 * Callers:
 *     <none>
 * Callees:
 *     ?ndisCmGetThreadSessionId@@YAKPEAU_ETHREAD@@@Z @ 0x1C00615B4 (-ndisCmGetThreadSessionId@@YAKPEAU_ETHREAD@@@Z.c)
 */

__int64 __fastcall NdisGetThreadObjectCompartmentScope(PETHREAD Thread, _DWORD *a2, _DWORD *a3)
{
  __int64 result; // rax
  unsigned int v7; // esi
  PACCESS_TOKEN v8; // rax
  void *v9; // r14
  unsigned int CurrentProcessSessionId; // eax
  unsigned int ThreadSessionId; // edi
  NTSTATUS v12; // edi
  KIRQL v13; // al
  _SECURITY_IMPERSONATION_LEVEL ImpersonationLevel; // [rsp+20h] [rbp-28h] BYREF
  PVOID TokenInformation; // [rsp+28h] [rbp-20h] BYREF
  BOOLEAN EffectiveOnly; // [rsp+60h] [rbp+18h] BYREF
  BOOLEAN CopyOnOpen; // [rsp+68h] [rbp+20h] BYREF

  result = (__int64)PsGetThreadProperty(Thread, 0x734E774EuLL, 0);
  v7 = 0;
  if ( result )
  {
    *a3 = *(_DWORD *)result;
    *a2 = *(_DWORD *)(result + 4);
    result = ObfDereferenceObject((PVOID)result);
  }
  else
  {
    *a3 = 0;
    *a2 = 0;
  }
  if ( *a3 )
    return result;
  if ( KeGetCurrentIrql() >= 2u )
  {
    CurrentProcessSessionId = PsGetCurrentProcessSessionId();
  }
  else
  {
    v8 = PsReferenceImpersonationToken(Thread, &CopyOnOpen, &EffectiveOnly, &ImpersonationLevel);
    v9 = v8;
    if ( v8 )
    {
      v12 = SeQueryInformationToken(v8, TokenSessionId, &TokenInformation);
      PsDereferenceImpersonationToken(v9);
      if ( v12 >= 0 )
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
    v13 = KeAcquireSpinLockRaiseToDpc(&ndisCmSessionLock);
    if ( ThreadSessionId < ndisCmSessionCount )
      v7 = *((_DWORD *)ndisCmSession + 6 * ThreadSessionId);
    KeReleaseSpinLock(&ndisCmSessionLock, v13);
    if ( !v7 )
      v7 = 1;
    result = v7;
  }
  else
  {
    result = 1LL;
  }
  *a3 = result;
  return result;
}
