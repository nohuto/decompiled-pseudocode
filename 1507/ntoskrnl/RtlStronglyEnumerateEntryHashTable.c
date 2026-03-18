/*
 * XREFs of RtlStronglyEnumerateEntryHashTable @ 0x14024842C
 * Callers:
 *     <none>
 * Callees:
 *     RtlpGetChainHead @ 0x14002D164 (RtlpGetChainHead.c)
 */

_QWORD *__fastcall RtlStronglyEnumerateEntryHashTable(__int64 a1, __int64 a2)
{
  unsigned int v2; // r10d
  __int64 v3; // r9
  unsigned int v4; // r11d
  unsigned int v6; // edx
  _QWORD *result; // rax
  _QWORD *v8; // rcx

  v2 = *(_DWORD *)(a2 + 32);
  v3 = a2;
  v4 = *(_DWORD *)(a1 + 8);
  v6 = v2;
  if ( v2 < v4 )
  {
    while ( 2 )
    {
      if ( v6 == v2 )
      {
        result = *(_QWORD **)v3;
        v8 = *(_QWORD **)(v3 + 24);
      }
      else
      {
        result = (_QWORD *)RtlpGetChainHead(a1, v6);
        v8 = result;
      }
      while ( (_QWORD *)*result != v8 )
      {
        result = (_QWORD *)*result;
        if ( result[2] )
        {
          *(_DWORD *)(v3 + 32) = v6;
          *(_QWORD *)(v3 + 24) = v8;
          *(_QWORD *)v3 = result;
          return result;
        }
      }
      if ( ++v6 < v4 )
        continue;
      break;
    }
  }
  return 0LL;
}
