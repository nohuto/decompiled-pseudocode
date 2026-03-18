/*
 * XREFs of READ_PM1_CONTROL @ 0x1C0022EA4
 * Callers:
 *     ACPIEnableEnterACPIMode @ 0x1C0022D1C (ACPIEnableEnterACPIMode.c)
 *     ACPIEnableInitializeACPI @ 0x1C0022E20 (ACPIEnableInitializeACPI.c)
 *     ACPILateRestore @ 0x1C0052D90 (ACPILateRestore.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C002BE40 (_guard_dispatch_icall_nop.c)
 */

__int64 READ_PM1_CONTROL()
{
  unsigned __int16 v0; // bx
  unsigned __int16 v2; // [rsp+40h] [rbp+8h] BYREF

  v0 = 0;
  if ( (*(int (__fastcall **)(__int64))(PmHalDispatchTable + 120))(1LL) >= 0 )
  {
    (*(void (__fastcall **)(__int64, _QWORD, unsigned __int16 *, __int64, _QWORD))(PmHalDispatchTable + 128))(
      1LL,
      0LL,
      &v2,
      2LL,
      0LL);
    v0 = v2;
  }
  if ( (*(int (__fastcall **)(__int64))(PmHalDispatchTable + 120))(4LL) >= 0 )
  {
    (*(void (__fastcall **)(__int64, _QWORD, unsigned __int16 *, __int64, _QWORD))(PmHalDispatchTable + 128))(
      4LL,
      0LL,
      &v2,
      2LL,
      0LL);
    v0 |= v2;
  }
  return v0;
}
