/*
 * XREFs of ?dumpLeaks@@YAHPEAU_LIST_ENTRY@@PEAD@Z @ 0x1C006F3C0
 * Callers:
 *     RIMUnInitialize @ 0x1C006F360 (RIMUnInitialize.c)
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C0010310 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_s @ 0x1C00CDD90 (WPP_RECORDER_SF_s.c)
 */

__int64 __fastcall dumpLeaks(struct _LIST_ENTRY *a1, char *a2)
{
  struct _LIST_ENTRY *Flink; // rbx

  Flink = a1->Flink;
  if ( a1->Flink == a1 )
    return 0LL;
  WPP_RECORDER_SF_s(
    WPP_GLOBAL_Control->DeviceExtension,
    (_DWORD)a2,
    4,
    10,
    (__int64)&WPP_88236c213bf436c45adfdbc67a1eb72d_Traceguids,
    (__int64)a2);
  do
  {
    WPP_RECORDER_SF_q(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      3u,
      4u,
      0xBu,
      (__int64)&WPP_88236c213bf436c45adfdbc67a1eb72d_Traceguids,
      &Flink[-1]);
    Flink = Flink->Flink;
  }
  while ( Flink != a1 );
  return 1LL;
}
