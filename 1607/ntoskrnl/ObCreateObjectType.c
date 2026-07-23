/*
 * XREFs of ObCreateObjectType @ 0x14055257C
 * Callers:
 *     WmipInitializeSecurity @ 0x14079C7B4 (WmipInitializeSecurity.c)
 *     PspInitializeSiloStructures @ 0x14079DE5C (PspInitializeSiloStructures.c)
 *     ExpTimerInitialization @ 0x14079DF80 (ExpTimerInitialization.c)
 *     PspInitPhase0 @ 0x14079E090 (PspInitPhase0.c)
 *     ExpWin32Initialization @ 0x14079E650 (ExpWin32Initialization.c)
 *     IoCreateObjectTypes @ 0x14079E844 (IoCreateObjectTypes.c)
 *     ObInitSystem @ 0x1407A0370 (ObInitSystem.c)
 *     MiInitializePartitions @ 0x1407A1300 (MiInitializePartitions.c)
 *     MiSectionInitialization @ 0x1407A1524 (MiSectionInitialization.c)
 *     DbgkpInitializePhase0 @ 0x1407A1790 (DbgkpInitializePhase0.c)
 *     ExpKeyedEventInitialization @ 0x1407A1B44 (ExpKeyedEventInitialization.c)
 *     ExpProfileInitialization @ 0x1407A1E30 (ExpProfileInitialization.c)
 *     ExpMutantInitialization @ 0x1407A1ED4 (ExpMutantInitialization.c)
 *     ExpSemaphoreInitialization @ 0x1407A1F98 (ExpSemaphoreInitialization.c)
 *     ExpEventInitialization @ 0x1407A2028 (ExpEventInitialization.c)
 *     ExpInitializeCallbacks @ 0x1407A20B8 (ExpInitializeCallbacks.c)
 *     EtwpInitializeRealTimeConnection @ 0x1407A2280 (EtwpInitializeRealTimeConnection.c)
 *     EtwpInitializeRegistration @ 0x1407A2330 (EtwpInitializeRegistration.c)
 *     SepTokenInitialization @ 0x1407A240C (SepTokenInitialization.c)
 *     MiInitializeSessionIds @ 0x1407A66AC (MiInitializeSessionIds.c)
 *     CmpCreateObjectTypes @ 0x1407ABF40 (CmpCreateObjectTypes.c)
 *     PopPowerRequestInit @ 0x1407BA2C4 (PopPowerRequestInit.c)
 *     ExpWorkerFactoryInitialization @ 0x1407BB3A4 (ExpWorkerFactoryInitialization.c)
 * Callees:
 *     ObCreateObjectTypeEx @ 0x140552594 (ObCreateObjectTypeEx.c)
 */

__int64 __fastcall ObCreateObjectType(const UNICODE_STRING *a1, __int64 a2, __int64 a3, __int64 a4)
{
  return ObCreateObjectTypeEx(a1, a4);
}
