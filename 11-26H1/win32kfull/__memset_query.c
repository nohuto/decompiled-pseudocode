/*
 * XREFs of __memset_query @ 0x1403503C0
 * Callers:
 *     __memset_repmovs @ 0x140350340 (__memset_repmovs.c)
 * Callees:
 *     __cpu_features_init @ 0x140297D90 (__cpu_features_init.c)
 */

void _memset_query()
{
  _cpu_features_init();
}
