/*
 * XREFs of ?CalcVisRgnWorker@@YAHQEAUtagWND@@PEAPEAUHRGN__@@K@Z @ 0x1C006AFE0
 * Callers:
 *     GreUpdateSpriteVisRgn @ 0x1C004EF40 (GreUpdateSpriteVisRgn.c)
 *     CalcVisRgn @ 0x1C006AE10 (CalcVisRgn.c)
 * Callees:
 *     GreSubtractRgnRectList @ 0x1C003B874 (GreSubtractRgnRectList.c)
 *     PhysicalToLogicalInPlaceRgn @ 0x1C0053484 (PhysicalToLogicalInPlaceRgn.c)
 *     IntersectRect @ 0x1C006B798 (IntersectRect.c)
 *     ?ExcludeWindowRects@@YAHPEAUtagWND@@0PEAUtagRECT@@PEAU_CalcVisRgnData@@@Z @ 0x1C006B800 (-ExcludeWindowRects@@YAHPEAUtagWND@@0PEAUtagRECT@@PEAU_CalcVisRgnData@@@Z.c)
 *     __security_check_cookie @ 0x1C01512D0 (__security_check_cookie.c)
 *     memset @ 0x1C0152CC0 (memset.c)
 *     ?Save@CSmartFloatingSave@@QEAAJXZ @ 0x1C01E46F8 (-Save@CSmartFloatingSave@@QEAAJXZ.c)
 */

