/*
 * XREFs of ?vUpdateWtoDXform@DC@@QEAAXXZ @ 0x1C002B470
 * Callers:
 *     ?vInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@KH@Z @ 0x1C0045F90 (-vInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@KH@Z.c)
 * Callees:
 *     ?bIsZero@EFLOAT@@QEAAHXZ @ 0x1C00455B0 (-bIsZero@EFLOAT@@QEAAHXZ.c)
 *     ?bIs16@EFLOAT@@QEAAHXZ @ 0x1C00455C8 (-bIs16@EFLOAT@@QEAAHXZ.c)
 *     bFToL @ 0x1C0076E08 (bFToL.c)
 *     ?vMakeIso@DC@@QEAAXXZ @ 0x1C00C30E0 (-vMakeIso@DC@@QEAAXXZ.c)
 */

void __fastcall DC::vUpdateWtoDXform(DC *this)
{
  _DWORD *v2; // rdi
  __int64 v3; // rcx
  int v4; // eax
  __int64 v5; // rax
  int v6; // r11d
  int v7; // ecx
  __int64 v8; // rax
  __int64 v9; // rcx
  int v10; // eax
  __int64 v11; // rcx
  int v12; // eax
  float v13; // xmm0_4
  __int64 v14; // rax
  __int64 v15; // rcx
  __int64 v16; // rcx
  float v17; // xmm0_4
  __int64 v18; // rcx
  float v19; // xmm0_4
  __int64 v20; // rax
  float v21; // xmm1_4
  float v22; // xmm0_4
  __int64 v23; // rcx
  __int64 v24; // r8
  float *v25; // r15
  float *v26; // r11
  float *v27; // rbp
  __int64 v28; // rcx
  __int64 v29; // r8
  _DWORD *v30; // rdx
  EFLOAT *v31; // r11
  float *v32; // rcx
  int v33; // r8d
  int v34; // edx
  __int64 v35; // rcx
  float v36; // xmm1_4
  __int64 v37; // rax
  __int64 v38; // rax
  float v39; // xmm1_4
  __int64 v40; // rcx
  float v41; // xmm0_4
  int v42; // xmm0_4
  __int64 v43; // rax
  int v44; // xmm1_4
  __int64 v45; // rcx
  __int64 v46; // r8

  v2 = (_DWORD *)((char *)this + 336);
  v3 = *((_QWORD *)this + 10);
  v4 = *(_DWORD *)(v3 + 352);
  if ( (v4 & 0xE000) != 0 )
  {
    if ( (v4 & 0x4000) != 0 )
    {
      if ( *(_DWORD *)(v3 + 308) == 7 )
        DC::vMakeIso(this);
      v32 = (float *)*((_QWORD *)this + 10);
      v33 = *((_DWORD *)v32 + 82);
      v34 = *((_DWORD *)v32 + 86);
      if ( v33 == v34 && *((_DWORD *)v32 + 83) == *((_DWORD *)v32 + 87) )
      {
        v42 = ef16;
        *((_DWORD *)v32 + 73) = ef16;
        v43 = *((_QWORD *)this + 10);
        *((_DWORD *)this + 111) = v42;
        v44 = ef16;
        *(_DWORD *)(v43 + 296) = ef16;
        *((_DWORD *)this + 112) = v44;
        v2[8] = 11;
        *(_DWORD *)(*((_QWORD *)this + 10) + 352LL) |= 0x1000u;
      }
      else
      {
        v32[73] = (float)(16 * v34) / (float)v33;
        v35 = *((_QWORD *)this + 10);
        *((float *)this + 111) = (float)(16 * v34) / (float)v33;
        v36 = (float)(16 * *(_DWORD *)(v35 + 348)) / (float)*(int *)(v35 + 332);
        *(float *)(v35 + 296) = v36;
        *((float *)this + 112) = v36;
        v2[8] = 9;
        *(_DWORD *)(*((_QWORD *)this + 10) + 352LL) &= 0xFFFFE7FF;
      }
      v37 = *((_QWORD *)this + 10);
      if ( *((float *)this + 111) < 0.0 )
        *(_DWORD *)(v37 + 352) |= 0x100u;
      else
        *(_DWORD *)(v37 + 352) &= ~0x100u;
      v38 = *((_QWORD *)this + 10);
      if ( *((float *)this + 112) < 0.0 )
        *(_DWORD *)(v38 + 352) |= 0x200u;
      else
        *(_DWORD *)(v38 + 352) &= ~0x200u;
    }
    v5 = *((_QWORD *)this + 10);
    v6 = 2048;
    if ( !*(_DWORD *)(v5 + 320) && !*(_DWORD *)(v5 + 324) )
    {
      v7 = *(_DWORD *)(v5 + 336);
      if ( v7 || *(_DWORD *)(v5 + 340) )
      {
        v17 = (float)(16 * v7);
        *(float *)(v5 + 300) = v17;
        v18 = *((_QWORD *)this + 10);
        *((float *)this + 113) = v17;
        v19 = (float)(16 * *(_DWORD *)(v18 + 340));
        *(float *)(v18 + 304) = v19;
        v20 = *((_QWORD *)this + 10);
        *((float *)this + 114) = v19;
        v2[6] = 16 * *(_DWORD *)(v20 + 336);
        LODWORD(v18) = *(_DWORD *)(*((_QWORD *)this + 10) + 340LL);
        v2[8] &= ~0x40u;
        v2[7] = 16 * v18;
        *(_DWORD *)(*((_QWORD *)this + 10) + 352LL) &= ~0x800u;
      }
      else
      {
        *(_DWORD *)(v5 + 300) = 0;
        v8 = *((_QWORD *)this + 10);
        *((_DWORD *)this + 113) = 0;
        *(_DWORD *)(v8 + 304) = 0;
        *((_DWORD *)this + 114) = 0;
        v2[8] |= 0x40u;
        *((_QWORD *)v2 + 3) = 0LL;
        v9 = *((_QWORD *)this + 10);
        v10 = *(_DWORD *)(v9 + 352);
        if ( (v10 & 0x1000) != 0 )
          *(_DWORD *)(v9 + 352) = v10 | 0x800;
      }
LABEL_13:
      v3 = *(unsigned int *)(*((_QWORD *)this + 10) + 352LL);
      if ( (v3 & 2) != 0 )
      {
        *v2 = *((_DWORD *)this + 111);
        v2[3] = *((_DWORD *)this + 112);
        *(_QWORD *)(v2 + 1) = 0LL;
        v2[4] = *((_DWORD *)this + 113);
        v2[5] = *((_DWORD *)this + 114);
        if ( (*(_DWORD *)(*((_QWORD *)this + 10) + 352LL) & v6) == 0 )
        {
          v2[8] = (*(_DWORD *)(*((_QWORD *)this + 10) + 352LL) & 0x1000 | 0x4800u) >> 11;
          goto LABEL_16;
        }
LABEL_17:
        v2[8] = 75;
        goto LABEL_16;
      }
      goto LABEL_21;
    }
    *(_DWORD *)(v5 + 352) &= ~0x800u;
    v2[8] &= ~0x40u;
    v11 = *((_QWORD *)this + 10);
    v12 = -*(_DWORD *)(v11 + 320);
    if ( (*(_DWORD *)(v11 + 352) & 0x1000) != 0 )
    {
      *(float *)(v11 + 300) = (float)(-16 * *(_DWORD *)(v11 + 320));
      v15 = *((_QWORD *)this + 10);
      *((float *)this + 113) = (float)(16 * v12);
      v13 = (float)(-16 * *(_DWORD *)(v15 + 324));
      *(float *)(v15 + 304) = v13;
      v14 = *((_QWORD *)this + 10);
      *((float *)this + 114) = v13;
      LODWORD(v15) = *(_DWORD *)(v14 + 336);
      if ( !(_DWORD)v15 && !*(_DWORD *)(v14 + 340) )
      {
        v2[6] = -16 * *(_DWORD *)(v14 + 320);
        v2[7] = -16 * *(_DWORD *)(*((_QWORD *)this + 10) + 324LL);
        goto LABEL_13;
      }
    }
    else
    {
      v39 = (float)v12 * *((float *)this + 111);
      *(float *)(v11 + 300) = v39;
      v40 = *((_QWORD *)this + 10);
      *((float *)this + 113) = v39;
      v41 = (float)-*(_DWORD *)(v40 + 324) * *((float *)this + 112);
      *(float *)(v40 + 304) = v41;
      v14 = *((_QWORD *)this + 10);
      *((float *)this + 114) = v41;
      v15 = *(unsigned int *)(v14 + 336);
      if ( !*(_QWORD *)(v14 + 336) )
        goto LABEL_20;
    }
    v21 = (float)(16 * v15) + *((float *)this + 113);
    *(float *)(v14 + 300) = v21;
    v15 = *((_QWORD *)this + 10);
    *((float *)this + 113) = v21;
    v22 = (float)(16 * *(_DWORD *)(v15 + 340)) + *((float *)this + 114);
    *(float *)(v15 + 304) = v22;
    *((float *)this + 114) = v22;
LABEL_20:
    bFToL(v15, v2 + 6, 6LL);
    bFToL(v23, v2 + 7, v24);
    goto LABEL_13;
  }
  if ( (v4 & 2) != 0 )
  {
    *v2 = *((_DWORD *)this + 111);
    v2[3] = *((_DWORD *)this + 112);
    *(_QWORD *)(v2 + 1) = 0LL;
    v2[4] = *((_DWORD *)this + 113);
    v2[5] = *((_DWORD *)this + 114);
    bFToL(v3, v2 + 6, 6LL);
    bFToL(v45, v2 + 7, v46);
    if ( (*(_DWORD *)(*((_QWORD *)this + 10) + 352LL) & 0x800) == 0 )
    {
      v2[8] = (*(_DWORD *)(*((_QWORD *)this + 10) + 352LL) & 0x1000 | 0x4800u) >> 11;
      goto LABEL_16;
    }
    goto LABEL_17;
  }
LABEL_21:
  v25 = (float *)(v2 + 1);
  v26 = (float *)(v2 + 2);
  v27 = (float *)(v2 + 3);
  if ( (*(_DWORD *)(*((_QWORD *)this + 10) + 352LL) & 0x1000) != 0 )
  {
    *(_OWORD *)v2 = *(_OWORD *)((char *)this + 408);
    *((_OWORD *)v2 + 1) = *(_OWORD *)((char *)this + 424);
    *(float *)v2 = *(float *)v2 * 16.0;
    *v25 = *v25 * 16.0;
    *v26 = *v26 * 16.0;
    *v27 = *v27 * 16.0;
    *((float *)v2 + 4) = *((float *)v2 + 4) * 16.0;
    *((float *)v2 + 5) = *((float *)v2 + 5) * 16.0;
  }
  else
  {
    *(float *)v2 = *((float *)this + 111) * *((float *)this + 102);
    *v26 = *((float *)this + 111) * *((float *)this + 104);
    *v25 = *((float *)this + 112) * *((float *)this + 103);
    *v27 = *((float *)this + 112) * *((float *)this + 105);
    *((float *)v2 + 4) = *((float *)this + 111) * *((float *)this + 106);
    *((float *)v2 + 5) = *((float *)this + 112) * *((float *)this + 107);
  }
  *((float *)v2 + 4) = *((float *)this + 113) + *((float *)v2 + 4);
  bFToL(v3, v2 + 6, 6LL);
  *((float *)v2 + 5) = *((float *)this + 114) + *((float *)v2 + 5);
  bFToL(v28, v2 + 7, v29);
  if ( (unsigned int)EFLOAT::bIsZero((EFLOAT *)(v2 + 1)) && (unsigned int)EFLOAT::bIsZero(v31) )
  {
    if ( (unsigned int)EFLOAT::bIs16((EFLOAT *)v2) && (unsigned int)EFLOAT::bIs16((EFLOAT *)(v2 + 3)) )
      v2[8] = 11;
    else
      v2[8] = 9;
  }
  else
  {
    v2[8] = 8;
  }
  if ( !v2[6] && !*v30 )
    v2[8] |= 0x40u;
LABEL_16:
  *(_DWORD *)(*((_QWORD *)this + 10) + 352LL) &= 0xFFFF1FFF;
  v16 = *((_QWORD *)this + 10);
  *(_OWORD *)(v16 + 184) = *(_OWORD *)v2;
  *(_OWORD *)(v16 + 200) = *((_OWORD *)v2 + 1);
  *(_DWORD *)(v16 + 216) = v2[8];
}
