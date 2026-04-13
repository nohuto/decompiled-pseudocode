/*
 * XREFs of sub_180003420 @ 0x180003420
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800025D0 @ 0x1800025D0 (sub_1800025D0.c)
 *     sub_18000384C @ 0x18000384C (sub_18000384C.c)
 *     _guard_check_icall_nop @ 0x18000B5A0 (_guard_check_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_180003420(__int64 a1, __int64 a2)
{
  int v2; // eax
  unsigned int v3; // esi
  __int64 retaddr; // [rsp+48h] [rbp+0h]

  v2 = sub_18000384C(a1, a2);
  v3 = v2;
  if ( v2 >= 0 )
    return 0;
  else
    sub_1800025D0(retaddr, 59, (__int64)"shell\\contentdeliverymanager\\utils\\dll\\contentmanagementbroker.cpp", v2);
  return v3;
}
