/*
 * XREFs of ?vUpdateWtoDXform@DC@@QEAAXXZ @ 0x1C002C280
 * Callers:
 *     ?vInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@KH@Z @ 0x1C00158B0 (-vInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@KH@Z.c)
 * Callees:
 *     ?bIsZero@EFLOAT@@QEAAHXZ @ 0x1C0014FDC (-bIsZero@EFLOAT@@QEAAHXZ.c)
 *     ?bIs16@EFLOAT@@QEAAHXZ @ 0x1C0015080 (-bIs16@EFLOAT@@QEAAHXZ.c)
 *     bFToL @ 0x1C0071CFC (bFToL.c)
 *     ?vMakeIso@DC@@QEAAXXZ @ 0x1C00B7BC8 (-vMakeIso@DC@@QEAAXXZ.c)
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
  float v9; // xmm0_4
  __int64 v10; // rax
  __int64 v11; // rcx
  __int64 v12; // rcx
  int v13; // ecx
  __int64 v14; // rax
  int v15; // eax
  float v16; // xmm0_4
  __int64 v17; // rcx
  float v18; // xmm0_4
  __int64 v19; // rax
  float v20; // xmm1_4
  float v21; // xmm0_4
  __int64 v22; // rcx
  __int64 v23; // r8
  float *v24; // r15
  float *v25; // rbp
  float *v26; // r11
  __int64 v27; // rcx
  __int64 v28; // r8
  _DWORD *v29; // rdx
  EFLOAT *v30; // r11
  float *v31; // rcx
  int v32; // r8d
  int v33; // edx
  __int64 v34; // rcx
  float v35; // xmm1_4
  __int64 v36; // rax
  __int64 v37; // rax
  float v38; // xmm1_4
  __int64 v39; // rcx
  float v40; // xmm0_4
  int v41; // xmm0_4
  __int64 v42; // rax
  int v43; // xmm1_4
  __int64 v44; // rcx
  __int64 v45; // r8

  v2 = (_DWORD *)((char *)this + 336);
  v3 = *((_QWORD *)this + 10);
  v4 = *(_DWORD *)(v3 + 352);
  if ( (v4 & 0xE000) != 0 )
  {
    if ( (v4 & 0x4000) != 0 )
    {
      if ( *(_DWORD *)(v3 + 308) == 7 )
        DC::vMakeIso(this);
      v31 = (float *)*((_QWORD *)this + 10);
      v32 = *((_DWORD *)v31 + 82);
      v33 = *((_DWORD *)v31 + 86);
      if ( v32 == v33 && *((_DWORD *)v31 + 83) == *((_DWORD *)v31 + 87) )
      {
        v41 = ef16;
        *((_DWORD *)v31 + 73) = ef16;
        v42 = *((_QWORD *)this + 10);
        *((_DWORD *)this + 111) = v41;
        v43 = ef16;
        *(_DWORD *)(v42 + 296) = ef16;
        *((_DWORD *)this + 112) = v43;
        v2[8] = 11;
        *(_DWORD *)(*((_QWORD *)this + 10) + 352LL) |= 0x1000u;
      }
      else
      {
        v31[73] = (float)(16 * v33) / (float)v32;
        v34 = *((_QWORD *)this + 10);
        *((float *)this + 111) = (float)(16 * v33) / (float)v32;
        v35 = (float)(16 * *(_DWORD *)(v34 + 348)) / (float)*(int *)(v34 + 332);
        *(float *)(v34 + 296) = v35;
        *((float *)this + 112) = v35;
        v2[8] = 9;
        *(_DWORD *)(*((_QWORD *)this + 10) + 352LL) &= 0xFFFFE7FF;
      }
      v36 = *((_QWORD *)this + 10);
      if ( *((float *)this + 111) < 0.0 )
        *(_DWORD *)(v36 + 352) |= 0x100u;
      else
        *(_DWORD *)(v36 + 352) &= ~0x100u;
      v37 = *((_QWORD *)this + 10);
      if ( *((float *)this + 112) < 0.0 )
        *(_DWORD *)(v37 + 352) |= 0x200u;
      else
        *(_DWORD *)(v37 + 352) &= ~0x200u;
    }
    v5 = *((_QWORD *)this + 10);
    v6 = 2048;
    if ( !*(_DWORD *)(v5 + 320) && !*(_DWORD *)(v5 + 324) )
    {
      v13 = *(_DWORD *)(v5 + 336);
      if ( v13 || *(_DWORD *)(v5 + 340) )
      {
        v16 = (float)(16 * v13);
        *(float *)(v5 + 300) = v16;
        v17 = *((_QWORD *)this + 10);
        *((float *)this + 113) = v16;
        v18 = (float)(16 * *(_DWORD *)(v17 + 340));
        *(float *)(v17 + 304) = v18;
        v19 = *((_QWORD *)this + 10);
        *((float *)this + 114) = v18;
        v2[6] = 16 * *(_DWORD *)(v19 + 336);
        LODWORD(v17) = *(_DWORD *)(*((_QWORD *)this + 10) + 340LL);
        v2[8] &= ~0x40u;
        v3 = (unsigned int)(16 * v17);
        v2[7] = v3;
        *(_DWORD *)(*((_QWORD *)this + 10) + 352LL) &= ~0x800u;
      }
      else
      {
        *(_DWORD *)(v5 + 300) = 0;
        v14 = *((_QWORD *)this + 10);
        *((_DWORD *)this + 113) = 0;
        *(_DWORD *)(v14 + 304) = 0;
        *((_DWORD *)this + 114) = 0;
        v2[8] |= 0x40u;
        *((_QWORD *)v2 + 3) = 0LL;
        v3 = *((_QWORD *)this + 10);
        v15 = *(_DWORD *)(v3 + 352);
        if ( (v15 & 0x1000) != 0 )
          *(_DWORD *)(v3 + 352) = v15 | 0x800;
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
      v11 = *((_QWORD *)this + 10);
      *((float *)this + 113) = (float)(16 * v8);
      v9 = (float)(-16 * *(_DWORD *)(v11 + 324));
      *(float *)(v11 + 304) = v9;
      v10 = *((_QWORD *)this + 10);
      *((float *)this + 114) = v9;
      LODWORD(v11) = *(_DWORD *)(v10 + 336);
      if ( !(_DWORD)v11 && !*(_DWORD *)(v10 + 340) )
      {
        v2[6] = -16 * *(_DWORD *)(v10 + 320);
        v3 = (unsigned int)(-16 * *(_DWORD *)(*((_QWORD *)this + 10) + 324LL));
        v2[7] = v3;
        goto LABEL_8;
      }
    }
    else
    {
      v38 = (float)v8 * *((float *)this + 111);
      *(float *)(v7 + 300) = v38;
      v39 = *((_QWORD *)this + 10);
      *((float *)this + 113) = v38;
      v40 = (float)-*(_DWORD *)(v39 + 324) * *((float *)this + 112);
      *(float *)(v39 + 304) = v40;
      v10 = *((_QWORD *)this + 10);
      *((float *)this + 114) = v40;
      v11 = *(unsigned int *)(v10 + 336);
      if ( !*(_QWORD *)(v10 + 336) )
        goto LABEL_20;
    }
    v20 = (float)(16 * v11) + *((float *)this + 113);
    *(float *)(v10 + 300) = v20;
    v11 = *((_QWORD *)this + 10);
    *((float *)this + 113) = v20;
    v21 = (float)(16 * *(_DWORD *)(v11 + 340)) + *((float *)this + 114);
    *(float *)(v11 + 304) = v21;
    *((float *)this + 114) = v21;
LABEL_20:
    bFToL(v11, v2 + 6, 6LL);
    bFToL(v22, v2 + 7, v23);
    goto LABEL_8;
  }
  if ( (v4 & 2) != 0 )
  {
    *v2 = *((_DWORD *)this + 111);
    v2[3] = *((_DWORD *)this + 112);
    *(_QWORD *)(v2 + 1) = 0LL;
    v2[4] = *((_DWORD *)this + 113);
    v2[5] = *((_DWORD *)this + 114);
    bFToL(v3, v2 + 6, 6LL);
    bFToL(v44, v2 + 7, v45);
    if ( (*(_DWORD *)(*((_QWORD *)this + 10) + 352LL) & 0x800) == 0 )
    {
      v2[8] = (*(_DWORD *)(*((_QWORD *)this + 10) + 352LL) & 0x1000 | 0x4800u) >> 11;
      goto LABEL_11;
    }
    goto LABEL_17;
  }
LABEL_21:
  v24 = (float *)(v2 + 1);
  v25 = (float *)(v2 + 3);
  v26 = (float *)(v2 + 2);
  if ( (v4 & 0x1000) != 0 )
  {
    *(_OWORD *)v2 = *(_OWORD *)((char *)this + 408);
    *((_OWORD *)v2 + 1) = *(_OWORD *)((char *)this + 424);
    *(float *)v2 = *(float *)v2 * 16.0;
    *v24 = *v24 * 16.0;
    *v26 = *v26 * 16.0;
    *v25 = *v25 * 16.0;
    *((float *)v2 + 4) = *((float *)v2 + 4) * 16.0;
    *((float *)v2 + 5) = *((float *)v2 + 5) * 16.0;
  }
  else
  {
    *(float *)v2 = *((float *)this + 111) * *((float *)this + 102);
    *v26 = *((float *)this + 111) * *((float *)this + 104);
    *v24 = *((float *)this + 112) * *((float *)this + 103);
    *v25 = *((float *)this + 112) * *((float *)this + 105);
    *((float *)v2 + 4) = *((float *)this + 111) * *((float *)this + 106);
    *((float *)v2 + 5) = *((float *)this + 112) * *((float *)this + 107);
  }
  *((float *)v2 + 4) = *((float *)this + 113) + *((float *)v2 + 4);
  bFToL(v3, v2 + 6, 6LL);
  *((float *)v2 + 5) = *((float *)this + 114) + *((float *)v2 + 5);
  bFToL(v27, v2 + 7, v28);
  if ( EFLOAT::bIsZero((EFLOAT *)(v2 + 1)) && EFLOAT::bIsZero(v30) )
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
  if ( !v2[6] && !*v29 )
    v2[8] |= 0x40u;
LABEL_11:
  *(_DWORD *)(*((_QWORD *)this + 10) + 352LL) &= 0xFFFF1FFF;
  v12 = *((_QWORD *)this + 10);
  *(_OWORD *)(v12 + 184) = *(_OWORD *)v2;
  *(_OWORD *)(v12 + 200) = *((_OWORD *)v2 + 1);
  *(_DWORD *)(v12 + 216) = v2[8];
}
