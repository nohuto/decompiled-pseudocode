/*
 * XREFs of RmpBindToRmRpcServer @ 0x180001CF0
 * Callers:
 *     CreateResourceManagerProxy @ 0x180001A58 (CreateResourceManagerProxy.c)
 *     ?Init@CMemoryManager@System@Windows@@CAJXZ @ 0x180001C30 (-Init@CMemoryManager@System@Windows@@CAJXZ.c)
 *     ?GetAppMemoryReport@CMemoryManager@System@Windows@@UEAAJPEAPEAUIAppMemoryReport@23@@Z @ 0x1800036A0 (-GetAppMemoryReport@CMemoryManager@System@Windows@@UEAAJPEAPEAUIAppMemoryReport@23@@Z.c)
 *     ?Init@ResourceManagerClientProxy@@IEAAJPEBGH@Z @ 0x180004EB8 (-Init@ResourceManagerClientProxy@@IEAAJPEBGH@Z.c)
 *     RmRegisterForGameMode @ 0x180008400 (RmRegisterForGameMode.c)
 *     RmUnregisterForGameMode @ 0x1800084B0 (RmUnregisterForGameMode.c)
 *     RmConnectToResourceManager @ 0x1800098F0 (RmConnectToResourceManager.c)
 * Callees:
 *     __security_check_cookie @ 0x180006040 (__security_check_cookie.c)
 *     memset_0 @ 0x1800066EC (memset_0.c)
 */

__int64 __fastcall RmpBindToRmRpcServer(RPC_IF_HANDLE IfSpec, RPC_BINDING_HANDLE *a2)
{
  RPC_STATUS v4; // eax
  unsigned int v5; // ebx
  __int64 result; // rax
  RPC_BINDING_HANDLE Binding; // [rsp+20h] [rbp-79h] BYREF
  RPC_BINDING_HANDLE_SECURITY_V1_W Security; // [rsp+28h] [rbp-71h] BYREF
  __int64 v9; // [rsp+50h] [rbp-49h] BYREF
  int v10; // [rsp+58h] [rbp-41h]
  int v11; // [rsp+5Ch] [rbp-3Dh]
  RPC_BINDING_HANDLE_OPTIONS_V1 Options; // [rsp+88h] [rbp-11h] BYREF
  RPC_BINDING_HANDLE_TEMPLATE_V1_W Template; // [rsp+98h] [rbp-1h] BYREF

  Binding = 0LL;
  memset_0(&Template, 0, sizeof(Template));
  *(_QWORD *)&Options.Version = 0LL;
  *(_QWORD *)&Options.ComTimeout = 0LL;
  memset_0(&v9, 0, 0x38uLL);
  memset_0(&Security, 0, sizeof(Security));
  Template.Version = 1;
  Security.SecurityQos = (RPC_SECURITY_QOS *)&v9;
  Template.ProtocolSequence = 3;
  Options.Version = 1;
  Options.Flags = 1;
  Options.ComTimeout = 5;
  v9 = 5LL;
  v10 = 1;
  v11 = 3;
  Security.Version = 1;
  Security.AuthnLevel = 6;
  Security.AuthnSvc = 10;
  v4 = RpcBindingCreateW(&Template, &Security, &Options, &Binding);
  v5 = v4;
  if ( v4 )
  {
    if ( v4 <= 0 )
      goto LABEL_8;
    goto LABEL_7;
  }
  v4 = RpcBindingBind(0LL, Binding, IfSpec);
  v5 = v4;
  if ( !v4 )
  {
    result = 0LL;
    *a2 = Binding;
    return result;
  }
  if ( v4 > 0 )
LABEL_7:
    v5 = (unsigned __int16)v4 | 0x80070000;
LABEL_8:
  if ( v5 )
  {
    if ( Binding )
      RpcBindingFree(&Binding);
  }
  return v5;
}
