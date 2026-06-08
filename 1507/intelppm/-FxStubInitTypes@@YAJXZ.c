/*
 * XREFs of ?FxStubInitTypes@@YAJXZ @ 0x1C0001D7C
 * Callers:
 *     FxDriverEntryWorker @ 0x1C0001A48 (FxDriverEntryWorker.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0002260 (_guard_dispatch_icall_nop.c)
 */

__int64 FxStubInitTypes(void)
{
  if ( &__KMDF_TYPE_INIT_START > &__KMDF_TYPE_INIT_END )
    return 3221225595LL;
  else
    return 0LL;
}
