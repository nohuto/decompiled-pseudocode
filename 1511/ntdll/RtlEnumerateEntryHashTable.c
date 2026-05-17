/*
 * XREFs of RtlEnumerateEntryHashTable @ 0x18006FCB0
 * Callers:
 *     RtlWeaklyEnumerateEntryHashTable @ 0x1800E2260 (RtlWeaklyEnumerateEntryHashTable.c)
 * Callees:
 *     RtlpGetChainHead @ 0x18006FD6C (RtlpGetChainHead.c)
 */

__int64 **__fastcall RtlEnumerateEntryHashTable(__int64 a1, __int64 *a2)
{
  unsigned int v2; // r10d
  __int64 *v3; // r9
  __int64 v4; // r11
  __int64 **result; // rax
  __int64 *v6; // rcx
  __int64 *v7; // r8
  __int64 **v8; // rdx
  __int64 *v9; // rdx
  __int64 *v10; // rcx

  v2 = *((_DWORD *)a2 + 8);
  v3 = a2;
  v4 = a1;
  if ( v2 < *(_DWORD *)(a1 + 8) )
  {
    while ( 2 )
    {
      if ( v2 == *((_DWORD *)v3 + 8) )
      {
        v6 = (__int64 *)v3[3];
        result = (__int64 **)v3;
      }
      else
      {
        result = (__int64 **)RtlpGetChainHead(v4, v2);
        v6 = (__int64 *)result;
      }
      while ( *result != v6 )
      {
        result = (__int64 **)*result;
        if ( result[2] )
        {
          v7 = (__int64 *)*v3;
          v8 = (__int64 **)v3[1];
          if ( *(__int64 **)(*v3 + 8) != v3 || *v8 != v3 )
            __fastfail(3u);
          *v8 = v7;
          v7[1] = (__int64)v8;
          v9 = (__int64 *)v3[3];
          if ( v9 != v6 )
          {
            if ( (__int64 *)*v9 == v9 )
              --*(_DWORD *)(v4 + 24);
            if ( (__int64 *)*v6 == v6 )
              ++*(_DWORD *)(v4 + 24);
          }
          *((_DWORD *)v3 + 8) = v2;
          v3[3] = (__int64)v6;
          v10 = *result;
          *v3 = (__int64)*result;
          v3[1] = (__int64)result;
          if ( (__int64 **)v10[1] != result )
            __fastfail(3u);
          v10[1] = (__int64)v3;
          *result = v3;
          return result;
        }
      }
      if ( ++v2 < *(_DWORD *)(v4 + 8) )
        continue;
      break;
    }
  }
  return 0LL;
}
