/*
 * XREFs of sub_180003430 @ 0x180003430
 * Callers:
 *     sub_180002608 @ 0x180002608 (sub_180002608.c)
 *     sub_180002764 @ 0x180002764 (sub_180002764.c)
 *     StartAddress @ 0x1800028C0 (StartAddress.c)
 * Callees:
 *     sub_180001310 @ 0x180001310 (sub_180001310.c)
 */

_DWORD *__fastcall sub_180003430(__int64 a1, int a2, int a3, char a4, char a5)
{
  _DWORD *v8; // rcx
  _DWORD *v9; // rax
  _DWORD *result; // rax
  int v11; // edi
  int v12; // edi

  if ( a4
    && *(_BYTE *)(a1 + 16)
    && (unsigned int)_InterlockedIncrement((volatile signed __int32 *)(a1 + 32)) >= *(_DWORD *)(a1 + 36)
    && *(_DWORD *)(a1 + 36) )
  {
    v8 = *(_DWORD **)(a1 + 8);
    if ( v8 )
      sub_180001310(v8);
    if ( a5 )
    {
      v9 = *(_DWORD **)(a1 + 8);
      if ( v9 )
      {
        v9[2] = 0;
        v9[3] = 0;
        v9[4] = 0;
        v9[5] = 0;
      }
      *(_BYTE *)(a1 + 16) = 0;
    }
    _InterlockedExchange((volatile __int32 *)(a1 + 32), 0);
  }
  result = *(_DWORD **)(a1 + 8);
  if ( result )
  {
    if ( a2 )
    {
      v11 = a2 - 1;
      if ( v11 )
      {
        v12 = v11 - 1;
        if ( v12 )
        {
          if ( v12 == 1 )
            result[5] += a3;
        }
        else
        {
          result[4] += a3;
        }
      }
      else
      {
        result[3] += a3;
      }
    }
    else
    {
      result[2] += a3;
    }
    *(_BYTE *)(a1 + 16) = 1;
  }
  return result;
}
