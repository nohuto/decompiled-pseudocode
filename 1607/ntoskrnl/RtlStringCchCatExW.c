/*
 * XREFs of RtlStringCchCatExW @ 0x14013C270
 * Callers:
 *     _CmGetDeviceInterfaceRegKeyPath @ 0x1404DE090 (_CmGetDeviceInterfaceRegKeyPath.c)
 *     PipHardwareConfigOpenKey @ 0x1405500C4 (PipHardwareConfigOpenKey.c)
 *     PiCMGenerateDeviceInstance @ 0x1406478D0 (PiCMGenerateDeviceInstance.c)
 * Callees:
 *     RtlStringCopyWorkerW_0 @ 0x1400C1440 (RtlStringCopyWorkerW_0.c)
 *     RtlStringLengthWorkerW @ 0x14013C314 (RtlStringLengthWorkerW.c)
 *     RtlStringExHandleOtherFlagsW @ 0x1401CCABC (RtlStringExHandleOtherFlagsW.c)
 */

NTSTATUS __stdcall RtlStringCchCatExW(
        NTSTRSAFE_PWSTR pszDest,
        size_t cchDest,
        NTSTRSAFE_PCWSTR pszSrc,
        NTSTRSAFE_PWSTR *ppszDestEnd,
        size_t *pcchRemaining,
        ULONG dwFlags)
{
  int v6; // ebx
  NTSTRSAFE_PCWSTR v7; // r11
  NTSTATUS v10; // eax
  size_t v11; // rsi
  size_t *v13; // [rsp+20h] [rbp-28h]
  size_t pcchLength; // [rsp+68h] [rbp+20h] BYREF

  pcchLength = (size_t)ppszDestEnd;
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
    v10 = RtlStringLengthWorkerW(pszDest, cchDest, &pcchLength);
    v11 = pcchLength;
    v6 = v10;
  }
  if ( v6 >= 0 )
  {
    v6 = 0;
    if ( cchDest - v11 <= 1 )
    {
      if ( !*v7 )
        return v6;
      v6 = pszDest != 0LL ? -2147483643 : -1073741811;
    }
    else
    {
      v6 = RtlStringCopyWorkerW_0(&pszDest[v11], cchDest - v11, &pcchLength, v7, (size_t)v13);
      if ( v6 >= 0 )
        return v6;
    }
    if ( cchDest )
      RtlStringExHandleOtherFlagsW(pszDest, 2 * cchDest, v11, (NTSTRSAFE_PWSTR *)&pcchRemaining, &pcchLength, 0x800u);
  }
  return v6;
}
