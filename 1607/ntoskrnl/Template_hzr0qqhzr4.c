/*
 * XREFs of Template_hzr0qqhzr4 @ 0x1401CD3F8
 * Callers:
 *     IopDeviceRemovalForResetComplete @ 0x14062C74C (IopDeviceRemovalForResetComplete.c)
 * Callees:
 *     EtwWrite @ 0x140012EA0 (EtwWrite.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 */

NTSTATUS __fastcall Template_hzr0qqhzr4(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned __int16 a4,
        __int64 a5,
        char a6,
        char a7,
        unsigned __int16 a8,
        __int64 a9)
{
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+30h] [rbp-41h] BYREF
  __int64 v11; // [rsp+40h] [rbp-31h]
  int v12; // [rsp+48h] [rbp-29h]
  int v13; // [rsp+4Ch] [rbp-25h]
  char *v14; // [rsp+50h] [rbp-21h]
  __int64 v15; // [rsp+58h] [rbp-19h]
  char *v16; // [rsp+60h] [rbp-11h]
  __int64 v17; // [rsp+68h] [rbp-9h]
  unsigned __int16 *v18; // [rsp+70h] [rbp-1h]
  __int64 v19; // [rsp+78h] [rbp+7h]
  __int64 v20; // [rsp+80h] [rbp+Fh]
  int v21; // [rsp+88h] [rbp+17h]
  int v22; // [rsp+8Ch] [rbp+1Bh]
  unsigned __int16 v23; // [rsp+C8h] [rbp+57h] BYREF

  v23 = a4;
  UserData.Ptr = (ULONGLONG)&v23;
  v11 = a5;
  *(_QWORD *)&UserData.Size = 2LL;
  v12 = 2 * a4;
  v13 = 0;
  v14 = &a6;
  v16 = &a7;
  v18 = &a8;
  v20 = a9;
  v15 = 4LL;
  v21 = 2 * a8;
  v17 = 4LL;
  v19 = 2LL;
  v22 = 0;
  return EtwWrite(Microsoft_Windows_Kernel_PnPHandle, &KMPnPEvt_DeviceReset_Stop, 0LL, 6u, &UserData);
}
