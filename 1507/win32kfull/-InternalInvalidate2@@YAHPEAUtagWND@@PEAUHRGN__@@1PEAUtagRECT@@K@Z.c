/*
 * XREFs of ?InternalInvalidate2@@YAHPEAUtagWND@@PEAUHRGN__@@1PEAUtagRECT@@K@Z @ 0x1C008EECC
 * Callers:
 *     xxxInternalInvalidate @ 0x1C000DB50 (xxxInternalInvalidate.c)
 *     xxxRedrawWindow @ 0x1C008E8E0 (xxxRedrawWindow.c)
 *     ?InternalInvalidate2@@YAHPEAUtagWND@@PEAUHRGN__@@1PEAUtagRECT@@K@Z @ 0x1C008EECC (-InternalInvalidate2@@YAHPEAUtagWND@@PEAUHRGN__@@1PEAUtagRECT@@K@Z.c)
 *     ?ValidateParents@@YAHPEAUtagWND@@H@Z @ 0x1C00DF864 (-ValidateParents@@YAHPEAUtagWND@@H@Z.c)
 * Callees:
 *     GetAppCompatFlags @ 0x1C005CA60 (GetAppCompatFlags.c)
 *     _GetProp @ 0x1C006524C (_GetProp.c)
 *     IntersectRect @ 0x1C008E444 (IntersectRect.c)
 *     ?InternalInvalidate2@@YAHPEAUtagWND@@PEAUHRGN__@@1PEAUtagRECT@@K@Z @ 0x1C008EECC (-InternalInvalidate2@@YAHPEAUtagWND@@PEAUHRGN__@@1PEAUtagRECT@@K@Z.c)
 *     InternalInvalidate3 @ 0x1C008F748 (InternalInvalidate3.c)
 *     PhysicalToLogicalInPlaceRgn @ 0x1C008FC6C (PhysicalToLogicalInPlaceRgn.c)
 *     PhysicalToLogicalInPlaceRect @ 0x1C008FDA0 (PhysicalToLogicalInPlaceRect.c)
 *     ?IsRectEmptyInl@@YAHPEBUtagRECT@@@Z @ 0x1C00918C4 (-IsRectEmptyInl@@YAHPEBUtagRECT@@@Z.c)
 *     LogicalToPhysicalInPlaceRgn @ 0x1C00DFA30 (LogicalToPhysicalInPlaceRgn.c)
 *     __security_check_cookie @ 0x1C015BB90 (__security_check_cookie.c)
 *     LogicalToPhysicalInPlaceRect @ 0x1C01E53B0 (LogicalToPhysicalInPlaceRect.c)
 *     ?PixieHack@@YAXPEAUtagWND@@PEAUtagRECT@@@Z @ 0x1C02157B0 (-PixieHack@@YAXPEAUtagWND@@PEAUtagRECT@@@Z.c)
 */

