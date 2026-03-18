/*
 * XREFs of PopPepStartActivity @ 0x140027C18
 * Callers:
 *     PopPepComponentGetWork @ 0x140027F14 (PopPepComponentGetWork.c)
 *     PopPepWork @ 0x140028D6C (PopPepWork.c)
 *     PopPepTryPowerDownDevice @ 0x140029034 (PopPepTryPowerDownDevice.c)
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
  result = ((__int64 (__fastcall *)(__int64, __int64, __int64))off_140290848[17 * a4])(a1, a2, a6);
  **(_DWORD **)(a3 + 8 * v7) &= ~2u;
  **(_DWORD **)(a3 + 8 * v7) &= ~8u;
  **(_DWORD **)(a3 + 8 * v7) |= 4u;
  return result;
}
