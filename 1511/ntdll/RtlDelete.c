/*
 * XREFs of RtlDelete @ 0x18006D950
 * Callers:
 *     RtlDeleteElementGenericTable @ 0x18006D420 (RtlDeleteElementGenericTable.c)
 *     RtlpTpIoDllLoaded @ 0x18008D098 (RtlpTpIoDllLoaded.c)
 *     PfxRemovePrefix @ 0x1800D6BD0 (PfxRemovePrefix.c)
 * Callees:
 *     SwapSplayLinks @ 0x18006DAA0 (SwapSplayLinks.c)
 *     RtlSubtreePredecessor @ 0x18006DBD0 (RtlSubtreePredecessor.c)
 */

__int64 *__fastcall RtlDelete(__int64 *a1)
{
  __int64 v2; // rax
  __int64 *result; // rax
  __int64 v4; // rcx
  __int64 **v5; // rdx
  __int64 v6; // rcx
  _QWORD *v7; // rax

  if ( a1[1] && a1[2] )
  {
    v2 = RtlSubtreePredecessor();
    SwapSplayLinks(v2, a1);
  }
  result = (__int64 *)a1[1];
  if ( result )
    goto LABEL_5;
  if ( a1[2] )
  {
    result = (__int64 *)a1[2];
LABEL_5:
    v4 = *a1;
    if ( (__int64 *)*a1 != a1 )
    {
      v5 = (__int64 **)(v4 + 8);
      if ( *(__int64 **)(v4 + 8) != a1 )
        v5 = (__int64 **)(v4 + 16);
      *v5 = result;
      v6 = *a1;
      *result = *a1;
      return (__int64 *)RtlSplay(v6);
    }
    *result = (__int64)result;
    return result;
  }
  v6 = *a1;
  if ( (__int64 *)*a1 != a1 )
  {
    v7 = (_QWORD *)(v6 + 8);
    if ( *(__int64 **)(v6 + 8) != a1 )
      v7 = (_QWORD *)(v6 + 16);
    *v7 = 0LL;
    return (__int64 *)RtlSplay(v6);
  }
  return 0LL;
}
