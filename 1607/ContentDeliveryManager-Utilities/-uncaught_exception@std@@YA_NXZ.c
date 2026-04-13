/*
 * XREFs of ?uncaught_exception@std@@YA_NXZ @ 0x1800548CC
 * Callers:
 *     ??1sentry@?$basic_ostream@GU?$char_traits@G@std@@@std@@QEAA@XZ @ 0x180024AFC (--1sentry@-$basic_ostream@GU-$char_traits@G@std@@@std@@QEAA@XZ.c)
 *     ?flush@?$basic_ostream@GU?$char_traits@G@std@@@std@@QEAAAEAV12@XZ @ 0x1800255F8 (-flush@-$basic_ostream@GU-$char_traits@G@std@@@std@@QEAAAEAV12@XZ.c)
 *     ??$?6GU?$char_traits@G@std@@@std@@YAAEAV?$basic_ostream@GU?$char_traits@G@std@@@0@AEAV10@PEBG@Z @ 0x1800384E4 (--$-6GU-$char_traits@G@std@@@std@@YAAEAV-$basic_ostream@GU-$char_traits@G@std@@@0@AEAV10@PEBG@Z.c)
 *     ??6?$basic_ostream@GU?$char_traits@G@std@@@std@@QEAAAEAV01@G@Z @ 0x180053618 (--6-$basic_ostream@GU-$char_traits@G@std@@@std@@QEAAAEAV01@G@Z.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
bool std::uncaught_exception(void)
{
  return __uncaught_exception();
}
