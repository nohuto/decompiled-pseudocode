/*
 * XREFs of ?CalcVisRgnWorker@@YAHQEAUtagWND@@PEAPEAUHRGN__@@K@Z @ 0x1C00D5C54
 * Callers:
 *     GreUpdateSpriteVisRgn @ 0x1C0075160 (GreUpdateSpriteVisRgn.c)
 *     CalcVisRgn @ 0x1C00D5A60 (CalcVisRgn.c)
 * Callees:
 *     PhysicalToLogicalInPlaceRgn @ 0x1C005B290 (PhysicalToLogicalInPlaceRgn.c)
 *     ?ExcludeWindowRects@@YAHPEAUtagWND@@0PEAUtagRECT@@PEAU_CalcVisRgnData@@@Z @ 0x1C00D644C (-ExcludeWindowRects@@YAHPEAUtagWND@@0PEAUtagRECT@@PEAU_CalcVisRgnData@@@Z.c)
 *     GreSubtractRgnRectList @ 0x1C00D6598 (GreSubtractRgnRectList.c)
 *     __security_check_cookie @ 0x1C0158CD0 (__security_check_cookie.c)
 *     memset @ 0x1C015A380 (memset.c)
 *     ?Save@CSmartFloatingSave@@QEAAJXZ @ 0x1C01DAFDC (-Save@CSmartFloatingSave@@QEAAJXZ.c)
 */

