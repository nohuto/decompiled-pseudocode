/*
 * XREFs of VfPnpVerifyIrpStackDownward @ 0x14074CB70
 * Callers:
 *     <none>
 * Callees:
 *     RtlStringCbPrintfA @ 0x14016326C (RtlStringCbPrintfA.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     VfUtilDbgPrint @ 0x14025A0F4 (VfUtilDbgPrint.c)
 *     VfGetPristineDriverInit @ 0x140740DB8 (VfGetPristineDriverInit.c)
 *     IovUtilIsDeviceObjectMarked @ 0x1407438BC (IovUtilIsDeviceObjectMarked.c)
 *     IovUtilIsWdmStack @ 0x140743A30 (IovUtilIsWdmStack.c)
 *     ViErrorDisplayDescription @ 0x140744384 (ViErrorDisplayDescription.c)
 *     ViErrorFinishReport @ 0x1407443D4 (ViErrorFinishReport.c)
 *     ViPnpVerifyMinorWasProcessedProperly @ 0x14074D3D8 (ViPnpVerifyMinorWasProcessedProperly.c)
 */

__int64 __fastcall VfPnpVerifyIrpStackDownward(
        __int64 a1,
        _QWORD *a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        const void *a7)
{
  __int64 result; // rax
  _DWORD *v10; // rbx
  __int64 v11; // r14
  int v12; // esi
  BOOL v13; // r13d
  __int64 v14; // rcx
  PDRIVER_INITIALIZE PristineDriverInit; // r14
  __int64 v16; // r8
  int IsDeviceObjectMarked; // eax
  int v18; // r9d
  int v19; // r10d
  __int64 v20; // [rsp+38h] [rbp-A0h]
  char pszDest[64]; // [rsp+50h] [rbp-88h] BYREF

  result = IovUtilIsWdmStack(a2);
  if ( (_DWORD)result )
  {
    v10 = *(_DWORD **)a1;
    v11 = *(_QWORD *)(a1 + 240);
    v20 = v11;
    v12 = v10[12];
    v13 = v12 != *(_DWORD *)(a5 + 96);
    if ( *(_DWORD *)(v11 + 56) == 3 )
    {
      ViErrorDisplayDescription(529);
      if ( RtlStringCbPrintfA(pszDest, 0x40uLL, "CulpritAddress = %p, Irp = %p.\n", a7, v10) >= 0 )
        VfUtilDbgPrint(pszDest);
      ViErrorFinishReport(529, (ULONG_PTR)a7, (ULONG_PTR)v10, 0LL);
    }
    v14 = a2[1];
    result = (__int64)IopInvalidDeviceRequest;
    if ( *(__int64 (__fastcall **)(__int64, IRP *))(v14 + 328) == IopInvalidDeviceRequest )
    {
      *(_DWORD *)(a5 + 4) |= 0x1000000u;
      PristineDriverInit = VfGetPristineDriverInit((struct _DRIVER_OBJECT *)v14);
      ViErrorDisplayDescription(543);
      if ( RtlStringCbPrintfA(pszDest, 0x40uLL, "CulpritAddress = %p, Irp = %p.\n", PristineDriverInit, v10) >= 0 )
        VfUtilDbgPrint(pszDest);
      result = ViErrorFinishReport(543, (ULONG_PTR)PristineDriverInit, (ULONG_PTR)v10, 0LL);
      *(_DWORD *)(a6 + 4) |= 0x80000000;
      v11 = v20;
    }
    if ( a3 )
    {
      if ( v12 < 0 )
      {
        if ( v12 == -1073741637 )
        {
          if ( v13 && (*(_DWORD *)(a5 + 4) & 0x2000000) == 0 )
          {
            ViErrorDisplayDescription(534);
            if ( RtlStringCbPrintfA(pszDest, 0x40uLL, "CulpritAddress = %p, Irp = %p.\n", a7, v10) >= 0 )
              VfUtilDbgPrint(pszDest);
            result = ViErrorFinishReport(534, (ULONG_PTR)a7, (ULONG_PTR)v10, 0LL);
            *(_DWORD *)(a5 + 4) |= 0x2000000u;
          }
        }
        else if ( (*(_DWORD *)(a5 + 4) & 0x2000000) == 0 )
        {
          ViErrorDisplayDescription(533);
          if ( RtlStringCbPrintfA(pszDest, 0x40uLL, "CulpritAddress = %p, Irp = %p.\n", a7, v10) >= 0 )
            VfUtilDbgPrint(pszDest);
          result = ViErrorFinishReport(533, (ULONG_PTR)a7, (ULONG_PTR)v10, 0LL);
          *(_DWORD *)(a5 + 4) |= 0x2000000u;
        }
      }
      if ( *(_QWORD *)(v11 + 48) )
      {
        result = IovUtilIsDeviceObjectMarked(*(_QWORD *)(v11 + 48), 2);
        if ( (_DWORD)result )
        {
          IsDeviceObjectMarked = IovUtilIsDeviceObjectMarked(v16, 3);
          return ViPnpVerifyMinorWasProcessedProperly(
                   (_DWORD)v10,
                   v19,
                   IsDeviceObjectMarked == 0 ? 4 : 0,
                   v18,
                   (__int64)a7,
                   1);
        }
      }
    }
  }
  return result;
}
