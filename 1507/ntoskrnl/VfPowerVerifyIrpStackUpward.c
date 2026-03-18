/*
 * XREFs of VfPowerVerifyIrpStackUpward @ 0x14074DAE8
 * Callers:
 *     <none>
 * Callees:
 *     RtlStringCbPrintfA @ 0x14016326C (RtlStringCbPrintfA.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     VfUtilDbgPrint @ 0x14025A0F4 (VfUtilDbgPrint.c)
 *     ViErrorDisplayDescription @ 0x140744384 (ViErrorDisplayDescription.c)
 *     ViErrorFinishReport @ 0x1407443D4 (ViErrorFinishReport.c)
 */

void __fastcall VfPowerVerifyIrpStackUpward(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  const void *v4; // rbx
  const void *v5; // rdi
  char pszDest[64]; // [rsp+30h] [rbp-58h] BYREF

  v4 = *(const void **)a1;
  v5 = *(const void **)(a4 + 40);
  if ( *(_DWORD *)(*(_QWORD *)a1 + 48LL) == -1073741637 && *(_DWORD *)(a3 + 96) != -1073741637 )
  {
    ViErrorDisplayDescription(538);
    if ( RtlStringCbPrintfA(pszDest, 0x40uLL, "CulpritAddress = %p, Irp = %p.\n", v5, v4) >= 0 )
      VfUtilDbgPrint(pszDest);
    ViErrorFinishReport(538, (ULONG_PTR)v5, (ULONG_PTR)v4, 0LL);
  }
}
