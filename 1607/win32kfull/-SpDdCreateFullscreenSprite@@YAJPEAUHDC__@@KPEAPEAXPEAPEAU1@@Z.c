/*
 * XREFs of ?SpDdCreateFullscreenSprite@@YAJPEAUHDC__@@KPEAPEAXPEAPEAU1@@Z @ 0x1C025D0AC
 * Callers:
 *     NtGdiDdCreateFullscreenSprite @ 0x1C02613D0 (NtGdiDdCreateFullscreenSprite.c)
 * Callees:
 *     ?bLddmDriver@PDEVOBJ@@QEAAHXZ @ 0x1C002907C (-bLddmDriver@PDEVOBJ@@QEAAHXZ.c)
 *     ??1DEVLOCKOBJ@@QEAA@XZ @ 0x1C0048970 (--1DEVLOCKOBJ@@QEAA@XZ.c)
 *     ??0DEVLOCKOBJ@@QEAA@AEAVPDEVOBJ@@@Z @ 0x1C0048D90 (--0DEVLOCKOBJ@@QEAA@AEAVPDEVOBJ@@@Z.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C004A058 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C004A0A0 (--1DCOBJ@@QEAA@XZ.c)
 *     GreUpdateSprite @ 0x1C00503E0 (GreUpdateSprite.c)
 *     ?bSpDwmCreateLogicalSurface@@YAHPEAUHDEV__@@PEAVDWMSPRITE@@PEAVSFMLOGICALSURFACE@@PEAUtagSIZE@@PEAPEAV3@@Z @ 0x1C00534D8 (-bSpDwmCreateLogicalSurface@@YAHPEAUHDEV__@@PEAVDWMSPRITE@@PEAVSFMLOGICALSURFACE@@PEAUtagSIZE@@P.c)
 *     ?bNeedRenderHint@@YAHAEAVPDEVOBJ@@@Z @ 0x1C0053714 (-bNeedRenderHint@@YAHAEAVPDEVOBJ@@@Z.c)
 *     ??0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C0053F54 (--0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ??1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C0053F90 (--1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ??1DWMSPRITELOCK@@QEAA@XZ @ 0x1C0053FC0 (--1DWMSPRITELOCK@@QEAA@XZ.c)
 *     ??0DWMSPRITELOCK@@QEAA@AEAVPDEVOBJ@@HH@Z @ 0x1C0053FF8 (--0DWMSPRITELOCK@@QEAA@AEAVPDEVOBJ@@HH@Z.c)
 *     ??1DWMSPRITEREF@@QEAA@XZ @ 0x1C006308C (--1DWMSPRITEREF@@QEAA@XZ.c)
 *     ??0DWMSPRITEREF@@QEAA@PEAUHWND__@@PEAX@Z @ 0x1C00630A4 (--0DWMSPRITEREF@@QEAA@PEAUHWND__@@PEAX@Z.c)
 *     GreCreateSprite @ 0x1C0065AC4 (GreCreateSprite.c)
 *     GreDeleteSprite @ 0x1C00660AC (GreDeleteSprite.c)
 *     ?vSpDwmUpdateSpriteVisibility@@YAXPEAVDWMSPRITE@@_N@Z @ 0x1C00D79D0 (-vSpDwmUpdateSpriteVisibility@@YAXPEAVDWMSPRITE@@_N@Z.c)
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C00FDC0C (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C0158CD0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C015A020 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall SpDdCreateFullscreenSprite(HDC a1, int a2, void **a3, HDC *a4)
{
  HDC *v4; // r13
  void **v5; // r14
  int v6; // ebx
  HSPRITE v7; // rsi
  __int64 DisplayDC; // r12
  __int64 v10; // rdi
  HDEV HDEV; // r15
  struct PDEVOBJ *v12; // rdx
  int v13; // eax
  HSPRITE v14; // rax
  struct DWMSPRITE *v15; // r13
  struct SFMLOGICALSURFACE *v16; // r14
  __int64 v17; // rax
  LONG v18; // edi
  struct _SURFOBJ *v19; // rdx
  unsigned int v20; // edi
  __int64 v21; // rax
  DYNAMICMODECHANGESHARELOCK *v22; // rcx
  struct _LUID *v23; // [rsp+70h] [rbp-1C8h]
  _BYTE v24[4]; // [rsp+80h] [rbp-1B8h] BYREF
  _BYTE v25[4]; // [rsp+84h] [rbp-1B4h] BYREF
  HDC *v26; // [rsp+88h] [rbp-1B0h]
  __int64 v27; // [rsp+90h] [rbp-1A8h] BYREF
  LONG v28; // [rsp+98h] [rbp-1A0h]
  int v29; // [rsp+9Ch] [rbp-19Ch]
  void **v30; // [rsp+A0h] [rbp-198h]
  HSPRITE v31; // [rsp+A8h] [rbp-190h]
  HDC v32; // [rsp+B0h] [rbp-188h]
  struct tagSIZE v33; // [rsp+B8h] [rbp-180h] BYREF
  HDEV v34; // [rsp+C0h] [rbp-178h] BYREF
  __int64 v35; // [rsp+C8h] [rbp-170h] BYREF
  struct SFMLOGICALSURFACE *v36; // [rsp+D0h] [rbp-168h] BYREF
  _QWORD v37[2]; // [rsp+D8h] [rbp-160h] BYREF
  int v38; // [rsp+E8h] [rbp-150h]
  __int64 v39; // [rsp+F0h] [rbp-148h]
  __int64 v40; // [rsp+F8h] [rbp-140h]
  _BYTE v41[32]; // [rsp+100h] [rbp-138h] BYREF
  struct DWMSPRITE *v42; // [rsp+120h] [rbp-118h]
  _QWORD v43[7]; // [rsp+128h] [rbp-110h] BYREF
  _BYTE v44[112]; // [rsp+160h] [rbp-D8h] BYREF
  struct tagRECT v45; // [rsp+1D0h] [rbp-68h] BYREF
  __int64 v46; // [rsp+1E0h] [rbp-58h]
  LONG v47; // [rsp+1E8h] [rbp-50h]
  LONG v48; // [rsp+1ECh] [rbp-4Ch]

  v4 = a4;
  v26 = a4;
  v5 = a3;
  v30 = a3;
  v29 = a2;
  v6 = -1073741811;
  DCOBJ::DCOBJ((DCOBJ *)v43, a1);
  v7 = 0LL;
  v31 = 0LL;
  DisplayDC = 0LL;
  v32 = 0LL;
  if ( !v43[0] )
    goto LABEL_2;
  v10 = *(_QWORD *)(v43[0] + 48LL);
  DYNAMICMODECHANGESHARELOCK::DYNAMICMODECHANGESHARELOCK((DYNAMICMODECHANGESHARELOCK *)v24);
  v35 = ghsemGreLock;
  GreAcquireSemaphore(ghsemGreLock);
  HDEV = (HDEV)UserGetHDEV();
  v34 = HDEV;
  DWMSPRITELOCK::DWMSPRITELOCK((DWMSPRITELOCK *)v25, v12, 0LL, 0LL);
  GreAcquireSemaphore(ghsemDwmState);
  EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemDwmState", ghsemDwmState, 7LL);
  DEVLOCKOBJ::DEVLOCKOBJ((DEVLOCKOBJ *)v44, (struct PDEVOBJ *)&v34);
  if ( HDEV && ((_DWORD)HDEV[14] & 0x400) == 0 )
  {
    v6 = -1073741801;
    if ( !g_pDwmState )
    {
      v6 = -1073741637;
LABEL_23:
      if ( v7 )
      {
        GreDeleteSprite(HDEV, 0LL, v7, 1);
        v31 = 0LL;
      }
      if ( DisplayDC )
      {
        GreDeleteDC(DisplayDC);
        v32 = 0LL;
      }
      goto LABEL_27;
    }
    v27 = v10;
    if ( v10 )
    {
      v13 = *(_DWORD *)(v10 + 56);
      if ( (v13 & 0x400) == 0 && (v13 & 0x20000) == 0 )
      {
        if ( (unsigned int)PDEVOBJ::bLddmDriver((PDEVOBJ *)&v27) )
        {
          v45.left = *(_DWORD *)(v10 + 2608);
          v45.top = *(_DWORD *)(v10 + 2612);
          v45.right = v45.left + *(_DWORD *)(*(_QWORD *)(v10 + 2616) + 172LL);
          v45.bottom = v45.top + *(_DWORD *)(*(_QWORD *)(v10 + 2616) + 176LL);
          v14 = GreCreateSprite(HDEV, 0LL, &v45, 0LL, 1, 0, 0, 0, 0);
          v7 = v14;
          v31 = v14;
          if ( v14 )
          {
            DWMSPRITEREF::DWMSPRITEREF((DWMSPRITEREF *)v41, 0LL, v14);
            v15 = v42;
            if ( v42 )
            {
              v36 = (struct SFMLOGICALSURFACE *)*((_QWORD *)v42 + 16);
              v16 = v36;
              vSpDwmUpdateSpriteVisibility(v42, 0);
              v17 = *(_QWORD *)(v10 + 2616);
              v18 = *(_DWORD *)(v17 + 172);
              v33.cx = v18;
              v28 = *(_DWORD *)(v17 + 176);
              v33.cy = v28;
              if ( (unsigned int)bSpDwmCreateLogicalSurface(HDEV, v15, v16, &v33, &v36) )
              {
                v19 = (struct _SURFOBJ *)*((_QWORD *)v16 + 24);
                v37[0] = 0LL;
                SURFREFVIEW::bMap((SURFREFVIEW *)v37, v19);
                v46 = 0LL;
                v47 = v18;
                v48 = v28;
                v27 = 0LL;
                v38 = 0;
                v39 = 0LL;
                v40 = 0LL;
                if ( !(unsigned int)bNeedRenderHint((struct PDEVOBJ *)&v34) )
                  SURFOBJ_TO_SURFACE_NOT_NULL(*((_QWORD *)v16 + 24));
                v20 = v29;
                v38 = v29 & 0xFFFFFF;
                LODWORD(v40) = 0;
                _guard_dispatch_icall_fptr();
                LODWORD(v23) = 0;
                GreUpdateSprite(HDEV, 0LL, v7, 0LL, 0LL, 0LL, 0LL, 0LL, v20, 0LL, 0x20400001u, &v45, 0LL, 1, v23);
                DisplayDC = GreCreateDisplayDC(HDEV, 1LL);
                v32 = (HDC)DisplayDC;
                if ( DisplayDC )
                {
                  v21 = SURFOBJ_TO_SURFACE_NOT_NULL(*((_QWORD *)v16 + 24));
                  *(_DWORD *)(v21 + 112) |= 0x4000000u;
                  GreSelectBitmap(DisplayDC, *(_QWORD *)(*((_QWORD *)v16 + 24) + 8LL));
                  v6 = 0;
                }
                SURFREFVIEW::bUnMap((SURFREFVIEW *)v37);
              }
              DWMSPRITEREF::~DWMSPRITEREF((DWMSPRITEREF *)v41);
              v5 = v30;
            }
            else
            {
              DWMSPRITEREF::~DWMSPRITEREF((DWMSPRITEREF *)v41);
            }
            v4 = v26;
          }
        }
      }
    }
  }
  if ( v6 < 0 )
    goto LABEL_23;
LABEL_27:
  DEVLOCKOBJ::~DEVLOCKOBJ((DEVLOCKOBJ *)v44);
  EtwTraceGreLockReleaseSemaphore(L"ghsemDwmState", ghsemDwmState);
  GreReleaseSemaphoreInternal(ghsemDwmState);
  if ( (unsigned __int64)v5 >= W32UserProbeAddress )
    v5 = (void **)W32UserProbeAddress;
  *v5 = v31;
  if ( (unsigned __int64)v4 >= W32UserProbeAddress )
    v4 = (HDC *)W32UserProbeAddress;
  *v4 = v32;
  DWMSPRITELOCK::~DWMSPRITELOCK((DWMSPRITELOCK *)v25);
  SEMOBJ::vUnlock((SEMOBJ *)&v35);
  DYNAMICMODECHANGESHARELOCK::~DYNAMICMODECHANGESHARELOCK(v22);
LABEL_2:
  DCOBJ::~DCOBJ((DCOBJ *)v43);
  return (unsigned int)v6;
}
