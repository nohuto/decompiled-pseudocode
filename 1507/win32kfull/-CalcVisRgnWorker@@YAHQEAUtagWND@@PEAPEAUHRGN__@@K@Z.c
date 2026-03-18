/*
 * XREFs of ?CalcVisRgnWorker@@YAHQEAUtagWND@@PEAPEAUHRGN__@@K@Z @ 0x1C005D8D0
 * Callers:
 *     CalcVisRgn @ 0x1C005D6D0 (CalcVisRgn.c)
 *     GreUpdateSpriteVisRgn @ 0x1C0061170 (GreUpdateSpriteVisRgn.c)
 * Callees:
 *     ?ExcludeWindowRects@@YAHPEAUtagWND@@0PEAUtagRECT@@PEAU_CalcVisRgnData@@@Z @ 0x1C005E158 (-ExcludeWindowRects@@YAHPEAUtagWND@@0PEAUtagRECT@@PEAU_CalcVisRgnData@@@Z.c)
 *     PhysicalToLogicalInPlaceRgn @ 0x1C008FC6C (PhysicalToLogicalInPlaceRgn.c)
 *     GreSubtractRgnRectList @ 0x1C00EB534 (GreSubtractRgnRectList.c)
 *     __security_check_cookie @ 0x1C015BB90 (__security_check_cookie.c)
 *     ?Save@CSmartFloatingSave@@QEAAJXZ @ 0x1C01E4268 (-Save@CSmartFloatingSave@@QEAAJXZ.c)
 */

