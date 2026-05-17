/*
 * XREFs of RtlEnumerateEntryHashTable @ 0x180065780
 * Callers:
 *     RtlWeaklyEnumerateEntryHashTable @ 0x1800DBBE0 (RtlWeaklyEnumerateEntryHashTable.c)
 * Callees:
 *     RtlpGetChainHead @ 0x180065834 (RtlpGetChainHead.c)
 */

__int64 **__fastcall RtlEnumerateEntryHashTable(__int64 a1, __int64 *a2)
{
  __int64 *v2; // r9
  __int64 v3; // r10
  __int64 v4; // rdx
  __int64 **result; // rax
  __int64 *v6; // rcx
  __int64 *v7; // r11
  __int64 **v8; // r8
  __int64 *v9; // r8
  __int64 *v10; // rcx

  v2 = a2;
  v3 = a1;
  v4 = *((unsigned int *)a2 + 8);
  if ( (unsigned int)v4 < *(_DWORD *)(a1 + 8) )
  {
    while ( 2 )
    {
      if ( (_DWORD)v4 == *((_DWORD *)v2 + 8) )
      {
        v6 = (__int64 *)v2[3];
        result = (__int64 **)v2;
      }
      else
      {
        result = (__int64 **)RtlpGetChainHead(v3, v4);
        v6 = (__int64 *)result;
      }
      while ( *result != v6 )
      {
        result = (__int64 **)*result;
        if ( result[2] )
        {
          v7 = (__int64 *)*v2;
          v8 = (__int64 **)v2[1];
          if ( *(__int64 **)(*v2 + 8) != v2 || *v8 != v2 )
            __fastfail(3u);
          *v8 = v7;
          v7[1] = (__int64)v8;
          v9 = (__int64 *)v2[3];
          if ( v9 != v6 )
          {
            if ( (__int64 *)*v9 == v9 )
              --*(_DWORD *)(v3 + 24);
            if ( (__int64 *)*v6 == v6 )
              ++*(_DWORD *)(v3 + 24);
          }
          *((_DWORD *)v2 + 8) = v4;
          v2[3] = (__int64)v6;
          v10 = *result;
          *v2 = (__int64)*result;
          v2[1] = (__int64)result;
          if ( (__int64 **)v10[1] != result )
            __fastfail(3u);
          v10[1] = (__int64)v2;
          *result = v2;
          return result;
        }
      }
      v4 = (unsigned int)(v4 + 1);
      if ( (unsigned int)v4 < *(_DWORD *)(v3 + 8) )
        continue;
      break;
    }
  }
  return 0LL;
}
