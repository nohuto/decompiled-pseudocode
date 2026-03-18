/*
 * XREFs of ?MonitorCleanupAdditionalTiming@@YAXXZ @ 0x1C018473C
 * Callers:
 *     MonitorCleanupGlobal @ 0x1C002CD40 (MonitorCleanupGlobal.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1C00689D8 (--3@YAXPEAX@Z.c)
 */

void MonitorCleanupAdditionalTiming(void)
{
  void *v0; // rcx

  while ( 1 )
  {
    v0 = qword_1C0047F90;
    if ( !qword_1C0047F90 )
      break;
    qword_1C0047F90 = *(void **)qword_1C0047F90;
    operator delete(v0);
  }
}
