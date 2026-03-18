/*
 * XREFs of VfPowerVerifyIrpStackDownward @ 0x14074D8E0
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

__int64 __fastcall VfPowerVerifyIrpStackDownward(
        _QWORD *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        const void *a7)
{
  const void *v7; // rbx
  int v10; // esi
  BOOL v11; // r13d
  __int64 v12; // rcx
  __int64 result; // rax
  PDRIVER_INITIALIZE PristineDriverInit; // r14
  char pszDest[64]; // [rsp+30h] [rbp-88h] BYREF

  v7 = (const void *)*a1;
  v10 = *(_DWORD *)(*a1 + 48LL);
  v11 = v10 != *(_DWORD *)(a5 + 96);
  if ( *(_DWORD *)(a1[30] + 56LL) == 3 )
  {
    ViErrorDisplayDescription(529);
    if ( RtlStringCbPrintfA(pszDest, 0x40uLL, "CulpritAddress = %p, Irp = %p.\n", a7, v7) >= 0 )
      VfUtilDbgPrint(pszDest);
    ViErrorFinishReport(529, (ULONG_PTR)a7, (ULONG_PTR)v7, 0LL);
  }
  v12 = *(_QWORD *)(a2 + 8);
  result = (__int64)IopInvalidDeviceRequest;
  if ( *(__int64 (__fastcall **)(__int64, IRP *))(v12 + 288) == IopInvalidDeviceRequest )
  {
    *(_DWORD *)(a5 + 4) |= 0x1000000u;
    PristineDriverInit = VfGetPristineDriverInit((struct _DRIVER_OBJECT *)v12);
    ViErrorDisplayDescription(543);
    if ( RtlStringCbPrintfA(pszDest, 0x40uLL, "CulpritAddress = %p, Irp = %p.\n", PristineDriverInit, v7) >= 0 )
      VfUtilDbgPrint(pszDest);
    result = ViErrorFinishReport(543, (ULONG_PTR)PristineDriverInit, (ULONG_PTR)v7, 0LL);
    *(_DWORD *)(a6 + 4) |= 0x80000000;
  }
  if ( a3 && v10 < 0 )
  {
    if ( v10 == -1073741637 )
    {
      if ( v11 )
      {
        ViErrorDisplayDescription(538);
        if ( RtlStringCbPrintfA(pszDest, 0x40uLL, "CulpritAddress = %p, Irp = %p.\n", a7, v7) >= 0 )
          VfUtilDbgPrint(pszDest);
        return ViErrorFinishReport(538, (ULONG_PTR)a7, (ULONG_PTR)v7, 0LL);
      }
    }
    else if ( (*(_DWORD *)(a5 + 4) & 0x2000000) == 0 )
    {
      ViErrorDisplayDescription(537);
      if ( RtlStringCbPrintfA(pszDest, 0x40uLL, "CulpritAddress = %p, Irp = %p.\n", a7, v7) >= 0 )
        VfUtilDbgPrint(pszDest);
      result = ViErrorFinishReport(537, (ULONG_PTR)a7, (ULONG_PTR)v7, 0LL);
      *(_DWORD *)(a5 + 4) |= 0x2000000u;
    }
  }
  return result;
}
