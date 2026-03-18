/*
 * XREFs of ?PerformLegacyDpiUpgrade@@YAHPEAU_UNICODE_STRING@@K@Z @ 0x1C0132EC0
 * Callers:
 *     xxxUpdatePerUserSystemParameters @ 0x1C0133984 (xxxUpdatePerUserSystemParameters.c)
 * Callees:
 *     __security_check_cookie @ 0x1C015BB90 (__security_check_cookie.c)
 *     ?PerformWin8DpiUpgrade@@YAHPEAU_UNICODE_STRING@@K@Z @ 0x1C01D1918 (-PerformWin8DpiUpgrade@@YAHPEAU_UNICODE_STRING@@K@Z.c)
 */

__int64 __fastcall PerformLegacyDpiUpgrade(struct _UNICODE_STRING *a1, unsigned int a2)
{
  unsigned int v2; // ebx
  int v6; // eax
  unsigned int v7; // eax
  int v8; // eax
  int v9; // [rsp+30h] [rbp-20h] BYREF
  int v10; // [rsp+34h] [rbp-1Ch] BYREF
  __int64 v11; // [rsp+38h] [rbp-18h] BYREF
  int v12; // [rsp+40h] [rbp-10h]

  v2 = 0;
  v10 = 0;
  v11 = 0LL;
  v12 = 0;
  FastGetProfileDwordW(a1, 4LL, L"DpiScalingVer", 0LL, &v9, 0);
  LODWORD(v11) = v9;
  if ( v9 == 4096 )
    return 0LL;
  FastGetProfileIntW(a1, 4LL, L"DesktopDPIOverride");
  FastGetProfileDwordW(a1, 4LL, L"Win8DpiScaling", 0xFFFFLL, (char *)&v11 + 4, 0);
  if ( a2 || (_DWORD)v11 || v12 != 0xFFFF )
  {
    v6 = HIDWORD(v11);
    if ( HIDWORD(v11) == 0xFFFF )
    {
      LODWORD(v11) = 2048;
      v6 = PerformWin8DpiUpgrade(a1, a2);
      HIDWORD(v11) = v6;
    }
    goto LABEL_10;
  }
  v6 = HIDWORD(v11);
  if ( HIDWORD(v11) != 0xFFFF )
  {
LABEL_10:
    if ( v6 )
      *(_DWORD *)(gpsi + 2220LL) |= 0x20u;
    else
      *(_DWORD *)(gpsi + 2220LL) &= ~0x20u;
    v7 = HIDWORD(v11);
    if ( HIDWORD(v11) )
      v7 = a2;
    HIDWORD(v11) = v7;
    if ( (int)v11 < 4096 )
    {
      v8 = v12;
      if ( v12 == 0xFFFF )
        v8 = 0;
      v12 = v8;
      DrvDxgkUpgradeLegacyDpiSettings(&v11, &v10);
    }
    goto LABEL_19;
  }
  HIDWORD(v11) = PerformWin8DpiUpgrade(a1, 0);
LABEL_19:
  v9 = 4096;
  FastWriteProfileValue(a1, 4LL, L"DpiScalingVer", 4LL, &v9, 4);
  if ( HIDWORD(v11) || v10 )
    return 1;
  return v2;
}
