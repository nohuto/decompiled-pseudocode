/*
 * XREFs of bCheckLocaTable @ 0x1C0012038
 * Callers:
 *     bVerifyTTF @ 0x1C0011B78 (bVerifyTTF.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall bCheckLocaTable(__int16 a1, __int64 a2, __int64 a3, unsigned __int16 a4)
{
  unsigned __int64 v4; // rax
  unsigned __int16 v5; // r10
  __int64 v6; // rdx
  __int64 v8; // rdx

  v4 = *(unsigned int *)(a3 + 44);
  v5 = 0;
  if ( a1 )
  {
    if ( 4 * (unsigned __int64)a4 <= v4 )
    {
      v6 = a2 + *(unsigned int *)(a3 + 40);
      if ( a4 - 1 > 0 )
      {
        while ( _byteswap_ulong(*(_DWORD *)(v6 + 4LL * v5)) <= _byteswap_ulong(*(_DWORD *)(v6 + 4LL * v5 + 4)) )
        {
          if ( ++v5 >= a4 - 1 )
            return 1LL;
        }
        return 0LL;
      }
      return 1LL;
    }
  }
  else if ( 2 * (unsigned __int64)a4 <= v4 )
  {
    v8 = a2 + *(unsigned int *)(a3 + 40);
    if ( a4 - 1 > 0 )
    {
      while ( __ROR2__(*(_WORD *)(v8 + 2LL * v5), 8) <= __ROR2__(*(_WORD *)(v8 + 2LL * v5 + 2), 8) )
      {
        if ( ++v5 >= a4 - 1 )
          return 1LL;
      }
      return 0LL;
    }
    return 1LL;
  }
  return 0LL;
}
