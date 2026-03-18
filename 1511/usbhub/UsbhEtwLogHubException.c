/*
 * XREFs of UsbhEtwLogHubException @ 0x1C00576FC
 * Callers:
 *     UsbhException @ 0x1C004EC30 (UsbhException.c)
 * Callees:
 *     UsbhEtwGetHubInfo @ 0x1C000BDE0 (UsbhEtwGetHubInfo.c)
 *     UsbhEtwWrite @ 0x1C000F240 (UsbhEtwWrite.c)
 *     FdoExt @ 0x1C00132D0 (FdoExt.c)
 *     __security_check_cookie @ 0x1C0028D40 (__security_check_cookie.c)
 */

void __fastcall UsbhEtwLogHubException(__int64 a1, __int64 a2, __int64 a3, __int64 a4, char a5, __int64 a6, int a7)
{
  __int64 v7; // rbx
  _DWORD *v8; // rax
  int v9; // [rsp+78h] [rbp-49h]
  int v10; // [rsp+90h] [rbp-31h] BYREF
  int v11; // [rsp+98h] [rbp-29h] BYREF
  int v12; // [rsp+A0h] [rbp-21h] BYREF
  int v13; // [rsp+A8h] [rbp-19h] BYREF
  __int16 v14; // [rsp+ACh] [rbp-15h]
  __int16 v15; // [rsp+AEh] [rbp-13h]
  __int16 v16; // [rsp+B0h] [rbp-11h]
  __int16 v17; // [rsp+B2h] [rbp-Fh]
  _BYTE v18[40]; // [rsp+B8h] [rbp-9h] BYREF

  v7 = a6;
  v10 = a2;
  v12 = a3;
  v11 = a4;
  if ( dword_1C0067650 )
  {
    v8 = FdoExt(a1, a2, a3, a4);
    v13 = v8[1298];
    v14 = *((_WORD *)v8 + 2598);
    v15 = v8[1300];
    v16 = *((_WORD *)v8 + 2614);
    v17 = *((_WORD *)v8 + 2615);
    UsbhEtwGetHubInfo((__int64)v8, (__int64)v18);
    v9 = a7;
    UsbhEtwWrite(
      &USBHUB_ETW_EVENT_HUB_EXCEPTION,
      0LL,
      (unsigned __int64)&v13,
      12LL,
      v18,
      36LL,
      &v10,
      4LL,
      &v12,
      4LL,
      &v11,
      4LL,
      &a5,
      4LL,
      v7,
      v9,
      0LL);
  }
}
