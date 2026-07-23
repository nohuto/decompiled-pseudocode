/*
 * XREFs of KiCopyInformation @ 0x1401D29AC
 * Callers:
 *     KiInitializeUserApc @ 0x1400A6214 (KiInitializeUserApc.c)
 *     KiDispatchException @ 0x1400F1BB0 (KiDispatchException.c)
 * Callees:
 *     KeCopyExceptionRecord @ 0x140171CB8 (KeCopyExceptionRecord.c)
 */

__int64 __fastcall KiCopyInformation(_OWORD *a1, __int64 a2)
{
  KeCopyExceptionRecord(a1, a2);
  return 1LL;
}
