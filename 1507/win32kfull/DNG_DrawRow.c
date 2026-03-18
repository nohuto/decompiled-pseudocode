/*
 * XREFs of DNG_DrawRow @ 0x1C00C2C40
 * Callers:
 *     DNG_StretchCol @ 0x1C00C15B4 (DNG_StretchCol.c)
 *     RenderNineGridInternal @ 0x1C00C1EE0 (RenderNineGridInternal.c)
 * Callees:
 *     DNG_StretchRow @ 0x1C00C3030 (DNG_StretchRow.c)
 *     memmove @ 0x1C015D180 (memmove.c)
 */

unsigned __int64 __fastcall DNG_DrawRow(__int64 a1)
{
  int v1; // eax
  __int64 v3; // rbx
  __int64 v4; // rdi
  __int64 v5; // rax
  int v6; // ecx
  char *v7; // rdx
  char *v8; // r9
  size_t v9; // r8
  char *v10; // r10
  char *v11; // rax
  unsigned __int64 v12; // rcx
  unsigned __int64 v13; // r11
  __int64 v14; // rcx
  unsigned __int64 result; // rax
  int v16; // r9d
  _DWORD *v17; // r15
  __int64 v18; // r14
  int v19; // r8d
  int v20; // r10d
  __int64 v21; // rsi
  int v22; // ebx
  unsigned int v23; // edx
  _DWORD *v24; // r8
  unsigned __int64 v25; // rdi
  unsigned __int64 v26; // r11
  _DWORD *v27; // rax
  __int64 v28; // rcx
  _DWORD *v29; // r8
  int v30; // ecx
  int v31; // ecx
  char *v32; // rdx
  char *v33; // r9
  size_t v34; // r8
  char *v35; // rcx
  unsigned __int64 v36; // r10
  unsigned __int64 v37; // r11
  int v38; // esi
  _DWORD *v39; // r11
  int v40; // r9d
  __int64 v41; // rdx
  unsigned int v42; // edi
  _DWORD *v43; // rcx
  _DWORD *v44; // rbx
  _DWORD *v45; // rax
  _DWORD *v46; // rax

  v1 = *(_DWORD *)(a1 + 168);
  v3 = *(_QWORD *)(a1 + 8);
  v4 = *(_QWORD *)(a1 + 32);
  *(_DWORD *)(a1 + 56) = 0;
  if ( *(_DWORD *)a1 < v1 )
  {
    if ( *(_DWORD *)(a1 + 60) == v1 )
    {
      v5 = *(int *)(a1 + 64);
      v6 = 4 * (*(_DWORD *)(a1 + 68) - v5);
      v7 = (char *)(v4 + 4 * v5);
      v8 = (char *)(v3 + 4 * v5);
      if ( v6 > 0 )
      {
        v9 = v6;
        v10 = &v8[v6];
        if ( v10 > v8 )
        {
          v11 = &v7[v6];
          if ( v11 > v7 )
          {
            v12 = *(_QWORD *)(a1 + 216);
            if ( v12 <= (unsigned __int64)v8 )
            {
              v13 = *(_QWORD *)(a1 + 224);
              if ( (unsigned __int64)v10 <= v13
                && ((unsigned __int64)v11 <= v13 && v12 <= (unsigned __int64)v7
                 || *(_QWORD *)(a1 + 232) <= (unsigned __int64)v7 && (unsigned __int64)v11 <= *(_QWORD *)(a1 + 240)) )
              {
                memmove(v8, v7, v9);
              }
            }
          }
        }
      }
    }
    else
    {
      DNG_StretchRow(a1, v3, v4, a1 + 104);
    }
  }
  v14 = *(int *)(a1 + 60);
  *(_DWORD *)(a1 + 56) += v14;
  result = *(int *)(a1 + 168);
  v16 = *(_DWORD *)(a1 + 56);
  v17 = (_DWORD *)(v4 + 4 * v14);
  v18 = v3 + 4 * result;
  if ( v16 >= (int)v14 )
  {
    if ( *(_DWORD *)(a1 + 100) )
    {
      v19 = *(_DWORD *)(a1 + 92);
      v20 = *(_DWORD *)(a1 + 96);
      if ( v19 < v20 )
      {
        if ( *(_DWORD *)(a1 + 176) )
        {
          v38 = *(_DWORD *)(a1 + 84);
          v39 = (_DWORD *)(v18 + 4LL * (v19 - (int)v14));
          v40 = v38 - (v19 - (int)v14) % v38;
          LODWORD(v41) = v20 - v19;
          v42 = v20 - v19;
          v43 = &v17[(v19 - (int)v14) % v38];
          v44 = v43;
          if ( v20 - v19 > v40 )
            v42 = *(_DWORD *)(a1 + 84);
          if ( (int)v41 > v40 )
            v44 = v17;
          if ( (int)v41 > 0 && (unsigned int)v41 < 0x3FFFFFFF && v42 < 0x3FFFFFFF )
          {
            v45 = &v39[(int)v41];
            if ( v39 < v45
              && *(_QWORD *)(a1 + 216) <= (unsigned __int64)v39
              && (unsigned __int64)v45 <= *(_QWORD *)(a1 + 224) )
            {
              v46 = &v44[v42];
              if ( v44 < v46
                && *(_QWORD *)(a1 + 232) <= (unsigned __int64)v44
                && (unsigned __int64)v46 <= *(_QWORD *)(a1 + 240)
                && v38 >= 0
                && v19 < v20 )
              {
                v41 = (int)v41;
                do
                {
                  *v39 = *v43;
                  if ( !--v40 )
                  {
                    v40 = *(_DWORD *)(a1 + 84);
                    v43 -= v40;
                  }
                  ++v39;
                  ++v43;
                  --v41;
                }
                while ( v41 );
              }
            }
          }
        }
        else
        {
          v21 = *(unsigned int *)(a1 + 192);
          v22 = *(_DWORD *)(a1 + 188);
          v23 = *(_DWORD *)(a1 + 184);
          v24 = (_DWORD *)(v18 + 4LL * *(int *)(a1 + 204));
          v25 = v18 + 4LL * *(int *)(a1 + 208);
          v26 = (unsigned __int64)&v17[*(_DWORD *)(a1 + 52) - v16];
          v27 = &v17[*(unsigned int *)(a1 + 180)];
          if ( *(_QWORD *)(a1 + 216) <= (unsigned __int64)v24
            && v25 <= *(_QWORD *)(a1 + 224)
            && *(_QWORD *)(a1 + 232) <= (unsigned __int64)v27
            && v26 <= *(_QWORD *)(a1 + 240)
            && (unsigned __int64)v24 < v25 )
          {
            do
            {
              if ( (unsigned __int64)v27 >= v26 )
                break;
              *v24++ = *v27;
              v27 += v21 + (v23 + v22 < v23);
              v23 += v22;
            }
            while ( (unsigned __int64)v24 < v25 );
          }
        }
      }
      result = *(int *)(a1 + 88);
      v18 += 4 * result;
    }
    v28 = *(int *)(a1 + 84);
    *(_DWORD *)(a1 + 56) += v28;
    v29 = &v17[v28];
    if ( *(_DWORD *)(a1 + 56) >= (int)v28 )
    {
      v30 = *(_DWORD *)(a1 + 172);
      result = (unsigned int)(*(_DWORD *)(a1 + 20) - v30);
      if ( *(_DWORD *)(a1 + 4) > (int)result )
      {
        if ( *(_DWORD *)(a1 + 72) == v30 )
        {
          result = *(int *)(a1 + 76);
          v31 = 4 * (*(_DWORD *)(a1 + 80) - result);
          v32 = (char *)&v29[result];
          v33 = (char *)(v18 + 4 * result);
          if ( v31 > 0 )
          {
            v34 = v31;
            v35 = &v33[v31];
            if ( v35 > v33 )
            {
              result = (unsigned __int64)&v32[v34];
              if ( &v32[v34] > v32 )
              {
                v36 = *(_QWORD *)(a1 + 216);
                if ( v36 <= (unsigned __int64)v33 )
                {
                  v37 = *(_QWORD *)(a1 + 224);
                  if ( (unsigned __int64)v35 <= v37
                    && (result <= v37 && v36 <= (unsigned __int64)v32
                     || *(_QWORD *)(a1 + 232) <= (unsigned __int64)v32 && result <= *(_QWORD *)(a1 + 240)) )
                  {
                    return (unsigned __int64)memmove(v33, v32, v34);
                  }
                }
              }
            }
          }
        }
        else
        {
          return DNG_StretchRow(a1, v18, v29, a1 + 136);
        }
      }
    }
  }
  return result;
}
