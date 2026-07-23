/*
 * XREFs of SeQuerySecurityAttributesTokenAccessInformation @ 0x1402194B4
 * Callers:
 *     <none>
 * Callees:
 *     SepTokenFromAccessInformation @ 0x14000C190 (SepTokenFromAccessInformation.c)
 *     SepInternalQuerySecurityAttributesTokenEx @ 0x14000DF60 (SepInternalQuerySecurityAttributesTokenEx.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     memset @ 0x140171AC0 (memset.c)
 */

__int64 __fastcall SeQuerySecurityAttributesTokenAccessInformation(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        _QWORD *a4,
        int a5,
        _DWORD *a6)
{
  char v10; // dl
  size_t Size; // [rsp+30h] [rbp-4E8h]
  int v13[292]; // [rsp+40h] [rbp-4D8h] BYREF

  memset(v13, 0, sizeof(v13));
  if ( a5 )
  {
    if ( a4 )
      goto LABEL_3;
  }
  else if ( !a4 )
  {
LABEL_3:
    SepTokenFromAccessInformation(a1, (__int64)v13);
    LODWORD(Size) = a5;
    return SepInternalQuerySecurityAttributesTokenEx((__int64)v13, v10, a2, a3, 0, a4, Size, a6);
  }
  return 3221225485LL;
}
