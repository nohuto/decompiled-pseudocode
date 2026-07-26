/*
 * XREFs of ?ndisCmSetThreadNetworkNamespace@@YAJPEAU_ETHREAD@@PEAI1@Z @ 0x1C000E7B4
 * Callers:
 *     ndisNsiSetThreadInformation @ 0x1C009A830 (ndisNsiSetThreadInformation.c)
 *     NdisSetThreadObjectCompartmentId @ 0x1C00D8210 (NdisSetThreadObjectCompartmentId.c)
 *     NdisSetThreadObjectCompartmentScope @ 0x1C00D8230 (NdisSetThreadObjectCompartmentScope.c)
 *     ndisNsiSetAllThreadInformation @ 0x1C00D83D0 (ndisNsiSetAllThreadInformation.c)
 * Callees:
 *     ?ndisCmCreateNetworkNamespace@@YAJPEAPEAU_NDIS_CM_NETWORK_NAMESPACE@@@Z @ 0x1C000E95C (-ndisCmCreateNetworkNamespace@@YAJPEAPEAU_NDIS_CM_NETWORK_NAMESPACE@@@Z.c)
 *     ndisIfReferenceCompartmentForUser @ 0x1C0021CBC (ndisIfReferenceCompartmentForUser.c)
 *     ndisIfDereferenceCompartmentForUser @ 0x1C0021E20 (ndisIfDereferenceCompartmentForUser.c)
 *     ?ndisCmAssignCompartmentHandleToNamespace@@YAXPEAU_NDIS_CM_NETWORK_NAMESPACE@@PEAX@Z @ 0x1C00220B8 (-ndisCmAssignCompartmentHandleToNamespace@@YAXPEAU_NDIS_CM_NETWORK_NAMESPACE@@PEAX@Z.c)
 */

__int64 __fastcall ndisCmSetThreadNetworkNamespace(PETHREAD Thread, unsigned int *a2, unsigned int *a3)
{
  _DWORD *v3; // r9
  void *v4; // r14
  char v5; // bl
  char v6; // r15
  unsigned int *v8; // rsi
  _DWORD *ThreadProperty; // rax
  int NetworkNamespace; // ebx
  PVOID Object; // [rsp+58h] [rbp+38h] BYREF
  void *v14; // [rsp+68h] [rbp+48h]

  v3 = 0LL;
  v4 = 0LL;
  v5 = 0;
  Object = 0LL;
  v6 = 0;
  v8 = a2;
  if ( a2 )
  {
    a2 = (unsigned int *)*a2;
    if ( (_DWORD)a2 )
    {
      v14 = 0LL;
      ndisIfReferenceCompartmentForUser(0LL);
      v4 = v14;
      v3 = Object;
      if ( !v14 )
      {
        NetworkNamespace = -1073741275;
        goto LABEL_15;
      }
      v5 = 1;
    }
  }
  if ( a3 )
  {
    if ( *a3 == -1 )
    {
      v5 = 1;
    }
    else if ( *a3 )
    {
      NetworkNamespace = -1073741811;
      goto LABEL_15;
    }
  }
  ThreadProperty = PsGetThreadProperty(Thread, 0x734E774EuLL, 1u);
  Object = ThreadProperty;
  v3 = ThreadProperty;
  if ( ThreadProperty )
  {
    if ( v8 )
    {
      *ThreadProperty = *v8;
      ndisCmAssignCompartmentHandleToNamespace((struct _NDIS_CM_NETWORK_NAMESPACE *)Object, v4);
      v3 = Object;
    }
    if ( a3 )
    {
      v3[1] = *a3;
      v3 = Object;
    }
    if ( !*v3 && !v3[1] )
    {
      ObfDereferenceObject(v3);
      v3 = 0LL;
      v6 = 1;
      Object = 0LL;
    }
  }
  else if ( v5 )
  {
    NetworkNamespace = ndisCmCreateNetworkNamespace((struct _NDIS_CM_NETWORK_NAMESPACE **)&Object);
    if ( NetworkNamespace < 0 )
    {
LABEL_14:
      v3 = Object;
      goto LABEL_15;
    }
    if ( v8 )
    {
      *(_DWORD *)Object = *v8;
      ndisCmAssignCompartmentHandleToNamespace((struct _NDIS_CM_NETWORK_NAMESPACE *)Object, v4);
    }
    if ( a3 )
      *((_DWORD *)Object + 1) = *a3;
    v3 = Object;
LABEL_13:
    NetworkNamespace = PsSetThreadProperty(Thread, 1934522190LL, v3);
    goto LABEL_14;
  }
  NetworkNamespace = 0;
  if ( v6 )
    goto LABEL_13;
LABEL_15:
  if ( v4 )
  {
    ndisIfDereferenceCompartmentForUser(v4, a2, a3, v3);
    v3 = Object;
  }
  if ( v3 )
    ObfDereferenceObject(v3);
  return (unsigned int)NetworkNamespace;
}
