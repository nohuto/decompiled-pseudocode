/*
 * XREFs of ExQueryBootEntropyInformation @ 0x140598048
 * Callers:
 *     ExpQuerySystemInformation @ 0x14042E880 (ExpQuerySystemInformation.c)
 *     Phase1InitializationIoReady @ 0x1407D05E0 (Phase1InitializationIoReady.c)
 * Callees:
 *     RtlRunOnceExecuteOnce @ 0x14050B5E8 (RtlRunOnceExecuteOnce.c)
 */

NTSTATUS __fastcall ExQueryBootEntropyInformation(__int64 a1)
{
  NTSTATUS result; // eax
  __int64 Parameter; // [rsp+30h] [rbp+8h] BYREF

  Parameter = a1;
  result = RtlRunOnceExecuteOnce(&ExpBootEntropyInit, ExpInitBootEntropyInformation, &Parameter, 0LL);
  if ( result >= 0 && Parameter != -1 )
    return -1073741823;
  return result;
}
