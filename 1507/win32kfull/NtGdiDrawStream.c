/*
 * XREFs of NtGdiDrawStream @ 0x1C00DD720
 * Callers:
 *     <none>
 * Callees:
 *     GreDrawStream @ 0x1C0026AD0 (GreDrawStream.c)
 *     __security_check_cookie @ 0x1C015BB90 (__security_check_cookie.c)
 *     memmove @ 0x1C015D180 (memmove.c)
 */

__int64 __fastcall NtGdiDrawStream(HDC a1, __int64 a2, char *a3, __int64 a4)
{
  size_t v5; // rsi
  unsigned int v7; // edi
  _BYTE *v8; // rbx
  _BYTE v10[256]; // [rsp+30h] [rbp-128h] BYREF

  v5 = (unsigned int)a2;
  v7 = 0;
  v8 = 0LL;
  if ( (unsigned int)a2 <= 0x100 )
  {
    v8 = v10;
  }
  else
  {
    if ( (unsigned int)a2 > 0x2710000 )
      goto LABEL_10;
    v8 = (_BYTE *)AllocFreeTmpBuffer((unsigned int)a2);
    if ( !v8 )
      goto LABEL_10;
  }
  if ( &a3[v5] < a3 || (unsigned __int64)&a3[v5] > W32UserProbeAddress )
    *W32UserProbeAddress = 0;
  memmove(v8, a3, v5);
  v7 = GreDrawStream(a1, v5, v8);
LABEL_10:
  if ( v8 && v8 != v10 )
    FreeTmpBuffer(v8, a2, a3, a4);
  return v7;
}