__int64 __fastcall CalcVisRgnWorker(struct tagWND *const a1, HRGN *a2, int a3)
{
  HRGN *v3; // r13
  int v4; // r14d
  struct tagWND *v5; // rdi
  unsigned int v6; // r15d
  struct tagWND *v7; // rsi
  __int64 v8; // rbx
  __int64 v9; // r12
  int v10; // eax
  int v11; // eax
  __int128 v12; // xmm0
  bool v13; // zf
  __int64 v14; // rax
  float *v15; // r10
  float v16; // xmm3_4
  float v17; // xmm2_4
  int v18; // edx
  int v19; // ecx
  int v20; // edx
  LONG v21; // r14d
  LONG v22; // r13d
  LONG v23; // r12d
  LONG v24; // r9d
  LONG left; // edx
  LONG right; // r8d
  LONG top; // eax
  LONG bottom; // ecx
  CSmartFloatingSave *v29; // rax
  __int64 v30; // r11
  float *v31; // r10
  float v32; // xmm2_4
  float v33; // xmm3_4
  int v34; // edx
  int v35; // ecx
  int v36; // edx
  int v37; // r12d
  int v38; // esi
  int v39; // r13d
  int v40; // r14d
  __int64 v41; // rsi
  int v42; // ebx
  int v43; // ecx
  struct tagWND *v44; // rdx
  struct tagWND *v45; // rcx
  char v46; // cl
  struct tagWND *v47; // rcx
  int v48; // r9d
  int v49; // esi
  struct _RECTL *v50; // r14
  struct _RECTL **v51; // rax
  struct _RECTL *v52; // r8
  struct _RECTL **v53; // rdx
  __int64 v54; // r10
  struct _RECTL *v55; // rcx
  HRGN v56; // rcx
  __int64 v57; // rdx
  __int64 v58; // rcx
  __int64 EmptyRgn; // rsi
  __int64 v60; // r12
  __int64 v61; // rbx
  __int64 v62; // r8
  __int64 v63; // r14
  int v64; // r12d
  __int64 v65; // rax
  int v66; // ebx
  BOOL v67; // edi
  __int128 v69; // [rsp+20h] [rbp-E0h]
  HRGN *v70; // [rsp+30h] [rbp-D0h] BYREF
  int v71; // [rsp+38h] [rbp-C8h]
  int v72; // [rsp+3Ch] [rbp-C4h]
  __int64 v73; // [rsp+40h] [rbp-C0h]
  int v74; // [rsp+48h] [rbp-B8h]
  _QWORD v75[5]; // [rsp+50h] [rbp-B0h] BYREF
  __int64 *v76; // [rsp+78h] [rbp-88h]
  struct tagWND *v77; // [rsp+80h] [rbp-80h]
  struct tagRECT v78; // [rsp+88h] [rbp-78h] BYREF
  _BYTE v79[240]; // [rsp+A0h] [rbp-60h] BYREF
  _BYTE v80[480]; // [rsp+190h] [rbp+90h] BYREF

  v72 = 0;
  v3 = a2;
  v70 = a2;
  v4 = a3;
  v74 = a3;
  v5 = a1;
  v77 = a1;
  memset(v75, 0, sizeof(v75));
  v6 = 1;
  if ( (v4 & 1) != 0 )
  {
    v78 = (struct tagRECT)*((_OWORD *)v5 + 7);
  }
  else
  {
    v78 = (struct tagRECT)*((_OWORD *)v5 + 8);
    IntersectRect(&v78, &v78, (char *)v5 + 112);
  }
  v7 = v5;
  v8 = *((_QWORD *)v5 + 11);
  v9 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v5 + 3) + 8LL) + 16LL) + 88LL);
  v73 = v9;
  if ( !v8 )
    goto LABEL_114;
  if ( v8 != v9 )
  {
    while ( 1 )
    {
      v76 = (__int64 *)(v8 + 88);
      if ( *(_QWORD *)(v8 + 88) == v9 && (*(_WORD *)(v8 + 66) & 0x3FFF) != 0x29D )
        goto LABEL_114;
      if ( (v4 & 0x4000) != 0 && (*(_WORD *)(v8 + 66) & 0x3FFF) == 0x29D
        || (v4 & 0x4000) != 0 && ((v10 = *((_DWORD *)v7 + 12), (v10 & 0x80000) != 0) || (v10 & 0x20000000) != 0)
        || (v4 & 0x8000000) != 0 && (*(_WORD *)(v8 + 66) & 0x3FFF) == 0x29D && (unsigned int)IsWindowDesktopComposed(v8) )
      {
LABEL_55:
        v3 = v70;
        goto LABEL_56;
      }
      v11 = v72;
      v12 = *(_OWORD *)(v8 + 128);
      if ( *(_QWORD *)(v8 + 200) )
        v11 = 1;
      v13 = *((_QWORD *)v7 + 34) == 0LL;
      v72 = v11;
      if ( !v13 && (unsigned int)IsWindowDesktopComposed(v7) && (v14 = Win32AllocPool(8LL)) != 0 )
      {
        *(_BYTE *)(v14 + 4) = 1;
        v15 = (float *)*((_QWORD *)v7 + 34);
        v16 = 1.0 / v15[5];
        v17 = 1.0 / *v15;
        v18 = (int)v15[13];
        v19 = -(int)v15[12];
        *(_BYTE *)(v14 + 4) = 0;
        v20 = -v18;
        v21 = (int)(float)((float)(v19 + v12) * v17);
        v22 = (int)(float)((float)(v20 + DWORD1(v12)) * v16);
        v23 = (int)(float)((float)(v19 + DWORD2(v12)) * v17);
        v71 = (int)(float)((float)(v20 + HIDWORD(v12)) * v16);
        Win32FreePool(v14);
        v24 = v71;
      }
      else
      {
        v21 = v12;
        v22 = DWORD1(v12);
        v23 = DWORD2(v12);
        v24 = HIDWORD(v12);
      }
      left = v78.left;
      right = v78.right;
      if ( v78.left <= v21 )
        left = v21;
      v78.left = left;
      if ( v78.right >= v23 )
        right = v23;
      v78.right = right;
      if ( left >= right )
        goto LABEL_113;
      top = v78.top;
      bottom = v78.bottom;
      if ( v78.top <= v22 )
        top = v22;
      v78.top = top;
      if ( v78.bottom >= v24 )
        bottom = v24;
      v78.bottom = bottom;
      if ( top >= bottom )
      {
LABEL_113:
        *(_QWORD *)&v78.right = 0LL;
        *(_QWORD *)&v78.left = 0LL;
        goto LABEL_114;
      }
      v69 = *(_OWORD *)(v8 + 112);
      if ( !*((_QWORD *)v7 + 34) )
        goto LABEL_43;
      if ( !(unsigned int)IsWindowDesktopComposed(v7) )
        break;
      v29 = (CSmartFloatingSave *)Win32AllocPool(8LL);
      if ( !v29 )
        break;
      if ( (int)CSmartFloatingSave::Save(v29) < 0 )
      {
        v40 = HIDWORD(v69);
        v39 = DWORD2(v69);
        v38 = DWORD1(v69);
        v37 = v69;
      }
      else
      {
        v31 = (float *)*((_QWORD *)v7 + 34);
        v32 = 1.0 / *v31;
        v33 = 1.0 / v31[5];
        v34 = (int)v31[13];
        v35 = -(int)v31[12];
        *(_BYTE *)(v30 + 4) = 0;
        v36 = -v34;
        v37 = (int)(float)((float)(v35 + v69) * v32);
        v38 = (int)(float)((float)(v36 + DWORD1(v69)) * v33);
        v39 = (int)(float)((float)(v35 + DWORD2(v69)) * v32);
        v40 = (int)(float)((float)(v36 + HIDWORD(v69)) * v33);
      }
      Win32FreePool(v30);
      bottom = v78.bottom;
      right = v78.right;
      top = v78.top;
      left = v78.left;
LABEL_44:
      if ( left <= v37 )
        left = v37;
      v78.left = left;
      if ( right >= v39 )
        right = v39;
      v78.right = right;
      if ( left >= right )
        goto LABEL_113;
      if ( top <= v38 )
        top = v38;
      v78.top = top;
      if ( bottom >= v40 )
        bottom = v40;
      v78.bottom = bottom;
      if ( top >= bottom )
        goto LABEL_113;
      v9 = v73;
      v7 = (struct tagWND *)v8;
      v4 = v74;
      v8 = *v76;
      if ( *v76 == v73 )
        goto LABEL_55;
    }
    bottom = v78.bottom;
    right = v78.right;
    top = v78.top;
    left = v78.left;
LABEL_43:
    v37 = v69;
    v38 = DWORD1(v69);
    v39 = DWORD2(v69);
    v40 = HIDWORD(v69);
    goto LABEL_44;
  }
  if ( (*((_WORD *)v5 + 33) & 0x3FFF) != 0x29D )
    goto LABEL_114;
