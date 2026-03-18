/*
 * XREFs of SdbReadGUIDTag @ 0x14067EE48
 * Callers:
 *     KsepDbGetDriverShims @ 0x1403B70C8 (KsepDbGetDriverShims.c)
 *     KsepDbGetShimInfo @ 0x14061D424 (KsepDbGetShimInfo.c)
 * Callees:
 *     SdbReadBinaryTag @ 0x1403B618C (SdbReadBinaryTag.c)
 *     AslLogCallPrintf @ 0x14051B0D0 (AslLogCallPrintf.c)
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
