/*
 * XREFs of ?bGetWidthTable@RFONTOBJ@@QEAAHAEAVXDCOBJ@@KPEAGK1@Z @ 0x1C002A200
 * Callers:
 *     NtGdiGetWidthTable @ 0x1C002F570 (NtGdiGetWidthTable.c)
 * Callees:
 *     ?bGetGlyphMetrics@RFONTOBJ@@QEAAHKPEAU_GLYPHPOS@@PEAGPEAVXDCOBJ@@PEAVESTROBJ@@@Z @ 0x1C002AF58 (-bGetGlyphMetrics@RFONTOBJ@@QEAAHKPEAU_GLYPHPOS@@PEAGPEAVXDCOBJ@@PEAVESTROBJ@@@Z.c)
 *     ?vXlatGlyphArray@RFONTOBJ@@QEAAXPEAGIPEAKKH@Z @ 0x1C002BF60 (-vXlatGlyphArray@RFONTOBJ@@QEAAXPEAGIPEAKKH@Z.c)
 *     ?bIsLinkedGlyph@RFONTOBJ@@QEAAHG@Z @ 0x1C002DD7C (-bIsLinkedGlyph@RFONTOBJ@@QEAAHG@Z.c)
 *     __security_check_cookie @ 0x1C015BB90 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C015D150 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall RFONTOBJ::bGetWidthTable(
        RFONTOBJ *this,
        struct XDCOBJ *a2,
        unsigned int a3,
        unsigned __int16 *a4,
        unsigned int a5,
        unsigned __int16 *a6)
{
  unsigned __int16 *v7; // rsi
  struct XDCOBJ *v8; // r8
  unsigned __int16 *v9; // r10
  unsigned int v10; // edx
  unsigned int v12; // r12d
  unsigned __int16 *v13; // rdi
  unsigned int v14; // ecx
  unsigned int v15; // eax
  unsigned __int16 *v16; // r12
  unsigned int v17; // ebp
  unsigned int v18; // eax
  int v19; // r9d
  __int64 v20; // rbx
  __int64 v21; // rsi
  __int64 (__fastcall *v22)(__int64, __int64, __int64, unsigned int *, unsigned __int16 *, unsigned int); // rdi
  int v23; // ecx
  __int64 v24; // rbx
  __int16 v25; // r8
  unsigned __int16 *v26; // rsi
  unsigned int *v27; // rdi
  signed __int64 v28; // r12
  __int64 v29; // rax
  __int64 v30; // rdi
  unsigned int v31; // eax
  __int64 v32; // rbx
  unsigned __int16 v33; // dx
  __int64 result; // rax
  unsigned __int16 v35; // cx
  int v36; // edx
  char v37; // cl
  __int64 v38; // rcx
  unsigned __int16 *v39; // rdi
  __int16 v40; // [rsp+40h] [rbp-218h]
  int v41; // [rsp+44h] [rbp-214h]
  int v42; // [rsp+48h] [rbp-210h]
  unsigned int v43; // [rsp+4Ch] [rbp-20Ch]
  unsigned int v44; // [rsp+50h] [rbp-208h]
  unsigned int v45; // [rsp+54h] [rbp-204h]
  unsigned __int16 *v46; // [rsp+58h] [rbp-200h]
  unsigned __int16 *v47; // [rsp+60h] [rbp-1F8h]
  __int64 v50; // [rsp+78h] [rbp-1E0h] BYREF
  unsigned __int16 *v51; // [rsp+80h] [rbp-1D8h]
  struct _GLYPHPOS v52; // [rsp+88h] [rbp-1D0h] BYREF
  __int64 *v53; // [rsp+A0h] [rbp-1B8h]
  _KAPC_STATE ApcState; // [rsp+A8h] [rbp-1B0h] BYREF
  unsigned int v55[72]; // [rsp+E0h] [rbp-178h] BYREF

  v7 = a6;
  v8 = a2;
  v9 = a4;
  v10 = 1;
  v50 = *(_QWORD *)(*(_QWORD *)this + 80LL);
  v51 = a6;
  v41 = 1;
  if ( !*(_QWORD *)(v50 + 3144) )
  {
    v12 = a5;
    if ( a5 )
    {
      v38 = a5;
      v39 = a6;
      while ( v38 )
      {
        *v39++ = -1;
        --v38;
      }
    }
    v41 = 0;
    goto LABEL_28;
  }
  v12 = a5;
  v13 = a4;
  v47 = a6;
  v14 = a5;
  v46 = a4;
  if ( a3 < a5 )
    v14 = a3;
  v15 = a5;
  v45 = v14;
  v43 = a5;
  if ( a5 )
  {
    v16 = a6;
    while ( 1 )
    {
      v17 = 70;
      if ( v14 )
      {
        if ( v14 < 0x46 )
          v17 = v14;
        v18 = 0;
      }
      else
      {
        if ( v15 < 0x46 )
          v17 = v15;
        v18 = 2;
      }
      v44 = v18;
      RFONTOBJ::vXlatGlyphArray(this, v13, v17, v55, v18, 0);
      v19 = 0;
      v20 = *(_QWORD *)this;
      v42 = 0;
      v21 = *(_QWORD *)(*(_QWORD *)this + 104LL);
      v22 = *(__int64 (__fastcall **)(__int64, __int64, __int64, unsigned int *, unsigned __int16 *, unsigned int))(v50 + 3144);
      if ( gpepCSRSS )
      {
        if ( (*(_DWORD *)(v50 + 56) & 0x2000) == 0 || v50 == qword_1C032F1C8 )
        {
          v53 = 0LL;
        }
        else
        {
          v53 = &v50;
          KeStackAttachProcess(gpepCSRSS, &ApcState);
        }
        v19 = v22(v21, v20, 1LL, v55, v16, v17);
        v42 = v19;
        if ( v53 )
        {
          KeUnstackDetachProcess(&ApcState);
          v19 = v42;
        }
        if ( v19 == -1 )
          break;
      }
      v23 = *(_DWORD *)(*(_QWORD *)this + 720LL);
      if ( (v23 & 0x40) != 0 )
      {
        v24 = 0LL;
        *(_DWORD *)(*(_QWORD *)this + 720LL) = v23 & 0xFFFFFFBF;
        v25 = *(_WORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)this + 112LL) + 32LL) + 116LL);
        v40 = v25;
        if ( v17 )
        {
          v26 = v16;
          v27 = v55;
          v28 = (char *)v46 - (char *)v47;
          while ( 1 )
          {
            if ( *v27 == *(_DWORD *)(*(_QWORD *)this + 456LL) )
            {
              v33 = *(unsigned __int16 *)((char *)v26 + v28);
              if ( v33 != v25 )
              {
                if ( v44 != 2 )
                {
                  if ( (unsigned int)RFONTOBJ::bIsLinkedGlyph(this, v33) )
                    goto LABEL_58;
                  v35 = *(unsigned __int16 *)((char *)v26 + v28);
                  if ( *(_DWORD *)(*(_QWORD *)this + 716LL)
                    && v35 >= gqlTTSystem
                    && v35 <= (unsigned __int16)word_1C03233D2 )
                  {
                    v36 = v35 - gqlTTSystem;
                    v37 = (v35 - gqlTTSystem) & 0x1F;
                    if ( v36 < 0 )
                    {
                      v36 += 31;
                      v37 -= 32;
                    }
                    if ( ((0x80000000 >> v37) & *(_DWORD *)(qword_1C03233D8 + 4LL * (v36 >> 5))) != 0 )
                    {
LABEL_58:
                      if ( !(unsigned int)RFONTOBJ::bGetGlyphMetrics(this, 1u, &v52, &v46[v24], a2, 0LL) )
                        return 0xFFFFFFFFLL;
                      v25 = v40;
                      *v26 = WORD2(v52.pgdf[1].ppo);
                      goto LABEL_21;
                    }
                  }
                  v25 = v40;
                }
                *v26 = -1;
                v41 = 0;
              }
            }
LABEL_21:
            v24 = (unsigned int)(v24 + 1);
            ++v27;
            ++v26;
            if ( (unsigned int)v24 >= v17 )
            {
              v19 = v42;
              v16 = v47;
              break;
            }
          }
        }
      }
      v14 = v45;
      v10 = v19 & v41;
      v29 = v17;
      v41 &= v19;
      v16 = (unsigned __int16 *)((char *)v16 + v29 * 2);
      v13 = &v46[v29];
      v15 = v43 - v17;
      v47 = v16;
      v46 = v13;
      v43 -= v17;
      if ( v45 )
      {
        v14 = v45 - v17;
        v45 -= v17;
      }
      if ( !v15 )
      {
        v12 = a5;
        if ( !v10 )
        {
          v7 = v51;
          v9 = a4;
          v8 = a2;
LABEL_28:
          v30 = 0LL;
          while ( 1 )
          {
            v31 = a3 >= v12 ? v12 : a3;
            if ( (unsigned int)v30 >= v31 )
              break;
            v32 = v30;
            if ( v7[v30] == 0xFFFF )
            {
              if ( !(unsigned int)RFONTOBJ::bGetGlyphMetrics(this, 1u, &v52, &v9[v32], v8, 0LL) )
                return 0xFFFFFFFFLL;
              v7[v32] = WORD2(v52.pgdf[1].ppo);
            }
            v9 = a4;
            v30 = (unsigned int)(v30 + 1);
            v8 = a2;
          }
          v10 = v41;
        }
        goto LABEL_41;
      }
    }
    *(_DWORD *)(*(_QWORD *)this + 720LL) &= ~0x40u;
    return 0xFFFFFFFFLL;
  }
  else
  {
LABEL_41:
    if ( v12 == a3 )
    {
      result = 1LL;
      if ( v10 == -1 )
        return 0xFFFFFFFFLL;
    }
    else
    {
      return v10;
    }
  }
  return result;
}
