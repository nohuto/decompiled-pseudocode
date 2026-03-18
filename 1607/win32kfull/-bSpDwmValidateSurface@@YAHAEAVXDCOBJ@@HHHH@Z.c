/*
 * XREFs of ?bSpDwmValidateSurface@@YAHAEAVXDCOBJ@@HHHH@Z @ 0x1C0041BD0
 * Callers:
 *     GrePlgBlt @ 0x1C00011A4 (GrePlgBlt.c)
 *     NtGdiBitBltInternal @ 0x1C003E620 (NtGdiBitBltInternal.c)
 *     NtGdiGetPixel @ 0x1C0040650 (NtGdiGetPixel.c)
 *     NtGdiAlphaBlend @ 0x1C00423F0 (NtGdiAlphaBlend.c)
 *     GreStretchBltInternal @ 0x1C004DDF0 (GreStretchBltInternal.c)
 *     NtGdiPatBlt @ 0x1C00942F0 (NtGdiPatBlt.c)
 *     GreMaskBlt @ 0x1C010ED68 (GreMaskBlt.c)
 *     ?bReadBackRect@DWMSCREENREADMODIFYWRITEASSIST@@QEAAHPEBU_RECTL@@@Z @ 0x1C013A1CC (-bReadBackRect@DWMSCREENREADMODIFYWRITEASSIST@@QEAAHPEBU_RECTL@@@Z.c)
 *     NtGdiTransparentBlt @ 0x1C013A310 (NtGdiTransparentBlt.c)
 * Callees:
 *     ??XERECTL@@QEAAAEAV0@AEAU_RECTL@@@Z @ 0x1C00354E4 (--XERECTL@@QEAAAEAV0@AEAU_RECTL@@@Z.c)
 *     ?IsRectEmptyInl@@YAHPEBUtagRECT@@@Z @ 0x1C0035534 (-IsRectEmptyInl@@YAHPEBUtagRECT@@@Z.c)
 *     ?bEmpty@ERECTL@@QEAAHXZ @ 0x1C0035578 (-bEmpty@ERECTL@@QEAAHXZ.c)
 *     ?vOrder@ERECTL@@QEAAXXZ @ 0x1C00356B4 (-vOrder@ERECTL@@QEAAXXZ.c)
 *     ?vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z @ 0x1C0039508 (-vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z.c)
 *     ?bXform@EXFORMOBJ@@QEAAHPEAU_POINTL@@_K@Z @ 0x1C003955C (-bXform@EXFORMOBJ@@QEAAHPEAU_POINTL@@_K@Z.c)
 *     ??0DEVLOCKOBJ@@QEAA@AEAVXDCOBJ@@H@Z @ 0x1C004892C (--0DEVLOCKOBJ@@QEAA@AEAVXDCOBJ@@H@Z.c)
 *     ?vDestructor@DEVLOCKOBJ@@QEAAXXZ @ 0x1C0048990 (-vDestructor@DEVLOCKOBJ@@QEAAXXZ.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C004A0A0 (--1DCOBJ@@QEAA@XZ.c)
 *     ?bContain@RGNOBJ@@QEAAHAEAU_RECTL@@@Z @ 0x1C004A950 (-bContain@RGNOBJ@@QEAAHAEAU_RECTL@@@Z.c)
 *     ?eptlOrigin@DC@@QEAAAEAVEPOINTL@@XZ @ 0x1C004B424 (-eptlOrigin@DC@@QEAAAEAVEPOINTL@@XZ.c)
 *     ??1RGNMEMOBJTMP@@QEAA@XZ @ 0x1C0051794 (--1RGNMEMOBJTMP@@QEAA@XZ.c)
 *     ??0RGNMEMOBJTMP@@QEAA@XZ @ 0x1C00517BC (--0RGNMEMOBJTMP@@QEAA@XZ.c)
 *     ?vsoShapeSize@SFMLOGICALSURFACE@@QEAAXPEAUtagSIZE@@@Z @ 0x1C0052790 (-vsoShapeSize@SFMLOGICALSURFACE@@QEAAXPEAUtagSIZE@@@Z.c)
 *     ??0DWMSPRITEREF@@QEAA@PEAUHWND__@@@Z @ 0x1C0063028 (--0DWMSPRITEREF@@QEAA@PEAUHWND__@@@Z.c)
 *     ?vDeleteREGION@REGION@@QEAAXXZ @ 0x1C0065F2C (-vDeleteREGION@REGION@@QEAAXXZ.c)
 *     ?bSpDwmUpdateSurface@@YAHPEAUHWND__@@I_KAEAVXDCOBJ@@PEAUHSURF__@@MHHAEAVERECTL@@PEAVREGION@@@Z @ 0x1C00B39E8 (-bSpDwmUpdateSurface@@YAHPEAUHWND__@@I_KAEAVXDCOBJ@@PEAUHSURF__@@MHHAEAVERECTL@@PEAVREGION@@@Z.c)
 *     __security_check_cookie @ 0x1C0158CD0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C015A020 (_guard_dispatch_icall_nop.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDWMSPRITEREF@@@@QEAA@XZ @ 0x1C025B200 (--1-$UnexpectedThreadTerminationHandler@VDWMSPRITEREF@@@@QEAA@XZ.c)
 */

