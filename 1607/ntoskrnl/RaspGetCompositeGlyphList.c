/*
 * XREFs of RaspGetCompositeGlyphList @ 0x14023A9B8
 * Callers:
 *     RaspLoadCompositeGlyphData @ 0x14023B044 (RaspLoadCompositeGlyphData.c)
 * Callees:
 *     RaspMapGlyphIndexToLocation @ 0x140128FE0 (RaspMapGlyphIndexToLocation.c)
 *     FioFwReadUshortAtOffset @ 0x140129078 (FioFwReadUshortAtOffset.c)
 *     RaspAllocateMemory @ 0x140129A3C (RaspAllocateMemory.c)
 *     RaspFreeMemory @ 0x140129BE8 (RaspFreeMemory.c)
 *     RaspLoadGlyphData @ 0x140129DE4 (RaspLoadGlyphData.c)
 *     memset @ 0x140171AC0 (memset.c)
 */

__int64 __fastcall RaspGetCompositeGlyphList(
        __int64 a1,
        int a2,
        _WORD *a3,
        _WORD *a4,
        _WORD *a5,
        _DWORD *a6,
        __int64 **a7,
        __int64 *a8)
{
  _DWORD *v9; // rcx
  int v11; // eax
  int v12; // ebx
  __int64 v13; // r14
  __int64 **v14; // rdi
  unsigned int v15; // ebx
  __int64 *v16; // r12
  char *Memory; // rax
  char *v18; // rsi
  __int64 ***v19; // rax
  __int16 v20; // r12
  unsigned int v21; // ebx
  char v22; // ah
  unsigned int v23; // ebx
  int GlyphData; // r15d
  _WORD *v25; // rcx
  _WORD *v26; // rdx
  __int64 *v27; // rbx
  __int64 v28; // rax
  _WORD v29[2]; // [rsp+30h] [rbp-20h] BYREF
  _WORD v30[2]; // [rsp+34h] [rbp-1Ch] BYREF
  __int16 v31[2]; // [rsp+38h] [rbp-18h] BYREF
  int v32; // [rsp+3Ch] [rbp-14h] BYREF
  unsigned int v33; // [rsp+40h] [rbp-10h]
  _WORD *v34; // [rsp+48h] [rbp-8h] BYREF
  __int16 v35; // [rsp+98h] [rbp+48h] BYREF
  _WORD *v36; // [rsp+A0h] [rbp+50h]
  _WORD *v37; // [rsp+A8h] [rbp+58h]

  v37 = a4;
  v36 = a3;
  v9 = a6;
  *a4 = 0;
  *a3 = 0;
  *v9 = 0;
  *a5 = 0;
  if ( a2 == -1 )
    return 3221225485LL;
  if ( !a1 )
    return 3221225473LL;
  v11 = *(_DWORD *)(a1 + 60);
  if ( !v11 )
    return 3221225473LL;
  v12 = v11 + a2;
  v35 = 0;
  v13 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 16LL);
  FioFwReadUshortAtOffset(v13, (unsigned int)(v11 + a2), &v35);
  if ( v35 >= 0 )
    return 3221225485LL;
  v14 = a7;
  v15 = v12 + 10;
  v33 = v15;
  a7[1] = (__int64 *)a7;
  *v14 = (__int64 *)v14;
  while ( 1 )
  {
    v16 = a8;
    Memory = (char *)RaspAllocateMemory(0x2AuLL, a8);
    v18 = Memory;
    if ( !Memory )
    {
      GlyphData = -1073741670;
      goto LABEL_29;
    }
    memset(Memory, 0, 0x2AuLL);
    v19 = (__int64 ***)v14[1];
    if ( *v19 != v14 )
      __fastfail(3u);
    *(_QWORD *)v18 = v14;
    *((_QWORD *)v18 + 1) = v19;
    *v19 = (__int64 **)v18;
    v14[1] = (__int64 *)v18;
    FioFwReadUshortAtOffset(v13, v15, v31);
    v20 = v31[0];
    v21 = v15 + 2;
    *((_WORD *)v18 + 12) = v31[0];
    FioFwReadUshortAtOffset(v13, v21, v30);
    v21 += 2;
    *((_WORD *)v18 + 13) = v30[0];
    FioFwReadUshortAtOffset(v13, v21, v29);
    v15 = v21 + 2;
    if ( (v20 & 1) != 0 )
    {
      *((_WORD *)v18 + 14) = v29[0];
      FioFwReadUshortAtOffset(v13, v15, v29);
      v15 += 2;
      *((_WORD *)v18 + 15) = v29[0];
    }
    else
    {
      v22 = HIBYTE(v29[0]);
      v18[29] = v29[0];
      v18[28] = v22;
    }
    if ( (v20 & 8) != 0 )
    {
      FioFwReadUshortAtOffset(v13, v15, &v35);
      *((_WORD *)v18 + 16) = v35;
LABEL_18:
      v15 += 2;
      goto LABEL_19;
    }
    if ( (v20 & 0x40) != 0 )
    {
      FioFwReadUshortAtOffset(v13, v15, &v35);
      v15 += 2;
      *((_WORD *)v18 + 16) = v35;
      FioFwReadUshortAtOffset(v13, v15, &v35);
      *((_WORD *)v18 + 17) = v35;
      goto LABEL_18;
    }
    if ( (v20 & 0x80u) != 0 )
    {
      FioFwReadUshortAtOffset(v13, v15, &v35);
      v23 = v15 + 2;
      *((_WORD *)v18 + 16) = v35;
      FioFwReadUshortAtOffset(v13, v23, &v35);
      v23 += 2;
      *((_WORD *)v18 + 17) = v35;
      FioFwReadUshortAtOffset(v13, v23, &v35);
      v15 = v23 + 2;
      *((_WORD *)v18 + 18) = v35;
      FioFwReadUshortAtOffset(v13, v15, &v35);
      *(_DWORD *)(v18 + 38) = v35;
      goto LABEL_18;
    }
LABEL_19:
    GlyphData = RaspMapGlyphIndexToLocation(a1, v30[0], &v32);
    if ( GlyphData < 0 )
      break;
    GlyphData = RaspLoadGlyphData(a1, v32, (int)v30, (__int64 *)&v34, (__int64)a8);
    if ( GlyphData < 0 )
      break;
    v25 = v36;
    *((_QWORD *)v18 + 2) = v34;
    v26 = v34;
    *v25 += v34[12];
    *v37 += *v26;
    if ( (v20 & 0x20) == 0 )
    {
      if ( (v20 & 0x100) != 0 )
      {
        FioFwReadUshortAtOffset(v13, v15, a5);
        v15 += 2;
      }
      *a6 = v15 - v33;
      return (unsigned int)GlyphData;
    }
  }
  v16 = a8;
LABEL_29:
  while ( 1 )
  {
    v27 = *v14;
    if ( *v14 == (__int64 *)v14 )
      break;
    v28 = *v27;
    if ( (__int64 **)v27[1] != v14 || *(__int64 **)(v28 + 8) != v27 )
      __fastfail(3u);
    *v14 = (__int64 *)v28;
    *(_QWORD *)(v28 + 8) = v14;
    RaspFreeMemory(v27[2], v16);
    RaspFreeMemory((__int64)v27, v16);
  }
  return (unsigned int)GlyphData;
}
