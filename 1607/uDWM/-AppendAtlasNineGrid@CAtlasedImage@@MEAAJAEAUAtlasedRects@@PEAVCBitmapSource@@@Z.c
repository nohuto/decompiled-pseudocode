/*
 * XREFs of ?AppendAtlasNineGrid@CAtlasedImage@@MEAAJAEAUAtlasedRects@@PEAVCBitmapSource@@@Z @ 0x18002AF60
 * Callers:
 *     ?AppendAtlas@CAtlasButton@@MEAAJAEAUAtlasedRects@@@Z @ 0x180018B10 (-AppendAtlas@CAtlasButton@@MEAAJAEAUAtlasedRects@@@Z.c)
 *     ?AppendAtlas@CAtlasedImage@@MEAAJAEAUAtlasedRects@@@Z @ 0x18002B640 (-AppendAtlas@CAtlasedImage@@MEAAJAEAUAtlasedRects@@@Z.c)
 *     ?Validate@CAtlasedImage@@QEAAJXZ @ 0x18002B7A0 (-Validate@CAtlasedImage@@QEAAJXZ.c)
 * Callees:
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x18002AD08 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     __security_check_cookie @ 0x18004F240 (__security_check_cookie.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800503F8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
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
  int v15; // edx
  int v16; // eax
  LONG right; // r10d
  LONG left; // ecx
  int v19; // eax
  LONG bottom; // r9d
  int v21; // r10d
  int v22; // r9d
  int v23; // r14d
  int v24; // ecx
  int v25; // r8d
  int v26; // eax
  int v27; // edx
  int v28; // ecx
  int v29; // r8d
  int v30; // eax
  unsigned int v31; // ebx
  __int64 v32; // rdx
  int v33; // r15d
  int v34; // r13d
  __int64 v35; // r8
  int v36; // r14d
  int v37; // r12d
  int v38; // r9d
  int v39; // eax
  bool v40; // zf
  bool v41; // zf
  float v42; // xmm3_4
  float v43; // xmm4_4
  float v44; // xmm1_4
  float v45; // xmm2_4
  int v46; // r15d
  char v47; // r14
  float v48; // xmm9_4
  float v49; // xmm3_4
  float v50; // xmm10_4
  float v51; // xmm8_4
  __int64 v52; // rax
  unsigned int v53; // ecx
  __int64 v54; // rax
  _QWORD *v55; // rcx
  unsigned int v56; // edx
  unsigned int v57; // eax
  LONG *p_top; // r9
  unsigned int v59; // r8d
  int top; // r8d
  int v62; // edx
  struct tagRECT *v63; // rax
  float v64; // xmm11_4
  float v65; // xmm12_4
  float v66; // xmm7_4
  unsigned int v67; // xmm6_4
  float v68; // xmm0_4
  float v69; // xmm1_4
  float v70; // xmm5_4
  int v71; // r14d
  int v72; // eax
  int v73; // r14d
  int v74; // eax
  int v75; // r14d
  int v76; // eax
  unsigned int v77; // [rsp+30h] [rbp-D0h]
  __int128 v78; // [rsp+40h] [rbp-C0h] BYREF
  __int128 v79; // [rsp+50h] [rbp-B0h] BYREF
  __int128 v80; // [rsp+60h] [rbp-A0h]
  struct tagRECT rc; // [rsp+70h] [rbp-90h] BYREF
  _DWORD v82[4]; // [rsp+80h] [rbp-80h]
  _DWORD v83[4]; // [rsp+90h] [rbp-70h]
  _DWORD v84[4]; // [rsp+A0h] [rbp-60h]
  _DWORD v85[4]; // [rsp+B0h] [rbp-50h]

  v3 = *((_DWORD *)a3 + 20);
  v5 = *((_DWORD *)a3 + 22) - v3;
  v6 = *((_DWORD *)a3 + 21);
  v77 = 0;
  if ( v5 < 0 )
    v5 = 0;
  v8 = *((_DWORD *)a3 + 23) - v6;
  if ( v8 < 0 )
    v8 = 0;
  v9 = *((_OWORD *)a3 + 2);
  v80 = v9;
  v10 = v9;
  if ( DWORD1(v80) + (int)v80 > v5 )
  {
    v11 = v5 * (int)v80 / (DWORD1(v80) + (int)v80);
    v10 = v11;
  }
  else
  {
    v11 = v5 - DWORD1(v9);
  }
  v12 = DWORD2(v80);
  if ( HIDWORD(v80) + DWORD2(v80) > v8 )
  {
    v12 = v8 * DWORD2(v80) / (HIDWORD(v80) + DWORD2(v80));
    v13 = v12;
  }
  else
  {
    v13 = v8 - HIDWORD(v80);
  }
  v14 = this[1].left - *((_DWORD *)a3 + 12);
  v83[1] = v6 + v12;
  v15 = v6 + v13;
  v16 = v8 + v6;
  v82[2] = v3 + v11;
  right = this[1].right;
  left = this[4].left;
  v83[3] = v16;
  v19 = v5 + v3;
  bottom = this[1].bottom;
  v82[3] = v19;
  v21 = *((_DWORD *)a3 + 12) + *((_DWORD *)a3 + 13) + right;
  v83[0] = v6;
  v22 = *((_DWORD *)a3 + 14) + *((_DWORD *)a3 + 15) + bottom;
  v23 = this[1].top - *((_DWORD *)a3 + 14);
  v82[0] = v3;
  v82[1] = v3 + v10;
  v83[2] = v15;
  if ( (left & 1) != 0 )
  {
    v14 -= *((_DWORD *)a3 + 8);
    v21 += *((_DWORD *)a3 + 8);
  }
  if ( (left & 2) != 0 )
    v21 += *((_DWORD *)a3 + 9);
  if ( (left & 4) != 0 )
  {
    v23 -= *((_DWORD *)a3 + 10);
    v22 += *((_DWORD *)a3 + 10);
  }
  if ( (left & 8) != 0 )
    v22 += *((_DWORD *)a3 + 11);
  v24 = v9;
  v80 = v9;
  if ( (int)v9 + DWORD1(v9) > v21 )
  {
    v25 = v21 * (int)v9 / ((int)v9 + DWORD1(v9));
    v24 = v25;
  }
  else
  {
    v25 = v21 - DWORD1(v9);
  }
  v26 = DWORD2(v80);
  if ( DWORD2(v80) + HIDWORD(v80) > v22 )
  {
    v26 = v22 * DWORD2(v80) / (DWORD2(v80) + HIDWORD(v80));
    v27 = v26;
  }
  else
  {
    v27 = v22 - HIDWORD(v80);
  }
  v28 = v14 + v24;
  v29 = v14 + v25;
  v85[1] = v23 + v26;
  v85[3] = v22 + v23;
  v30 = v21 + v14;
  v84[0] = v14;
  v31 = 0;
  v84[3] = v30;
  v85[0] = v23;
  v84[1] = v28;
  v85[2] = v23 + v27;
  v84[2] = v29;
  while ( 1 )
  {
    v32 = v31 / 3;
    v33 = v83[v32];
    v34 = v85[v32];
    v35 = v31 % 3;
    v36 = v82[v35];
    v37 = v84[v35];
    v38 = v84[(unsigned int)(v35 + 1)] - v37;
    v39 = v85[(unsigned int)(v32 + 1)] - v34;
    if ( v38 <= 0 || v39 <= 0 )
      goto LABEL_53;
    if ( (_DWORD)v35 )
    {
      if ( (_DWORD)v35 != 2 )
        goto LABEL_28;
      v40 = (this[4].left & 2) == 0;
    }
    else
    {
      v40 = (this[4].left & 1) == 0;
    }
    if ( !v40 )
      goto LABEL_53;
LABEL_28:
    if ( (_DWORD)v32 )
    {
      if ( (_DWORD)v32 != 2 )
        break;
      v41 = (this[4].left & 8) == 0;
    }
    else
    {
      v41 = (this[4].left & 4) == 0;
    }
    if ( v41 )
      break;
LABEL_53:
    if ( ++v31 >= 9 )
      return v77;
  }
  v42 = (float)v33;
  v43 = (float)v36;
  v44 = (float)(v82[(unsigned int)(v35 + 1)] - v36) + (float)v36;
  v45 = (float)(v83[(unsigned int)(v32 + 1)] - v33) + (float)v33;
  if ( (_DWORD)v35 == 1 )
  {
    v43 = v43 + 0.5;
    v44 = v44 + -0.5;
    if ( v43 > v44 )
      v44 = v43;
  }
  if ( (_DWORD)v32 == 1 )
  {
    v42 = v42 + 0.5;
    v45 = v45 + -0.5;
    if ( v42 > v45 )
      v45 = v42;
  }
  *(float *)&v80 = (float)v37;
  v46 = 0;
  *((float *)&v80 + 1) = (float)v34;
  v40 = this[3].left == 0x80000000;
  *(_QWORD *)&v79 = __PAIR64__(LODWORD(v42), LODWORD(v43));
  *((float *)&v80 + 2) = (float)v38 + (float)v37;
  *((_QWORD *)&v79 + 1) = __PAIR64__(LODWORD(v45), LODWORD(v44));
  *((float *)&v80 + 3) = (float)v39 + (float)v34;
  v77 = 0;
  v78 = v80;
  if ( v40 && this[3].top == 0x80000000 && this[3].right == 0x7FFFFFFF && this[3].bottom == 0x7FFFFFFF )
  {
    v47 = 0;
    if ( !*((_QWORD *)a2 + 12) )
    {
      v48 = *((float *)&v78 + 2);
      v49 = *(float *)&v78;
      goto LABEL_40;
    }
  }
  else
  {
    v47 = 1;
  }
  top = this[1].top;
  v62 = this[1].left;
  rc = this[3];
  OffsetRect(&rc, v62, top);
  v63 = (struct tagRECT *)*((_QWORD *)a2 + 12);
  if ( v63 )
  {
    if ( v47 )
      IntersectRect(&rc, &rc, *((const RECT **)a2 + 12));
    else
      rc = *v63;
  }
  v48 = *((float *)&v78 + 2);
  v49 = *(float *)&v78;
  v64 = *((float *)&v78 + 2) - *(float *)&v78;
  if ( (float)(*((float *)&v78 + 2) - *(float *)&v78) <= 0.0 )
  {
LABEL_40:
    v50 = *((float *)&v78 + 1);
    v51 = *((float *)&v78 + 3);
  }
  else
  {
    v51 = *((float *)&v78 + 3);
    v50 = *((float *)&v78 + 1);
    v65 = *((float *)&v78 + 3) - *((float *)&v78 + 1);
    if ( (float)(*((float *)&v78 + 3) - *((float *)&v78 + 1)) > 0.0 )
    {
      v66 = fmaxf((float)rc.left, *(float *)&v78);
      *(float *)&v67 = fmaxf((float)rc.top, *((float *)&v78 + 1));
      v48 = fminf((float)rc.right, *((float *)&v78 + 2));
      v51 = fminf((float)rc.bottom, *((float *)&v78 + 3));
      *((float *)&v78 + 3) = v51;
      v68 = *(float *)&v67 - *((float *)&v78 + 1);
      v50 = *(float *)&v67;
      *(_QWORD *)((char *)&v78 + 4) = __PAIR64__(LODWORD(v48), v67);
      *(float *)&v79 = *(float *)&v79
                     + (float)((float)((float)(*((float *)&v79 + 2) - *(float *)&v79) * (float)(v66 - *(float *)&v78))
                             / v64);
      v69 = (float)((float)(*((float *)&v79 + 3) - *((float *)&v79 + 1)) * v68) / v65;
      v70 = *((float *)&v79 + 3) - (float)(*((float *)&v79 + 1) + v69);
      *((float *)&v79 + 1) = *((float *)&v79 + 1) + v69;
      *((float *)&v79 + 2) = (float)((float)((float)(v48 - v66) * (float)(*((float *)&v79 + 2) - *(float *)&v79)) / v64)
                           + *(float *)&v79;
      v49 = v66;
      *(float *)&v78 = v66;
      *((float *)&v79 + 3) = (float)((float)(v70 * (float)(v51 - *(float *)&v67)) / v65) + *((float *)&v79 + 1);
    }
  }
  if ( (float)(v48 - v49) > 0.0 && (float)(v51 - v50) > 0.0 )
  {
    v52 = *((unsigned int *)a2 + 6);
    v53 = v52 + 1;
    if ( (int)v52 + 1 < (unsigned int)v52 )
    {
      v71 = -2147024362;
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0xB5u);
      v46 = -2147024362;
      v77 = -2147024362;
      goto LABEL_77;
    }
    if ( v53 <= *((_DWORD *)a2 + 5) )
    {
      *(_OWORD *)(*(_QWORD *)a2 + 16 * v52) = v79;
      *((_DWORD *)a2 + 6) = v53;
      goto LABEL_46;
    }
    v72 = DynArrayImpl<0>::AddMultipleAndSet((__int64)a2, 0x10u, 1, &v79);
    v71 = v72;
    if ( v72 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v72, 0xC0u);
    v77 = v71;
    v46 = v71;
    if ( v71 < 0 )
    {
LABEL_77:
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v71, 0x43Du);
      goto LABEL_52;
    }
LABEL_46:
    v54 = *((unsigned int *)a2 + 14);
    v55 = (_QWORD *)((char *)a2 + 32);
    v56 = v54 + 1;
    if ( (int)v54 + 1 < (unsigned int)v54 )
    {
      v73 = -2147024362;
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0xB5u);
      v46 = -2147024362;
      v77 = -2147024362;
      goto LABEL_82;
    }
    if ( v56 <= *((_DWORD *)a2 + 13) )
    {
      *(_OWORD *)(*v55 + 16 * v54) = v78;
      *((_DWORD *)a2 + 14) = v56;
      goto LABEL_49;
    }
    v74 = DynArrayImpl<0>::AddMultipleAndSet((__int64)v55, 0x10u, 1, &v78);
    v73 = v74;
    if ( v74 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v74, 0xC0u);
    v77 = v73;
    v46 = v73;
    if ( v73 < 0 )
    {
LABEL_82:
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v73, 0x440u);
      goto LABEL_52;
    }
LABEL_49:
    v57 = *((_DWORD *)a2 + 22);
    p_top = &this[4].top;
    v59 = v57 + 1;
    if ( v57 + 1 < v57 )
    {
      v75 = -2147024362;
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0xB5u);
      v46 = -2147024362;
      v77 = -2147024362;
      goto LABEL_87;
    }
    v46 = 0;
    v77 = 0;
    if ( v59 <= *((_DWORD *)a2 + 21) )
    {
      *(_DWORD *)(*((_QWORD *)a2 + 8) + 4LL * v57) = *p_top;
      *((_DWORD *)a2 + 22) = v59;
      goto LABEL_52;
    }
    v76 = DynArrayImpl<0>::AddMultipleAndSet((__int64)a2 + 64, 4u, 1, p_top);
    v75 = v76;
    if ( v76 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v76, 0xC0u);
    v77 = v75;
    v46 = v75;
    if ( v75 < 0 )
LABEL_87:
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v75, 0x441u);
  }
LABEL_52:
  if ( v46 >= 0 )
    goto LABEL_53;
  MilInstrumentationCheckHR(0x14u, 0LL, 0, v46, 0x3F5u);
  return (unsigned int)v46;
}
