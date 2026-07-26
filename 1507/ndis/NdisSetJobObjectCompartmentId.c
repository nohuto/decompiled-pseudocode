/*
 * XREFs of NdisSetJobObjectCompartmentId @ 0x1C00D8140
 * Callers:
 *     ndisNsiSetAllJobInformation @ 0x1C00D8300 (ndisNsiSetAllJobInformation.c)
 * Callees:
 *     ?ndisCmCreateNetworkNamespace@@YAJPEAPEAU_NDIS_CM_NETWORK_NAMESPACE@@@Z @ 0x1C000E95C (-ndisCmCreateNetworkNamespace@@YAJPEAPEAU_NDIS_CM_NETWORK_NAMESPACE@@@Z.c)
 *     ?ndisCmAssignCompartmentHandleToNamespace@@YAXPEAU_NDIS_CM_NETWORK_NAMESPACE@@PEAX@Z @ 0x1C00220B8 (-ndisCmAssignCompartmentHandleToNamespace@@YAXPEAU_NDIS_CM_NETWORK_NAMESPACE@@PEAX@Z.c)
 *     ?ndisCmDereferenceCompartment@@YAXPEAX@Z @ 0x1C0061588 (-ndisCmDereferenceCompartment@@YAXPEAX@Z.c)
 *     ?ndisCmFindCompartment@@YAPEAXI@Z @ 0x1C0061590 (-ndisCmFindCompartment@@YAPEAXI@Z.c)
 */

__int64 __fastcall NdisSetJobObjectCompartmentId(__int64 a1, unsigned int a2)
{
  struct _NDIS_IF_COMPARTMENT_BLOCK *Compartment; // rdi
  int NetworkNamespace; // ebx
  PVOID Object; // [rsp+40h] [rbp+18h] BYREF

  Object = 0LL;
  Compartment = 0LL;
  if ( !a2 )
  {
    do
    {
LABEL_6:
      NetworkNamespace = PsSetJobProperty(a1, 1934522190LL, Object);
      if ( NetworkNamespace != -1073741771 )
        break;
      NetworkNamespace = PsSetJobProperty(a1, 1934522190LL, 0LL);
    }
    while ( NetworkNamespace == -1073741771 );
    goto LABEL_8;
  }
  Compartment = ndisCmFindCompartment(a2);
  if ( !Compartment )
  {
    NetworkNamespace = -1073741275;
    goto LABEL_10;
  }
  NetworkNamespace = ndisCmCreateNetworkNamespace((struct _NDIS_CM_NETWORK_NAMESPACE **)&Object);
  if ( NetworkNamespace >= 0 )
  {
    *(_DWORD *)Object = a2;
    ndisCmAssignCompartmentHandleToNamespace((struct _NDIS_CM_NETWORK_NAMESPACE *)Object, Compartment);
    goto LABEL_6;
  }
LABEL_8:
  if ( Compartment )
    ndisCmDereferenceCompartment((unsigned int *)Compartment);
LABEL_10:
  if ( Object )
    ObfDereferenceObject(Object);
  return (unsigned int)NetworkNamespace;
}
