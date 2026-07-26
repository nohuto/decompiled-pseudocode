/*
 * XREFs of ?ndisValidateGFPExactMatchProfileBuffer@@YAEKPEBU_NDIS_GFP_EXACT_MATCH_PROFILE@@@Z @ 0x1C006CE48
 * Callers:
 *     ?ndisValidatePDCapsBuffer@@YAEKPEBU_NDIS_PD_CAPABILITIES@@@Z @ 0x1C006D030 (-ndisValidatePDCapsBuffer@@YAEKPEBU_NDIS_PD_CAPABILITIES@@@Z.c)
 * Callees:
 *     ?ndisValidateTrailingElementSpace@@YAEKPEBU_NDIS_OBJECT_HEADER@@KKK@Z @ 0x1C006D288 (-ndisValidateTrailingElementSpace@@YAEKPEBU_NDIS_OBJECT_HEADER@@KKK@Z.c)
 */

char __fastcall ndisValidateGFPExactMatchProfileBuffer(unsigned int a1, const struct _NDIS_GFP_EXACT_MATCH_PROFILE *a2)
{
  char v3; // bl
  unsigned int v4; // esi
  unsigned int v5; // ebp
  __int64 v6; // rdx
  unsigned int v7; // r8d
  unsigned int v8; // r9d
  __int64 v9; // rcx

  if ( a1 < 0x20 || *((_WORD *)a2 + 1) < 0x20u || *(_BYTE *)a2 != 0x80 || *((_BYTE *)a2 + 1) != 1 )
    return 0;
  v3 = 0;
  if ( !*((_DWORD *)a2 + 1) && *((_DWORD *)a2 + 2) == 5 )
  {
    if ( *((_DWORD *)a2 + 4) )
    {
      v4 = *((_DWORD *)a2 + 6);
      v5 = *((_DWORD *)a2 + 7);
      if ( ndisValidateTrailingElementSpace(a1, (const struct _NDIS_OBJECT_HEADER *)a2, *((_DWORD *)a2 + 5), v4, v5) )
      {
        v8 = 0;
        if ( v4 )
        {
          while ( 1 )
          {
            v9 = v6 + v7;
            if ( a1 - v7 < 0x18
              || *(_WORD *)(v9 + 2) < 0x18u
              || *(_BYTE *)v9 != 0x80
              || *(_BYTE *)(v9 + 1) != 1
              || *(_DWORD *)(v9 + 4)
              || (*(_DWORD *)(v9 + 8) & 0xFFFFF000) != 0
              || (*(_QWORD *)(v9 + 16) & 0xFFFFFFFFFFF00000uLL) != 0 )
            {
              break;
            }
            ++v8;
            v7 += v5;
            if ( v8 >= v4 )
              return 1;
          }
        }
        else
        {
          return 1;
        }
      }
    }
  }
  return v3;
}
