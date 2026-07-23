/*
 * XREFs of RaspInitializeCompositeGlyphData @ 0x14023ACD8
 * Callers:
 *     RaspLoadCompositeGlyphData @ 0x14023B044 (RaspLoadCompositeGlyphData.c)
 * Callees:
 *     FioFwReadBytesAtOffset @ 0x1401294A4 (FioFwReadBytesAtOffset.c)
 *     RaspAllocateMemory @ 0x140129A3C (RaspAllocateMemory.c)
 *     RaspFreeMemory @ 0x140129BE8 (RaspFreeMemory.c)
 *     memmove @ 0x140171780 (memmove.c)
 *     memset @ 0x140171AC0 (memset.c)
 */

__int64 __fastcall RaspInitializeCompositeGlyphData(
        __int64 a1,
        __int64 *a2,
        __int64 a3,
        unsigned __int16 a4,
        __int16 a5,
        unsigned __int16 a6,
        unsigned int a7,
        _WORD *a8,
        _QWORD *a9,
        __int64 *a10)
{
  __int64 *v10; // r12
  int v12; // ebp
  unsigned __int64 v13; // r14
  char *Memory; // rax
  char *v15; // rbx
  _DWORD *v17; // rcx
  __int64 v18; // r8
  char *v19; // r14
  __int16 *v20; // rdx
  int v21; // eax
  int v22; // eax
  _DWORD *v23; // rdx
  char *v24; // rbx
  char *v25; // r15
  _WORD *v26; // r9
  __int16 v27; // r13
  char *v28; // rdi
  __int16 v29; // r10
  __int16 *v30; // rsi
  __int64 v31; // rbx
  __int64 v32; // rax
  unsigned __int16 *v33; // rbp
  unsigned __int16 v34; // r8
  __int64 v35; // rcx
  size_t v36; // r8
  __int64 v37; // r9
  __int16 v38; // cx
  __int16 v39; // dx
  __int16 v40; // ax
  unsigned __int16 v41; // r8
  __int16 v42; // r14
  __int64 v43; // r9
  __int16 v44; // ax
  __int16 v45; // ax
  char *v46; // [rsp+20h] [rbp-58h]
  _WORD *v47; // [rsp+28h] [rbp-50h]
  _DWORD *v48; // [rsp+30h] [rbp-48h]
  __int16 v52; // [rsp+A0h] [rbp+28h]
  __int16 v53; // [rsp+A8h] [rbp+30h]

  v10 = a2;
  v12 = a4;
  v13 = a4 + a6 + 8 * (unsigned int)a4 + 2 * (a5 + 41);
  Memory = (char *)RaspAllocateMemory(v13, a10);
  v15 = Memory;
  if ( !Memory )
    return 3221225626LL;
  memset(Memory, 0, v13);
  v17 = v15 + 2;
  v18 = 4LL;
  v46 = v15;
  v19 = v15;
  *(_WORD *)v15 = a5;
  v20 = (__int16 *)(a3 + 2);
  do
  {
    v21 = *v20++;
    *v17++ = v21;
    --v18;
  }
  while ( v18 );
  v22 = *(_DWORD *)(v15 + 2);
  v23 = v15 + 18;
  *((_WORD *)v15 + 11) = a6;
  *((_WORD *)v15 + 12) = a4;
  v24 = v15 + 66;
  v48 = v23;
  *v23 = v22;
  *(_QWORD *)(v19 + 26) = v24;
  v25 = &v24[2 * a5];
  if ( a6 )
  {
    *(_QWORD *)(v19 + 34) = v25;
    v25 += a6;
    FioFwReadBytesAtOffset(a1, a7, a6, *(void **)(v19 + 34));
    v23 = v48;
  }
  v26 = *(_WORD **)(v19 + 26);
  v27 = 0;
  v28 = &v25[a4];
  *(_QWORD *)(v19 + 42) = v25;
  v29 = 0;
  *(_QWORD *)(v19 + 50) = v28;
  v52 = 0;
  v30 = (__int16 *)&v28[4 * v12 + 8];
  v47 = v26;
  *(_QWORD *)(v19 + 58) = v30;
  while ( 1 )
  {
    v31 = *v10;
    if ( (__int64 *)*v10 == v10 )
      break;
    v32 = *(_QWORD *)v31;
    if ( *(__int64 **)(v31 + 8) != v10 || *(_QWORD *)(v32 + 8) != v31 )
      __fastfail(3u);
    *v10 = v32;
    *(_QWORD *)(v32 + 8) = v10;
    v33 = *(unsigned __int16 **)(v31 + 16);
    if ( (*(_WORD *)(v31 + 24) & 0x200) != 0 )
    {
      *a8 = *(_WORD *)(v31 + 26);
      *v23 = *(_DWORD *)(v33 + 1);
    }
    v34 = 0;
    if ( (__int16)*v33 > 0 )
    {
      do
      {
        v35 = v34++;
        *v26++ = v29 + *(_WORD *)(*(_QWORD *)(v33 + 13) + 2 * v35);
      }
      while ( v34 < (__int16)*v33 );
      v19 = v46;
      v47 = v26;
    }
    v36 = v33[12];
    v53 = v36 + v29;
    memmove(v25, *(const void **)(v33 + 21), v36);
    v37 = v33[12];
    v38 = 0x4000;
    v39 = *(_WORD *)(v31 + 24);
    v25 += v37;
    v40 = 0x4000;
    if ( (v39 & 8) != 0 )
    {
      v40 = *(_WORD *)(v31 + 32);
      v38 = v40;
    }
    else if ( (v39 & 0x40) != 0 )
    {
      v40 = *(_WORD *)(v31 + 32);
      v38 = *(_WORD *)(v31 + 34);
    }
    v41 = 0;
    if ( (_WORD)v37 )
    {
      v42 = v52;
      v43 = v40;
      do
      {
        *(_WORD *)v28 = *(_WORD *)(*(_QWORD *)(v33 + 25) + 4LL * v41);
        *v30 = *(_WORD *)(*(_QWORD *)(v33 + 29) + 4LL * v41);
        *(_WORD *)v28 = v43 * *(__int16 *)v28 / 0x4000;
        *v30 = v38 * (__int64)*v30 / 0x4000;
        if ( !v41 )
        {
          *(_WORD *)v28 -= v27;
          *v30 -= v42;
          v44 = *(_WORD *)(v31 + 24);
          if ( (v44 & 2) != 0 )
          {
            if ( (v44 & 1) != 0 )
            {
              *(_WORD *)v28 += *(_WORD *)(v31 + 28);
              v45 = *(_WORD *)(v31 + 30);
            }
            else
            {
              *(_WORD *)v28 += *(char *)(v31 + 28);
              v45 = *(char *)(v31 + 29);
            }
            *v30 += v45;
          }
        }
        v27 += *(_WORD *)v28;
        ++v41;
        v42 += *v30;
        v28 += 4;
        v30 += 2;
      }
      while ( v41 < v33[12] );
      v10 = a2;
      v52 = v42;
      v19 = v46;
    }
    RaspFreeMemory((__int64)v33, a10);
    RaspFreeMemory(v31, a10);
    v26 = v47;
    v29 = v53;
    v23 = v48;
  }
  *a9 = v19;
  return 0LL;
}
