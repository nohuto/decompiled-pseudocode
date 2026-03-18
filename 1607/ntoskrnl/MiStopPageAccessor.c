/*
 * XREFs of MiStopPageAccessor @ 0x14008B864
 * Callers:
 *     MiDecrementHugeContext @ 0x140140E7C (MiDecrementHugeContext.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiStopPageAccessor(__int64 a1)
{
  __int64 result; // rax

  *(_BYTE *)(a1 + 34) &= ~8u;
  result = *(_QWORD *)(a1 + 16);
  *(_QWORD *)(result + 24) = 0LL;
  *(_BYTE *)(result + 68) = 1;
  return result;
}
