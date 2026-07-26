/*
 * XREFs of ?ndisCmGetThreadSessionId@@YAKPEAU_ETHREAD@@@Z @ 0x1C00650DC
 * Callers:
 *     ?ndisNsiGetInterfaceInformation@@YAJPEAU_NM_REQUEST_GET_PARAMETER@@@Z @ 0x1C0007260 (-ndisNsiGetInterfaceInformation@@YAJPEAU_NM_REQUEST_GET_PARAMETER@@@Z.c)
 *     ?ndisNsiEnumerateAllInterfaceInformation@@YAJPEAU_NM_REQUEST_ENUMERATE_OBJECTS_ALL_PARAMETERS@@@Z @ 0x1C0007D40 (-ndisNsiEnumerateAllInterfaceInformation@@YAJPEAU_NM_REQUEST_ENUMERATE_OBJECTS_ALL_PARAMETERS@@@.c)
 *     ?ndisNsiGetAllInterfaceInformation@@YAJPEAU_NM_REQUEST_GET_ALL_PARAMETERS@@@Z @ 0x1C0008B30 (-ndisNsiGetAllInterfaceInformation@@YAJPEAU_NM_REQUEST_GET_ALL_PARAMETERS@@@Z.c)
 *     NdisGetSessionCompartmentId @ 0x1C000D3B0 (NdisGetSessionCompartmentId.c)
 *     NdisGetThreadObjectCompartmentId @ 0x1C000EAF0 (NdisGetThreadObjectCompartmentId.c)
 *     NdisGetThreadObjectCompartmentScope @ 0x1C000EBA0 (NdisGetThreadObjectCompartmentScope.c)
 *     ?ndisCmGetThreadState@@YAXPEAU_ETHREAD@@PEAI1@Z @ 0x1C000F320 (-ndisCmGetThreadState@@YAXPEAU_ETHREAD@@PEAI1@Z.c)
 *     NdisSetSessionCompartmentId @ 0x1C00653A0 (NdisSetSessionCompartmentId.c)
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
    return PsGetCurrentProcessSessionId(a1);
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
