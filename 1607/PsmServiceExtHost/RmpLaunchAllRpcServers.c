/*
 * XREFs of RmpLaunchAllRpcServers @ 0x18001E998
 * Callers:
 *     PsmInitializeServiceExtension4 @ 0x18001E760 (PsmInitializeServiceExtension4.c)
 * Callees:
 *     RmpLaunchRpcServer @ 0x18001EBC8 (RmpLaunchRpcServer.c)
 *     RmpCreateSecurityDescriptorFromSddl @ 0x18001F908 (RmpCreateSecurityDescriptorFromSddl.c)
 *     __security_check_cookie @ 0x180020070 (__security_check_cookie.c)
 *     RmpShutdownRpcServer @ 0x1800285D4 (RmpShutdownRpcServer.c)
 */

__int64 RmpLaunchAllRpcServers()
{
  __int128 v0; // xmm1
  void *v1; // rbx
  __int128 v2; // xmm0
  __int128 v3; // xmm1
  __int128 v4; // xmm0
  __int128 v5; // xmm1
  __int128 v6; // xmm0
  int v7; // eax
  void *v8; // rsi
  int v9; // edi
  RPC_IF_HANDLE *v10; // r15
  unsigned int v11; // r14d
  __int64 v13; // [rsp+28h] [rbp-99h] BYREF
  void *SecurityDescriptor; // [rsp+30h] [rbp-91h] BYREF
  _OWORD SecurityDescriptor_8[2]; // [rsp+38h] [rbp-89h] BYREF
  int v16; // [rsp+58h] [rbp-69h]
  wchar_t v17; // [rsp+5Ch] [rbp-65h]
  _OWORD v18[8]; // [rsp+68h] [rbp-59h] BYREF
  __int64 v19; // [rsp+E8h] [rbp+27h]
  int v20; // [rsp+F0h] [rbp+2Fh]
  wchar_t v21; // [rsp+F4h] [rbp+33h]

  SecurityDescriptor = 0LL;
  v0 = *(_OWORD *)L"GWGX;;;WD)(A;;GRGWGX;;;RC)(A;;GA;;;BA)(A;;GA;;;OW)(A;;GR;;;AC)";
  v1 = 0LL;
  v18[0] = *(_OWORD *)L"D:(A;;GRGWGX;;;WD)(A;;GRGWGX;;;RC)(A;;GA;;;BA)(A;;GA;;;OW)(A;;GR;;;AC)";
  v13 = 0LL;
  v2 = *(_OWORD *)L"D)(A;;GRGWGX;;;RC)(A;;GA;;;BA)(A;;GA;;;OW)(A;;GR;;;AC)";
  v18[1] = v0;
  v3 = *(_OWORD *)L"GWGX;;;RC)(A;;GA;;;BA)(A;;GA;;;OW)(A;;GR;;;AC)";
  v18[2] = v2;
  v4 = *(_OWORD *)L"C)(A;;GA;;;BA)(A;;GA;;;OW)(A;;GR;;;AC)";
  v18[3] = v3;
  v5 = *(_OWORD *)L";;;BA)(A;;GA;;;OW)(A;;GR;;;AC)";
  v18[4] = v4;
  v6 = *(_OWORD *)L";;GA;;;OW)(A;;GR;;;AC)";
  v18[5] = v5;
  v18[6] = v6;
  v18[7] = *(_OWORD *)L"W)(A;;GR;;;AC)";
  v19 = *(_QWORD *)L";;;AC)";
  v20 = *(_DWORD *)L"C)";
  v21 = aDAGrgwgxWdAGrg[70];
  v7 = RmpCreateSecurityDescriptorFromSddl(v18, &SecurityDescriptor);
  v8 = SecurityDescriptor;
  v9 = v7;
  if ( v7 < 0 )
    goto LABEL_7;
  v16 = *(_DWORD *)L"Y)";
  SecurityDescriptor_8[0] = *(_OWORD *)L"D:(A;;GRGWGX;;;SY)";
  v17 = aDAGrgwgxSy[18];
  SecurityDescriptor_8[1] = *(_OWORD *)L"GWGX;;;SY)";
  v9 = RmpCreateSecurityDescriptorFromSddl(SecurityDescriptor_8, &v13);
  if ( v9 < 0 )
  {
LABEL_14:
    v1 = (void *)v13;
    goto LABEL_7;
  }
  if ( RpcServerUseProtseqW((RPC_WSTR)L"ncalrpc", 0xAu, v8) )
  {
    v9 = -1073741823;
    goto LABEL_14;
  }
  qword_18004C6F0 = 0LL;
  v1 = (void *)v13;
  qword_18004C720 = 0LL;
  qword_18004C738 = 0LL;
  v10 = (RPC_IF_HANDLE *)&RmpRpcBindings;
  RmpRpcBindings = (__int64)&unk_18003A470;
  v11 = 0;
  qword_18004C6E8 = (__int64)v8;
  qword_18004C6F8 = (__int64)&unk_18003A410;
  qword_18004C710 = (__int64)&unk_18003A3B0;
  qword_18004C728 = (__int64)&unk_18003A350;
  xmmword_18004C700 = 0LL;
  qword_18004C718 = v13;
  qword_18004C730 = (__int64)v8;
  while ( 1 )
  {
    v9 = RmpLaunchRpcServer(*v10);
    if ( v9 < 0 )
      break;
    ++v11;
    v10 += 3;
    if ( v11 >= 4 )
      goto LABEL_7;
  }
  RmpShutdownRpcServer();
LABEL_7:
  if ( v8 )
    LocalFree(v8);
  if ( v1 )
    LocalFree(v1);
  return (unsigned int)v9;
}
