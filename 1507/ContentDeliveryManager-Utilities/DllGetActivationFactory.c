/*
 * XREFs of DllGetActivationFactory @ 0x180006B20
 * Callers:
 *     <none>
 * Callees:
 *     sub_180006540 @ 0x180006540 (sub_180006540.c)
 *     _guard_check_icall_nop @ 0x18000B5A0 (_guard_check_icall_nop.c)
 *     __security_check_cookie @ 0x180026050 (__security_check_cookie.c)
 *     atexit @ 0x1800261E4 (atexit.c)
 */

__int64 __fastcall DllGetActivationFactory(HSTRING string, PSRWLOCK SRWLock)
{
  PCWSTR StringRawBuffer; // rbp
  __int64 (__fastcall ***i)(); // rdi
  __int64 v6; // rax
  unsigned __int16 *v7; // rcx
  __int64 v8; // rax
  int v9; // r8d
  int v10; // edx
  __int64 v11; // r9
  unsigned int v12; // ebx
  int v14; // [rsp+30h] [rbp-58h] BYREF
  BOOL hasEmbedNull; // [rsp+34h] [rbp-54h] BYREF
  _OWORD v16[2]; // [rsp+38h] [rbp-50h] BYREF
  __int64 v17; // [rsp+58h] [rbp-30h]

  if ( (dword_18003AE44 & 1) == 0 )
  {
    dword_18003AE44 |= 1u;
    qword_18003AC80 = (__int64)&qword_18003AE38;
    qword_18003AE38 = (__int64)off_18002CB48;
    atexit(sub_180028020);
  }
  SRWLock->Ptr = 0LL;
  if ( WindowsIsStringEmpty(string) || WindowsStringHasEmbeddedNull(string, &hasEmbedNull) < 0 || hasEmbedNull )
  {
    v12 = -2147024809;
    v16[0] = xmmword_18002EFB8;
    v17 = 0x6400490073LL;
    v16[1] = xmmword_18002EFC8;
    RoOriginateErrorW(2147942487LL, 19LL, v16);
  }
  else
  {
    StringRawBuffer = WindowsGetStringRawBuffer(string, 0LL);
    for ( i = off_180037940; i < (__int64 (__fastcall ***)())byte_180037958; ++i )
    {
      if ( *i )
      {
        v6 = ((__int64 (__fastcall *)(__int64 (__fastcall *)()))(*i)[1])((*i)[1]);
        v7 = (unsigned __int16 *)StringRawBuffer;
        v8 = v6 - (_QWORD)StringRawBuffer;
        do
        {
          v9 = *(unsigned __int16 *)((char *)v7 + v8);
          v10 = *v7 - v9;
          if ( v10 )
            break;
          ++v7;
        }
        while ( v9 );
        if ( !v10 )
        {
          v11 = (__int64)*i;
          v14 = 1;
          return (unsigned int)sub_180006540((__int64)v7, &v14, (__int64)L"5", v11, SRWLock);
        }
      }
    }
    v12 = -2147221231;
    RoOriginateError(2147746065LL, 0LL);
  }
  return v12;
}