LABEL_56:
  v41 = *((_QWORD *)v5 + 11);
  v42 = 0;
  v75[3] = v79;
  LODWORD(v75[1]) = 30;
  v43 = v4 & 0x10;
  HIDWORD(v75[0]) = 0;
  v44 = v5;
  v75[2] = v79;
  if ( v41 != v9 )
  {
    do
    {
      if ( (v4 & 0x4000) != 0 && (*((_BYTE *)v44 + 51) & 0x20) != 0 )
        break;
      if ( v43 )
      {
        v45 = *(struct tagWND **)(v41 + 96);
        if ( v45 != v44 && !ExcludeWindowRects(v45, v44, &v78, (struct _CalcVisRgnData *)v75) )
          goto LABEL_114;
      }
      v46 = *(_BYTE *)(v41 + 55);
      v44 = (struct tagWND *)v41;
      v41 = *(_QWORD *)(v41 + 88);
      v43 = v46 & 4;
    }
    while ( v41 != v9 );
    v42 = HIDWORD(v75[0]);
  }
  if ( (v4 & 8) != 0 )
  {
    v47 = (struct tagWND *)*((_QWORD *)v5 + 12);
    if ( v47 )
    {
      if ( !ExcludeWindowRects(v47, 0LL, &v78, (struct _CalcVisRgnData *)v75) )
        goto LABEL_114;
      v42 = HIDWORD(v75[0]);
    }
  }
  if ( v42 <= 0 )
  {
    if ( *((char *)v5 + 43) < 0 )
    {
      *(_QWORD *)&v78.left = 0LL;
      *(_QWORD *)&v78.right = 0LL;
    }
    if ( (unsigned int)SetOrCreateRectRgnIndirectPublic(v3, &v78) )
    {
      EmptyRgn = v75[4];
      goto LABEL_92;
    }
    goto LABEL_114;
  }
  v48 = 0;
  v49 = 0;
  v71 = 0;
  if ( v42 <= 30 )
  {
    v50 = (struct _RECTL *)v80;
    goto LABEL_73;
  }
  v50 = (struct _RECTL *)Win32AllocPoolWithQuota(16LL * v42, 1769370453LL);
  if ( !v50 )
  {
LABEL_114:
    SetOrCreateRectRgnIndirectPublic(v70, gZero);
    EmptyRgn = v75[4];
    v6 = 0;
    goto LABEL_115;
  }
  v48 = 0;
