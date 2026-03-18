/*
 * XREFs of UMPDDrvDeleteDeviceBitmap @ 0x14034D200
 * Callers:
 *     <none>
 * Callees:
 *     ?Thunk@UMPDOBJ@@QEAAKPEAXK0K@Z @ 0x1400D600C (-Thunk@UMPDOBJ@@QEAAKPEAXK0K@Z.c)
 *     ??1XUMPDOBJ@@QEAA@XZ @ 0x1400D7A00 (--1XUMPDOBJ@@QEAA@XZ.c)
 *     ??0XUMPDOBJ@@QEAA@XZ @ 0x1400D7B24 (--0XUMPDOBJ@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 */

void __fastcall UMPDDrvDeleteDeviceBitmap(__int64 a1, __int64 a2)
{
  size_t Size; // [rsp+20h] [rbp-50h]
  UMPDOBJ *v5; // [rsp+30h] [rbp-40h] BYREF
  _DWORD v6[2]; // [rsp+38h] [rbp-38h] BYREF
  __int64 v7; // [rsp+40h] [rbp-30h]
  __int64 v8; // [rsp+48h] [rbp-28h]
  __int64 v9; // [rsp+50h] [rbp-20h]
  __int64 v10; // [rsp+58h] [rbp-18h]

  XUMPDOBJ::XUMPDOBJ((XUMPDOBJ *)&v5);
  if ( v5 )
  {
    v6[0] = 0;
    v7 = 0LL;
    v6[1] = 11;
    LODWORD(Size) = 0;
    v8 = *(_QWORD *)v5;
    v9 = a1;
    v10 = a2;
    UMPDOBJ::Thunk(v5, v6, 0x28u, 0LL, Size);
  }
  XUMPDOBJ::~XUMPDOBJ(&v5);
}
