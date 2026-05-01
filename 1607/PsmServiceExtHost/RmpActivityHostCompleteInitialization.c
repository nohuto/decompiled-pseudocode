/*
 * XREFs of RmpActivityHostCompleteInitialization @ 0x1800060A4
 * Callers:
 *     RmpActivityHostCreateHostPsm @ 0x180005F08 (RmpActivityHostCreateHostPsm.c)
 *     RmpActivityHostCreateHostJobObject @ 0x18002ED74 (RmpActivityHostCreateHostJobObject.c)
 *     RmpActivityHostCreateHostProcess @ 0x18002EDFC (RmpActivityHostCreateHostProcess.c)
 * Callees:
 *     RmpObjectAddRef @ 0x180006058 (RmpObjectAddRef.c)
 */

void __fastcall RmpActivityHostCompleteInitialization(struct _RM_ACTIVITY_HOST *a1)
{
  QueryUnbiasedInterruptTime((PULONGLONG)a1 + 138);
  RmpObjectAddRef((__int64)a1);
  RmpActivityHostAddToTables(a1);
}
