/*
 * XREFs of ?TimerCallback@CWatchDogTimer@@SAXPEAXE@Z @ 0x14002C710
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x140018E40 (__security_check_cookie.c)
 *     _TlgWrite @ 0x140027EFC (_TlgWrite.c)
 *     _TlgCreateWsz @ 0x14002C7E4 (_TlgCreateWsz.c)
 */

void __fastcall CWatchDogTimer::TimerCallback(const WCHAR *a1)
{
  LPCGUID v1; // r8
  LPCGUID v2; // r9
  EVENT_DATA_DESCRIPTOR pData; // [rsp+30h] [rbp-48h] BYREF
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+50h] [rbp-28h] BYREF

  if ( hProvider > 2u
    && (qword_1400552A0 & 0x400000000000LL) != 0
    && (qword_1400552A8 & 0x400000000000LL) == qword_1400552A8 )
  {
    TlgCreateWsz(&pDesc, a1);
    TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1400455C5, v1, v2, 3u, &pData);
  }
}
