/*
 * XREFs of CreateFontFromWinIni @ 0x1C00B8F88
 * Callers:
 *     UserSetFont @ 0x1C00B8F28 (UserSetFont.c)
 *     ?SPISetIconTitleFont@@YAHPEAU_UNICODE_STRING@@PEAUtagLOGFONTW@@H@Z @ 0x1C01CD808 (-SPISetIconTitleFont@@YAHPEAU_UNICODE_STRING@@PEAUtagLOGFONTW@@H@Z.c)
 * Callees:
 *     GreExtGetObjectW @ 0x1C004BBB8 (GreExtGetObjectW.c)
 *     GreCreateFontIndirectW @ 0x1C0060558 (GreCreateFontIndirectW.c)
 *     GreSetLFONTOwner @ 0x1C00B9170 (GreSetLFONTOwner.c)
 *     __security_check_cookie @ 0x1C0158CD0 (__security_check_cookie.c)
 *     memset @ 0x1C015A380 (memset.c)
 */

struct HLFONT__ *__fastcall CreateFontFromWinIni(__int64 a1, _DWORD *a2, unsigned int a3)
{
  _DWORD *v4; // rdi
  int v6; // r8d
  struct HLFONT__ *FontIndirectW; // rax
  struct HLFONT__ *v8; // rbx
  __int64 v9; // rdx
  unsigned int v11; // ebx
  _DWORD v12[24]; // [rsp+40h] [rbp-C0h] BYREF
  int v13[24]; // [rsp+A0h] [rbp-60h] BYREF

  v4 = a2;
  if ( !a2 )
  {
    v4 = v12;
    memset(v12, 0, 0x5CuLL);
    HIBYTE(v12[5]) = gSystemCPCharSet;
    FastGetProfileValue(a1, 23LL, a3, 0LL, v12, 92, 0);
    if ( !LOWORD(v12[7]) )
    {
      *(_OWORD *)&v12[7] = xmmword_1C02F00C8;
      LOWORD(v12[13]) = 0;
      *(_QWORD *)&v12[11] = 0x67006C00440020LL;
    }
    v6 = v12[0];
    if ( !v12[0] )
      v6 = 8;
    v12[0] = v6;
    if ( v6 > 0 )
      v12[0] = (v6 * *(unsigned __int16 *)(gpsi + 8678LL) + 36) / -72;
    if ( !v12[4] )
    {
      v11 = a3 - 139;
      if ( !v11 || (v12[4] = 400, v11 == 12) )
        v12[4] = 700;
    }
    LOWORD(v12[6]) = 0;
    BYTE2(v12[6]) = 0;
  }
  FontIndirectW = (struct HLFONT__ *)GreCreateFontIndirectW((__int64)v4);
  v8 = FontIndirectW;
  if ( FontIndirectW )
  {
    GreExtGetObjectW(FontIndirectW, 92, (unsigned __int16 *)v13);
    if ( v13[0] == *v4 )
    {
      LOBYTE(v9) = 10;
      HmgMarkUndeletable(v8, v9);
      GreSetLFONTOwner(v8, 0LL);
    }
    else
    {
      GreDeleteObject(v8);
      return 0LL;
    }
  }
  return v8;
}
