/*
 * XREFs of ?dumpLeaks@@YAHPEAU_LIST_ENTRY@@PEAD@Z @ 0x1C006B8E8
 * Callers:
 *     RIMUnInitialize @ 0x1C006B870 (RIMUnInitialize.c)
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C0077B00 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_s @ 0x1C00C0950 (WPP_RECORDER_SF_s.c)
 */

__int64 __fastcall dumpLeaks(struct _LIST_ENTRY *a1, char *a2)
{
  struct _LIST_ENTRY *Flink; // rbx
  int v5; // edx

  Flink = a1->Flink;
  if ( a1->Flink == a1 )
    return 0LL;
  WPP_RECORDER_SF_s(
    WPP_GLOBAL_Control->DeviceExtension,
    (_DWORD)a2,
    4,
    10,
    (__int64)&WPP_4147cb9e2f3f5911ed13e12165a50882_Traceguids,
    (__int64)a2);
  do
  {
    LOBYTE(v5) = 3;
    WPP_RECORDER_SF_q(
      WPP_GLOBAL_Control->DeviceExtension,
      v5,
      4,
      11,
      (__int64)&WPP_4147cb9e2f3f5911ed13e12165a50882_Traceguids,
      (_BYTE)Flink - 16);
    Flink = Flink->Flink;
  }
  while ( Flink != a1 );
  return 1LL;
}
