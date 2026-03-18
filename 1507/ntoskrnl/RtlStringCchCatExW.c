/*
 * XREFs of RtlStringCchCatExW @ 0x14015DC20
 * Callers:
 *     _CmGetDeviceInterfaceRegKeyPath @ 0x14043C0E0 (_CmGetDeviceInterfaceRegKeyPath.c)
 *     PipHardwareConfigOpenKey @ 0x14058F444 (PipHardwareConfigOpenKey.c)
 *     PiCMGenerateDeviceInstance @ 0x140692DCC (PiCMGenerateDeviceInstance.c)
 * Callees:
 *     sub_140019BB0 @ 0x140019BB0 (sub_140019BB0.c)
 *     sub_14015DCC4 @ 0x14015DCC4 (sub_14015DCC4.c)
 *     sub_1401F9EA8 @ 0x1401F9EA8 (sub_1401F9EA8.c)
 */

NTSTATUS __stdcall RtlStringCchCatExW(
        NTSTRSAFE_PWSTR pszDest,
        size_t cchDest,
        NTSTRSAFE_PCWSTR pszSrc,
        NTSTRSAFE_PWSTR *ppszDestEnd,
        size_t *pcchRemaining,
        ULONG dwFlags)
{
  NTSTATUS v6; // ebx
  NTSTRSAFE_PCWSTR v7; // r11
  NTSTATUS v10; // eax
  NTSTRSAFE_PWSTR *v11; // rsi
  NTSTRSAFE_PWSTR *v13; // [rsp+68h] [rbp+20h] BYREF

  v13 = ppszDestEnd;
  v6 = 0;
  v7 = pszSrc;
  if ( cchDest - 1 > 0x7FFFFFFE )
    v6 = -1073741811;
  if ( v6 < 0 )
  {
    v11 = 0LL;
  }
  else
  {
    v10 = sub_14015DCC4(pszDest, cchDest, &v13);
    v11 = v13;
    v6 = v10;
  }
  if ( v6 >= 0 )
  {
    v6 = 0;
    if ( cchDest - (unsigned __int64)v11 <= 1 )
    {
      if ( !*v7 )
        return v6;
      v6 = pszDest != 0LL ? -2147483643 : -1073741811;
    }
    else
    {
      v6 = sub_140019BB0(&pszDest[(_QWORD)v11], cchDest - (_QWORD)v11, &v13, (__int64)v7);
      if ( v6 >= 0 )
        return v6;
    }
    if ( cchDest )
      sub_1401F9EA8(pszDest, 2 * cchDest, v11, &pcchRemaining, &v13, 2048);
  }
  return v6;
}