__int64 __fastcall CalcVisRgnWorker(struct tagWND *const a1, HRGN *a2, int a3)
{
  int v3; // r10d
  struct tagWND *v4; // rsi
  int v5; // r15d
  __int64 EmptyRgn; // r12
  LONG right; // r9d
  LONG v8; // r8d
  bool v9; // cc
  LONG top; // ecx
  LONG bottom; // edx
  struct tagWND *v12; // rdi
  __int64 v13; // rbx
  __int64 v14; // r13
  int v15; // eax
  __int128 v16; // xmm0
  __int64 v17; // rax
  float *v18; // r10
  float v19; // xmm2_4
  float v20; // xmm3_4
  int v21; // edx
  int v22; // ecx
  int v23; // edx
  LONG v24; // r14d
  LONG v25; // r12d
  LONG v26; // r15d
  LONG v27; // r13d
  LONG left; // r8d
  LONG v29; // r9d
  LONG v30; // ecx
  LONG v31; // edx
  CSmartFloatingSave *v32; // rax
  __int64 v33; // r11
  float *v34; // r10
  float v35; // xmm2_4
  float v36; // xmm3_4
  int v37; // edx
  int v38; // ecx
  int v39; // edx
  int v40; // r15d
  int v41; // edi
  int v42; // r12d
  int v43; // r14d
  __int64 v44; // rbx
  int v45; // edi
  _BYTE *v46; // rax
  int v47; // ecx
  struct tagWND *v48; // rdx
  struct tagWND *v49; // rcx
  char v50; // cl
  struct tagWND *v51; // rcx
  unsigned int v52; // ebx
  int v53; // r14d
  _BYTE *v54; // r15
  _BYTE *v55; // rbx
  _OWORD *v56; // r8
  __int64 v57; // r9
  _BYTE *v58; // rcx
  _QWORD *v59; // rdx
  __int64 v60; // rax
  HRGN v61; // rcx
  __int64 v62; // rdx
  __int64 v63; // rcx
  __int64 v64; // rbx
  HRGN *v65; // rbx
  __int64 v66; // r8
  __int64 v67; // rdi
  int v68; // r15d
  int v69; // eax
  __int64 v70; // r14
  int v71; // ebx
  BOOL v72; // esi
  unsigned int v73; // edi
  __int128 v75; // [rsp+28h] [rbp-E0h]
  __int64 v76; // [rsp+28h] [rbp-E0h]
  __int64 v77; // [rsp+30h] [rbp-D8h]
  _BYTE *v78; // [rsp+38h] [rbp-D0h]
  __int64 v79; // [rsp+40h] [rbp-C8h]
  int v80; // [rsp+48h] [rbp-C0h]
  __int64 v82; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v83; // [rsp+60h] [rbp-A8h]
  __int64 v84; // [rsp+68h] [rbp-A0h] BYREF
  __int64 v85; // [rsp+70h] [rbp-98h]
  _BYTE *v86; // [rsp+78h] [rbp-90h]
  _BYTE *v87; // [rsp+80h] [rbp-88h]
  __int64 v88; // [rsp+88h] [rbp-80h]
  __int64 *v89; // [rsp+90h] [rbp-78h]
  struct tagWND *v90; // [rsp+98h] [rbp-70h]
  struct tagRECT v91; // [rsp+A0h] [rbp-68h] BYREF
  _BYTE v92[240]; // [rsp+B8h] [rbp-50h] BYREF
  _BYTE v93[480]; // [rsp+1A8h] [rbp+A0h] BYREF

  v3 = 0;
  v4 = a1;
  v5 = a3;
  LODWORD(v83) = a3;
  EmptyRgn = 0LL;
  v90 = a1;
  v80 = 0;
  v78 = 0LL;
  v84 = 0LL;
  v85 = 0LL;
  v87 = 0LL;
  v79 = 0LL;
  v88 = 0LL;
  if ( (a3 & 1) != 0 )
  {
    v91 = (struct tagRECT)*((_OWORD *)a1 + 7);
  }
  else
  {
    v91 = (struct tagRECT)*((_OWORD *)a1 + 8);
    right = v91.right;
    v8 = _mm_cvtsi128_si32((__m128i)v91);
    if ( v8 <= *((_DWORD *)a1 + 28) )
      v8 = *((_DWORD *)a1 + 28);
    v9 = v91.right < *((_DWORD *)a1 + 30);
    v91.left = v8;
    if ( !v9 )
      right = *((_DWORD *)a1 + 30);
    v91.right = right;
    if ( v8 >= right )
      goto LABEL_13;
    top = v91.top;
    bottom = v91.bottom;
    if ( v91.top <= *((_DWORD *)v4 + 29) )
      top = *((_DWORD *)v4 + 29);
    v9 = v91.bottom < *((_DWORD *)v4 + 31);
    v91.top = top;
    if ( !v9 )
      bottom = *((_DWORD *)v4 + 31);
    v91.bottom = bottom;
    if ( top >= bottom )
    {
LABEL_13:
      *(_QWORD *)&v91.left = 0LL;
      *(_QWORD *)&v91.right = 0LL;
    }
  }
  v12 = v4;
  v13 = *((_QWORD *)v4 + 11);
  v14 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v4 + 3) + 8LL) + 16LL) + 88LL);
  v82 = v14;
  if ( !v13 )
    goto LABEL_126;
  if ( v13 == v14 )
  {
    if ( (*((_WORD *)v4 + 33) & 0x3FFF) != 0x29D )
      goto LABEL_126;
LABEL_67:
    v44 = *((_QWORD *)v4 + 11);
    v45 = 0;
    v87 = v92;
    v46 = v92;
    LODWORD(v85) = 30;
    v78 = v92;
    v47 = v5 & 0x10;
    v86 = v92;
    HIDWORD(v84) = 0;
    v48 = v4;
    if ( v44 != v14 )
    {
      while ( (v5 & 0x4000) == 0 || (*((_BYTE *)v48 + 51) & 0x20) == 0 )
      {
        if ( v47 )
        {
          v49 = *(struct tagWND **)(v44 + 96);
          if ( v49 != v48 && !ExcludeWindowRects(v49, v48, &v91, (struct _CalcVisRgnData *)&v84) )
            goto LABEL_82;
        }
        v50 = *(_BYTE *)(v44 + 55);
        v48 = (struct tagWND *)v44;
        v44 = *(_QWORD *)(v44 + 88);
        v47 = v50 & 4;
        if ( v44 == v14 )
          break;
      }
      EmptyRgn = v88;
      v46 = v86;
      v45 = HIDWORD(v84);
      v79 = v88;
      v78 = v86;
    }
    if ( (v5 & 8) != 0 )
    {
      v51 = (struct tagWND *)*((_QWORD *)v4 + 12);
      if ( v51 )
      {
        if ( !ExcludeWindowRects(v51, 0LL, &v91, (struct _CalcVisRgnData *)&v84) )
        {
LABEL_82:
          EmptyRgn = v88;
          v55 = v86;
          goto LABEL_127;
        }
        EmptyRgn = v88;
        v46 = v86;
        v45 = HIDWORD(v84);
        v79 = v88;
        v78 = v86;
      }
    }
    if ( v45 <= 0 )
    {
      if ( *((char *)v4 + 43) < 0 )
      {
        *(_QWORD *)&v91.left = 0LL;
        *(_QWORD *)&v91.right = 0LL;
      }
      v65 = a2;
      if ( !(unsigned int)SetOrCreateRectRgnIndirectPublic(a2, &v91) )
        goto LABEL_126;
    }
    else
    {
      v52 = 0;
      v53 = 0;
      if ( v45 > 30 )
      {
        v54 = (_BYTE *)Win32AllocPoolWithQuota(16LL * v45, 1769370453LL);
        if ( !v54 )
          goto LABEL_126;
        v46 = v78;
      }
      else
      {
        v54 = v93;
      }
      v56 = v54;
      v57 = (unsigned int)v45;
      v58 = v46;
      v59 = v46;
      do
      {
        v60 = *(_QWORD *)v58;
        if ( *(_QWORD *)(*(_QWORD *)v58 + 200LL) )
        {
          ++v53;
          *v59++ = v60;
        }
        else
        {
          ++v52;
          *v56++ = *(_OWORD *)(v60 + 112);
        }
        v58 += 8;
        --v57;
      }
      while ( v57 );
      if ( !*a2 )
        *a2 = (HRGN)CreateEmptyRgn(v58, v59);
      v61 = *a2;
      if ( v52 )
        GreSubtractRgnRectList(v61, &v91, v54, v52);
      else
        SetRectRgnIndirect(v61, &v91);
      if ( !EmptyRgn )
      {
        EmptyRgn = CreateEmptyRgn(v63, v62);
        v79 = EmptyRgn;
      }
      v64 = 0LL;
      if ( v53 > 0 )
      {
        do
        {
          SetRectRgnIndirect(EmptyRgn, *(_QWORD *)&v78[8 * v64] + 112LL);
          GreCombineRgn(
            EmptyRgn,
            EmptyRgn,
            *(_QWORD *)(*(_QWORD *)&v78[8 * v64] + 200LL),
            1LL,
            v75,
            *((_QWORD *)&v75 + 1));
          if ( (unsigned int)GreCombineRgn(*a2, *a2, EmptyRgn, 4LL, v76, v77) == 1 )
            break;
          ++v64;
        }
        while ( v64 < v53 );
        v4 = v90;
        v14 = v82;
      }
      if ( v54 != v93 )
        Win32FreePool(v54);
      v65 = a2;
    }
    v66 = *((_QWORD *)v4 + 25);
    if ( v66 )
      GreCombineRgn(*v65, *v65, v66, 1LL, v75, *((_QWORD *)&v75 + 1));
    if ( !v80 || (v67 = *((_QWORD *)v4 + 11), v68 = 0, v67 == v14) )
    {
LABEL_123:
      v55 = v78;
      v73 = 1;
      goto LABEL_128;
    }
    while ( 1 )
    {
      if ( !*(_QWORD *)(v67 + 200) )
        goto LABEL_121;
      if ( (*((_BYTE *)v4 + 50) & 8) == 0 || (*((_DWORD *)v4 + 72) & 0x20) != 0 )
      {
        if ( !v68 )
          goto LABEL_118;
      }
      else
      {
        v68 = 1;
      }
      if ( (*(_WORD *)(v67 + 66) & 0x3FFF) == 0x29D )
        goto LABEL_122;
LABEL_118:
      v82 = *(_QWORD *)(v67 + 200);
      v69 = PhysicalToLogicalInPlaceRgn(v4, &v82);
      v70 = v82;
      v71 = v69;
      v72 = GreCombineRgn(*a2, *a2, v82, 1LL, v75, *((_QWORD *)&v75 + 1)) == 1;
      if ( v71 )
        GreDeleteObject(v70);
      if ( v72 )
      {
LABEL_122:
        EmptyRgn = v79;
        goto LABEL_123;
      }
LABEL_121:
      v4 = (struct tagWND *)v67;
      v67 = *(_QWORD *)(v67 + 88);
      if ( v67 == v14 )
        goto LABEL_122;
    }
  }
  while ( 1 )
  {
    v89 = (__int64 *)(v13 + 88);
    if ( *(_QWORD *)(v13 + 88) == v14 && (*(_WORD *)(v13 + 66) & 0x3FFF) != 0x29D )
      goto LABEL_125;
    if ( (v5 & 0x4000) != 0 && (*(_WORD *)(v13 + 66) & 0x3FFF) == 0x29D
      || (v5 & 0x4000) != 0 && ((v15 = *((_DWORD *)v12 + 12), (v15 & 0x80000) != 0) || (v15 & 0x20000000) != 0) )
    {
LABEL_66:
      EmptyRgn = 0LL;
      goto LABEL_67;
    }
    if ( (v5 & 0x8000000) != 0 && (*(_WORD *)(v13 + 66) & 0x3FFF) == 0x29D )
    {
      if ( (unsigned int)IsWindowDesktopComposed(v13) )
        goto LABEL_66;
      v3 = v80;
    }
    v16 = *(_OWORD *)(v13 + 128);
    if ( *(_QWORD *)(v13 + 200) )
      v3 = 1;
    v80 = v3;
    if ( *((_QWORD *)v12 + 34)
      && (unsigned int)IsWindowDesktopComposed(v12)
      && (v17 = Win32AllocPool(8LL, 1919775573LL)) != 0 )
    {
      *(_BYTE *)(v17 + 4) = 1;
      v18 = (float *)*((_QWORD *)v12 + 34);
      v19 = 1.0 / *v18;
      v20 = 1.0 / v18[5];
      v21 = (int)v18[13];
      v22 = -(int)v18[12];
      *(_BYTE *)(v17 + 4) = 0;
      v23 = -v21;
      v24 = (int)(float)((float)(v22 + v16) * v19);
      v25 = (int)(float)((float)(v23 + DWORD1(v16)) * v20);
      v26 = (int)(float)((float)(v22 + DWORD2(v16)) * v19);
      v27 = (int)(float)((float)(v23 + HIDWORD(v16)) * v20);
      Win32FreePool(v17);
    }
    else
    {
      v24 = v16;
      v25 = DWORD1(v16);
      v26 = DWORD2(v16);
      v27 = HIDWORD(v16);
    }
    left = v91.left;
    v29 = v91.right;
    if ( v91.left <= v24 )
      left = v24;
    v91.left = left;
    if ( v91.right >= v26 )
      v29 = v26;
    v91.right = v29;
    if ( left >= v29 )
      break;
    v30 = v91.top;
    v31 = v91.bottom;
    if ( v91.top <= v25 )
      v30 = v25;
    v91.top = v30;
    if ( v91.bottom >= v27 )
      v31 = v27;
    v91.bottom = v31;
    if ( v30 >= v31 )
      break;
    v75 = *(_OWORD *)(v13 + 112);
    if ( !*((_QWORD *)v12 + 34) )
      goto LABEL_54;
    if ( !(unsigned int)IsWindowDesktopComposed(v12)
      || (v32 = (CSmartFloatingSave *)Win32AllocPool(8LL, 1919775573LL)) == 0LL )
    {
      v31 = v91.bottom;
      v29 = v91.right;
      v30 = v91.top;
      left = v91.left;
LABEL_54:
      v40 = v75;
      v41 = DWORD1(v75);
      v42 = DWORD2(v75);
      v43 = HIDWORD(v75);
      goto LABEL_55;
    }
    if ( (int)CSmartFloatingSave::Save(v32) < 0 )
    {
      v43 = HIDWORD(v75);
      v42 = DWORD2(v75);
      v41 = DWORD1(v75);
      v40 = v75;
    }
    else
    {
      v34 = (float *)*((_QWORD *)v12 + 34);
      v35 = 1.0 / *v34;
      v36 = 1.0 / v34[5];
      v37 = (int)v34[13];
      v38 = -(int)v34[12];
      *(_BYTE *)(v33 + 4) = 0;
      v39 = -v37;
      v40 = (int)(float)((float)(v38 + v75) * v35);
      v41 = (int)(float)((float)(v39 + DWORD1(v75)) * v36);
      v42 = (int)(float)((float)(v38 + DWORD2(v75)) * v35);
      v43 = (int)(float)((float)(v39 + HIDWORD(v75)) * v36);
    }
    Win32FreePool(v33);
    v31 = v91.bottom;
    v29 = v91.right;
    v30 = v91.top;
    left = v91.left;
LABEL_55:
    if ( left <= v40 )
      left = v40;
    v91.left = left;
    if ( v29 >= v42 )
      v29 = v42;
    v91.right = v29;
    if ( left >= v29 )
      break;
    if ( v30 <= v41 )
      v30 = v41;
    v91.top = v30;
    if ( v31 >= v43 )
      v31 = v43;
    v91.bottom = v31;
    if ( v30 >= v31 )
      break;
    v14 = v82;
    v12 = (struct tagWND *)v13;
    v5 = v83;
    v3 = v80;
    v13 = *v89;
    if ( *v89 == v82 )
      goto LABEL_66;
  }
  *(_QWORD *)&v91.left = 0LL;
  *(_QWORD *)&v91.right = 0LL;
LABEL_125:
  EmptyRgn = 0LL;
LABEL_126:
  v55 = v78;
LABEL_127:
  SetOrCreateRectRgnIndirectPublic(a2, gZero);
  v73 = 0;
LABEL_128:
  if ( EmptyRgn )
    GreDeleteObject(EmptyRgn);
  if ( (_DWORD)v84 )
    Win32FreePool(v55);
  return v73;
}
