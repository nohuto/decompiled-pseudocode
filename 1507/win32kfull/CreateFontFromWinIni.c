/*
 * XREFs of CreateFontFromWinIni @ 0x1C0137FF8
 * Callers:
 *     UserSetFont @ 0x1C0137F98 (UserSetFont.c)
 *     ?SPISetIconTitleFont@@YAHPEAU_UNICODE_STRING@@PEAUtagLOGFONTW@@H@Z @ 0x1C01D4DB0 (-SPISetIconTitleFont@@YAHPEAU_UNICODE_STRING@@PEAUtagLOGFONTW@@H@Z.c)
 * Callees:
 *     GreExtGetObjectW @ 0x1C0014EE0 (GreExtGetObjectW.c)
 *     GreCreateFontIndirectW @ 0x1C005684C (GreCreateFontIndirectW.c)
 *     GreSetLFONTOwner @ 0x1C00FCA30 (GreSetLFONTOwner.c)
 *     __security_check_cookie @ 0x1C015BB90 (__security_check_cookie.c)
 *     memset @ 0x1C015D4C0 (memset.c)
 */

__int64 __fastcall CreateFontFromWinIni(__int64 a1, _DWORD *a2, unsigned int a3)
{
  _DWORD *v4; // rdi
  int v6; // r8d
  HSURF FontIndirectW; // rax
  __int64 v8; // rbx
  __int64 v9; // rdx
  __int64 v10; // r8
  unsigned int v12; // ebx
  _DWORD v13[24]; // [rsp+40h] [rbp-C0h] BYREF
  unsigned __int16 v14[48]; // [rsp+A0h] [rbp-60h] BYREF

  v4 = a2;
  if ( !a2 )
  {
    v4 = v13;
    memset(v13, 0, 0x5CuLL);
    HIBYTE(v13[5]) = gSystemCPCharSet;
    FastGetProfileValue(a1, 23LL, a3, 0LL, v13, 92, 0);
    if ( !LOWORD(v13[7]) )
    {
      *(_OWORD *)&v13[7] = xmmword_1C02EBA70;
      LOWORD(v13[13]) = 0;
      *(_QWORD *)&v13[11] = 0x67006C00440020LL;
    }
    v6 = v13[0];
    if ( !v13[0] )
      v6 = 8;
    v13[0] = v6;
    if ( v6 > 0 )
      v13[0] = (v6 * *(unsigned __int16 *)(gpsi + 7286LL) + 36) / -72;
    if ( !v13[4] )
    {
      v12 = a3 - 139;
      if ( !v12 || (v13[4] = 400, v12 == 12) )
        v13[4] = 700;
    }
    LOWORD(v13[6]) = 0;
    BYTE2(v13[6]) = 0;
  }
  FontIndirectW = (HSURF)GreCreateFontIndirectW((__int64)v4);
  v8 = (__int64)FontIndirectW;
  if ( FontIndirectW )
  {
    GreExtGetObjectW(FontIndirectW, 92, v14);
    if ( *(_DWORD *)v14 == *v4 )
    {
      LOBYTE(v9) = 10;
      HmgMarkUndeletable(v8, v9);
      GreSetLFONTOwner(v8, 0, v10);
    }
    else
    {
      GreDeleteObject(v8);
      return 0LL;
    }
  }
  return v8;
}
