/*
 * XREFs of VfPnpVerifyNewRequest @ 0x14074D1B8
 * Callers:
 *     <none>
 * Callees:
 *     RtlStringCbPrintfA @ 0x14016326C (RtlStringCbPrintfA.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     MmIsNonPagedSystemAddressValid @ 0x1402175B8 (MmIsNonPagedSystemAddressValid.c)
 *     VfUtilDbgPrint @ 0x14025A0F4 (VfUtilDbgPrint.c)
 *     ViErrorDisplayDescription @ 0x140744384 (ViErrorDisplayDescription.c)
 *     ViErrorFinishReport @ 0x1407443D4 (ViErrorFinishReport.c)
 */

void __fastcall VfPnpVerifyNewRequest(_DWORD *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, const void *a6)
{
  const void *v6; // rbx
  int v8; // r14d
  _WORD *v9; // rsi
  char pszDest[64]; // [rsp+30h] [rbp-78h] BYREF

  v6 = *(const void **)a1;
  v8 = *(_DWORD *)(*(_QWORD *)a1 + 48LL);
  if ( v8 != -1073741637 )
  {
    if ( *(_BYTE *)(a4 + 1) != 13 && (a1[14] & 0x20) == 0 )
    {
      ViErrorDisplayDescription(526);
      if ( RtlStringCbPrintfA(pszDest, 0x40uLL, "CulpritAddress = %p, Irp = %p.\n", a6, v6) >= 0 )
        VfUtilDbgPrint(pszDest);
      ViErrorFinishReport(526, (ULONG_PTR)a6, (ULONG_PTR)v6, 0LL);
    }
    if ( v8 < 0 )
      *(_DWORD *)(a5 + 4) |= 0x2000000u;
  }
  if ( *(_BYTE *)(a4 + 1) == 9 )
  {
    v9 = *(_WORD **)(a4 + 8);
    if ( MmIsNonPagedSystemAddressValid(v9) )
    {
      if ( !v9[1] )
      {
        ViErrorDisplayDescription(563);
        if ( RtlStringCbPrintfA(pszDest, 0x40uLL, "CulpritAddress = %p, Irp = %p.\n", a6, v6) >= 0 )
          VfUtilDbgPrint(pszDest);
        ViErrorFinishReport(563, (ULONG_PTR)a6, (ULONG_PTR)v6, 0LL);
      }
      if ( *v9 < 0x40u )
      {
        ViErrorDisplayDescription(564);
        if ( RtlStringCbPrintfA(pszDest, 0x40uLL, "CulpritAddress = %p, Irp = %p.\n", a6, v6) >= 0 )
          VfUtilDbgPrint(pszDest);
        ViErrorFinishReport(564, (ULONG_PTR)a6, (ULONG_PTR)v6, 0LL);
      }
      if ( *((_DWORD *)v9 + 2) != -1 )
      {
        ViErrorDisplayDescription(565);
        if ( RtlStringCbPrintfA(pszDest, 0x40uLL, "CulpritAddress = %p, Irp = %p.\n", a6, v6) >= 0 )
          VfUtilDbgPrint(pszDest);
        ViErrorFinishReport(565, (ULONG_PTR)a6, (ULONG_PTR)v6, 0LL);
      }
      if ( *((_DWORD *)v9 + 3) != -1 )
      {
        ViErrorDisplayDescription(566);
        if ( RtlStringCbPrintfA(pszDest, 0x40uLL, "CulpritAddress = %p, Irp = %p.\n", a6, v6) >= 0 )
          VfUtilDbgPrint(pszDest);
        ViErrorFinishReport(566, (ULONG_PTR)a6, (ULONG_PTR)v6, 0LL);
      }
    }
  }
}
