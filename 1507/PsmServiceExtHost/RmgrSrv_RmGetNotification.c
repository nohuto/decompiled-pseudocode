/*
 * XREFs of RmgrSrv_RmGetNotification @ 0x180030300
 * Callers:
 *     <none>
 * Callees:
 *     _TlgWrite @ 0x180005FCC (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x1800073AC (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x180024320 (__security_check_cookie.c)
 *     PsmInitializeServiceExtension2 @ 0x180024620 (PsmInitializeServiceExtension2.c)
 */

__int64 __fastcall RmgrSrv_RmGetNotification(const struct _TlgProvider_t *a1, _DWORD *a2)
{
  const struct _TlgProvider_t *v4; // rcx
  const GUID *v5; // r8
  const GUID *v6; // r9
  unsigned int v7; // eax
  const struct _TlgProvider_t *v8; // rcx
  const GUID *v9; // r8
  const GUID *v10; // r9
  unsigned int v12; // [rsp+30h] [rbp-19h] BYREF
  const struct _TlgProvider_t *v13; // [rsp+38h] [rbp-11h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-9h] BYREF
  const struct _TlgProvider_t **v15; // [rsp+60h] [rbp+17h]
  int v16; // [rsp+68h] [rbp+1Fh]
  int v17; // [rsp+6Ch] [rbp+23h]
  const struct _TlgProvider_t **v18; // [rsp+70h] [rbp+27h]
  int v19; // [rsp+78h] [rbp+2Fh]
  int v20; // [rsp+7Ch] [rbp+33h]

  v12 = 0;
  if ( (unsigned int)dword_1800690A0 > 4 && TlgKeywordOn(a1, 2uLL) )
  {
    v17 = 0;
    v15 = &v13;
    v13 = v4;
    v16 = 8;
    TlgWrite(v4, &unk_180059623, v5, v6, 3u, &pData);
  }
  v7 = ((__int64 (__fastcall *)(struct IUnknown *, const struct _TlgProvider_t *, _DWORD *))g_pResourceManager->lpVtbl[7].AddRef)(
         g_pResourceManager,
         a1,
         a2);
  LODWORD(v8) = v7;
  v12 = v7;
  if ( (unsigned int)dword_1800690A0 > 4 && TlgKeywordOn((TraceLoggingHProvider)v7, 2uLL) )
  {
    v17 = 0;
    v20 = 0;
    v15 = (const struct _TlgProvider_t **)&v12;
    LODWORD(v13) = *a2;
    v18 = &v13;
    v16 = 4;
    v19 = 4;
    TlgWrite(v8, &unk_180059DEC, v9, v10, 4u, &pData);
    LODWORD(v8) = v12;
  }
  return (unsigned int)v8;
}
