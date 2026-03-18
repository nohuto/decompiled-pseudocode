/*
 * XREFs of KsepDbGetSdbString @ 0x14069BFD4
 * Callers:
 *     KsepDbGetDriverShims @ 0x140577014 (KsepDbGetDriverShims.c)
 *     KsepDbGetShimInfo @ 0x14069C004 (KsepDbGetShimInfo.c)
 * Callees:
 *     SdbGetStringTagPtr @ 0x1405ABAB8 (SdbGetStringTagPtr.c)
 */

__int64 __fastcall KsepDbGetSdbString(__int64 a1, __int64 a2, __int64 a3)
{
  _WORD *StringTagPtr; // rax

  StringTagPtr = (_WORD *)SdbGetStringTagPtr(a1, a2);
  if ( StringTagPtr )
    return KsepStringDuplicate(a3, StringTagPtr);
  else
    return 3221225485LL;
}
