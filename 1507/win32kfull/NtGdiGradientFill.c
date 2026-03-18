/*
 * XREFs of NtGdiGradientFill @ 0x1C0033DB0
 * Callers:
 *     <none>
 * Callees:
 *     GreGradientFill @ 0x1C0033608 (GreGradientFill.c)
 *     PALLOCMEM2 @ 0x1C0033FC4 (PALLOCMEM2.c)
 *     memmove @ 0x1C015D180 (memmove.c)
 */

__int64 __fastcall NtGdiGradientFill(HDC a1, char *a2, unsigned int a3, char *a4, unsigned int a5, int a6)
{
  unsigned __int64 v7; // rdi
  unsigned int v8; // r15d
  size_t v9; // rcx
  struct _TRIVERTEX *v10; // rax
  struct _TRIVERTEX *v11; // r12
  char *v12; // rcx
  unsigned int v13; // r14d
  ULONG v15; // ecx
  struct _TRIVERTEX *v16; // [rsp+30h] [rbp-48h]

  if ( (a6 & 0xFFFFFF00) != 0
    || !a2
    || !a4
    || !a3
    || !a5
    || a3 >= 0x80000000
    || a5 >= 0x80000000
    || (unsigned __int8)a6 > 2u
    || a3 > 0x271000 )
  {
    goto LABEL_30;
  }
  v7 = 16 * a3;
  if ( (unsigned __int8)a6 != 2 )
  {
    if ( a5 <= (unsigned int)(40960000 - v7) >> 3 )
    {
      v8 = 8 * a5;
      goto LABEL_13;
    }
LABEL_30:
    v15 = 87;
    goto LABEL_31;
  }
  if ( a5 > (unsigned int)(40960000 - v7) / 0xCuLL )
    goto LABEL_30;
  v8 = 12 * a5;
LABEL_13:
  v9 = v8 + (unsigned int)v7;
  if ( (unsigned int)v9 >= 0x2710000 )
  {
    v15 = 8;
LABEL_31:
    EngSetLastError(v15);
    return 0LL;
  }
  v10 = (struct _TRIVERTEX *)PALLOCMEM2(v9);
  v11 = v10;
  if ( v10 )
  {
    v16 = &v10[v7 / 0x10];
    if ( (_DWORD)v7 && ((unsigned __int64)&a2[v7] > W32UserProbeAddress || &a2[v7] < a2) )
      *W32UserProbeAddress = 0;
    memmove(v10, a2, (unsigned int)v7);
    if ( v8 )
    {
      v12 = &a4[v8];
      if ( (unsigned __int64)v12 > W32UserProbeAddress || v12 < a4 )
        *W32UserProbeAddress = 0;
    }
    memmove(v16, a4, v8);
    v13 = GreGradientFill(a1, v11, a3, v16, a5, a6);
    Win32FreePool(v11);
  }
  else
  {
    EngSetLastError(8u);
    return 0;
  }
  return v13;
}
