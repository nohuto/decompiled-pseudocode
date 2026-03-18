/*
 * XREFs of ?MonitorCleanupAdditionalTiming@@YAXXZ @ 0x1C0188F50
 * Callers:
 *     MonitorCleanupGlobal @ 0x1C002C750 (MonitorCleanupGlobal.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1C0065F88 (--3@YAXPEAX@Z.c)
 */

void MonitorCleanupAdditionalTiming(void)
{
  void *v0; // rcx

  while ( 1 )
  {
    v0 = qword_1C0048010;
    if ( !qword_1C0048010 )
      break;
    qword_1C0048010 = *(void **)qword_1C0048010;
    operator delete(v0);
  }
}
