/*
 * XREFs of sub_180019130 @ 0x180019130
 * Callers:
 *     sub_18001863C @ 0x18001863C (sub_18001863C.c)
 * Callees:
 *     sub_1800055F0 @ 0x1800055F0 (sub_1800055F0.c)
 *     sub_180019C40 @ 0x180019C40 (sub_180019C40.c)
 */

_QWORD *__fastcall sub_180019130(_QWORD *a1, __int64 a2)
{
  __int64 *v3; // rax
  __int64 v4; // rdx
  volatile signed __int32 *v5; // rcx
  volatile signed __int32 *v7; // [rsp+30h] [rbp+8h] BYREF
  __int64 v8; // [rsp+38h] [rbp+10h] BYREF

  v8 = a2;
  v3 = (__int64 *)sub_180019C40(&v7, &v8);
  v4 = *v3;
  *v3 = 0LL;
  v5 = v7;
  *a1 = v4;
  if ( v5 )
  {
    v7 = 0LL;
    sub_1800055F0(v5);
  }
  return a1;
}
