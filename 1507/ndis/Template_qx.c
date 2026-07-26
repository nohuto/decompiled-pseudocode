/*
 * XREFs of Template_qx @ 0x1C003DA10
 * Callers:
 *     ?ndisNsiClientParameterChangeHandler@@YAXPEAXPEAU_NSI_KEYSTRUCT_DESC@@PEAU_NSI_SINGLE_PARAM_DESC@@W4_NSI_NOTIFICATION@@@Z @ 0x1C00B0170 (-ndisNsiClientParameterChangeHandler@@YAXPEAXPEAU_NSI_KEYSTRUCT_DESC@@PEAU_NSI_SINGLE_PARAM_DESC.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0022840 (__security_check_cookie.c)
 */

NTSTATUS __fastcall Template_qx(__int64 a1, __int64 a2, __int64 a3, int a4, __int64 a5)
{
  _EVENT_DATA_DESCRIPTOR v6; // [rsp+30h] [rbp-38h] BYREF
  __int64 *v7; // [rsp+40h] [rbp-28h]
  int v8; // [rsp+48h] [rbp-20h]
  int v9; // [rsp+4Ch] [rbp-1Ch]
  int v10; // [rsp+88h] [rbp+20h] BYREF

  v10 = a4;
  v6.Ptr = (unsigned __int64)&v10;
  v6.Reserved = 0;
  v6.Size = 4;
  v7 = &a5;
  v9 = 0;
  v8 = 8;
  return EtwWrite(Microsoft_Windows_NDISHandle, &ChangeNotificationInterfaceEnum, &NDIS_PROVIDER_ID, 2u, &v6);
}
