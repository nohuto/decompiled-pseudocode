/*
 * XREFs of GrePtInSprite @ 0x1C003BB90
 * Callers:
 *     DCELayerHitTest @ 0x1C003C760 (DCELayerHitTest.c)
 *     LayerHitTest @ 0x1C00FE990 (LayerHitTest.c)
 * Callees:
 *     ??0SEMOBJSHARED@@QEAA@PEAUHSEMAPHORE__@@@Z @ 0x1C003BB38 (--0SEMOBJSHARED@@QEAA@PEAUHSEMAPHORE__@@@Z.c)
 *     ?vUnlock@SPRITERANGELOCK@@QEAAXXZ @ 0x1C003BB68 (-vUnlock@SPRITERANGELOCK@@QEAAXXZ.c)
 *     ??0DWMALTSPRITEREF@@QEAA@PEAUHWND__@@@Z @ 0x1C003BE80 (--0DWMALTSPRITEREF@@QEAA@PEAUHWND__@@@Z.c)
 *     EngAlphaBlend @ 0x1C003CDC0 (EngAlphaBlend.c)
 *     ??1DWMSPRITELOCK@@QEAA@XZ @ 0x1C004F98C (--1DWMSPRITELOCK@@QEAA@XZ.c)
 *     PtInRect @ 0x1C0066AB8 (PtInRect.c)
 *     ??0SEMOBJEXORSHARED@@QEAA@PEAUHSEMAPHORE__@@H@Z @ 0x1C0068580 (--0SEMOBJEXORSHARED@@QEAA@PEAUHSEMAPHORE__@@H@Z.c)
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C00E14B8 (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C01512D0 (__security_check_cookie.c)
 *     ?crSpGetShapePixel@@YAKPEAU_SURFOBJ@@HHH@Z @ 0x1C02605C4 (-crSpGetShapePixel@@YAKPEAU_SURFOBJ@@HHH@Z.c)
 *     ?GdiPtInSprite@@YAHPEAUHDEV__@@PEAUHWND__@@HH@Z @ 0x1C026C088 (-GdiPtInSprite@@YAHPEAUHDEV__@@PEAUHWND__@@HH@Z.c)
 */

