/*
 * XREFs of RtlStringCchCatExW @ 0x140133FA8
 * Callers:
 *     _CmGetDeviceInterfaceRegKeyPath @ 0x140442490 (_CmGetDeviceInterfaceRegKeyPath.c)
 *     PipHardwareConfigOpenKey @ 0x1405238F8 (PipHardwareConfigOpenKey.c)
 *     PiCMGenerateDeviceInstance @ 0x1406132A8 (PiCMGenerateDeviceInstance.c)
 * Callees:
 *     sub_140090210 @ 0x140090210 (sub_140090210.c)
 *     sub_14013404C @ 0x14013404C (sub_14013404C.c)
 *     sub_1401BE640 @ 0x1401BE640 (sub_1401BE640.c)
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
    v10 = sub_14013404C(pszDest, cchDest, &v13);
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
      v6 = sub_140090210(&pszDest[(_QWORD)v11], cchDest - (_QWORD)v11, &v13, (__int64)v7);
      if ( v6 >= 0 )
        return v6;
    }
    if ( cchDest )
      sub_1401BE640(pszDest, 2 * cchDest, v11, &pcchRemaining, &v13, 2048);
  }
  return v6;
}
