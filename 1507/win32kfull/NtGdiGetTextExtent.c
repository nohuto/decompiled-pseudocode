/*
 * XREFs of NtGdiGetTextExtent @ 0x1C02A7550
 * Callers:
 *     <none>
 * Callees:
 *     GreGetTextExtentW @ 0x1C00FA610 (GreGetTextExtentW.c)
 *     __security_check_cookie @ 0x1C015BB90 (__security_check_cookie.c)
 *     memmove @ 0x1C015D180 (memmove.c)
 */

__int64 __fastcall NtGdiGetTextExtent(HDC a1, char *Src, __int64 a3, struct tagSIZE *a4, char a5)
{
  struct tagSIZE *v5; // r12
  __int64 v6; // rsi
  __m128i *v9; // rdi
  unsigned int TextExtentW; // ebx
  char *v11; // rax
  struct tagSIZE v13; // [rsp+40h] [rbp-88h] BYREF
  BOOL v14; // [rsp+48h] [rbp-80h]
  int v15; // [rsp+50h] [rbp-78h]
  HDC v16; // [rsp+58h] [rbp-70h]
  struct tagSIZE *v17; // [rsp+60h] [rbp-68h]
  char v18; // [rsp+68h] [rbp-60h] BYREF

  v5 = a4;
  v6 = (int)a3;
  v16 = a1;
  v15 = a3;
  v17 = a4;
  v9 = 0LL;
  TextExtentW = 0;
  if ( (int)a3 < 0 )
    return TextExtentW;
  if ( !(_DWORD)a3 )
  {
    v13.cx = 0;
    v13.cy = 0;
    TextExtentW = 1;
LABEL_20:
    if ( (unsigned __int64)v5 >= W32UserProbeAddress )
      v5 = (struct tagSIZE *)W32UserProbeAddress;
    *v5 = v13;
    return TextExtentW;
  }
  v14 = (int)a3 <= 16;
  if ( Src )
  {
    if ( (int)a3 > 16 )
    {
      if ( (unsigned __int64)(int)a3 <= 0x1388000 )
        v9 = (__m128i *)AllocFreeTmpBuffer((unsigned int)(2 * a3));
    }
    else
    {
      v9 = (__m128i *)&v18;
    }
    if ( v9 )
    {
      v11 = &Src[2 * v6];
      if ( v11 < Src || (unsigned __int64)v11 > W32UserProbeAddress )
        *W32UserProbeAddress = 0;
      memmove(v9, Src, 2 * v6);
      TextExtentW = 1;
    }
  }
  if ( TextExtentW )
    TextExtentW = GreGetTextExtentW(a1, v9, v6, &v13, a5);
  if ( (int)v6 > 16 && v9 )
    FreeTmpBuffer(v9, Src, a3, a4);
  if ( TextExtentW )
    goto LABEL_20;
  return TextExtentW;
}
