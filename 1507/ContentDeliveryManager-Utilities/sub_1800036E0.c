/*
 * XREFs of sub_1800036E0 @ 0x1800036E0
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800025D0 @ 0x1800025D0 (sub_1800025D0.c)
 *     sub_18000384C @ 0x18000384C (sub_18000384C.c)
 *     sub_180005348 @ 0x180005348 (sub_180005348.c)
 *     _guard_check_icall_nop @ 0x18000B5A0 (_guard_check_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall sub_1800036E0(__int64 a1, __int64 a2)
{
  int v2; // eax
  unsigned int v3; // esi
  int v4; // eax
  int v5; // eax
  __int64 v6; // r14
  __int64 v7; // r14
  __int64 v9; // [rsp+30h] [rbp-20h] BYREF
  __int64 v10; // [rsp+38h] [rbp-18h] BYREF
  _QWORD v11[2]; // [rsp+40h] [rbp-10h] BYREF
  __int64 retaddr; // [rsp+58h] [rbp+8h]

  v11[1] = -2LL;
  v11[0] = 0LL;
  v2 = sub_18000384C(a1, a2);
  v3 = v2;
  if ( v2 >= 0 )
  {
    v9 = 0LL;
    v4 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD, __int64 *, _QWORD *))(*(_QWORD *)v11[0] + 168LL))(
           v11[0],
           0LL,
           0LL,
           0LL,
           &v9,
           v11);
    v3 = v4;
    if ( v4 >= 0 )
    {
      v10 = 0LL;
      v5 = sub_180005348(v9, &v10);
      v3 = v5;
      if ( v5 >= 0 )
        v3 = 0;
      else
        sub_1800025D0(
          retaddr,
          98,
          (__int64)"shell\\contentdeliverymanager\\utils\\dll\\contentmanagementbroker.cpp",
          v5);
      v6 = v10;
      if ( v10 )
      {
        v10 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
      }
    }
    else
    {
      sub_1800025D0(retaddr, 95, (__int64)"shell\\contentdeliverymanager\\utils\\dll\\contentmanagementbroker.cpp", v4);
    }
    v7 = v9;
    if ( v9 )
    {
      v9 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
    }
  }
  else
  {
    sub_1800025D0(retaddr, 88, (__int64)"shell\\contentdeliverymanager\\utils\\dll\\contentmanagementbroker.cpp", v2);
  }
  return v3;
}
