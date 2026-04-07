/*
 * XREFs of ?AppendAtlasNineGrid@CAtlasedImage@@MEAAJAEAUAtlasedRects@@PEAVCBitmapSource@@@Z @ 0x18002B5F0
 * Callers:
 *     ?AppendAtlas@CAtlasButton@@MEAAJAEAUAtlasedRects@@@Z @ 0x18001BD50 (-AppendAtlas@CAtlasButton@@MEAAJAEAUAtlasedRects@@@Z.c)
 *     ?AppendAtlas@CAtlasedImage@@MEAAJAEAUAtlasedRects@@@Z @ 0x18002BCE0 (-AppendAtlas@CAtlasedImage@@MEAAJAEAUAtlasedRects@@@Z.c)
 *     ?Validate@CAtlasedImage@@QEAAJXZ @ 0x18002BE50 (-Validate@CAtlasedImage@@QEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800118D8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x18002B384 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     __security_check_cookie @ 0x18004EBE0 (__security_check_cookie.c)
 */

__int64 __fastcall CAtlasedImage::AppendAtlasNineGrid(
        struct tagRECT *this,
        struct AtlasedRects *a2,
        struct CBitmapSource *a3)
{
  int v3; // r15d
  int v5; // r9d
  int v6; // r14d
  int v8; // ecx
  __int128 v9; // xmm0
  int v10; // r11d
  int v11; // r10d
  int v12; // eax
  int v13; // edx
  int v14; // ebx
  int v15; // eax
  LONG right; // r11d
  int v17; // edx
  LONG left; // ecx
  int v19; // r11d
  int v20; // eax
  int v21; // r14d
  int v22; // r10d
  int v23; // ecx
  int v24; // r8d
  int v25; // eax
  int v26; // edx
  int v27; // ecx
  int v28; // r8d
  int v29; // eax
  unsigned int v30; // ebx
  __int64 v31; // rdx
  int v32; // r15d
  int v33; // r13d
  __int64 v34; // r8
  int v35; // r14d
  int v36; // r12d
  int v37; // r9d
  int v38; // eax
  bool v39; // zf
  bool v40; // zf
  float v41; // xmm3_4
  float v42; // xmm4_4
  float v43; // xmm1_4
  float v44; // xmm2_4
  int v45; // r15d
  char v46; // r14
  float v47; // xmm7_4
  float v48; // xmm0_4
  float v49; // xmm5_4
  float bottom; // xmm6_4
  __int64 v51; // rax
  unsigned int v52; // ecx
  __int64 v53; // rax
  _QWORD *v54; // rcx
  unsigned int v55; // edx
  unsigned int v56; // eax
  LONG *p_top; // r9
  unsigned int v58; // r8d
  int top; // r8d
  int v61; // edx
  struct tagRECT *v62; // rax
  float v63; // xmm8_4
  float v64; // xmm9_4
  float v65; // xmm11_4
  float v66; // xmm10_4
  int v67; // r14d
  int v68; // eax
  int v69; // r14d
  int v70; // eax
  int v71; // r14d
  int v72; // eax
  unsigned int v73; // [rsp+30h] [rbp-D0h]
  __int128 v74; // [rsp+40h] [rbp-C0h] BYREF
  __int128 v75; // [rsp+50h] [rbp-B0h] BYREF
  __int128 v76; // [rsp+60h] [rbp-A0h]
  struct tagRECT rc; // [rsp+70h] [rbp-90h] BYREF
  _DWORD v78[4]; // [rsp+80h] [rbp-80h]
  _DWORD v79[4]; // [rsp+90h] [rbp-70h]
  _DWORD v80[4]; // [rsp+A0h] [rbp-60h]
  _DWORD v81[4]; // [rsp+B0h] [rbp-50h]

