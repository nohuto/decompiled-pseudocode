/*
 * XREFs of RaspInitializeGlyphData @ 0x1401290A8
 * Callers:
 *     RaspLoadGlyphData @ 0x140129DE4 (RaspLoadGlyphData.c)
 * Callees:
 *     FioFwReadUshortAtOffset @ 0x140129078 (FioFwReadUshortAtOffset.c)
 *     FioFwReadBytesAtOffset @ 0x1401294A4 (FioFwReadBytesAtOffset.c)
 *     RaspAllocateMemory @ 0x140129A3C (RaspAllocateMemory.c)
 *     RaspFreeMemory @ 0x140129BE8 (RaspFreeMemory.c)
 *     memset @ 0x140171AC0 (memset.c)
 */

__int64 __fastcall RaspInitializeGlyphData(__int64 a1, int a2, __int64 *a3, __int64 a4)
{
  int v6; // ecx
  unsigned int v7; // ebx
  __int64 v8; // r15
  unsigned int v9; // ebx
  __int16 v10; // r12
  unsigned int v11; // ebx
  unsigned __int16 v12; // si
  size_t v13; // rbx
  char *Memory; // rax
  char *v15; // rsi
  char *v16; // r14
  int v17; // ecx
  _WORD *v18; // rsi
  int v19; // eax
  int v20; // edi
  unsigned int v21; // edi
  __int64 v22; // rbx
  int v23; // ebx
  unsigned int v24; // edi
  __int64 v25; // r8
  __int64 v26; // rcx
  char *v27; // rsi
  unsigned int v28; // edi
  __int64 v29; // rax
  __int64 v30; // r13
  int v31; // ebx
  unsigned int v32; // r8d
  __int16 v33; // r9
  unsigned int v34; // r10d
  __int64 v35; // rdx
  char *v36; // rsi
  unsigned int v37; // edi
  __int16 v38; // r12
  char *v39; // rbx
  char v40; // dl
  __int16 v41; // si
  __int64 v42; // rax
  int v43; // r13d
  _WORD *v44; // rbx
  char v45; // cl
  __int64 v46; // rdx
  __int64 v48; // r12
  __int64 v49; // rdx
  __int64 v50; // rax
  unsigned int v51; // ecx
  __int16 v52[2]; // [rsp+20h] [rbp-38h] BYREF
  int v53; // [rsp+24h] [rbp-34h]
  __int64 v54; // [rsp+28h] [rbp-30h]
  __int64 v55; // [rsp+30h] [rbp-28h]
  __int64 v56; // [rsp+38h] [rbp-20h]
  __int16 v57; // [rsp+40h] [rbp-18h] BYREF
  __int16 v58[11]; // [rsp+42h] [rbp-16h] BYREF
  __int64 v59; // [rsp+A0h] [rbp+48h] BYREF
  int v60; // [rsp+A8h] [rbp+50h]
  __int64 *v61; // [rsp+B0h] [rbp+58h]
  __int64 v62; // [rsp+B8h] [rbp+60h]

  v62 = a4;
  v61 = a3;
  v60 = a2;
  v57 = 0;
  *(_QWORD *)v58 = 0LL;
  LOWORD(v59) = 0;
  v52[0] = 0;
  if ( !a1 )
    return 3221225473LL;
  v6 = *(_DWORD *)(a1 + 60);
  if ( !v6 )
    return 3221225473LL;
  v7 = v6 + a2;
  v55 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 16LL);
  v8 = v55;
  FioFwReadUshortAtOffset(v55, (unsigned int)(v6 + a2), &v57);
  FioFwReadUshortAtOffset(v55, v7 + 2, v58);
  v7 += 4;
  FioFwReadUshortAtOffset(v55, v7, &v58[1]);
  FioFwReadUshortAtOffset(v55, v7 + 2, &v58[2]);
  v9 = v7 + 4;
  FioFwReadUshortAtOffset(v55, v9, &v58[3]);
  v10 = v57;
  if ( v57 < 0 )
    return 3221225485LL;
  if ( v57 )
  {
    v11 = v9 + 2 * v57;
    FioFwReadUshortAtOffset(v55, v11, v52);
    v12 = ++v52[0];
    FioFwReadUshortAtOffset(v8, v11 + 2, &v59);
    v53 = v12;
    v54 = v12;
    v56 = 4LL * (v12 + 2);
    v13 = v12 + 66LL + (unsigned __int16)v59 + 2 * (v56 + v10);
    Memory = (char *)RaspAllocateMemory(v13);
    v15 = Memory;
    if ( Memory )
    {
      memset(Memory, 0, v13);
      v16 = v15;
      v17 = v58[0];
      *(_DWORD *)(v15 + 6) = v58[1];
      *(_DWORD *)(v15 + 10) = v58[2];
      *(_DWORD *)(v15 + 14) = v58[3];
      *((_WORD *)v15 + 11) = v59;
      *((_WORD *)v15 + 12) = v52[0];
      *(_WORD *)v15 = v10;
      *(_DWORD *)(v15 + 2) = v17;
      *(_DWORD *)(v15 + 18) = v17;
      v18 = v15 + 66;
      v19 = *(_DWORD *)(a1 + 60);
      v20 = v60 + 10;
      *(_QWORD *)(v16 + 26) = v18;
      v21 = v19 + v20;
      if ( v10 > 0 )
      {
        v22 = (unsigned __int16)v10;
        do
        {
          FioFwReadUshortAtOffset(v8, v21, v18);
          v21 += 2;
          ++v18;
          --v22;
        }
        while ( v22 );
      }
      v23 = (unsigned __int16)v59;
      v24 = v21 + 2;
      v25 = (unsigned __int16)v59;
      *(_QWORD *)(v16 + 34) = v18;
      FioFwReadBytesAtOffset(v8, v24, v25, v18);
      v26 = v54;
      v27 = (char *)v18 + (unsigned __int16)v59;
      *(_QWORD *)(v16 + 42) = v27;
      v28 = v23 + v24;
      v29 = RaspAllocateMemory(v26);
      v59 = v29;
      v30 = v29;
      if ( v29 )
      {
        v31 = v53;
        FioFwReadBytesAtOffset(v8, v28, (unsigned int)v53, v29);
        v32 = 0;
        v33 = 0;
        if ( v31 > 0 )
        {
          v34 = 1;
          do
          {
            v35 = v33++;
            *(_BYTE *)(v35 + *(_QWORD *)(v16 + 42)) = *(_BYTE *)(v32 + v30);
            if ( (*(_BYTE *)(v32 + v30) & 8) != 0 )
            {
              if ( *(_BYTE *)(v34 + v30) )
              {
                v48 = *(unsigned __int8 *)(v34 + v30);
                do
                {
                  v49 = v33++;
                  *(_BYTE *)(v49 + *(_QWORD *)(v16 + 42)) = *(_BYTE *)(v32 + v30);
                  --v48;
                }
                while ( v48 );
              }
              ++v32;
              ++v34;
            }
            ++v32;
            ++v34;
          }
          while ( v33 < v31 );
          v8 = v55;
        }
        v36 = &v27[v54];
        v37 = v32 + v28;
        *(_QWORD *)(v16 + 50) = v36;
        v38 = 0;
        if ( v31 > 0 )
        {
          do
          {
            v39 = &v36[4 * v38];
            *(_DWORD *)v39 = 0;
            v40 = *(_BYTE *)(v38 + *(_QWORD *)(v16 + 42));
            if ( (v40 & 2) != 0 )
            {
              FioFwReadBytesAtOffset(v8, v37++, 1LL, &v36[4 * v38]);
              if ( (*(_BYTE *)(v38 + *(_QWORD *)(v16 + 42)) & 0x10) == 0 )
                *(_DWORD *)v39 = -*(_DWORD *)v39;
            }
            else if ( (v40 & 0x10) != 0 )
            {
              *(_DWORD *)v39 = 0;
            }
            else
            {
              FioFwReadUshortAtOffset(v8, v37, &v36[4 * v38]);
              v37 += 2;
            }
            v31 = v53;
            ++v38;
          }
          while ( v38 < v53 );
          v30 = v59;
        }
        v41 = 0;
        v42 = v56 + *(_QWORD *)(v16 + 50);
        v56 = v42;
        *(_QWORD *)(v16 + 58) = v42;
        if ( v31 > 0 )
        {
          v43 = v53;
          do
          {
            v44 = (_WORD *)(v42 + 4LL * v41);
            *(_DWORD *)v44 = 0;
            v45 = *(_BYTE *)(v41 + *(_QWORD *)(v16 + 42));
            if ( (v45 & 4) != 0 )
            {
              FioFwReadBytesAtOffset(v8, v37++, 1LL, v44);
              if ( (*(_BYTE *)(v41 + *(_QWORD *)(v16 + 42)) & 0x20) == 0 )
                *(_DWORD *)v44 = -*(_DWORD *)v44;
            }
            else if ( (v45 & 0x20) != 0 )
            {
              *(_DWORD *)v44 = 0;
            }
            else
            {
              FioFwReadUshortAtOffset(v8, v37, v44);
              v37 += 2;
            }
            ++v41;
            v42 = v56;
          }
          while ( v41 < v43 );
          v30 = v59;
        }
        v46 = v62;
        *v61 = (__int64)v16;
        RaspFreeMemory(v30, v46);
        return 0LL;
      }
      RaspFreeMemory(v16, v62);
    }
  }
  else
  {
    v50 = RaspAllocateMemory(66LL);
    if ( v50 )
    {
      v51 = v58[0];
      *(_DWORD *)(v50 + 2) = v58[0];
      *(_WORD *)v50 = 0;
      *(_DWORD *)(v50 + 6) = v58[1];
      *(_DWORD *)(v50 + 10) = v58[2];
      *(_DWORD *)(v50 + 14) = v58[3];
      *(_QWORD *)(v50 + 18) = v51;
      *a3 = v50;
      return 0LL;
    }
  }
  return 3221225626LL;
}
