/*
 * XREFs of KiAssignFixedNodes @ 0x1407FAAEC
 * Callers:
 *     KiPerformGroupConfiguration @ 0x1407E3360 (KiPerformGroupConfiguration.c)
 * Callees:
 *     <none>
 */

char __fastcall KiAssignFixedNodes(__int64 *a1, __int64 a2, unsigned __int16 a3, char a4, int *a5, _WORD *a6)
{
  _WORD *v7; // rdi
  int v9; // r8d
  __int64 v10; // rcx
  unsigned __int16 v12; // r14
  int *v13; // rdi
  __int64 i; // rcx
  __int64 *v15; // rcx
  __int64 v16; // rax
  unsigned __int16 v17; // di
  __int64 v18; // rdx
  unsigned __int16 v19; // ax
  unsigned int v20; // r11d
  unsigned __int16 v21; // cx
  unsigned __int16 *v22; // r10
  int *v23; // r9
  __int64 v24; // rcx
  int v25; // eax
  __int64 v26; // rdx
  __int64 v27; // rax
  int v29; // [rsp+38h] [rbp+10h]

  v7 = a6;
  v9 = KiMaximumGroupSize;
  v29 = KiMaximumGroupSize;
  v10 = 20LL;
  v12 = a2;
  while ( v10 )
  {
    *v7++ = 0;
    --v10;
  }
  v13 = a5;
  for ( i = 20LL; i; --i )
    *v13++ = v9;
  if ( (_WORD)a2 )
  {
    v15 = a1;
    a2 = (unsigned __int16)a2;
    do
    {
      v16 = *v15++;
      *(_WORD *)(v16 + 144) = -1;
      *(_BYTE *)(v16 + 173) &= ~2u;
      --a2;
    }
    while ( a2 );
  }
  v17 = 0;
  if ( v12 )
  {
    while ( 1 )
    {
      v18 = a1[v17];
      if ( (*(_BYTE *)(v18 + 173) & 8) != 0 )
      {
        if ( v17 >= a3 )
        {
          v19 = 20;
          v20 = v9;
          v21 = 0;
          if ( !a3 )
            goto LABEL_22;
          v22 = a6;
          v23 = a5;
          do
          {
            if ( *v23 >= (unsigned int)*(unsigned __int8 *)(v18 + 172) && *v22 < v20 )
            {
              v20 = *v22;
              v19 = v21;
            }
            ++v21;
            ++v23;
            ++v22;
          }
          while ( v21 < a3 );
          if ( v19 == 20 )
          {
LABEL_22:
            if ( !a4 )
              return 0;
            if ( !*(_WORD *)(v18 + 146) )
            {
              if ( (*(_BYTE *)(v18 + 173) & 2) == 0 )
              {
                do
                  --v17;
                while ( (*(_BYTE *)(a1[v17] + 173) & 2) == 0 );
              }
              v26 = a1[v17];
              v27 = *(unsigned __int16 *)(v26 + 144);
              *(_WORD *)(v26 + 144) = -1;
              *(_BYTE *)(v26 + 173) &= ~2u;
              --a6[v27];
              a5[v27] += *(unsigned __int8 *)(v26 + 172);
            }
          }
          else
          {
            v24 = v19;
            *(_WORD *)(v18 + 144) = v19;
            *(_BYTE *)(v18 + 173) |= 2u;
            v25 = *(unsigned __int8 *)(v18 + 172);
            ++a6[v24];
            a5[v24] -= v25;
          }
        }
        else
        {
          ++a6[v17];
          *(_WORD *)(v18 + 144) = v17;
          *(_BYTE *)(v18 + 173) |= 2u;
          a5[v17] -= *(unsigned __int8 *)(v18 + 172);
        }
      }
      if ( ++v17 >= v12 )
        return 1;
      v9 = v29;
    }
  }
  return 1;
}
