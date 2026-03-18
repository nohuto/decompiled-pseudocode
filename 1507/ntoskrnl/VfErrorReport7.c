/*
 * XREFs of VfErrorReport7 @ 0x14074422C
 * Callers:
 *     PpvUtilFailDriver @ 0x1401FD690 (PpvUtilFailDriver.c)
 * Callees:
 *     RtlStringCbPrintfA @ 0x14016326C (RtlStringCbPrintfA.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     VfUtilDbgPrint @ 0x14025A0F4 (VfUtilDbgPrint.c)
 *     ViErrorDisplayDescription @ 0x140744384 (ViErrorDisplayDescription.c)
 *     ViErrorFinishReport @ 0x1407443D4 (ViErrorFinishReport.c)
 */

__int64 __fastcall VfErrorReport7(__int64 a1, const void *a2, const void *a3, const void *a4)
{
  char pszDest[112]; // [rsp+30h] [rbp-98h] BYREF

  ViErrorDisplayDescription(585LL, a2, a3);
  if ( RtlStringCbPrintfA(
         pszDest,
         0x6EuLL,
         "CulpritAddress = %p, DeviceObject1 = %p, DeviceObject2 = %p.\n",
         a2,
         a3,
         a4) >= 0 )
    VfUtilDbgPrint(pszDest);
  return ViErrorFinishReport(585LL, a2, a3, a4);
}
