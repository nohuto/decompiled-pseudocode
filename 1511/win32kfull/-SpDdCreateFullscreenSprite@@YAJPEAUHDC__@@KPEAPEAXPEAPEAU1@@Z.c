/*
 * XREFs of ?SpDdCreateFullscreenSprite@@YAJPEAUHDC__@@KPEAPEAXPEAPEAU1@@Z @ 0x1C025F7D4
 * Callers:
 *     NtGdiDdCreateFullscreenSprite @ 0x1C0263880 (NtGdiDdCreateFullscreenSprite.c)
 * Callees:
 *     ?vSpDwmUpdateSpriteVisibility@@YAXPEAVDWMSPRITE@@_N@Z @ 0x1C000AF38 (-vSpDwmUpdateSpriteVisibility@@YAXPEAVDWMSPRITE@@_N@Z.c)
 *     ?bLddmDriver@PDEVOBJ@@QEAAHXZ @ 0x1C001CE48 (-bLddmDriver@PDEVOBJ@@QEAAHXZ.c)
 *     ??1DEVLOCKOBJ@@QEAA@XZ @ 0x1C002C85C (--1DEVLOCKOBJ@@QEAA@XZ.c)
 *     ??0DEVLOCKOBJ@@QEAA@AEAVPDEVOBJ@@@Z @ 0x1C002CCC0 (--0DEVLOCKOBJ@@QEAA@AEAVPDEVOBJ@@@Z.c)
 *     ?vUnlockFast@XDCOBJ@@QEAAXXZ @ 0x1C002DA58 (-vUnlockFast@XDCOBJ@@QEAAXXZ.c)
 *     ?vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z @ 0x1C002DA80 (-vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z.c)
 *     GreUpdateSprite @ 0x1C0032AF0 (GreUpdateSprite.c)
 *     ?bNeedRenderHint@@YAHAEAVPDEVOBJ@@@Z @ 0x1C003C1BC (-bNeedRenderHint@@YAHAEAVPDEVOBJ@@@Z.c)
 *     ?bSpDwmCreateLogicalSurface@@YAHPEAUHDEV__@@PEAVDWMSPRITE@@PEAVSFMLOGICALSURFACE@@PEAUtagSIZE@@PEAPEAV3@@Z @ 0x1C003C1DC (-bSpDwmCreateLogicalSurface@@YAHPEAUHDEV__@@PEAVDWMSPRITE@@PEAVSFMLOGICALSURFACE@@PEAUtagSIZE@@P.c)
 *     ??1DWMSPRITELOCK@@QEAA@XZ @ 0x1C004F98C (--1DWMSPRITELOCK@@QEAA@XZ.c)
 *     ??0DWMSPRITELOCK@@QEAA@AEAVPDEVOBJ@@HH@Z @ 0x1C004F9C4 (--0DWMSPRITELOCK@@QEAA@AEAVPDEVOBJ@@HH@Z.c)
 *     ??0DWMSPRITEREF@@QEAA@PEAUHWND__@@PEAX@Z @ 0x1C007C188 (--0DWMSPRITEREF@@QEAA@PEAUHWND__@@PEAX@Z.c)
 *     ??0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C007CD10 (--0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ??1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C007CD4C (--1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     GreCreateSprite @ 0x1C007DE98 (GreCreateSprite.c)
 *     GreDeleteSprite @ 0x1C007FE74 (GreDeleteSprite.c)
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C00E14B8 (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C01512D0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0152950 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall SpDdCreateFullscreenSprite(HDC a1, unsigned int a2, void **a3, HDC *a4)
{
  HDC *v4; // r12
  void **v5; // rbx
  int v6; // r14d
  HSPRITE v7; // rdi
  __int64 v9; // rsi
  HDEV HDEV; // r15
  struct PDEVOBJ *v11; // rdx
  int v12; // eax
  HSPRITE v13; // rax
  volatile signed __int32 *v14; // rbx
  struct SFMLOGICALSURFACE *v15; // r13
  __int64 v16; // rax
  LONG v17; // esi
  LONG v18; // r12d
  struct _SURFOBJ *v19; // rdx
  unsigned int v20; // esi
  __int64 DisplayDC; // rdi
  __int64 v22; // rax
  DYNAMICMODECHANGESHARELOCK *v23; // rcx
  char v24[8]; // [rsp+80h] [rbp-168h] BYREF
  HSPRITE v25; // [rsp+88h] [rbp-160h]
  char v26[8]; // [rsp+90h] [rbp-158h] BYREF
  void **v27; // [rsp+98h] [rbp-150h]
  HDC v28; // [rsp+A0h] [rbp-148h]
  unsigned int v29; // [rsp+A8h] [rbp-140h]
  HDC *v30; // [rsp+B0h] [rbp-138h]
  __int64 v31; // [rsp+B8h] [rbp-130h]
  struct tagSIZE v32; // [rsp+C0h] [rbp-128h] BYREF
  __int64 v33; // [rsp+C8h] [rbp-120h] BYREF
  HDEV v34; // [rsp+D0h] [rbp-118h] BYREF
  _QWORD v35[2]; // [rsp+D8h] [rbp-110h] BYREF
  struct SFMLOGICALSURFACE *v36; // [rsp+E8h] [rbp-100h] BYREF
  struct DWMSPRITE *v37; // [rsp+F0h] [rbp-F8h] BYREF
  __int64 v38; // [rsp+F8h] [rbp-F0h] BYREF
  _QWORD v39[2]; // [rsp+100h] [rbp-E8h] BYREF
  int v40; // [rsp+110h] [rbp-D8h]
  __int64 v41; // [rsp+118h] [rbp-D0h]
  __int64 v42; // [rsp+120h] [rbp-C8h]
  _BYTE v43[80]; // [rsp+130h] [rbp-B8h] BYREF
  struct tagRECT v44; // [rsp+180h] [rbp-68h] BYREF
  int v45; // [rsp+190h] [rbp-58h]
  int v46; // [rsp+194h] [rbp-54h]
  LONG v47; // [rsp+198h] [rbp-50h]
  LONG v48; // [rsp+19Ch] [rbp-4Ch]

  v4 = a4;
  v30 = a4;
  v5 = a3;
  v27 = a3;
  v29 = a2;
  v6 = -1073741811;
  v35[1] = 0LL;
  XDCOBJ::vLock((XDCOBJ *)v35, a1);
  v7 = 0LL;
  v25 = 0LL;
  v28 = 0LL;
  if ( !v35[0] )
    return (unsigned int)v6;
  v9 = *(_QWORD *)(v35[0] + 48LL);
  DYNAMICMODECHANGESHARELOCK::DYNAMICMODECHANGESHARELOCK((DYNAMICMODECHANGESHARELOCK *)v24);
  v33 = ghsemGreLock;
  GreAcquireSemaphore(ghsemGreLock);
  HDEV = (HDEV)UserGetHDEV();
  v34 = HDEV;
  DWMSPRITELOCK::DWMSPRITELOCK((DWMSPRITELOCK *)v26, v11, 0, 0);
  GreAcquireSemaphore(ghsemDwmState);
  EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemDwmState", ghsemDwmState, 7LL);
  DEVLOCKOBJ::DEVLOCKOBJ((DEVLOCKOBJ *)v43, (struct PDEVOBJ *)&v34);
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
        v25 = 0LL;
      }
      if ( v28 )
      {
        GreDeleteDC(v28);
        v28 = 0LL;
      }
      goto LABEL_27;
    }
    v38 = v9;
    if ( v9 )
    {
      v12 = *(_DWORD *)(v9 + 56);
      if ( (v12 & 0x400) == 0 && (v12 & 0x20000) == 0 )
      {
        if ( (unsigned int)PDEVOBJ::bLddmDriver((PDEVOBJ *)&v38) )
        {
          v44.left = *(_DWORD *)(v9 + 2608);
          v44.top = *(_DWORD *)(v9 + 2612);
          v44.right = v44.left + *(_DWORD *)(*(_QWORD *)(v9 + 2616) + 172LL);
          v44.bottom = v44.top + *(_DWORD *)(*(_QWORD *)(v9 + 2616) + 176LL);
          v13 = GreCreateSprite(HDEV, 0LL, &v44, 0LL, 1, 0, 0, 0, 0);
          v7 = v13;
          v25 = v13;
          if ( v13 )
          {
            DWMSPRITEREF::DWMSPRITEREF((DWMSPRITEREF *)&v37, 0LL, v13);
            v14 = (volatile signed __int32 *)v37;
            if ( !v37 )
            {
LABEL_21:
              v5 = v27;
              goto LABEL_22;
            }
            v36 = (struct SFMLOGICALSURFACE *)*((_QWORD *)v37 + 16);
            v15 = v36;
            vSpDwmUpdateSpriteVisibility(v37, 0);
            v16 = *(_QWORD *)(v9 + 2616);
            v17 = *(_DWORD *)(v16 + 172);
            v32.cx = v17;
            v18 = *(_DWORD *)(v16 + 176);
            v32.cy = v18;
            if ( (unsigned int)bSpDwmCreateLogicalSurface(HDEV, (struct DWMSPRITE *)v14, v15, &v32, &v36) )
            {
              v19 = (struct _SURFOBJ *)*((_QWORD *)v15 + 24);
              v39[0] = 0LL;
              SURFREFVIEW::bMap((SURFREFVIEW *)v39, v19);
              v45 = 0;
              v46 = 0;
              v47 = v17;
              v48 = v18;
              v31 = 0LL;
              v40 = 0;
              v41 = 0LL;
              v42 = 0LL;
              if ( !(unsigned int)bNeedRenderHint((struct PDEVOBJ *)&v34) )
                SURFOBJ_TO_SURFACE_NOT_NULL(*((_QWORD *)v15 + 24));
              v20 = v29;
              v40 = v29 & 0xFFFFFF;
              LODWORD(v42) = 0;
              _guard_dispatch_icall_fptr();
              GreUpdateSprite(HDEV, 0LL, v7, 0LL, 0LL, 0LL, 0LL, 0LL, v20, 0LL, 0x20400001u, &v44, 0LL, 1, 0);
              DisplayDC = GreCreateDisplayDC(HDEV, 1LL);
              v28 = (HDC)DisplayDC;
              if ( DisplayDC )
              {
                v22 = SURFOBJ_TO_SURFACE_NOT_NULL(*((_QWORD *)v15 + 24));
                *(_DWORD *)(v22 + 112) |= 0x4000000u;
                GreSelectBitmap(DisplayDC, *(_QWORD *)(*((_QWORD *)v15 + 24) + 8LL));
                v6 = 0;
                SURFREFVIEW::bUnMap((SURFREFVIEW *)v39);
                _InterlockedDecrement(v14 + 3);
                goto LABEL_20;
              }
              SURFREFVIEW::bUnMap((SURFREFVIEW *)v39);
            }
            _InterlockedDecrement(v14 + 3);
LABEL_20:
            v4 = v30;
            v7 = v25;
            goto LABEL_21;
          }
        }
      }
    }
  }
LABEL_22:
  if ( v6 < 0 )
    goto LABEL_23;
LABEL_27:
  DEVLOCKOBJ::~DEVLOCKOBJ((DEVLOCKOBJ *)v43);
  EtwTraceGreLockReleaseSemaphore(L"ghsemDwmState", ghsemDwmState);
  GreReleaseSemaphoreInternal(ghsemDwmState);
  XDCOBJ::vUnlockFast((XDCOBJ *)v35);
  if ( (unsigned __int64)v5 >= W32UserProbeAddress )
    v5 = (void **)W32UserProbeAddress;
  *v5 = v25;
  if ( (unsigned __int64)v4 >= W32UserProbeAddress )
    v4 = (HDC *)W32UserProbeAddress;
  *v4 = v28;
  DWMSPRITELOCK::~DWMSPRITELOCK((DWMSPRITELOCK *)v26);
  SEMOBJ::vUnlock((SEMOBJ *)&v33);
  DYNAMICMODECHANGESHARELOCK::~DYNAMICMODECHANGESHARELOCK(v23);
  return (unsigned int)v6;
}