__int64 __fastcall CalcVisRgnWorker(struct tagWND *const a1, HRGN *a2, int a3)
{
  HRGN *v3; // r12
  int v4; // r14d
  struct tagWND *v5; // rdi
  unsigned int v6; // r15d
  LONG right; // r9d
  LONG v8; // r8d
  bool v9; // cc
  LONG top; // ecx
  LONG bottom; // edx
  void *v12; // rsi
  HRGN v13; // rbx
  HRGN v14; // r13
  int v15; // eax
  int v16; // eax
  __int128 v17; // xmm0
  __int64 v18; // rax
  float *v19; // r10
  float v20; // xmm3_4
  float v21; // xmm2_4
  int v22; // edx
  int v23; // ecx
  __int64 v24; // rdx
  LONG v25; // r14d
  LONG v26; // r13d
  LONG v27; // r12d
  LONG v28; // eax
  LONG left; // r8d
  LONG v30; // r9d
  LONG v31; // ecx
  LONG v32; // edx
  CSmartFloatingSave *v33; // rax
  __int64 v34; // rdx
  __int64 v35; // r8
  __int64 v36; // r11
  float *v37; // r10
  float v38; // xmm2_4
  float v39; // xmm3_4
  int v40; // edx
  int v41; // ecx
  int v42; // r12d
  int v43; // esi
  int v44; // r13d
  int v45; // r14d
  HRGN v46; // rsi
  int v47; // ebx
  int v48; // ecx
  struct tagWND *v49; // rdx
  struct tagWND *v50; // rcx
  char v51; // cl
  struct tagWND *v52; // rcx
  unsigned int v53; // esi
  int v54; // r13d
  _BYTE *v55; // r14
  __int64 *v56; // rax
  _OWORD *v57; // r8
  _QWORD *v58; // rdx
  __int64 v59; // r9
  __int64 v60; // rcx
  HRGN v61; // rcx
  __int64 v62; // rdx
  __int64 v63; // rcx
  __int64 v64; // r8
  __int64 v65; // r9
  __int64 EmptyRgn; // rsi
  __int64 v67; // r12
  __int64 v68; // rbx
  __int64 v69; // r8
  HRGN v70; // r14
  int v71; // r12d
  int v72; // ebx
  BOOL v73; // edi
  __int128 v75; // [rsp+20h] [rbp-E0h]
  int v77; // [rsp+38h] [rbp-C8h]
  HRGN v78; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v79; // [rsp+48h] [rbp-B8h]
  int v80; // [rsp+50h] [rbp-B0h]
  _QWORD v81[5]; // [rsp+58h] [rbp-A8h] BYREF
  HRGN *v82; // [rsp+80h] [rbp-80h]
  struct tagWND *v83; // [rsp+88h] [rbp-78h]
  struct tagRECT v84; // [rsp+90h] [rbp-70h] BYREF
  _BYTE v85[240]; // [rsp+A0h] [rbp-60h] BYREF
  _BYTE v86[480]; // [rsp+190h] [rbp+90h] BYREF

  v77 = 0;
  v3 = a2;
  v4 = a3;
  LODWORD(v79) = a3;
  v5 = a1;
  v83 = a1;
  memset(v81, 0, sizeof(v81));
  v6 = 1;
  if ( (v4 & 1) != 0 )
  {
    v84 = (struct tagRECT)*((_OWORD *)v5 + 7);
  }
  else
  {
    v84 = (struct tagRECT)*((_OWORD *)v5 + 8);
    right = v84.right;
    v8 = _mm_cvtsi128_si32((__m128i)v84);
    if ( v8 <= *((_DWORD *)v5 + 28) )
      v8 = *((_DWORD *)v5 + 28);
    v9 = v84.right < *((_DWORD *)v5 + 30);
    v84.left = v8;
    if ( !v9 )
      right = *((_DWORD *)v5 + 30);
    v84.right = right;
    if ( v8 >= right )
      goto LABEL_13;
    top = v84.top;
    bottom = v84.bottom;
    if ( v84.top <= *((_DWORD *)v5 + 29) )
      top = *((_DWORD *)v5 + 29);
    v9 = v84.bottom < *((_DWORD *)v5 + 31);
    v84.top = top;
    if ( !v9 )
      bottom = *((_DWORD *)v5 + 31);
    v84.bottom = bottom;
    if ( top >= bottom )
    {
LABEL_13:
      *(_QWORD *)&v84.left = 0LL;
      *(_QWORD *)&v84.right = 0LL;
    }
  }
  v12 = v5;
  v13 = (HRGN)*((_QWORD *)v5 + 11);
  v14 = *(HRGN *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v5 + 3) + 8LL) + 16LL) + 88LL);
  v78 = v14;
  if ( !v13 )
    goto LABEL_121;
  if ( v13 != v14 )
  {
    while ( 1 )
    {
      v82 = (HRGN *)(v13 + 22);
      if ( *((HRGN *)v13 + 11) == v14 && (*((_WORD *)v13 + 33) & 0x3FFF) != 0x29D )
        goto LABEL_121;
      if ( (v4 & 0x4000) != 0 && (*((_WORD *)v13 + 33) & 0x3FFF) == 0x29D
        || (v4 & 0x4000) != 0 && ((v15 = *((_DWORD *)v12 + 12), (v15 & 0x80000) != 0) || (v15 & 0x20000000) != 0)
        || (v4 & 0x8000000) != 0
        && (*((_WORD *)v13 + 33) & 0x3FFF) == 0x29D
        && (unsigned int)IsWindowDesktopComposed(v13) )
      {
LABEL_65:
        v3 = a2;
        goto LABEL_66;
      }
      v16 = v77;
      v17 = *((_OWORD *)v13 + 8);
      if ( *((_QWORD *)v13 + 25) )
        v16 = 1;
      v77 = v16;
      if ( *((_QWORD *)v12 + 34)
        && (unsigned int)IsWindowDesktopComposed(v12)
        && (v18 = Win32AllocPool(8LL, 1919775573LL)) != 0 )
      {
        *(_BYTE *)(v18 + 4) = 1;
        v19 = (float *)*((_QWORD *)v12 + 34);
        v20 = 1.0 / v19[5];
        v21 = 1.0 / *v19;
        v22 = (int)v19[13];
        v23 = -(int)v19[12];
        *(_BYTE *)(v18 + 4) = 0;
        v24 = (unsigned int)-v22;
        v25 = (int)(float)((float)(v23 + v17) * v21);
        v26 = (int)(float)((float)(v24 + DWORD1(v17)) * v20);
        v27 = (int)(float)((float)(v23 + DWORD2(v17)) * v21);
        v80 = (int)(float)((float)(v24 + HIDWORD(v17)) * v20);
        Win32FreePool(v18, v24, (unsigned int)(v23 + v17));
        v28 = v80;
      }
      else
      {
        v25 = v17;
        v26 = DWORD1(v17);
        v27 = DWORD2(v17);
        v28 = HIDWORD(v17);
      }
      left = v84.left;
      v30 = v84.right;
      if ( v84.left <= v25 )
        left = v25;
      v84.left = left;
      if ( v84.right >= v27 )
        v30 = v27;
      v84.right = v30;
      if ( left >= v30 )
        goto LABEL_120;
      v31 = v84.top;
      v32 = v84.bottom;
      if ( v84.top <= v26 )
        v31 = v26;
      v84.top = v31;
      if ( v84.bottom >= v28 )
        v32 = v28;
      v84.bottom = v32;
      if ( v31 >= v32 )
      {
LABEL_120:
        *(_QWORD *)&v84.right = 0LL;
        *(_QWORD *)&v84.left = 0LL;
        goto LABEL_121;
      }
      v75 = *((_OWORD *)v13 + 7);
      if ( !*((_QWORD *)v12 + 34) )
        goto LABEL_53;
      if ( !(unsigned int)IsWindowDesktopComposed(v12) )
        break;
      v33 = (CSmartFloatingSave *)Win32AllocPool(8LL, 1919775573LL);
      if ( !v33 )
        break;
      if ( (int)CSmartFloatingSave::Save(v33) < 0 )
      {
        v45 = HIDWORD(v75);
        v44 = DWORD2(v75);
        v43 = DWORD1(v75);
        v42 = v75;
      }
      else
      {
        v37 = (float *)*((_QWORD *)v12 + 34);
        v38 = 1.0 / *v37;
        v39 = 1.0 / v37[5];
        v40 = (int)v37[13];
        v41 = -(int)v37[12];
        *(_BYTE *)(v36 + 4) = 0;
        v35 = (unsigned int)(v41 + v75);
        v34 = (unsigned int)-v40;
        v42 = (int)(float)((float)(v41 + v75) * v38);
        v43 = (int)(float)((float)(v34 + DWORD1(v75)) * v39);
        v44 = (int)(float)((float)(v41 + DWORD2(v75)) * v38);
        v45 = (int)(float)((float)(v34 + HIDWORD(v75)) * v39);
      }
      Win32FreePool(v36, v34, v35);
      v32 = v84.bottom;
      v30 = v84.right;
      v31 = v84.top;
      left = v84.left;
LABEL_54:
      if ( left <= v42 )
        left = v42;
      v84.left = left;
      if ( v30 >= v44 )
        v30 = v44;
      v84.right = v30;
      if ( left >= v30 )
        goto LABEL_120;
      if ( v31 <= v43 )
        v31 = v43;
      v84.top = v31;
      if ( v32 >= v45 )
        v32 = v45;
      v84.bottom = v32;
      if ( v31 >= v32 )
        goto LABEL_120;
      v14 = v78;
      v12 = v13;
      v4 = v79;
      v13 = *v82;
      if ( *v82 == v78 )
        goto LABEL_65;
    }
    v32 = v84.bottom;
    v30 = v84.right;
    v31 = v84.top;
    left = v84.left;
LABEL_53:
    v42 = v75;
    v43 = DWORD1(v75);
    v44 = DWORD2(v75);
    v45 = HIDWORD(v75);
    goto LABEL_54;
  }
  if ( (*((_WORD *)v5 + 33) & 0x3FFF) != 0x29D )
    goto LABEL_121;
