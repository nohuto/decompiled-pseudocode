/*
 * XREFs of ?InternalInvalidate2@@YAHPEAUtagWND@@PEAUHRGN__@@1PEAUtagRECT@@K@Z @ 0x1C005A510
 * Callers:
 *     xxxRedrawWindow @ 0x1C0059F20 (xxxRedrawWindow.c)
 *     ?InternalInvalidate2@@YAHPEAUtagWND@@PEAUHRGN__@@1PEAUtagRECT@@K@Z @ 0x1C005A510 (-InternalInvalidate2@@YAHPEAUtagWND@@PEAUHRGN__@@1PEAUtagRECT@@K@Z.c)
 *     ?ValidateParents@@YAHPEAUtagWND@@H@Z @ 0x1C005E984 (-ValidateParents@@YAHPEAUtagWND@@H@Z.c)
 *     xxxInternalInvalidate @ 0x1C005EB10 (xxxInternalInvalidate.c)
 * Callees:
 *     ?IsRectEmptyInl@@YAHPEBUtagRECT@@@Z @ 0x1C0035534 (-IsRectEmptyInl@@YAHPEBUtagRECT@@@Z.c)
 *     ?InternalInvalidate2@@YAHPEAUtagWND@@PEAUHRGN__@@1PEAUtagRECT@@K@Z @ 0x1C005A510 (-InternalInvalidate2@@YAHPEAUtagWND@@PEAUHRGN__@@1PEAUtagRECT@@K@Z.c)
 *     InternalInvalidate3 @ 0x1C005AD8C (InternalInvalidate3.c)
 *     PhysicalToLogicalInPlaceRgn @ 0x1C005B290 (PhysicalToLogicalInPlaceRgn.c)
 *     PhysicalToLogicalInPlaceRect @ 0x1C005C39C (PhysicalToLogicalInPlaceRect.c)
 *     IntersectRect @ 0x1C005D934 (IntersectRect.c)
 *     _GetProp @ 0x1C007AFEC (_GetProp.c)
 *     GetAppCompatFlags @ 0x1C01140E0 (GetAppCompatFlags.c)
 *     LogicalToPhysicalInPlaceRgn @ 0x1C011DB00 (LogicalToPhysicalInPlaceRgn.c)
 *     __security_check_cookie @ 0x1C0158CD0 (__security_check_cookie.c)
 *     LogicalToPhysicalInPlaceRect @ 0x1C01DC14C (LogicalToPhysicalInPlaceRect.c)
 *     ?PixieHack@@YAXPEAUtagWND@@PEAUtagRECT@@@Z @ 0x1C020E370 (-PixieHack@@YAXPEAUtagWND@@PEAUtagRECT@@@Z.c)
 */

