/*
 * XREFs of GrePtInSprite @ 0x14008CE2C
 * Callers:
 *     ?LayerHitTest@@YA_NPEAUtagWND@@UtagPOINT@@@Z @ 0x14008C220 (-LayerHitTest@@YA_NPEAUtagWND@@UtagPOINT@@@Z.c)
 *     ?DCEIsWindowHit@@YAHPEAUtagWND@@PEAUtagPOINT@@PEBU_SUBPIXELS@@@Z @ 0x14008C37C (-DCEIsWindowHit@@YAHPEAUtagWND@@PEAUtagPOINT@@PEBU_SUBPIXELS@@@Z.c)
 *     ?ClassicIsWindowHit@@YAHPEAUtagWND@@UtagPOINT@@@Z @ 0x14008C5C0 (-ClassicIsWindowHit@@YAHPEAUtagWND@@UtagPOINT@@@Z.c)
 *     ?DCELayerHitTest@@YA_NPEAUtagWND@@UtagPOINT@@@Z @ 0x14008C6E8 (-DCELayerHitTest@@YA_NPEAUtagWND@@UtagPOINT@@@Z.c)
 *     ?DCEChildTreeSpeedHitTest@@YAPEAUtagWND@@PEAU1@UtagPOINT@@PEAU2@PEBU_SUBPIXELS@@@Z @ 0x14008CC5C (-DCEChildTreeSpeedHitTest@@YAPEAUtagWND@@PEAU1@UtagPOINT@@PEAU2@PEBU_SUBPIXELS@@@Z.c)
 * Callees:
 *     ??1SFMALTLOGICALSURFACEREF@@QEAA@XZ @ 0x1400158B4 (--1SFMALTLOGICALSURFACEREF@@QEAA@XZ.c)
 *     ??0?$UnexpectedThreadTerminationHandler@VSURFREF@@@@QEAA@XZ @ 0x14001811C (--0-$UnexpectedThreadTerminationHandler@VSURFREF@@@@QEAA@XZ.c)
 *     ??0?$SEMOBJSHARED@$05@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x14001B768 (--0-$SEMOBJSHARED@$05@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     IsDwmActive @ 0x14001C660 (IsDwmActive.c)
 *     ??$GreReleaseSemaphoreCommon@$05P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x14001C78C (--$GreReleaseSemaphoreCommon@$05P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     ??0DWMALTSPRITEREF@@QEAA@PEAUHWND__@@@Z @ 0x140041070 (--0DWMALTSPRITEREF@@QEAA@PEAUHWND__@@@Z.c)
 *     ??$GrepAcquireLockValidate@$01@@YAXXZ @ 0x14006BCF0 (--$GrepAcquireLockValidate@$01@@YAXXZ.c)
 *     ??0ENTER_DWM_CRIT_SPECIAL@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@PEAUHDEV__@@_N@Z @ 0x140074718 (--0ENTER_DWM_CRIT_SPECIAL@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@PEAUHDEV__@@_N@Z.c)
 *     PtInRect @ 0x14008C1B0 (PtInRect.c)
 *     ??$GreReleaseSemaphoreCommon@$01P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x1400A6D10 (--$GreReleaseSemaphoreCommon@$01P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     ??1ENTER_DWM_CRIT_COMMON@@QEAA@XZ @ 0x1400A6E04 (--1ENTER_DWM_CRIT_COMMON@@QEAA@XZ.c)
 *     EngAlphaBlend @ 0x1400E4850 (EngAlphaBlend.c)
 *     ??0SURFREF@@QEAA@PEAVSURFACE@@@Z @ 0x1401C3510 (--0SURFREF@@QEAA@PEAVSURFACE@@@Z.c)
 *     ?crSpGetShapePixel@@YAKPEAU_SURFOBJ@@HHH@Z @ 0x14028272C (-crSpGetShapePixel@@YAKPEAU_SURFOBJ@@HHH@Z.c)
 *     ?GdiPtInSprite@@YAHPEAUHDEV__@@PEAUHWND__@@HH@Z @ 0x1403133D8 (-GdiPtInSprite@@YAHPEAUHDEV__@@PEAUHWND__@@HH@Z.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 */

