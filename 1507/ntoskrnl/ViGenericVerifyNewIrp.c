/*
 * XREFs of ViGenericVerifyNewIrp @ 0x1407382DC
 * Callers:
 *     <none>
 * Callees:
 *     RtlStringCbPrintfA @ 0x14016326C (RtlStringCbPrintfA.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     VfUtilDbgPrint @ 0x14025A0F4 (VfUtilDbgPrint.c)
 *     ViErrorDisplayDescription @ 0x140744384 (ViErrorDisplayDescription.c)
 *     ViErrorFinishReport @ 0x1407443D4 (ViErrorFinishReport.c)
 */

void __fastcall ViGenericVerifyNewIrp(__int64 a1, __int64 a2, __int64 a3, __int64 a4, const void *a5)
{
  __int64 v7; // rcx
  int v8; // eax
  __int64 v9; // rdx
  _QWORD *v10; // rcx
  unsigned __int8 v11; // di
  char pszDest[96]; // [rsp+30h] [rbp-78h] BYREF

  if ( (*(_QWORD *)(a2 + 72) || *(_QWORD *)(a2 + 80))
    && ((*(_DWORD *)(a2 + 16) & 0x440) == 0 || (*(_DWORD *)(a2 + 16) & 0x402) == 0) )
  {
    v7 = *(_QWORD *)(a2 + 184);
    v8 = *(char *)(a2 + 67) - 1;
    v9 = (unsigned int)*(char *)(a2 + 66);
    if ( v8 > (int)v9 )
    {
LABEL_8:
      v11 = *(_BYTE *)(a1 + 60);
      if ( v11 )
      {
        ViErrorDisplayDescription(770LL, v9, a1);
        if ( RtlStringCbPrintfA(
               pszDest,
               0x5BuLL,
               "CulpritAddress = %p, Irp = %p, IRQL = %u.\n",
               a5,
               (const void *)a2,
               v11) >= 0 )
          VfUtilDbgPrint(pszDest);
        ViErrorFinishReport(770LL, a5, a2, v11);
      }
    }
    else
    {
      v10 = (_QWORD *)(v7 - 16);
      while ( !*v10 )
      {
        v10 += 9;
        if ( ++v8 > (int)v9 )
          goto LABEL_8;
      }
    }
  }
}
