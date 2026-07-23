/*
 * XREFs of PsQueryCurrentApiSetSchema @ 0x1404CD96C
 * Callers:
 *     MiResolveImageReferences @ 0x14046B54C (MiResolveImageReferences.c)
 *     ExIsMultiSessionSku @ 0x14057F828 (ExIsMultiSessionSku.c)
 * Callees:
 *     PsGetCurrentServerSiloGlobals @ 0x14008BD70 (PsGetCurrentServerSiloGlobals.c)
 *     MmQueryApiSetSchema @ 0x1400B0D70 (MmQueryApiSetSchema.c)
 *     PsIsCurrentThreadInServerSilo @ 0x1400C1B90 (PsIsCurrentThreadInServerSilo.c)
 */

__int64 PsQueryCurrentApiSetSchema()
{
  __int64 v1; // [rsp+30h] [rbp+8h] BYREF
  __int64 v2; // [rsp+38h] [rbp+10h] BYREF

  if ( PsIsCurrentThreadInServerSilo() )
    return *((_QWORD *)PsGetCurrentServerSiloGlobals() + 119);
  MmQueryApiSetSchema(&v1, &v2);
  return *(_QWORD *)v1;
}
