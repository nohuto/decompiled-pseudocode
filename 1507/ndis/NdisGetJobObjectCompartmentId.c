/*
 * XREFs of NdisGetJobObjectCompartmentId @ 0x1C0061670
 * Callers:
 *     NdisGetProcessObjectCompartmentId @ 0x1C000DAB0 (NdisGetProcessObjectCompartmentId.c)
 *     ndisNsiGetAllJobInformation @ 0x1C00D8270 (ndisNsiGetAllJobInformation.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall NdisGetJobObjectCompartmentId(__int64 a1)
{
  unsigned int v1; // ebx
  unsigned int *JobProperty; // rax

  v1 = 0;
  JobProperty = (unsigned int *)PsGetJobProperty(a1, 1934522190LL);
  if ( JobProperty )
  {
    v1 = *JobProperty;
    ObfDereferenceObject(JobProperty);
  }
  return v1;
}
