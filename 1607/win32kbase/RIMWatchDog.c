/*
 * XREFs of RIMWatchDog @ 0x1C0012970
 * Callers:
 *     <none>
 * Callees:
 *     RIMArmWatchDog @ 0x1C0010490 (RIMArmWatchDog.c)
 *     RIMUnlockExclusive @ 0x1C0012A60 (RIMUnlockExclusive.c)
 *     RIMLockExclusive @ 0x1C0012A80 (RIMLockExclusive.c)
 *     DbgPrintRIMAlways @ 0x1C00C0E60 (DbgPrintRIMAlways.c)
 *     WPP_RECORDER_SF_qqqD @ 0x1C00CDC84 (WPP_RECORDER_SF_qqqD.c)
 */

__int64 RIMWatchDog()
{
  struct _LIST_ENTRY *Flink; // rbx
  int v1; // edi
  int v3; // edx
  int v4; // r8d

  RIMLockExclusive(&gObListLock);
  RIMLockExclusive(&gWatchDogQPCLock);
  Flink = gObRimList.Flink;
  v1 = 0;
  if ( gObRimList.Flink == &gObRimList )
    goto LABEL_15;
  do
  {
    if ( LODWORD(Flink[51].Blink) )
    {
      if ( !Flink[51].Flink || BYTE1(Flink[3].Blink) || LOBYTE(Flink[3].Blink) || LOBYTE(Flink[43].Blink) )
      {
        LODWORD(Flink[51].Blink) = 0;
      }
      else
      {
        v1 = 1;
        if ( (struct _LIST_ENTRY *)(*(_QWORD *)&KeQueryPerformanceCounter(0LL) - (unsigned __int64)Flink[51].Flink) > Flink[50].Blink )
        {
          LODWORD(Flink[51].Blink) = 0;
          WPP_RECORDER_SF_qqqD(
            WPP_GLOBAL_Control->DeviceExtension,
            v3,
            v4,
            16,
            (__int64)&WPP_88236c213bf436c45adfdbc67a1eb72d_Traceguids,
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
  if ( v1 )
  {
    RIMArmWatchDog();
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