  v3 = *((_DWORD *)a3 + 20);
  v5 = *((_DWORD *)a3 + 22) - v3;
  v6 = *((_DWORD *)a3 + 21);
  v73 = 0;
  if ( v5 < 0 )
    v5 = 0;
  v8 = *((_DWORD *)a3 + 23) - v6;
  if ( v8 < 0 )
    v8 = 0;
  v9 = *((_OWORD *)a3 + 2);
  v76 = v9;
  v10 = v9;
  if ( DWORD1(v76) + (int)v76 > v5 )
  {
    v11 = v5 * (int)v76 / (DWORD1(v76) + (int)v76);
    v10 = v11;
  }
  else
  {
    v11 = v5 - DWORD1(v9);
  }
  v12 = DWORD2(v76);
  if ( HIDWORD(v76) + DWORD2(v76) > v8 )
  {
    v12 = v8 * DWORD2(v76) / (HIDWORD(v76) + DWORD2(v76));
    v13 = v12;
  }
  else
  {
    v13 = v8 - HIDWORD(v76);
  }
  v14 = this[1].left - *((_DWORD *)a3 + 12);
  v79[1] = v6 + v12;
  v15 = v8 + v6;
  v78[1] = v3 + v10;
  right = this[1].right;
  v17 = v6 + v13;
  left = this[4].left;
  v79[3] = v15;
  v78[3] = v5 + v3;
  v19 = *((_DWORD *)a3 + 12) + *((_DWORD *)a3 + 13) + right;
  v79[0] = v6;
  v20 = *((_DWORD *)a3 + 14) + *((_DWORD *)a3 + 15);
  v21 = this[1].top - *((_DWORD *)a3 + 14);
  v78[2] = v3 + v11;
  v22 = v20 + this[1].bottom;
  v78[0] = v3;
  v79[2] = v17;
  if ( (left & 1) != 0 )
  {
    v14 -= *((_DWORD *)a3 + 8);
    v19 += *((_DWORD *)a3 + 8);
  }
  if ( (left & 2) != 0 )
    v19 += *((_DWORD *)a3 + 9);
  if ( (left & 4) != 0 )
  {
    v21 -= *((_DWORD *)a3 + 10);
    v22 += *((_DWORD *)a3 + 10);
  }
  if ( (left & 8) != 0 )
    v22 += *((_DWORD *)a3 + 11);
  v23 = v9;
  v76 = v9;
  if ( (int)v9 + DWORD1(v9) > v19 )
  {
    v24 = v19 * (int)v9 / ((int)v9 + DWORD1(v9));
    v23 = v24;
  }
  else
  {
    v24 = v19 - DWORD1(v9);
  }
  v25 = DWORD2(v76);
  if ( DWORD2(v76) + HIDWORD(v76) > v22 )
  {
    v25 = v22 * DWORD2(v76) / (DWORD2(v76) + HIDWORD(v76));
    v26 = v25;
  }
  else
  {
    v26 = v22 - HIDWORD(v76);
  }
  v27 = v14 + v23;
  v28 = v14 + v24;
  v81[1] = v21 + v25;
  v81[3] = v22 + v21;
  v29 = v19 + v14;
  v80[0] = v14;
  v30 = 0;
  v80[3] = v29;
  v81[0] = v21;
  v80[1] = v27;
  v81[2] = v21 + v26;
  v80[2] = v28;
  while ( 1 )
  {
    v31 = v30 / 3;
    v32 = v79[v31];
    v33 = v81[v31];
    v34 = v30 % 3;
    v35 = v78[v34];
    v36 = v80[v34];
    v37 = v80[(unsigned int)(v34 + 1)] - v36;
    v38 = v81[(unsigned int)(v31 + 1)] - v33;
    if ( v37 <= 0 || v38 <= 0 )
      goto LABEL_53;
    if ( (_DWORD)v34 )
    {
      if ( (_DWORD)v34 != 2 )
        goto LABEL_28;
      v39 = (this[4].left & 2) == 0;
    }
    else
    {
      v39 = (this[4].left & 1) == 0;
    }
    if ( !v39 )
      goto LABEL_53;
LABEL_28:
    if ( (_DWORD)v31 )
    {
      if ( (_DWORD)v31 != 2 )
        break;
      v40 = (this[4].left & 8) == 0;
    }
    else
    {
      v40 = (this[4].left & 4) == 0;
    }
    if ( v40 )
      break;
LABEL_53:
    if ( ++v30 >= 9 )
      return v73;
  }
  v41 = (float)v32;
  v42 = (float)v35;
  v43 = (float)(v78[(unsigned int)(v34 + 1)] - v35) + (float)v35;
  v44 = (float)(v79[(unsigned int)(v31 + 1)] - v32) + (float)v32;
  if ( (_DWORD)v34 == 1 )
  {
    v42 = v42 + 0.5;
    v43 = v43 + -0.5;
    if ( v42 > v43 )
      v43 = v42;
  }
  if ( (_DWORD)v31 == 1 )
  {
    v41 = v41 + 0.5;
    v44 = v44 + -0.5;
    if ( v41 > v44 )
      v44 = v41;
  }
  *(float *)&v76 = (float)v36;
  v45 = 0;
  *((float *)&v76 + 1) = (float)v33;
  v39 = this[3].left == 0x80000000;
  *(_QWORD *)&v75 = __PAIR64__(LODWORD(v41), LODWORD(v42));
  *((float *)&v76 + 2) = (float)v37 + (float)v36;
  *((_QWORD *)&v75 + 1) = __PAIR64__(LODWORD(v44), LODWORD(v43));
  *((float *)&v76 + 3) = (float)v38 + (float)v33;
  v73 = 0;
  v74 = v76;
  if ( v39 && this[3].top == 0x80000000 && this[3].right == 0x7FFFFFFF && this[3].bottom == 0x7FFFFFFF )
  {
    v46 = 0;
    if ( !*((_QWORD *)a2 + 12) )
    {
      v47 = *((float *)&v74 + 2);
      v48 = *(float *)&v74;
      goto LABEL_40;
    }
  }
  else
  {
    v46 = 1;
  }
  top = this[1].top;
  v61 = this[1].left;
  rc = this[3];
  OffsetRect(&rc, v61, top);
  v62 = (struct tagRECT *)*((_QWORD *)a2 + 12);
  if ( v62 )
  {
    if ( v46 )
      IntersectRect(&rc, &rc, *((const RECT **)a2 + 12));
    else
      rc = *v62;
  }
  v47 = *((float *)&v74 + 2);
  v48 = *(float *)&v74;
  v63 = *((float *)&v74 + 2) - *(float *)&v74;
  if ( (float)(*((float *)&v74 + 2) - *(float *)&v74) <= 0.0 )
  {
LABEL_40:
    v49 = *((float *)&v74 + 1);
    bottom = *((float *)&v74 + 3);
  }
  else
  {
    bottom = *((float *)&v74 + 3);
    v49 = *((float *)&v74 + 1);
    v64 = *((float *)&v74 + 3) - *((float *)&v74 + 1);
    if ( (float)(*((float *)&v74 + 3) - *((float *)&v74 + 1)) > 0.0 )
    {
      v65 = (float)rc.left;
      if ( (float)rc.left <= *(float *)&v74 )
        v65 = *(float *)&v74;
      v66 = (float)rc.top;
      if ( (float)rc.top <= *((float *)&v74 + 1) )
        v66 = *((float *)&v74 + 1);
      if ( *((float *)&v74 + 2) > (float)rc.right )
        v47 = (float)rc.right;
      if ( *((float *)&v74 + 3) > (float)rc.bottom )
        bottom = (float)rc.bottom;
      *((float *)&v74 + 3) = bottom;
      *(float *)&v75 = *(float *)&v75
                     + (float)((float)((float)(v65 - *(float *)&v74) * (float)(*((float *)&v75 + 2) - *(float *)&v75))
                             / v63);
      *((float *)&v75 + 1) = *((float *)&v75 + 1)
                           + (float)((float)((float)(v66 - *((float *)&v74 + 1))
                                           * (float)(*((float *)&v75 + 3) - *((float *)&v75 + 1)))
                                   / v64);
      *((float *)&v75 + 2) = (float)((float)((float)(v47 - v65) * (float)(*((float *)&v75 + 2) - *(float *)&v75)) / v63)
                           + *(float *)&v75;
      v48 = v65;
      *(float *)&v74 = v65;
      *((float *)&v75 + 3) = (float)((float)((float)(*((float *)&v75 + 3) - *((float *)&v75 + 1)) * (float)(bottom - v66))
                                   / v64)
                           + *((float *)&v75 + 1);
      v49 = v66;
      *(_QWORD *)((char *)&v74 + 4) = __PAIR64__(LODWORD(v47), LODWORD(v66));
    }
  }
  if ( (float)(v47 - v48) > 0.0 && (float)(bottom - v49) > 0.0 )
  {
    v51 = *((unsigned int *)a2 + 6);
    v52 = v51 + 1;
    if ( (int)v51 + 1 < (unsigned int)v51 )
    {
      v67 = -2147024362;
      MilInstrumentationCheckHR(0x14u, 0LL, 0LL, -2147024362, 0xB5u);
      v45 = -2147024362;
      v73 = -2147024362;
      goto LABEL_85;
    }
    if ( v52 <= *((_DWORD *)a2 + 5) )
    {
      *(_OWORD *)(*(_QWORD *)a2 + 16 * v51) = v75;
      *((_DWORD *)a2 + 6) = v52;
      goto LABEL_46;
    }
    v68 = DynArrayImpl<0>::AddMultipleAndSet((__int64)a2, 0x10u, 1, &v75);
    v67 = v68;
    if ( v68 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v68, 0xC0u);
    v73 = v67;
    v45 = v67;
    if ( v67 < 0 )
    {
LABEL_85:
      MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v67, 0x45Cu);
      goto LABEL_52;
    }
LABEL_46:
    v53 = *((unsigned int *)a2 + 14);
    v54 = (_QWORD *)((char *)a2 + 32);
    v55 = v53 + 1;
    if ( (int)v53 + 1 < (unsigned int)v53 )
    {
      v69 = -2147024362;
      MilInstrumentationCheckHR(0x14u, 0LL, 0LL, -2147024362, 0xB5u);
      v45 = -2147024362;
      v73 = -2147024362;
      goto LABEL_90;
    }
    if ( v55 <= *((_DWORD *)a2 + 13) )
    {
      *(_OWORD *)(*v54 + 16 * v53) = v74;
      *((_DWORD *)a2 + 14) = v55;
      goto LABEL_49;
    }
    v70 = DynArrayImpl<0>::AddMultipleAndSet((__int64)v54, 0x10u, 1, &v74);
    v69 = v70;
    if ( v70 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v70, 0xC0u);
    v73 = v69;
    v45 = v69;
    if ( v69 < 0 )
    {
LABEL_90:
      MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v69, 0x45Fu);
      goto LABEL_52;
    }
LABEL_49:
    v56 = *((_DWORD *)a2 + 22);
    p_top = &this[4].top;
    v58 = v56 + 1;
    if ( v56 + 1 < v56 )
    {
      v71 = -2147024362;
      MilInstrumentationCheckHR(0x14u, 0LL, 0LL, -2147024362, 0xB5u);
      v45 = -2147024362;
      v73 = -2147024362;
      goto LABEL_95;
    }
    v45 = 0;
    v73 = 0;
    if ( v58 <= *((_DWORD *)a2 + 21) )
    {
      *(_DWORD *)(*((_QWORD *)a2 + 8) + 4LL * v56) = *p_top;
      *((_DWORD *)a2 + 22) = v58;
      goto LABEL_52;
    }
    v72 = DynArrayImpl<0>::AddMultipleAndSet((__int64)a2 + 64, 4u, 1, p_top);
    v71 = v72;
    if ( v72 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v72, 0xC0u);
    v73 = v71;
    v45 = v71;
    if ( v71 < 0 )
LABEL_95:
      MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v71, 0x460u);
  }
LABEL_52:
  if ( v45 >= 0 )
    goto LABEL_53;
  MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v45, 0x414u);
  return (unsigned int)v45;
}
