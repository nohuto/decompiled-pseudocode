/*
 * XREFs of SdbReadGUIDTag @ 0x140703C9C
 * Callers:
 *     KsepDbGetDriverShims @ 0x140577014 (KsepDbGetDriverShims.c)
 *     KsepDbGetShimInfo @ 0x14069C004 (KsepDbGetShimInfo.c)
 * Callees:
 *     SdbReadBinaryTag @ 0x1405745EC (SdbReadBinaryTag.c)
 *     AslLogCallPrintf @ 0x1405AB1C4 (AslLogCallPrintf.c)
 */

_OWORD *__fastcall SdbReadGUIDTag(_OWORD *a1, __int64 a2, unsigned int a3, _OWORD *a4)
{
  if ( !(unsigned int)SdbReadBinaryTag(a2, a3, (__int64)a1, 0x10u) )
  {
    AslLogCallPrintf(1LL);
    *a1 = *a4;
  }
  return a1;
}
