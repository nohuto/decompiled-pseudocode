/*
 * XREFs of sub_140005C6C @ 0x140005C6C
 * Callers:
 *     sub_140005660 @ 0x140005660 (sub_140005660.c)
 * Callees:
 *     __security_check_cookie @ 0x14000BFC0 (__security_check_cookie.c)
 */

NTSTATUS __fastcall sub_140005C6C(void *a1, _DWORD *a2)
{
  NTSTATUS result; // eax
  struct _IO_STATUS_BLOCK v4; // [rsp+50h] [rbp-48h] BYREF
  _DWORD v5[8]; // [rsp+60h] [rbp-38h] BYREF

  result = NtDeviceIoControlFile(a1, 0LL, 0LL, 0LL, &v4, 0x560000u, 0LL, 0, v5, 0x20u);
  if ( result >= 0 )
  {
    if ( v5[0] == 1 )
    {
      *a2 = v5[2];
      return 0;
    }
    else
    {
      return -1073741823;
    }
  }
  return result;
}
