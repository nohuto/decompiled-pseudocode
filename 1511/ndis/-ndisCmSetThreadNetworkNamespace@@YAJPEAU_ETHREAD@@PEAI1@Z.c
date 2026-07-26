/*
 * XREFs of ?ndisCmSetThreadNetworkNamespace@@YAJPEAU_ETHREAD@@PEAI1@Z @ 0x1C0011F00
 * Callers:
 *     ndisNsiSetThreadInformation @ 0x1C00979A0 (ndisNsiSetThreadInformation.c)
 *     NdisSetThreadObjectCompartmentId @ 0x1C00D1910 (NdisSetThreadObjectCompartmentId.c)
 *     NdisSetThreadObjectCompartmentScope @ 0x1C00D1930 (NdisSetThreadObjectCompartmentScope.c)
 *     ndisNsiSetAllThreadInformation @ 0x1C00D1AD0 (ndisNsiSetAllThreadInformation.c)
 * Callees:
 *     ?ndisCmIsThreadCompartmentSandboxed@@YAEPEAU_ETHREAD@@PEAI@Z @ 0x1C0012058 (-ndisCmIsThreadCompartmentSandboxed@@YAEPEAU_ETHREAD@@PEAI@Z.c)
 *     ?ndisCmCreateNetworkNamespace@@YAJPEAPEAU_NDIS_CM_NETWORK_NAMESPACE@@@Z @ 0x1C00120A4 (-ndisCmCreateNetworkNamespace@@YAJPEAPEAU_NDIS_CM_NETWORK_NAMESPACE@@@Z.c)
 *     WPP_SF_qq @ 0x1C0026510 (WPP_SF_qq.c)
 *     ndisIfDereferenceCompartmentForUser @ 0x1C003FC24 (ndisIfDereferenceCompartmentForUser.c)
 *     ndisIfReferenceCompartmentForUser @ 0x1C003FE34 (ndisIfReferenceCompartmentForUser.c)
 *     ?ndisCmAssignCompartmentHandleToNamespace@@YAXPEAU_NDIS_CM_NETWORK_NAMESPACE@@PEAX@Z @ 0x1C0060CD4 (-ndisCmAssignCompartmentHandleToNamespace@@YAXPEAU_NDIS_CM_NETWORK_NAMESPACE@@PEAX@Z.c)
 */

__int64 __fastcall ndisCmSetThreadNetworkNamespace(PETHREAD Thread, unsigned int *a2, unsigned int *a3)
{
  char v6; // bl
  char v7; // r12
  _DWORD *ThreadProperty; // rax
  int NetworkNamespace; // ebx
  PVOID Object[2]; // [rsp+20h] [rbp-10h] BYREF
  unsigned int v12; // [rsp+78h] [rbp+48h] BYREF

  Object[0] = 0LL;
  v6 = 0;
  v7 = 0;
  if ( !ndisCmIsThreadCompartmentSandboxed(KeGetCurrentThread(), &v12)
    || KeGetCurrentThread() == Thread && (!a2 || *a2 == v12 || !*a2) && (!a3 || !*a3) )
  {
    if ( a2 && *a2 )
    {
      Object[1] = 0LL;
      ndisIfReferenceCompartmentForUser(0LL);
      NetworkNamespace = -1073741275;
      goto LABEL_14;
    }
    if ( a3 )
    {
      if ( *a3 == -1 )
      {
        v6 = 1;
      }
      else if ( *a3 )
      {
        NetworkNamespace = -1073741811;
        goto LABEL_14;
      }
    }
    ThreadProperty = PsGetThreadProperty(Thread, 0x734E774EuLL, 1u);
    Object[0] = ThreadProperty;
    if ( ThreadProperty )
    {
      if ( a2 )
      {
        *ThreadProperty = *a2;
        ndisCmAssignCompartmentHandleToNamespace((struct _NDIS_CM_NETWORK_NAMESPACE *)Object[0], 0LL);
      }
      if ( a3 )
        *((_DWORD *)Object[0] + 1) = *a3;
      if ( !*(_DWORD *)Object[0] && !*((_DWORD *)Object[0] + 1) )
      {
        ObfDereferenceObject(Object[0]);
        Object[0] = 0LL;
        v7 = 1;
      }
    }
    else if ( v6 )
    {
      NetworkNamespace = ndisCmCreateNetworkNamespace((struct _NDIS_CM_NETWORK_NAMESPACE **)Object);
      if ( NetworkNamespace < 0 )
        goto LABEL_14;
      if ( a2 )
      {
        *(_DWORD *)Object[0] = *a2;
        ndisCmAssignCompartmentHandleToNamespace((struct _NDIS_CM_NETWORK_NAMESPACE *)Object[0], 0LL);
      }
      if ( a3 )
        *((_DWORD *)Object[0] + 1) = *a3;
      goto LABEL_13;
    }
    NetworkNamespace = 0;
    if ( !v7 )
      goto LABEL_14;
LABEL_13:
    NetworkNamespace = PsSetThreadProperty(Thread, 1934522190LL, Object[0]);
    goto LABEL_14;
  }
  if ( (unsigned __int8)byte_1C008371D >= 3u )
    WPP_SF_qq(10LL, &WPP_47113055b93e7e97d5d7f65fd208740c_Traceguids, KeGetCurrentThread(), Thread);
  NetworkNamespace = -1073741790;
LABEL_14:
  if ( Object[0] )
    ObfDereferenceObject(Object[0]);
  return (unsigned int)NetworkNamespace;
}
