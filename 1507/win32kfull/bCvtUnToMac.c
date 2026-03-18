/*
 * XREFs of bCvtUnToMac @ 0x1C02452C4
 * Callers:
 *     bComputeIDs @ 0x1C015929C (bComputeIDs.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall bCvtUnToMac(__int64 a1, __int64 a2, __int16 a3)
{
  unsigned int v3; // r9d
  __int64 v5; // rax
  bool v6; // cf
  __int64 v7; // rdx
  unsigned __int64 v8; // rax
  unsigned __int16 v9; // bx
  int v10; // r10d
  __int64 v11; // rcx
  _WORD *v12; // rdx

  v3 = 1;
  if ( a3 == 1 )
  {
    v5 = *(unsigned int *)(a2 + 104);
    if ( !(_DWORD)v5 || (v6 = *(_DWORD *)(a2 + 108) < 0x10u, v7 = a1 + v5, v6) )
      v7 = 0LL;
    if ( v7 )
    {
      if ( _byteswap_ulong(*(_DWORD *)v7) == 0x20000 )
      {
        v8 = *(unsigned int *)(a2 + 108);
        if ( (unsigned int)v8 >= 0x22 )
        {
          v9 = __ROR2__(*(_WORD *)(v7 + 32), 8);
          if ( 2 * (unsigned __int64)v9 + 34 <= v8 )
          {
            v10 = 0;
            v11 = 0LL;
            if ( v9 )
            {
              v12 = (_WORD *)(v7 + 34);
              do
              {
                if ( (unsigned __int8)*v12 && (char)HIBYTE(*v12) > 1 )
                  break;
                ++v10;
                ++v11;
                ++v12;
              }
              while ( v11 < v9 );
            }
            if ( v10 < v9 )
              return 0;
          }
        }
      }
    }
  }
  else
  {
    return 0;
  }
  return v3;
}
