/*
 * XREFs of VfWmiVerifyIrpStackDownward @ 0x14074DCEC
 * Callers:
 *     <none>
 * Callees:
 *     RtlStringCbPrintfA @ 0x14016326C (RtlStringCbPrintfA.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     VfUtilDbgPrint @ 0x14025A0F4 (VfUtilDbgPrint.c)
 *     VfGetPristineDriverInit @ 0x140740DB8 (VfGetPristineDriverInit.c)
 *     ViErrorDisplayDescription @ 0x140744384 (ViErrorDisplayDescription.c)
 *     ViErrorFinishReport @ 0x1407443D4 (ViErrorFinishReport.c)
 */

__int64 __fastcall VfWmiVerifyIrpStackDownward(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        const void *a7)
{
  const void *v8; // rbx
  __int64 v9; // rcx
  __int64 result; // rax
  PDRIVER_INITIALIZE PristineDriverInit; // rsi
  char pszDest[64]; // [rsp+30h] [rbp-68h] BYREF

  v8 = *(const void **)a1;
  if ( *(_DWORD *)(*(_QWORD *)(a1 + 240) + 56LL) == 3 )
  {
    ViErrorDisplayDescription(529);
    if ( RtlStringCbPrintfA(pszDest, 0x40uLL, "CulpritAddress = %p, Irp = %p.\n", a7, v8) >= 0 )
      VfUtilDbgPrint(pszDest);
    ViErrorFinishReport(529, (ULONG_PTR)a7, (ULONG_PTR)v8, 0LL);
  }
  v9 = *(_QWORD *)(a2 + 8);
  result = (__int64)IopInvalidDeviceRequest;
  if ( *(__int64 (__fastcall **)(__int64, IRP *))(v9 + 296) == IopInvalidDeviceRequest )
  {
    *(_DWORD *)(a5 + 4) |= 0x1000000u;
    PristineDriverInit = VfGetPristineDriverInit((struct _DRIVER_OBJECT *)v9);
    ViErrorDisplayDescription(543);
    if ( RtlStringCbPrintfA(pszDest, 0x40uLL, "CulpritAddress = %p, Irp = %p.\n", PristineDriverInit, v8) >= 0 )
      VfUtilDbgPrint(pszDest);
    result = ViErrorFinishReport(543, (ULONG_PTR)PristineDriverInit, (ULONG_PTR)v8, 0LL);
    *(_DWORD *)(a6 + 4) |= 0x80000000;
  }
  return result;
}
