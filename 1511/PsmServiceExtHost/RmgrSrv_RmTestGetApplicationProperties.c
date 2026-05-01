/*
 * XREFs of RmgrSrv_RmTestGetApplicationProperties @ 0x180037730
 * Callers:
 *     <none>
 * Callees:
 *     TraceLoggingProviderEnabled @ 0x180004330 (TraceLoggingProviderEnabled.c)
 *     _TlgCreateWsz @ 0x180019D30 (_TlgCreateWsz.c)
 *     _TlgWrite @ 0x18001CC7C (_TlgWrite.c)
 *     _TlgCreateSid @ 0x18001CD1C (_TlgCreateSid.c)
 *     _TlgKeywordOn @ 0x18001CED4 (_TlgKeywordOn.c)
 *     ?AtlComQIPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@AEBU_GUID@@@Z @ 0x180025184 (-AtlComQIPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@AEBU_GUID@@@Z.c)
 *     __security_check_cookie @ 0x18002B0C0 (__security_check_cookie.c)
 *     PsmInitializeServiceExtension2 @ 0x18002B3C0 (PsmInitializeServiceExtension2.c)
 */

__int64 __fastcall RmgrSrv_RmTestGetApplicationProperties(
        const struct _TlgProvider_t *a1,
        __int64 a2,
        SID *a3,
        unsigned int a4,
        unsigned int hProvider,
        int a6,
        __int64 a7,
        unsigned int *a8,
        _QWORD *a9,
        _QWORD *a10,
        _QWORD *a11)
{
  struct IUnknown *v11; // rbx
  unsigned int *v12; // r14
  _QWORD *v14; // r15
  _QWORD *v16; // r12
  _QWORD *v17; // r13
  const WCHAR *v18; // r9
  unsigned int v19; // r10d
  LPCGUID v20; // r8
  LPCGUID v21; // r9
  unsigned int v22; // eax
  unsigned int v23; // esi
  ULONGLONG v24; // r11
  const struct _TlgProvider_t *v25; // rcx
  const struct _TlgProvider_t *v26; // rcx
  const GUID *v27; // r8
  const GUID *v28; // r9
  __int64 v29; // r10
  int v31; // [rsp+50h] [rbp-B0h] BYREF
  struct IUnknown *v32; // [rsp+58h] [rbp-A8h] BYREF
  int v33; // [rsp+60h] [rbp-A0h] BYREF
  unsigned int v34; // [rsp+64h] [rbp-9Ch] BYREF
  __int64 v35; // [rsp+68h] [rbp-98h] BYREF
  __int64 v36; // [rsp+70h] [rbp-90h] BYREF
  __int64 v37; // [rsp+78h] [rbp-88h] BYREF
  __int64 v38; // [rsp+80h] [rbp-80h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+90h] [rbp-70h] BYREF
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+B0h] [rbp-50h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v41; // [rsp+C0h] [rbp-40h] BYREF
  __int64 *v42; // [rsp+D0h] [rbp-30h]
  __int64 v43; // [rsp+D8h] [rbp-28h]
  __int64 *v44; // [rsp+E0h] [rbp-20h]
  __int64 v45; // [rsp+E8h] [rbp-18h]
  __int64 *v46; // [rsp+F0h] [rbp-10h]
  __int64 v47; // [rsp+F8h] [rbp-8h]

  v31 = 0;
  v11 = 0LL;
  v12 = a8;
  v14 = a9;
  v16 = a10;
  v17 = a11;
  v38 = a2;
  v32 = 0LL;
  if ( (unsigned int)dword_180071060 > 4 && TlgKeywordOn(a1, 2uLL) )
  {
    TlgCreateWsz(&pDesc, v18);
    TlgCreateSid(&v41, a3);
    v42 = (__int64 *)&v34;
    v33 = a6;
    v44 = (__int64 *)&v33;
    v46 = &a7;
    v34 = hProvider;
    v43 = v19;
    v45 = v19;
    v47 = 8LL;
    TlgWrite((TraceLoggingHProvider)hProvider, &unk_18006110F, v20, v21, 7u, &pData);
    v11 = v32;
  }
  if ( !a3 )
    goto LABEL_9;
  if ( a4 < 0xC )
  {
LABEL_16:
    v23 = -2147024809;
    v31 = -2147024809;
    goto LABEL_12;
  }
  if ( a4 != RtlLengthSid(a3) || !RtlValidSid(a3) )
  {
    v11 = v32;
    goto LABEL_16;
  }
  v11 = v32;
LABEL_9:
  if ( v11 != g_pResourceManager )
  {
    ATL::AtlComQIPtrAssign(&v32, g_pResourceManager, &GUID_3f4db548_7bcb_452f_a32c_ae17c60b1cff);
    v11 = v32;
  }
  v22 = ((__int64 (__fastcall *)(struct IUnknown *, __int64, SID *, _QWORD, int, __int64, unsigned int *, _QWORD *, _QWORD *, _QWORD *, int))v11->lpVtbl[14].Release)(
          v11,
          v38,
          a3,
          hProvider,
          a6,
          a7,
          v12,
          v14,
          v16,
          v17,
          v31);
  v11 = v32;
  v23 = v22;
  v31 = v22;
LABEL_12:
  if ( TraceLoggingProviderEnabled(a1, a2, 2uLL) )
  {
    v25 = v12 ? (const struct _TlgProvider_t *)*v12 : (const struct _TlgProvider_t *)0xFFFFFFFFLL;
    v35 = v14 ? *v14 : -1LL;
    v37 = v16 ? *v16 : -1LL;
    v36 = v17 ? *v17 : -1LL;
    if ( (unsigned int)dword_180071060 > 4 && TlgKeywordOn(v25, v24) )
    {
      *(_QWORD *)&pDesc.Size = v29;
      pDesc.Ptr = (ULONGLONG)&v31;
      v41.Ptr = (ULONGLONG)&v33;
      v42 = &v35;
      v44 = &v37;
      v46 = &v36;
      v33 = (int)v26;
      *(_QWORD *)&v41.Size = v29;
      v43 = 8LL;
      v45 = 8LL;
      v47 = 8LL;
      TlgWrite(v26, &unk_18006140A, v27, v28, 7u, &pData);
      v23 = v31;
      v11 = v32;
    }
  }
  if ( v11 )
    ((void (__fastcall *)(struct IUnknown *))v11->lpVtbl->Release)(v11);
  return v23;
}
