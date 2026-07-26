/*
 * XREFs of Template_jqxqq @ 0x1C003EE50
 * Callers:
 *     ndisSetDevicePower @ 0x1C0011174 (ndisSetDevicePower.c)
 *     ?ndisSetSystemPowerOnComplete@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@PEAX@Z @ 0x1C0012160 (-ndisSetSystemPowerOnComplete@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@PEAX@Z.c)
 *     ndisIndicateStatusInternal @ 0x1C0016D10 (ndisIndicateStatusInternal.c)
 *     ndisCheckMiniportWakeUpCapable @ 0x1C00201B0 (ndisCheckMiniportWakeUpCapable.c)
 *     ndisPnPPortActivation @ 0x1C003F114 (ndisPnPPortActivation.c)
 *     ndisPnPPortDeactivation @ 0x1C003F694 (ndisPnPPortDeactivation.c)
 *     ndisPowerSuspendRequestComplete @ 0x1C006B9B0 (ndisPowerSuspendRequestComplete.c)
 *     ndisSetPowerResumeCompleteWorkItem @ 0x1C006C980 (ndisSetPowerResumeCompleteWorkItem.c)
 *     ndisSetSystemPower @ 0x1C009C3F4 (ndisSetSystemPower.c)
 *     ndisDevicePowerOn @ 0x1C00E5000 (ndisDevicePowerOn.c)
 *     ndisQueryPower @ 0x1C00E5B80 (ndisQueryPower.c)
 *     ndisMPowerPolicy @ 0x1C00E5DB4 (ndisMPowerPolicy.c)
 *     ndisDevicePowerDown @ 0x1C00E5F90 (ndisDevicePowerDown.c)
 *     ndisMInitializeAdapter @ 0x1C00EA374 (ndisMInitializeAdapter.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0026780 (__security_check_cookie.c)
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
