/*
 * XREFs of cjComputeGLYPHSET_OLDBIDI @ 0x1C0245BFC
 * Callers:
 *     bLoadGlyphSet @ 0x1C00A3E84 (bLoadGlyphSet.c)
 * Callees:
 *     memset @ 0x1C0152CC0 (memset.c)
 *     fs_GetGlyphIDs @ 0x1C02D97E0 (fs_GetGlyphIDs.c)
 */

__int64 __fastcall cjComputeGLYPHSET_OLDBIDI(__int64 a1, char **a2, int a3)
{
  unsigned int v3; // ebx
  int v4; // eax
  char **v6; // r12
  int v7; // ebp
  int v8; // r15d
  const char *v10; // rcx
  const char *v11; // r14
  __int64 v12; // rax
  int v13; // ebp
  char *v14; // rax
  char *v15; // rdi
  char *v16; // rsi
  char *v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // rbp
  char *v20; // r15
  int v21; // r12d
  __int64 v22; // rax
  __int64 v23; // rbp
  int i; // ebp
  char *v25; // [rsp+30h] [rbp-58h]
  unsigned __int16 v28; // [rsp+A0h] [rbp+18h]
  __int64 v29; // [rsp+A8h] [rbp+20h]

  v3 = 0;
  v4 = a3 & 0xFF00;
  *a2 = 0LL;
  v6 = a2;
  v7 = 0;
  v8 = 0;
  switch ( v4 )
  {
    case 61440:
      v10 = (const char *)a0123456789;
      break;
    case 61696:
      v10 = (const char *)&unk_1C02EAFB0;
      break;
    case 61952:
      v10 = " ";
      break;
    default:
      return 0LL;
  }
  v11 = v10;
  while ( *((_WORD *)v10 + 1) )
  {
    v12 = *((unsigned __int16 *)v10 + 1);
    ++v8;
    v7 += v12;
    v10 += 2 * v12 + 4;
  }
  v13 = v7 + 256;
  v14 = (char *)EngAllocMem(0, 4 * (v13 + 4 * v8 + 8), 0x64667454u);
  v15 = v14;
  if ( v14 )
  {
    *(_DWORD *)v14 = 4 * (v13 + 4 * v8 + 8);
    *((_DWORD *)v14 + 1) = 4;
    *((_DWORD *)v14 + 2) = v13;
    *((_DWORD *)v14 + 3) = v8 + 1;
    v16 = &v14[16 * v8 + 32];
    v25 = &v16[4 * v13 - 1024];
    memset(v25, 0, 0x400uLL);
    v29 = 0LL;
    v18 = 0LL;
    v19 = v8;
    if ( v8 > 0 )
    {
      v20 = v15 + 18;
      while ( 1 )
      {
        v21 = 0;
        *((_WORD *)v20 - 1) = *(_WORD *)v11;
        *(_WORD *)v20 = *((_WORD *)v11 + 1);
        *(_QWORD *)(v20 + 6) = v16;
        if ( *((_WORD *)v11 + 1) )
          break;
LABEL_18:
        ++v18;
        v20 += 16;
        v29 = v18;
        v11 += 2 * *((unsigned __int16 *)v11 + 1) + 4;
        if ( v18 >= v19 )
        {
          v6 = a2;
          goto LABEL_20;
        }
      }
      while ( !(unsigned int)fs_GetGlyphIDs(a1, v17, (unsigned __int16)(a3 + *(_WORD *)&v11[2 * v21 + 4])) )
      {
        v17 = v25;
        *(_DWORD *)v16 = v28;
        v16 += 4;
        v22 = v21++;
        *(_DWORD *)&v25[4 * *(unsigned __int16 *)&v11[2 * v22 + 4]] = v28;
        if ( v21 >= *((unsigned __int16 *)v11 + 1) )
        {
          v18 = v29;
          goto LABEL_18;
        }
      }
LABEL_27:
      EngFreeMem(v15);
      return 0LL;
    }
LABEL_20:
    v23 = 2 * v19;
    *(_WORD *)&v15[8 * v23 + 16] = a3;
    *(_WORD *)&v15[8 * v23 + 18] = 256;
    *(_QWORD *)&v15[8 * v23 + 24] = v16;
    for ( i = 0; i < 256; ++i )
    {
      if ( !*(_DWORD *)v16 )
      {
        if ( (unsigned int)fs_GetGlyphIDs(a1, v17, (unsigned int)(i + a3)) )
          goto LABEL_27;
        *(_DWORD *)v16 = v28;
      }
      v16 += 4;
    }
    v3 = *(_DWORD *)v15;
    *v6 = v15;
  }
  return v3;
}
