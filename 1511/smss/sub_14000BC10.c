/*
 * XREFs of sub_14000BC10 @ 0x14000BC10
 * Callers:
 *     <none>
 * Callees:
 *     sub_140003500 @ 0x140003500 (sub_140003500.c)
 *     __security_check_cookie @ 0x14000BFC0 (__security_check_cookie.c)
 *     sub_140012B6C @ 0x140012B6C (sub_140012B6C.c)
 *     sub_140012BFC @ 0x140012BFC (sub_140012BFC.c)
 */

__int64 sub_14000BC10()
{
  __int64 result; // rax
  int v1; // ebx
  unsigned __int64 Parameters[2]; // [rsp+28h] [rbp-190h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+38h] [rbp-180h] BYREF
  _BYTE v4[8]; // [rsp+50h] [rbp-168h] BYREF
  __int64 v5; // [rsp+58h] [rbp-160h]
  int v6; // [rsp+78h] [rbp-140h]
  int v7; // [rsp+80h] [rbp-138h]
  int v8; // [rsp+84h] [rbp-134h]

  v7 = -1;
  v8 = 0;
  v6 = 5;
  v5 = qword_14001FCE8;
  result = sub_140003500((__int64)v4);
  v1 = result;
  if ( (int)result < 0 )
  {
    RtlInitUnicodeString(&DestinationString, L"Session Manager Core Session failure");
    Parameters[0] = (unsigned __int64)&DestinationString;
    Parameters[1] = v1;
    sub_140012B6C(Parameters, 1u, 2u);
    JUMPOUT(0x14000F1DELL);
  }
  return result;
}
