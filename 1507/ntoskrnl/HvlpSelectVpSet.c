/*
 * XREFs of HvlpSelectVpSet @ 0x1401E7224
 * Callers:
 *     HvlStartBootLogicalProcessors @ 0x140163754 (HvlStartBootLogicalProcessors.c)
 * Callees:
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     HvlpComputeLpComparisonMetrics @ 0x1401E5D54 (HvlpComputeLpComparisonMetrics.c)
 *     HvlpLpComparison @ 0x1401E69C0 (HvlpLpComparison.c)
 *     HviGetImplementationLimits @ 0x1402684F0 (HviGetImplementationLimits.c)
 */

__int64 __fastcall HvlpSelectVpSet(unsigned int a1, __int64 a2)
{
  __int64 v2; // rbx
  _WORD *v4; // rcx
  __int64 v5; // rdx
  int v6; // r12d
  int v7; // r14d
  int v8; // r15d
  __int64 v9; // rcx
  __int64 v10; // r10
  int v11; // r8d
  _WORD *v12; // rdx
  __int64 v13; // r9
  unsigned int v14; // eax
  _BYTE *v15; // rcx
  unsigned int v16; // esi
  _BYTE *v17; // rbp
  unsigned int v18; // r9d
  unsigned int v19; // eax
  _BYTE *v20; // rcx
  __int64 v21; // rsi
  __int64 v22; // rcx
  _BYTE *v23; // rbp
  int v24; // r8d
  _WORD *i; // rdx
  unsigned int v26; // ecx
  _DWORD v28[4]; // [rsp+20h] [rbp-48h] BYREF

  v2 = a1;
  HviGetImplementationLimits(v28);
  if ( (_DWORD)v2 )
  {
    v4 = (_WORD *)(a2 + 8);
    v5 = (unsigned int)v2;
    do
    {
      v4[2] = *v4;
      *(v4 - 4) = 1;
      v4 += 18;
      --v5;
    }
    while ( v5 );
  }
  v6 = KeRootProcPerNodeSpecified;
  v7 = 1;
  v8 = KeRootProcSpecified;
  *(_BYTE *)(a2 + 1) = 1;
  while ( 1 )
  {
    if ( (_DWORD)v2 )
    {
      v9 = a2;
      v10 = v2;
      do
      {
        if ( *(_BYTE *)v9 )
        {
          if ( *(_BYTE *)(v9 + 1) || !*(_BYTE *)(v9 + 2) || v7 == v28[0] )
            goto LABEL_20;
          if ( v6 )
          {
            v11 = 0;
            v12 = (_WORD *)(a2 + 8);
            v13 = v2;
            do
            {
              if ( *((_BYTE *)v12 - 7) && *v12 == *(_WORD *)(v9 + 8) )
                ++v11;
              v12 += 18;
              --v13;
            }
            while ( v13 );
            if ( v11 == v6 )
              goto LABEL_20;
          }
          if ( v8 && v7 == v8 )
LABEL_20:
            *(_BYTE *)v9 = 0;
        }
        v9 += 36LL;
        --v10;
      }
      while ( v10 );
    }
    v14 = 0;
    if ( (_DWORD)v2 )
    {
      v15 = (_BYTE *)a2;
      do
      {
        if ( *v15 )
          break;
        ++v14;
        v15 += 36;
      }
      while ( v14 < (unsigned int)v2 );
    }
    if ( v14 == (_DWORD)v2 )
      break;
    v16 = 0;
    if ( (_DWORD)v2 )
    {
      v17 = (_BYTE *)a2;
      do
      {
        if ( *v17 )
          HvlpComputeLpComparisonMetrics(v2, a2, v16);
        ++v16;
        v17 += 36;
      }
      while ( v16 < (unsigned int)v2 );
      v6 = KeRootProcPerNodeSpecified;
      v8 = KeRootProcSpecified;
    }
    v18 = -1;
    v19 = 0;
    if ( (_DWORD)v2 )
    {
      v20 = (_BYTE *)a2;
      while ( !*v20 )
      {
        ++v19;
        v20 += 36;
        if ( v19 >= (unsigned int)v2 )
          goto LABEL_39;
      }
      v18 = v19;
    }
LABEL_39:
    v21 = v18 + 1;
    if ( (unsigned int)v21 < (unsigned int)v2 )
    {
      v22 = 9 * v21;
      v23 = (_BYTE *)(a2 + 36 * v21);
      do
      {
        if ( *v23 )
        {
          if ( (unsigned int)HvlpLpComparison(v22, a2, v21, v18) == -1 )
            v18 = v21;
        }
        LODWORD(v21) = v21 + 1;
        v23 += 36;
      }
      while ( (unsigned int)v21 < (unsigned int)v2 );
    }
    ++v7;
    *(_BYTE *)(a2 + 36LL * v18 + 1) = 1;
  }
  v24 = 0;
  if ( !(_DWORD)v2 )
    return 0LL;
  for ( i = (_WORD *)(a2 + 8); ; i += 18 )
  {
    if ( *((_BYTE *)i - 6) )
    {
      v26 = 0;
      do
      {
        if ( *(_WORD *)(a2 + 36LL * v26 + 8) == *i && *(_BYTE *)(a2 + 36LL * v26 + 1) )
          break;
        ++v26;
      }
      while ( v26 < (unsigned int)v2 );
      if ( v26 == (_DWORD)v2 )
        break;
    }
    if ( ++v24 >= (unsigned int)v2 )
      return 0LL;
  }
  return 3221225473LL;
}
