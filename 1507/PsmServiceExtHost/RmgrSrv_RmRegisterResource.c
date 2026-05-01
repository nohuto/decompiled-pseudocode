/*
 * XREFs of RmgrSrv_RmRegisterResource @ 0x180001F40
 * Callers:
 *     <none>
 * Callees:
 *     _TlgWrite @ 0x180005FCC (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x1800073AC (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x180024320 (__security_check_cookie.c)
 *     PsmInitializeServiceExtension2 @ 0x180024620 (PsmInitializeServiceExtension2.c)
 */

__int64 __fastcall RmgrSrv_RmRegisterResource(
        const struct _TlgProvider_t *a1,
        unsigned int a2,
        unsigned int a3,
        const GUID *a4)
{
  const struct _TlgProvider_t *v6; // rcx
  const GUID *v7; // r8
  unsigned int v8; // eax
  const struct _TlgProvider_t *v9; // rcx
  const GUID *v10; // r8
  const GUID *v11; // r9
  unsigned int v13; // [rsp+30h] [rbp-39h] BYREF
  unsigned int v14; // [rsp+34h] [rbp-35h] BYREF
  unsigned int v15; // [rsp+38h] [rbp-31h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-29h] BYREF
  int *v17; // [rsp+60h] [rbp-9h]
  int v18; // [rsp+68h] [rbp-1h]
  int v19; // [rsp+6Ch] [rbp+3h]
  int *v20; // [rsp+70h] [rbp+7h]
  int v21; // [rsp+78h] [rbp+Fh]
  int v22; // [rsp+7Ch] [rbp+13h]
  unsigned int *v23; // [rsp+80h] [rbp+17h]
  int v24; // [rsp+88h] [rbp+1Fh]
  int v25; // [rsp+8Ch] [rbp+23h]
  unsigned int v26; // [rsp+E8h] [rbp+7Fh] BYREF

  v26 = (unsigned int)a4;
  v13 = 0;
  if ( (unsigned int)dword_1800690A0 > 4 && TlgKeywordOn(a1, 2uLL) )
  {
    v19 = 0;
    v22 = 0;
    v25 = 0;
    v17 = (int *)&v14;
    v20 = (int *)&v15;
    v23 = &v26;
    v14 = a2;
    v18 = 4;
    v15 = a3;
    v21 = 4;
    v24 = 4;
    TlgWrite(v6, &unk_1800595C8, v7, a4, 5u, &pData);
    a4 = (const GUID *)v26;
  }
  LOBYTE(a4) = (_DWORD)a4 != 0;
  v8 = ((__int64 (__fastcall *)(struct IUnknown *, _QWORD, _QWORD, const GUID *))g_pResourceManager->lpVtbl[1].QueryInterface)(
         g_pResourceManager,
         a2,
         a3,
         a4);
  LODWORD(v9) = v8;
  v13 = v8;
  if ( (unsigned int)dword_1800690A0 > 4 && TlgKeywordOn((TraceLoggingHProvider)v8, 2uLL) )
  {
    v19 = 0;
    v17 = (int *)&v13;
    v18 = 4;
    TlgWrite(v9, &unk_180059BC3, v10, v11, 3u, &pData);
    LODWORD(v9) = v13;
  }
  return (unsigned int)v9;
}