__int64 __fastcall GrePtInSprite(HDEV a1, HWND a2, int a3, int a4, int a5, int a6)
{
  unsigned int v7; // edi
  int v11; // r15d
  __int64 v12; // rbx
  __int64 v13; // r14
  __int64 v14; // rcx
  unsigned int v15; // eax
  int v16; // esi
  __int64 v17; // rax
  int v18; // r13d
  int v19; // r12d
  struct _SURFOBJ *v20; // rdx
  HDEV v21; // r15
  RECTL si128; // xmm0
  _DWORD *v23; // rsi
  SURFOBJ *v24; // rdx
  SURFOBJ *v25; // rcx
  struct _SURFOBJ *v27; // rdx
  int v28; // [rsp+44h] [rbp-85h] BYREF
  HDEV v29; // [rsp+48h] [rbp-81h]
  _QWORD v30[2]; // [rsp+50h] [rbp-79h] BYREF
  _BYTE v31[8]; // [rsp+60h] [rbp-69h] BYREF
  _QWORD v32[2]; // [rsp+68h] [rbp-61h] BYREF
  _BYTE v33[8]; // [rsp+78h] [rbp-51h] BYREF
  BLENDOBJ pBlendObj; // [rsp+80h] [rbp-49h] BYREF
  XLATEOBJ *v35; // [rsp+88h] [rbp-41h]
  XLATEOBJ *v36; // [rsp+90h] [rbp-39h]
  XLATEOBJ *v37; // [rsp+98h] [rbp-31h]
  RECTL prclSrc; // [rsp+A0h] [rbp-29h] BYREF
  RECTL prclDest; // [rsp+B0h] [rbp-19h] BYREF

  v29 = a1;
  v7 = 0;
  v32[1] = a2;
  v11 = 1;
  v32[0] = ghsemGreLock;
  GreAcquireSemaphore(ghsemGreLock);
  if ( !a6 || !g_pDwmState )
  {
    v7 = GdiPtInSprite(a1, a2, a3, a4);
    goto LABEL_21;
  }
  SEMOBJSHARED::SEMOBJSHARED((SEMOBJSHARED *)v33, ghsemSprite);
  v28 = 0;
  SEMOBJEXORSHARED::SEMOBJEXORSHARED((SEMOBJEXORSHARED *)v31, ghsemDwmState, 1);
  DWMALTSPRITEREF::DWMALTSPRITEREF((DWMALTSPRITEREF *)&prclSrc, a2);
  v12 = *(_QWORD *)&prclSrc.left;
  if ( *(_QWORD *)&prclSrc.left )
  {
    v13 = *(_QWORD *)(*(_QWORD *)&prclSrc.left + 128LL);
    v14 = *(_QWORD *)&prclSrc.left + 56LL;
    *(_QWORD *)&prclSrc.left = __PAIR64__(a4, a3);
    v15 = PtInRect(v14, __PAIR64__(a4, a3));
    v16 = *(_DWORD *)(v12 + 72);
    v7 = v15;
    if ( (v16 & 0xFFFFFFFB) == 0 || v16 == 2 && !*(_BYTE *)(v12 + 79) && *(_BYTE *)(v12 + 78) == 0xFF || !v15 )
      goto LABEL_19;
    v17 = SURFOBJ_TO_SURFACE_NOT_NULL(*(_QWORD *)(v13 + 192));
    v18 = a3 - *(_DWORD *)(v12 + 56);
    v19 = a4 - *(_DWORD *)(v12 + 60);
    *(_QWORD *)&prclSrc.left = v17;
    if ( (v16 & 2) != 0 )
    {
      if ( v16 != 3 || *(_BYTE *)(v12 + 79) )
        v11 = 0;
      v20 = *(struct _SURFOBJ **)(v13 + 192);
      v30[0] = 0LL;
      SURFREFVIEW::bMap((SURFREFVIEW *)v30, v20);
      if ( v30[0] && *(_DWORD *)(*(_QWORD *)&prclSrc.left + 96LL) == 6 )
      {
        if ( v11 )
          v7 &= -(((*(_DWORD *)(v12 + 80) ^ crSpGetShapePixel(*(struct _SURFOBJ **)(v13 + 192), v18, v19, a5)) & 0xFFFFFF) != 0);
        if ( v7 )
        {
          v21 = v29;
          si128 = (RECTL)_mm_load_si128(&_xmm);
          v23 = *(_DWORD **)(*((_QWORD *)v29 + 141) + 56LL);
          *v23 = 0;
          v24 = *(SURFOBJ **)(v13 + 192);
          v25 = (SURFOBJ *)*((_QWORD *)v21 + 141);
          prclSrc.right = v18 + 1;
          prclSrc.bottom = v19 + 1;
          pBlendObj = *(BLENDOBJ *)(v12 + 76);
          prclDest = si128;
          prclSrc.left = v18;
          prclSrc.top = v19;
          v35 = xloIdent;
          v36 = xloIdent;
          v37 = xloIdent;
          EngAlphaBlend(v25, v24, 0LL, xloIdent, &prclDest, &prclSrc, &pBlendObj);
          if ( !*v23 )
          {
            *v23 = -1;
            EngAlphaBlend(
              *((SURFOBJ **)v21 + 141),
              *(SURFOBJ **)(v13 + 192),
              0LL,
              xloIdent,
              &prclDest,
              &prclSrc,
              &pBlendObj);
            v7 = *v23 != -1;
          }
        }
        goto LABEL_18;
      }
    }
    else
    {
      if ( v16 != 1 )
        goto LABEL_19;
      v27 = *(struct _SURFOBJ **)(v13 + 192);
      v30[0] = 0LL;
      SURFREFVIEW::bMap((SURFREFVIEW *)v30, v27);
      if ( v30[0]
        && *(_DWORD *)(*(_QWORD *)&prclSrc.left + 96LL) == 6
        && ((*(_DWORD *)(v12 + 80) ^ crSpGetShapePixel(*(struct _SURFOBJ **)(v13 + 192), v18, v19, a5)) & 0xFFFFFF) != 0 )
      {
LABEL_18:
        SURFREFVIEW::bUnMap((SURFREFVIEW *)v30);
LABEL_19:
        DEC_SHARE_REF_CNT(v12);
        goto LABEL_20;
      }
    }
    v7 = 0;
    goto LABEL_18;
  }
LABEL_20:
  SPRITERANGELOCK::vUnlock((SPRITERANGELOCK *)v31);
  DWMSPRITELOCK::~DWMSPRITELOCK((DWMSPRITELOCK *)&v28);
  SPRITERANGELOCK::vUnlock((SPRITERANGELOCK *)v33);
LABEL_21:
  SEMOBJ::vUnlock((SEMOBJ *)v32);
  return v7;
}
