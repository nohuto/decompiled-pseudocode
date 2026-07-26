/*
 * XREFs of NdisSetJobObjectCompartmentId @ 0x1C00D17B0
 * Callers:
 *     ndisNsiSetAllJobInformation @ 0x1C00D1A00 (ndisNsiSetAllJobInformation.c)
 * Callees:
 *     ?ndisCmIsThreadCompartmentSandboxed@@YAEPEAU_ETHREAD@@PEAI@Z @ 0x1C0012058 (-ndisCmIsThreadCompartmentSandboxed@@YAEPEAU_ETHREAD@@PEAI@Z.c)
 *     ?ndisCmCreateNetworkNamespace@@YAJPEAPEAU_NDIS_CM_NETWORK_NAMESPACE@@@Z @ 0x1C00120A4 (-ndisCmCreateNetworkNamespace@@YAJPEAPEAU_NDIS_CM_NETWORK_NAMESPACE@@@Z.c)
 *     WPP_SF_qqd @ 0x1C004C3E8 (WPP_SF_qqd.c)
 *     ?ndisCmAssignCompartmentHandleToNamespace@@YAXPEAU_NDIS_CM_NETWORK_NAMESPACE@@PEAX@Z @ 0x1C0060CD4 (-ndisCmAssignCompartmentHandleToNamespace@@YAXPEAU_NDIS_CM_NETWORK_NAMESPACE@@PEAX@Z.c)
 *     ?ndisCmDereferenceCompartment@@YAXPEAX@Z @ 0x1C0060D94 (-ndisCmDereferenceCompartment@@YAXPEAX@Z.c)
 *     ?ndisCmFindCompartment@@YAPEAXI@Z @ 0x1C0060D9C (-ndisCmFindCompartment@@YAPEAXI@Z.c)
 *     ndisIfSetCompartmentJobObject @ 0x1C00BFF44 (ndisIfSetCompartmentJobObject.c)
 */

__int64 __fastcall NdisSetJobObjectCompartmentId(void *a1, unsigned int a2)
{
  _QWORD *JobProperty; // rsi
  struct _NDIS_IF_COMPARTMENT_BLOCK *Compartment; // rdi
  int NetworkNamespace; // ebx
  __int64 v7; // rcx
  PVOID Object; // [rsp+60h] [rbp+18h] BYREF

  Object = 0LL;
  JobProperty = 0LL;
  Compartment = 0LL;
  if ( ndisCmIsThreadCompartmentSandboxed(KeGetCurrentThread(), 0LL) )
  {
    if ( (unsigned __int8)byte_1C008371D >= 3u )
      WPP_SF_qqd(0xCu, &WPP_47113055b93e7e97d5d7f65fd208740c_Traceguids, KeGetCurrentThread(), a1, a2);
    NetworkNamespace = -1073741790;
    goto LABEL_21;
  }
  if ( a2 )
  {
    Compartment = ndisCmFindCompartment(a2);
    if ( !Compartment )
    {
      NetworkNamespace = -1073741275;
      goto LABEL_21;
    }
    NetworkNamespace = ndisCmCreateNetworkNamespace((struct _NDIS_CM_NETWORK_NAMESPACE **)&Object);
    if ( NetworkNamespace < 0 )
      goto LABEL_19;
    *(_DWORD *)Object = a2;
    ndisCmAssignCompartmentHandleToNamespace((struct _NDIS_CM_NETWORK_NAMESPACE *)Object, Compartment);
  }
  JobProperty = (_QWORD *)PsGetJobProperty(a1, 1934522190LL);
  do
  {
    NetworkNamespace = PsSetJobProperty(a1, 1934522190LL, Object);
    if ( NetworkNamespace != -1073741771 )
      break;
    NetworkNamespace = PsSetJobProperty(a1, 1934522190LL, 0LL);
  }
  while ( NetworkNamespace == -1073741771 );
  if ( NetworkNamespace < 0 )
  {
LABEL_19:
    if ( Compartment )
      ndisCmDereferenceCompartment((unsigned int *)Compartment);
    goto LABEL_21;
  }
  if ( JobProperty )
  {
    v7 = JobProperty[1];
    if ( v7 )
      ndisIfSetCompartmentJobObject(v7, 0LL);
  }
  if ( Compartment )
  {
    ndisIfSetCompartmentJobObject((__int64)Compartment, a1);
    goto LABEL_19;
  }
LABEL_21:
  if ( Object )
    ObfDereferenceObject(Object);
  if ( JobProperty )
    ObfDereferenceObject(JobProperty);
  return (unsigned int)NetworkNamespace;
}
