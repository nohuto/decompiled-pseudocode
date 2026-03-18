/*
 * XREFs of NtGdiDrawStream @ 0x1C003AA20
 * Callers:
 *     <none>
 * Callees:
 *     GreDrawStream @ 0x1C0039BA8 (GreDrawStream.c)
 *     __security_check_cookie @ 0x1C0158CD0 (__security_check_cookie.c)
 *     memmove @ 0x1C015A040 (memmove.c)
 */

__int64 __fastcall NtGdiDrawStream(HDC a1, unsigned int a2, char *a3)
{
  size_t v4; // rsi
  unsigned int v6; // edi
  _BYTE *v7; // rbx
  _BYTE v9[256]; // [rsp+30h] [rbp-128h] BYREF

  v4 = a2;
  v6 = 0;
  v7 = 0LL;
  if ( a2 <= 0x100 )
  {
    v7 = v9;
  }
  else
  {
    if ( a2 > 0x2710000 )
      goto LABEL_10;
    v7 = (_BYTE *)AllocFreeTmpBuffer(a2);
    if ( !v7 )
      goto LABEL_10;
  }
  if ( &a3[v4] < a3 || (unsigned __int64)&a3[v4] > W32UserProbeAddress )
    *W32UserProbeAddress = 0;
  memmove(v7, a3, v4);
  v6 = GreDrawStream(a1, v4, (int *)v7);
LABEL_10:
  if ( v7 && v7 != v9 )
    FreeTmpBuffer(v7);
  return v6;
}
