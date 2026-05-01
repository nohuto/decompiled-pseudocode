/*
 * XREFs of RmConnectToResourceManager @ 0x1800098F0
 * Callers:
 *     <none>
 * Callees:
 *     RmpBindToRmRpcServer @ 0x180001CF0 (RmpBindToRmRpcServer.c)
 *     RmpClientConnectToResourceManager @ 0x180009A28 (RmpClientConnectToResourceManager.c)
 */

__int64 __fastcall RmConnectToResourceManager(__int64 a1)
{
  unsigned int v2; // ebx
  RPC_BINDING_HANDLE Binding; // [rsp+38h] [rbp+10h] BYREF

  if ( (int)RmpBindToRmRpcServer(&unk_18000F850, &Binding) >= 0 )
  {
    v2 = RmpClientConnectToResourceManager(Binding, a1);
    RpcBindingFree(&Binding);
  }
  else
  {
    return (unsigned int)-1073741823;
  }
  return v2;
}
