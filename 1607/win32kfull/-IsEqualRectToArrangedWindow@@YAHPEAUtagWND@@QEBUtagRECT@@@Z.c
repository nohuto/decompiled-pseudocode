/*
 * XREFs of ?IsEqualRectToArrangedWindow@@YAHPEAUtagWND@@QEBUtagRECT@@@Z @ 0x1C01FCE5C
 * Callers:
 *     xxxEndSetWindowArrangement @ 0x1C02036C0 (xxxEndSetWindowArrangement.c)
 * Callees:
 *     GetWindowExtendedMargin @ 0x1C00ACD48 (GetWindowExtendedMargin.c)
 */

__int64 __fastcall IsEqualRectToArrangedWindow(struct tagWND *a1, const struct tagRECT *const a2)
{
  __int64 v4; // rcx
  unsigned int v5; // ebx
  __int64 v7; // [rsp+30h] [rbp+8h] BYREF

  v4 = *(_QWORD *)&a2->left - *((_QWORD *)a1 + 14);
  if ( !v4 )
    v4 = *(_QWORD *)&a2->right - *((_QWORD *)a1 + 15);
  v5 = 0;
  if ( !v4
    || (unsigned int)GetWindowExtendedMargin((__int64)a1, &v7)
    && a2->top == *((_DWORD *)a1 + 29)
    && a2->left - (unsigned __int16)v7 == *((_DWORD *)a1 + 28)
    && a2->right + WORD1(v7) == *((_DWORD *)a1 + 30)
    && a2->bottom + HIWORD(v7) == *((_DWORD *)a1 + 31) )
  {
    return 1;
  }
  return v5;
}
