/*
 * XREFs of KiCopyInformation @ 0x1401C4068
 * Callers:
 *     KiInitializeUserApc @ 0x140022898 (KiInitializeUserApc.c)
 *     KiDispatchException @ 0x140022BB4 (KiDispatchException.c)
 * Callees:
 *     KeCopyExceptionRecord @ 0x140166E90 (KeCopyExceptionRecord.c)
 */

__int64 __fastcall KiCopyInformation(_OWORD *a1, __int64 a2)
{
  KeCopyExceptionRecord(a1, a2);
  return 1LL;
}