LABEL_73:
  v51 = (struct _RECTL **)v75[2];
  v52 = v50;
  v53 = (struct _RECTL **)v75[2];
  v54 = (unsigned int)v42;
  do
  {
    v55 = *v51;
    if ( *(_QWORD *)&(*v51)[12].right )
    {
      ++v48;
      *v53++ = v55;
    }
    else
    {
      ++v49;
      *v52++ = v55[7];
    }
    ++v51;
    --v54;
  }
  while ( v54 );
  v71 = v48;
  if ( !*v3 )
    *v3 = (HRGN)CreateEmptyRgn(v55, v53);
  v56 = *v3;
  if ( v49 )
    GreSubtractRgnRectList(v56, (struct _RECTL *)&v78, v50);
  else
    SetRectRgnIndirect(v56, &v78);
  EmptyRgn = v75[4];
  if ( !v75[4] )
    EmptyRgn = CreateEmptyRgn(v58, v57);
  v60 = 0LL;
  if ( v71 > 0 )
  {
    do
    {
      v61 = v75[2];
      SetRectRgnIndirect(EmptyRgn, *(_QWORD *)(v75[2] + 8 * v60) + 112LL);
      GreCombineRgn(EmptyRgn, EmptyRgn, *(_QWORD *)(*(_QWORD *)(v61 + 8 * v60) + 200LL), 1LL);
      if ( (unsigned int)GreCombineRgn(*v70, *v70, EmptyRgn, 4LL) == 1 )
        break;
      ++v60;
    }
    while ( v60 < v71 );
    v5 = v77;
  }
  if ( v50 != (struct _RECTL *)v80 )
    Win32FreePool(v50);
  v3 = v70;
LABEL_92:
  v62 = *((_QWORD *)v5 + 25);
  if ( v62 )
    GreCombineRgn(*v3, *v3, v62, 1LL);
  if ( v72 )
  {
    v63 = *((_QWORD *)v5 + 11);
    v64 = 0;
    v65 = v73;
    while ( v63 != v65 )
    {
      if ( *(_QWORD *)(v63 + 200) )
      {
        if ( (*((_BYTE *)v5 + 50) & 8) != 0 && (*((_BYTE *)v5 + 288) & 0x20) == 0 )
          v64 = 1;
        if ( v64 && (*(_WORD *)(v63 + 66) & 0x3FFF) == 0x29D )
          break;
        v70 = *(HRGN **)(v63 + 200);
        v66 = PhysicalToLogicalInPlaceRgn((__int64)v5, (HRGN *)&v70);
        v67 = GreCombineRgn(*v3, *v3, v70, 1LL) == 1;
        if ( v66 )
          GreDeleteObject(v70);
        if ( v67 )
          break;
        v65 = v73;
      }
      v5 = (struct tagWND *)v63;
      v63 = *(_QWORD *)(v63 + 88);
    }
  }
LABEL_115:
  if ( EmptyRgn )
    GreDeleteObject(EmptyRgn);
  if ( LODWORD(v75[0]) )
    Win32FreePool(v75[2]);
  return v6;
}
