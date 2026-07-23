/*
 * XREFs of HvlpSelectVpSet @ 0x1401BC100
 * Callers:
 *     HvlStartBootLogicalProcessors @ 0x140139CA4 (HvlStartBootLogicalProcessors.c)
 * Callees:
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     HvlpComputeLpComparisonMetrics @ 0x1401BB384 (HvlpComputeLpComparisonMetrics.c)
 *     HvlpLpComparison @ 0x1401BBA20 (HvlpLpComparison.c)
 *     HviGetImplementationLimits @ 0x140231DEC (HviGetImplementationLimits.c)
 */

__int64 __fastcall HvlpSelectVpSet(unsigned int a1, __int64 a2)
{
  __int64 v2; // rbx
  int v4; // r15d
  _WORD *v5; // rcx
  __int64 v6; // rdx
  int v7; // r14d
  __int64 v8; // rcx
  __int64 v9; // rbp
  int v10; // r8d
  _WORD *v11; // rdx
  __int64 v12; // r9
  _DWORD *v13; // rdx
  int v14; // r8d
  __int64 v15; // r10
  int v16; // r9d
  unsigned int v17; // eax
  _BYTE *v18; // rcx
  unsigned int v19; // esi
  _BYTE *v20; // rbp
  unsigned int v21; // r9d
  unsigned int v22; // eax
  _BYTE *v23; // rcx
  __int64 v24; // rsi
  __int64 v25; // rcx
  _BYTE *v26; // rbp
  __int64 v27; // rcx
  int v28; // r8d
  _WORD *i; // rdx
  unsigned int v30; // ecx
  _DWORD v32[4]; // [rsp+20h] [rbp-48h] BYREF

  v2 = a1;
  HviGetImplementationLimits(v32);
  v4 = (HvlpRootFlags & 0x400) != 0;
  if ( (_DWORD)v2 )
  {
    v5 = (_WORD *)(a2 + 8);
    v6 = (unsigned int)v2;
    do
    {
      v5[2] = *v5;
      *(v5 - 4) = 1;
      if ( (HvlpRootFlags & 0x400) != 0 )
        *((_BYTE *)v5 - 5) = 0;
      else
        *((_BYTE *)v5 - 5) = *((_BYTE *)v5 - 6);
      v5 += 18;
      --v6;
    }
    while ( v6 );
  }
  *(_BYTE *)(a2 + 1) = 1;
  v7 = 1;
  *(_BYTE *)(a2 + 3) = 1;
  while ( 1 )
  {
    if ( (_DWORD)v2 )
    {
      v8 = a2;
      v9 = v2;
      do
      {
        if ( *(_BYTE *)v8 )
        {
          if ( *(_BYTE *)(v8 + 1) || !*(_BYTE *)(v8 + 2) || v7 == v32[0] )
            goto LABEL_30;
          if ( KeRootProcPerNodeSpecified )
          {
            v10 = 0;
            v11 = (_WORD *)(a2 + 8);
            v12 = v2;
            do
            {
              if ( *((_BYTE *)v11 - 7) && *v11 == *(_WORD *)(v8 + 8) )
                ++v10;
              v11 += 18;
              --v12;
            }
            while ( v12 );
            if ( v10 == KeRootProcPerNodeSpecified )
              goto LABEL_30;
          }
          if ( v4 )
          {
            v13 = (_DWORD *)(a2 + 4);
            v14 = 0;
            v15 = v2;
            v16 = ~(KeGetCurrentPrcb()->LogicalProcessorsPerCore - 1);
            do
            {
              if ( *((_BYTE *)v13 - 3) && (*v13 & v16) == (v16 & *(_DWORD *)(v8 + 4)) )
                ++v14;
              v13 += 9;
              --v15;
            }
            while ( v15 );
            if ( v14 == v4 )
              goto LABEL_30;
          }
          if ( KeRootProcSpecified && v7 == KeRootProcSpecified )
LABEL_30:
            *(_BYTE *)v8 = 0;
        }
        v8 += 36LL;
        --v9;
      }
      while ( v9 );
    }
    v17 = 0;
    if ( (_DWORD)v2 )
    {
      v18 = (_BYTE *)a2;
      do
      {
        if ( *v18 )
          break;
        ++v17;
        v18 += 36;
      }
      while ( v17 < (unsigned int)v2 );
    }
    if ( v17 == (_DWORD)v2 )
      break;
    v19 = 0;
    if ( (_DWORD)v2 )
    {
      v20 = (_BYTE *)a2;
      do
      {
        if ( *v20 )
          HvlpComputeLpComparisonMetrics(v2, a2, v19);
        ++v19;
        v20 += 36;
      }
      while ( v19 < (unsigned int)v2 );
    }
    v21 = -1;
    v22 = 0;
    if ( (_DWORD)v2 )
    {
      v23 = (_BYTE *)a2;
      while ( !*v23 )
      {
        ++v22;
        v23 += 36;
        if ( v22 >= (unsigned int)v2 )
          goto LABEL_48;
      }
      v21 = v22;
    }
LABEL_48:
    v24 = v21 + 1;
    if ( (unsigned int)v24 < (unsigned int)v2 )
    {
      v25 = 9 * v24;
      v26 = (_BYTE *)(a2 + 36 * v24);
      do
      {
        if ( *v26 )
        {
          if ( (unsigned int)HvlpLpComparison(v25, a2, v24, v21) == -1 )
            v21 = v24;
        }
        LODWORD(v24) = v24 + 1;
        v26 += 36;
      }
      while ( (unsigned int)v24 < (unsigned int)v2 );
    }
    ++v7;
    v27 = 9LL * v21;
    *(_BYTE *)(a2 + 4 * v27 + 1) = 1;
    *(_BYTE *)(a2 + 4 * v27 + 3) = 1;
  }
  v28 = 0;
  if ( !(_DWORD)v2 )
    return 0LL;
  for ( i = (_WORD *)(a2 + 8); ; i += 18 )
  {
    if ( *((_BYTE *)i - 6) )
    {
      v30 = 0;
      do
      {
        if ( *(_WORD *)(a2 + 36LL * v30 + 8) == *i && *(_BYTE *)(a2 + 36LL * v30 + 1) )
          break;
        ++v30;
      }
      while ( v30 < (unsigned int)v2 );
      if ( v30 == (_DWORD)v2 )
        break;
    }
    if ( ++v28 >= (unsigned int)v2 )
      return 0LL;
  }
  return 3221225473LL;
}
