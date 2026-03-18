/*
 * XREFs of VfUtilEqualUnicodeString @ 0x1406B75B4
 * Callers:
 *     VfXdvDriverCaptureIoCallbacks @ 0x1406B2474 (VfXdvDriverCaptureIoCallbacks.c)
 *     ViFaultsIsAppTarget @ 0x1406C54D0 (ViFaultsIsAppTarget.c)
 * Callees:
 *     RtlCompareMemory @ 0x14015BFC0 (RtlCompareMemory.c)
 */

_BOOL8 __fastcall VfUtilEqualUnicodeString(const void **a1, __int64 a2)
{
  return *(_WORD *)a1 == *(_WORD *)a2
      && RtlCompareMemory(a1[1], *(const void **)(a2 + 8), *(unsigned __int16 *)a1) == *(unsigned __int16 *)a1;
}
