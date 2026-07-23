/*
 * XREFs of VslFinishSecureImageValidation @ 0x14023D304
 * Callers:
 *     <none>
 * Callees:
 *     VslpEnterIumSecureMode @ 0x1400A86F4 (VslpEnterIumSecureMode.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     VslFreePoolTransferObject @ 0x1401C291C (VslFreePoolTransferObject.c)
 */

__int64 __fastcall VslFinishSecureImageValidation(
        __int64 a1,
        __int64 a2,
        int a3,
        char a4,
        _BYTE *a5,
        __int64 *a6,
        _QWORD *a7,
        _QWORD *a8,
        _DWORD *a9)
{
  NTSTATUS v9; // ebp
  _BYTE v11[8]; // [rsp+20h] [rbp-B8h] BYREF
  __int64 v12; // [rsp+28h] [rbp-B0h]
  __int64 v13; // [rsp+30h] [rbp-A8h]
  int v14; // [rsp+38h] [rbp-A0h]
  char v15; // [rsp+3Ch] [rbp-9Ch]
  char v16; // [rsp+3Dh] [rbp-9Bh]
  PVOID P; // [rsp+40h] [rbp-98h]
  __int64 v18; // [rsp+48h] [rbp-90h]
  int v19; // [rsp+50h] [rbp-88h]

  v12 = a1;
  v13 = a2;
  v14 = a3;
  v15 = a4;
  v9 = VslpEnterIumSecureMode(1, 24LL, 0LL, (__int64)v11);
  *a9 = v19;
  if ( v9 >= 0 )
  {
    *a5 = v16;
    *a8 = v18;
    if ( P )
    {
      *a6 = VslFreePoolTransferObject((__int64 *)P, a7);
    }
    else
    {
      *a6 = 0LL;
      *a7 = 0LL;
    }
  }
  return (unsigned int)v9;
}
