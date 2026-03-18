/*
 * XREFs of KappxParsePackageFullNameFromToken @ 0x1C0191CD8
 * Callers:
 *     ?RegQueryControllerInstallKey@DisjointExperienceConfig@DefaultMultiScreenConfig@@YAJPEAGKPEAK@Z @ 0x1C0026A48 (-RegQueryControllerInstallKey@DisjointExperienceConfig@DefaultMultiScreenConfig@@YAJPEAGKPEAK@Z.c)
 * Callees:
 *     memmove @ 0x1C0012480 (memmove.c)
 *     KappxParseString @ 0x1C0191DF4 (KappxParseString.c)
 *     KappxSafeSearch @ 0x1C0191E80 (KappxSafeSearch.c)
 */

__int64 __fastcall KappxParsePackageFullNameFromToken(const void **a1)
{
  char *PoolWithTag; // rax
  char *v3; // r15
  unsigned __int16 v5; // bp
  unsigned __int16 v6; // bp
  char *v7; // r14
  unsigned int v8; // esi
  unsigned __int16 v9; // di
  int v10; // ebx

  PoolWithTag = (char *)ExAllocatePoolWithTag(PagedPool, *(unsigned __int16 *)a1, 0x58707041u);
  v3 = PoolWithTag;
  if ( !PoolWithTag )
    return 3221225495LL;
  v5 = *(_WORD *)a1;
  memmove(PoolWithTag, a1[1], *(unsigned __int16 *)a1);
  v6 = v5 >> 1;
  v7 = v3;
  v8 = 0;
  while ( 1 )
  {
    v9 = KappxSafeSearch(v7, v6, 95LL);
    if ( v9 == v6 && v8 != 4 )
    {
      v10 = -2147483643;
LABEL_14:
      ExFreePoolWithTag(v3, 0x58707041u);
      return (unsigned int)v10;
    }
    if ( !v8 )
      goto LABEL_12;
    if ( v8 != 1 && v8 != 2 )
      break;
    v10 = 0;
LABEL_13:
    ++v8;
    v6 += -1 - v9;
    v7 += 2 * v9 + 2;
    if ( v8 >= 5 )
      goto LABEL_14;
  }
  if ( v8 - 3 <= 1 )
  {
LABEL_12:
    v10 = KappxParseString(v7);
    if ( v10 < 0 )
      goto LABEL_14;
    goto LABEL_13;
  }
  return 0xFFFFFFFFLL;
}
