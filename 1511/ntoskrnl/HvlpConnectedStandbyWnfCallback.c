/*
 * XREFs of HvlpConnectedStandbyWnfCallback @ 0x1405F6EDC
 * Callers:
 *     <none>
 * Callees:
 *     HvlpEnterIumSecureMode @ 0x1400EB69C (HvlpEnterIumSecureMode.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     ExQueryWnfStateData @ 0x1404BB5FC (ExQueryWnfStateData.c)
 */

NTSTATUS __fastcall HvlpConnectedStandbyWnfCallback(__int64 a1)
{
  NTSTATUS result; // eax
  __int64 v2; // rax
  unsigned int v3; // [rsp+20h] [rbp-B8h] BYREF
  int v4; // [rsp+28h] [rbp-B0h] BYREF
  _QWORD v5[2]; // [rsp+30h] [rbp-A8h] BYREF
  unsigned __int8 v6; // [rsp+40h] [rbp-98h]
  unsigned __int8 v7[12]; // [rsp+50h] [rbp-88h] BYREF
  int v8; // [rsp+5Ch] [rbp-7Ch]

  v3 = 20;
  result = ExQueryWnfStateData(a1, &v4, v5, &v3);
  if ( result >= 0 )
  {
    v2 = v5[0] - *(_QWORD *)&GUID_SPM_LOW_POWER_CS.Data1;
    if ( v5[0] == *(_QWORD *)&GUID_SPM_LOW_POWER_CS.Data1 )
      v2 = v5[1] - *(_QWORD *)GUID_SPM_LOW_POWER_CS.Data4;
    v7[8] = v2 == 0;
    v7[9] = v6;
    v8 = 0;
    return HvlpEnterIumSecureMode(1u, 39, 0, v7);
  }
  return result;
}
