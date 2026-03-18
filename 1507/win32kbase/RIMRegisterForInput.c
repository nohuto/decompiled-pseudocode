/*
 * XREFs of RIMRegisterForInput @ 0x1C0072050
 * Callers:
 *     <none>
 * Callees:
 *     RIMRegisterForInputWithCallbacks @ 0x1C0072410 (RIMRegisterForInputWithCallbacks.c)
 */

__int64 __fastcall RIMRegisterForInput(
        int a1,
        int a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        int a7,
        __int64 a8,
        __int64 a9,
        char a10,
        __int64 a11)
{
  return RIMRegisterForInputWithCallbacks(a1, a2, 0, 0, a3, a4, a5, a6, a7, a8, a9, 0LL, a10, a11);
}
