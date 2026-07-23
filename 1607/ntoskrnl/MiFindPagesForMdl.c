/*
 * XREFs of MiFindPagesForMdl @ 0x140101DCC
 * Callers:
 *     MiAllocatePagesForMdl @ 0x140101FA4 (MiAllocatePagesForMdl.c)
 * Callees:
 *     MiFindContiguousPages @ 0x140102220 (MiFindContiguousPages.c)
 *     MiAllocateMostlyContiguous @ 0x140102EC0 (MiAllocateMostlyContiguous.c)
 *     MiPfnZeroingNeeded @ 0x140104F58 (MiPfnZeroingNeeded.c)
 *     MiAllocateMdlPagesByLists @ 0x14010FD90 (MiAllocateMdlPagesByLists.c)
 */

__int64 __fastcall MiFindPagesForMdl(
        int a1,
        __int64 a2,
        int a3,
        unsigned int a4,
        __int64 a5,
        unsigned __int64 a6,
        unsigned __int64 a7,
        __int64 a8,
        unsigned __int16 a9)
{
  int v9; // edi
  __int16 v10; // r8
  __int64 v11; // r12
  unsigned int v12; // ebp
  _WORD *v13; // rsi
  unsigned __int64 v14; // rdx
  unsigned __int64 v15; // r15
  int MdlPagesByLists; // eax
  unsigned __int64 v18; // r13
  unsigned __int64 v19; // r14
  unsigned __int64 v20; // rdx
  unsigned __int64 v21; // r8
  unsigned __int64 *v22; // rax
  __int64 v23; // rdx
  int v24; // eax
  unsigned __int64 v25; // rbx
  unsigned __int64 v26; // rbx
  int ContiguousPages; // eax
  unsigned __int64 v28; // r8
  __int64 v29; // r9
  unsigned __int64 v30; // r11
  unsigned __int64 v31; // r10
  unsigned __int64 *v32; // rax
  bool v33; // zf
  bool v34; // cf
  _WORD v35[2]; // [rsp+50h] [rbp-78h] BYREF
  int v36; // [rsp+54h] [rbp-74h]
  unsigned __int64 v37; // [rsp+58h] [rbp-70h]
  unsigned __int64 v38; // [rsp+60h] [rbp-68h] BYREF
  unsigned __int64 *v39; // [rsp+68h] [rbp-60h]
  _WORD *v40; // [rsp+70h] [rbp-58h]
  unsigned __int64 v41; // [rsp+78h] [rbp-50h]
  int v44; // [rsp+E0h] [rbp+18h]
  unsigned int v45; // [rsp+E8h] [rbp+20h]

  v45 = a4;
  v44 = a3;
  v9 = a3;
  v10 = a9;
  v11 = a2;
  v12 = 0;
  v41 = BugCheckParameter3;
  v40 = 0LL;
  if ( (unsigned __int16)KeNumberNodes <= 1u )
  {
    v9 &= ~2u;
    v35[0] = 0;
    v44 = v9;
    v13 = v35;
    goto LABEL_3;
  }
  if ( (v9 & 2) == 0 )
  {
    v13 = (char *)qword_1403269E8 + 2 * a9 * (unsigned __int16)KeNumberNodes;
    v40 = &v13[(unsigned __int16)KeNumberNodes];
LABEL_3:
    if ( v13 != v35 )
      goto LABEL_5;
    goto LABEL_4;
  }
  v10 = a9;
  v13 = v35;
  v35[0] = a9;
LABEL_4:
  v40 = v13 + 1;
LABEL_5:
  if ( (v9 & 0x100) != 0 )
  {
    v9 |= 0x4000000u;
    v44 = v9;
  }
  v14 = (unsigned __int64)*(unsigned int *)(a2 + 40) >> 12;
  v15 = v14;
  if ( (v9 & 0x10052) != 0x10000 )
    goto LABEL_13;
  MdlPagesByLists = MiAllocateMdlPagesByLists(a1, v11, v9, a4, a7, a5 - v14, v10);
  v14 = (unsigned __int64)*(unsigned int *)(v11 + 40) >> 12;
  v15 = v14;
  if ( v14 && *(_QWORD *)(v11 + 24) )
    v12 = 1;
  if ( MdlPagesByLists != 1 )
  {
    a4 = v45;
    v9 &= ~0x10000u;
    v44 = v9;
LABEL_13:
    v18 = a6;
    v19 = a7;
    v20 = v14 + 6;
    v21 = -1LL;
    if ( (_bittest64((const signed __int64 *)&KeFeatureBits, 0x25u) & ((v9 & 0x40) != 0)) != 0 )
      v21 = 0x40000LL;
    v22 = (unsigned __int64 *)(v11 + 8 * v20);
    v23 = a8;
    v39 = v22;
    v24 = v9 & 0x20;
    v37 = v21;
    v36 = v24;
    while ( 1 )
    {
      if ( !v24 )
      {
        v25 = (unsigned __int64)*(unsigned int *)(v11 + 40) >> 12;
        MiAllocateMostlyContiguous(a1, v11, v9, a4, a5 - v15, (unsigned __int16)*v13, v18, v19);
        v15 += ((unsigned __int64)*(unsigned int *)(v11 + 40) >> 12) - v25;
        if ( *(_QWORD *)(v11 + 24) )
          v12 = 1;
        if ( v15 == a5 )
          return v12;
        v23 = a8;
        if ( a8 && a8 + v18 > v18 && a8 + v18 <= v41 )
        {
          v18 += a8;
          if ( v19 + a8 <= v19 || v19 + a8 > v41 )
            v19 = v41;
          else
            v19 += a8;
        }
        else
        {
LABEL_40:
          if ( (v9 & 2) != 0 )
            return v12;
          if ( ++v13 >= v40 )
            return v12;
          v18 = a6;
          v19 = a7;
        }
        a4 = v45;
        v24 = v36;
        goto LABEL_26;
      }
      v38 = -1LL;
      if ( !v23 )
        break;
      v26 = v23;
      if ( (v9 & 0x40) == 0 || a5 - v15 < v21 )
        goto LABEL_37;
      ContiguousPages = MiFindContiguousPages(
                          a1,
                          v18,
                          v19,
                          v23,
                          v21,
                          a4,
                          (unsigned __int16)*v13,
                          0x80000000,
                          v9 | 0x60000000u,
                          (__int64)&v38);
      LODWORD(v23) = a8;
      if ( ContiguousPages < 0 )
      {
        if ( a8 == v37 )
          ContiguousPages = -1073741637;
      }
      else
      {
        v26 = v37;
      }
      if ( ContiguousPages >= 0 )
        goto LABEL_43;
      if ( ContiguousPages != -1073741637 )
        goto LABEL_37;
LABEL_38:
      if ( ContiguousPages < 0 )
      {
        v23 = a8;
        goto LABEL_40;
      }
LABEL_43:
      v28 = v38;
      v15 += v26;
      v29 = 48 * v38 - 0x58000000000LL;
      v30 = v26 + v38;
      v31 = v38;
      if ( v38 < v26 + v38 )
      {
        v32 = v39;
        do
        {
          *v32++ = v31;
          v39 = v32;
          if ( v12 != 1 )
          {
            v33 = (unsigned int)MiPfnZeroingNeeded(v29, v45) == 0;
            v32 = v39;
            if ( !v33 )
              v12 = 1;
          }
          v29 += 48LL;
          ++v31;
        }
        while ( v31 < v30 );
        v9 = v44;
        v11 = a2;
      }
      *(_DWORD *)(v11 + 40) += (_DWORD)v26 << 12;
      if ( v15 == a5 )
        return v12;
      v23 = a8;
      a4 = v45;
      v24 = v36;
      if ( (v9 & 0x40) != 0 )
      {
LABEL_26:
        v21 = v37;
      }
      else
      {
        v19 = v28 - 1;
        v34 = v28 - v18 < v26;
        v21 = v37;
        if ( v34 )
          goto LABEL_40;
      }
    }
    v26 = a5 - v15;
LABEL_37:
    ContiguousPages = MiFindContiguousPages(
                        a1,
                        v18,
                        v19,
                        v23,
                        v26,
                        v45,
                        (unsigned __int16)*v13,
                        0x80000000,
                        v9 | 0x60000000u,
                        (__int64)&v38);
    goto LABEL_38;
  }
  return v12;
}