__int64 __fastcall InternalInvalidate2(struct tagWND *a1, HRGN a2, HRGN a3, struct tagRECT *a4, unsigned int a5)
{
  unsigned int v5; // ebx
  unsigned int v6; // edi
  struct tagWND *v7; // rsi
  unsigned __int64 v8; // r8
  char v9; // cl
  __int64 v11; // rax
  __int64 v12; // r11
  int v13; // r8d
  int v14; // r9d
  float *v15; // r10
  int v16; // eax
  float v17; // xmm2_4
  float v18; // xmm3_4
  int v19; // edx
  int v20; // ecx
  int v21; // edx
  LONG v22; // edx
  LONG v23; // r8d
  LONG v24; // eax
  LONG v25; // r9d
  LONG v26; // ecx
  LONG v27; // eax
  LONG v28; // ecx
  LONG v29; // eax
  HRGN v30; // r10
  int v31; // edx
  LONG left; // ecx
  LONG right; // eax
  LONG top; // ecx
  LONG bottom; // eax
  int v36; // eax
  int v37; // eax
  int v38; // eax
  __int64 AppCompatFlags; // rax
  HRGN v40; // rax
  HRGN v41; // rcx
  HRGN v42; // rdx
  int v43; // eax
  int v44; // eax
  HRGN Prop; // rax
  __int64 v46; // rdx
  __int64 v47; // rcx
  __int64 EmptyRgnPublic; // rbx
  HRGN v49; // rdx
  HRGN v50; // rcx
  char v51; // al
  HRGN v52; // rcx
  struct tagWND *v53; // rax
  struct tagWND *v54; // rbx
  __int64 v55; // rax
  HRGN v56; // rdx
  int v57; // ebx
  struct tagWND *v58; // rbx
  HRGN v59; // rax
  HRGN v60; // rcx
  __int64 v61; // rax
  struct tagWND *v62; // rcx
  HRGN v63; // rbx
  int v64; // eax
  int v66; // [rsp+38h] [rbp-59h]
  int v67; // [rsp+38h] [rbp-59h]
  int v68; // [rsp+38h] [rbp-59h]
  int v69; // [rsp+38h] [rbp-59h]
  unsigned int v70; // [rsp+3Ch] [rbp-55h]
  __int16 v71; // [rsp+40h] [rbp-51h]
  HRGN v72; // [rsp+48h] [rbp-49h] BYREF
  HRGN v73; // [rsp+50h] [rbp-41h]
  HRGN v74; // [rsp+58h] [rbp-39h] BYREF
  struct tagWND *v75; // [rsp+60h] [rbp-31h]
  int v76; // [rsp+68h] [rbp-29h]
  int v77; // [rsp+6Ch] [rbp-25h]
  int v78; // [rsp+70h] [rbp-21h]
  HRGN v79; // [rsp+78h] [rbp-19h]
  HRGN v80; // [rsp+80h] [rbp-11h]
  struct tagRECT v81; // [rsp+88h] [rbp-9h] BYREF
  __int128 v82; // [rsp+98h] [rbp+7h] BYREF
  struct tagRECT v83; // [rsp+A8h] [rbp+17h] BYREF

  v5 = a5;
  v6 = 0;
  v79 = a3;
  v7 = a1;
  if ( *((_QWORD *)a1 + 25) )
    v5 = a5 | 0x8000;
  v71 = v5;
  LODWORD(v8) = 1;
  v70 = v5 | 0x2000;
  v81 = (struct tagRECT)*((_OWORD *)a1 + 7);
  if ( (v5 & 1) == 0 )
    goto LABEL_78;
  v9 = *((_BYTE *)a1 + 50) & 8;
  if ( v9 && (v5 & 0x10000) == 0 && (*((_DWORD *)v7 + 72) & 2) == 0 )
    return (unsigned int)v8;
  *((_DWORD *)v7 + 72) &= ~2u;
  if ( (*((_BYTE *)v7 + 51) & 0x20) != 0 || v9 )
  {
    if ( (unsigned int)IsRectEmptyInl(&v81) )
      goto LABEL_28;
LABEL_32:
    if ( (unsigned __int64)v30 <= v8 )
      goto LABEL_70;
    if ( (unsigned int)GreRectInRegion(v30, &v81) )
    {
      if ( (unsigned int)GreGetRgnBox(a2, &v82) == 2 )
      {
        left = v82;
        right = DWORD2(v82);
        if ( (int)v82 <= v81.left )
          left = v81.left;
        LODWORD(v82) = left;
        if ( SDWORD2(v82) >= v81.right )
          right = v81.right;
        DWORD2(v82) = right;
        if ( left >= right )
          goto LABEL_47;
        top = DWORD1(v82);
        bottom = HIDWORD(v82);
        if ( SDWORD1(v82) <= v81.top )
          top = v81.top;
        DWORD1(v82) = top;
        if ( SHIDWORD(v82) >= v81.bottom )
          bottom = v81.bottom;
        HIDWORD(v82) = bottom;
        if ( top >= bottom )
        {
LABEL_47:
          v36 = 0;
          v82 = 0uLL;
          goto LABEL_53;
        }
        goto LABEL_45;
      }
      SetRectRgnIndirect(ghrgnInv2, &v81);
      v37 = GreCombineRgn(ghrgnInv2, ghrgnInv2, a2, 1LL);
      if ( v37 != 1 )
      {
        if ( v37 != 2 )
          goto LABEL_51;
        GreGetRgnBox(ghrgnInv2, &v82);
LABEL_45:
        if ( *(_OWORD *)&v81 == v82 )
        {
          v36 = 2;
LABEL_53:
          v8 = 1LL;
LABEL_54:
          if ( v36 )
          {
            v38 = v36 - 1;
            if ( v38 )
            {
              if ( v38 == 1 )
              {
                AppCompatFlags = GetAppCompatFlags(*((_QWORD *)v7 + 2));
                v8 = 1LL;
                if ( (AppCompatFlags & 0x10000) == 0 )
                  a2 = (HRGN)1;
              }
            }
            else if ( (v5 & 0x8000) != 0 )
            {
              SetRectRgnIndirect(ghrgnInv2, &v81);
              v40 = (HRGN)v7;
              v41 = 0LL;
              v74 = (HRGN)v7;
              do
              {
                v42 = (HRGN)*((_QWORD *)v40 + 25);
                v73 = v42;
                if ( v42 )
                {
                  v72 = v42;
                  if ( v41 )
                  {
                    v43 = PhysicalToLogicalInPlaceRgn(v41, &v72);
                    v42 = v72;
                    v73 = v72;
                    v67 = v43;
                  }
                  else
                  {
                    v67 = 0;
                  }
                  GreCombineRgn(ghrgnInv2, ghrgnInv2, v42, 1LL);
                  if ( v67 )
                    GreDeleteObject(v73);
                  v40 = v74;
                }
                v41 = v40;
                v40 = (HRGN)*((_QWORD *)v40 + 11);
                v74 = v40;
              }
              while ( v40 );
              v44 = GreCombineRgn(ghrgnInv2, ghrgnInv2, a2, 1LL);
              v8 = 1LL;
              if ( v44 == 1 )
                return (unsigned int)v8;
            }
            goto LABEL_70;
          }
          return (unsigned int)v8;
        }
LABEL_51:
        v8 = 1LL;
        v36 = 1;
        goto LABEL_54;
      }
    }
    v36 = 0;
    goto LABEL_53;
  }
  v82 = (__int128)*a4;
  if ( *((_QWORD *)v7 + 11)
    && *((_QWORD *)v7 + 34)
    && (unsigned int)IsWindowDesktopComposed(v7)
    && (v11 = Win32AllocPool(8LL, 1919775573LL), (v12 = v11) != 0) )
  {
    v13 = v82;
    v14 = DWORD2(v82);
    *(_BYTE *)(v11 + 4) = 1;
    v15 = (float *)*((_QWORD *)v7 + 34);
    v16 = DWORD1(v82);
    v17 = 1.0 / *v15;
    v18 = 1.0 / v15[5];
    v19 = (int)v15[13];
    v20 = -(int)v15[12];
    *(_BYTE *)(v12 + 4) = 0;
    v21 = -v19;
    v76 = (int)(float)((float)(v20 + v13) * v17);
    v66 = (int)(float)((float)(v21 + v16) * v18);
    v78 = (int)(float)((float)(v20 + v14) * v17);
    v77 = (int)(float)((float)(v21 + HIDWORD(v82)) * v18);
    Win32FreePool(v12);
    v22 = v66;
    v23 = v77;
    v24 = v76;
    v25 = v78;
  }
  else
  {
    v23 = HIDWORD(v82);
    v25 = DWORD2(v82);
    v22 = DWORD1(v82);
    v24 = v82;
  }
  v26 = v81.left;
  if ( v81.left <= v24 )
    v26 = v24;
  v27 = v81.right;
  v81.left = v26;
  if ( v81.right >= v25 )
    v27 = v25;
  v81.right = v27;
  if ( v26 < v27 )
  {
    v28 = v81.top;
    v29 = v81.bottom;
    if ( v81.top <= v22 )
      v28 = v22;
    v81.top = v28;
    if ( v81.bottom >= v23 )
      v29 = v23;
    v81.bottom = v29;
    if ( v28 < v29 )
    {
      v30 = a2;
      v8 = 1LL;
      goto LABEL_32;
    }
  }
  v30 = a2;
  v31 = v5 | 0x2000;
  *(_QWORD *)&v81.left = 0LL;
  *(_QWORD *)&v81.right = 0LL;
  v8 = 1LL;
LABEL_28:
  if ( ((unsigned __int8)v8 & *((_BYTE *)v7 + 45)) != 0 || v30 != (HRGN)v8 )
    return (unsigned int)v8;
  LOWORD(v5) = v5 & 0xDFFF;
  v71 = v5;
  v70 = v31 & 0xFFFFDFFF;
LABEL_70:
  if ( (*((_BYTE *)v7 + 51) & 0x10) != 0 )
  {
    Prop = (HRGN)GetProp((__int64)v7, (unsigned __int16)atomLayer, v8);
    v72 = Prop;
    if ( Prop )
    {
      EmptyRgnPublic = *((_QWORD *)Prop + 5);
      if ( !EmptyRgnPublic )
      {
        EmptyRgnPublic = CreateEmptyRgnPublic(v47, v46);
        if ( !EmptyRgnPublic )
          EmptyRgnPublic = 1LL;
      }
      SetRectRgnIndirect(ghrgnInv2, &v81);
      if ( EmptyRgnPublic != 1 )
        GreCombineRgn(EmptyRgnPublic, EmptyRgnPublic, ghrgnInv2, 2LL);
      v49 = v79;
      v50 = v79;
      *((_QWORD *)v72 + 5) = EmptyRgnPublic;
      LOBYTE(v6) = (unsigned int)GreCombineRgn(v50, v49, ghrgnInv2, 4LL) != 1;
      return v6;
    }
  }
LABEL_78:
  if ( (*((_BYTE *)v7 + 55) & 2) == 0 )
    InternalInvalidate3(v7);
  if ( (*((_BYTE *)v7 + 46) & 0x40) != 0 )
    PixieHack(v7, &v81);
  v75 = (struct tagWND *)*((_QWORD *)v7 + 12);
  if ( v75 )
  {
    v51 = *((_BYTE *)v7 + 55);
    if ( (v51 & 0x20) == 0 && (v5 & 0x40) == 0 && ((v5 & 0x80u) != 0 || (v51 & 2) == 0) )
    {
      v73 = 0LL;
      if ( (v5 & 1) != 0 )
        v70 |= 0x404u;
      if ( (unsigned int)IntersectRect(&v83, &v81.left, (int *)v7 + 32)
        || (v52 = a2, (*((_BYTE *)v7 + 45) & 1) == 0) && a2 == (HRGN)1 )
      {
        v53 = v75;
        while ( 1 )
        {
          if ( (*((_BYTE *)v53 + 55) & 0x10) != 0 )
          {
            v54 = v75;
            if ( (*((_BYTE *)v75 + 51) & 0x20) != 0 || (*((_BYTE *)v75 + 50) & 8) != 0 )
            {
              v55 = (__int64)v73;
              v68 = 1;
              if ( v73 || (v55 = CreateEmptyRgnPublic(v52, 1LL), (v73 = (HRGN)v55) != 0LL) )
              {
                v56 = v79;
                if ( a2 != (HRGN)1 )
                  v56 = a2;
                GreCombineRgn(v55, v56, 0LL, 5LL);
              }
            }
            else
            {
              v68 = 0;
            }
            v72 = a2;
            v74 = v79;
            v76 = PhysicalToLogicalInPlaceRect(v54, &v83);
            v57 = PhysicalToLogicalInPlaceRgn(v54, &v72);
            v78 = PhysicalToLogicalInPlaceRgn(v75, &v74);
            v80 = v74;
            v77 = InternalInvalidate2(v75, v72, v74, &v83, v70);
            if ( v57 )
              GreDeleteObject(v72);
            v58 = v75;
            if ( v78 )
            {
              if ( (unsigned int)LogicalToPhysicalInPlaceRgn(v75, &v74) )
              {
                GreCombineRgn(v79, v74, 0LL, 5LL);
                GreDeleteObject(v74);
              }
              GreDeleteObject(v80);
            }
            if ( v76 )
              LogicalToPhysicalInPlaceRect(v58, &v83);
            v59 = v73;
            if ( v68 && v73 )
            {
              v60 = a2;
              if ( a2 == (HRGN)1 )
                v60 = v79;
              GreCombineRgn(v60, v73, 0LL, 5LL);
              v59 = v73;
            }
            if ( v77 )
            {
              LOWORD(v5) = v71;
            }
            else
            {
              LOWORD(v5) = v71;
              if ( !v68 )
              {
                if ( (v71 & 0x12) == 0 )
                {
                  if ( v59 )
                    GreDeleteObject(v59);
                  return 0LL;
                }
                LOWORD(v5) = v71 & 0xF3D2;
                v70 &= 0xFFFFD3D2;
                v71 &= 0xF3D2u;
              }
            }
          }
          v53 = (struct tagWND *)*((_QWORD *)v75 + 9);
          v75 = v53;
          if ( !v53 )
          {
            if ( v73 )
              GreDeleteObject(v73);
            break;
          }
        }
      }
    }
  }
  if ( (*((_BYTE *)v7 + 55) & 2) != 0 )
    InternalInvalidate3(v7);
  if ( (v5 & 0x2000) != 0
    && (*((_BYTE *)v7 + 48) & 0x20) == 0
    && (*((_BYTE *)v7 + 50) & 8) == 0
    && (*((_BYTE *)v7 + 55) & 4) != 0
    && ((v5 & 8) != 0
     || (v61 = *((_QWORD *)v7 + 11)) != 0
     && ((*(_BYTE *)(v61 + 55) & 2) != 0 || (GetAppCompatFlags(*((_QWORD *)v7 + 2)) & 0x4000) != 0)) )
  {
    SetRectRgnIndirect(ghrgnInv2, &v81);
    if ( (v5 & 0x8000) != 0 )
    {
      v62 = 0LL;
      do
      {
        v63 = (HRGN)*((_QWORD *)v7 + 25);
        if ( v63 )
        {
          v72 = (HRGN)*((_QWORD *)v7 + 25);
          if ( v62 )
          {
            v64 = LogicalToPhysicalInPlaceRgn(v62, &v72);
            v63 = v72;
            v69 = v64;
          }
          else
          {
            v69 = 0;
          }
          GreCombineRgn(ghrgnInv2, ghrgnInv2, *((_QWORD *)v7 + 25), 1LL);
          if ( v69 )
            GreDeleteObject(v63);
        }
        v62 = v7;
        v7 = (struct tagWND *)*((_QWORD *)v7 + 11);
      }
      while ( v7 );
    }
    if ( (unsigned int)GreCombineRgn(v79, v79, ghrgnInv2, 4LL) == 1 )
      return 0LL;
  }
  return 1LL;
}
