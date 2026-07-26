/*
 * XREFs of ?ndisValidatePDCapsBuffer@@YAEKPEBU_NDIS_PD_CAPABILITIES@@@Z @ 0x1C00710FC
 * Callers:
 *     ?ndisValidatePDConfigBuffer@@YAEKPEBU_NDIS_PD_CONFIG@@@Z @ 0x1C00712C4 (-ndisValidatePDConfigBuffer@@YAEKPEBU_NDIS_PD_CONFIG@@@Z.c)
 * Callees:
 *     ?ndisValidateGFPExactMatchProfileBuffer@@YAEKPEBU_NDIS_GFP_EXACT_MATCH_PROFILE@@@Z @ 0x1C0070F14 (-ndisValidateGFPExactMatchProfileBuffer@@YAEKPEBU_NDIS_GFP_EXACT_MATCH_PROFILE@@@Z.c)
 *     ?ndisValidateGFPWildcardMatchProfileBuffer@@YAEKPEBU_NDIS_GFP_WILDCARD_MATCH_PROFILE@@@Z @ 0x1C007104C (-ndisValidateGFPWildcardMatchProfileBuffer@@YAEKPEBU_NDIS_GFP_WILDCARD_MATCH_PROFILE@@@Z.c)
 *     ?ndisValidateTrailingElementSpace@@YAEKPEBU_NDIS_OBJECT_HEADER@@KKK@Z @ 0x1C0071354 (-ndisValidateTrailingElementSpace@@YAEKPEBU_NDIS_OBJECT_HEADER@@KKK@Z.c)
 */

char __fastcall ndisValidatePDCapsBuffer(unsigned int a1, struct _NDIS_OBJECT_HEADER *a2)
{
  char v4; // bl
  struct _NDIS_OBJECT_HEADER v5; // edx
  struct _NDIS_OBJECT_HEADER v6; // r8d
  struct _NDIS_OBJECT_HEADER v7; // ecx
  struct _NDIS_OBJECT_HEADER v8; // eax
  unsigned int v9; // r12d
  unsigned int v10; // esi
  const struct _NDIS_OBJECT_HEADER *v11; // rdx
  unsigned int v12; // r13d
  unsigned int v13; // ebp
  int v14; // r14d
  unsigned int v15; // esi
  unsigned int v17; // [rsp+70h] [rbp+8h]
  unsigned int v18; // [rsp+80h] [rbp+18h]

  if ( a1 < 0x60 || a2->Size < 0x5Cu || a2->Type != 0x80 || a2->Revision != 1 )
    return 0;
  v4 = 0;
  if ( !*(_DWORD *)&a2[1] )
  {
    v5 = a2[5];
    if ( (*(_DWORD *)&v5 & 0xFFFFFFF0) == 0
      && a2[4].Type <= 0x40u
      && *(_DWORD *)&a2[7]
      && *(_DWORD *)&a2[9]
      && *(_DWORD *)&a2[11]
      && ((v5.Type & 0xC) == 0 || (v5.Type & 2) != 0) )
    {
      if ( (v5.Type & 4) != 0 )
      {
        v6 = a2[20];
        if ( !*(_DWORD *)&v6 )
          return v4;
        v7 = a2[19];
        if ( !*(_DWORD *)&v7 )
          return v4;
        v8 = a2[18];
        if ( !*(_DWORD *)&v8
          || *(_DWORD *)&v7 < *(unsigned int *)&v8
          || *(_DWORD *)&v8 % *(unsigned int *)&v6
          || *(_DWORD *)&v7 % *(unsigned int *)&v6 )
        {
          return v4;
        }
      }
      else if ( (v5.Type & 8) != 0 || *(_DWORD *)&a2[20] || *(_DWORD *)&a2[19] || *(_DWORD *)&a2[18] )
      {
        return v4;
      }
      v9 = (unsigned int)a2[13];
      v10 = (unsigned int)a2[12];
      v17 = (unsigned int)a2[14];
      if ( ndisValidateTrailingElementSpace(a1, a2, v10, v9, v17) )
      {
        v12 = (unsigned int)a2[16];
        v13 = (unsigned int)a2[15];
        v18 = (unsigned int)a2[17];
        if ( ndisValidateTrailingElementSpace(a1, v11, v13, v12, v18) )
        {
          v14 = 0;
          if ( v9 )
          {
            while ( ndisValidateGFPExactMatchProfileBuffer(
                      a1 - v10,
                      (const struct _NDIS_GFP_EXACT_MATCH_PROFILE *)(&a2->Type + v10)) )
            {
              v10 += v17;
              if ( ++v14 >= v9 )
                goto LABEL_29;
            }
          }
          else
          {
LABEL_29:
            v15 = 0;
            if ( v12 )
            {
              while ( ndisValidateGFPWildcardMatchProfileBuffer(
                        a1 - v13,
                        (const struct _NDIS_GFP_WILDCARD_MATCH_PROFILE *)(&a2->Type + v13)) )
              {
                ++v15;
                v13 += v18;
                if ( v15 >= v12 )
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
    }
  }
  return v4;
}
