/*
 * XREFs of ?bGetWidthTable@RFONTOBJ@@QEAAHAEAVXDCOBJ@@KPEAGK1@Z @ 0x1C002DB58
 * Callers:
 *     NtGdiGetWidthTable @ 0x1C0109C80 (NtGdiGetWidthTable.c)
 * Callees:
 *     ?QueryAdvanceWidths@PDEVOBJ@@QEAAHPEAUDHPDEV__@@PEAU_FONTOBJ@@KPEAKPEAXK@Z @ 0x1C002917C (-QueryAdvanceWidths@PDEVOBJ@@QEAAHPEAUDHPDEV__@@PEAU_FONTOBJ@@KPEAKPEAXK@Z.c)
 *     ?bIsLinkedGlyph@RFONTOBJ@@QEAAHG@Z @ 0x1C002C3F8 (-bIsLinkedGlyph@RFONTOBJ@@QEAAHG@Z.c)
 *     ?bGetGlyphMetrics@RFONTOBJ@@QEAAHKPEAU_GLYPHPOS@@PEAGPEAVXDCOBJ@@PEAVESTROBJ@@@Z @ 0x1C002E60C (-bGetGlyphMetrics@RFONTOBJ@@QEAAHKPEAU_GLYPHPOS@@PEAGPEAVXDCOBJ@@PEAVESTROBJ@@@Z.c)
 *     ?vXlatGlyphArray@RFONTOBJ@@QEAAXPEAGIPEAKKH@Z @ 0x1C002F568 (-vXlatGlyphArray@RFONTOBJ@@QEAAXPEAGIPEAKKH@Z.c)
 *     __security_check_cookie @ 0x1C0158CD0 (__security_check_cookie.c)
 */

__int64 __fastcall RFONTOBJ::bGetWidthTable(
        RFONTOBJ *this,
        struct XDCOBJ *a2,
        unsigned int a3,
        unsigned __int16 *a4,
        unsigned int a5,
        struct ESTROBJ *a6)
{
  unsigned int v6; // r15d
  unsigned __int16 *v7; // r13
  struct XDCOBJ *v8; // r10
  unsigned int v10; // r12d
  unsigned int v11; // ebx
  unsigned __int16 *v12; // rcx
  unsigned int v13; // ebp
  unsigned int v14; // eax
  unsigned __int16 *v15; // rdi
  unsigned int v16; // esi
  unsigned int v17; // eax
  __int64 v18; // r9
  int v19; // ecx
  unsigned int v20; // r8d
  __int16 v21; // r10
  unsigned int *v22; // r9
  signed __int64 v23; // rdx
  unsigned __int16 *v24; // r13
  __int64 v25; // rax
  __int64 v26; // rdi
  unsigned int v27; // eax
  unsigned __int16 v28; // dx
  unsigned __int16 v30; // cx
  __int64 v31; // rcx
  unsigned __int16 *v32; // rdi
  unsigned int v33; // [rsp+40h] [rbp-1F8h]
  __int16 v34; // [rsp+44h] [rbp-1F4h]
  unsigned int *v35; // [rsp+48h] [rbp-1F0h]
  unsigned int v36; // [rsp+50h] [rbp-1E8h]
  unsigned int v37; // [rsp+54h] [rbp-1E4h]
  unsigned int v38; // [rsp+58h] [rbp-1E0h]
  unsigned __int16 *v39; // [rsp+60h] [rbp-1D8h]
  int AdvanceWidths; // [rsp+68h] [rbp-1D0h]
  unsigned __int16 *v42; // [rsp+80h] [rbp-1B8h]
  unsigned __int16 *v43; // [rsp+88h] [rbp-1B0h]
  __int64 v44; // [rsp+90h] [rbp-1A8h] BYREF
  unsigned __int16 *v45; // [rsp+98h] [rbp-1A0h]
  struct _GLYPHPOS v46; // [rsp+A0h] [rbp-198h] BYREF
  unsigned int v47[72]; // [rsp+C0h] [rbp-178h] BYREF

