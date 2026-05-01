/*
 * XREFs of RmConnectToResourceManager @ 0x18000DF50
 * Callers:
 *     <none>
 * Callees:
 *     RmpBindToRmRpcServer @ 0x1800068A0 (RmpBindToRmRpcServer.c)
 *     RmpClientConnectToResourceManager @ 0x18000E2B8 (RmpClientConnectToResourceManager.c)
 */

__int64 __fastcall RmConnectToResourceManager(__int64 a1, __int64 a2)
{
  unsigned int v4; // ebx
  RPC_BINDING_HANDLE Binding; // [rsp+40h] [rbp+18h] BYREF

  if ( (int)RmpBindToRmRpcServer(&unk_180018B50, &Binding) >= 0 )
  {
    v4 = RmpClientConnectToResourceManager(a1, Binding, a2);
    RpcBindingFree(&Binding);
  }
  else
  {
    return (unsigned int)-1073741823;
  }
  return v4;
}
