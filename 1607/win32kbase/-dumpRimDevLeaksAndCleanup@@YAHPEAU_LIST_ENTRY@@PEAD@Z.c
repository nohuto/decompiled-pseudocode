/*
 * XREFs of ?dumpRimDevLeaksAndCleanup@@YAHPEAU_LIST_ENTRY@@PEAD@Z @ 0x1C00CD874
 * Callers:
 *     RIMUnInitialize @ 0x1C006F360 (RIMUnInitialize.c)
 * Callees:
 *     RIMFreeSpecificDevWorker @ 0x1C000A37C (RIMFreeSpecificDevWorker.c)
 *     WPP_RECORDER_SF_q @ 0x1C0010310 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_ @ 0x1C0012AB0 (WPP_RECORDER_SF_.c)
 *     DbgPrintRIMAlways @ 0x1C00C0E60 (DbgPrintRIMAlways.c)
 *     WPP_RECORDER_SF_s @ 0x1C00CDD90 (WPP_RECORDER_SF_s.c)
 */

__int64 __fastcall dumpRimDevLeaksAndCleanup(struct _LIST_ENTRY *a1, char *a2)
{
  __int64 *v2; // rsi
  __int64 *v3; // rdi
  int v4; // edx
  void *v5; // rbx

  v2 = (__int64 *)gObRimDevList;
  if ( (__int64 *)gObRimDevList == &gObRimDevList )
    return 0LL;
  WPP_RECORDER_SF_s(
    WPP_GLOBAL_Control->DeviceExtension,
    (_DWORD)a2,
    4,
    12,
    (__int64)&WPP_88236c213bf436c45adfdbc67a1eb72d_Traceguids,
    (__int64)"RIMDevObj leaks");
  DbgPrintRIMAlways("%s\n", "RIMDevObj leaks");
  do
  {
    v3 = v2 - 2;
    WPP_RECORDER_SF_q(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      3u,
      4u,
      0xDu,
      (__int64)&WPP_88236c213bf436c45adfdbc67a1eb72d_Traceguids,
      v2 - 2);
    DbgPrintRIMAlways("Leaked %p: ", v2 - 2);
    v2 = (__int64 *)*v2;
    LOBYTE(v4) = 3;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      v4,
      4,
      14,
      (__int64)&WPP_88236c213bf436c45adfdbc67a1eb72d_Traceguids);
    DbgPrintRIMAlways("Cleaning up\n");
    v5 = (void *)v3[52];
    RIMFreeSpecificDevWorker((__int64)v5, (__int64)(v3 + 8));
    ObfDereferenceObject(v5);
  }
  while ( v2 != &gObRimDevList );
  return 1LL;
}
