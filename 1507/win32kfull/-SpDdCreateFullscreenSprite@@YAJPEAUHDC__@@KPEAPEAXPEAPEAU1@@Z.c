/*
 * XREFs of ?SpDdCreateFullscreenSprite@@YAJPEAUHDC__@@KPEAPEAXPEAPEAU1@@Z @ 0x1C0260AEC
 * Callers:
 *     NtGdiDdCreateFullscreenSprite @ 0x1C0265030 (NtGdiDdCreateFullscreenSprite.c)
 * Callees:
 *     GreDeleteSprite @ 0x1C000CBEC (GreDeleteSprite.c)
 *     GreCreateSprite @ 0x1C000D128 (GreCreateSprite.c)
 *     ??1DWMSPRITEREF@@QEAA@XZ @ 0x1C00103A0 (--1DWMSPRITEREF@@QEAA@XZ.c)
 *     ??0DWMSPRITEREF@@QEAA@PEAUHWND__@@PEAX@Z @ 0x1C00103B8 (--0DWMSPRITEREF@@QEAA@PEAUHWND__@@PEAX@Z.c)
 *     ??0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C0010BA4 (--0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ??1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C0010BE0 (--1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ?bNeedRenderHint@@YAHAEAVPDEVOBJ@@@Z @ 0x1C00111C4 (-bNeedRenderHint@@YAHAEAVPDEVOBJ@@@Z.c)
 *     ?bSpDwmCreateLogicalSurface@@YAHPEAUHDEV__@@PEAVDWMSPRITE@@PEAVSFMLOGICALSURFACE@@PEAUtagSIZE@@PEAPEAV3@@Z @ 0x1C00111E4 (-bSpDwmCreateLogicalSurface@@YAHPEAUHDEV__@@PEAVDWMSPRITE@@PEAVSFMLOGICALSURFACE@@PEAUtagSIZE@@P.c)
 *     ??1DEVLOCKOBJ@@QEAA@XZ @ 0x1C001928C (--1DEVLOCKOBJ@@QEAA@XZ.c)
 *     ??0DEVLOCKOBJ@@QEAA@AEAVPDEVOBJ@@@Z @ 0x1C0019730 (--0DEVLOCKOBJ@@QEAA@AEAVPDEVOBJ@@@Z.c)
 *     GreUpdateSprite @ 0x1C001B070 (GreUpdateSprite.c)
 *     ?bLddmDriver@PDEVOBJ@@QEAAHXZ @ 0x1C0030DD8 (-bLddmDriver@PDEVOBJ@@QEAAHXZ.c)
 *     ??1DWMSPRITELOCK@@QEAA@XZ @ 0x1C0061C78 (--1DWMSPRITELOCK@@QEAA@XZ.c)
 *     ??0DWMSPRITELOCK@@QEAA@AEAVPDEVOBJ@@HH@Z @ 0x1C0061CB0 (--0DWMSPRITELOCK@@QEAA@AEAVPDEVOBJ@@HH@Z.c)
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C00D6F48 (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C015BB90 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C015D150 (_guard_dispatch_icall_nop.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C025E20C (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C025E250 (--1DCOBJ@@QEAA@XZ.c)
 *     ?vSpDwmUpdateSpriteVisibility@@YAXPEAVDWMSPRITE@@_N@Z @ 0x1C0261EC0 (-vSpDwmUpdateSpriteVisibility@@YAXPEAVDWMSPRITE@@_N@Z.c)
 */

