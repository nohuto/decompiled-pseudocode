/*
 * XREFs of RmgrSrv_RmRegisterResource @ 0x180001550
 * Callers:
 *     <none>
 * Callees:
 *     ?RmRegisterResource@ResourceManager@ExecutionModel@@UEAAJW4RmResourceType@@K_N@Z @ 0x1800023F0 (-RmRegisterResource@ResourceManager@ExecutionModel@@UEAAJW4RmResourceType@@K_N@Z.c)
 *     _TlgWrite @ 0x18001CC7C (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x18001CED4 (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x18002B0C0 (__security_check_cookie.c)
 *     PsmInitializeServiceExtension2 @ 0x18002B3C0 (PsmInitializeServiceExtension2.c)
 */

__int64 __fastcall RmgrSrv_RmRegisterResource(
        const struct _TlgProvider_t *a1,
        unsigned int a2,
        unsigned int a3,
        const GUID *a4)
{
  const struct _TlgProvider_t *v6; // rcx
  const GUID *v7; // r8
  HRESULT (__stdcall *QueryInterface)(IUnknown *, const IID *const, void **); // r14
  unsigned int v9; // eax
  const struct _TlgProvider_t *v10; // rcx
  const GUID *v11; // r8
  const GUID *v12; // r9
  unsigned int v14; // [rsp+30h] [rbp-39h] BYREF
  unsigned int v15; // [rsp+34h] [rbp-35h] BYREF
  unsigned int v16; // [rsp+38h] [rbp-31h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-29h] BYREF
  int *v18; // [rsp+60h] [rbp-9h]
  int v19; // [rsp+68h] [rbp-1h]
  int v20; // [rsp+6Ch] [rbp+3h]
  int *v21; // [rsp+70h] [rbp+7h]
  int v22; // [rsp+78h] [rbp+Fh]
  int v23; // [rsp+7Ch] [rbp+13h]
  unsigned int *v24; // [rsp+80h] [rbp+17h]
  int v25; // [rsp+88h] [rbp+1Fh]
  int v26; // [rsp+8Ch] [rbp+23h]
  unsigned int v27; // [rsp+E8h] [rbp+7Fh] BYREF

  v27 = (unsigned int)a4;
  v14 = 0;
  if ( (unsigned int)dword_180071060 > 4 && TlgKeywordOn(a1, 2uLL) )
  {
    v20 = 0;
    v23 = 0;
    v26 = 0;
    v18 = (int *)&v15;
    v21 = (int *)&v16;
    v24 = &v27;
    v15 = a2;
    v19 = 4;
    v16 = a3;
    v22 = 4;
    v25 = 4;
    TlgWrite(v6, &unk_180060E20, v7, a4, 5u, &pData);
    a4 = (const GUID *)v27;
  }
  QueryInterface = g_pResourceManager->lpVtbl[1].QueryInterface;
  LOBYTE(a4) = (_DWORD)a4 != 0;
  if ( (char *)QueryInterface == (char *)ExecutionModel::ResourceManager::RmRegisterResource )
    v9 = ExecutionModel::ResourceManager::RmRegisterResource(g_pResourceManager, a2, a3, a4);
  else
    v9 = ((__int64 (__fastcall *)(struct IUnknown *, _QWORD, _QWORD, const GUID *))QueryInterface)(
           g_pResourceManager,
           a2,
           a3,
           a4);
  LODWORD(v10) = v9;
  v14 = v9;
  if ( (unsigned int)dword_180071060 > 4 && TlgKeywordOn((TraceLoggingHProvider)v9, 2uLL) )
  {
    v20 = 0;
    v18 = (int *)&v14;
    v19 = 4;
    TlgWrite(v10, &unk_180061399, v11, v12, 3u, &pData);
    LODWORD(v10) = v14;
  }
  return (unsigned int)v10;
}
