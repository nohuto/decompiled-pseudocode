/*
 * XREFs of ObCreateObjectType @ 0x140595F4C
 * Callers:
 *     WmipInitializeSecurity @ 0x1407B9F00 (WmipInitializeSecurity.c)
 *     SepTokenInitialization @ 0x1407BD844 (SepTokenInitialization.c)
 *     ObInitSystem @ 0x1407C266C (ObInitSystem.c)
 *     ExpWin32Initialization @ 0x1407C32A0 (ExpWin32Initialization.c)
 *     PspInitPhase0 @ 0x1407C344C (PspInitPhase0.c)
 *     IoCreateObjectTypes @ 0x1407C39F8 (IoCreateObjectTypes.c)
 *     ExpTimerInitialization @ 0x1407C3D10 (ExpTimerInitialization.c)
 *     MiInitializePartitions @ 0x1407C3F38 (MiInitializePartitions.c)
 *     MiSectionInitialization @ 0x1407C41D0 (MiSectionInitialization.c)
 *     MiInitializeSessionIds @ 0x1407C85DC (MiInitializeSessionIds.c)
 *     CmpCreateObjectTypes @ 0x1407D63B4 (CmpCreateObjectTypes.c)
 *     DbgkpInitializePhase0 @ 0x1407DEA08 (DbgkpInitializePhase0.c)
 *     EtwpInitializeRegistration @ 0x1407DF408 (EtwpInitializeRegistration.c)
 *     ExpInitializeCallbacks @ 0x1407E3A04 (ExpInitializeCallbacks.c)
 *     ExpKeyedEventInitialization @ 0x1407E4030 (ExpKeyedEventInitialization.c)
 *     PspInitializeSiloStructures @ 0x1407E4ED8 (PspInitializeSiloStructures.c)
 *     PopPowerRequestInit @ 0x1407E52C4 (PopPowerRequestInit.c)
 *     ExpWorkerFactoryInitialization @ 0x1407E66C8 (ExpWorkerFactoryInitialization.c)
 *     ExpMutantInitialization @ 0x1407E7998 (ExpMutantInitialization.c)
 *     ExpProfileInitialization @ 0x1407E7DF0 (ExpProfileInitialization.c)
 *     EtwpInitializeRealTimeConnection @ 0x1407E8274 (EtwpInitializeRealTimeConnection.c)
 *     ExpSemaphoreInitialization @ 0x1407E83B8 (ExpSemaphoreInitialization.c)
 *     ExpEventInitialization @ 0x1407E8448 (ExpEventInitialization.c)
 * Callees:
 *     ObCreateObjectTypeEx @ 0x140595F64 (ObCreateObjectTypeEx.c)
 */

__int64 __fastcall ObCreateObjectType(const UNICODE_STRING *a1, __int64 a2, __int64 a3, __int64 a4)
{
  return ObCreateObjectTypeEx(a1, a4);
}
