/*
 * XREFs of bCheckLocaTable @ 0x1C0156400
 * Callers:
 *     bVerifyTTF @ 0x1C0155F40 (bVerifyTTF.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall bCheckLocaTable(__int16 a1, __int64 a2, __int64 a3, unsigned __int16 a4)
{
  unsigned __int64 v4; // rax
  unsigned __int16 v5; // r10
  __int64 v6; // r8
  int v7; // r9d
  int v8; // eax
  __int64 v10; // r8
  int v11; // r9d
  int v12; // eax

  v4 = *(unsigned int *)(a3 + 44);
  v5 = 0;
  if ( a1 )
  {
    if ( 4 * (unsigned __int64)a4 <= v4 )
    {
      v6 = a2 + *(unsigned int *)(a3 + 40);
      v7 = a4 - 1;
      if ( v7 > 0 )
      {
        v8 = 0;
        while ( _byteswap_ulong(*(_DWORD *)(v6 + 4LL * v5)) <= _byteswap_ulong(*(_DWORD *)(v6 + 4LL * (v8 + 1))) )
        {
          v8 = ++v5;
          if ( v5 >= v7 )
            return 1LL;
        }
        return 0LL;
      }
      return 1LL;
    }
  }
  else if ( 2 * (unsigned __int64)a4 <= v4 )
  {
    v10 = a2 + *(unsigned int *)(a3 + 40);
    v11 = a4 - 1;
    if ( v11 > 0 )
    {
      v12 = 0;
      while ( __ROR2__(*(_WORD *)(v10 + 2LL * v5), 8) <= __ROR2__(*(_WORD *)(v10 + 2LL * (v12 + 1)), 8) )
      {
        v12 = ++v5;
        if ( v5 >= v11 )
          return 1LL;
      }
      return 0LL;
    }
    return 1LL;
  }
  return 0LL;
}
