/*
 * XREFs of KsepDbGetSdbString @ 0x1406527CC
 * Callers:
 *     KsepDbGetDriverShims @ 0x140513AA4 (KsepDbGetDriverShims.c)
 *     KsepDbGetShimInfo @ 0x1406527FC (KsepDbGetShimInfo.c)
 * Callees:
 *     SdbGetStringTagPtr @ 0x140574250 (SdbGetStringTagPtr.c)
 */

__int64 __fastcall KsepDbGetSdbString(__int64 a1, unsigned int a2, __int64 a3)
{
  _WORD *StringTagPtr; // rax

  StringTagPtr = (_WORD *)SdbGetStringTagPtr(a1, a2);
  if ( StringTagPtr )
    return KsepStringDuplicate(a3, StringTagPtr);
  else
    return 3221225485LL;
}
