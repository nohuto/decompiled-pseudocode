/*
 * XREFs of HUBFDO_QueryHubErrataFlags @ 0x1C0069FFC
 * Callers:
 *     HUBHSM_QueryingForHubHackFlags @ 0x1C0007950 (HUBHSM_QueryingForHubHackFlags.c)
 * Callees:
 *     RtlStringCchPrintfA @ 0x1C0001008 (RtlStringCchPrintfA.c)
 *     HUBMISC_ConvertUsbDeviceIdsToString @ 0x1C002A908 (HUBMISC_ConvertUsbDeviceIdsToString.c)
 *     __security_check_cookie @ 0x1C0037C60 (__security_check_cookie.c)
 *     HUBREG_QueryUsbHardwareVerifierValue @ 0x1C006EA34 (HUBREG_QueryUsbHardwareVerifierValue.c)
 *     HUBREG_QueryHubErrataFlags @ 0x1C006FABC (HUBREG_QueryHubErrataFlags.c)
 */

__int64 __fastcall HUBFDO_QueryHubErrataFlags(__int64 a1)
{
  int v2; // ecx
  int v3; // ecx
  int v4; // ebx
  char v6[4]; // [rsp+40h] [rbp-20h] BYREF
  char v7; // [rsp+44h] [rbp-1Ch]
  char v8[4]; // [rsp+48h] [rbp-18h] BYREF
  char v9; // [rsp+4Ch] [rbp-14h]
  char pszDest[4]; // [rsp+50h] [rbp-10h] BYREF
  char v11; // [rsp+54h] [rbp-Ch]

  if ( *(_BYTE *)(a1 + 232) )
  {
    v4 = a1 + 2424;
    HUBMISC_ConvertUsbDeviceIdsToString((unsigned __int16 *)(a1 + 2424), pszDest, v8, v6);
    v3 = v4;
  }
  else
  {
    v2 = *(_DWORD *)(a1 + 160) - 1;
    if ( v2 )
    {
      if ( v2 == 1 )
      {
        *(_DWORD *)pszDest = *(_DWORD *)(a1 + 168);
        v11 = *(_BYTE *)(a1 + 172);
        *(_DWORD *)v8 = *(_DWORD *)(a1 + 173);
        v9 = *(_BYTE *)(a1 + 177);
        *(_DWORD *)v6 = *(_DWORD *)(a1 + 178);
        v7 = *(_BYTE *)(a1 + 182);
      }
      else
      {
        RtlStringCchPrintfA(pszDest, 5uLL, "%04X", 0x7FFFFFFF);
        RtlStringCchPrintfA(v8, 5uLL, "%04X", 0x7FFFFFFF);
        RtlStringCchPrintfA(v6, 5uLL, "%04X", 0);
      }
    }
    else
    {
      RtlStringCchPrintfA(pszDest, 5uLL, "%04X", *(_DWORD *)(a1 + 168));
      RtlStringCchPrintfA(v8, 5uLL, "%04X", *(_DWORD *)(a1 + 172));
      RtlStringCchPrintfA(v6, 5uLL, "%04X", *(unsigned __int16 *)(a1 + 176));
    }
    v3 = a1 + 2424;
  }
  HUBREG_QueryUsbHardwareVerifierValue(
    v3,
    (unsigned int)pszDest,
    (unsigned int)v8,
    (unsigned int)v6,
    (__int64)&g_HwVerifierHubName,
    *(_QWORD *)(a1 + 2488),
    a1 + 2560);
  return (((int)HUBREG_QueryHubErrataFlags(a1, pszDest, v8, v6) >> 31) & 0xFFFFFFF8) + 2053;
}
