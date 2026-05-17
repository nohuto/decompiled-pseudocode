/*
 * XREFs of RtlDelete @ 0x1800637D0
 * Callers:
 *     RtlDeleteElementGenericTable @ 0x180063280 (RtlDeleteElementGenericTable.c)
 *     RtlpTpIoDllLoaded @ 0x180090048 (RtlpTpIoDllLoaded.c)
 *     PfxRemovePrefix @ 0x1800DF520 (PfxRemovePrefix.c)
 * Callees:
 *     SwapSplayLinks @ 0x180063920 (SwapSplayLinks.c)
 *     RtlSubtreePredecessor @ 0x180063A50 (RtlSubtreePredecessor.c)
 */

__int64 *__fastcall RtlDelete(__int64 *a1)
{
  __int64 v2; // rax
  __int64 *result; // rax
  __int64 v4; // rcx
  _QWORD *v5; // rax
  __int64 v6; // rcx
  __int64 **v7; // rdx
  __int64 v8; // rcx

  if ( a1[1] && a1[2] )
  {
    v2 = RtlSubtreePredecessor();
    SwapSplayLinks(v2, a1);
  }
  result = (__int64 *)a1[1];
  if ( !result )
  {
    if ( !a1[2] )
    {
      v4 = *a1;
      if ( (__int64 *)*a1 == a1 )
        return 0LL;
      v5 = (_QWORD *)(v4 + 8);
      if ( *(__int64 **)(v4 + 8) != a1 )
        v5 = (_QWORD *)(v4 + 16);
      *v5 = 0LL;
      return (__int64 *)RtlSplay(v4);
    }
    result = (__int64 *)a1[2];
  }
  v6 = *a1;
  if ( (__int64 *)*a1 == a1 )
  {
    *result = (__int64)result;
  }
  else
  {
    v7 = (__int64 **)(v6 + 8);
    if ( *(__int64 **)(v6 + 8) != a1 )
      v7 = (__int64 **)(v6 + 16);
    *v7 = result;
    v8 = *a1;
    *result = *a1;
    return (__int64 *)RtlSplay(v8);
  }
  return result;
}
