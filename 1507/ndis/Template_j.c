/*
 * XREFs of Template_j @ 0x1C003D8D4
 * Callers:
 *     ?ndisNsiClientParameterChangeHandler@@YAXPEAXPEAU_NSI_KEYSTRUCT_DESC@@PEAU_NSI_SINGLE_PARAM_DESC@@W4_NSI_NOTIFICATION@@@Z @ 0x1C00B0170 (-ndisNsiClientParameterChangeHandler@@YAXPEAXPEAU_NSI_KEYSTRUCT_DESC@@PEAU_NSI_SINGLE_PARAM_DESC.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0022840 (__security_check_cookie.c)
 */

NTSTATUS __fastcall Template_j(__int64 a1, __int64 a2, __int64 a3, unsigned __int64 a4)
{
  _EVENT_DATA_DESCRIPTOR UserData; // [rsp+30h] [rbp-28h] BYREF

  UserData.Reserved = 0;
  UserData.Ptr = a4;
  UserData.Size = 16;
  return EtwWrite(Microsoft_Windows_NDISHandle, &ChangeNotificationNetwork, &NDIS_PROVIDER_ID, 1u, &UserData);
}
