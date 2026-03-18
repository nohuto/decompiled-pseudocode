/*
 * XREFs of vFillGLYPHDATA @ 0x1C00AAC68
 * Callers:
 *     lGetGlyphBitmap @ 0x1C00AA914 (lGetGlyphBitmap.c)
 *     lQueryTTOutline @ 0x1C00F65D4 (lQueryTTOutline.c)
 *     lGGOBitmap @ 0x1C0246EF8 (lGGOBitmap.c)
 *     vShiftOutlineInfo @ 0x1C0247CF0 (vShiftOutlineInfo.c)
 * Callees:
 *     b_fxA_and_fxAB_are_Ok @ 0x1C0008EBC (b_fxA_and_fxAB_are_Ok.c)
 *     vLTimesVtfl @ 0x1C0009434 (vLTimesVtfl.c)
 *     bGetFastAdvanceWidth @ 0x1C00AB1E8 (bGetFastAdvanceWidth.c)
 *     vGetNotionalGlyphMetrics @ 0x1C00FE814 (vGetNotionalGlyphMetrics.c)
 *     bFToL @ 0x1C0116F84 (bFToL.c)
 *     vGetVertNotionalMetrics @ 0x1C02479F4 (vGetVertNotionalMetrics.c)
 */

__int64 __fastcall vFillGLYPHDATA(int a1, unsigned int a2, __int64 a3, __int64 a4, _QWORD *a5, int *a6, _QWORD *a7)
{
  unsigned int v7; // r11d
  unsigned int v10; // r9d
  int v11; // r13d
  __int64 v12; // rbx
  int v13; // r12d
  int v14; // eax
  int *v15; // rsi
  int v16; // r10d
  int v17; // eax
  int v18; // edx
  int v19; // r11d
  int v20; // ecx
  int v21; // ecx
  int v22; // r8d
  int v23; // eax
  int v24; // r9d
  int v25; // eax
  int v26; // edx
  int v27; // r8d
  int v28; // eax
  int v29; // ecx
  unsigned int *v30; // r15
  int FastAdvanceWidth; // eax
  unsigned __int16 v32; // ax
  unsigned int v33; // ecx
  unsigned int v34; // eax
  unsigned int v35; // eax
  int v36; // eax
  int v37; // ecx
  __int64 result; // rax
  int v39; // ecx
  int v40; // eax
  int v41; // ecx
  int v42; // eax
  int v43; // edx
  unsigned __int16 v44; // r15
  __int64 v45; // rcx
  int v46; // r8d
  int v47; // r11d
  int v48; // ecx
  unsigned int v49; // ecx
  int v50; // eax
  _DWORD *v51; // r15
  int v52; // r11d
  __int64 v53; // rcx
  int v54; // r11d
  __int64 v55; // rcx
  __int64 v56; // r8
  __int64 v57; // rcx
  __int64 v58; // r8
  int v59; // r11d
  int v60; // r11d
  __int64 v61; // rcx
  __int64 v62; // r8
  int v63; // eax
  unsigned int v64; // r14d
  int v65; // eax
  int v66; // r15d
  int v67; // edx
  int v68; // ecx
  int v69; // ecx
  int v70; // r8d
  int v71; // edx
  int v72; // ecx
  int v73; // ecx
  int v74; // ecx
  __int64 v75; // rcx
  int v76; // eax
  int v77; // r11d
  __int64 v78; // rcx
  __int64 v79; // r8
  int v80; // ecx
  int v81; // r11d
  __int64 v82; // r8
  unsigned int v83; // ecx
  unsigned int v84; // eax
  unsigned int v85; // ecx
  int v86; // ecx
  __int16 v87; // [rsp+30h] [rbp-18h] BYREF
  unsigned __int16 v88; // [rsp+34h] [rbp-14h]
  __int16 v89; // [rsp+36h] [rbp-12h]
  int v90; // [rsp+90h] [rbp+48h] BYREF
  unsigned int v91; // [rsp+98h] [rbp+50h]
  int v92; // [rsp+A0h] [rbp+58h] BYREF
  int v93; // [rsp+A8h] [rbp+60h]

  v91 = a2;
  v7 = 0;
  v10 = a2;
  if ( !*(_DWORD *)(a3 + 308) || (v65 = *(_DWORD *)(a3 + 304), v90 = 1, (v65 & 2) == 0) )
    v90 = 0;
  v11 = *(__int16 *)(a4 + 104) - *(__int16 *)(a4 + 100);
  v12 = (__int64)a5;
  v13 = *(__int16 *)(a4 + 102) - *(__int16 *)(a4 + 98);
  v93 = v13;
  *a5 = 0LL;
  *(_DWORD *)(v12 + 8) = a1;
  if ( *(__int16 *)(a4 + 100) > *(_DWORD *)(a3 + 156)
    || *(__int16 *)(a4 + 104) < *(_DWORD *)(a3 + 152)
    || -*(__int16 *)(a4 + 102) > *(_DWORD *)(a3 + 164)
    || (v14 = 0, -*(__int16 *)(a4 + 98) < *(_DWORD *)(a3 + 160)) )
  {
    v14 = 1;
  }
  v15 = a6;
  if ( v11 )
  {
    do
    {
      if ( !v13 || v14 )
        break;
      v16 = *(__int16 *)(a4 + 100);
      v17 = -*(__int16 *)(a4 + 98);
      *(_DWORD *)(v12 + 44) = v17;
      v18 = -*(__int16 *)(a4 + 102);
      *(_DWORD *)(v12 + 36) = v18;
      v19 = v16 + v11;
      if ( !v15 )
        goto LABEL_24;
      v20 = *(_DWORD *)(a3 + 160);
      if ( v18 < v20 )
        v21 = v20 - v18;
      else
        v21 = 0;
      v22 = v17;
      v23 = *(_DWORD *)(a3 + 164);
      if ( v22 > v23 )
        v24 = v22 - v23;
      else
        v24 = 0;
      if ( !v21 && !v24 )
        goto LABEL_85;
      v13 -= v24 + v21;
      *(_DWORD *)(v12 + 44) = v22 - v24;
      v42 = v21 + v18;
      v93 = v13;
      v43 = 10;
      *(_DWORD *)(v12 + 36) = v42;
      if ( *(int *)(a3 + 124) > 10 )
        v43 = *(_DWORD *)(a3 + 124);
      if ( v21 <= v43 && v24 <= v43 )
      {
LABEL_85:
        v25 = *(_DWORD *)(a3 + 152);
        v26 = 0;
        v27 = 0;
        if ( v16 < v25 )
          v27 = v25 - v16;
        v28 = *(_DWORD *)(a3 + 156);
        if ( v19 > v28 )
          v26 = v19 - v28;
        if ( !v27 && !v26 )
          goto LABEL_23;
        v16 += v27;
        v11 -= v26 + v27;
        v19 -= v26;
        v66 = 10;
        if ( *(_DWORD *)(a3 + 168) >> 2 > 0xAu )
          v66 = *(_DWORD *)(a3 + 168) >> 2;
        if ( v27 <= v66 && v26 <= v66 )
        {
LABEL_23:
          *v15 = v21;
          v15[1] = v24;
          v15[2] = v27;
          v15[3] = v26;
          v15[4] = v11;
          v15[5] = v13;
LABEL_24:
          v10 = v91;
          *(_DWORD *)(v12 + 40) = v19;
          v7 = 0;
          *(_DWORD *)(v12 + 32) = v16;
          goto LABEL_25;
        }
      }
      v7 = 0;
      v14 = 1;
    }
    while ( v11 );
    v10 = v91;
  }
  v40 = *(_DWORD *)(a3 + 200);
  *(_DWORD *)(v12 + 32) = v40;
  v41 = *(_DWORD *)(a3 + 204);
  *(_DWORD *)(v12 + 36) = v41;
  *(_DWORD *)(v12 + 40) = v40 + 1;
  *(_DWORD *)(v12 + 44) = v41 + 1;
  if ( v15 )
    *((_QWORD *)v15 + 2) = 0LL;
LABEL_25:
  if ( (*(_DWORD *)(a3 + 116) & 1) != 0 )
  {
    v29 = v90;
    if ( v90 )
    {
      v30 = (unsigned int *)(v12 + 12);
      *(_DWORD *)(v12 + 12) = 16 * (((*(int *)(a4 + 208) >> 15) + 1) >> 1);
LABEL_35:
      v35 = *v30;
      *(_DWORD *)(v12 + 52) = *v30;
      *(_DWORD *)(v12 + 48) = 0;
      if ( *(int *)(a3 + 80) < 0 )
        *v30 = -v35;
      *(_QWORD *)(v12 + 56) = 0LL;
      if ( v29 )
      {
        v67 = *(_DWORD *)(v12 + 40) - *(_DWORD *)(v12 + 32);
        v68 = ((*(int *)(a4 + 212) >> 15) + 1) >> 1;
        if ( *(int *)(a3 + 80) >= 0 )
        {
          *(_DWORD *)(v12 + 32) = v68;
          *(_DWORD *)(v12 + 40) = v68 + v67;
        }
        else
        {
          v68 = -(v67 + v68);
          *(_DWORD *)(v12 + 40) = -v68;
          *(_DWORD *)(v12 + 32) = -v68 - v67;
        }
        v69 = 16 * v68;
        *(_DWORD *)(v12 + 20) = v69 + 16 * v67;
      }
      else
      {
        v36 = 16 * *(_DWORD *)(v12 + 32);
        v37 = 16 * *(_DWORD *)(v12 + 40);
        *(_DWORD *)(v12 + 16) = v36;
        *(_DWORD *)(v12 + 20) = v37;
        if ( *(int *)(a3 + 80) >= 0 )
        {
LABEL_39:
          result = (unsigned int)(-16 * *(_DWORD *)(v12 + 36));
          v39 = -16 * *(_DWORD *)(v12 + 44);
          *(_DWORD *)(v12 + 24) = result;
          *(_DWORD *)(v12 + 28) = v39;
          if ( *(int *)(a3 + 96) >= 0 )
            goto LABEL_40;
          *(_DWORD *)(v12 + 24) = -v39;
          goto LABEL_98;
        }
        v69 = -v37;
        *(_DWORD *)(v12 + 20) = -v36;
      }
      *(_DWORD *)(v12 + 16) = v69;
      goto LABEL_39;
    }
    v30 = (unsigned int *)(v12 + 12);
    FastAdvanceWidth = bGetFastAdvanceWidth(a3, v10, v12 + 12);
    v7 = 0;
    if ( FastAdvanceWidth )
    {
      if ( (*(_DWORD *)(a3 + 40) & 0x2000) != 0 )
        v32 = 16;
      else
        v32 = 0;
      v33 = *v30;
      if ( !*v30 )
        goto LABEL_34;
      if ( *(int *)(a3 + 80) < 0 )
      {
        *v30 = v33 - v32;
        goto LABEL_34;
      }
      v34 = v33 + v32;
    }
    else
    {
      v34 = (((*(int *)(a4 + 72) >> 12) & 0xFFFFFFF8) + 8) & 0xFFFFFFF0;
    }
    *v30 = v34;
LABEL_34:
    v29 = v90;
    goto LABEL_35;
  }
  if ( (*(_DWORD *)(a3 + 40) & 0x2000) != 0 )
    v44 = 16;
  else
    v44 = 0;
  vGetNotionalGlyphMetrics(a3, v10, &v87);
  LODWORD(a5) = 0;
  bFToL(v45, &a5, 0LL);
  v48 = (int)a5;
  *(_DWORD *)(v12 + 12) = (_DWORD)a5;
  if ( (*(_DWORD *)(a3 + 116) & 2) != 0 )
  {
    v7 = 0;
    if ( v90 )
    {
      v70 = *(_DWORD *)(v12 + 44) - *(_DWORD *)(v12 + 36);
      v71 = ((*(int *)(a4 + 204) >> 15) + 1) >> 1;
      v72 = ((*(int *)(a4 + 216) >> 15) + 1) >> 1;
      if ( *(int *)(a3 + 84) >= 0 )
      {
        v74 = v70 - v72;
        *(_DWORD *)(v12 + 44) = v74;
        v73 = v74 - v70;
        v71 = -v71;
      }
      else
      {
        v73 = -v72;
        *(_DWORD *)(v12 + 44) = v70 + v73;
      }
      *(_DWORD *)(v12 + 12) = 16 * v71;
      *(_DWORD *)(v12 + 36) = v73;
      *(_QWORD *)(v12 + 48) = 0LL;
      *(_DWORD *)(v12 + 56) = 0;
    }
    else
    {
      *(_QWORD *)(v12 + 48) = 0LL;
      *(_DWORD *)(v12 + 56) = 0;
      v49 = ((v48 & 0xFFFFFFF8) + 8) & 0xFFFFFFF0;
      *(_DWORD *)(v12 + 12) = v49;
      if ( v49 )
        *(_DWORD *)(v12 + 12) = v49 + v44;
    }
    if ( *(float *)(a3 + 220) < 0.0 )
    {
      *(_DWORD *)(v12 + 16) = -16 * *(_DWORD *)(v12 + 44);
      *(_DWORD *)(v12 + 20) = -16 * *(_DWORD *)(v12 + 36);
      v50 = -*(_DWORD *)(v12 + 12);
    }
    else
    {
      *(_DWORD *)(v12 + 16) = 16 * *(_DWORD *)(v12 + 36);
      *(_DWORD *)(v12 + 20) = 16 * *(_DWORD *)(v12 + 44);
      v50 = *(_DWORD *)(v12 + 12);
    }
    *(_DWORD *)(v12 + 60) = v50;
    if ( *(float *)(a3 + 256) >= 0.0 )
    {
      *(_DWORD *)(v12 + 24) = 16 * *(_DWORD *)(v12 + 40);
      result = (unsigned int)(16 * *(_DWORD *)(v12 + 32));
LABEL_66:
      *(_DWORD *)(v12 + 28) = result;
      goto LABEL_40;
    }
    *(_DWORD *)(v12 + 24) = -16 * *(_DWORD *)(v12 + 32);
    LODWORD(result) = 16 * *(_DWORD *)(v12 + 40);
LABEL_98:
    result = (unsigned int)-(int)result;
    goto LABEL_66;
  }
  if ( v90 == v46 )
  {
    v51 = (_DWORD *)(v12 + 48);
    vLTimesVtfl(v47, (float *)(a3 + 208), v12 + 48);
    v52 = ((*(int *)(a4 + 80) >> 15) + 1) >> 1;
    HIDWORD(a5) = -(((*(int *)(a4 + 84) >> 15) + 1) >> 1);
    LODWORD(a5) = v52;
    v90 = 0;
    bFToL(v53, &v90, 0LL);
    *(_DWORD *)(v12 + 16) = v90;
    v90 = v54;
    bFToL(v55, &v90, v56);
  }
  else
  {
    vGetVertNotionalMetrics(a3, v91, v88, (unsigned int)&v90, (__int64)&v92);
    v51 = (_DWORD *)(v12 + 48);
    vLTimesVtfl(v90, (float *)(a3 + 208), v12 + 48);
    LODWORD(a5) = 0;
    bFToL(v75, &a5, 0LL);
    *(_DWORD *)(v12 + 12) = (_DWORD)a5;
    v76 = (*(int *)(a4 + 80) >> 15) + 1;
    v90 = v77;
    LODWORD(a5) = v76 >> 1;
    HIDWORD(a5) = -(((*(int *)(a4 + 84) >> 15) + 1) >> 1);
    bFToL(v78, &v90, v79);
    v80 = v89;
    *(_DWORD *)(v12 + 16) = v90;
    v90 = v81;
    bFToL((unsigned int)(v92 + v80 - (__int16)v88), &v90, v82);
  }
  *(_DWORD *)(v12 + 20) = v90;
  v90 = v59;
  bFToL(v57, &v90, v58);
  *(_DWORD *)(v12 + 24) = -v90;
  v90 = v60;
  bFToL(v61, &v90, v62);
  *(_DWORD *)(v12 + 28) = -v90;
  if ( (*(_DWORD *)(a3 + 40) & 0x2000) != 0 )
  {
    if ( *(_DWORD *)(v12 + 52) != v7 || *(_DWORD *)(v12 + 60) != v7 )
    {
      v83 = v7;
      *v51 += *(_DWORD *)(a3 + 232);
      LOBYTE(v83) = *v51 < *(_DWORD *)(a3 + 232);
      v84 = v83 + *(_DWORD *)(a3 + 236);
      v85 = v7;
      v51[1] += v84;
      v51[2] += *(_DWORD *)(a3 + 240);
      LOBYTE(v85) = v51[2] < *(_DWORD *)(a3 + 240);
      v51[3] += v85 + *(_DWORD *)(a3 + 244);
      *(_DWORD *)(v12 + 12) += 16;
    }
    *(_DWORD *)(v12 + 20) += 16 * *(unsigned __int16 *)(a3 + 400);
  }
  v63 = *(_DWORD *)(v12 + 20);
  *(_DWORD *)(v12 + 16) &= 0xFFFFFFF0;
  *(_DWORD *)(v12 + 28) &= 0xFFFFFFF0;
  *(_DWORD *)(v12 + 20) = (v63 + 15) & 0xFFFFFFF0;
  result = (*(_DWORD *)(v12 + 24) + 15) & 0xFFFFFFF0;
  *(_DWORD *)(v12 + 24) = result;
  if ( v15 && v15[4] != v7 && v15[5] != v7 )
  {
    v64 = v7;
    while ( 1 )
    {
      result = b_fxA_and_fxAB_are_Ok(a3, v12, (int *)&a5, v15[4], v15[5]);
      v7 = 0;
      if ( (_DWORD)result )
        break;
      result = v64++;
      if ( (int)result >= 2000 )
        break;
      *(_DWORD *)(v12 + 16) -= 16;
      *(_DWORD *)(v12 + 20) += 16;
      v86 = *(_DWORD *)(v12 + 24) + 16;
      if ( v86 < 16 * *(_DWORD *)(a3 + 144) )
        *(_DWORD *)(v12 + 24) = v86;
      if ( *(_DWORD *)(v12 + 28) - 16 > -16 * *(_DWORD *)(a3 + 148) )
        *(_DWORD *)(v12 + 24) -= 16;
    }
  }
  if ( a7 )
  {
    result = (__int64)a5;
    *a7 = a5;
  }
LABEL_40:
  if ( !v11 || v93 == v7 || v15 && (v15[4] == v7 || v15[5] == v7) )
  {
    result = 1LL;
    *(_DWORD *)(v12 + 16) = v7;
    *(_DWORD *)(v12 + 40) = 1;
    *(_DWORD *)(v12 + 44) = 1;
    *(_QWORD *)(v12 + 20) = 16LL;
    *(_QWORD *)(v12 + 28) = 16LL;
    *(_DWORD *)(v12 + 36) = v7;
  }
  return result;
}
