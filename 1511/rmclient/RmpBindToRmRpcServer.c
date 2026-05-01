/*
 * XREFs of RmpBindToRmRpcServer @ 0x1800070C0
 * Callers:
 *     CreateResourceManagerProxy @ 0x180001474 (CreateResourceManagerProxy.c)
 *     ?CreateModernResourceManagerProxy@@YAJPEAPEAUIModernResourceManagerProxy@@@Z @ 0x1800015F0 (-CreateModernResourceManagerProxy@@YAJPEAPEAUIModernResourceManagerProxy@@@Z.c)
 *     ?Init@ResourceManagerClientProxy@@IEAAJPEBGHPEAUIRMExecServicesProvider@ExecutionModel@@@Z @ 0x180007CB8 (-Init@ResourceManagerClientProxy@@IEAAJPEBGHPEAUIRMExecServicesProvider@ExecutionModel@@@Z.c)
 *     RmConnectToResourceManager @ 0x18000E980 (RmConnectToResourceManager.c)
 * Callees:
 *     __security_check_cookie @ 0x180008E40 (__security_check_cookie.c)
 *     memset_0 @ 0x1800095EC (memset_0.c)
 */

__int64 __fastcall RmpBindToRmRpcServer(RPC_IF_HANDLE IfSpec, RPC_BINDING_HANDLE *a2)
{
  RPC_STATUS v4; // eax
  unsigned int v5; // ebx
  bool v6; // cc
  RPC_BINDING_HANDLE Binding; // [rsp+20h] [rbp-79h] BYREF
  RPC_BINDING_HANDLE_SECURITY_V1_W Security; // [rsp+28h] [rbp-71h] BYREF
  _DWORD v10[14]; // [rsp+50h] [rbp-49h] BYREF
  RPC_BINDING_HANDLE_OPTIONS_V1 Options; // [rsp+88h] [rbp-11h] BYREF
  RPC_BINDING_HANDLE_TEMPLATE_V1_W Template; // [rsp+98h] [rbp-1h] BYREF

  Binding = 0LL;
  memset_0(&Template, 0, sizeof(Template));
  *(_QWORD *)&Options.Version = 0LL;
  *(_QWORD *)&Options.ComTimeout = 0LL;
  memset_0(v10, 0, sizeof(v10));
  memset_0(&Security, 0, sizeof(Security));
  v10[1] = 0;
  Template.Version = 1;
  Options.ComTimeout = 5;
  v10[0] = 5;
  Template.ProtocolSequence = 3;
  Options.Version = 1;
  Options.Flags = 1;
  v10[2] = 1;
  v10[3] = 3;
  Security.Version = 1;
  Security.SecurityQos = (RPC_SECURITY_QOS *)v10;
  Security.AuthnLevel = 6;
  Security.AuthnSvc = 10;
  v4 = RpcBindingCreateW(&Template, &Security, &Options, &Binding);
  v5 = v4;
  v6 = v4 <= 0;
  if ( v4 || (v4 = RpcBindingBind(0LL, Binding, IfSpec), v5 = v4, v6 = v4 <= 0, v4) )
  {
    if ( !v6 )
      v5 = (unsigned __int16)v4 | 0x80070000;
  }
  else
  {
    *a2 = Binding;
  }
  if ( v5 && Binding )
    RpcBindingFree(&Binding);
  return v5;
}
