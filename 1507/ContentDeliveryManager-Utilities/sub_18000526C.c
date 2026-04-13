/*
 * XREFs of sub_18000526C @ 0x18000526C
 * Callers:
 *     sub_1800034B0 @ 0x1800034B0 (sub_1800034B0.c)
 *     sub_18000384C @ 0x18000384C (sub_18000384C.c)
 * Callees:
 *     _guard_check_icall_nop @ 0x18000B5A0 (_guard_check_icall_nop.c)
 */

__int64 __fastcall sub_18000526C(__int64 a1, __int64 *a2)
{
  __int64 v2; // rdi
  int v5; // ebp
  __int64 v7; // [rsp+40h] [rbp+18h] BYREF

  v2 = *a2;
  if ( *a2 )
  {
    *a2 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  }
  *a2 = 0LL;
  v5 = RoActivateInstance(a1, &v7);
  if ( v5 >= 0 )
  {
    v5 = (**(__int64 (__fastcall ***)(__int64, __int64 *, __int64 *))v7)(v7, &qword_18002C050, a2);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  }
  return (unsigned int)v5;
}
