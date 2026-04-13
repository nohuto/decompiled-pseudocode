/*
 * XREFs of sub_180019350 @ 0x180019350
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800025D0 @ 0x1800025D0 (sub_1800025D0.c)
 *     sub_18000F804 @ 0x18000F804 (sub_18000F804.c)
 */

__int64 __fastcall sub_180019350(__int64 a1, int a2, int a3)
{
  __int64 v3; // rax
  int v4; // eax
  unsigned int v5; // ebx
  _BYTE v7[96]; // [rsp+28h] [rbp-70h] BYREF
  __int64 v8; // [rsp+88h] [rbp-10h]
  __int64 retaddr; // [rsp+98h] [rbp+0h]

  if ( a2 == 1 && a3 >= 0 )
  {
    v3 = 2LL;
    do
    {
      v8 = 0LL;
      --v3;
    }
    while ( v3 );
    v4 = sub_18000F804(*(_QWORD *)(a1 + 8), 2 - (unsigned int)(*(_BYTE *)(a1 + 16) != 0), (__int64)v7);
    v5 = v4;
    if ( v4 >= 0 )
      return 0;
    else
      sub_1800025D0(
        retaddr,
        305,
        (__int64)"shell\\contentdeliverymanager\\utils\\dll\\contentmanagementservice.cpp",
        v4);
  }
  else
  {
    return (unsigned int)a3;
  }
  return v5;
}
