/*
 * XREFs of ??1_Sentry_base@?$basic_ostream@DU?$char_traits@D@std@@@std@@QEAA@XZ @ 0x180050AC8
 * Callers:
 *     _std::operator___std::char_traits_char____::_1_::dtor$1 @ 0x18003A750 (_std--operator___std--char_traits_char____--_1_--dtor$1.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180038F30 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall std::ostream::_Sentry_base::~_Sentry_base(__int64 a1)
{
  __int64 result; // rax
  __int64 v3; // rax

  result = std::ios::rdbuf(*(_QWORD *)a1 + *(int *)(**(_QWORD **)a1 + 4LL));
  if ( result )
  {
    v3 = std::ios::rdbuf(*(_QWORD *)a1 + *(int *)(**(_QWORD **)a1 + 4LL));
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
  }
  return result;
}
