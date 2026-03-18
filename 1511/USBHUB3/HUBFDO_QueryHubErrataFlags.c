/*
 * XREFs of HUBFDO_QueryHubErrataFlags @ 0x1C0066274
 * Callers:
 *     HUBHSM_QueryingForHubHackFlags @ 0x1C0007560 (HUBHSM_QueryingForHubHackFlags.c)
 * Callees:
 *     RtlStringCchPrintfA @ 0x1C0001000 (RtlStringCchPrintfA.c)
 *     HUBMISC_ConvertUsbDeviceIdsToString @ 0x1C0027FF8 (HUBMISC_ConvertUsbDeviceIdsToString.c)
 *     __security_check_cookie @ 0x1C0034B70 (__security_check_cookie.c)
 *     HUBREG_QueryUsbHardwareVerifierValue @ 0x1C006A5C8 (HUBREG_QueryUsbHardwareVerifierValue.c)
 *     HUBREG_QueryHubErrataFlags @ 0x1C006B570 (HUBREG_QueryHubErrataFlags.c)
 */

__int64 __fastcall HUBFDO_QueryHubErrataFlags(__int64 a1)
{
  int v2; // ecx
  int v3; // ecx
  int v4; // ebx
  int HubErrataFlags; // ecx
  __int64 result; // rax
  char v7[4]; // [rsp+40h] [rbp-20h] BYREF
  char v8; // [rsp+44h] [rbp-1Ch]
  char v9[4]; // [rsp+48h] [rbp-18h] BYREF
  char v10; // [rsp+4Ch] [rbp-14h]
  char pszDest[4]; // [rsp+50h] [rbp-10h] BYREF
  char v12; // [rsp+54h] [rbp-Ch]

  if ( *(_BYTE *)(a1 + 216) )
  {
    v4 = a1 + 2400;
    HUBMISC_ConvertUsbDeviceIdsToString((unsigned __int16 *)(a1 + 2400), pszDest, v7, v9);
    v3 = v4;
  }
  else
  {
    v2 = *(_DWORD *)(a1 + 152) - 1;
    if ( v2 )
    {
      if ( v2 == 1 )
      {
        *(_DWORD *)pszDest = *(_DWORD *)(a1 + 156);
        v12 = *(_BYTE *)(a1 + 160);
        *(_DWORD *)v7 = *(_DWORD *)(a1 + 161);
        v8 = *(_BYTE *)(a1 + 165);
        *(_DWORD *)v9 = *(_DWORD *)(a1 + 166);
        v10 = *(_BYTE *)(a1 + 170);
      }
      else
      {
        RtlStringCchPrintfA(pszDest, 5uLL, "%04X", 0x7FFFFFFF);
        RtlStringCchPrintfA(v7, 5uLL, "%04X", 0x7FFFFFFF);
        RtlStringCchPrintfA(v9, 5uLL, "%04X", 0);
      }
    }
    else
    {
      RtlStringCchPrintfA(pszDest, 5uLL, "%04X", *(_DWORD *)(a1 + 156));
      RtlStringCchPrintfA(v7, 5uLL, "%04X", *(_DWORD *)(a1 + 160));
      RtlStringCchPrintfA(v9, 5uLL, "%04X", *(unsigned __int16 *)(a1 + 164));
    }
    v3 = a1 + 2400;
  }
  HUBREG_QueryUsbHardwareVerifierValue(
    v3,
    (unsigned int)pszDest,
    (unsigned int)v7,
    (unsigned int)v9,
    (__int64)&g_HwVerifierHubName,
    *(_QWORD *)(a1 + 2464),
    a1 + 2536);
  HubErrataFlags = HUBREG_QueryHubErrataFlags(a1, pszDest, v7, v9);
  result = 2045LL;
  if ( HubErrataFlags >= 0 )
    return 2053LL;
  return result;
}
