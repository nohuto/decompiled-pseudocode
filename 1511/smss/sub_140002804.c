/*
 * XREFs of sub_140002804 @ 0x140002804
 * Callers:
 *     sub_140002540 @ 0x140002540 (sub_140002540.c)
 * Callees:
 *     __security_check_cookie @ 0x14000BFC0 (__security_check_cookie.c)
 */

void __fastcall sub_140002804(__int64 a1, int a2, unsigned __int16 *a3)
{
  int v4; // ecx
  __int64 v5; // rax
  __int64 v6; // [rsp+20h] [rbp-40h] BYREF
  int *v7; // [rsp+28h] [rbp-38h] BYREF
  int v8; // [rsp+30h] [rbp-30h]
  int v9; // [rsp+34h] [rbp-2Ch]
  __int64 *v10; // [rsp+38h] [rbp-28h]
  int v11; // [rsp+40h] [rbp-20h]
  int v12; // [rsp+44h] [rbp-1Ch]
  __int64 v13; // [rsp+48h] [rbp-18h]
  int v14; // [rsp+50h] [rbp-10h]
  int v15; // [rsp+54h] [rbp-Ch]
  int v16; // [rsp+78h] [rbp+18h] BYREF

  v16 = a2;
  if ( RegHandle )
  {
    if ( EtwEventEnabled(RegHandle, &stru_140014B98) )
    {
      v4 = *a3;
      v9 = 0;
      v12 = 0;
      v15 = 0;
      LOWORD(v6) = (unsigned __int16)v4 >> 1;
      v7 = &v16;
      v10 = &v6;
      v5 = *((_QWORD *)a3 + 1);
      v14 = v4;
      v13 = v5;
      v8 = 4;
      v11 = 2;
      ((void (__fastcall *)(REGHANDLE, const EVENT_DESCRIPTOR *, __int64, int **, __int64))EtwEventWrite)(
        RegHandle,
        &stru_140014B98,
        3LL,
        &v7,
        v6);
    }
  }
}
