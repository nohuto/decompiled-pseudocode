/*
 * XREFs of NtGdiGetTextExtent @ 0x1C02A8770
 * Callers:
 *     <none>
 * Callees:
 *     GreGetTextExtentW @ 0x1C0123640 (GreGetTextExtentW.c)
 *     __security_check_cookie @ 0x1C0158CD0 (__security_check_cookie.c)
 *     memmove @ 0x1C015A040 (memmove.c)
 */

__int64 __fastcall NtGdiGetTextExtent(HDC a1, char *Src, int a3, struct tagSIZE *a4, char a5)
{
  struct tagSIZE *v5; // r12
  __int64 v6; // rsi
  char *v9; // rdi
  unsigned int TextExtentW; // ebx
  char *v11; // rax
  struct tagSIZE v13; // [rsp+48h] [rbp-80h] BYREF
  HDC v14; // [rsp+50h] [rbp-78h]
  struct tagSIZE *v15; // [rsp+58h] [rbp-70h]
  char v16; // [rsp+60h] [rbp-68h] BYREF

  v5 = a4;
  v6 = a3;
  v14 = a1;
  v15 = a4;
  v9 = 0LL;
  TextExtentW = 0;
  if ( a3 < 0 )
    return TextExtentW;
  if ( !a3 )
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
  if ( Src )
  {
    if ( a3 > 16 )
    {
      if ( (unsigned __int64)a3 <= 0x1388000 )
        v9 = (char *)AllocFreeTmpBuffer((unsigned int)(2 * a3));
    }
    else
    {
      v9 = &v16;
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
    TextExtentW = GreGetTextExtentW(a1, (unsigned __int16 *)v9, v6, &v13, a5);
  if ( (int)v6 > 16 && v9 )
    FreeTmpBuffer(v9);
  if ( TextExtentW )
    goto LABEL_20;
  return TextExtentW;
}
