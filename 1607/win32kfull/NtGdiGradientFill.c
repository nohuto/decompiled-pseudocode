/*
 * XREFs of NtGdiGradientFill @ 0x1C005FAF0
 * Callers:
 *     <none>
 * Callees:
 *     GreGradientFill @ 0x1C005FD04 (GreGradientFill.c)
 *     PALLOCMEM2 @ 0x1C0060508 (PALLOCMEM2.c)
 *     memmove @ 0x1C015A040 (memmove.c)
 */

__int64 __fastcall NtGdiGradientFill(HDC a1, char *a2, unsigned int a3, char *a4, unsigned int a5, int a6)
{
  __int64 v6; // rdi
  unsigned int v7; // r15d
  size_t v8; // rcx
  char *v9; // rax
  char *v10; // r12
  char *v11; // rcx
  unsigned int v12; // r14d
  __int64 v13; // rdx
  __int64 v14; // r8
  ULONG v16; // ecx
  char *v17; // [rsp+30h] [rbp-48h]

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
  v6 = 16 * a3;
  if ( (unsigned __int8)a6 != 2 )
  {
    if ( a5 <= (unsigned int)(40960000 - v6) >> 3 )
    {
      v7 = 8 * a5;
      goto LABEL_13;
    }
LABEL_30:
    v16 = 87;
    goto LABEL_31;
  }
  if ( a5 > (unsigned int)(40960000 - v6) / 0xCuLL )
    goto LABEL_30;
  v7 = 12 * a5;
LABEL_13:
  v8 = v7 + (unsigned int)v6;
  if ( (unsigned int)v8 >= 0x2710000 )
  {
    v16 = 8;
LABEL_31:
    EngSetLastError(v16);
    return 0LL;
  }
  v9 = (char *)PALLOCMEM2(v8);
  v10 = v9;
  if ( v9 )
  {
    v17 = &v9[v6];
    if ( (_DWORD)v6 && ((unsigned __int64)&a2[v6] > W32UserProbeAddress || &a2[v6] < a2) )
      *W32UserProbeAddress = 0;
    memmove(v9, a2, (unsigned int)v6);
    if ( v7 )
    {
      v11 = &a4[v7];
      if ( (unsigned __int64)v11 > W32UserProbeAddress || v11 < a4 )
        *W32UserProbeAddress = 0;
    }
    memmove(v17, a4, v7);
    v12 = GreGradientFill(a1, a5, a6);
    Win32FreePool(v10, v13, v14);
  }
  else
  {
    EngSetLastError(8u);
    return 0;
  }
  return v12;
}