__int64 __fastcall GrePtInSprite(Gre::Base *a1, HWND a2, int a3, int a4, int a5, int a6)
{
  unsigned int v6; // ebx
  char v9; // si
  int v10; // r13d
  struct Gre::Base::SESSION_GLOBALS *v11; // rdi
  HSEMAPHORE v12; // r12
  Gre::Base *v13; // rcx
  Gre::Base *v14; // rcx
  __int64 v15; // rcx
  __int64 v16; // rbx
  __int64 v17; // rdx
  int v18; // r13d
  __int64 v19; // rdi
  Gre::Base *v20; // rcx
  RECTL si128; // xmm0
  __int64 v22; // r13
  _DWORD *v23; // rdi
  XLATEOBJ *v24; // rsi
  Gre::Base *v25; // rcx
  struct Gre::Base::SESSION_GLOBALS *v26; // rax
  __int64 v28; // [rsp+48h] [rbp-B8h] BYREF
  __int128 v29; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v30; // [rsp+60h] [rbp-A0h]
  HWND v31; // [rsp+70h] [rbp-90h]
  HDEV v32; // [rsp+78h] [rbp-88h]
  BLENDOBJ pBlendObj; // [rsp+80h] [rbp-80h] BYREF
  int v34; // [rsp+84h] [rbp-7Ch]
  XLATEOBJ *v35; // [rsp+88h] [rbp-78h]
  XLATEOBJ *v36; // [rsp+90h] [rbp-70h]
  XLATEOBJ *v37; // [rsp+98h] [rbp-68h]
  __int64 v38; // [rsp+A0h] [rbp-60h]
  __int64 v39; // [rsp+A8h] [rbp-58h] BYREF
  _OWORD v40[2]; // [rsp+B0h] [rbp-50h] BYREF
  __int64 v41; // [rsp+D0h] [rbp-30h]
  _QWORD v42[4]; // [rsp+D8h] [rbp-28h] BYREF
  RECTL prclSrc; // [rsp+F8h] [rbp-8h] BYREF
  RECTL prclDest; // [rsp+108h] [rbp+8h] BYREF

  v6 = 0;
  v31 = a2;
  v32 = (HDEV)a1;
  v9 = 1;
  v10 = 1;
  v11 = Gre::Base::Globals(a1);
  v12 = (HSEMAPHORE)(*(_QWORD *)v11 + 1144LL);
  GreAcquireSemaphoreInternal(v12);
  GrepAcquireLockValidate<2>();
  if ( a6 && IsDwmActive(v13) )
  {
    SEMOBJSHARED<6>::SEMOBJSHARED<6>(&v39, v11);
    ENTER_DWM_CRIT_SPECIAL::ENTER_DWM_CRIT_SPECIAL((ENTER_DWM_CRIT_SPECIAL *)v42, v11, v32, 1);
    if ( !IsDwmActive(v14) )
      goto LABEL_36;
    DWMALTSPRITEREF::DWMALTSPRITEREF((DWMALTSPRITEREF *)&v28, v31);
    if ( !v28 )
    {
      v10 = 0;
      goto LABEL_36;
    }
    UnexpectedThreadTerminationHandler<SURFREF>::UnexpectedThreadTerminationHandler<SURFREF>(v40);
    v41 = 0LL;
    GreAcquirePushLockShared((struct W32_PUSH_LOCK *)(v28 + 88));
    v15 = v28;
    v16 = v28;
    v17 = *(_QWORD *)(*(_QWORD *)(v28 + 144) + 184LL);
    if ( v17 )
    {
      SURFREF::SURFREF((SURFREF *)&pBlendObj, (struct SURFACE *)(v17 - 24));
      v41 = v38;
      v38 = 0LL;
      SFMALTLOGICALSURFACEREF::~SFMALTLOGICALSURFACEREF((SFMALTLOGICALSURFACEREF *)&pBlendObj);
      v15 = v28;
    }
    v18 = *(_DWORD *)(v16 + 80);
    v30 = *(_QWORD *)(v16 + 72);
    v29 = *(_OWORD *)(v16 + 56);
    GreReleasePushLockShared((struct W32_PUSH_LOCK *)(v15 + 88));
    *(_QWORD *)&prclSrc.left = __PAIR64__(a4, a3);
    v6 = PtInRect(&v29, __PAIR64__(a4, a3));
    if ( (v30 & 0xFFFFFFFB) != 0 && ((_DWORD)v30 != 2 || HIBYTE(v30) || !BYTE6(v30)) && v6 )
    {
      a3 -= v29;
      a4 -= DWORD1(v29);
      v19 = v41;
      if ( (v30 & 2) != 0 )
      {
        if ( v41 )
        {
          if ( (_DWORD)v30 != 3 || HIBYTE(v30) )
            v9 = 0;
          *(_QWORD *)&v29 = 0LL;
          SURFREFVIEW::bMap((SURFREFVIEW *)&v29, (struct _SURFOBJ *)(v41 + 24));
          if ( (_QWORD)v29 && *(_DWORD *)(v19 + 96) == 6 )
          {
            if ( v9 )
              v6 &= -(((v18 ^ crSpGetShapePixel((struct _SURFOBJ *)(v41 + 24), a3, a4, a5)) & 0xFFFFFF) != 0);
            if ( v6 )
            {
              si128 = (RECTL)_mm_load_si128((const __m128i *)&_xmm);
              v22 = v42[0];
              v23 = *(_DWORD **)(*(_QWORD *)(v42[0] + 1112LL) + 56LL);
              *v23 = 0;
              prclSrc.right = a3 + 1;
              prclSrc.bottom = a4 + 1;
              prclDest = si128;
              prclSrc.left = a3;
              prclSrc.top = a4;
              v34 = 0;
              v24 = (XLATEOBJ *)((char *)Gre::Base::Globals(v20) + 4664);
              pBlendObj = (BLENDOBJ)HIDWORD(v30);
              v35 = v24;
              v36 = v24;
              v37 = v24;
              EngAlphaBlend(*(SURFOBJ **)(v22 + 1112), (SURFOBJ *)(v41 + 24), 0LL, v24, &prclDest, &prclSrc, &pBlendObj);
              if ( !*v23 )
              {
                *v23 = -1;
                EngAlphaBlend(
                  *(SURFOBJ **)(v22 + 1112),
                  (SURFOBJ *)(v41 + 24),
                  0LL,
                  v24,
                  &prclDest,
                  &prclSrc,
                  &pBlendObj);
                v6 = *v23 != -1;
              }
            }
            goto LABEL_32;
          }
          goto LABEL_31;
        }
        goto LABEL_20;
      }
      if ( (_DWORD)v30 == 1 )
      {
        if ( v41 )
        {
          *(_QWORD *)&v29 = 0LL;
          SURFREFVIEW::bMap((SURFREFVIEW *)&v29, (struct _SURFOBJ *)(v41 + 24));
          if ( (_QWORD)v29 && *(_DWORD *)(v19 + 96) == 6 )
          {
            v6 &= -(((v18 ^ crSpGetShapePixel((struct _SURFOBJ *)(v41 + 24), a3, a4, a5)) & 0xFFFFFF) != 0);
LABEL_32:
            SURFREFVIEW::bUnMap((SURFREFVIEW *)&v29);
            goto LABEL_33;
          }
LABEL_31:
          v6 = 0;
          goto LABEL_32;
        }
LABEL_20:
        v6 = 0;
      }
    }
LABEL_33:
    SFMALTLOGICALSURFACEREF::~SFMALTLOGICALSURFACEREF((SFMALTLOGICALSURFACEREF *)v40);
    if ( v28 )
    {
      v26 = Gre::Base::Globals(v25);
      DEC_SHARE_REF_CNT(v26, v28);
    }
    v10 = 0;
LABEL_36:
    ENTER_DWM_CRIT_COMMON::~ENTER_DWM_CRIT_COMMON((ENTER_DWM_CRIT_COMMON *)v42);
    GreReleaseSemaphoreCommon<6,void (*)(HSEMAPHORE__ *)>(
      (__int64 (__fastcall *)(__int64))GreReleaseSemaphoreSharedInternal,
      v39);
    if ( !v10 )
      goto LABEL_38;
  }
  v6 = GdiPtInSprite(v32, v31, a3, a4);
LABEL_38:
  if ( v12 )
    GreReleaseSemaphoreCommon<2,void (*)(HSEMAPHORE__ *)>(GreReleaseSemaphoreExclusiveInternal, v12);
  return v6;
}
