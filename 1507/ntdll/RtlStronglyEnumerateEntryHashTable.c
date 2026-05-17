/*
 * XREFs of RtlStronglyEnumerateEntryHashTable @ 0x1800DBB80
 * Callers:
 *     <none>
 * Callees:
 *     RtlpGetChainHead @ 0x180065834 (RtlpGetChainHead.c)
 */

_QWORD *__fastcall RtlStronglyEnumerateEntryHashTable(__int64 a1, __int64 a2)
{
  __int64 v2; // r9
  __int64 v3; // r10
  unsigned int v4; // edx
  _QWORD *result; // rax
  _QWORD *v6; // rcx

  v2 = a2;
  v3 = a1;
  v4 = *(_DWORD *)(a2 + 32);
  if ( v4 < *(_DWORD *)(a1 + 8) )
  {
    while ( 2 )
    {
      if ( v4 == *(_DWORD *)(v2 + 32) )
      {
        result = *(_QWORD **)v2;
        v6 = *(_QWORD **)(v2 + 24);
      }
      else
      {
        result = (_QWORD *)RtlpGetChainHead(v3, v4);
        v6 = result;
      }
      while ( (_QWORD *)*result != v6 )
      {
        result = (_QWORD *)*result;
        if ( result[2] )
        {
          *(_DWORD *)(v2 + 32) = v4;
          *(_QWORD *)(v2 + 24) = v6;
          *(_QWORD *)v2 = result;
          return result;
        }
      }
      if ( ++v4 < *(_DWORD *)(v3 + 8) )
        continue;
      break;
    }
  }
  return 0LL;
}
