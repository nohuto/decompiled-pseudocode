/*
 * XREFs of MiFindPagesForMdl @ 0x1400BCF40
 * Callers:
 *     MiAllocatePagesForMdl @ 0x1400BC760 (MiAllocatePagesForMdl.c)
 * Callees:
 *     MiFindContiguousPages @ 0x1400BE4E0 (MiFindContiguousPages.c)
 *     MiAllocateMostlyContiguous @ 0x1400BEC20 (MiAllocateMostlyContiguous.c)
 *     MiAllocateMdlPagesByLists @ 0x140104DC8 (MiAllocateMdlPagesByLists.c)
 */

__int64 __fastcall MiFindPagesForMdl(
        int a1,
        __int64 a2,
        unsigned int a3,
        int a4,
        __int64 a5,
        unsigned __int64 a6,
        unsigned __int64 a7,
        __int64 a8,
        unsigned __int16 a9)
{
  unsigned int v9; // edi
  unsigned __int16 *v10; // rsi
  unsigned int v12; // ebx
  int v13; // r11d
  int v14; // r10d
  unsigned __int64 v15; // rcx
  unsigned __int64 v16; // r12
  unsigned __int64 v18; // r13
  unsigned __int64 v19; // r14
  __int64 v20; // rax
  __int64 v21; // rcx
  __int64 v22; // r9
  int v23; // eax
  unsigned __int64 v24; // r15
  int v25; // edx
  unsigned int v26; // eax
  int ContiguousPages; // eax
  unsigned __int64 v28; // rcx
  unsigned __int64 v29; // r8
  unsigned __int64 v30; // rdx
  unsigned __int64 *v31; // r11
  _QWORD *v32; // rax
  bool v33; // zf
  bool v34; // cf
  int v35; // eax
  unsigned __int64 v36; // r15
  unsigned __int64 *v37; // [rsp+50h] [rbp-68h]
  unsigned __int16 *v38; // [rsp+58h] [rbp-60h]
  unsigned __int64 v39; // [rsp+60h] [rbp-58h] BYREF
  unsigned __int64 v40; // [rsp+68h] [rbp-50h]
  __int64 v42; // [rsp+C8h] [rbp+10h]

  v9 = 0;
  v10 = 0LL;
  v38 = 0LL;
  v12 = a3;
  v13 = a4;
  v40 = BugCheckParameter3;
  v14 = a1;
  if ( (unsigned __int16)KeNumberNodes <= 1u )
  {
    v12 = a3 & 0xFFFFFFFD;
  }
  else
  {
    v10 = (unsigned __int16 *)((char *)qword_1402FE6B8 + 2 * a9 * (unsigned __int16)KeNumberNodes);
    v38 = &v10[(unsigned __int16)KeNumberNodes];
  }
  if ( (v12 & 0x100) != 0 )
    v12 |= 0x4000000u;
  v15 = (unsigned __int64)*(unsigned int *)(a2 + 40) >> 12;
  v16 = a5 - v15;
  if ( (v12 & 0x20052) != 0x20000 )
  {
    v18 = a6;
    v19 = a7;
    v20 = a2 + 48 + 8 * v15;
    v21 = a8;
    LODWORD(v22) = 0;
    v37 = (unsigned __int64 *)v20;
    v23 = v12 & 0x20;
    v42 = 0LL;
    while ( 1 )
    {
      if ( v23 )
      {
        v24 = v16;
        if ( v21 )
          v24 = v21;
        v25 = v12 | 0x60000000;
        while ( 1 )
        {
          v26 = 0x80000000;
          if ( v10 )
            v26 = *v10;
          ContiguousPages = MiFindContiguousPages(v14, v18, v19, v21, v24, v13, v26, 0x80000000, v25, (__int64)&v39);
          LODWORD(v22) = v42;
          if ( ContiguousPages < 0 )
            break;
          v28 = v39;
          v22 = v24 + v42;
          v42 += v24;
          v29 = v39 + v24;
          v30 = v39;
          if ( v39 < v39 + v24 )
          {
            v31 = v37;
            v32 = (_QWORD *)(48 * v39 - 0x58000000000LL + 16);
            do
            {
              *v31++ = v30;
              v33 = *v32 == 128LL;
              v32 += 6;
              if ( v33 )
                v9 = 1;
              ++v30;
            }
            while ( v30 < v29 );
            v37 = v31;
          }
          *(_DWORD *)(a2 + 40) += (_DWORD)v24 << 12;
          if ( v22 == v16 )
            return v9;
          v25 = v12 | 0x60000000;
          v14 = a1;
          v13 = a4;
          if ( (v12 & 0x40) != 0 )
          {
            LODWORD(v21) = a8;
          }
          else
          {
            LODWORD(v19) = v28 - 1;
            v34 = v28 - v18 < v24;
            v21 = a8;
            if ( v34 )
              goto LABEL_43;
          }
        }
        v21 = a8;
      }
      else
      {
        v35 = 64;
        v36 = (unsigned __int64)*(unsigned int *)(a2 + 40) >> 12;
        if ( v10 )
          v35 = *v10;
        MiAllocateMostlyContiguous(v14, a2, v16 - v22, v18, v19, v12, v35);
        v22 = ((unsigned __int64)*(unsigned int *)(a2 + 40) >> 12) - v36 + v42;
        v42 = v22;
        if ( *(_QWORD *)(a2 + 24) )
          v9 = 1;
        if ( v22 == v16 )
          return v9;
        v21 = a8;
        if ( a8 && a8 + v18 > v18 && a8 + v18 <= v40 )
        {
          v18 += a8;
          if ( v19 + a8 <= v19 || v19 + a8 > v40 )
            v19 = v40;
          else
            v19 += a8;
          goto LABEL_47;
        }
      }
LABEL_43:
      if ( !v10 )
        return v9;
      if ( (v12 & 2) != 0 )
        return v9;
      if ( ++v10 >= v38 )
        return v9;
      v18 = a6;
      v19 = a7;
LABEL_47:
      v23 = v12 & 0x20;
      v14 = a1;
      v13 = a4;
    }
  }
  MiAllocateMdlPagesByLists(v14, a2, a5 - v15, a9, v12);
  if ( *(_QWORD *)(a2 + 24) && (*(_DWORD *)(a2 + 40) & 0xFFFFF000) != 0 )
    return 1;
  return v9;
}
