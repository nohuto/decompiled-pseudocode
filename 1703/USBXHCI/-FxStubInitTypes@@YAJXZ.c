/*
 * XREFs of ?FxStubInitTypes@@YAJXZ @ 0x1C00107F0
 * Callers:
 *     DriverEntry_0 @ 0x1C0010680 (DriverEntry_0.c)
 * Callees:
 *     <none>
 */

__int64 FxStubInitTypes(void)
{
  if ( &__KMDF_TYPE_INIT_START <= &__KMDF_TYPE_INIT_END )
    return 0LL;
  else
    return 3221225595LL;
}
