/*
 * XREFs of FireWmiEvent @ 0x1C0004938
 * Callers:
 *     AcpiCStateNotifyWorker @ 0x1C001D2E0 (AcpiCStateNotifyWorker.c)
 *     AcpiPStateNotifyWorker @ 0x1C001DAA0 (AcpiPStateNotifyWorker.c)
 *     AcpiTStateNotifyWorker @ 0x1C001DC10 (AcpiTStateNotifyWorker.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00029B0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall FireWmiEvent(_QWORD *a1, __int64 a2)
{
  unsigned int v4; // edi
  __int64 v5; // rax

  v4 = -1073741823;
  if ( *((_BYTE *)a1 + 12) )
  {
    v5 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 3016))(WdfDriverGlobals, *a1);
    if ( (*(unsigned __int8 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64))(WdfFunctions_01015 + 2968))(
           WdfDriverGlobals,
           v5,
           1LL) )
    {
      return (*(unsigned int (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, _QWORD, __int64))(WdfFunctions_01015 + 3024))(
               WdfDriverGlobals,
               *a1,
               *((unsigned int *)a1 + 2),
               a2);
    }
  }
  return v4;
}
