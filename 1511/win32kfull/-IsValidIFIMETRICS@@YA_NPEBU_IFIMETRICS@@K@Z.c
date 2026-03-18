/*
 * XREFs of ?IsValidIFIMETRICS@@YA_NPEBU_IFIMETRICS@@K@Z @ 0x1C029BB44
 * Callers:
 *     ?ProbeAndReadIFIMETRICS@@YAPEAU_IFIMETRICS@@PEAU1@H_K@Z @ 0x1C029C098 (-ProbeAndReadIFIMETRICS@@YAPEAU_IFIMETRICS@@PEAU1@H_K@Z.c)
 * Callees:
 *     ?IsValidAXESLISTW@@YA_NPEBXKJ@Z @ 0x1C029BA04 (-IsValidAXESLISTW@@YA_NPEBXKJ@Z.c)
 *     ?IsValidDESIGNVECTOR@@YA_NPEBXKJ@Z @ 0x1C029BA54 (-IsValidDESIGNVECTOR@@YA_NPEBXKJ@Z.c)
 *     ?IsValidFONTSIM@@YA_NPEBXKJ@Z @ 0x1C029BAD4 (-IsValidFONTSIM@@YA_NPEBXKJ@Z.c)
 *     ?IsValidString@@YA_NPEBXKJ@Z @ 0x1C029BCA8 (-IsValidString@@YA_NPEBXKJ@Z.c)
 */

char __fastcall IsValidIFIMETRICS(struct _IFIMETRICS *a1, unsigned int a2)
{
  unsigned __int64 v2; // rdi
  int *v5; // rcx
  int *v6; // rcx
  int *v7; // rcx
  char *v8; // rcx
  unsigned __int64 dpCharSets; // rax
  _BYTE *v10; // rdx
  int v11; // ecx
  unsigned __int64 cjIfiExtra; // rdx
  ULONG v13; // eax
  unsigned __int64 v14; // rcx

  v2 = a2;
  if ( a2 < 0xC0
    || a1->cjThis != a2
    || !IsValidString(a1, a2, a1->dpwszFamilyName)
    || !IsValidString(v5, v2, v5[3])
    || !IsValidString(v6, v2, v6[4])
    || !IsValidString(v7, v2, v7[5])
    || !IsValidFONTSIM(v8, v2, a1->dpFontSim) )
  {
    return 0;
  }
  dpCharSets = a1->dpCharSets;
  if ( (_DWORD)dpCharSets )
  {
    if ( (dpCharSets & 0x80000000) == 0LL && dpCharSets < v2 )
    {
      v10 = (char *)a1 + dpCharSets;
      v11 = 0;
      while ( a1->dpCharSets + (__int64)v11 < v2 )
      {
        if ( *v10 != 1 )
        {
          ++v11;
          ++v10;
          if ( v11 < 16 )
            continue;
        }
        goto LABEL_16;
      }
    }
    return 0;
  }
LABEL_16:
  cjIfiExtra = a1->cjIfiExtra;
  if ( (_DWORD)cjIfiExtra )
  {
    if ( cjIfiExtra > v2 - 192 )
      return 0;
    v13 = 20;
    if ( (unsigned int)cjIfiExtra < 0x14 )
      v13 = a1->cjIfiExtra;
    if ( v13 != 4 )
    {
      if ( v13 != 8
        && v13 != 12
        && (v13 != 16 && (v13 != 20 || !IsValidAXESLISTW((char *)a1, v2, a1[1].dpwszFaceName))
         || !IsValidDESIGNVECTOR((char *)a1, v2, a1[1].dpwszStyleName)) )
      {
        return 0;
      }
      v14 = a1[1].cjIfiExtra;
      if ( (_DWORD)v14 )
      {
        if ( (int)v14 <= 0 || v14 >= v2 || v2 <= 0x18 || v14 >= v2 - 24 || (((_BYTE)a1 + (_BYTE)v14) & 3) != 0 )
          return 0;
      }
    }
  }
  return 1;
}
