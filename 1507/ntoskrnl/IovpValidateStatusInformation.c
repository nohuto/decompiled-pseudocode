/*
 * XREFs of IovpValidateStatusInformation @ 0x140740C68
 * Callers:
 *     IovpCompleteRequest2 @ 0x1407404B4 (IovpCompleteRequest2.c)
 * Callees:
 *     RtlStringCbPrintfA @ 0x14016326C (RtlStringCbPrintfA.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     VfUtilDbgPrint @ 0x14025A0F4 (VfUtilDbgPrint.c)
 *     ViErrorDisplayDescription @ 0x140744384 (ViErrorDisplayDescription.c)
 *     ViErrorFinishReport @ 0x1407443D4 (ViErrorFinishReport.c)
 */

char __fastcall IovpValidateStatusInformation(__int64 a1, __int64 a2, __int64 a3, const void *a4)
{
  unsigned __int64 v4; // rax
  char pszDest[64]; // [rsp+30h] [rbp-58h] BYREF

  LODWORD(v4) = *(_DWORD *)(a2 + 16);
  if ( (v4 & 0x10) == 0 )
    return v4;
  if ( (v4 & 0x40) == 0 )
    return v4;
  if ( (v4 & 0x20) == 0 )
    return v4;
  LODWORD(v4) = *(_DWORD *)(a2 + 48);
  if ( (_DWORD)v4 == -2147483626 )
    return v4;
  LODWORD(v4) = v4 & 0xC0000000;
  if ( (_DWORD)v4 == -1073741824 )
    return v4;
  LOBYTE(v4) = *(_BYTE *)a3;
  if ( *(_BYTE *)a3 != 3 && (_BYTE)v4 != 5 && (_BYTE)v4 != 7 && (_BYTE)v4 != 10 )
  {
    if ( (unsigned __int8)v4 <= 0xBu )
      return v4;
    if ( (unsigned __int8)v4 > 0xDu )
    {
      if ( (unsigned __int8)v4 <= 0xFu )
      {
        v4 = *(_QWORD *)(a1 + 200);
        if ( !v4 || v4 != *(_QWORD *)(a2 + 24) )
          return v4;
        v4 = *(unsigned int *)(a1 + 208);
        goto LABEL_15;
      }
      if ( (_BYTE)v4 != 25 )
        return v4;
    }
  }
  v4 = *(unsigned int *)(a3 + 8);
LABEL_15:
  if ( *(_QWORD *)(a2 + 56) > v4 )
  {
    ViErrorDisplayDescription(786LL, 3221225472LL, a3);
    if ( RtlStringCbPrintfA(pszDest, 0x40uLL, "CulpritAddress = %p, Irp = %p.\n", a4, (const void *)a2) >= 0 )
      VfUtilDbgPrint(pszDest);
    LOBYTE(v4) = ViErrorFinishReport(786LL, a4, a2, 0LL);
  }
  return v4;
}
