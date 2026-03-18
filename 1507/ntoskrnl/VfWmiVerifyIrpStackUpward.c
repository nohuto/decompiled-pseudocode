/*
 * XREFs of VfWmiVerifyIrpStackUpward @ 0x14074DE18
 * Callers:
 *     <none>
 * Callees:
 *     RtlStringCbPrintfA @ 0x14016326C (RtlStringCbPrintfA.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     VfUtilDbgPrint @ 0x14025A0F4 (VfUtilDbgPrint.c)
 *     VfDevObjIsDeviceRemoved @ 0x140742E88 (VfDevObjIsDeviceRemoved.c)
 *     ViErrorDisplayDescription @ 0x140744384 (ViErrorDisplayDescription.c)
 *     ViErrorFinishReport @ 0x1407443D4 (ViErrorFinishReport.c)
 */

char __fastcall VfWmiVerifyIrpStackUpward(const void **a1, __int64 a2, __int64 a3, __int64 a4, int a5)
{
  int v5; // eax
  const void *v7; // rdi
  const void *v8; // rsi
  const void *v9; // rbx
  char pszDest[112]; // [rsp+30h] [rbp-98h] BYREF

  LOBYTE(v5) = MmVerifierData;
  if ( (MmVerifierData & 0x10) != 0 )
  {
    v7 = *a1;
    v8 = *(const void **)(a4 + 40);
    if ( a5 )
    {
      v5 = *(_DWORD *)(a4 + 4);
      if ( v5 >= 0 && ((*(_DWORD *)(a4 + 4) >> 28) & 1) == 0 && *(_QWORD *)(a2 + 8) != *(_QWORD *)(a2 + 40) )
      {
        LOBYTE(v5) = VfDevObjIsDeviceRemoved();
        if ( !(_BYTE)v5 )
        {
          LOBYTE(v5) = VfIoSwitchedOffNoReboot;
          if ( !VfIoSwitchedOffNoReboot )
          {
            v9 = *(const void **)(a2 + 8);
            ViErrorDisplayDescription(544);
            if ( RtlStringCbPrintfA(pszDest, 0x63uLL, "CulpritAddress = %p, Irp = %p, DeviceObject = %p.\n", v8, v7, v9) >= 0 )
              VfUtilDbgPrint(pszDest);
            LOBYTE(v5) = ViErrorFinishReport(544, (ULONG_PTR)v8, (ULONG_PTR)v7, (__int64)v9);
          }
        }
      }
    }
  }
  return v5;
}
