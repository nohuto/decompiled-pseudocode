/*
 * XREFs of ?vUpdateWtoDXform@DC@@QEAAXXZ @ 0x1C003C580
 * Callers:
 *     ?vInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@KH@Z @ 0x1C0028530 (-vInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@KH@Z.c)
 * Callees:
 *     bFToL @ 0x1C000F9CC (bFToL.c)
 *     ?bIsZero@EFLOAT@@QEAAHXZ @ 0x1C0027BB0 (-bIsZero@EFLOAT@@QEAAHXZ.c)
 *     ?bIs16@EFLOAT@@QEAAHXZ @ 0x1C0027C54 (-bIs16@EFLOAT@@QEAAHXZ.c)
 *     ?vMakeIso@DC@@QEAAXXZ @ 0x1C00B5598 (-vMakeIso@DC@@QEAAXXZ.c)
 */

void __fastcall DC::vUpdateWtoDXform(DC *this)
{
  _DWORD *v2; // rdi
  __int64 v3; // rcx
  int v4; // eax
  __int64 v5; // rax
  int v6; // r11d
  __int64 v7; // rcx
  int v8; // eax
  __int64 v9; // rcx
  float v10; // xmm0_4
  __int64 v11; // rax
  int v12; // ecx
  __int64 v13; // rcx
  int v14; // ecx
  __int64 v15; // rax
  __int64 v16; // rcx
  int v17; // eax
  float v18; // xmm0_4
  __int64 v19; // rcx
  float v20; // xmm0_4
  __int64 v21; // rax
  float v22; // xmm1_4
  __int64 v23; // rcx
  float v24; // xmm0_4
  char v25; // r8
  float *v26; // r15
  float *v27; // rbp
  float *v28; // r11
  float v29; // xmm0_4
  float v30; // xmm1_4
  char v31; // r8
  _DWORD *v32; // rdx
  EFLOAT *v33; // r11
  float *v34; // rcx
  int v35; // r8d
  int v36; // edx
  __int64 v37; // rcx
  float v38; // xmm1_4
  __int64 v39; // rax
  __int64 v40; // rax
  float v41; // xmm1_4
  __int64 v42; // rcx
  float v43; // xmm0_4
  int v44; // xmm0_4
  __int64 v45; // rax
  int v46; // xmm1_4
  char v47; // r8

  v2 = (_DWORD *)((char *)this + 336);
  v3 = *((_QWORD *)this + 10);
  v4 = *(_DWORD *)(v3 + 352);
  if ( (v4 & 0xE000) != 0 )
  {
    if ( (v4 & 0x4000) != 0 )
    {
      if ( *(_DWORD *)(v3 + 308) == 7 )
        DC::vMakeIso(this);
      v34 = (float *)*((_QWORD *)this + 10);
      v35 = *((_DWORD *)v34 + 82);
      v36 = *((_DWORD *)v34 + 86);
      if ( v35 == v36 && *((_DWORD *)v34 + 83) == *((_DWORD *)v34 + 87) )
      {
        v44 = ef16;
        *((_DWORD *)v34 + 73) = ef16;
        v45 = *((_QWORD *)this + 10);
        *((_DWORD *)this + 111) = v44;
        v46 = ef16;
        *(_DWORD *)(v45 + 296) = ef16;
        *((_DWORD *)this + 112) = v46;
        v2[8] = 11;
        *(_DWORD *)(*((_QWORD *)this + 10) + 352LL) |= 0x1000u;
      }
      else
      {
        v34[73] = (float)(16 * v36) / (float)v35;
        v37 = *((_QWORD *)this + 10);
        *((float *)this + 111) = (float)(16 * v36) / (float)v35;
        v38 = (float)(16 * *(_DWORD *)(v37 + 348)) / (float)*(int *)(v37 + 332);
        *(float *)(v37 + 296) = v38;
        *((float *)this + 112) = v38;
        v2[8] = 9;
        *(_DWORD *)(*((_QWORD *)this + 10) + 352LL) &= 0xFFFFE7FF;
      }
      v39 = *((_QWORD *)this + 10);
      if ( *((float *)this + 111) < 0.0 )
        *(_DWORD *)(v39 + 352) |= 0x100u;
      else
        *(_DWORD *)(v39 + 352) &= ~0x100u;
      v40 = *((_QWORD *)this + 10);
      if ( *((float *)this + 112) < 0.0 )
        *(_DWORD *)(v40 + 352) |= 0x200u;
      else
        *(_DWORD *)(v40 + 352) &= ~0x200u;
    }
    v5 = *((_QWORD *)this + 10);
    v6 = 2048;
    if ( !*(_DWORD *)(v5 + 320) && !*(_DWORD *)(v5 + 324) )
    {
      v14 = *(_DWORD *)(v5 + 336);
      if ( v14 || *(_DWORD *)(v5 + 340) )
      {
        v18 = (float)(16 * v14);
        *(float *)(v5 + 300) = v18;
        v19 = *((_QWORD *)this + 10);
        *((float *)this + 113) = v18;
        v20 = (float)(16 * *(_DWORD *)(v19 + 340));
        *(float *)(v19 + 304) = v20;
        v21 = *((_QWORD *)this + 10);
        *((float *)this + 114) = v20;
        v2[6] = 16 * *(_DWORD *)(v21 + 336);
        LODWORD(v19) = *(_DWORD *)(*((_QWORD *)this + 10) + 340LL);
        v2[8] &= ~0x40u;
        v2[7] = 16 * v19;
        *(_DWORD *)(*((_QWORD *)this + 10) + 352LL) &= ~0x800u;
      }
      else
      {
        *(_DWORD *)(v5 + 300) = 0;
        v15 = *((_QWORD *)this + 10);
        *((_DWORD *)this + 113) = 0;
        *(_DWORD *)(v15 + 304) = 0;
        *((_DWORD *)this + 114) = 0;
        v2[8] |= 0x40u;
        *((_QWORD *)v2 + 3) = 0LL;
        v16 = *((_QWORD *)this + 10);
        v17 = *(_DWORD *)(v16 + 352);
        if ( (v17 & 0x1000) != 0 )
          *(_DWORD *)(v16 + 352) = v17 | 0x800;
      }
LABEL_8:
      v4 = *(_DWORD *)(*((_QWORD *)this + 10) + 352LL);
      if ( (v4 & 2) != 0 )
      {
        *v2 = *((_DWORD *)this + 111);
        v2[3] = *((_DWORD *)this + 112);
        *(_QWORD *)(v2 + 1) = 0LL;
        v2[4] = *((_DWORD *)this + 113);
        v2[5] = *((_DWORD *)this + 114);
        if ( (*(_DWORD *)(*((_QWORD *)this + 10) + 352LL) & v6) == 0 )
        {
          v2[8] = (*(_DWORD *)(*((_QWORD *)this + 10) + 352LL) & 0x1000 | 0x4800u) >> 11;
          goto LABEL_11;
        }
LABEL_17:
        v2[8] = 75;
        goto LABEL_11;
      }
      goto LABEL_21;
    }
    *(_DWORD *)(v5 + 352) &= ~0x800u;
    v2[8] &= ~0x40u;
    v7 = *((_QWORD *)this + 10);
    v8 = -*(_DWORD *)(v7 + 320);
    if ( (*(_DWORD *)(v7 + 352) & 0x1000) != 0 )
    {
      *(float *)(v7 + 300) = (float)(-16 * *(_DWORD *)(v7 + 320));
      v9 = *((_QWORD *)this + 10);
      *((float *)this + 113) = (float)(16 * v8);
      v10 = (float)(-16 * *(_DWORD *)(v9 + 324));
      *(float *)(v9 + 304) = v10;
      v11 = *((_QWORD *)this + 10);
      *((float *)this + 114) = v10;
      v12 = *(_DWORD *)(v11 + 336);
      if ( !v12 && !*(_DWORD *)(v11 + 340) )
      {
        v2[6] = -16 * *(_DWORD *)(v11 + 320);
        v2[7] = -16 * *(_DWORD *)(*((_QWORD *)this + 10) + 324LL);
        goto LABEL_8;
      }
    }
    else
    {
      v41 = (float)v8 * *((float *)this + 111);
      *(float *)(v7 + 300) = v41;
      v42 = *((_QWORD *)this + 10);
      *((float *)this + 113) = v41;
      v43 = (float)-*(_DWORD *)(v42 + 324) * *((float *)this + 112);
      *(float *)(v42 + 304) = v43;
      v11 = *((_QWORD *)this + 10);
      *((float *)this + 114) = v43;
      v12 = *(_DWORD *)(v11 + 336);
      if ( !v12 && !*(_DWORD *)(v11 + 340) )
        goto LABEL_20;
    }
    v22 = (float)(16 * v12) + *((float *)this + 113);
    *(float *)(v11 + 300) = v22;
    v23 = *((_QWORD *)this + 10);
    *((float *)this + 113) = v22;
    v24 = (float)(16 * *(_DWORD *)(v23 + 340)) + *((float *)this + 114);
    *(float *)(v23 + 304) = v24;
    *((float *)this + 114) = v24;
LABEL_20:
    bFToL(*((float *)this + 113), v2 + 6, 6);
    bFToL(*((float *)this + 114), v2 + 7, v25);
    goto LABEL_8;
  }
  if ( (v4 & 2) != 0 )
  {
    *v2 = *((_DWORD *)this + 111);
    v2[3] = *((_DWORD *)this + 112);
    *(_QWORD *)(v2 + 1) = 0LL;
    v2[4] = *((_DWORD *)this + 113);
    v2[5] = *((_DWORD *)this + 114);
    bFToL(*((float *)this + 113), v2 + 6, 6);
    bFToL(*((float *)this + 114), v2 + 7, v47);
    if ( (*(_DWORD *)(*((_QWORD *)this + 10) + 352LL) & 0x800) == 0 )
    {
      v2[8] = (*(_DWORD *)(*((_QWORD *)this + 10) + 352LL) & 0x1000 | 0x4800u) >> 11;
      goto LABEL_11;
    }
    goto LABEL_17;
  }
LABEL_21:
  v26 = (float *)(v2 + 1);
  v27 = (float *)(v2 + 3);
  v28 = (float *)(v2 + 2);
  if ( (v4 & 0x1000) != 0 )
  {
    *(_OWORD *)v2 = *(_OWORD *)((char *)this + 408);
    *((_OWORD *)v2 + 1) = *(_OWORD *)((char *)this + 424);
    *(float *)v2 = *(float *)v2 * 16.0;
    *v26 = *v26 * 16.0;
    *v28 = *v28 * 16.0;
    *v27 = *v27 * 16.0;
    *((float *)v2 + 4) = *((float *)v2 + 4) * 16.0;
    *((float *)v2 + 5) = *((float *)v2 + 5) * 16.0;
  }
  else
  {
    *(float *)v2 = *((float *)this + 111) * *((float *)this + 102);
    *v28 = *((float *)this + 111) * *((float *)this + 104);
    *v26 = *((float *)this + 112) * *((float *)this + 103);
    *v27 = *((float *)this + 112) * *((float *)this + 105);
    *((float *)v2 + 4) = *((float *)this + 111) * *((float *)this + 106);
    *((float *)v2 + 5) = *((float *)this + 112) * *((float *)this + 107);
  }
  v29 = *((float *)this + 113) + *((float *)v2 + 4);
  *((float *)v2 + 4) = v29;
  bFToL(v29, v2 + 6, 6);
  v30 = *((float *)this + 114) + *((float *)v2 + 5);
  *((float *)v2 + 5) = v30;
  bFToL(v30, v2 + 7, v31);
  if ( EFLOAT::bIsZero((EFLOAT *)(v2 + 1)) && EFLOAT::bIsZero(v33) )
  {
    if ( EFLOAT::bIs16((EFLOAT *)v2) && EFLOAT::bIs16((EFLOAT *)(v2 + 3)) )
      v2[8] = 11;
    else
      v2[8] = 9;
  }
  else
  {
    v2[8] = 8;
  }
  if ( !v2[6] && !*v32 )
    v2[8] |= 0x40u;
LABEL_11:
  *(_DWORD *)(*((_QWORD *)this + 10) + 352LL) &= 0xFFFF1FFF;
  v13 = *((_QWORD *)this + 10);
  *(_OWORD *)(v13 + 184) = *(_OWORD *)v2;
  *(_OWORD *)(v13 + 200) = *((_OWORD *)v2 + 1);
  *(_DWORD *)(v13 + 216) = v2[8];
}
