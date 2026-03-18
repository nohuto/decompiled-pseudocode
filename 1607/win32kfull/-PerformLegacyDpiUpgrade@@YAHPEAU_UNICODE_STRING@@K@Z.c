/*
 * XREFs of ?PerformLegacyDpiUpgrade@@YAHPEAU_UNICODE_STRING@@K@Z @ 0x1C008E200
 * Callers:
 *     xxxUpdatePerUserSystemParameters @ 0x1C009190C (xxxUpdatePerUserSystemParameters.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0158CD0 (__security_check_cookie.c)
 *     ?PerformWin8DpiUpgrade@@YAHPEAU_UNICODE_STRING@@K@Z @ 0x1C01CB60C (-PerformWin8DpiUpgrade@@YAHPEAU_UNICODE_STRING@@K@Z.c)
 */

__int64 __fastcall PerformLegacyDpiUpgrade(struct _UNICODE_STRING *a1, unsigned int a2)
{
  unsigned int v2; // ebx
  int v6; // ecx
  int v7; // edx
  unsigned int v8; // eax
  int v9; // [rsp+30h] [rbp-20h] BYREF
  int v10; // [rsp+34h] [rbp-1Ch] BYREF
  __int64 v11; // [rsp+38h] [rbp-18h] BYREF
  int v12; // [rsp+40h] [rbp-10h] BYREF

  v2 = 0;
  v10 = 0;
  v11 = 0LL;
  v12 = 0;
  FastGetProfileDwordW(a1, 4LL, L"Win8DpiScaling", 0xFFFFLL, (char *)&v11 + 4, 0);
  FastGetProfileDwordW(a1, 4LL, L"DpiScalingVer", 0LL, &v9, 0);
  LODWORD(v11) = v9;
  if ( v9 == 4096 )
  {
    if ( HIDWORD(v11) )
      *(_DWORD *)(gpsi + 2220LL) |= 0x20u;
    else
      *(_DWORD *)(gpsi + 2220LL) &= ~0x20u;
    return 0LL;
  }
  FastGetProfileIntW(a1, 4LL, L"DesktopDPIOverride", 0xFFFFLL, &v12, 0);
  v6 = v12;
  v7 = v11;
  if ( a2 || (_DWORD)v11 || v12 != 0xFFFF )
  {
    v8 = HIDWORD(v11);
    if ( HIDWORD(v11) == 0xFFFF )
    {
      LODWORD(v11) = 2048;
      v8 = PerformWin8DpiUpgrade(a1, a2);
      v6 = v12;
      v7 = v11;
    }
    goto LABEL_13;
  }
  v8 = HIDWORD(v11);
  if ( HIDWORD(v11) != 0xFFFF )
  {
LABEL_13:
    if ( v8 )
      v8 = a2;
    HIDWORD(v11) = v8;
    if ( v7 < 4096 )
    {
      if ( v6 == 0xFFFF )
        v6 = 0;
      v12 = v6;
      DrvDxgkUpgradeLegacyDpiSettings(&v11, &v10);
      v8 = HIDWORD(v11);
    }
    goto LABEL_19;
  }
  v8 = PerformWin8DpiUpgrade(a1, 0);
  HIDWORD(v11) = v8;
LABEL_19:
  if ( v8 )
    *(_DWORD *)(gpsi + 2220LL) |= 0x20u;
  else
    *(_DWORD *)(gpsi + 2220LL) &= ~0x20u;
  v9 = 4096;
  FastWriteProfileValue(a1, 4LL, L"DpiScalingVer", 4LL, &v9, 4);
  if ( HIDWORD(v11) || v10 )
    return 1;
  return v2;
}
