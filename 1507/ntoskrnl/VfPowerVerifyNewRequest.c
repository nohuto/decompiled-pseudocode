/*
 * XREFs of VfPowerVerifyNewRequest @ 0x14074DB84
 * Callers:
 *     <none>
 * Callees:
 *     RtlStringCbPrintfA @ 0x14016326C (RtlStringCbPrintfA.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     VfUtilDbgPrint @ 0x14025A0F4 (VfUtilDbgPrint.c)
 *     ViErrorDisplayDescription @ 0x140744384 (ViErrorDisplayDescription.c)
 *     ViErrorFinishReport @ 0x1407443D4 (ViErrorFinishReport.c)
 */

void __fastcall VfPowerVerifyNewRequest(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, const void *a6)
{
  const void *v6; // rdi
  int v7; // esi
  char pszDest[64]; // [rsp+30h] [rbp-58h] BYREF

  v6 = *(const void **)a1;
  v7 = *(_DWORD *)(*(_QWORD *)a1 + 48LL);
  if ( v7 != -1073741637 )
  {
    ViErrorDisplayDescription(527);
    if ( RtlStringCbPrintfA(pszDest, 0x40uLL, "CulpritAddress = %p, Irp = %p.\n", a6, v6) >= 0 )
      VfUtilDbgPrint(pszDest);
    ViErrorFinishReport(527, (ULONG_PTR)a6, (ULONG_PTR)v6, 0LL);
    if ( v7 < 0 )
      *(_DWORD *)(a5 + 4) |= 0x2000000u;
  }
}