__int64 __fastcall InternalInvalidate2(struct tagWND *a1, HRGN a2, HRGN a3, struct tagRECT *a4, unsigned int a5)
{
  unsigned int v5; // ebx
  unsigned int v6; // edi
  HRGN v7; // rsi
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
  __int64 v21; // r8
  int v22; // edx
  LONG v23; // edx
  LONG v24; // r8d
  LONG v25; // eax
  LONG v26; // r9d
  LONG v27; // ecx
  LONG v28; // eax
  LONG v29; // ecx
  LONG v30; // eax
  HRGN v31; // r10
  int v32; // edx
  LONG left; // ecx
  LONG right; // eax
  LONG top; // ecx
  LONG bottom; // eax
  int v37; // eax
  int v38; // eax
  int v39; // eax
  __int64 AppCompatFlags; // rax
  HRGN v41; // rax
  HRGN v42; // rcx
  HRGN v43; // rdx
  int v44; // eax
  int v45; // eax
  HRGN Prop; // rax
  __int64 v47; // rdx
  __int64 v48; // rcx
  __int64 EmptyRgnPublic; // rbx
  HRGN v50; // rdx
  HRGN v51; // rcx
  char v52; // al
  HRGN v53; // rcx
  struct tagWND *v54; // rax
  struct tagWND *v55; // rbx
  __int64 v56; // rax
  HRGN v57; // rdx
  int v58; // ebx
  struct tagWND *v59; // rbx
  HRGN v60; // rax
  HRGN v61; // rcx
  __int64 v62; // rax
  HRGN v63; // rcx
  HRGN v64; // rbx
  int v65; // eax
  int v66; // [rsp+30h] [rbp-61h]
  int v67; // [rsp+30h] [rbp-61h]
  int v68; // [rsp+30h] [rbp-61h]
  int v69; // [rsp+30h] [rbp-61h]
  unsigned int v71; // [rsp+40h] [rbp-51h]
  __int16 v72; // [rsp+44h] [rbp-4Dh]
  HRGN v73; // [rsp+48h] [rbp-49h] BYREF
  HRGN v74; // [rsp+50h] [rbp-41h]
  HRGN v75; // [rsp+58h] [rbp-39h] BYREF
  struct tagWND *v76; // [rsp+60h] [rbp-31h]
  int v77; // [rsp+68h] [rbp-29h]
  unsigned int v78; // [rsp+6Ch] [rbp-25h]
  int v79; // [rsp+70h] [rbp-21h]
  HRGN v80; // [rsp+78h] [rbp-19h]
  HRGN v81; // [rsp+80h] [rbp-11h]
  struct tagRECT v82; // [rsp+88h] [rbp-9h] BYREF
  __int128 v83; // [rsp+98h] [rbp+7h] BYREF
  struct tagRECT v84; // [rsp+A8h] [rbp+17h] BYREF

  v5 = a5;
  v6 = 0;
  v80 = a3;
  v7 = (HRGN)a1;
  if ( *((_QWORD *)a1 + 25) )
    v5 = a5 | 0x8000;
  v72 = v5;
  LODWORD(v8) = 1;
  v71 = v5 | 0x2000;
  v82 = (struct tagRECT)*((_OWORD *)a1 + 7);
  if ( (v5 & 1) == 0 )
    goto LABEL_78;
  v9 = *((_BYTE *)a1 + 50) & 8;
  if ( v9 && (v5 & 0x10000) == 0 && ((_DWORD)v7[72] & 2) == 0 )
    return (unsigned int)v8;
  *((_DWORD *)v7 + 72) &= ~2u;
  if ( (*((_BYTE *)v7 + 51) & 0x20) != 0 || v9 )
  {
    if ( IsRectEmptyInl(&v82) )
      goto LABEL_28;
LABEL_32:
    if ( (unsigned __int64)v31 <= v8 )
      goto LABEL_70;
    if ( (unsigned int)GreRectInRegion(v31, &v82) )
    {
      if ( (unsigned int)GreGetRgnBox(a2, &v83) == 2 )
      {
        left = v83;
        right = DWORD2(v83);
        if ( (int)v83 <= v82.left )
          left = v82.left;
        LODWORD(v83) = left;
        if ( SDWORD2(v83) >= v82.right )
          right = v82.right;
        DWORD2(v83) = right;
        if ( left >= right )
          goto LABEL_47;
        top = DWORD1(v83);
        bottom = HIDWORD(v83);
        if ( SDWORD1(v83) <= v82.top )
          top = v82.top;
        DWORD1(v83) = top;
        if ( SHIDWORD(v83) >= v82.bottom )
          bottom = v82.bottom;
        HIDWORD(v83) = bottom;
        if ( top >= bottom )
        {
LABEL_47:
          v37 = 0;
          v83 = 0uLL;
          goto LABEL_53;
        }
        goto LABEL_45;
      }
      SetRectRgnIndirect(ghrgnInv2, &v82);
      v38 = GreCombineRgn(ghrgnInv2, ghrgnInv2, a2, 1LL);
      if ( v38 != 1 )
      {
        if ( v38 != 2 )
          goto LABEL_51;
        GreGetRgnBox(ghrgnInv2, &v83);
LABEL_45:
        if ( *(_OWORD *)&v82 == v83 )
        {
          v37 = 2;
LABEL_53:
          v8 = 1LL;
LABEL_54:
          if ( v37 )
          {
            v39 = v37 - 1;
            if ( v39 )
            {
              if ( v39 == 1 )
              {
                AppCompatFlags = GetAppCompatFlags(*((_QWORD *)v7 + 2));
                v8 = 1LL;
                if ( (AppCompatFlags & 0x10000) == 0 )
                  a2 = (HRGN)1;
              }
            }
            else if ( (v5 & 0x8000) != 0 )
            {
              SetRectRgnIndirect(ghrgnInv2, &v82);
              v41 = v7;
              v42 = 0LL;
              v75 = v7;
              do
              {
                v43 = (HRGN)*((_QWORD *)v41 + 25);
                v74 = v43;
                if ( v43 )
                {
                  v73 = v43;
                  if ( v42 )
                  {
                    v44 = PhysicalToLogicalInPlaceRgn(v42, &v73);
                    v43 = v73;
                    v74 = v73;
                    v67 = v44;
                  }
                  else
                  {
                    v67 = 0;
                  }
                  GreCombineRgn(ghrgnInv2, ghrgnInv2, v43, 1LL);
                  if ( v67 )
                    GreDeleteObject(v74);
                  v41 = v75;
                }
                v42 = v41;
                v41 = (HRGN)*((_QWORD *)v41 + 11);
                v75 = v41;
              }
              while ( v41 );
              v45 = GreCombineRgn(ghrgnInv2, ghrgnInv2, a2, 1LL);
              v8 = 1LL;
              if ( v45 == 1 )
                return (unsigned int)v8;
            }
            goto LABEL_70;
          }
          return (unsigned int)v8;
        }
LABEL_51:
        v8 = 1LL;
        v37 = 1;
        goto LABEL_54;
      }
    }
    v37 = 0;
    goto LABEL_53;
  }
  v83 = (__int128)*a4;
  if ( *((_QWORD *)v7 + 11)
    && *((_QWORD *)v7 + 34)
    && (unsigned int)IsWindowDesktopComposed(v7)
    && (v11 = Win32AllocPool(8LL, 1919775573LL), (v12 = v11) != 0) )
  {
    v13 = v83;
    v14 = DWORD2(v83);
    *(_BYTE *)(v11 + 4) = 1;
    v15 = (float *)*((_QWORD *)v7 + 34);
    v16 = DWORD1(v83);
    v17 = 1.0 / *v15;
    v18 = 1.0 / v15[5];
    v19 = (int)v15[13];
    v20 = -(int)v15[12];
    *(_BYTE *)(v12 + 4) = 0;
    v21 = (unsigned int)(v20 + v13);
    v22 = -v19;
    v78 = (int)(float)((float)(int)v21 * v17);
    v66 = (int)(float)((float)(v22 + v16) * v18);
    v79 = (int)(float)((float)(v20 + v14) * v17);
    v77 = (int)(float)((float)(v22 + HIDWORD(v83)) * v18);
    Win32FreePool(v12, v78, v21);
    v23 = v66;
    v24 = v77;
    v25 = v78;
    v26 = v79;
  }
  else
  {
    v24 = HIDWORD(v83);
    v26 = DWORD2(v83);
    v23 = DWORD1(v83);
    v25 = v83;
  }
  v27 = v82.left;
  if ( v82.left <= v25 )
    v27 = v25;
  v28 = v82.right;
  v82.left = v27;
  if ( v82.right >= v26 )
    v28 = v26;
  v82.right = v28;
  if ( v27 < v28 )
  {
    v29 = v82.top;
    v30 = v82.bottom;
    if ( v82.top <= v23 )
      v29 = v23;
    v82.top = v29;
    if ( v82.bottom >= v24 )
      v30 = v24;
    v82.bottom = v30;
    if ( v29 < v30 )
    {
      v31 = a2;
      v8 = 1LL;
      goto LABEL_32;
    }
  }
  v31 = a2;
  v32 = v5 | 0x2000;
  *(_QWORD *)&v82.left = 0LL;
  *(_QWORD *)&v82.right = 0LL;
  v8 = 1LL;
LABEL_28:
  if ( ((unsigned __int8)v8 & *((_BYTE *)v7 + 45)) != 0 || v31 != (HRGN)v8 )
    return (unsigned int)v8;
  LOWORD(v5) = v5 & 0xDFFF;
  v72 = v5;
  v71 = v32 & 0xFFFFDFFF;
LABEL_70:
  if ( (*((_BYTE *)v7 + 51) & 0x10) != 0 )
  {
    Prop = (HRGN)GetProp(v7, (unsigned __int16)atomLayer, v8);
    v73 = Prop;
    if ( Prop )
    {
      EmptyRgnPublic = *((_QWORD *)Prop + 5);
      if ( !EmptyRgnPublic )
      {
        EmptyRgnPublic = CreateEmptyRgnPublic(v48, v47);
        if ( !EmptyRgnPublic )
          EmptyRgnPublic = 1LL;
      }
      SetRectRgnIndirect(ghrgnInv2, &v82);
      if ( EmptyRgnPublic != 1 )
        GreCombineRgn(EmptyRgnPublic, EmptyRgnPublic, ghrgnInv2, 2LL);
      v50 = v80;
      v51 = v80;
      *((_QWORD *)v73 + 5) = EmptyRgnPublic;
      LOBYTE(v6) = (unsigned int)GreCombineRgn(v51, v50, ghrgnInv2, 4LL) != 1;
      return v6;
    }
  }
LABEL_78:
  if ( (*((_BYTE *)v7 + 55) & 2) == 0 )
    InternalInvalidate3((struct tagWND *)v7);
  if ( (*((_BYTE *)v7 + 46) & 0x40) != 0 )
    PixieHack((struct tagWND *)v7, &v82);
  v76 = (struct tagWND *)*((_QWORD *)v7 + 12);
  if ( v76 )
  {
    v52 = *((_BYTE *)v7 + 55);
    if ( (v52 & 0x20) == 0 && (v5 & 0x40) == 0 && ((v5 & 0x80u) != 0 || (v52 & 2) == 0) )
    {
      v74 = 0LL;
      if ( (v5 & 1) != 0 )
        v71 |= 0x404u;
      if ( (unsigned int)IntersectRect(&v84, &v82, v7 + 32)
        || (v53 = a2, (*((_BYTE *)v7 + 45) & 1) == 0) && a2 == (HRGN)1 )
      {
        v54 = v76;
        while ( 1 )
        {
          if ( (*((_BYTE *)v54 + 55) & 0x10) != 0 )
          {
            v55 = v76;
            if ( (*((_BYTE *)v76 + 51) & 0x20) != 0 || (*((_BYTE *)v76 + 50) & 8) != 0 )
            {
              v56 = (__int64)v74;
              v68 = 1;
              if ( v74 || (v56 = CreateEmptyRgnPublic(v53, 1LL), (v74 = (HRGN)v56) != 0LL) )
              {
                v57 = v80;
                if ( a2 != (HRGN)1 )
                  v57 = a2;
                GreCombineRgn(v56, v57, 0LL, 5LL);
              }
            }
            else
            {
              v68 = 0;
            }
            v73 = a2;
            v75 = v80;
            v78 = PhysicalToLogicalInPlaceRect(v55, &v84);
            v58 = PhysicalToLogicalInPlaceRgn(v55, &v73);
            v79 = PhysicalToLogicalInPlaceRgn(v76, &v75);
            v81 = v75;
            v77 = InternalInvalidate2(v76, v73, v75, &v84, v71);
            if ( v58 )
              GreDeleteObject(v73);
            v59 = v76;
            if ( v79 )
            {
              if ( (unsigned int)LogicalToPhysicalInPlaceRgn(v76, &v75) )
              {
                GreCombineRgn(v80, v75, 0LL, 5LL);
                GreDeleteObject(v75);
              }
              GreDeleteObject(v81);
            }
            if ( v78 )
              LogicalToPhysicalInPlaceRect(v59, &v84);
            v60 = v74;
            if ( v68 && v74 )
            {
              v61 = a2;
              if ( a2 == (HRGN)1 )
                v61 = v80;
              GreCombineRgn(v61, v74, 0LL, 5LL);
              v60 = v74;
            }
            if ( v77 )
            {
              LOWORD(v5) = v72;
            }
            else
            {
              LOWORD(v5) = v72;
              if ( !v68 )
              {
                if ( (v72 & 0x12) == 0 )
                {
                  if ( v60 )
                    GreDeleteObject(v60);
                  return 0LL;
                }
                LOWORD(v5) = v72 & 0xF3D2;
                v71 &= 0xFFFFD3D2;
                v72 &= 0xF3D2u;
              }
            }
          }
          v54 = (struct tagWND *)*((_QWORD *)v76 + 9);
          v76 = v54;
          if ( !v54 )
          {
            if ( v74 )
              GreDeleteObject(v74);
            break;
          }
        }
      }
    }
  }
  if ( (*((_BYTE *)v7 + 55) & 2) != 0 )
    InternalInvalidate3((struct tagWND *)v7);
  if ( (v5 & 0x2000) != 0
    && ((_BYTE)v7[12] & 0x20) == 0
    && (*((_BYTE *)v7 + 50) & 8) == 0
    && (*((_BYTE *)v7 + 55) & 4) != 0
    && ((v5 & 8) != 0
     || (v62 = *((_QWORD *)v7 + 11)) != 0
     && ((*(_BYTE *)(v62 + 55) & 2) != 0 || (GetAppCompatFlags(*((_QWORD *)v7 + 2)) & 0x4000) != 0)) )
  {
    SetRectRgnIndirect(ghrgnInv2, &v82);
    if ( (v5 & 0x8000) != 0 )
    {
      v63 = 0LL;
      do
      {
        v64 = (HRGN)*((_QWORD *)v7 + 25);
        if ( v64 )
        {
          v73 = (HRGN)*((_QWORD *)v7 + 25);
          if ( v63 )
          {
            v65 = LogicalToPhysicalInPlaceRgn(v63, &v73);
            v64 = v73;
            v69 = v65;
          }
          else
          {
            v69 = 0;
          }
          GreCombineRgn(ghrgnInv2, ghrgnInv2, *((_QWORD *)v7 + 25), 1LL);
          if ( v69 )
            GreDeleteObject(v64);
        }
        v63 = v7;
        v7 = (HRGN)*((_QWORD *)v7 + 11);
      }
      while ( v7 );
    }
    if ( (unsigned int)GreCombineRgn(v80, v80, ghrgnInv2, 4LL) == 1 )
      return 0LL;
  }
  return 1LL;
}
