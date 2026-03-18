/*
 * XREFs of NtUserfnINCBOXSTRING @ 0x1401BBCA0
 * Callers:
 *     <none>
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036890 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ?_InBoxString@@YA_JJPEAUtagWND@@I_K_J1KH@Z @ 0x1401BBD98 (-_InBoxString@@YA_JJPEAUtagWND@@I_K_J1KH@Z.c)
 */

__int64 __fastcall NtUserfnINCBOXSTRING(
        struct tagWND *a1,
        unsigned int a2,
        unsigned __int64 a3,
        __int64 a4,
        unsigned __int64 a5,
        unsigned int a6,
        int a7)
{
  PtiCurrent((__int64)a1);
  return _InBoxString(674, a1, a2, a3, a4, a5, a6, a7);
}
