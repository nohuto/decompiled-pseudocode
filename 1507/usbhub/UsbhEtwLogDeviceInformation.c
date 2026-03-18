/*
 * XREFs of UsbhEtwLogDeviceInformation @ 0x1C001C020
 * Callers:
 *     UsbhEtwRundown @ 0x1C001DE28 (UsbhEtwRundown.c)
 *     UsbhBusConnectPdo @ 0x1C001E444 (UsbhBusConnectPdo.c)
 *     UsbhDeletePdo @ 0x1C0053984 (UsbhDeletePdo.c)
 * Callees:
 *     FdoExt @ 0x1C0015060 (FdoExt.c)
 *     UsbhEtwWrite @ 0x1C001B750 (UsbhEtwWrite.c)
 *     UsbhEtwGetDeviceInfo @ 0x1C001B81C (UsbhEtwGetDeviceInfo.c)
 *     __security_check_cookie @ 0x1C0029D80 (__security_check_cookie.c)
 */

void __fastcall UsbhEtwLogDeviceInformation(__int64 a1, const EVENT_DESCRIPTOR *a2, __int64 a3, __int64 a4)
{
  char v4; // si
  _DWORD *v7; // rax
  int v8; // [rsp+60h] [rbp-9h] BYREF
  int v9; // [rsp+68h] [rbp-1h] BYREF
  __int16 v10; // [rsp+6Ch] [rbp+3h]
  __int16 v11; // [rsp+6Eh] [rbp+5h]
  __int16 v12; // [rsp+70h] [rbp+7h]
  __int16 v13; // [rsp+72h] [rbp+9h]
  _BYTE v14[48]; // [rsp+78h] [rbp+Fh] BYREF

  v4 = a3;
  if ( dword_1C0066650 )
  {
    v7 = FdoExt(*(_QWORD *)(a1 + 1176), (__int64)a2, a3, a4);
    v9 = v7[1298];
    v10 = *((_WORD *)v7 + 2598);
    v11 = v7[1300];
    v12 = *((_WORD *)v7 + 2614);
    v13 = *((_WORD *)v7 + 2615);
    UsbhEtwGetDeviceInfo(a1, (__int64)v14);
    v8 = *(_DWORD *)(a1 + 788);
    if ( v4 )
      UsbhEtwWrite(a2, 0LL, (unsigned __int64)&v9, 12LL, v14, 44LL, &v8, 4LL, a1 + 1392, 18LL, 0LL);
    else
      UsbhEtwWrite(a2, 0LL, (unsigned __int64)&v9, 12LL, v14, 44LL, &v8, 4LL, 0LL);
  }
}
