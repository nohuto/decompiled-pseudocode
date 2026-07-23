/*
 * XREFs of SdbReadGUIDTag @ 0x1406C40E8
 * Callers:
 *     KsepDbGetDriverShims @ 0x140513AA4 (KsepDbGetDriverShims.c)
 *     KsepDbGetShimInfo @ 0x1406527FC (KsepDbGetShimInfo.c)
 * Callees:
 *     SdbReadBinaryTag @ 0x140495F50 (SdbReadBinaryTag.c)
 *     AslLogCallPrintf @ 0x1406C593C (AslLogCallPrintf.c)
 */

_OWORD *__fastcall SdbReadGUIDTag(_OWORD *a1, __int64 a2, unsigned int a3, _OWORD *a4)
{
  if ( !(unsigned int)SdbReadBinaryTag(a2, a3, (__int64)a1, 0x10u) )
  {
    AslLogCallPrintf(1, (unsigned int)"SdbReadGUIDTag", 146, (unsigned int)"Failed to read GUID");
    *a1 = *a4;
  }
  return a1;
}
