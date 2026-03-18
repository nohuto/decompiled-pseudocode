/*
 * XREFs of xxxRefreshDisplayOrientation @ 0x1C0154E80
 * Callers:
 *     <none>
 * Callees:
 *     _TlgWrite @ 0x1C00E5414 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x1C00E56D0 (_TlgKeywordOn.c)
 *     xxxSetAutoRotationDocked @ 0x1C0154F04 (xxxSetAutoRotationDocked.c)
 *     xxxSetAutoRotationConvertible @ 0x1C0154F84 (xxxSetAutoRotationConvertible.c)
 *     __security_check_cookie @ 0x1C0158CD0 (__security_check_cookie.c)
 */

__int64 xxxRefreshDisplayOrientation()
{
  const GUID *v0; // r8
  const GUID *v1; // r9
  EVENT_DATA_DESCRIPTOR pData; // [rsp+30h] [rbp-48h] BYREF
  int *v4; // [rsp+50h] [rbp-28h]
  int v5; // [rsp+58h] [rbp-20h]
  int v6; // [rsp+5Ch] [rbp-1Ch]

  if ( dword_1C0320840 > 5u && TlgKeywordOn((TraceLoggingHProvider)&dword_1C0320840, 0x200000000001uLL) )
  {
    v6 = 0;
    v4 = &dword_1C032946C;
    v5 = 4;
    TlgWrite((TraceLoggingHProvider)&dword_1C0320840, &unk_1C02EE222, v0, v1, 3u, &pData);
  }
  xxxSetAutoRotationConvertible((unsigned __int8)(*(_BYTE *)(gpsi + 2220LL) & 8) >> 3);
  return xxxSetAutoRotationDocked((unsigned __int8)(*(_BYTE *)(gpsi + 2220LL) & 0x10) >> 4);
}
