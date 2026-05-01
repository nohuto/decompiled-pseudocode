/*
 * XREFs of RmgrSrv_RmGetMaxResidentCctApplications @ 0x180037360
 * Callers:
 *     <none>
 * Callees:
 *     _TlgWrite @ 0x18001CC7C (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x18001CED4 (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x18002B0C0 (__security_check_cookie.c)
 *     PsmInitializeServiceExtension2 @ 0x18002B3C0 (PsmInitializeServiceExtension2.c)
 */

__int64 __fastcall RmgrSrv_RmGetMaxResidentCctApplications(const struct _TlgProvider_t *a1, int *a2)
{
  UINT32 cData; // edx
  const GUID *v4; // r8
  const GUID *v5; // r9
  const struct _TlgProvider_t *v6; // rcx
  const GUID *v7; // r8
  const GUID *v8; // r9
  unsigned int v10; // [rsp+38h] [rbp-9h] BYREF
  int v11; // [rsp+3Ch] [rbp-5h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+48h] [rbp+7h] BYREF
  unsigned int *v13; // [rsp+68h] [rbp+27h]
  int v14; // [rsp+70h] [rbp+2Fh]
  int v15; // [rsp+74h] [rbp+33h]
  int *v16; // [rsp+78h] [rbp+37h]
  int v17; // [rsp+80h] [rbp+3Fh]
  int v18; // [rsp+84h] [rbp+43h]

  v10 = 0;
  if ( (unsigned int)dword_180071060 > 4 && TlgKeywordOn(a1, 2uLL) )
    TlgWrite(a1, &unk_180061069, v4, v5, cData, &pData);
  if ( a2 )
    *a2 = ((__int64 (__fastcall *)(struct IUnknown *))g_pResourceManager->lpVtbl[6].QueryInterface)(g_pResourceManager);
  else
    v10 = -2147024809;
  if ( (unsigned int)dword_180071060 > 4 && TlgKeywordOn(a1, 2uLL) )
  {
    v15 = 0;
    v18 = 0;
    v13 = &v10;
    v11 = *a2;
    v16 = &v11;
    v14 = 4;
    v17 = 4;
    TlgWrite(v6, &unk_180061214, v7, v8, 4u, &pData);
  }
  return v10;
}
