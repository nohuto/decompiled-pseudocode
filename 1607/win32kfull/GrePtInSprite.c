/*
 * XREFs of GrePtInSprite @ 0x1C0052EA4
 * Callers:
 *     DCELayerHitTest @ 0x1C010E858 (DCELayerHitTest.c)
 *     LayerHitTest @ 0x1C0121450 (LayerHitTest.c)
 * Callees:
 *     EngAlphaBlend @ 0x1C003F5B0 (EngAlphaBlend.c)
 *     ??1DWMSPRITELOCK@@QEAA@XZ @ 0x1C0053FC0 (--1DWMSPRITELOCK@@QEAA@XZ.c)
 *     ??0SEMOBJEXORSHARED@@QEAA@PEAUHSEMAPHORE__@@H@Z @ 0x1C0055BC0 (--0SEMOBJEXORSHARED@@QEAA@PEAUHSEMAPHORE__@@H@Z.c)
 *     ?vUnlock@SPRITERANGELOCK@@QEAAXXZ @ 0x1C0055BFC (-vUnlock@SPRITERANGELOCK@@QEAAXXZ.c)
 *     PtInRect @ 0x1C0059530 (PtInRect.c)
 *     ??0SEMOBJSHARED@@QEAA@PEAUHSEMAPHORE__@@@Z @ 0x1C005DCD4 (--0SEMOBJSHARED@@QEAA@PEAUHSEMAPHORE__@@@Z.c)
 *     ??0DWMALTSPRITEREF@@QEAA@PEAUHWND__@@@Z @ 0x1C00D84E4 (--0DWMALTSPRITEREF@@QEAA@PEAUHWND__@@@Z.c)
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C00FDC0C (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C0158CD0 (__security_check_cookie.c)
 *     ?crSpGetShapePixel@@YAKPEAU_SURFOBJ@@HHH@Z @ 0x1C025DEB4 (-crSpGetShapePixel@@YAKPEAU_SURFOBJ@@HHH@Z.c)
 *     ?GdiPtInSprite@@YAHPEAUHDEV__@@PEAUHWND__@@HH@Z @ 0x1C026A540 (-GdiPtInSprite@@YAHPEAUHDEV__@@PEAUHWND__@@HH@Z.c)
 */

