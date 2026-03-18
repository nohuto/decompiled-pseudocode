/*
 * XREFs of ?bGetWidthTable@RFONTOBJ@@QEAAHAEAVXDCOBJ@@KPEAGK1@Z @ 0x1C0022AC0
 * Callers:
 *     NtGdiGetWidthTable @ 0x1C00DDFE0 (NtGdiGetWidthTable.c)
 * Callees:
 *     ?bGetGlyphMetrics@RFONTOBJ@@QEAAHKPEAU_GLYPHPOS@@PEAGPEAVXDCOBJ@@PEAVESTROBJ@@@Z @ 0x1C0023760 (-bGetGlyphMetrics@RFONTOBJ@@QEAAHKPEAU_GLYPHPOS@@PEAGPEAVXDCOBJ@@PEAVESTROBJ@@@Z.c)
 *     ?vXlatGlyphArray@RFONTOBJ@@QEAAXPEAGIPEAKKH@Z @ 0x1C00246E0 (-vXlatGlyphArray@RFONTOBJ@@QEAAXPEAGIPEAKKH@Z.c)
 *     ?bIsLinkedGlyph@RFONTOBJ@@QEAAHG@Z @ 0x1C00264C8 (-bIsLinkedGlyph@RFONTOBJ@@QEAAHG@Z.c)
 *     __security_check_cookie @ 0x1C01512D0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0152950 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall RFONTOBJ::bGetWidthTable(
        RFONTOBJ *this,
        struct XDCOBJ *a2,
        unsigned int a3,
        unsigned __int16 *a4,
        unsigned int a5,
        unsigned __int16 *a6)
{
  __int64 v6; // rax
  struct XDCOBJ *v7; // r11
  unsigned int v8; // r14d
  unsigned __int16 *v9; // rdx
  unsigned __int16 *v10; // r10
  unsigned int v12; // r13d
  unsigned int v13; // ebx
  unsigned __int16 *v14; // rcx
  unsigned int v15; // r12d
  unsigned int v16; // eax
  unsigned int v17; // esi
  unsigned int v18; // eax
  __int64 (__fastcall *v19)(__int64, __int64, __int64, unsigned int *, unsigned __int16 *, unsigned int); // rdi
  int v20; // edi
  int v21; // ecx
  unsigned int v22; // r8d
  __int16 v23; // r10
  unsigned int *v24; // r9
  unsigned __int16 *v25; // rdi
  signed __int64 v26; // rdx
  __int64 v27; // rax
  __int64 v28; // rdi
  unsigned int v29; // eax
  unsigned __int16 v30; // dx
  unsigned __int16 v32; // cx
  __int64 v33; // rcx
  unsigned __int16 *v34; // rdi
  unsigned int v35; // [rsp+40h] [rbp-C0h]
  __int16 v36; // [rsp+44h] [rbp-BCh]
  unsigned int *v37; // [rsp+48h] [rbp-B8h]
  int v38; // [rsp+50h] [rbp-B0h]
  unsigned int v39; // [rsp+54h] [rbp-ACh]
  unsigned int v40; // [rsp+58h] [rbp-A8h]
  unsigned int v41; // [rsp+5Ch] [rbp-A4h]
  __int64 v42; // [rsp+60h] [rbp-A0h]
  unsigned __int16 *v43; // [rsp+60h] [rbp-A0h]
  unsigned __int16 *v44; // [rsp+68h] [rbp-98h]
  __int64 v45; // [rsp+70h] [rbp-90h]
  unsigned __int16 *v46; // [rsp+78h] [rbp-88h]
  __int64 v48; // [rsp+90h] [rbp-70h] BYREF
  unsigned __int16 *v49; // [rsp+98h] [rbp-68h]
  struct _GLYPHPOS v50; // [rsp+A0h] [rbp-60h] BYREF
  __int64 *v51; // [rsp+B8h] [rbp-48h]
  struct _KAPC_STATE ApcState; // [rsp+C0h] [rbp-40h] BYREF
  unsigned int v53[72]; // [rsp+F0h] [rbp-10h] BYREF

  v6 = *(_QWORD *)this;
  v7 = a2;
  v8 = 1;
  v9 = a6;
  v10 = a4;
  v49 = a4;
  v12 = 1;
  v48 = *(_QWORD *)(v6 + 80);
  v39 = a3;
  if ( !*(_QWORD *)(v48 + 3144) )
  {
    v13 = a5;
    if ( a5 )
    {
      v33 = a5;
      v34 = a6;
      while ( v33 )
      {
        *v34++ = -1;
        --v33;
      }
    }
    v12 = 0;
    goto LABEL_25;
  }
  v13 = a5;
  v14 = a4;
  v41 = a5;
  v15 = a5;
  v46 = a6;
  if ( a3 < a5 )
    v15 = a3;
  v44 = a4;
  v16 = a5;
  if ( a5 )
  {
    while ( 1 )
    {
      v17 = 70;
      if ( v15 )
      {
        if ( v15 < 0x46 )
          v17 = v15;
        v18 = 0;
      }
      else
      {
        if ( v16 < 0x46 )
          v17 = v16;
        v18 = 2;
      }
      v40 = v18;
      RFONTOBJ::vXlatGlyphArray(this, v14, v17, v53, v18, 0);
      v38 = 0;
      v45 = *(_QWORD *)this;
      v42 = *(_QWORD *)(*(_QWORD *)this + 104LL);
      v19 = *(__int64 (__fastcall **)(__int64, __int64, __int64, unsigned int *, unsigned __int16 *, unsigned int))(v48 + 3144);
      if ( gpepCSRSS )
      {
        if ( (*(_DWORD *)(v48 + 56) & 0x2000) == 0 || v48 == qword_1C032F218 )
        {
          v51 = 0LL;
        }
        else
        {
          v51 = &v48;
          KeStackAttachProcess(gpepCSRSS, &ApcState);
        }
        v20 = v19(v42, v45, 1LL, v53, v46, v17);
        v38 = v20;
        if ( v51 )
          KeUnstackDetachProcess(&ApcState);
        if ( v20 == -1 )
          break;
      }
      v21 = *(_DWORD *)(*(_QWORD *)this + 720LL);
      if ( (v21 & 0x40) != 0 )
      {
        v22 = 0;
        *(_DWORD *)(*(_QWORD *)this + 720LL) = v21 & 0xFFFFFFBF;
        v35 = 0;
        v23 = *(_WORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)this + 112LL) + 32LL) + 116LL);
        v36 = v23;
        if ( v17 )
        {
          v24 = v53;
          v25 = v46;
          v26 = (char *)v44 - (char *)v46;
          v43 = v46;
          v37 = v53;
          while ( 1 )
          {
            if ( *v24 != *(_DWORD *)(*(_QWORD *)this + 456LL) )
              goto LABEL_20;
            v30 = *(unsigned __int16 *)((char *)v25 + v26);
            if ( v30 == v23 )
              goto LABEL_20;
            if ( v40 == 2 )
              goto LABEL_34;
            if ( !(unsigned int)RFONTOBJ::bIsLinkedGlyph(this, v30) )
            {
              v32 = *(unsigned __int16 *)((char *)v25 + (char *)v44 - (char *)v46);
              if ( !*(_DWORD *)(*(_QWORD *)this + 716LL) )
                break;
              if ( v32 < gqlTTSystem )
                break;
              if ( v32 > (unsigned __int16)word_1C0323322 )
                break;
              v25 = v43;
              if ( ((0x80000000 >> ((v32 - gqlTTSystem) % 32)) & *(_DWORD *)(qword_1C0323328
                                                                           + 4LL * ((v32 - gqlTTSystem) / 32))) == 0 )
                break;
            }
            if ( !(unsigned int)RFONTOBJ::bGetGlyphMetrics(this, 1u, &v50, &v44[v35], a2, 0LL) )
              return 0xFFFFFFFFLL;
            v22 = v35;
            v24 = v37;
            *v25 = WORD2(v50.pgdf[1].ppo);
LABEL_20:
            v26 = (char *)v44 - (char *)v46;
            ++v22;
            v23 = v36;
            ++v24;
            ++v25;
            v35 = v22;
            v37 = v24;
            v43 = v25;
            if ( v22 >= v17 )
              goto LABEL_21;
          }
          v24 = v37;
          v22 = v35;
LABEL_34:
          v12 = 0;
          *v25 = -1;
          goto LABEL_20;
        }
      }
LABEL_21:
      v12 &= v38;
      v27 = v17;
      v46 = (unsigned __int16 *)((char *)v46 + v27 * 2);
      v14 = &v44[v27];
      v16 = v41 - v17;
      v44 = v14;
      v41 -= v17;
      if ( v15 )
        v15 -= v17;
      if ( !v16 )
      {
        a3 = v39;
        v9 = a6;
        v10 = v49;
        v7 = a2;
LABEL_25:
        if ( !v12 )
        {
          v28 = 0LL;
          while ( 1 )
          {
            v29 = v13;
            if ( a3 < v13 )
              v29 = a3;
            if ( (unsigned int)v28 >= v29 )
              break;
            if ( v9[v28] == 0xFFFF )
            {
              if ( !(unsigned int)RFONTOBJ::bGetGlyphMetrics(this, 1u, &v50, &v10[v28], v7, 0LL) )
                return 0xFFFFFFFFLL;
              v9 = a6;
              a3 = v39;
              a6[v28] = WORD2(v50.pgdf[1].ppo);
            }
            v10 = v49;
            v28 = (unsigned int)(v28 + 1);
            v7 = a2;
          }
        }
        goto LABEL_38;
      }
    }
    *(_DWORD *)(*(_QWORD *)this + 720LL) &= ~0x40u;
    return 0xFFFFFFFFLL;
  }
  else
  {
LABEL_38:
    if ( v13 == a3 )
    {
      if ( v12 == -1 )
        return (unsigned int)-1;
      return v8;
    }
    else
    {
      return v12;
    }
  }
}
