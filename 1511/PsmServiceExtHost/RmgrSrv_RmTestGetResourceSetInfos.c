/*
 * XREFs of RmgrSrv_RmTestGetResourceSetInfos @ 0x180037B70
 * Callers:
 *     <none>
 * Callees:
 *     _TlgWrite @ 0x18001CC7C (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x18001CED4 (_TlgKeywordOn.c)
 *     ?AtlComQIPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@AEBU_GUID@@@Z @ 0x180025184 (-AtlComQIPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@AEBU_GUID@@@Z.c)
 *     __security_check_cookie @ 0x18002B0C0 (__security_check_cookie.c)
 *     PsmInitializeServiceExtension2 @ 0x18002B3C0 (PsmInitializeServiceExtension2.c)
 */

__int64 __fastcall RmgrSrv_RmTestGetResourceSetInfos(
        const struct _TlgProvider_t *a1,
        unsigned int a2,
        __int64 a3,
        __int64 a4)
{
  struct IUnknown *v4; // rbx
  UINT32 cData; // edx
  const struct _TlgProvider_t *v9; // rcx
  const GUID *v10; // r8
  const GUID *v11; // r9
  const struct _TlgProvider_t *v12; // rcx
  unsigned int v13; // esi
  const struct _TlgProvider_t *v14; // rcx
  const GUID *v15; // r8
  const GUID *v16; // r9
  unsigned int v18; // [rsp+30h] [rbp-50h] BYREF
  struct IUnknown *v19; // [rsp+38h] [rbp-48h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-40h] BYREF
  unsigned int *v21; // [rsp+60h] [rbp-20h]
  int v22; // [rsp+68h] [rbp-18h]
  int v23; // [rsp+6Ch] [rbp-14h]

  v18 = 0;
  v4 = 0LL;
  v19 = 0LL;
  if ( (unsigned int)dword_180071060 > 4 && TlgKeywordOn(a1, 2uLL) )
  {
    TlgWrite(v9, &unk_180060F7D, v10, v11, cData, &pData);
    v4 = v19;
  }
  if ( v4 != g_pResourceManager )
  {
    ATL::AtlComQIPtrAssign(&v19, g_pResourceManager, &GUID_3f4db548_7bcb_452f_a32c_ae17c60b1cff);
    v4 = v19;
  }
  v13 = ((__int64 (__fastcall *)(struct IUnknown *, _QWORD, __int64, __int64))v4->lpVtbl[13].Release)(v4, a2, a3, a4);
  v18 = v13;
  if ( (unsigned int)dword_180071060 > 4 && TlgKeywordOn(v12, 2uLL) )
  {
    v23 = 0;
    v21 = &v18;
    v22 = 4;
    TlgWrite(v14, &unk_1800610D4, v15, v16, 3u, &pData);
    v13 = v18;
  }
  if ( v19 )
    ((void (__fastcall *)(struct IUnknown *))v19->lpVtbl->Release)(v19);
  return v13;
}
