/*
 * XREFs of ?ndisCmGetThreadSessionId@@YAKPEAU_ETHREAD@@@Z @ 0x1C00615B4
 * Callers:
 *     NdisGetThreadObjectCompartmentId @ 0x1C000CF00 (NdisGetThreadObjectCompartmentId.c)
 *     NdisGetThreadObjectCompartmentScope @ 0x1C000D040 (NdisGetThreadObjectCompartmentScope.c)
 *     ?ndisCmGetThreadNetworkNamespace@@YAXPEAU_ETHREAD@@PEAI1@Z @ 0x1C000D27C (-ndisCmGetThreadNetworkNamespace@@YAXPEAU_ETHREAD@@PEAI1@Z.c)
 *     NdisGetSessionCompartmentId @ 0x1C000D670 (NdisGetSessionCompartmentId.c)
 *     NdisGetProcessObjectCompartmentId @ 0x1C000DAB0 (NdisGetProcessObjectCompartmentId.c)
 *     NdisSetSessionCompartmentId @ 0x1C00616A0 (NdisSetSessionCompartmentId.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ndisCmGetThreadSessionId(struct _ETHREAD *a1)
{
  PACCESS_TOKEN v2; // rax
  void *v3; // rsi
  NTSTATUS v4; // ebx
  PVOID TokenInformation; // [rsp+20h] [rbp-28h] BYREF
  BOOLEAN EffectiveOnly; // [rsp+58h] [rbp+10h] BYREF
  BOOLEAN CopyOnOpen; // [rsp+60h] [rbp+18h] BYREF
  _SECURITY_IMPERSONATION_LEVEL ImpersonationLevel; // [rsp+68h] [rbp+20h] BYREF

  if ( KeGetCurrentIrql() >= 2u )
    return PsGetCurrentProcessSessionId();
  v2 = PsReferenceImpersonationToken(a1, &CopyOnOpen, &EffectiveOnly, &ImpersonationLevel);
  v3 = v2;
  if ( v2
    && (v4 = SeQueryInformationToken(v2, TokenSessionId, &TokenInformation), PsDereferenceImpersonationToken(v3),
                                                                             v4 >= 0) )
  {
    return (unsigned int)TokenInformation;
  }
  else
  {
    return PsGetThreadSessionId(a1);
  }
}
