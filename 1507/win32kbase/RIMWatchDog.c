/*
 * XREFs of RIMWatchDog @ 0x1C0052330
 * Callers:
 *     <none>
 * Callees:
 *     RIMUnlockExclusive @ 0x1C00523F0 (RIMUnlockExclusive.c)
 *     RIMLockExclusive @ 0x1C0052410 (RIMLockExclusive.c)
 *     RIMArmWatchDog @ 0x1C006EF8C (RIMArmWatchDog.c)
 *     DbgPrintRIMAlways @ 0x1C00B3870 (DbgPrintRIMAlways.c)
 *     WPP_RECORDER_SF_qqqD @ 0x1C00C0844 (WPP_RECORDER_SF_qqqD.c)
 */

__int64 RIMWatchDog()
{
  __int64 v0; // rcx
  struct _LIST_ENTRY *Flink; // rbx
  int v2; // edi
  int v4; // edx
  int v5; // r8d

  RIMLockExclusive(&gObListLock);
  RIMLockExclusive(&gWatchDogQPCLock);
  Flink = gObRimList.Flink;
  v2 = 0;
  if ( gObRimList.Flink == &gObRimList )
    goto LABEL_15;
  do
  {
    if ( LODWORD(Flink[51].Blink) )
    {
      if ( !Flink[51].Flink || BYTE1(Flink[3].Blink) || LOBYTE(Flink[3].Blink) || LOBYTE(Flink[44].Blink) )
      {
        LODWORD(Flink[51].Blink) = 0;
      }
      else
      {
        v2 = 1;
        if ( (struct _LIST_ENTRY *)(*(_QWORD *)&KeQueryPerformanceCounter(0LL) - (unsigned __int64)Flink[51].Flink) > Flink[50].Blink )
        {
          LODWORD(Flink[51].Blink) = 0;
          WPP_RECORDER_SF_qqqD(
            WPP_GLOBAL_Control->DeviceExtension,
            v4,
            v5,
            13,
            (__int64)&WPP_4147cb9e2f3f5911ed13e12165a50882_Traceguids,
            (char)Flink[3].Flink,
            (char)Flink[1].Flink,
            (char)Flink[1].Blink,
            HIDWORD(Flink[3].Blink));
          DbgPrintRIMAlways("WATCHDOG: hRim:%p[P:%p,T:%p]dwInputType:%08x delayed read\n");
        }
      }
    }
    Flink = Flink->Flink;
  }
  while ( Flink != &gObRimList );
  if ( v2 )
  {
    RIMArmWatchDog(v0);
  }
  else
  {
LABEL_15:
    if ( gWatchDogTimer && gbWatchDogTimerArmed )
    {
      gbWatchDogTimerArmed = 0;
      KeCancelTimer(gWatchDogTimer);
    }
  }
  RIMUnlockExclusive(&gWatchDogQPCLock);
  return RIMUnlockExclusive(&gObListLock);
}