LABEL_66:
  v46 = (HRGN)*((_QWORD *)v5 + 11);
  v47 = 0;
  v81[3] = v85;
  LODWORD(v81[1]) = 30;
  v48 = v4 & 0x10;
  HIDWORD(v81[0]) = 0;
  v49 = v5;
  v81[2] = v85;
  if ( v46 != v14 )
  {
    do
    {
      if ( (v4 & 0x4000) != 0 && (*((_BYTE *)v49 + 51) & 0x20) != 0 )
        break;
      if ( v48 )
      {
        v50 = (struct tagWND *)*((_QWORD *)v46 + 12);
        if ( v50 != v49 && !ExcludeWindowRects(v50, v49, &v84, (struct _CalcVisRgnData *)v81) )
          goto LABEL_121;
      }
      v51 = *((_BYTE *)v46 + 55);
      v49 = (struct tagWND *)v46;
      v46 = (HRGN)*((_QWORD *)v46 + 11);
      v48 = v51 & 4;
    }
    while ( v46 != v14 );
    v47 = HIDWORD(v81[0]);
  }
  if ( (v4 & 8) != 0 )
  {
    v52 = (struct tagWND *)*((_QWORD *)v5 + 12);
    if ( v52 )
    {
      if ( !ExcludeWindowRects(v52, 0LL, &v84, (struct _CalcVisRgnData *)v81) )
        goto LABEL_121;
      v47 = HIDWORD(v81[0]);
    }
  }
  if ( v47 > 0 )
  {
    v53 = 0;
    v54 = 0;
    if ( v47 <= 30 )
    {
      v55 = v86;
      goto LABEL_82;
    }
    v55 = (_BYTE *)Win32AllocPoolWithQuota(16LL * v47, 1769370453LL);
    if ( v55 )
    {
LABEL_82:
      v56 = (__int64 *)v81[2];
      v57 = v55;
      v58 = (_QWORD *)v81[2];
      v59 = (unsigned int)v47;
      do
      {
        v60 = *v56;
        if ( *(_QWORD *)(*v56 + 200) )
        {
          ++v54;
          *v58++ = v60;
        }
        else
        {
          ++v53;
          *v57++ = *(_OWORD *)(v60 + 112);
        }
        ++v56;
        --v59;
      }
      while ( v59 );
      if ( !*v3 )
        *v3 = (HRGN)CreateEmptyRgn(v60, v58, v57, 0LL);
      v61 = *v3;
      if ( v53 )
        GreSubtractRgnRectList(v61, &v84, v55, v53);
      else
        SetRectRgnIndirect(v61, &v84);
      EmptyRgn = v81[4];
      v79 = v81[4];
      if ( !v81[4] )
      {
        EmptyRgn = CreateEmptyRgn(v63, v62, v64, v65);
        v79 = EmptyRgn;
      }
      v67 = 0LL;
      if ( v54 > 0 )
      {
        do
        {
          v68 = v81[2];
          SetRectRgnIndirect(EmptyRgn, *(_QWORD *)(v81[2] + 8 * v67) + 112LL);
          GreCombineRgn(EmptyRgn, EmptyRgn, *(_QWORD *)(*(_QWORD *)(v68 + 8 * v67) + 200LL), 1LL);
          if ( (unsigned int)GreCombineRgn(*a2, *a2, EmptyRgn, 4LL) == 1 )
            break;
          ++v67;
        }
        while ( v67 < v54 );
        v5 = v83;
      }
      if ( v55 != v86 )
        Win32FreePool(v55, v62, v64);
      v14 = v78;
      v3 = a2;
      goto LABEL_101;
    }
LABEL_121:
    SetOrCreateRectRgnIndirectPublic(a2, gZero);
    EmptyRgn = v81[4];
    v6 = 0;
    goto LABEL_122;
  }
  if ( *((char *)v5 + 43) < 0 )
  {
    *(_QWORD *)&v84.left = 0LL;
    *(_QWORD *)&v84.right = 0LL;
  }
  if ( !(unsigned int)SetOrCreateRectRgnIndirectPublic(v3, &v84) )
    goto LABEL_121;
  EmptyRgn = v81[4];
  v79 = v81[4];