__int64 __fastcall GrePtInSprite(HDEV a1, HWND a2, int a3, int a4, int a5, int a6)
{
  unsigned int v10; // edi
  int v11; // r15d
  __int64 v12; // rbx
  __int64 v13; // r14
  __int64 v14; // rcx
  unsigned int v15; // eax
  unsigned __int8 v16; // r8
  int v17; // esi
  __int64 v18; // rax
  int v19; // r13d
  int v20; // r12d
  struct _SURFOBJ *v21; // rdx
  HDEV v22; // r15
  RECTL si128; // xmm0
  _DWORD *v24; // rsi
  SURFOBJ *v25; // rdx
  SURFOBJ *v26; // rcx
  struct _SURFOBJ *v28; // rdx
  int v29; // [rsp+44h] [rbp-85h] BYREF
  HDEV v30; // [rsp+48h] [rbp-81h]
  _QWORD v31[3]; // [rsp+50h] [rbp-79h] BYREF
  _BYTE v32[8]; // [rsp+68h] [rbp-61h] BYREF
  _BYTE v33[8]; // [rsp+70h] [rbp-59h] BYREF
  __int64 v34; // [rsp+78h] [rbp-51h] BYREF
  BLENDOBJ pBlendObj; // [rsp+80h] [rbp-49h] BYREF
  XLATEOBJ *v36; // [rsp+88h] [rbp-41h]
  XLATEOBJ *v37; // [rsp+90h] [rbp-39h]
  XLATEOBJ *v38; // [rsp+98h] [rbp-31h]
  RECTL prclSrc; // [rsp+A0h] [rbp-29h] BYREF
  RECTL prclDest; // [rsp+B0h] [rbp-19h] BYREF

  v30 = a1;
  v31[2] = a2;
  v10 = 0;
  v11 = 1;
  v34 = ghsemGreLock;
  GreAcquireSemaphore(ghsemGreLock);
  if ( !a6 || !g_pDwmState )
  {
    v10 = GdiPtInSprite(a1, a2, a3, a4);
    goto LABEL_20;
  }
  SEMOBJSHARED::SEMOBJSHARED((SEMOBJSHARED *)v33, ghsemSprite);
  v29 = 0;
  SEMOBJEXORSHARED::SEMOBJEXORSHARED((SEMOBJEXORSHARED *)v32, ghsemDwmState, 1);
  DWMALTSPRITEREF::DWMALTSPRITEREF((DWMALTSPRITEREF *)&prclSrc, a2);
  v12 = *(_QWORD *)&prclSrc.left;
  if ( *(_QWORD *)&prclSrc.left )
  {
    v13 = *(_QWORD *)(*(_QWORD *)&prclSrc.left + 128LL);
    v14 = *(_QWORD *)&prclSrc.left + 56LL;
    *(_QWORD *)&prclSrc.left = __PAIR64__(a4, a3);
    v15 = PtInRect(v14, __PAIR64__(a4, a3));
    v17 = *(_DWORD *)(v12 + 72);
    v10 = v15;
    if ( (v17 & 0xFFFFFFFB) == 0 || v17 == 2 && *(_BYTE *)(v12 + 79) == v16 && *(_BYTE *)(v12 + 78) > v16 || !v15 )
      goto LABEL_18;
    v18 = SURFOBJ_TO_SURFACE_NOT_NULL(*(_QWORD *)(v13 + 192));
    v19 = a3 - *(_DWORD *)(v12 + 56);
    v20 = a4 - *(_DWORD *)(v12 + 60);
    *(_QWORD *)&prclSrc.left = v18;
    if ( (v17 & 2) != 0 )
    {
      if ( v17 != 3 || *(_BYTE *)(v12 + 79) )
        v11 = 0;
      v21 = *(struct _SURFOBJ **)(v13 + 192);
      v31[0] = 0LL;
      SURFREFVIEW::bMap((SURFREFVIEW *)v31, v21);
      if ( v31[0] && *(_DWORD *)(*(_QWORD *)&prclSrc.left + 96LL) == 6 )
      {
        if ( v11
          && (*(_DWORD *)(v12 + 80) & 0xFFFFFF) == (crSpGetShapePixel(*(struct _SURFOBJ **)(v13 + 192), v19, v20, a5) & 0xFFFFFF) )
        {
          v10 = 0;
        }
        if ( v10 )
        {
          v22 = v30;
          si128 = (RECTL)_mm_load_si128((const __m128i *)&_xmm);
          v24 = *(_DWORD **)(*((_QWORD *)v30 + 141) + 56LL);
          *v24 = 0;
          v25 = *(SURFOBJ **)(v13 + 192);
          v26 = (SURFOBJ *)*((_QWORD *)v22 + 141);
          prclSrc.right = v19 + 1;
          prclSrc.bottom = v20 + 1;
          pBlendObj = *(BLENDOBJ *)(v12 + 76);
          prclDest = si128;
          prclSrc.left = v19;
          prclSrc.top = v20;
          v36 = xloIdent;
          v37 = xloIdent;
          v38 = xloIdent;
          EngAlphaBlend(v26, v25, 0LL, xloIdent, &prclDest, &prclSrc, &pBlendObj);
          if ( !*v24 )
          {
            *v24 = -1;
            EngAlphaBlend(
              *((SURFOBJ **)v22 + 141),
              *(SURFOBJ **)(v13 + 192),
              0LL,
              xloIdent,
              &prclDest,
              &prclSrc,
              &pBlendObj);
            v10 = *v24 != -1;
          }
        }
        goto LABEL_17;
      }
    }
    else
    {
      if ( v17 != 1 )
        goto LABEL_18;
      v28 = *(struct _SURFOBJ **)(v13 + 192);
      v31[0] = 0LL;
      SURFREFVIEW::bMap((SURFREFVIEW *)v31, v28);
      if ( v31[0]
        && *(_DWORD *)(*(_QWORD *)&prclSrc.left + 96LL) == 6
        && (*(_DWORD *)(v12 + 80) & 0xFFFFFF) != (crSpGetShapePixel(*(struct _SURFOBJ **)(v13 + 192), v19, v20, a5) & 0xFFFFFF) )
      {
LABEL_17:
        SURFREFVIEW::bUnMap((SURFREFVIEW *)v31);
LABEL_18:
        DEC_SHARE_REF_CNT(v12);
        goto LABEL_19;
      }
    }
    v10 = 0;
    goto LABEL_17;
  }
LABEL_19:
  SPRITERANGELOCK::vUnlock((SPRITERANGELOCK *)v32);
  DWMSPRITELOCK::~DWMSPRITELOCK((DWMSPRITELOCK *)&v29);
  SPRITERANGELOCK::vUnlock((SPRITERANGELOCK *)v33);
LABEL_20:
  SEMOBJ::vUnlock((SEMOBJ *)&v34);
  return v10;
}
