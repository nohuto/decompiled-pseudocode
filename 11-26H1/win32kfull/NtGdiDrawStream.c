/*
 * XREFs of NtGdiDrawStream @ 0x140076720
 * Callers:
 *     <none>
 * Callees:
 *     GreDrawStream @ 0x140075C4C (GreDrawStream.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 */

__int64 __fastcall NtGdiDrawStream(Gre::Base *a1, unsigned int a2, const void *a3)
{
  unsigned __int64 v4; // rsi
  unsigned int v6; // edi
  _BYTE *v7; // rbx
  _BYTE v9[256]; // [rsp+40h] [rbp-138h] BYREF

  v4 = a2;
  v6 = 0;
  v7 = 0LL;
  if ( a2 <= 0x100 )
  {
    v7 = v9;
LABEL_3:
    GreProbeAndReadFromUntrustedVa(v7, v4, a3, v4, 1uLL);
    v6 = GreDrawStream(a1, v4, (int *)v7);
    goto LABEL_4;
  }
  if ( a2 <= 0x2710000 )
  {
    v7 = (_BYTE *)AllocFreeTmpBuffer(a2);
    if ( v7 )
      goto LABEL_3;
  }
LABEL_4:
  if ( v7 && v7 != v9 )
    FreeTmpBuffer(v7);
  return v6;
}