__int64 __fastcall SpDdCreateFullscreenSprite(HDC a1, unsigned int a2, void **a3, HDC *a4)
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
  char v23[4]; // [rsp+80h] [rbp-1B8h] BYREF
  _BYTE v24[4]; // [rsp+84h] [rbp-1B4h] BYREF
  HDC *v25; // [rsp+88h] [rbp-1B0h]
  __int64 v26; // [rsp+90h] [rbp-1A8h] BYREF
  void **v27; // [rsp+98h] [rbp-1A0h]
  HSPRITE v28; // [rsp+A0h] [rbp-198h]
  HDC v29; // [rsp+A8h] [rbp-190h]
  unsigned int v30; // [rsp+B0h] [rbp-188h]
  LONG v31; // [rsp+B4h] [rbp-184h]
  HDEV v32; // [rsp+B8h] [rbp-180h] BYREF
  struct tagSIZE v33; // [rsp+C0h] [rbp-178h] BYREF
  __int64 v34; // [rsp+C8h] [rbp-170h] BYREF
  _QWORD v35[2]; // [rsp+D0h] [rbp-168h] BYREF
  struct SFMLOGICALSURFACE *v36; // [rsp+E0h] [rbp-158h] BYREF
  int v37; // [rsp+E8h] [rbp-150h]
  __int64 v38; // [rsp+F0h] [rbp-148h]
  __int64 v39; // [rsp+F8h] [rbp-140h]
  _BYTE v40[32]; // [rsp+100h] [rbp-138h] BYREF
  struct DWMSPRITE *v41; // [rsp+120h] [rbp-118h]
  _QWORD v42[7]; // [rsp+128h] [rbp-110h] BYREF
  _BYTE v43[112]; // [rsp+160h] [rbp-D8h] BYREF
  struct tagRECT v44; // [rsp+1D0h] [rbp-68h] BYREF
  __int64 v45; // [rsp+1E0h] [rbp-58h]
  LONG v46; // [rsp+1E8h] [rbp-50h]
  LONG v47; // [rsp+1ECh] [rbp-4Ch]

  v4 = a4;
  v25 = a4;
  v5 = a3;
  v27 = a3;
  v30 = a2;
  v6 = -1073741811;
  DCOBJ::DCOBJ((DCOBJ *)v42, a1);
  v7 = 0LL;
  v28 = 0LL;
  DisplayDC = 0LL;
  v29 = 0LL;
  if ( !v42[0] )
    goto LABEL_2;
  v10 = *(_QWORD *)(v42[0] + 48LL);
  DYNAMICMODECHANGESHARELOCK::DYNAMICMODECHANGESHARELOCK((DYNAMICMODECHANGESHARELOCK *)v23);
  v34 = ghsemGreLock;
  GreAcquireSemaphore(ghsemGreLock);
  HDEV = (HDEV)UserGetHDEV();
  v32 = HDEV;
  DWMSPRITELOCK::DWMSPRITELOCK((DWMSPRITELOCK *)v24, v12, 0, 0);
  GreAcquireSemaphore(ghsemDwmState);
  EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemDwmState", ghsemDwmState, 7LL);
  DEVLOCKOBJ::DEVLOCKOBJ((DEVLOCKOBJ *)v43, (struct PDEVOBJ *)&v32);
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
        v28 = 0LL;
      }
      if ( DisplayDC )
      {
        GreDeleteDC(DisplayDC);
        v29 = 0LL;
      }
      goto LABEL_27;
    }
    v26 = v10;
    if ( v10 )
    {
      v13 = *(_DWORD *)(v10 + 56);
      if ( (v13 & 0x400) == 0 && (v13 & 0x20000) == 0 )
      {
        if ( (unsigned int)PDEVOBJ::bLddmDriver((PDEVOBJ *)&v26) )
        {
          v44.left = *(_DWORD *)(v10 + 2608);
          v44.top = *(_DWORD *)(v10 + 2612);
          v44.right = v44.left + *(_DWORD *)(*(_QWORD *)(v10 + 2616) + 172LL);
          v44.bottom = v44.top + *(_DWORD *)(*(_QWORD *)(v10 + 2616) + 176LL);
          v14 = (HSPRITE)GreCreateSprite(HDEV, 0LL, &v44, 0LL, 1, 0, 0, 0, 0);
          v7 = v14;
          v28 = v14;
          if ( v14 )
          {
            DWMSPRITEREF::DWMSPRITEREF((DWMSPRITEREF *)v40, 0LL, v14);
            v15 = v41;
            if ( v41 )
            {
              v36 = (struct SFMLOGICALSURFACE *)*((_QWORD *)v41 + 16);
              v16 = v36;
              vSpDwmUpdateSpriteVisibility(v41, 0);
              v17 = *(_QWORD *)(v10 + 2616);
              v18 = *(_DWORD *)(v17 + 172);
              v33.cx = v18;
              v31 = *(_DWORD *)(v17 + 176);
              v33.cy = v31;
              if ( (unsigned int)bSpDwmCreateLogicalSurface(HDEV, v15, v16, &v33, &v36) )
              {
                v19 = (struct _SURFOBJ *)*((_QWORD *)v16 + 24);
                v35[0] = 0LL;
                SURFREFVIEW::bMap((SURFREFVIEW *)v35, v19);
                v45 = 0LL;
                v46 = v18;
                v47 = v31;
                v26 = 0LL;
                v37 = 0;
                v38 = 0LL;
                v39 = 0LL;
                if ( !(unsigned int)bNeedRenderHint((struct PDEVOBJ *)&v32) )
                  SURFOBJ_TO_SURFACE_NOT_NULL(*((_QWORD *)v16 + 24));
                v20 = v30;
                v37 = v30 & 0xFFFFFF;
                LODWORD(v39) = 0;
                _guard_dispatch_icall_fptr();
                GreUpdateSprite(HDEV, 0LL, v7, 0LL, 0LL, 0LL, 0LL, 0LL, v20, 0LL, 0x20400001u, &v44, 0LL, 1, 0);
                DisplayDC = GreCreateDisplayDC(HDEV, 1LL);
                v29 = (HDC)DisplayDC;
                if ( DisplayDC )
                {
                  v21 = SURFOBJ_TO_SURFACE_NOT_NULL(*((_QWORD *)v16 + 24));
                  *(_DWORD *)(v21 + 112) |= 0x4000000u;
                  GreSelectBitmap(DisplayDC, *(_QWORD *)(*((_QWORD *)v16 + 24) + 8LL));
                  v6 = 0;
                }
                SURFREFVIEW::bUnMap((SURFREFVIEW *)v35);
              }
              DWMSPRITEREF::~DWMSPRITEREF((DWMSPRITEREF *)v40);
              v5 = v27;
            }
            else
            {
              DWMSPRITEREF::~DWMSPRITEREF((DWMSPRITEREF *)v40);
            }
            v4 = v25;
          }
        }
      }
    }
  }
  if ( v6 < 0 )
    goto LABEL_23;
LABEL_27:
  DEVLOCKOBJ::~DEVLOCKOBJ((DEVLOCKOBJ *)v43);
  EtwTraceGreLockReleaseSemaphore(L"ghsemDwmState", ghsemDwmState);
  GreReleaseSemaphoreInternal(ghsemDwmState);
  if ( (unsigned __int64)v5 >= W32UserProbeAddress )
    v5 = (void **)W32UserProbeAddress;
  *v5 = v28;
  if ( (unsigned __int64)v4 >= W32UserProbeAddress )
    v4 = (HDC *)W32UserProbeAddress;
  *v4 = v29;
  DWMSPRITELOCK::~DWMSPRITELOCK((DWMSPRITELOCK *)v24);
  SEMOBJ::vUnlock((SEMOBJ *)&v34);
  DYNAMICMODECHANGESHARELOCK::~DYNAMICMODECHANGESHARELOCK(v22);
LABEL_2:
  DCOBJ::~DCOBJ((DCOBJ *)v42);
  return (unsigned int)v6;
}
