/*
 * XREFs of NtGdiSetLinkedUFIs @ 0x140184CC0
 * Callers:
 *     <none>
 * Callees:
 *     ??0APIDCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1400AFE30 (--0APIDCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1APIDCOBJ@@QEAA@XZ @ 0x1400B0D34 (--1APIDCOBJ@@QEAA@XZ.c)
 *     PALLOCNOZ @ 0x140184030 (PALLOCNOZ.c)
 *     ?bSetLinkedUFIs@XDCOBJ@@QEAAHPEAU_UNIVERSAL_FONT_ID@@I@Z @ 0x1402328B8 (-bSetLinkedUFIs@XDCOBJ@@QEAAHPEAU_UNIVERSAL_FONT_ID@@I@Z.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 */

__int64 __fastcall NtGdiSetLinkedUFIs(HDC a1, const void *a2, __int64 a3)
{
  __int64 v3; // rdi
  unsigned int v6; // esi
  _BYTE *v7; // rbx
  _QWORD v9[14]; // [rsp+50h] [rbp-C8h] BYREF
  _BYTE v10[32]; // [rsp+C0h] [rbp-58h] BYREF

  v3 = (unsigned int)a3;
  v6 = 1;
  v7 = 0LL;
  if ( !a2 && (_DWORD)a3 )
    return 0LL;
  if ( (unsigned int)a3 <= 4 )
  {
    v7 = v10;
  }
  else
  {
    if ( (unsigned int)a3 <= 0x4E2000 )
      v7 = (_BYTE *)PALLOCNOZ(8 * (int)a3, 1684629063LL, a3);
    if ( !v7 )
      return 0LL;
  }
  if ( a2 )
    GreProbeAndReadFromUntrustedVa(v7, 8 * v3, a2, 8 * v3, 4uLL);
  APIDCOBJ::APIDCOBJ((APIDCOBJ *)v9, a1);
  if ( v9[0] )
    v6 = XDCOBJ::bSetLinkedUFIs((XDCOBJ *)v9, (struct _UNIVERSAL_FONT_ID *)v7, v3);
  APIDCOBJ::~APIDCOBJ((APIDCOBJ *)v9);
  if ( v7 != v10 )
    Win32FreePool(v7);
  return v6;
}
