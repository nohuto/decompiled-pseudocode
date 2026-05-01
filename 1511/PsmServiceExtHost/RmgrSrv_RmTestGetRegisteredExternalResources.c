/*
 * XREFs of RmgrSrv_RmTestGetRegisteredExternalResources @ 0x180037A30
 * Callers:
 *     <none>
 * Callees:
 *     _TlgWrite @ 0x18001CC7C (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x18001CED4 (_TlgKeywordOn.c)
 *     ?AtlComQIPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@AEBU_GUID@@@Z @ 0x180025184 (-AtlComQIPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@AEBU_GUID@@@Z.c)
 *     __security_check_cookie @ 0x18002B0C0 (__security_check_cookie.c)
 *     PsmInitializeServiceExtension2 @ 0x18002B3C0 (PsmInitializeServiceExtension2.c)
 */

__int64 __fastcall RmgrSrv_RmTestGetRegisteredExternalResources(const struct _TlgProvider_t *a1, __int64 a2)
{
  struct IUnknown *v2; // rbx
  UINT32 cData; // edx
  const struct _TlgProvider_t *v5; // rcx
  const GUID *v6; // r8
  const GUID *v7; // r9
  const struct _TlgProvider_t *v8; // rcx
  unsigned int v9; // esi
  const struct _TlgProvider_t *v10; // rcx
  const GUID *v11; // r8
  const GUID *v12; // r9
  unsigned int v14; // [rsp+30h] [rbp-50h] BYREF
  struct IUnknown *v15; // [rsp+38h] [rbp-48h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-40h] BYREF
  unsigned int *v17; // [rsp+60h] [rbp-20h]
  int v18; // [rsp+68h] [rbp-18h]
  int v19; // [rsp+6Ch] [rbp-14h]

  v14 = 0;
  v2 = 0LL;
  v15 = 0LL;
  if ( (unsigned int)dword_180071060 > 4 && TlgKeywordOn(a1, 2uLL) )
  {
    TlgWrite(v5, &unk_180060F41, v6, v7, cData, &pData);
    v2 = v15;
  }
  if ( v2 != g_pResourceManager )
  {
    ATL::AtlComQIPtrAssign(&v15, g_pResourceManager, &GUID_3f4db548_7bcb_452f_a32c_ae17c60b1cff);
    v2 = v15;
  }
  v9 = ((__int64 (__fastcall *)(struct IUnknown *, __int64))v2->lpVtbl[13].QueryInterface)(v2, a2);
  v14 = v9;
  if ( (unsigned int)dword_180071060 > 4 && TlgKeywordOn(v8, 2uLL) )
  {
    v19 = 0;
    v17 = &v14;
    v18 = 4;
    TlgWrite(v10, &unk_18006172E, v11, v12, 3u, &pData);
    v9 = v14;
  }
  if ( v15 )
    ((void (__fastcall *)(struct IUnknown *))v15->lpVtbl->Release)(v15);
  return v9;
}
