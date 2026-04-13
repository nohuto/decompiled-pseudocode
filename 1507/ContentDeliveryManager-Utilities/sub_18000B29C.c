/*
 * XREFs of sub_18000B29C @ 0x18000B29C
 * Callers:
 *     sub_18000B37C @ 0x18000B37C (sub_18000B37C.c)
 * Callees:
 *     sub_180004A0C @ 0x180004A0C (sub_180004A0C.c)
 *     __security_check_cookie @ 0x180026050 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_18000B29C(__int64 a1, char *a2, __int128 *a3)
{
  size_t v5; // r8
  __int64 v6; // rax
  __int128 v7; // xmm6
  const char *v8; // rax
  const char *v10[2]; // [rsp+20h] [rbp-58h] BYREF
  void *v11[3]; // [rsp+30h] [rbp-48h] BYREF
  unsigned __int64 v12; // [rsp+48h] [rbp-30h]

  v10[1] = (const char *)-2LL;
  v12 = 15LL;
  v5 = 0LL;
  v11[2] = 0LL;
  LOBYTE(v11[0]) = 0;
  if ( *a2 )
  {
    v6 = -1LL;
    do
      ++v6;
    while ( a2[v6] );
    v5 = v6;
  }
  sub_180004A0C(v11, a2, v5);
  v7 = *a3;
  v8 = (const char *)v11;
  if ( v12 >= 0x10 )
    v8 = (const char *)v11[0];
  v10[0] = v8;
  exception::exception((exception *)a1, v10);
  *(_QWORD *)a1 = &off_18002D630;
  *(_OWORD *)(a1 + 24) = v7;
  if ( v12 >= 0x10 )
    operator delete(v11[0]);
  *(_QWORD *)a1 = &off_18002D630;
  return a1;
}
