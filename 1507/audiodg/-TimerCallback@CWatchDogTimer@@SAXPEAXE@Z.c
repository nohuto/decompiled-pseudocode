/*
 * XREFs of ?TimerCallback@CWatchDogTimer@@SAXPEAXE@Z @ 0x14002E430
 * Callers:
 *     <none>
 * Callees:
 *     _TlgWrite @ 0x140002780 (_TlgWrite.c)
 *     _TlgCreateWsz @ 0x14001889C (_TlgCreateWsz.c)
 *     __security_check_cookie @ 0x140018F00 (__security_check_cookie.c)
 */

void __fastcall CWatchDogTimer::TimerCallback(const WCHAR *a1)
{
  LPCGUID v1; // r8
  LPCGUID v2; // r9
  EVENT_DATA_DESCRIPTOR pData; // [rsp+30h] [rbp-48h] BYREF
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+50h] [rbp-28h] BYREF

  if ( hProvider > 5u
    && (qword_1400552A0 & 0x400000000000LL) != 0
    && (qword_1400552A8 & 0x400000000000LL) == qword_1400552A8 )
  {
    TlgCreateWsz(&pDesc, a1);
    TlgWrite((TraceLoggingHProvider)&hProvider, &unk_14004562D, v1, v2, 3u, &pData);
  }
}
