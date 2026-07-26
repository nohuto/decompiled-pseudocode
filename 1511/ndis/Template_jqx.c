/*
 * XREFs of Template_jqx @ 0x1C005EDD8
 * Callers:
 *     ndisRequestDevicePowerD0 @ 0x1C0012AD4 (ndisRequestDevicePowerD0.c)
 *     ndisIdleWaitWakeCallback @ 0x1C0066760 (ndisIdleWaitWakeCallback.c)
 *     ?ndisAoAcScheduleWakeWorkItem@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MINIPORT_EVENT@@@Z @ 0x1C0068970 (-ndisAoAcScheduleWakeWorkItem@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MINIPORT_EVENT@@@Z.c)
 *     ?ndisAoAcWriteRefcountRundown@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_MINIPORT_AOAC@@@Z @ 0x1C0068E80 (-ndisAoAcWriteRefcountRundown@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_MINIPORT_AOAC@@@Z.c)
 *     ndisRequestDeviceLowPower @ 0x1C0097E18 (ndisRequestDeviceLowPower.c)
 * Callees:
 *     __security_check_cookie @ 0x1C00264F0 (__security_check_cookie.c)
 */

NTSTATUS __fastcall Template_jqx(
        __int64 a1,
        const EVENT_DESCRIPTOR *a2,
        const GUID *a3,
        unsigned __int64 a4,
        char a5,
        char a6)
{
  _EVENT_DATA_DESCRIPTOR UserData; // [rsp+30h] [rbp-40h] BYREF
  char *v8; // [rsp+40h] [rbp-30h]
  __int64 v9; // [rsp+48h] [rbp-28h]
  char *v10; // [rsp+50h] [rbp-20h]
  __int64 v11; // [rsp+58h] [rbp-18h]

  v8 = &a5;
  v10 = &a6;
  UserData.Ptr = a4;
  *(_QWORD *)&UserData.Size = 16LL;
  v9 = 4LL;
  v11 = 8LL;
  return EtwWrite(Microsoft_Windows_NDISHandle, a2, a3, 3u, &UserData);
}