LABEL_101:
  v69 = *((_QWORD *)v5 + 25);
  if ( v69 )
    GreCombineRgn(*v3, *v3, v69, 1LL);
  if ( v77 )
  {
    v70 = (HRGN)*((_QWORD *)v5 + 11);
    v71 = 0;
    if ( v70 != v14 )
    {
      do
      {
        if ( *((_QWORD *)v70 + 25) )
        {
          if ( (*((_BYTE *)v5 + 50) & 8) != 0 && (*((_BYTE *)v5 + 288) & 0x20) == 0 )
            v71 = 1;
          if ( v71 && (*((_WORD *)v70 + 33) & 0x3FFF) == 0x29D )
            break;
          v78 = (HRGN)*((_QWORD *)v70 + 25);
          v72 = PhysicalToLogicalInPlaceRgn((__int64)v5, &v78);
          v73 = GreCombineRgn(*a2, *a2, v78, 1LL) == 1;
          if ( v72 )
            GreDeleteObject(v78);
          if ( v73 )
            break;
        }
        v5 = (struct tagWND *)v70;
        v70 = (HRGN)*((_QWORD *)v70 + 11);
      }
      while ( v70 != v14 );
      EmptyRgn = v79;
    }
  }
LABEL_122:
  if ( EmptyRgn )
    GreDeleteObject(EmptyRgn);
  if ( LODWORD(v81[0]) )
    Win32FreePool(v81[2], v62, v69);
  return v6;
}
