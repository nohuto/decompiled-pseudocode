/*
 * XREFs of RmgrSrv_RmTestGetResourceSetTypeFromPSMKey @ 0x180037CB0
 * Callers:
 *     <none>
 * Callees:
 *     _TlgCreateWsz @ 0x180019D30 (_TlgCreateWsz.c)
 *     _TlgWrite @ 0x18001CC7C (_TlgWrite.c)
 *     _TlgCreateSid @ 0x18001CD1C (_TlgCreateSid.c)
 *     _TlgKeywordOn @ 0x18001CED4 (_TlgKeywordOn.c)
 *     ?AtlComQIPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@AEBU_GUID@@@Z @ 0x180025184 (-AtlComQIPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@AEBU_GUID@@@Z.c)
 *     __security_check_cookie @ 0x18002B0C0 (__security_check_cookie.c)
 *     PsmInitializeServiceExtension2 @ 0x18002B3C0 (PsmInitializeServiceExtension2.c)
 */

__int64 __fastcall RmgrSrv_RmTestGetResourceSetTypeFromPSMKey(
        const struct _TlgProvider_t *a1,
        const WCHAR *a2,
        SID *a3,
        unsigned int a4,
        unsigned int a5,
        int a6,
        __int64 a7,
        int *a8)
{
  struct IUnknown *v8; // rbx
  int *v9; // r14
  int v13; // r10d
  TraceLoggingHProvider v14; // rcx
  LPCGUID v15; // r8
  LPCGUID v16; // r9
  unsigned int v17; // eax
  unsigned int v18; // esi
  const struct _TlgProvider_t *cData; // rcx
  const GUID *v20; // r8
  const GUID *v21; // r9
  int v23; // [rsp+40h] [rbp-99h] BYREF
  int v24; // [rsp+44h] [rbp-95h] BYREF
  struct IUnknown *v25; // [rsp+48h] [rbp-91h] BYREF
  unsigned int v26; // [rsp+50h] [rbp-89h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+60h] [rbp-79h] BYREF
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+80h] [rbp-59h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v29; // [rsp+90h] [rbp-49h] BYREF
  int *v30; // [rsp+A0h] [rbp-39h]
  int v31; // [rsp+A8h] [rbp-31h]
  int v32; // [rsp+ACh] [rbp-2Dh]
  int *v33; // [rsp+B0h] [rbp-29h]
  int v34; // [rsp+B8h] [rbp-21h]
  int v35; // [rsp+BCh] [rbp-1Dh]
  __int64 *v36; // [rsp+C0h] [rbp-19h]
  int v37; // [rsp+C8h] [rbp-11h]
  int v38; // [rsp+CCh] [rbp-Dh]

  v23 = 0;
  v8 = 0LL;
  v9 = a8;
  v25 = 0LL;
  if ( (unsigned int)dword_180071060 > 4 && TlgKeywordOn(a1, 2uLL) )
  {
    TlgCreateWsz(&pDesc, a2);
    TlgCreateSid(&v29, a3);
    v32 = 0;
    v35 = 0;
    v38 = 0;
    v30 = (int *)&v26;
    v33 = &v24;
    v36 = &a7;
    v26 = a5;
    v31 = v13;
    v24 = a6;
    v34 = v13;
    v37 = 8;
    TlgWrite(v14, &unk_18006132E, v15, v16, 7u, &pData);
    v8 = v25;
  }
  if ( !a3 )
    goto LABEL_9;
  if ( a4 < 0xC )
  {
LABEL_19:
    v18 = -2147024809;
    v23 = -2147024809;
    goto LABEL_12;
  }
  if ( a4 != RtlLengthSid(a3) || !RtlValidSid(a3) )
  {
    v8 = v25;
    goto LABEL_19;
  }
  v8 = v25;
LABEL_9:
  if ( v8 != g_pResourceManager )
  {
    ATL::AtlComQIPtrAssign(&v25, g_pResourceManager, &GUID_3f4db548_7bcb_452f_a32c_ae17c60b1cff);
    v8 = v25;
  }
  v17 = ((__int64 (__fastcall *)(struct IUnknown *, const WCHAR *, SID *, _QWORD, int, __int64, int *))v8->lpVtbl[14].QueryInterface)(
          v8,
          a2,
          a3,
          a5,
          a6,
          a7,
          v9);
  v8 = v25;
  v18 = v17;
  v23 = v17;
LABEL_12:
  if ( (unsigned int)dword_180071060 > 4 && TlgKeywordOn((TraceLoggingHProvider)4, 2uLL) )
  {
    pDesc.Reserved = 0;
    v29.Reserved = 0;
    pDesc.Ptr = (ULONGLONG)&v23;
    v24 = *v9;
    v29.Ptr = (ULONGLONG)&v24;
    pDesc.Size = (unsigned int)cData;
    v29.Size = (unsigned int)cData;
    TlgWrite(cData, &unk_180061014, v20, v21, (UINT32)cData, &pData);
    v18 = v23;
    v8 = v25;
  }
  if ( v8 )
    ((void (__fastcall *)(struct IUnknown *))v8->lpVtbl->Release)(v8);
  return v18;
}
