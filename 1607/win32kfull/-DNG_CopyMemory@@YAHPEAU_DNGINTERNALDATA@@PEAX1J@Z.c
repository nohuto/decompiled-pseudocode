/*
 * XREFs of ?DNG_CopyMemory@@YAHPEAU_DNGINTERNALDATA@@PEAX1J@Z @ 0x1C00D4FB4
 * Callers:
 *     RenderNineGridInternal @ 0x1C00D4030 (RenderNineGridInternal.c)
 * Callees:
 *     memmove @ 0x1C015A040 (memmove.c)
 */

__int64 __fastcall DNG_CopyMemory(struct _DNGINTERNALDATA *a1, char *a2, char *a3, int a4)
{
  size_t v6; // r8
  char *v7; // r9
  char *v8; // rdx
  unsigned __int64 v9; // r11
  unsigned __int64 v10; // rbx

  if ( a4 <= 0 )
    return 0LL;
  v6 = a4;
  v7 = &a2[a4];
  if ( v7 <= a2 )
    return 0LL;
  v8 = &a3[v6];
  if ( &a3[v6] <= a3 )
    return 0LL;
  v9 = *((_QWORD *)a1 + 27);
  if ( v9 > (unsigned __int64)a2 )
    return 0LL;
  v10 = *((_QWORD *)a1 + 28);
  if ( (unsigned __int64)v7 > v10 )
    return 0LL;
  if ( ((unsigned __int64)v8 > v10 || v9 > (unsigned __int64)a3)
    && (*((_QWORD *)a1 + 29) > (unsigned __int64)a3 || (unsigned __int64)v8 > *((_QWORD *)a1 + 30)) )
  {
    return 0LL;
  }
  memmove(a2, a3, v6);
  return 1LL;
}
