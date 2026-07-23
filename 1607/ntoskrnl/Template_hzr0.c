/*
 * XREFs of Template_hzr0 @ 0x1401CD378
 * Callers:
 *     IoRequestDeviceRemovalForReset @ 0x14062C590 (IoRequestDeviceRemovalForReset.c)
 * Callees:
 *     EtwWrite @ 0x140012EA0 (EtwWrite.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 */

NTSTATUS __fastcall Template_hzr0(__int64 a1, __int64 a2, __int64 a3, unsigned __int16 a4, __int64 a5)
{
  struct _EVENT_DATA_DESCRIPTOR v6; // [rsp+30h] [rbp-38h] BYREF
  __int64 v7; // [rsp+40h] [rbp-28h]
  int v8; // [rsp+48h] [rbp-20h]
  int v9; // [rsp+4Ch] [rbp-1Ch]
  unsigned __int16 v10; // [rsp+88h] [rbp+20h] BYREF

  v10 = a4;
  v6.Ptr = (ULONGLONG)&v10;
  v6.Reserved = 0;
  v6.Size = 2;
  v7 = a5;
  v9 = 0;
  v8 = 2 * a4;
  return EtwWrite(Microsoft_Windows_Kernel_PnPHandle, &KMPnPEvt_DeviceReset_Start, 0LL, 2u, &v6);
}
