/*
 * XREFs of AlpcpQuerySidToken @ 0x1403FEFF4
 * Callers:
 *     AlpcpQuerySidMessage @ 0x1403FEF88 (AlpcpQuerySidMessage.c)
 * Callees:
 *     __security_check_cookie @ 0x14014CA50 (__security_check_cookie.c)
 *     memmove @ 0x140171280 (memmove.c)
 *     SeQueryUserSidToken @ 0x1403FFC40 (SeQueryUserSidToken.c)
 */

__int64 __fastcall AlpcpQuerySidToken(__int64 a1, void *a2, unsigned int a3, unsigned int *a4)
{
  int v7; // edi
  unsigned int Size; // [rsp+20h] [rbp-88h]
  _BYTE Src[80]; // [rsp+30h] [rbp-78h] BYREF

  SeQueryUserSidToken(a1, Src, 68LL);
  v7 = 0;
  if ( Size > a3 )
    v7 = -1073741789;
  if ( a4 )
    *a4 = Size;
  if ( v7 >= 0 )
    memmove(a2, Src, Size);
  return (unsigned int)v7;
}
