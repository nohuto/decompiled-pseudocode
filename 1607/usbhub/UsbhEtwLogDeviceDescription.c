/*
 * XREFs of UsbhEtwLogDeviceDescription @ 0x1C001DD90
 * Callers:
 *     UsbhPdoPnp_StartDevice @ 0x1C001A2F0 (UsbhPdoPnp_StartDevice.c)
 *     UsbhEtwRundown @ 0x1C001E844 (UsbhEtwRundown.c)
 * Callees:
 *     FdoExt @ 0x1C0015EE0 (FdoExt.c)
 *     UsbhEtwWrite @ 0x1C001D860 (UsbhEtwWrite.c)
 *     UsbhEtwGetDeviceInfo @ 0x1C001DD24 (UsbhEtwGetDeviceInfo.c)
 *     __security_check_cookie @ 0x1C0029400 (__security_check_cookie.c)
 */

void __fastcall UsbhEtwLogDeviceDescription(__int64 a1, const EVENT_DESCRIPTOR *a2, __int64 a3, __int64 a4)
{
  _DWORD *v6; // rax
  int v7; // [rsp+38h] [rbp-70h]
  int v8; // [rsp+50h] [rbp-58h] BYREF
  __int16 v9; // [rsp+54h] [rbp-54h]
  __int16 v10; // [rsp+56h] [rbp-52h]
  __int16 v11; // [rsp+58h] [rbp-50h]
  __int16 v12; // [rsp+5Ah] [rbp-4Eh]
  _BYTE v13[48]; // [rsp+60h] [rbp-48h] BYREF

  if ( dword_1C0067650 && *(_QWORD *)(a1 + 2232) )
  {
    if ( *(_DWORD *)(a1 + 2240) )
    {
      v6 = FdoExt(*(_QWORD *)(a1 + 1176), (__int64)a2, a3, a4);
      v8 = v6[1298];
      v9 = *((_WORD *)v6 + 2598);
      v10 = v6[1300];
      v11 = *((_WORD *)v6 + 2614);
      v12 = *((_WORD *)v6 + 2615);
      UsbhEtwGetDeviceInfo(a1, (__int64)v13);
      v7 = *(_DWORD *)(a1 + 2240);
      UsbhEtwWrite(a2, 0LL, (unsigned __int64)&v8, 12LL, v13, 44LL, *(_QWORD *)(a1 + 2232), v7, 0LL);
    }
  }
}
