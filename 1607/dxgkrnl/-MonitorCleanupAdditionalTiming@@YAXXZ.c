/*
 * XREFs of ?MonitorCleanupAdditionalTiming@@YAXXZ @ 0x1C01B2910
 * Callers:
 *     MonitorCleanupGlobal @ 0x1C0034F80 (MonitorCleanupGlobal.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1C007F918 (--3@YAXPEAX@Z.c)
 */

void MonitorCleanupAdditionalTiming(void)
{
  void *v0; // rcx

  while ( 1 )
  {
    v0 = qword_1C0058230;
    if ( !qword_1C0058230 )
      break;
    qword_1C0058230 = *(void **)qword_1C0058230;
    operator delete(v0);
  }
}
