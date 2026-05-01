/*
 * XREFs of RmpLaunchAllRpcServers @ 0x18001CD60
 * Callers:
 *     PsmInitializeServiceExtension4 @ 0x18001CB20 (PsmInitializeServiceExtension4.c)
 * Callees:
 *     RmpLaunchRpcServer @ 0x18001D040 (RmpLaunchRpcServer.c)
 *     RmpCreateSecurityDescriptorFromSddl @ 0x1800206CC (RmpCreateSecurityDescriptorFromSddl.c)
 *     __security_check_cookie @ 0x180020EF0 (__security_check_cookie.c)
 *     RmpShutdownRpcServer @ 0x1800293DC (RmpShutdownRpcServer.c)
 */

__int64 RmpLaunchAllRpcServers()
{
  _BYTE *v0; // rcx
  const wchar_t *v1; // rdx
  void *v2; // rbx
  __int64 v3; // rax
  __int128 v4; // xmm1
  __int128 v5; // xmm0
  __int128 v6; // xmm1
  __int128 v7; // xmm0
  __int128 v8; // xmm1
  __int128 v9; // xmm0
  __int128 v10; // xmm1
  __int64 v11; // rax
  __int128 v12; // xmm1
  __int128 v13; // xmm0
  __int128 v14; // xmm1
  __int128 v15; // xmm0
  __int128 v16; // xmm1
  int v17; // eax
  __int64 v18; // r8
  void *v19; // rsi
  int v20; // edi
  __int64 v21; // r8
  RPC_IF_HANDLE *v22; // r15
  unsigned int v23; // r14d
  __int64 v25; // [rsp+28h] [rbp-E0h] BYREF
  void *SecurityDescriptor; // [rsp+30h] [rbp-D8h] BYREF
  HLOCAL hMem; // [rsp+38h] [rbp-D0h] BYREF
  HLOCAL hMem_8[2]; // [rsp+40h] [rbp-C8h] BYREF
  __int128 v29; // [rsp+50h] [rbp-B8h]
  __int128 v30; // [rsp+60h] [rbp-A8h]
  __int64 v31; // [rsp+70h] [rbp-98h]
  int v32; // [rsp+78h] [rbp-90h]
  wchar_t v33; // [rsp+7Ch] [rbp-8Ch]
  _BYTE v34[368]; // [rsp+88h] [rbp-80h] BYREF

  SecurityDescriptor = 0LL;
  v0 = v34;
  hMem = 0LL;
  v1 = L"D:(A;;GRGWGX;;;WD)(A;;GRGWGX;;;RC)(A;;GA;;;BA)(A;;GA;;;OW)(A;;GR;;;AC)(A;;GR;;;S-1-15-3-1024-1502825166-196370834"
        "5-2616377461-2562897074-4192028372-3968301570-1997628692-1435953622)";
  v2 = 0LL;
  v25 = 0LL;
  v3 = 2LL;
  do
  {
    v4 = *((_OWORD *)v1 + 1);
    *(_OWORD *)v0 = *(_OWORD *)v1;
    v5 = *((_OWORD *)v1 + 2);
    *((_OWORD *)v0 + 1) = v4;
    v6 = *((_OWORD *)v1 + 3);
    *((_OWORD *)v0 + 2) = v5;
    v7 = *((_OWORD *)v1 + 4);
    *((_OWORD *)v0 + 3) = v6;
    v8 = *((_OWORD *)v1 + 5);
    *((_OWORD *)v0 + 4) = v7;
    v9 = *((_OWORD *)v1 + 6);
    *((_OWORD *)v0 + 5) = v8;
    v10 = *((_OWORD *)v1 + 7);
    v1 += 64;
    *((_OWORD *)v0 + 6) = v9;
    v0 += 128;
    *((_OWORD *)v0 - 1) = v10;
    --v3;
  }
  while ( v3 );
  v11 = *((_QWORD *)v1 + 12);
  v12 = *((_OWORD *)v1 + 1);
  *(_OWORD *)v0 = *(_OWORD *)v1;
  v13 = *((_OWORD *)v1 + 2);
  *((_OWORD *)v0 + 1) = v12;
  v14 = *((_OWORD *)v1 + 3);
  *((_OWORD *)v0 + 2) = v13;
  v15 = *((_OWORD *)v1 + 4);
  *((_OWORD *)v0 + 3) = v14;
  v16 = *((_OWORD *)v1 + 5);
  *((_OWORD *)v0 + 4) = v15;
  *((_OWORD *)v0 + 5) = v16;
  *((_QWORD *)v0 + 12) = v11;
  *((_DWORD *)v0 + 26) = *((_DWORD *)v1 + 26);
  v17 = RmpCreateSecurityDescriptorFromSddl(v34, &SecurityDescriptor, 128LL);
  v19 = SecurityDescriptor;
  v20 = v17;
  if ( v17 < 0 )
    goto LABEL_10;
  v32 = *(_DWORD *)L"U)";
  *(_OWORD *)hMem_8 = *(_OWORD *)L"D:(A;;GRGWGX;;;SY)(A;;GR;;;IU)";
  v33 = aDAGrgwgxSyAGrI[30];
  v29 = *(_OWORD *)L"GWGX;;;SY)(A;;GR;;;IU)";
  v30 = *(_OWORD *)L"Y)(A;;GR;;;IU)";
  v31 = *(_QWORD *)L";;;IU)";
  v20 = RmpCreateSecurityDescriptorFromSddl(hMem_8, &hMem, v18);
  if ( v20 < 0 )
    goto LABEL_10;
  LODWORD(v30) = *(_DWORD *)L"Y)";
  *(_OWORD *)hMem_8 = *(_OWORD *)L"D:(A;;GRGWGX;;;SY)";
  WORD2(v30) = aDAGrgwgxSy[18];
  v29 = *(_OWORD *)L"GWGX;;;SY)";
  v20 = RmpCreateSecurityDescriptorFromSddl(hMem_8, &v25, v21);
  if ( v20 < 0 )
  {
LABEL_19:
    v2 = (void *)v25;
    goto LABEL_10;
  }
  if ( RpcServerUseProtseqW((RPC_WSTR)L"ncalrpc", 0xAu, v19) )
  {
    v20 = -1073741823;
    goto LABEL_19;
  }
  qword_18004D6F0 = 0LL;
  v2 = (void *)v25;
  qword_18004D720 = 0LL;
  qword_18004D738 = 0LL;
  v22 = (RPC_IF_HANDLE *)&RmpRpcBindings;
  RmpRpcBindings = (__int64)&unk_18003A2D0;
  v23 = 0;
  qword_18004D6E8 = (__int64)v19;
  qword_18004D6F8 = (__int64)&unk_18003A270;
  qword_18004D710 = (__int64)&unk_18003A210;
  qword_18004D728 = (__int64)&unk_18003A1B0;
  xmmword_18004D700 = 0LL;
  qword_18004D718 = v25;
  qword_18004D730 = (__int64)v19;
  while ( 1 )
  {
    v20 = RmpLaunchRpcServer(*v22);
    if ( v20 < 0 )
      break;
    ++v23;
    v22 += 3;
    if ( v23 >= 4 )
      goto LABEL_10;
  }
  RmpShutdownRpcServer();
LABEL_10:
  if ( v19 )
    LocalFree(v19);
  if ( hMem )
    LocalFree(hMem);
  if ( v2 )
    LocalFree(v2);
  return (unsigned int)v20;
}
