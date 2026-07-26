/*
 * XREFs of ?ndisCmSetThreadState@@YAJPEAU_ETHREAD@@PEAI1@Z @ 0x1C0010E38
 * Callers:
 *     ndisNsiSetThreadInformation @ 0x1C009C2B0 (ndisNsiSetThreadInformation.c)
 *     NdisSetThreadObjectCompartmentId @ 0x1C00D7900 (NdisSetThreadObjectCompartmentId.c)
 *     NdisSetThreadObjectCompartmentScope @ 0x1C00D7920 (NdisSetThreadObjectCompartmentScope.c)
 *     ndisNsiSetAllThreadInformation @ 0x1C00D7AC0 (ndisNsiSetAllThreadInformation.c)
 * Callees:
 *     NdisGetThreadObjectCompartmentId @ 0x1C000EAF0 (NdisGetThreadObjectCompartmentId.c)
 *     ?ndisCmCreateStateObject@@YAJPEAPEAU_NDIS_CM_STATE@@@Z @ 0x1C0010F90 (-ndisCmCreateStateObject@@YAJPEAPEAU_NDIS_CM_STATE@@@Z.c)
 *     ndisIfDereferenceCompartmentForUser @ 0x1C0043878 (ndisIfDereferenceCompartmentForUser.c)
 *     ?ndisCmAssignCompartmentHandleToCmState@@YAXPEAU_NDIS_CM_STATE@@PEAX@Z @ 0x1C0065014 (-ndisCmAssignCompartmentHandleToCmState@@YAXPEAU_NDIS_CM_STATE@@PEAX@Z.c)
 *     ?ndisCmValidateCompartmentChange@@YAPEAXII@Z @ 0x1C0065198 (-ndisCmValidateCompartmentChange@@YAPEAXII@Z.c)
 */

__int64 __fastcall ndisCmSetThreadState(PETHREAD Thread, unsigned int *a2, unsigned int *a3)
{
  _DWORD *v3; // r9
  void *v4; // r14
  char v5; // bl
  char v6; // r12
  _DWORD *ThreadProperty; // rax
  int StateObject; // ebx
  unsigned int v13; // r15d
  unsigned int ThreadObjectCompartmentId; // eax
  void *v15; // rax
  PVOID Object; // [rsp+58h] [rbp+38h] BYREF

  v3 = 0LL;
  v4 = 0LL;
  v5 = 0;
  Object = 0LL;
  v6 = 0;
  if ( a2 )
  {
    v13 = *a2;
    if ( *a2 )
    {
      ThreadObjectCompartmentId = NdisGetThreadObjectCompartmentId(Thread);
      v15 = ndisCmValidateCompartmentChange(ThreadObjectCompartmentId, v13);
      v3 = Object;
      v4 = v15;
      if ( !v15 )
      {
        StateObject = -1073741275;
        goto LABEL_17;
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
      StateObject = -1073741811;
      goto LABEL_15;
    }
  }
  ThreadProperty = PsGetThreadProperty(Thread, 0x6D43644EuLL, 1u);
  Object = ThreadProperty;
  v3 = ThreadProperty;
  if ( ThreadProperty )
  {
    if ( a2 )
    {
      *ThreadProperty = *a2;
      ndisCmAssignCompartmentHandleToCmState((struct _NDIS_CM_STATE *)Object, v4);
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
    StateObject = ndisCmCreateStateObject((struct _NDIS_CM_STATE **)&Object);
    if ( StateObject < 0 )
    {
LABEL_14:
      v3 = Object;
      goto LABEL_15;
    }
    if ( a2 )
    {
      *(_DWORD *)Object = *a2;
      ndisCmAssignCompartmentHandleToCmState((struct _NDIS_CM_STATE *)Object, v4);
    }
    if ( a3 )
      *((_DWORD *)Object + 1) = *a3;
    v3 = Object;
LABEL_13:
    StateObject = PsSetThreadProperty(Thread, 1833133134LL, v3);
    goto LABEL_14;
  }
  StateObject = 0;
  if ( v6 )
    goto LABEL_13;
LABEL_15:
  if ( v4 )
  {
    ndisIfDereferenceCompartmentForUser(v4, a2, a3, v3);
    v3 = Object;
  }
LABEL_17:
  if ( v3 )
    ObfDereferenceObject(v3);
  return (unsigned int)StateObject;
}
