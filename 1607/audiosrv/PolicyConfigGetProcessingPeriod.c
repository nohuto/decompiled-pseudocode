/*
 * XREFs of PolicyConfigGetProcessingPeriod @ 0x180070280
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180038F30 (_guard_dispatch_icall_nop.c)
 */

__int64 PolicyConfigGetProcessingPeriod()
{
  return (*(__int64 (__fastcall **)(CPolicyConfig *))(*(_QWORD *)g_PolicyConfig + 56LL))(g_PolicyConfig);
}
