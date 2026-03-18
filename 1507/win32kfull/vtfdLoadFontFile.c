/*
 * XREFs of vtfdLoadFontFile @ 0x1C0146D5C
 * Callers:
 *     vtfdLoadFontFileTE @ 0x1C0146CD0 (vtfdLoadFontFileTE.c)
 * Callees:
 *     bVtfdLoadFont @ 0x1C0147644 (bVtfdLoadFont.c)
 */

__int64 __fastcall vtfdLoadFontFile(int a1, int a2, int a3, _QWORD *a4)
{
  __int64 result; // rax

  *a4 = 0LL;
  result = bVtfdLoadFont(a2, a3, a1, 2, (__int64)a4);
  if ( !(_DWORD)result )
    return bVtfdLoadFont(a2, a3, a1, 1, (__int64)a4);
  return result;
}
