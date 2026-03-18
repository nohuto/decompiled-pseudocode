/*
 * XREFs of Template_qhhhqhhh @ 0x1C0001B78
 * Callers:
 *     HUBHTX_Get20PortChangeEvent @ 0x1C0004034 (HUBHTX_Get20PortChangeEvent.c)
 *     HUBHTX_GetPortLostChangeEvent @ 0x1C000468C (HUBHTX_GetPortLostChangeEvent.c)
 *     HUBHTX_Get30PortChangeEvent @ 0x1C000499C (HUBHTX_Get30PortChangeEvent.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0034DE0 (__security_check_cookie.c)
 */

NTSTATUS __fastcall Template_qhhhqhhh(
        __int64 a1,
        __int64 a2,
        const GUID *a3,
        int a4,
        char a5,
        char a6,
        char a7,
        char a8,
        char a9,
        char a10,
        char a11)
{
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+30h] [rbp-71h] BYREF
  char *v13; // [rsp+40h] [rbp-61h]
  __int64 v14; // [rsp+48h] [rbp-59h]
  char *v15; // [rsp+50h] [rbp-51h]
  __int64 v16; // [rsp+58h] [rbp-49h]
  char *v17; // [rsp+60h] [rbp-41h]
  __int64 v18; // [rsp+68h] [rbp-39h]
  char *v19; // [rsp+70h] [rbp-31h]
  __int64 v20; // [rsp+78h] [rbp-29h]
  char *v21; // [rsp+80h] [rbp-21h]
  __int64 v22; // [rsp+88h] [rbp-19h]
  char *v23; // [rsp+90h] [rbp-11h]
  __int64 v24; // [rsp+98h] [rbp-9h]
  char *v25; // [rsp+A0h] [rbp-1h]
  __int64 v26; // [rsp+A8h] [rbp+7h]
  int v27; // [rsp+E8h] [rbp+47h] BYREF

  v27 = a4;
  UserData.Ptr = (unsigned __int64)&v27;
  *(_QWORD *)&UserData.Size = 4LL;
  v13 = &a5;
  v14 = 2LL;
  v15 = &a6;
  v17 = &a7;
  v19 = &a8;
  v21 = &a9;
  v23 = &a10;
  v25 = &a11;
  v16 = 2LL;
  v18 = 2LL;
  v20 = 4LL;
  v22 = 2LL;
  v24 = 2LL;
  v26 = 2LL;
  return EtwWrite(Microsoft_Windows_USB_USBHUB3Handle, &USBHUB3_ETW_EVENT_PORT_STATUS_ERROR_V1, a3, 8u, &UserData);
}
