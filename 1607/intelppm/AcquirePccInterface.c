/*
 * XREFs of AcquirePccInterface @ 0x1C0017190
 * Callers:
 *     ProcLibDeviceStart @ 0x1C001403C (ProcLibDeviceStart.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0002A70 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0002DC0 (memset.c)
 *     GetPccInternalInterfaceInfo @ 0x1C001E494 (GetPccInternalInterfaceInfo.c)
 */

__int64 __fastcall AcquirePccInterface(__int64 a1)
{
  __int64 v2; // rax
  signed int PccInternalInterfaceInfo; // ebx
  char v5; // cl
  unsigned int v6; // ecx

  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01015 + 2504))(
    WdfDriverGlobals,
    qword_1C000ECF8,
    0LL);
  if ( qword_1C000F1B8 )
  {
    PccInternalInterfaceInfo = 0;
  }
  else
  {
    dword_1C000F190 = -1;
    v2 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 1632))(WdfDriverGlobals, a1);
    PccInternalInterfaceInfo = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, GUID *, void *, __int16, __int16, _QWORD))(WdfFunctions_01015 + 1048))(
                                 WdfDriverGlobals,
                                 v2,
                                 &GUID_PCC_INTERFACE_STANDARD,
                                 &unk_1C000F170,
                                 128,
                                 1,
                                 0LL);
    if ( PccInternalInterfaceInfo >= 0 )
    {
      PccInternalInterfaceInfo = -1073741811;
      if ( *(_DWORD *)qword_1C000F1B8 == 609239875
        && *(_WORD *)(qword_1C000F1B8 + 4) >= 0x28u
        && ((v5 = *(_BYTE *)(qword_1C000F1B8 + 6)) == 0 && *(_BYTE *)(qword_1C000F1B8 + 7) >= 6u
         || v5 == 1 && !*(_BYTE *)(qword_1C000F1B8 + 7)) )
      {
        v6 = *(_DWORD *)(qword_1C000F1B8 + 36);
        if ( v6 <= *(_DWORD *)(qword_1C000F1B8 + 28) )
          PccInternalInterfaceInfo = v6 < *(_DWORD *)(qword_1C000F1B8 + 32) ? 0xC000000D : 0;
      }
      if ( PccInternalInterfaceInfo < 0 )
        goto LABEL_17;
      if ( dword_1C000F104 == 1 )
        PccInternalInterfaceInfo = GetPccInternalInterfaceInfo(a1);
      if ( PccInternalInterfaceInfo < 0 )
      {
LABEL_17:
        ((void (__fastcall *)(__int64))qword_1C000F188)(qword_1C000F178);
        memset(&unk_1C000F170, 0, 0x80uLL);
      }
    }
  }
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2512))(WdfDriverGlobals, qword_1C000ECF8);
  return (unsigned int)PccInternalInterfaceInfo;
}
