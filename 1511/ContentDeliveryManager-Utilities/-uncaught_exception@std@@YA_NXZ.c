/*
 * XREFs of ?uncaught_exception@std@@YA_NXZ @ 0x1800235D4
 * Callers:
 *     ?flush@?$basic_ostream@GU?$char_traits@G@std@@@std@@QEAAAEAV12@XZ @ 0x180012094 (-flush@-$basic_ostream@GU-$char_traits@G@std@@@std@@QEAAAEAV12@XZ.c)
 *     ??1sentry@?$basic_ostream@GU?$char_traits@G@std@@@std@@QEAA@XZ @ 0x1800121C0 (--1sentry@-$basic_ostream@GU-$char_traits@G@std@@@std@@QEAA@XZ.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
bool std::uncaught_exception(void)
{
  return __uncaught_exception();
}
