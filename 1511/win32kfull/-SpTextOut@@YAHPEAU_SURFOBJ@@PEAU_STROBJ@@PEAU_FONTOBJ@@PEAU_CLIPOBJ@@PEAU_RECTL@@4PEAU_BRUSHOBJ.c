/*
 * XREFs of ?SpTextOut@@YAHPEAU_SURFOBJ@@PEAU_STROBJ@@PEAU_FONTOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@4PEAU_BRUSHOBJ@@5PEAU_POINTL@@K@Z @ 0x1C0031850
 * Callers:
 *     <none>
 * Callees:
 *     ?bEnum@ENUMUNDERLAYS@@QEAAHPEAPEAU_SURFOBJ@@PEAU_POINTL@@PEAPEAU_CLIPOBJ@@@Z @ 0x1C00305D0 (-bEnum@ENUMUNDERLAYS@@QEAAHPEAPEAU_SURFOBJ@@PEAU_POINTL@@PEAPEAU_CLIPOBJ@@@Z.c)
 *     ??0ENUMUNDERLAYS@@QEAA@PEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@@Z @ 0x1C0030880 (--0ENUMUNDERLAYS@@QEAA@PEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@@Z.c)
 *     W32GetThreadWin32Thread @ 0x1C005592C (W32GetThreadWin32Thread.c)
 *     ?bAllowShareAccess@@YAHPEAU_SURFOBJ@@@Z @ 0x1C00EAAE8 (-bAllowShareAccess@@YAHPEAU_SURFOBJ@@@Z.c)
 *     __security_check_cookie @ 0x1C01512D0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0152950 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall SpTextOut(
        struct _SURFOBJ *a1,
        struct _STROBJ *a2,
        struct _FONTOBJ *a3,
        struct _CLIPOBJ *a4,
        struct _RECTL *a5,
        struct _RECTL *a6,
        struct _BRUSHOBJ *a7,
        struct _BRUSHOBJ *a8,
        struct _POINTL *a9,
        unsigned int a10)
{
  __int64 v10; // rbx
  struct _STROBJ *v11; // rdi
  unsigned int v14; // r12d
  FLONG flFontType; // ecx
  HDEV hdev; // rax
  ULONG cGlyphs; // esi
  struct _RECTL *p_rclBkGround; // r9
  struct _SURFOBJ *v19; // r14
  struct _SURFOBJ *v20; // rcx
  __int64 v21; // rax
  USHORT *p_iType; // rbx
  __int64 v23; // rdi
  CLIPOBJ *v24; // r13
  struct _RECTL *v25; // rax
  struct _POINTL v26; // rbx
  LONG y; // esi
  int v28; // ecx
  LONG v29; // ecx
  LONG x; // edx
  struct _STROBJ *v31; // r11
  LONG v32; // esi
  int v33; // r14d
  LONG v34; // ebx
  int v35; // ecx
  int v36; // edx
  int v37; // eax
  __int64 ThreadWin32Thread; // rax
  LONG top; // r9d
  __int64 v41; // r8
  ULONG v42; // r9d
  _DWORD *v43; // r10
  _DWORD *v44; // r8
  ULONG v45; // r9d
  _DWORD *v46; // r8
  struct _STROBJ *v47; // r11
  LONG v48; // r8d
  __int64 v49; // rax
  ULONG v50; // r9d
  _DWORD *v51; // r10
  _DWORD *v52; // r8
  ULONG v53; // r8d
  _DWORD *v54; // rax
  struct _SURFOBJ *v55; // [rsp+60h] [rbp-A0h] BYREF
  struct _STROBJ *v56; // [rsp+68h] [rbp-98h]
  BOOL (__stdcall *v57)(SURFOBJ *, STROBJ *, FONTOBJ *, CLIPOBJ *, RECTL *, RECTL *, BRUSHOBJ *, BRUSHOBJ *, POINTL *, MIX); // [rsp+70h] [rbp-90h]
  ULONG v58; // [rsp+78h] [rbp-88h]
  CLIPOBJ *ppco; // [rsp+80h] [rbp-80h] BYREF
  struct _POINTL v60; // [rsp+88h] [rbp-78h] BYREF
  struct _RECTL *v61; // [rsp+90h] [rbp-70h]
  struct _POINTL v62; // [rsp+98h] [rbp-68h] BYREF
  struct _POINTL v63; // [rsp+A0h] [rbp-60h] BYREF
  struct _RECTL *v64; // [rsp+A8h] [rbp-58h]
  struct _FONTOBJ *v65; // [rsp+B0h] [rbp-50h]
  struct _BRUSHOBJ *v66; // [rsp+B8h] [rbp-48h]
  __int64 v67; // [rsp+C0h] [rbp-40h]
  struct _POINTL *v68; // [rsp+C8h] [rbp-38h]
  struct _BRUSHOBJ *v69; // [rsp+D0h] [rbp-30h]
  _DWORD v70[6]; // [rsp+D8h] [rbp-28h] BYREF
  __int64 *v71[114]; // [rsp+F0h] [rbp-10h] BYREF

  LODWORD(v10) = 0;
  v55 = a1;
  v11 = a2;
  v56 = a2;
  v65 = a3;
  v14 = 1;
  v64 = a5;
  v69 = a7;
  v66 = a8;
  v68 = a9;
  flFontType = a3->flFontType;
  ppco = a4;
  if ( (flFontType & 0x10000) != 0 )
  {
    hdev = a1->hdev;
    if ( (flFontType & 0x10000000) != 0 )
      LODWORD(v10) = ((_DWORD)hdev[538] & 0x4000) == 0;
    else
      LODWORD(v10) = ((_DWORD)hdev[462] & 0x1000000) == 0;
  }
  cGlyphs = v11[1].cGlyphs;
  v58 = cGlyphs;
  if ( a6 )
    p_rclBkGround = a6;
  else
    p_rclBkGround = &v11->rclBkGround;
  ENUMUNDERLAYS::ENUMUNDERLAYS((ENUMUNDERLAYS *)v71, a1, a4, p_rclBkGround);
  if ( (unsigned int)ENUMUNDERLAYS::bEnum(v71, &v55, &v60, &ppco) )
  {
    v10 = (int)v10;
    v67 = (int)v10;
    do
    {
      v19 = v55;
      v20 = v55;
      v11[1].cGlyphs = cGlyphs;
      v21 = SURFOBJ_TO_SURFACE_NOT_NULL(v20);
      if ( (*(_DWORD *)(v21 + 116) & 1) == 0 && (*(_DWORD *)(v21 + 112) & 0x800) != 0 && *(_WORD *)(v21 + 100) == 3 )
      {
        v57 = (BOOL (__stdcall *)(SURFOBJ *, STROBJ *, FONTOBJ *, CLIPOBJ *, RECTL *, RECTL *, BRUSHOBJ *, BRUSHOBJ *, POINTL *, MIX))RedirTextOut;
        goto LABEL_13;
      }
      if ( v10 )
        goto LABEL_37;
      p_iType = &v19->iType;
      if ( v19->iType == 1 )
      {
        if ( (unsigned int)bAllowShareAccess(v19) )
        {
          if ( W32GetThreadWin32Thread(KeGetCurrentThread())
            && *(_QWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 280)
            && (*(_DWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 104)
             || *(_DWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 108))
            && (*(_DWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 280) + 20LL) & 8) != 0 )
          {
            ThreadWin32Thread = W32GetThreadWin32Thread(KeGetCurrentThread());
            v19 = v55;
            v57 = *(BOOL (__stdcall **)(SURFOBJ *, STROBJ *, FONTOBJ *, CLIPOBJ *, RECTL *, RECTL *, BRUSHOBJ *, BRUSHOBJ *, POINTL *, MIX))(*(_QWORD *)(ThreadWin32Thread + 280) + 96LL);
            goto LABEL_13;
          }
          v19 = v55;
        }
        if ( *p_iType == 1 && (unsigned int)bAllowShareAccess(v19) )
        {
          if ( W32GetThreadWin32Thread(KeGetCurrentThread())
            && *(_QWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 280)
            && (*(_DWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 104)
             || *(_DWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 108)) )
          {
            v19 = v55;
LABEL_37:
            v57 = EngTextOut;
            goto LABEL_13;
          }
          v19 = v55;
        }
      }
      if ( (*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(v19) + 112) & 8) == 0 )
        goto LABEL_37;
      v57 = (BOOL (__stdcall *)(SURFOBJ *, STROBJ *, FONTOBJ *, CLIPOBJ *, RECTL *, RECTL *, BRUSHOBJ *, BRUSHOBJ *, POINTL *, MIX))*((_QWORD *)v19->hdev + 171);
LABEL_13:
      v23 = 0LL;
      if ( v19
        && ((*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(v19) + 112) & 0x4000) != 0
         || *(int *)(SURFOBJ_TO_SURFACE_NOT_NULL(v19) + 112) < 0)
        && (*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(v19) + 112) & 0x200) == 0
        && (v23 = SURFOBJ_TO_SURFACE_NOT_NULL(v19),
            GreLockDisplayDevice(*(_QWORD *)(v23 + 48)),
            *(_WORD *)(v23 + 100) == 1)
        && !EngUpdateDeviceSurface((SURFOBJ *)(v23 + 24), &ppco) )
      {
        GreUnlockDisplayDevice(*(_QWORD *)(v23 + 48));
      }
      else
      {
        v24 = ppco;
        v25 = a6;
        v26 = v60;
        y = v60.y;
        v61 = a6;
        if ( a6 )
        {
          v25 = (struct _RECTL *)v70;
          v28 = v60.x + a6->left;
          v61 = (struct _RECTL *)v70;
          v70[0] = v28;
          v70[2] = v60.x + a6->right;
          v70[1] = v60.y + a6->top;
          v70[3] = v60.y + a6->bottom;
        }
        v29 = v60.y;
        x = v60.x;
        if ( v60.x || v60.y )
        {
          v31 = v56;
          v56->rclBkGround.left += v60.x;
          v31->rclBkGround.right += v26.x;
          v31->rclBkGround.top += y;
          v31->rclBkGround.bottom += y;
          top = v31[1].rclBkGround.top;
          if ( (top & 0x100) != 0 )
          {
            x *= 16;
            v29 = 16 * y;
          }
          v41 = *(_QWORD *)&v31[1].rclBkGround.bottom;
          if ( (top & 0x1400) != 0 )
          {
            v42 = v31->cGlyphs;
            v43 = *(_DWORD **)&v31[4].rclBkGround.bottom;
            if ( v31->cGlyphs )
            {
              v44 = (_DWORD *)(v41 + 20);
              do
              {
                if ( *v43 == v31[5].cGlyphs )
                {
                  *(v44 - 1) += x;
                  --v42;
                  *v44 += v29;
                }
                v44 += 6;
                ++v43;
              }
              while ( v42 );
              v25 = v61;
            }
          }
          else if ( v31->ulCharInc )
          {
            *(_DWORD *)(v41 + 16) += x;
            *(_DWORD *)(v41 + 20) += v29;
          }
          else
          {
            v45 = v31->cGlyphs;
            if ( v31->cGlyphs )
            {
              v46 = (_DWORD *)(v41 + 20);
              do
              {
                *(v46 - 1) += x;
                *v46 += v29;
                v46 += 6;
                --v45;
              }
              while ( v45 );
            }
          }
        }
        else
        {
          v31 = v56;
        }
        if ( v24 && (v26.x || y) )
        {
          v24->rclBounds.left += v26.x;
          v24->rclBounds.right += v26.x;
          v24->rclBounds.top += y;
          v24->rclBounds.bottom += y;
          if ( v24->iDComplexity )
          {
            v63 = v26;
            RGNOBJ::bOffset((RGNOBJ *)&v24[2].rclBounds.top, &v63);
            v25 = v61;
            v31 = v56;
          }
        }
        v32 = -y;
        v33 = ((__int64 (__fastcall *)(struct _SURFOBJ *, struct _STROBJ *, struct _FONTOBJ *, CLIPOBJ *, struct _RECTL *, struct _RECTL *, struct _BRUSHOBJ *, struct _BRUSHOBJ *, struct _POINTL *, unsigned int))v57)(
                v19,
                v31,
                v65,
                v24,
                v64,
                v25,
                v69,
                v66,
                v68,
                a10);
        v34 = -v26.x;
        v35 = v32;
        v36 = v34;
        if ( v34 || v32 )
        {
          v47 = v56;
          v56->rclBkGround.left += v34;
          v47->rclBkGround.right += v34;
          v47->rclBkGround.top += v32;
          v47->rclBkGround.bottom += v32;
          v48 = v47[1].rclBkGround.top;
          if ( (v48 & 0x100) != 0 )
          {
            v36 = 16 * v34;
            v35 = 16 * v32;
          }
          v49 = *(_QWORD *)&v47[1].rclBkGround.bottom;
          if ( (v48 & 0x1400) != 0 )
          {
            v50 = v47->cGlyphs;
            v51 = *(_DWORD **)&v47[4].rclBkGround.bottom;
            if ( v47->cGlyphs )
            {
              v52 = (_DWORD *)(v49 + 20);
              do
              {
                if ( *v51 == v47[5].cGlyphs )
                {
                  *(v52 - 1) += v36;
                  --v50;
                  *v52 += v35;
                }
                v52 += 6;
                ++v51;
              }
              while ( v50 );
            }
          }
          else if ( v47->ulCharInc )
          {
            *(_DWORD *)(v49 + 16) += v36;
            *(_DWORD *)(v49 + 20) += v35;
          }
          else
          {
            v53 = v47->cGlyphs;
            if ( v47->cGlyphs )
            {
              v54 = (_DWORD *)(v49 + 20);
              do
              {
                *(v54 - 1) += v36;
                *v54 += v35;
                v54 += 6;
                --v53;
              }
              while ( v53 );
            }
          }
        }
        if ( v24 && (v34 || v32) )
        {
          v24->rclBounds.left += v34;
          v24->rclBounds.right += v34;
          v24->rclBounds.top += v32;
          v24->rclBounds.bottom += v32;
          if ( v24->iDComplexity )
          {
            v62.x = v34;
            v62.y = v32;
            RGNOBJ::bOffset((RGNOBJ *)&v24[2].rclBounds.top, &v62);
          }
        }
        v14 &= v33;
        if ( v23 )
          GreUnlockDisplayDevice(*(_QWORD *)(v23 + 48));
        cGlyphs = v58;
      }
      v37 = ENUMUNDERLAYS::bEnum(v71, &v55, &v60, &ppco);
      v11 = v56;
      v10 = v67;
    }
    while ( v37 );
  }
  return v14;
}
