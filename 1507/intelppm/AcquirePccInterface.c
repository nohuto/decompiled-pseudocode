/*
 * XREFs of AcquirePccInterface @ 0x1C00149D8
 * Callers:
 *     ProcLibDeviceStart @ 0x1C0012314 (ProcLibDeviceStart.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0002260 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00025C0 (memset.c)
 *     GetPccInternalInterfaceInfo @ 0x1C001CFA4 (GetPccInternalInterfaceInfo.c)
 */

__int64 __fastcall AcquirePccInterface(__int64 a1)
{
  __int64 v2; // rax
  signed int PccInternalInterfaceInfo; // ebx
  char v5; // cl
  unsigned int v6; // ecx

  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01015 + 2504))(
    WdfDriverGlobals,
    qword_1C000D9C8,
    0LL);
  if ( qword_1C000DE30 )
  {
    PccInternalInterfaceInfo = 0;
  }
  else
  {
    dword_1C000DE08 = -1;
    v2 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 1632))(WdfDriverGlobals, a1);
    PccInternalInterfaceInfo = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, GUID *, void *, __int16, __int16, _QWORD))(WdfFunctions_01015 + 1048))(
                                 WdfDriverGlobals,
                                 v2,
                                 &GUID_PCC_INTERFACE_STANDARD,
                                 &unk_1C000DDE8,
                                 128,
                                 1,
                                 0LL);
    if ( PccInternalInterfaceInfo >= 0 )
    {
      PccInternalInterfaceInfo = -1073741811;
      if ( *(_DWORD *)qword_1C000DE30 == 609239875
        && *(_WORD *)(qword_1C000DE30 + 4) >= 0x28u
        && ((v5 = *(_BYTE *)(qword_1C000DE30 + 6)) == 0 && *(_BYTE *)(qword_1C000DE30 + 7) >= 6u
         || v5 == 1 && !*(_BYTE *)(qword_1C000DE30 + 7)) )
      {
        v6 = *(_DWORD *)(qword_1C000DE30 + 36);
        if ( v6 <= *(_DWORD *)(qword_1C000DE30 + 28) )
          PccInternalInterfaceInfo = v6 < *(_DWORD *)(qword_1C000DE30 + 32) ? 0xC000000D : 0;
      }
      if ( PccInternalInterfaceInfo < 0 )
        goto LABEL_17;
      if ( dword_1C000DD7C == 1 )
        PccInternalInterfaceInfo = GetPccInternalInterfaceInfo(a1);
      if ( PccInternalInterfaceInfo < 0 )
      {
LABEL_17:
        ((void (__fastcall *)(__int64))qword_1C000DE00)(qword_1C000DDF0);
        memset(&unk_1C000DDE8, 0, 0x80uLL);
      }
    }
  }
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2512))(WdfDriverGlobals, qword_1C000D9C8);
  return (unsigned int)PccInternalInterfaceInfo;
}
