/*
 * XREFs of RmgrSrv_RmTestGetResourceSetTypeFromPid @ 0x180030D40
 * Callers:
 *     <none>
 * Callees:
 *     _TlgWrite @ 0x180005FCC (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x1800073AC (_TlgKeywordOn.c)
 *     ?AtlComQIPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@AEBU_GUID@@@Z @ 0x180020988 (-AtlComQIPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@AEBU_GUID@@@Z.c)
 *     __security_check_cookie @ 0x180024320 (__security_check_cookie.c)
 *     PsmInitializeServiceExtension2 @ 0x180024620 (PsmInitializeServiceExtension2.c)
 */

__int64 __fastcall RmgrSrv_RmTestGetResourceSetTypeFromPid(const struct _TlgProvider_t *a1, unsigned int a2, int *a3)
{
  struct IUnknown *v3; // rbx
  const struct _TlgProvider_t *v6; // rcx
  const GUID *v7; // r8
  const GUID *v8; // r9
  const struct _TlgProvider_t *v9; // rcx
  unsigned int v10; // esi
  const struct _TlgProvider_t *v11; // rcx
  const GUID *v12; // r8
  const GUID *v13; // r9
  unsigned int v15; // [rsp+30h] [rbp-19h] BYREF
  unsigned int v16; // [rsp+34h] [rbp-15h] BYREF
  struct IUnknown *v17; // [rsp+38h] [rbp-11h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-9h] BYREF
  unsigned int *v19; // [rsp+60h] [rbp+17h]
  int v20; // [rsp+68h] [rbp+1Fh]
  int v21; // [rsp+6Ch] [rbp+23h]
  int *v22; // [rsp+70h] [rbp+27h]
  int v23; // [rsp+78h] [rbp+2Fh]
  int v24; // [rsp+7Ch] [rbp+33h]

  v16 = 0;
  v3 = 0LL;
  v17 = 0LL;
  if ( (unsigned int)dword_1800690A0 > 4 && TlgKeywordOn(a1, 2uLL) )
  {
    v21 = 0;
    v19 = &v15;
    v15 = a2;
    v20 = 4;
    TlgWrite(v6, &unk_180059BF7, v7, v8, 3u, &pData);
    v3 = v17;
  }
  if ( v3 != g_pResourceManager )
  {
    ATL::AtlComQIPtrAssign(&v17, g_pResourceManager, &GUID_3f4db548_7bcb_452f_a32c_ae17c60b1cff);
    v3 = v17;
  }
  v10 = ((__int64 (__fastcall *)(struct IUnknown *, _QWORD, int *))v3->lpVtbl[14].AddRef)(v3, a2, a3);
  v16 = v10;
  if ( (unsigned int)dword_1800690A0 > 4 && TlgKeywordOn(v9, 2uLL) )
  {
    v21 = 0;
    v24 = 0;
    v19 = &v16;
    v15 = *a3;
    v22 = (int *)&v15;
    v20 = 4;
    v23 = 4;
    TlgWrite(v11, &unk_180059D2D, v12, v13, 4u, &pData);
    v10 = v16;
  }
  if ( v17 )
    ((void (__fastcall *)(struct IUnknown *))v17->lpVtbl->Release)(v17);
  return v10;
}
