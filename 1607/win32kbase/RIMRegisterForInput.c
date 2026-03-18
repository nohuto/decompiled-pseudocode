/*
 * XREFs of RIMRegisterForInput @ 0x1C0081790
 * Callers:
 *     <none>
 * Callees:
 *     RIMRegisterForInputWithCallbacks @ 0x1C000A8A0 (RIMRegisterForInputWithCallbacks.c)
 */

__int64 __fastcall RIMRegisterForInput(
        int a1,
        void *a2,
        __int64 a3,
        void *a4,
        __int64 a5,
        __int64 a6,
        unsigned int a7,
        __int64 a8,
        __int64 a9,
        char a10,
        HANDLE *a11)
{
  return RIMRegisterForInputWithCallbacks(a1, a2, 0, 0LL, a3, a4, a5, a6, a7, a8, a9, 0LL, a10, a11);
}
