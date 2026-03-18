/*
 * XREFs of WheaWmiDispatch @ 0x140141638
 * Callers:
 *     <none>
 * Callees:
 *     sub_140141690 @ 0x140141690 (sub_140141690.c)
 *     WheapWmiExecuteMethod @ 0x14021759C (WheapWmiExecuteMethod.c)
 *     sub_1402177B0 @ 0x1402177B0 (sub_1402177B0.c)
 *     sub_140217808 @ 0x140217808 (sub_140217808.c)
 */

__int64 __fastcall WheaWmiDispatch(__int64 a1, __int64 a2, unsigned int a3, __int64 a4, int a5, _DWORD *a6)
{
  __int64 v6; // rcx
  __int64 v7; // rcx

  if ( !(_DWORD)a1 )
    return sub_1402177B0(a1, a3, a4, a6);
  v6 = (unsigned int)(a1 - 1);
  if ( !(_DWORD)v6 )
    return sub_140217808(v6, a3, a4, a6);
  v7 = (unsigned int)(v6 - 7);
  if ( !(_DWORD)v7 )
    return sub_140141690(v7, a3, a4, a6);
  if ( (_DWORD)v7 == 1 )
    return WheapWmiExecuteMethod(a2, a3, a4, a6);
  *a6 = 0;
  return 3221225488LL;
}
