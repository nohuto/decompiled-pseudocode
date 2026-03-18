/*
 * XREFs of ?EDID_V1_CountListedSupportedMonitorSourceModes@@YAJPEBXPEAG11PEAPEBU__EDID_V1_MONDESC_EXTRA_STANDARD_TIMINGS@@1@Z @ 0x1C000F4B4
 * Callers:
 *     EDIDV1_ObtainSupportedMonitorSourceModes @ 0x1C000EBBC (EDIDV1_ObtainSupportedMonitorSourceModes.c)
 * Callees:
 *     EDIDV1_IsEDIDBaseBlock @ 0x1C000148C (EDIDV1_IsEDIDBaseBlock.c)
 *     ?DenseOnesBitCount@@YAEE@Z @ 0x1C000F5DC (-DenseOnesBitCount@@YAEE@Z.c)
 */

__int64 __fastcall EDID_V1_CountListedSupportedMonitorSourceModes(
        char *a1,
        unsigned __int16 *a2,
        unsigned __int16 *a3,
        unsigned __int16 *a4,
        const struct __EDID_V1_MONDESC_EXTRA_STANDARD_TIMINGS **a5,
        unsigned __int16 *a6)
{
  __int64 result; // rax
  unsigned __int8 v11; // al
  __int16 v12; // r10
  __int16 v13; // r11
  unsigned __int16 i; // cx
  __int16 v15; // dx
  unsigned __int16 v16; // cx
  __int64 v17; // r8
  __int64 v18; // rax
  char *v19; // rbx
  const struct __EDID_V1_MONDESC_EXTRA_STANDARD_TIMINGS *v20; // r9
  unsigned __int16 j; // cx
  __int16 v22; // dx

  result = EDIDV1_IsEDIDBaseBlock(a1);
  if ( (int)result >= 0 )
  {
    if ( a2 )
    {
      DenseOnesBitCount(a1[36]);
      v11 = DenseOnesBitCount(a1[35]);
      *a2 = v13 + v11 + v12;
    }
    if ( a3 )
    {
      *a3 = 0;
      for ( i = 0; i < 8u; ++i )
      {
        v15 = *(_WORD *)&a1[2 * i + 38];
        if ( v15 == 257 )
          break;
        if ( !v15 )
          break;
        ++*a3;
      }
    }
    if ( a4 )
      *a4 = 0;
    v16 = 0;
    v17 = 4LL;
    while ( 1 )
    {
      v18 = v16 + 3LL;
      if ( !*(_WORD *)&a1[18 * v18] && !a1[18 * v18 + 2] && a1[18 * v18 + 3] == -6 )
        break;
      if ( ++v16 >= 4u )
        goto LABEL_14;
    }
    v20 = (const struct __EDID_V1_MONDESC_EXTRA_STANDARD_TIMINGS *)&a1[18 * v18 + 5];
    if ( a4 )
    {
      for ( j = 0; j < 6u; ++j )
      {
        v22 = *((_WORD *)v20 + j);
        if ( v22 == 257 )
          break;
        if ( !v22 )
          break;
        ++*a4;
      }
    }
    if ( a5 )
      *a5 = v20;
LABEL_14:
    if ( a6 )
    {
      *a6 = 0;
      v19 = a1 + 54;
      do
      {
        if ( *(_WORD *)v19 || v19[2] )
          ++*a6;
        v19 += 18;
        --v17;
      }
      while ( v17 );
    }
    return 0LL;
  }
  return result;
}
