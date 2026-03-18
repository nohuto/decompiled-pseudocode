/*
 * XREFs of ACPIWriteGpeEnableRegister @ 0x1C0007624
 * Callers:
 *     ACPIWakeRemoveDevicesAndUpdate @ 0x1C0007374 (ACPIWakeRemoveDevicesAndUpdate.c)
 *     ACPIGpeEnableDisableEvents @ 0x1C00075D4 (ACPIGpeEnableDisableEvents.c)
 *     ACPIWakeEnableWakeEvents @ 0x1C0042380 (ACPIWakeEnableWakeEvents.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00237F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ACPIWriteGpeEnableRegister(unsigned int a1, char a2)
{
  __int64 (__fastcall *v3)(__int64); // rax
  __int64 result; // rax
  __int64 v5; // rcx
  int v6; // edx
  char v7; // [rsp+48h] [rbp+10h] BYREF

  v7 = a2;
  v3 = *(__int64 (__fastcall **)(__int64))(PmHalDispatchTable + 120);
  if ( a1 < *((unsigned __int16 *)AcpiInformation + 43) )
  {
    result = v3(6LL);
    if ( (int)result < 0 )
      return result;
    v5 = 6LL;
    v6 = *((unsigned __int16 *)AcpiInformation + 43);
    return (*(__int64 (__fastcall **)(__int64, _QWORD, char *, __int64, _QWORD))(PmHalDispatchTable + 136))(
             v5,
             a1 + v6,
             &v7,
             1LL,
             0LL);
  }
  result = v3(7LL);
  if ( (int)result >= 0 )
  {
    v5 = 7LL;
    v6 = *((unsigned __int16 *)AcpiInformation + 49) - *((unsigned __int16 *)AcpiInformation + 43);
    return (*(__int64 (__fastcall **)(__int64, _QWORD, char *, __int64, _QWORD))(PmHalDispatchTable + 136))(
             v5,
             a1 + v6,
             &v7,
             1LL,
             0LL);
  }
  return result;
}