int __fastcall bSpDwmValidateSurface(struct XDCOBJ *a1, LONG a2, LONG a3, int a4, int a5)
{
  int v5; // edi
  __int64 v6; // r13
  __int64 v8; // rcx
  int v9; // r14d
  REGION *v10; // r15
  __int64 v11; // rax
  __int64 v13; // rbx
  __int64 v14; // rcx
  struct EPOINTL *v15; // rax
  LONG v16; // edx
  __int64 v17; // r9
  __int64 v18; // rcx
  __int64 v19; // r9
  int v20; // r12d
  __int64 v21; // r15
  __int64 v22; // r8
  __int64 v23; // rax
  __int64 v24; // rax
  LONG v25; // eax
  LONG cx; // r13d
  LONG cy; // r12d
  __int64 v28; // r8
  REGION *v29; // r8
  __int64 v30; // rdx
  int v31; // r8d
  int v32; // ecx
  __int64 v33; // r9
  HSURF v34; // r12
  int v35; // ebx
  __int64 v36; // rax
  int v38; // [rsp+50h] [rbp-B0h]
  LONG left; // [rsp+50h] [rbp-B0h]
  struct tagSIZE v40; // [rsp+58h] [rbp-A8h] BYREF
  struct _POINTL v41; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v42; // [rsp+68h] [rbp-98h] BYREF
  REGION *v43; // [rsp+70h] [rbp-90h]
  __int64 v44; // [rsp+78h] [rbp-88h] BYREF
  int v45; // [rsp+80h] [rbp-80h]
  int v46; // [rsp+84h] [rbp-7Ch]
  REGION *v47; // [rsp+88h] [rbp-78h] BYREF
  int v48; // [rsp+90h] [rbp-70h]
  unsigned __int64 v49; // [rsp+98h] [rbp-68h] BYREF
  struct tagRECT v50; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v51; // [rsp+B0h] [rbp-50h] BYREF
  int v52; // [rsp+B8h] [rbp-48h]
  int v53; // [rsp+BCh] [rbp-44h]
  _QWORD v54[2]; // [rsp+C0h] [rbp-40h] BYREF
  _DWORD v55[4]; // [rsp+D0h] [rbp-30h] BYREF
  _QWORD v56[2]; // [rsp+E0h] [rbp-20h] BYREF
  _BYTE v57[32]; // [rsp+F0h] [rbp-10h] BYREF
  __int64 v58; // [rsp+110h] [rbp+10h]
  _BYTE v59[32]; // [rsp+120h] [rbp+20h] BYREF
  _BYTE v60[80]; // [rsp+140h] [rbp+40h] BYREF
  _BYTE v61[32]; // [rsp+190h] [rbp+90h] BYREF
  _BYTE v62[80]; // [rsp+1B0h] [rbp+B0h] BYREF
  struct tagRECT v63; // [rsp+200h] [rbp+100h] BYREF
  struct _RECTL v64; // [rsp+210h] [rbp+110h] BYREF

  v5 = 0;
  v6 = a4;
  v40.cx = a3;
  v8 = *(_QWORD *)a1;
  v9 = 0;
  v10 = 0LL;
  v49 = 0LL;
  v43 = 0LL;
  if ( !v8
    || (*(_DWORD *)(v8 + 36) & 0x200) == 0
    || !g_pDwmState
    || (*(_DWORD *)(v8 + 36) & 0x4001) != 0x4001
    || !*(_QWORD *)(v8 + 488)
    || !*(_QWORD *)(v8 + 512)
    || !*(_DWORD *)(v8 + 504) && !*(_DWORD *)(v8 + 508)
    || KeAreApcsDisabled() )
  {
    return 0;
  }
  DEVLOCKOBJ::DEVLOCKOBJ((DEVLOCKOBJ *)v59, a1, 0);
  if ( (v59[24] & 1) == 0 )
    goto LABEL_13;
  v11 = *(_QWORD *)a1;
  if ( !*(_QWORD *)(*(_QWORD *)a1 + 520LL) )
  {
    v13 = *(_QWORD *)(*(_QWORD *)(v11 + 48) + 40LL);
    if ( !*(_DWORD *)(v11 + 508) )
    {
      v14 = *(_QWORD *)(v11 + 1544);
      if ( !v14 )
        goto LABEL_13;
      v50 = *(struct tagRECT *)(v14 + 88);
      if ( IsRectEmptyInl(&v50) )
        goto LABEL_13;
    }
    if ( !(_DWORD)v6 )
      goto LABEL_13;
    if ( !a5 )
      goto LABEL_13;
    if ( (unsigned __int64)(v6 + a2 + 0x80000000LL) > 0xFFFFFFFF )
      goto LABEL_13;
    if ( (unsigned __int64)(a5 + (__int64)v40.cx + 0x80000000LL) > 0xFFFFFFFF )
      goto LABEL_13;
    EXFORMOBJ::vQuickInit((EXFORMOBJ *)v56, a1, 0x204u);
    if ( (*(_DWORD *)(v56[0] + 32LL) & 2) == 0 )
      goto LABEL_13;
    v41.x = a2;
    v41.y = v40.cx;
    EXFORMOBJ::bXform((EXFORMOBJ *)v56, &v41, 1LL);
    v15 = DC::eptlOrigin(*(DC **)a1);
    v16 = *((_DWORD *)v15 + 1) + v41.y;
    v41.x += *(_DWORD *)v15;
    v41.y = v16;
    v63.left = v41.x;
    v63.bottom = v16 + a5;
    v63.top = v16;
    v63.right = v41.x + v6;
    ERECTL::vOrder((ERECTL *)&v63);
    v18 = *(_QWORD *)(v17 + 512);
    v51 = 0LL;
    v52 = *(_DWORD *)(v18 + 56);
    v53 = *(_DWORD *)(v18 + 60);
    ERECTL::operator*=(&v63, &v51);
    if ( IsRectEmptyInl(&v63) )
      goto LABEL_13;
    if ( *(_DWORD *)(v19 + 508) )
    {
      cy = v40.cy;
      cx = v40.cx;
      goto LABEL_68;
    }
    if ( (*(_DWORD *)(v19 + 36) & 0x4000) != 0 )
      SURFACE::bUnMap(*(SURFACE **)(v19 + 512), 0LL, (struct DC *)v19);
    v20 = 0;
    v38 = 0;
    GreAcquireSemaphore(ghsemDwmState);
    EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemDwmState", ghsemDwmState, 7LL);
    if ( !g_pDwmState )
    {
      cy = v40.cy;
      cx = v40.cx;
LABEL_60:
      EtwTraceGreLockReleaseSemaphore(L"ghsemDwmState", ghsemDwmState);
      GreReleaseSemaphoreInternal(ghsemDwmState);
      if ( (*(_DWORD *)(*(_QWORD *)a1 + 36LL) & 0x4000) != 0
        && (unsigned int)SURFACE::Map(*(_QWORD *)(*(_QWORD *)a1 + 512LL), 0LL, *(_QWORD *)a1) == 2 )
      {
        *(_DWORD *)(*(_QWORD *)a1 + 44LL) |= 1u;
LABEL_63:
        if ( v10 )
          REGION::vDeleteREGION(v10);
        goto LABEL_13;
      }
      if ( !v38 )
        goto LABEL_13;
LABEL_68:
      if ( *(_DWORD *)(*(_QWORD *)a1 + 508LL) )
      {
        v63.left += *(_DWORD *)(v13 + 2608);
        v63.right += *(_DWORD *)(v13 + 2608);
        v63.top += *(_DWORD *)(v13 + 2612);
        v63.bottom += *(_DWORD *)(v13 + 2612);
      }
      else
      {
        v63.left += cx;
        v63.right += cx;
        v63.top += cy;
        v63.bottom += cy;
      }
      v30 = *(_QWORD *)(v13 + 2576);
      v31 = *(_DWORD *)(v13 + 2612);
      LODWORD(v44) = *(_DWORD *)(v13 + 2608);
      v45 = *(_DWORD *)(v30 + 56) + v44;
      v32 = *(_DWORD *)(v30 + 60);
      HIDWORD(v44) = v31;
      v46 = v31 + v32;
      ERECTL::operator*=(&v63, &v44);
      if ( !IsRectEmptyInl(&v63) )
      {
        left = v63.left;
        v40.cx = v63.top;
        if ( *(_DWORD *)(v33 + 508) )
        {
          v63.left -= *(_DWORD *)(v13 + 2608);
          v63.right -= *(_DWORD *)(v13 + 2608);
          v63.top -= *(_DWORD *)(v13 + 2612);
          v63.bottom -= *(_DWORD *)(v13 + 2612);
        }
        else
        {
          v63.right -= cx;
          v63.left -= cx;
          v63.bottom -= cy;
          v63.top -= cy;
        }
        v34 = *(HSURF *)(*(_QWORD *)(v33 + 512) + 32LL);
        DEVLOCKOBJ::vDestructor((DEVLOCKOBJ *)v59);
        DCOBJ::~DCOBJ((DCOBJ *)v60);
        v35 = 8;
        while ( 1 )
        {
          DEVLOCKOBJ::DEVLOCKOBJ((DEVLOCKOBJ *)v61, a1, 0);
          v36 = *(_QWORD *)(*(_QWORD *)a1 + 48LL);
          if ( v36 )
          {
            if ( *(_QWORD *)(v36 + 3488) )
            {
              v9 = (*(__int64 (__fastcall **)(_QWORD, unsigned __int64 *))(v36 + 3488))(*(_QWORD *)(v36 + 1824), &v49);
              if ( v9 == 258 )
              {
                KeDelayExecutionThread(0, 0, gpLockShortDelay);
                --v35;
              }
            }
          }
          else
          {
            v9 = -1073741823;
          }
          DEVLOCKOBJ::vDestructor((DEVLOCKOBJ *)v61);
          DCOBJ::~DCOBJ((DCOBJ *)v62);
          if ( v9 != 258 )
            break;
          if ( !v35 )
            goto LABEL_83;
        }
        if ( v9 >= 0 )
          return bSpDwmUpdateSurface(0LL, 0, v49, a1, v34, 1.0, left, v40.cx, (struct ERECTL *)&v63, v10);
LABEL_83:
        if ( v10 )
          REGION::vDeleteREGION(v10);
        return v5;
      }
      goto LABEL_63;
    }
    DWMSPRITEREF::DWMSPRITEREF((DWMSPRITEREF *)v57, *(HWND *)(*(_QWORD *)a1 + 488LL));
    v21 = v58;
    if ( !v58 )
    {
      cy = v40.cy;
      cx = v40.cx;
LABEL_58:
      v58 = 0LL;
      UnexpectedThreadTerminationHandler<DWMSPRITEREF>::~UnexpectedThreadTerminationHandler<DWMSPRITEREF>(v57);
      v10 = v43;
      goto LABEL_60;
    }
    v22 = *(_QWORD *)(v58 + 128);
    v44 = v22;
    if ( (*(_DWORD *)(v22 + 256) & 0x200) != 0 )
      goto LABEL_48;
    v23 = *(_QWORD *)(*(_QWORD *)a1 + 512LL);
    v24 = v23 ? v23 + 24 : 0LL;
    if ( *(_QWORD *)(v22 + 192) != v24 )
      goto LABEL_48;
    if ( *(_QWORD *)(v22 + 88) )
    {
      v42 = *(_QWORD *)(v22 + 88);
      RGNMEMOBJTMP::RGNMEMOBJTMP((RGNMEMOBJTMP *)v54);
      if ( v42 && v54[0] && !(unsigned int)RGNOBJ::bContain((RGNOBJ *)&v42, (struct _RECTL *)&v63) )
      {
        RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)&v47);
        if ( v47 )
        {
          v25 = *(_DWORD *)(v21 + 64) - *(_DWORD *)(v21 + 56);
          v64.bottom = *(_DWORD *)(v21 + 68) - *(_DWORD *)(v21 + 60);
          *(_QWORD *)&v64.left = 0LL;
          v64.right = v25;
          RGNOBJ::vSet((RGNOBJ *)v54, &v64);
          if ( RGNOBJ::iCombine((RGNOBJ *)&v47, (struct RGNOBJ *)v54, (struct RGNOBJ *)&v42, BYTE4(gafjRgnOp)) )
          {
            v20 = 1;
            v43 = v47;
            v38 = 1;
          }
          else if ( v47 )
          {
            REGION::vDeleteREGION(v47);
          }
        }
        if ( v48 == 1 )
          RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v47);
      }
      RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)v54);
      if ( !v20 )
      {
        v21 = v58;
LABEL_48:
        cx = v40.cx;
        cy = v40.cy;
LABEL_49:
        if ( v21 )
          _InterlockedDecrement((volatile signed __int32 *)(v21 + 12));
        goto LABEL_58;
      }
      v22 = v44;
    }
    else
    {
      v38 = 1;
    }
    SFMLOGICALSURFACE::vsoShapeSize((SFMLOGICALSURFACE *)v22, &v40);
    cx = *(_DWORD *)(v21 + 56);
    cy = *(_DWORD *)(v21 + 60);
    *(struct tagSIZE *)&v63.right = v40;
    *(_QWORD *)&v63.left = 0LL;
    *(_DWORD *)(v28 + 256) |= 0x200u;
    if ( v43 )
    {
      v55[0] = *((_DWORD *)v43 + 22);
      v55[1] = *((_DWORD *)v43 + 23);
      v55[2] = *((_DWORD *)v43 + 24);
      v55[3] = *((_DWORD *)v43 + 25);
      ERECTL::operator*=(&v63, v55);
      if ( ERECTL::bEmpty((ERECTL *)&v63) )
      {
        REGION::vDeleteREGION(v29);
        v38 = 0;
        *(_DWORD *)(v44 + 256) |= 0x200u;
      }
    }
    v21 = v58;
    goto LABEL_49;
  }
  v5 = 1;
LABEL_13:
  DEVLOCKOBJ::vDestructor((DEVLOCKOBJ *)v59);
  DCOBJ::~DCOBJ((DCOBJ *)v60);
  return v5;
}
