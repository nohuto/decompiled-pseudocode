/*
 * XREFs of PiAuditDeviceStart @ 0x14064CDD8
 * Callers:
 *     PipProcessStartPhase3 @ 0x140488964 (PipProcessStartPhase3.c)
 * Callees:
 *     _PnpGetObjectProperty @ 0x1404E1740 (_PnpGetObjectProperty.c)
 *     PiAuditDeviceOperation @ 0x14064C804 (PiAuditDeviceOperation.c)
 */

__int64 __fastcall PiAuditDeviceStart(__int64 a1)
{
  __int64 v1; // rdx
  __int64 result; // rax
  char v4; // [rsp+70h] [rbp+8h] BYREF
  int v5; // [rsp+78h] [rbp+10h] BYREF
  int v6; // [rsp+80h] [rbp+18h] BYREF

  v1 = *(_QWORD *)(a1 + 8);
  v5 = 1;
  result = PnpGetObjectProperty(
             *(__int64 *)&PiPnpRtlCtx,
             v1,
             1u,
             0LL,
             0LL,
             (__int64)&DEVPKEY_Device_InLocalMachineContainer,
             (__int64)&v6,
             (__int64)&v4,
             1,
             (__int64)&v5,
             0);
  if ( (int)result >= 0 && v6 == 17 && v5 == 1 && v4 != -1 )
    return PiAuditDeviceOperation(a1, 0, 1);
  return result;
}
