/*
 * XREFs of KiCopyInformation @ 0x1401D2B80
 * Callers:
 *     KiInitializeUserApc @ 0x1400A7C9C (KiInitializeUserApc.c)
 *     KiDispatchException @ 0x1400F3D60 (KiDispatchException.c)
 * Callees:
 *     KeCopyExceptionRecord @ 0x1401717BC (KeCopyExceptionRecord.c)
 */

__int64 __fastcall KiCopyInformation(_OWORD *a1, __int64 a2)
{
  KeCopyExceptionRecord(a1, a2);
  return 1LL;
}
