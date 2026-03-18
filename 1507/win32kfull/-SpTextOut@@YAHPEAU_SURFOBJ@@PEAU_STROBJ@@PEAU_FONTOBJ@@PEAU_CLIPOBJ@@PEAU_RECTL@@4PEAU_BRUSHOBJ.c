/*
 * XREFs of ?SpTextOut@@YAHPEAU_SURFOBJ@@PEAU_STROBJ@@PEAU_FONTOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@4PEAU_BRUSHOBJ@@5PEAU_POINTL@@K@Z @ 0x1C001E5A0
 * Callers:
 *     <none>
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C001A694 (W32GetThreadWin32Thread.c)
 *     ?bEnum@ENUMUNDERLAYS@@QEAAHPEAPEAU_SURFOBJ@@PEAU_POINTL@@PEAPEAU_CLIPOBJ@@@Z @ 0x1C00206C4 (-bEnum@ENUMUNDERLAYS@@QEAAHPEAPEAU_SURFOBJ@@PEAU_POINTL@@PEAPEAU_CLIPOBJ@@@Z.c)
 *     ??0ENUMUNDERLAYS@@QEAA@PEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@@Z @ 0x1C0020980 (--0ENUMUNDERLAYS@@QEAA@PEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@@Z.c)
 *     ?bAllowShareAccess@@YAHPEAU_SURFOBJ@@@Z @ 0x1C014CB38 (-bAllowShareAccess@@YAHPEAU_SURFOBJ@@@Z.c)
 *     __security_check_cookie @ 0x1C015BB90 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C015D150 (_guard_dispatch_icall_nop.c)
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
  ULONG cGlyphs; // esi
  struct _RECTL *p_rclBkGround; // r9
  struct _SURFOBJ *v18; // r14
  struct _SURFOBJ *v19; // rcx
  __int64 v20; // rax
  USHORT *p_iType; // rbx
  __int64 v22; // rdi
  CLIPOBJ *v23; // r13
  struct _RECTL *v24; // rax
  struct _POINTL v25; // rbx
  LONG y; // esi
  int v27; // ecx
  LONG v28; // ecx
  LONG x; // edx
  struct _STROBJ *v30; // r11
  LONG v31; // esi
  int v32; // r14d
  LONG v33; // ebx
  int v34; // ecx
  int v35; // edx
  int v36; // eax
  HDEV hdev; // rax
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
  _BYTE v71[912]; // [rsp+F0h] [rbp-10h] BYREF

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
  if ( (unsigned int)ENUMUNDERLAYS::bEnum((ENUMUNDERLAYS *)v71, &v55, &v60, &ppco) )
  {
    v10 = (int)v10;
    v67 = (int)v10;
    do
    {
      v18 = v55;
      v19 = v55;
      v11[1].cGlyphs = cGlyphs;
      v20 = SURFOBJ_TO_SURFACE_NOT_NULL(v19);
      if ( (*(_DWORD *)(v20 + 116) & 1) == 0 && (*(_DWORD *)(v20 + 112) & 0x800) != 0 && *(_WORD *)(v20 + 100) == 3 )
      {
        v57 = (BOOL (__stdcall *)(SURFOBJ *, STROBJ *, FONTOBJ *, CLIPOBJ *, RECTL *, RECTL *, BRUSHOBJ *, BRUSHOBJ *, POINTL *, MIX))RedirTextOut;
      }
      else
      {
        if ( v10 )
          goto LABEL_55;
        p_iType = &v18->iType;
        if ( v18->iType == 1 )
        {
          if ( (unsigned int)bAllowShareAccess(v18) )
          {
            if ( W32GetThreadWin32Thread((__int64)KeGetCurrentThread())
              && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 280)
              && (*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 104)
               || *(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 108))
              && (*(_DWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 280) + 20LL) & 8) != 0 )
            {
              ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
              v18 = v55;
              v57 = *(BOOL (__stdcall **)(SURFOBJ *, STROBJ *, FONTOBJ *, CLIPOBJ *, RECTL *, RECTL *, BRUSHOBJ *, BRUSHOBJ *, POINTL *, MIX))(*(_QWORD *)(ThreadWin32Thread + 280) + 96LL);
              goto LABEL_11;
            }
            v18 = v55;
          }
          if ( *p_iType == 1 && (unsigned int)bAllowShareAccess(v18) )
          {
            if ( W32GetThreadWin32Thread((__int64)KeGetCurrentThread())
              && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 280)
              && (*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 104)
               || *(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 108)) )
            {
              v18 = v55;
LABEL_55:
              v57 = EngTextOut;
              goto LABEL_11;
            }
            v18 = v55;
          }
        }
        if ( (*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(v18) + 112) & 8) == 0 )
          goto LABEL_55;
        v57 = (BOOL (__stdcall *)(SURFOBJ *, STROBJ *, FONTOBJ *, CLIPOBJ *, RECTL *, RECTL *, BRUSHOBJ *, BRUSHOBJ *, POINTL *, MIX))*((_QWORD *)v18->hdev + 171);
      }
LABEL_11:
      v22 = 0LL;
      if ( v18
        && ((*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(v18) + 112) & 0x4000) != 0
         || *(int *)(SURFOBJ_TO_SURFACE_NOT_NULL(v18) + 112) < 0)
        && (*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(v18) + 112) & 0x200) == 0
        && (v22 = SURFOBJ_TO_SURFACE_NOT_NULL(v18),
            GreLockDisplayDevice(*(_QWORD *)(v22 + 48)),
            *(_WORD *)(v22 + 100) == 1)
        && !EngUpdateDeviceSurface((SURFOBJ *)(v22 + 24), &ppco) )
      {
        GreUnlockDisplayDevice(*(_QWORD *)(v22 + 48));
      }
      else
      {
        v23 = ppco;
        v24 = a6;
        v25 = v60;
        y = v60.y;
        v61 = a6;
        if ( a6 )
        {
          v24 = (struct _RECTL *)v70;
          v27 = v60.x + a6->left;
          v61 = (struct _RECTL *)v70;
          v70[0] = v27;
          v70[2] = v60.x + a6->right;
          v70[1] = v60.y + a6->top;
          v70[3] = v60.y + a6->bottom;
        }
        v28 = v60.y;
        x = v60.x;
        if ( v60.x || v60.y )
        {
          v30 = v56;
          v56->rclBkGround.left += v60.x;
          v30->rclBkGround.right += v25.x;
          v30->rclBkGround.top += y;
          v30->rclBkGround.bottom += y;
          top = v30[1].rclBkGround.top;
          if ( (top & 0x100) != 0 )
          {
            x *= 16;
            v28 = 16 * y;
          }
          v41 = *(_QWORD *)&v30[1].rclBkGround.bottom;
          if ( (top & 0x1400) != 0 )
          {
            v42 = v30->cGlyphs;
            v43 = *(_DWORD **)&v30[4].rclBkGround.bottom;
            if ( v30->cGlyphs )
            {
              v44 = (_DWORD *)(v41 + 20);
              do
              {
                if ( *v43 == v30[5].cGlyphs )
                {
                  *(v44 - 1) += x;
                  --v42;
                  *v44 += v28;
                }
                v44 += 6;
                ++v43;
              }
              while ( v42 );
              v24 = v61;
            }
          }
          else if ( v30->ulCharInc )
          {
            *(_DWORD *)(v41 + 16) += x;
            *(_DWORD *)(v41 + 20) += v28;
          }
          else
          {
            v45 = v30->cGlyphs;
            if ( v30->cGlyphs )
            {
              v46 = (_DWORD *)(v41 + 20);
              do
              {
                *(v46 - 1) += x;
                *v46 += v28;
                v46 += 6;
                --v45;
              }
              while ( v45 );
            }
          }
        }
        else
        {
          v30 = v56;
        }
        if ( v23 && (v25.x || y) )
        {
          v23->rclBounds.left += v25.x;
          v23->rclBounds.right += v25.x;
          v23->rclBounds.top += y;
          v23->rclBounds.bottom += y;
          if ( v23->iDComplexity )
          {
            v63 = v25;
            RGNOBJ::bOffset((RGNOBJ *)&v23[2].rclBounds.top, &v63);
            v24 = v61;
            v30 = v56;
          }
        }
        v31 = -y;
        v32 = ((__int64 (__fastcall *)(struct _SURFOBJ *, struct _STROBJ *, struct _FONTOBJ *, CLIPOBJ *, struct _RECTL *, struct _RECTL *, struct _BRUSHOBJ *, struct _BRUSHOBJ *, struct _POINTL *, unsigned int))v57)(
                v18,
                v30,
                v65,
                v23,
                v64,
                v24,
                v69,
                v66,
                v68,
                a10);
        v33 = -v25.x;
        v34 = v31;
        v35 = v33;
        if ( v33 || v31 )
        {
          v47 = v56;
          v56->rclBkGround.left += v33;
          v47->rclBkGround.right += v33;
          v47->rclBkGround.top += v31;
          v47->rclBkGround.bottom += v31;
          v48 = v47[1].rclBkGround.top;
          if ( (v48 & 0x100) != 0 )
          {
            v35 = 16 * v33;
            v34 = 16 * v31;
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
                  *(v52 - 1) += v35;
                  --v50;
                  *v52 += v34;
                }
                v52 += 6;
                ++v51;
              }
              while ( v50 );
            }
          }
          else if ( v47->ulCharInc )
          {
            *(_DWORD *)(v49 + 16) += v35;
            *(_DWORD *)(v49 + 20) += v34;
          }
          else
          {
            v53 = v47->cGlyphs;
            if ( v47->cGlyphs )
            {
              v54 = (_DWORD *)(v49 + 20);
              do
              {
                *(v54 - 1) += v35;
                *v54 += v34;
                v54 += 6;
                --v53;
              }
              while ( v53 );
            }
          }
        }
        if ( v23 && (v33 || v31) )
        {
          v23->rclBounds.left += v33;
          v23->rclBounds.right += v33;
          v23->rclBounds.top += v31;
          v23->rclBounds.bottom += v31;
          if ( v23->iDComplexity )
          {
            v62.x = v33;
            v62.y = v31;
            RGNOBJ::bOffset((RGNOBJ *)&v23[2].rclBounds.top, &v62);
          }
        }
        v14 &= v32;
        if ( v22 )
          GreUnlockDisplayDevice(*(_QWORD *)(v22 + 48));
        cGlyphs = v58;
      }
      v36 = ENUMUNDERLAYS::bEnum((ENUMUNDERLAYS *)v71, &v55, &v60, &ppco);
      v11 = v56;
      v10 = v67;
    }
    while ( v36 );
  }
  return v14;
}
