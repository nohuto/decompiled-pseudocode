/*
 * XREFs of VfIoInitializeIrp @ 0x1407414D0
 * Callers:
 *     IoReuseIrp @ 0x14010B380 (IoReuseIrp.c)
 *     IovInitializeIrp @ 0x140735344 (IovInitializeIrp.c)
 * Callees:
 *     RtlStringCbPrintfA @ 0x14016326C (RtlStringCbPrintfA.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     VfUtilDbgPrint @ 0x14025A0F4 (VfUtilDbgPrint.c)
 *     ViErrorDisplayDescription @ 0x140744384 (ViErrorDisplayDescription.c)
 *     ViErrorFinishReport @ 0x1407443D4 (ViErrorFinishReport.c)
 *     VfIrpDatabaseEntryFindAndLock @ 0x14074AAB0 (VfIrpDatabaseEntryFindAndLock.c)
 *     VfIrpDatabaseEntryReleaseLock @ 0x14074AC7C (VfIrpDatabaseEntryReleaseLock.c)
 */

__int64 __fastcall VfIoInitializeIrp(__int64 a1, const void *a2, char a3)
{
  __int64 result; // rax
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // rdi
  char pszDest[64]; // [rsp+30h] [rbp-68h] BYREF

  result = VfIrpDatabaseEntryFindAndLock(a1);
  v9 = result;
  if ( result )
  {
    if ( *(_QWORD *)(result + 240) )
    {
      ViErrorDisplayDescription(784LL, v7, v8);
      if ( RtlStringCbPrintfA(pszDest, 0x40uLL, "CulpritAddress = %p, Irp = %p.\n", a2, (const void *)a1) >= 0 )
        VfUtilDbgPrint(pszDest);
      ViErrorFinishReport(784LL, a2, a1, 0LL);
    }
    if ( !a3 && (*(_DWORD *)(v9 + 56) & 0x200000) != 0 && (*(_BYTE *)(a1 + 71) & 1) != 0 )
    {
      ViErrorDisplayDescription(525LL, v7, v8);
      if ( RtlStringCbPrintfA(pszDest, 0x40uLL, "CulpritAddress = %p, Irp = %p.\n", a2, (const void *)a1) >= 0 )
        VfUtilDbgPrint(pszDest);
      ViErrorFinishReport(525LL, a2, a1, 0LL);
    }
    if ( (*(_DWORD *)(a1 + 16) & 8) != 0 || (*(_DWORD *)(v9 + 56) & 0x1000) != 0 )
    {
      ViErrorDisplayDescription(785LL, v7, v8);
      if ( RtlStringCbPrintfA(pszDest, 0x40uLL, "CulpritAddress = %p, Irp = %p.\n", a2, (const void *)a1) >= 0 )
        VfUtilDbgPrint(pszDest);
      ViErrorFinishReport(785LL, a2, a1, 0LL);
    }
    return VfIrpDatabaseEntryReleaseLock(v9);
  }
  return result;
}
