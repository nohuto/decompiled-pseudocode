/*
 * XREFs of MiFindPagesForMdl @ 0x1400778A4
 * Callers:
 *     MiAllocatePagesForMdl @ 0x140076E38 (MiAllocatePagesForMdl.c)
 * Callees:
 *     MiFindContiguousPages @ 0x14005BA20 (MiFindContiguousPages.c)
 *     MiAllocateMostlyContiguous @ 0x14005BFB0 (MiAllocateMostlyContiguous.c)
 *     MiAllocateMdlPagesByLists @ 0x140133FF0 (MiAllocateMdlPagesByLists.c)
 *     MiMakeDemandZeroPte @ 0x140225C14 (MiMakeDemandZeroPte.c)
 */

__int64 __fastcall MiFindPagesForMdl(
        __int16 *a1,
        __int64 a2,
        unsigned int a3,
        unsigned int a4,
        __int64 a5,
        unsigned __int64 a6,
        unsigned __int64 a7,
        __int64 a8,
        unsigned __int16 a9)
{
  unsigned int v9; // edi
  unsigned __int16 *v10; // rsi
  __int64 v11; // rbp
  unsigned int v12; // ebx
  unsigned __int64 v13; // r14
  unsigned __int64 v14; // rax
  unsigned __int64 v15; // r13
  unsigned __int64 v17; // r12
  __int64 v18; // r11
  __int64 v19; // rcx
  int v20; // eax
  __int64 v21; // rcx
  unsigned __int64 v22; // r15
  unsigned int v23; // edx
  unsigned int v24; // eax
  int ContiguousPages; // eax
  unsigned __int64 v26; // rdx
  unsigned __int64 v27; // r9
  unsigned __int64 *v28; // r11
  __int64 DemandZeroPte; // rax
  __int64 v30; // r9
  unsigned __int64 v31; // r10
  _QWORD *v32; // r8
  bool v33; // cf
  unsigned int v34; // eax
  unsigned __int64 v35; // r15
  __int64 v36; // [rsp+50h] [rbp-78h]
  unsigned __int64 *v37; // [rsp+58h] [rbp-70h]
  unsigned __int16 *v38; // [rsp+60h] [rbp-68h]
  unsigned __int64 v39; // [rsp+68h] [rbp-60h] BYREF
  unsigned __int64 v40; // [rsp+70h] [rbp-58h]

  v9 = 0;
  v10 = 0LL;
  v38 = 0LL;
  v11 = a2;
  v12 = a3;
  v40 = BugCheckParameter3;
  if ( (unsigned __int16)KeNumberNodes <= 1u )
  {
    v12 = a3 & 0xFFFFFFFD;
  }
  else
  {
    v10 = (unsigned __int16 *)((char *)qword_14034EB68 + 2 * a9 * (unsigned __int16)KeNumberNodes);
    v38 = &v10[(unsigned __int16)KeNumberNodes];
  }
  if ( (v12 & 0x100) != 0 )
    v12 |= 0x4000000u;
  v13 = a7;
  v14 = (unsigned __int64)*(unsigned int *)(a2 + 40) >> 12;
  v15 = a5 - v14;
  if ( (v12 & 0x52) != 0 || a6 || a7 != qword_14034EC10 )
  {
    v17 = a6;
    v18 = 0LL;
    v36 = 0LL;
    v19 = a2 + 48 + 8 * v14;
    v20 = v12 & 0x20;
    v37 = (unsigned __int64 *)v19;
    v21 = a8;
    while ( 1 )
    {
      if ( v20 )
      {
        v22 = v15;
        if ( v21 )
          v22 = v21;
        v23 = v12 | 0x60000000;
        while ( 1 )
        {
          v24 = 0x80000000;
          if ( v10 )
            v24 = *v10;
          ContiguousPages = MiFindContiguousPages(a1, v17, v13, v21, v22, a4, v24, 0x80000000, v23, &v39);
          v18 = v36;
          if ( ContiguousPages < 0 )
            break;
          v26 = v39;
          v18 = v22 + v36;
          v36 += v22;
          v27 = v39;
          if ( v39 < v39 + v22 )
          {
            v28 = v37;
            do
            {
              *v28 = v27;
              DemandZeroPte = MiMakeDemandZeroPte(4LL);
              if ( *v32 == DemandZeroPte )
                v9 = 1;
              v27 = v30 + 1;
            }
            while ( v27 < v31 );
            v11 = a2;
            v37 = v28;
            v18 = v36;
          }
          *(_DWORD *)(v11 + 40) += (_DWORD)v22 << 12;
          if ( v18 == v15 )
            return v9;
          v21 = a8;
          if ( (v12 & 0x40) != 0 )
          {
            v23 = v12 | 0x60000000;
          }
          else
          {
            v13 = v26 - 1;
            v33 = v26 - v17 < v22;
            v23 = v12 | 0x60000000;
            if ( v33 )
              goto LABEL_45;
          }
        }
        v21 = a8;
      }
      else
      {
        v34 = 64;
        v35 = (unsigned __int64)*(unsigned int *)(v11 + 40) >> 12;
        if ( v10 )
          v34 = *v10;
        MiAllocateMostlyContiguous((__int64)a1, v11, v15 - v18, v17, v13, v12, v34);
        v18 = ((unsigned __int64)*(unsigned int *)(v11 + 40) >> 12) - v35 + v36;
        v36 = v18;
        if ( *(_QWORD *)(v11 + 24) )
          v9 = 1;
        if ( v18 == v15 )
          return v9;
        v21 = a8;
        if ( a8 && v17 + a8 > v17 && v17 + a8 <= v40 )
        {
          v17 += a8;
          if ( v13 + a8 <= v13 || v13 + a8 > v40 )
            v13 = v40;
          else
            v13 += a8;
          goto LABEL_49;
        }
      }
LABEL_45:
      if ( !v10 )
        return v9;
      if ( (v12 & 2) != 0 )
        return v9;
      if ( ++v10 >= v38 )
        return v9;
      v17 = a6;
      v13 = a7;
LABEL_49:
      v20 = v12 & 0x20;
    }
  }
  MiAllocateMdlPagesByLists((_DWORD)a1, a2, a5 - v14, a9, v12);
  if ( *(_QWORD *)(v11 + 24) && (*(_DWORD *)(v11 + 40) & 0xFFFFF000) != 0 )
    return 1;
  return v9;
}
