/*
 * XREFs of AlpcpViewSearchCallbackFunction @ 0x14047C064
 * Callers:
 *     AlpcpEnumerateResourcesPort @ 0x14047BF9C (AlpcpEnumerateResourcesPort.c)
 * Callees:
 *     AlpcpReferenceBlob @ 0x14047CD18 (AlpcpReferenceBlob.c)
 */

__int64 __fastcall AlpcpViewSearchCallbackFunction(ULONG_PTR a1, _QWORD *a2)
{
  if ( *(_QWORD *)(a1 + 40) != *a2 )
    return 0LL;
  if ( !AlpcpReferenceBlob(a1) )
    return 3221226029LL;
  a2[1] = a1;
  return 3221225473LL;
}