  v6 = 1;
  v7 = (unsigned __int16 *)a6;
  v8 = a2;
  v43 = a4;
  v38 = a3;
  v10 = 1;
  v44 = *(_QWORD *)(*(_QWORD *)this + 80LL);
  v45 = (unsigned __int16 *)a6;
  if ( !*(_QWORD *)(v44 + 3136) )
  {
    v11 = a5;
    if ( a5 )
    {
      v31 = a5;
      v32 = (unsigned __int16 *)a6;
      while ( v31 )
      {
        *v32++ = -1;
        --v31;
      }
    }
    v10 = 0;
    goto LABEL_20;
  }
  v11 = a5;
  v12 = a4;
  v37 = a5;
  v13 = a5;
  v42 = (unsigned __int16 *)a6;
  if ( a3 < a5 )
    v13 = a3;
  v39 = a4;
  v14 = a5;
  v15 = (unsigned __int16 *)a6;
  if ( a5 )
  {
    while ( 1 )
    {
      v16 = 70;
      if ( v13 )
      {
        if ( v13 < 0x46 )
          v16 = v13;
        v17 = 0;
      }
      else
      {
        if ( v14 < 0x46 )
          v16 = v14;
        v17 = 2;
      }
      v36 = v17;
      RFONTOBJ::vXlatGlyphArray(this, v12, v16, v47, v17, 0);
      AdvanceWidths = PDEVOBJ::QueryAdvanceWidths(
                        (PDEVOBJ *)&v44,
                        *(struct DHPDEV__ **)(*(_QWORD *)this + 104LL),
                        *(struct _FONTOBJ **)this,
                        v18,
                        v47,
                        v15,
                        v16);
      if ( AdvanceWidths == -1 )
        break;
      v19 = *(_DWORD *)(*(_QWORD *)this + 720LL);
      if ( (v19 & 0x40) != 0 )
      {
        v20 = 0;
        *(_DWORD *)(*(_QWORD *)this + 720LL) = v19 & 0xFFFFFFBF;
        v33 = 0;
        v21 = *(_WORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)this + 112LL) + 32LL) + 116LL);
        v34 = v21;
        if ( v16 )
        {
          v22 = v47;
          v23 = (char *)v39 - (char *)v15;
          v35 = v47;
          v24 = v15;
          while ( 1 )
          {
            if ( *v22 == *(_DWORD *)(*(_QWORD *)this + 456LL) )
            {
              v28 = *(unsigned __int16 *)((char *)v24 + v23);
              if ( v28 != v21 )
              {
                if ( v36 != 2 )
                {
                  if ( (unsigned int)RFONTOBJ::bIsLinkedGlyph(this, v28)
                    || (v30 = *(unsigned __int16 *)((char *)v24 + (char *)v39 - (char *)v15),
                        *(_DWORD *)(*(_QWORD *)this + 716LL))
                    && v30 >= gqlTTSystem
                    && v30 <= (unsigned __int16)word_1C032895A
                    && ((0x80000000 >> ((v30 - gqlTTSystem) % 32)) & *(_DWORD *)(qword_1C0328960
                                                                               + 4LL * ((v30 - gqlTTSystem) / 32))) != 0 )
                  {
                    if ( !(unsigned int)RFONTOBJ::bGetGlyphMetrics(this, 1u, &v46, &v39[v33], a2, 0LL) )
                      return 0xFFFFFFFFLL;
                    v20 = v33;
                    v22 = v35;
                    *v24 = WORD2(v46.pgdf[1].ppo);
                    goto LABEL_14;
                  }
                  v22 = v35;
                  v20 = v33;
                }
                v10 = 0;
                *v24 = -1;
              }
            }
LABEL_14:
            v23 = (char *)v39 - (char *)v15;
            ++v20;
            v21 = v34;
            ++v22;
            ++v24;
            v33 = v20;
            v35 = v22;
            if ( v20 >= v16 )
            {
              v15 = v42;
              break;
            }
          }
        }
      }
      v10 &= AdvanceWidths;
      v25 = v16;
      v15 = (unsigned __int16 *)((char *)v15 + v25 * 2);
      v12 = &v39[v25];
      v14 = v37 - v16;
      v42 = v15;
      v39 = v12;
      v37 -= v16;
      if ( v13 )
        v13 -= v16;
      if ( !v14 )
      {
        a3 = v38;
        v7 = v45;
        a4 = v43;
        v8 = a2;
LABEL_20:
        if ( !v10 )
        {
          v26 = 0LL;
          while ( 1 )
          {
            v27 = v11;
            if ( a3 < v11 )
              v27 = a3;
            if ( (unsigned int)v26 >= v27 )
              break;
            if ( v7[v26] == 0xFFFF )
            {
              if ( !(unsigned int)RFONTOBJ::bGetGlyphMetrics(this, 1u, &v46, &a4[v26], v8, 0LL) )
                return 0xFFFFFFFFLL;
              a3 = v38;
              v7[v26] = WORD2(v46.pgdf[1].ppo);
            }
            a4 = v43;
            v26 = (unsigned int)(v26 + 1);
            v8 = a2;
          }
        }
        goto LABEL_33;
      }
    }
    *(_DWORD *)(*(_QWORD *)this + 720LL) &= ~0x40u;
    return 0xFFFFFFFFLL;
  }
  else
  {
LABEL_33:
    if ( v11 == a3 )
    {
      if ( v10 == -1 )
        return (unsigned int)-1;
      return v6;
    }
    else
    {
      return v10;
    }
  }
}
