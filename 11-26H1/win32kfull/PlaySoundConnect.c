/*
 * XREFs of PlaySoundConnect @ 0x1403E3834
 * Callers:
 *     ?Connect@CUserPlaySound@@AEAAJPEAX@Z @ 0x14023526C (-Connect@CUserPlaySound@@AEAAJPEAX@Z.c)
 * Callees:
 *     StringCchPrintfW @ 0x14023C1EC (StringCchPrintfW.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 */

__int64 __fastcall PlaySoundConnect(unsigned int a1, __int64 a2, RPC_BINDING_HANDLE *a3)
{
  unsigned int v4; // ebx
  __int128 v6; // [rsp+30h] [rbp-128h] BYREF
  RPC_BINDING_HANDLE_SECURITY_V1_W Security; // [rsp+60h] [rbp-F8h] BYREF
  RPC_BINDING_HANDLE_TEMPLATE_V1_W Template; // [rsp+88h] [rbp-D0h] BYREF
  RPC_BINDING_HANDLE_OPTIONS_V1 Options; // [rsp+C0h] [rbp-98h] BYREF
  wchar_t v10[56]; // [rsp+D0h] [rbp-88h] BYREF

  v4 = 0;
  *(_QWORD *)&Template.Version = 1LL;
  *(_QWORD *)&Template.ProtocolSequence = 3LL;
  memset(&Template.NetworkAddress, 0, 40);
  LODWORD(v6) = 4;
  *(_QWORD *)((char *)&v6 + 4) = 1LL;
  HIDWORD(v6) = 2;
  Security.SecurityQos = (RPC_SECURITY_QOS *)&v6;
  if ( StringCchPrintfW(
         v10,
         0x32uLL,
         L"PlaySoundKRpc%X",
         a1,
         0,
         a3,
         v6,
         0LL,
         0LL,
         a2,
         1LL,
         1LL,
         0LL,
         0xA00000006LL,
         0LL) >= 0 )
  {
    Template.StringEndpoint = v10;
    Options.Version = 1;
    Options.Flags = 1;
    *(_QWORD *)&Options.ComTimeout = 5LL;
    v4 = RpcBindingCreateW(&Template, &Security, &Options, a3);
    if ( !v4 )
      v4 = RpcBindingBind(0LL, *a3, &unk_140359860);
    if ( v4 && *a3 )
    {
      RpcBindingFree(a3);
      *a3 = 0LL;
    }
  }
  return v4;
}
