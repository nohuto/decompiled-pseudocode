/*
 * XREFs of VerifierNtCreateFile @ 0x14071C968
 * Callers:
 *     <none>
 * Callees:
 *     RtlStringCbPrintfA @ 0x140139F84 (RtlStringCbPrintfA.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     VfUtilDbgPrint @ 0x140222478 (VfUtilDbgPrint.c)
 *     ViErrorDisplayDescription @ 0x14070EBA4 (ViErrorDisplayDescription.c)
 *     ViErrorFinishReport @ 0x14070EBF4 (ViErrorFinishReport.c)
 */

__int64 __fastcall VerifierNtCreateFile(
        __int64 a1,
        unsigned int a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        int a6,
        int a7,
        int a8,
        int a9,
        __int64 a10,
        int a11)
{
  char pszDest[40]; // [rsp+60h] [rbp-68h] BYREF
  const void *retaddr; // [rsp+C8h] [rbp+0h]

  if ( (MmVerifierData & 0x10) != 0 && KeGetCurrentIrql() )
  {
    ViErrorDisplayDescription(586);
    if ( RtlStringCbPrintfA(pszDest, 0x26uLL, "CulpritAddress = %p.\n", retaddr) >= 0 )
      VfUtilDbgPrint(pszDest);
    ViErrorFinishReport(586, (ULONG_PTR)retaddr, 0LL, 0LL);
  }
  return pXdvNtCreateFile(a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11);
}
