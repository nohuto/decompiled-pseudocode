/*
 * XREFs of NtGdiQueryFonts @ 0x1C02A7FE0
 * Callers:
 *     <none>
 * Callees:
 *     memmove @ 0x1C015D180 (memmove.c)
 *     GreQueryFonts @ 0x1C026AA20 (GreQueryFonts.c)
 */

__int64 __fastcall NtGdiQueryFonts(char *a1, __int64 a2, union _LARGE_INTEGER *a3, __int64 a4)
{
  union _LARGE_INTEGER *v4; // r12
  unsigned int v5; // r14d
  unsigned int v7; // ebx
  struct _UNIVERSAL_FONT_ID *v8; // rdi
  unsigned int v9; // eax
  size_t v10; // r8
  union _LARGE_INTEGER v12; // [rsp+20h] [rbp-28h] BYREF

  v4 = a3;
  v5 = a2;
  v7 = 0;
  v8 = 0LL;
  if ( (_DWORD)a2 && a1 )
  {
    if ( (unsigned int)a2 <= 0x4E2000 )
      v8 = (struct _UNIVERSAL_FONT_ID *)AllocFreeTmpBuffer((unsigned int)(8 * a2));
    if ( !v8 )
      v7 = -1;
  }
  if ( v7 != -1 )
  {
    v9 = GreQueryFonts(v8, v5, &v12);
    v7 = v9;
    if ( v9 != -1 )
    {
      if ( (unsigned __int64)v4 >= W32UserProbeAddress )
        v4 = (union _LARGE_INTEGER *)W32UserProbeAddress;
      *v4 = v12;
      if ( a1 )
      {
        if ( v9 < v5 )
          v5 = v9;
        v10 = 8LL * v5;
        if ( (unsigned __int64)&a1[v10] > W32UserProbeAddress || &a1[v10] <= a1 || ((unsigned __int8)a1 & 3) != 0 )
          *W32UserProbeAddress = 0;
        memmove(a1, v8, v10);
      }
    }
  }
  if ( v8 )
    FreeTmpBuffer(v8, a2, a3, a4);
  if ( v7 == -1 )
    EngSetLastError(8u);
  return v7;
}
