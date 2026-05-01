/*
 * XREFs of RmgrSrv_RmRegisterResource @ 0x18001A640
 * Callers:
 *     <none>
 * Callees:
 *     ?RmRegisterResource@ResourceManager@ExecutionModel@@UEAAJW4RmResourceType@@K_N@Z @ 0x18000EA70 (-RmRegisterResource@ResourceManager@ExecutionModel@@UEAAJW4RmResourceType@@K_N@Z.c)
 *     _TlgKeywordOn @ 0x180015FE0 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x180016EE0 (_TlgWrite.c)
 *     __security_check_cookie @ 0x180020070 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180020A60 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall RmgrSrv_RmRegisterResource(
        const struct _TlgProvider_t *a1,
        unsigned int a2,
        unsigned int a3,
        const GUID *a4)
{
  const struct _TlgProvider_t *v6; // rcx
  const GUID *v7; // r8
  __int64 (__fastcall *v8)(__int64, unsigned int, unsigned int, char); // rax
  int v9; // eax
  const struct _TlgProvider_t *v10; // rcx
  const GUID *v11; // r8
  const GUID *v12; // r9
  int v14; // [rsp+30h] [rbp-29h] BYREF
  unsigned int v15; // [rsp+34h] [rbp-25h] BYREF
  int v16; // [rsp+38h] [rbp-21h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-19h] BYREF
  unsigned int *v18; // [rsp+60h] [rbp+7h]
  __int64 v19; // [rsp+68h] [rbp+Fh]
  int *v20; // [rsp+70h] [rbp+17h]
  __int64 v21; // [rsp+78h] [rbp+1Fh]
  unsigned int *v22; // [rsp+80h] [rbp+27h]
  __int64 v23; // [rsp+88h] [rbp+2Fh]
  unsigned int v24; // [rsp+D8h] [rbp+7Fh] BYREF

  v24 = (unsigned int)a4;
  if ( (unsigned int)dword_18004C030 > 4 && TlgKeywordOn(a1, 2uLL) )
  {
    v15 = a2;
    v18 = &v15;
    v20 = &v16;
    v22 = &v24;
    v19 = 4LL;
    v16 = (int)v7;
    v21 = 4LL;
    v23 = 4LL;
    TlgWrite(v6, &unk_18003EC32, v7, a4, 5u, &pData);
    a4 = (const GUID *)v24;
  }
  LOBYTE(a4) = (_DWORD)a4 != 0;
  v8 = *(__int64 (__fastcall **)(__int64, unsigned int, unsigned int, char))(*(_QWORD *)g_pResourceManager + 24LL);
  if ( v8 == ExecutionModel::ResourceManager::RmRegisterResource )
    v9 = ExecutionModel::ResourceManager::RmRegisterResource((__int64)g_pResourceManager, a2, a3, (char)a4);
  else
    v9 = v8((__int64)g_pResourceManager, a2, a3, (char)a4);
  v10 = (const struct _TlgProvider_t *)(unsigned int)v9;
  if ( v9 >= 0 )
    v10 = 0LL;
  v14 = (int)v10;
  if ( (unsigned int)dword_18004C030 > 4 && TlgKeywordOn(v10, 2uLL) )
  {
    v19 = 4LL;
    v18 = (unsigned int *)&v14;
    TlgWrite(v10, &unk_18003EA87, v11, v12, 3u, &pData);
    LODWORD(v10) = v14;
  }
  return (unsigned int)v10;
}
