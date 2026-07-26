/*
 * XREFs of NdisGetJobObjectCompartmentId @ 0x1C0065320
 * Callers:
 *     NdisGetProcessObjectCompartmentId @ 0x1C0065360 (NdisGetProcessObjectCompartmentId.c)
 *     NdisSetJobObjectCompartmentId @ 0x1C00D77D4 (NdisSetJobObjectCompartmentId.c)
 *     ndisNsiGetAllJobInformation @ 0x1C00D7960 (ndisNsiGetAllJobInformation.c)
 * Callees:
 *     NdisGetSessionCompartmentId @ 0x1C000D3B0 (NdisGetSessionCompartmentId.c)
 */

__int64 __fastcall NdisGetJobObjectCompartmentId(__int64 a1)
{
  unsigned int *JobProperty; // rax
  unsigned int v3; // ebx
  unsigned int JobSessionId; // eax

  JobProperty = (unsigned int *)PsGetJobProperty(a1, 1833133134LL);
  if ( JobProperty )
  {
    v3 = *JobProperty;
    ObfDereferenceObject(JobProperty);
  }
  else
  {
    JobSessionId = PsGetJobSessionId(a1);
    return (unsigned int)NdisGetSessionCompartmentId(JobSessionId);
  }
  return v3;
}
