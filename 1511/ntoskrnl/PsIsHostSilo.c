/*
 * XREFs of PsIsHostSilo @ 0x140079E50
 * Callers:
 *     OBP_GET_SILO_ROOT_DIRECTORY_FROM_SILO @ 0x140079DFC (OBP_GET_SILO_ROOT_DIRECTORY_FROM_SILO.c)
 *     PsGetServerSiloState @ 0x1400D5430 (PsGetServerSiloState.c)
 *     EtwTraceContextSwap @ 0x14011EA60 (EtwTraceContextSwap.c)
 *     PspTerminateAllThreads @ 0x1403F2750 (PspTerminateAllThreads.c)
 *     ObpLookupObjectName @ 0x14040E3D0 (ObpLookupObjectName.c)
 *     IopParseDevice @ 0x140412F10 (IopParseDevice.c)
 *     IopAllocRealFileObject @ 0x140414F70 (IopAllocRealFileObject.c)
 *     AlpcpExposeTokenAttribute @ 0x14042B240 (AlpcpExposeTokenAttribute.c)
 *     SepCreateClientSecurityEx @ 0x14042C5D0 (SepCreateClientSecurityEx.c)
 *     IopAllocateFoExtensionsOnCreate @ 0x14048F628 (IopAllocateFoExtensionsOnCreate.c)
 *     SeCreateClientSecurityEx @ 0x1404A629C (SeCreateClientSecurityEx.c)
 *     EtwpServerSiloCreateNotify @ 0x140526A2C (EtwpServerSiloCreateNotify.c)
 *     SepRmCommandServerThread @ 0x14053C31C (SepRmCommandServerThread.c)
 *     SepUpdateSiloInClientSecurity @ 0x14065335C (SepUpdateSiloInClientSecurity.c)
 * Callees:
 *     <none>
 */

bool __fastcall PsIsHostSilo(__int64 a1)
{
  return a1 == 0;
}
