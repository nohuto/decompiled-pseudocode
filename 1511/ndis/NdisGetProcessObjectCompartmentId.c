/*
 * XREFs of NdisGetProcessObjectCompartmentId @ 0x1C000F850
 * Callers:
 *     <none>
 * Callees:
 *     NdisGetSessionCompartmentId @ 0x1C000F880 (NdisGetSessionCompartmentId.c)
 *     NdisGetJobObjectCompartmentId @ 0x1C0060F00 (NdisGetJobObjectCompartmentId.c)
 */

__int64 __fastcall NdisGetProcessObjectCompartmentId(__int64 a1)
{
  __int64 ProcessJob; // rax
  unsigned int ProcessSessionId; // eax
  __int64 result; // rax

  ProcessJob = PsGetProcessJob();
  if ( !ProcessJob || (result = NdisGetJobObjectCompartmentId(ProcessJob), !(_DWORD)result) )
  {
    ProcessSessionId = PsGetProcessSessionId(a1);
    return NdisGetSessionCompartmentId(ProcessSessionId);
  }
  return result;
}
