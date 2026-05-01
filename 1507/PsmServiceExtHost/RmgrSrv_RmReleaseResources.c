/*
 * XREFs of RmgrSrv_RmReleaseResources @ 0x180030440
 * Callers:
 *     <none>
 * Callees:
 *     _TlgWrite @ 0x180005FCC (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x1800073AC (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x180024320 (__security_check_cookie.c)
 *     PsmInitializeServiceExtension2 @ 0x180024620 (PsmInitializeServiceExtension2.c)
 */

__int64 __fastcall RmgrSrv_RmReleaseResources(const struct _TlgProvider_t *a1)
{
  const struct _TlgProvider_t *v2; // rcx
  const GUID *v3; // r8
  const GUID *v4; // r9
  __int64 v5; // rax
  __int64 v6; // rcx
  unsigned int v7; // eax
  const GUID *v8; // r8
  const GUID *v9; // r9
  int v11; // [rsp+30h] [rbp-50h] BYREF
  __int64 v12; // [rsp+38h] [rbp-48h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-40h] BYREF
  int *v14; // [rsp+60h] [rbp-20h]
  int v15; // [rsp+68h] [rbp-18h]
  int v16; // [rsp+6Ch] [rbp-14h]

  v11 = 0;
  if ( (unsigned int)dword_1800690A0 > 4 && TlgKeywordOn(a1, 2uLL) )
  {
    v5 = *(_QWORD *)v2;
    v16 = 0;
    v12 = v5;
    v14 = (int *)&v12;
    v15 = 8;
    TlgWrite(v2, &unk_180059B1E, v3, v4, 3u, &pData);
  }
  if ( a1 )
  {
    v7 = ((__int64 (__fastcall *)(struct IUnknown *, _QWORD))g_pResourceManager->lpVtbl[7].Release)(
           g_pResourceManager,
           *(_QWORD *)a1);
    v6 = v7;
    v11 = v7;
  }
  else
  {
    v6 = 2147942414LL;
    v11 = -2147024882;
  }
  if ( (unsigned int)dword_1800690A0 > 4 && TlgKeywordOn((TraceLoggingHProvider)v6, 2uLL) )
  {
    v16 = 0;
    v14 = &v11;
    v15 = 4;
    TlgWrite((TraceLoggingHProvider)v6, &unk_1800598CA, v8, v9, 3u, &pData);
    LODWORD(v6) = v11;
  }
  if ( a1 )
    *(_QWORD *)a1 = 0LL;
  return (unsigned int)v6;
}
