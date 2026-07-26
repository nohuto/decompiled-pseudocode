/*
 * XREFs of NdisGetThreadObjectCompartmentScope @ 0x1C000EBA0
 * Callers:
 *     <none>
 * Callees:
 *     ?ndisCmGetThreadSessionId@@YAKPEAU_ETHREAD@@@Z @ 0x1C00650DC (-ndisCmGetThreadSessionId@@YAKPEAU_ETHREAD@@@Z.c)
 */

__int64 __fastcall NdisGetThreadObjectCompartmentScope(PETHREAD Thread, _DWORD *a2, _DWORD *a3)
{
  __int64 result; // rax
  __int64 v7; // rcx
  PACCESS_TOKEN v8; // rax
  void *v9; // rsi
  unsigned int CurrentProcessSessionId; // eax
  unsigned int ThreadSessionId; // ebx
  NTSTATUS v12; // ebx
  unsigned int v13; // esi
  KIRQL v14; // al
  _SECURITY_IMPERSONATION_LEVEL ImpersonationLevel; // [rsp+20h] [rbp-28h] BYREF
  PVOID TokenInformation; // [rsp+28h] [rbp-20h] BYREF
  BOOLEAN EffectiveOnly; // [rsp+60h] [rbp+18h] BYREF
  BOOLEAN CopyOnOpen; // [rsp+68h] [rbp+20h] BYREF

  result = (__int64)PsGetThreadProperty(Thread, 0x6D43644EuLL, 0);
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
    CurrentProcessSessionId = PsGetCurrentProcessSessionId(v7);
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
    v13 = 0;
    v14 = KeAcquireSpinLockRaiseToDpc(&ndisCmSessionLock);
    if ( ThreadSessionId < ndisCmSessionCount )
      v13 = *((_DWORD *)ndisCmSession + 6 * ThreadSessionId);
    KeReleaseSpinLock(&ndisCmSessionLock, v14);
    if ( !v13 )
      v13 = 1;
    result = v13;
  }
  else
  {
    result = 1LL;
  }
  *a3 = result;
  return result;
}
