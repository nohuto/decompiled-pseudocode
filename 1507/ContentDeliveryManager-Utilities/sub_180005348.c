/*
 * XREFs of sub_180005348 @ 0x180005348
 * Callers:
 *     sub_1800034B0 @ 0x1800034B0 (sub_1800034B0.c)
 *     sub_1800036E0 @ 0x1800036E0 (sub_1800036E0.c)
 * Callees:
 *     sub_1800057DC @ 0x1800057DC (sub_1800057DC.c)
 *     _guard_check_icall_nop @ 0x18000B5A0 (_guard_check_icall_nop.c)
 */

__int64 __fastcall sub_180005348(__int64 a1, __int64 *a2)
{
  __int64 v2; // r14
  __int64 result; // rax

  v2 = *a2;
  if ( *a2 )
  {
    *a2 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  }
  result = sub_1800057DC(a1);
  if ( (int)result >= 0 )
    return (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)a1 + 64LL))(a1, a2);
  return result;
}
