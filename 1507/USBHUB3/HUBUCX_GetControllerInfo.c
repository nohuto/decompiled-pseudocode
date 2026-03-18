/*
 * XREFs of HUBUCX_GetControllerInfo @ 0x1C001D040
 * Callers:
 *     HUBDRIVER_EtwRundownUsbDevice @ 0x1C0061690 (HUBDRIVER_EtwRundownUsbDevice.c)
 *     HUBPDO_EvtDevicePrepareHardware @ 0x1C0065D40 (HUBPDO_EvtDevicePrepareHardware.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00342F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall HUBUCX_GetControllerInfo(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // [rsp+50h] [rbp-18h] BYREF
  __int64 v6; // [rsp+70h] [rbp+8h] BYREF

  return (*(__int64 (__fastcall **)(_QWORD, char *, __int64, __int64, char *, __int64 *, __int64, __int64 *))(a1 + 624))(
           *(_QWORD *)(a1 + 544),
           (char *)&v5 + 4,
           a2,
           a3,
           (char *)&v5 + 1,
           &v5,
           a4,
           &v6);
}
