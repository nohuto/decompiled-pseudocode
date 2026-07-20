/*
 * XREFs of sub_140011738 @ 0x140011738
 * Callers:
 *     sub_1400114A8 @ 0x1400114A8 (sub_1400114A8.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_140011738(wchar_t *a1, size_t a2, unsigned __int64 *a3, const wchar_t *a4, va_list a5)
{
  unsigned __int64 v5; // rbx
  unsigned int v8; // ebp
  int v9; // eax

  v5 = a2 - 1;
  v8 = 0;
  v9 = vsnwprintf_s(a1, a2, a2 - 1, a4, a5);
  if ( v9 < 0 || v9 > v5 )
  {
    v8 = -2147483643;
  }
  else if ( v9 != v5 )
  {
    v5 = v9;
    goto LABEL_7;
  }
  a1[v5] = 0;
LABEL_7:
  if ( a3 )
    *a3 = v5;
  return v8;
}
