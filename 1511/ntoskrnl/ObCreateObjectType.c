/*
 * XREFs of ObCreateObjectType @ 0x140525B3C
 * Callers:
 *     CmpCreateObjectTypes @ 0x1407432E4 (CmpCreateObjectTypes.c)
 *     MiInitializeSessionIds @ 0x14074DDB0 (MiInitializeSessionIds.c)
 *     WmipInitializeSecurity @ 0x140752D78 (WmipInitializeSecurity.c)
 *     ObInitSystem @ 0x140758E84 (ObInitSystem.c)
 *     ExpWin32Initialization @ 0x140759920 (ExpWin32Initialization.c)
 *     PspInitPhase0 @ 0x140759ACC (PspInitPhase0.c)
 *     IoCreateObjectTypes @ 0x14075A078 (IoCreateObjectTypes.c)
 *     ExpTimerInitialization @ 0x14075A390 (ExpTimerInitialization.c)
 *     MiInitializePartitions @ 0x14075A5B8 (MiInitializePartitions.c)
 *     MiSectionInitialization @ 0x14075A850 (MiSectionInitialization.c)
 *     DbgkpInitializePhase0 @ 0x14075AACC (DbgkpInitializePhase0.c)
 *     ExpKeyedEventInitialization @ 0x14075AE80 (ExpKeyedEventInitialization.c)
 *     ExpProfileInitialization @ 0x14075B16C (ExpProfileInitialization.c)
 *     ExpMutantInitialization @ 0x14075B210 (ExpMutantInitialization.c)
 *     ExpSemaphoreInitialization @ 0x14075B2D4 (ExpSemaphoreInitialization.c)
 *     ExpEventInitialization @ 0x14075B364 (ExpEventInitialization.c)
 *     ExpInitializeCallbacks @ 0x14075B3F4 (ExpInitializeCallbacks.c)
 *     EtwpInitializeRealTimeConnection @ 0x14075B5BC (EtwpInitializeRealTimeConnection.c)
 *     EtwpInitializeRegistration @ 0x14075B66C (EtwpInitializeRegistration.c)
 *     SepTokenInitialization @ 0x14075B748 (SepTokenInitialization.c)
 *     PopPowerRequestInit @ 0x14075B800 (PopPowerRequestInit.c)
 *     ExpWorkerFactoryInitialization @ 0x140770774 (ExpWorkerFactoryInitialization.c)
 * Callees:
 *     ObCreateObjectTypeEx @ 0x140525B54 (ObCreateObjectTypeEx.c)
 */

__int64 __fastcall ObCreateObjectType(const UNICODE_STRING *a1, __int64 a2, __int64 a3, __int64 a4)
{
  return ObCreateObjectTypeEx(a1, a4);
}
