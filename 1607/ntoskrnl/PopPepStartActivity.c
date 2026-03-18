/*
 * XREFs of PopPepStartActivity @ 0x1400C21F8
 * Callers:
 *     PopPepTryPowerDownDevice @ 0x1400C1CC0 (PopPepTryPowerDownDevice.c)
 *     PopPepWork @ 0x1400C1DA4 (PopPepWork.c)
 *     PopPepComponentGetWork @ 0x1400C245C (PopPepComponentGetWork.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PopPepStartActivity(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        int a4,
        volatile signed __int32 *a5,
        __int64 a6)
{
  __int64 v7; // rbx
  __int64 result; // rax

  v7 = a4;
  _InterlockedDecrement(a5);
  result = ((__int64 (__fastcall *)(__int64, __int64, __int64))off_140257708[17 * a4])(a1, a2, a6);
  **(_DWORD **)(a3 + 8 * v7) &= ~2u;
  **(_DWORD **)(a3 + 8 * v7) &= ~8u;
  **(_DWORD **)(a3 + 8 * v7) |= 4u;
  return result;
}
