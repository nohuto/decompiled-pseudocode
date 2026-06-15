/*
 * XREFs of ?ReportHang@CWatchdogTimer@@AEAAXXZ @ 0x14002B130
 * Callers:
 *     ?TimerCallback@CWatchdogTimer@@SAXPEAXE@Z @ 0x14002B2D0 (-TimerCallback@CWatchdogTimer@@SAXPEAXE@Z.c)
 * Callees:
 *     _TlgWrite @ 0x140016088 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x140016124 (_TlgKeywordOn.c)
 *     _TlgCreateWsz @ 0x140016B4C (_TlgCreateWsz.c)
 *     __security_check_cookie @ 0x140018370 (__security_check_cookie.c)
 */

void __fastcall CWatchdogTimer::ReportHang(CWatchdogTimer *this)
{
  const WCHAR *v2; // rdx
  LPCGUID v3; // r8
  LPCGUID v4; // r9
  TraceLoggingHProvider v5; // r10
  GUID pguid; // [rsp+30h] [rbp-19h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-9h] BYREF
  GUID *p_pguid; // [rsp+60h] [rbp+17h]
  int v9; // [rsp+68h] [rbp+1Fh]
  int v10; // [rsp+6Ch] [rbp+23h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+70h] [rbp+27h] BYREF
  char *v12; // [rsp+80h] [rbp+37h]
  int v13; // [rsp+88h] [rbp+3Fh]
  int v14; // [rsp+8Ch] [rbp+43h]

  pguid = GUID_00000000_0000_0000_0000_000000000000;
  CoCreateGuid(&pguid);
  if ( **((_DWORD **)this + 1) > 2u && TlgKeywordOn(*((TraceLoggingHProvider *)this + 1), 0x400000000002uLL) )
  {
    v2 = (const WCHAR *)*((_QWORD *)this + 3);
    v10 = 0;
    p_pguid = &pguid;
    v9 = 16;
    TlgCreateWsz(&pDesc, v2);
    v14 = 0;
    v12 = (char *)this + 16;
    v13 = 4;
    TlgWrite(v5, &unk_140045C9E, v3, v4, 5u, &pData);
  }
  RtlPublishWnfStateData(WNF_AUDC_HEALTH_PROBLEM, 0LL, &pguid, 16LL, 0LL);
}
