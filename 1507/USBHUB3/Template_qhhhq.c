/*
 * XREFs of Template_qhhhq @ 0x1C0001848
 * Callers:
 *     HUBHTX_Get20PortChangeEvent @ 0x1C0003CD4 (HUBHTX_Get20PortChangeEvent.c)
 *     HUBHTX_GetPortLostChangeEvent @ 0x1C0004274 (HUBHTX_GetPortLostChangeEvent.c)
 *     HUBHTX_Get30PortChangeEvent @ 0x1C000449C (HUBHTX_Get30PortChangeEvent.c)
 * Callees:
 *     __security_check_cookie @ 0x1C00341F0 (__security_check_cookie.c)
 */

NTSTATUS __fastcall Template_qhhhq(__int64 a1, __int64 a2, const GUID *a3, int a4, char a5, char a6, char a7, char a8)
{
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+30h] [rbp-29h] BYREF
  char *v10; // [rsp+40h] [rbp-19h]
  __int64 v11; // [rsp+48h] [rbp-11h]
  char *v12; // [rsp+50h] [rbp-9h]
  __int64 v13; // [rsp+58h] [rbp-1h]
  char *v14; // [rsp+60h] [rbp+7h]
  __int64 v15; // [rsp+68h] [rbp+Fh]
  char *v16; // [rsp+70h] [rbp+17h]
  __int64 v17; // [rsp+78h] [rbp+1Fh]
  int v18; // [rsp+B8h] [rbp+5Fh] BYREF

  v18 = a4;
  UserData.Ptr = (unsigned __int64)&v18;
  *(_QWORD *)&UserData.Size = 4LL;
  v10 = &a5;
  v11 = 2LL;
  v12 = &a6;
  v14 = &a7;
  v16 = &a8;
  v13 = 2LL;
  v15 = 2LL;
  v17 = 4LL;
  return EtwWrite(Microsoft_Windows_USB_USBHUB3Handle, &USBHUB3_ETW_EVENT_PORT_STATUS_ERROR, a3, 5u, &UserData);
}
