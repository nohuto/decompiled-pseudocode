/*
 * XREFs of Template_jqxqq @ 0x1C003AED0
 * Callers:
 *     ndisSetDevicePower @ 0x1C001227C (ndisSetDevicePower.c)
 *     ?ndisSetSystemPowerOnComplete@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@PEAX@Z @ 0x1C0012A40 (-ndisSetSystemPowerOnComplete@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@PEAX@Z.c)
 *     ndisIndicateStatusInternal @ 0x1C001CD04 (ndisIndicateStatusInternal.c)
 *     ndisCheckMiniportWakeUpCapable @ 0x1C001FB7C (ndisCheckMiniportWakeUpCapable.c)
 *     ndisPnPPortActivation @ 0x1C003B198 (ndisPnPPortActivation.c)
 *     ndisPnPPortDeactivation @ 0x1C003B718 (ndisPnPPortDeactivation.c)
 *     ndisPowerSuspendRequestComplete @ 0x1C00668B0 (ndisPowerSuspendRequestComplete.c)
 *     ndisSetPowerResumeCompleteWorkItem @ 0x1C0067F60 (ndisSetPowerResumeCompleteWorkItem.c)
 *     ndisSetSystemPower @ 0x1C0097BD0 (ndisSetSystemPower.c)
 *     ndisDevicePowerOn @ 0x1C00DF3D0 (ndisDevicePowerOn.c)
 *     ndisQueryPower @ 0x1C00DF930 (ndisQueryPower.c)
 *     ndisMPowerPolicy @ 0x1C00DFB64 (ndisMPowerPolicy.c)
 *     ndisDevicePowerDown @ 0x1C00DFD10 (ndisDevicePowerDown.c)
 *     ndisMInitializeAdapter @ 0x1C00E405C (ndisMInitializeAdapter.c)
 * Callees:
 *     __security_check_cookie @ 0x1C00264F0 (__security_check_cookie.c)
 */

NTSTATUS __fastcall Template_jqxqq(
        __int64 a1,
        const EVENT_DESCRIPTOR *a2,
        const GUID *a3,
        unsigned __int64 a4,
        char a5,
        char a6,
        char a7,
        char a8)
{
  _EVENT_DATA_DESCRIPTOR UserData; // [rsp+30h] [rbp-29h] BYREF
  char *v10; // [rsp+40h] [rbp-19h]
  __int64 v11; // [rsp+48h] [rbp-11h]
  char *v12; // [rsp+50h] [rbp-9h]
  __int64 v13; // [rsp+58h] [rbp-1h]
  char *v14; // [rsp+60h] [rbp+7h]
  __int64 v15; // [rsp+68h] [rbp+Fh]
  char *v16; // [rsp+70h] [rbp+17h]
  __int64 v17; // [rsp+78h] [rbp+1Fh]

  v10 = &a5;
  v12 = &a6;
  v14 = &a7;
  v16 = &a8;
  UserData.Ptr = a4;
  *(_QWORD *)&UserData.Size = 16LL;
  v11 = 4LL;
  v13 = 8LL;
  v15 = 4LL;
  v17 = 4LL;
  return EtwWrite(Microsoft_Windows_NDISHandle, a2, a3, 5u, &UserData);
}
