/*
 * XREFs of ?bSpDwmValidateSurface@@YAHAEAVXDCOBJ@@HHHH@Z @ 0x1C0021A60
 * Callers:
 *     NtGdiGetPixel @ 0x1C0020EF0 (NtGdiGetPixel.c)
 *     NtGdiAlphaBlend @ 0x1C0023B30 (NtGdiAlphaBlend.c)
 *     NtGdiPatBlt @ 0x1C00868F0 (NtGdiPatBlt.c)
 *     NtGdiBitBltInternal @ 0x1C0095CC0 (NtGdiBitBltInternal.c)
 *     GreStretchBltInternal @ 0x1C009DE20 (GreStretchBltInternal.c)
 *     GreMaskBlt @ 0x1C00A1D64 (GreMaskBlt.c)
 *     ?bReadBackRect@DWMSCREENREADMODIFYWRITEASSIST@@QEAAHPEBU_RECTL@@@Z @ 0x1C010577C (-bReadBackRect@DWMSCREENREADMODIFYWRITEASSIST@@QEAAHPEBU_RECTL@@@Z.c)
 *     NtGdiTransparentBlt @ 0x1C01058C0 (NtGdiTransparentBlt.c)
 *     GrePlgBlt @ 0x1C0122434 (GrePlgBlt.c)
 * Callees:
 *     ??0DWMSPRITEREF@@QEAA@PEAUHWND__@@@Z @ 0x1C0010330 (--0DWMSPRITEREF@@QEAA@PEAUHWND__@@@Z.c)
 *     ?vDeleteREGION@REGION@@QEAAXXZ @ 0x1C0010EEC (-vDeleteREGION@REGION@@QEAAXXZ.c)
 *     ??1RGNMEMOBJTMP@@QEAA@XZ @ 0x1C0012B5C (--1RGNMEMOBJTMP@@QEAA@XZ.c)
 *     ??0RGNMEMOBJTMP@@QEAA@XZ @ 0x1C0012B84 (--0RGNMEMOBJTMP@@QEAA@XZ.c)
 *     ?bContain@RGNOBJ@@QEAAHAEAU_RECTL@@@Z @ 0x1C0016300 (-bContain@RGNOBJ@@QEAAHAEAU_RECTL@@@Z.c)
 *     ??0DEVLOCKOBJ@@QEAA@AEAVXDCOBJ@@H@Z @ 0x1C0019248 (--0DEVLOCKOBJ@@QEAA@AEAVXDCOBJ@@H@Z.c)
 *     ??1DEVLOCKOBJ@@QEAA@XZ @ 0x1C001928C (--1DEVLOCKOBJ@@QEAA@XZ.c)
 *     ?eptlOrigin@DC@@QEAAAEAVEPOINTL@@XZ @ 0x1C001D720 (-eptlOrigin@DC@@QEAAAEAVEPOINTL@@XZ.c)
 *     ?vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z @ 0x1C0032CA0 (-vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z.c)
 *     ?bXform@EXFORMOBJ@@QEAAHPEAU_POINTL@@_K@Z @ 0x1C0032CFC (-bXform@EXFORMOBJ@@QEAAHPEAU_POINTL@@_K@Z.c)
 *     ?bSpDwmUpdateSurface@@YAHPEAUHWND__@@I_KAEAVXDCOBJ@@PEAUHSURF__@@MHHAEAVERECTL@@PEAVREGION@@@Z @ 0x1C003FD1C (-bSpDwmUpdateSurface@@YAHPEAUHWND__@@I_KAEAVXDCOBJ@@PEAUHSURF__@@MHHAEAVERECTL@@PEAVREGION@@@Z.c)
 *     ?IsRectEmptyInl@@YAHPEBUtagRECT@@@Z @ 0x1C00918C4 (-IsRectEmptyInl@@YAHPEBUtagRECT@@@Z.c)
 *     ?vOrder@ERECTL@@QEAAXXZ @ 0x1C009DA98 (-vOrder@ERECTL@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C015BB90 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C015D150 (_guard_dispatch_icall_nop.c)
 *     ??XERECTL@@QEAAAEAV0@AEAU_RECTL@@@Z @ 0x1C025B15C (--XERECTL@@QEAAAEAV0@AEAU_RECTL@@@Z.c)
 *     ?bEmpty@ERECTL@@QEAAHXZ @ 0x1C025E4BC (-bEmpty@ERECTL@@QEAAHXZ.c)
 *     ?bHasSurface@XDCOBJ@@QEAAHXZ @ 0x1C026142C (-bHasSurface@XDCOBJ@@QEAAHXZ.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDWMSPRITEREF@@@@QEAA@XZ @ 0x1C0290DF0 (--1-$UnexpectedThreadTerminationHandler@VDWMSPRITEREF@@@@QEAA@XZ.c)
 */

int __fastcall bSpDwmValidateSurface(struct XDCOBJ *a1, LONG a2, LONG a3, int a4, int a5)
{
  int v5; // edi
  __int64 v6; // r13
  __int64 v7; // r9
  int v9; // r14d
  REGION *v10; // r15
  __int64 v11; // r9
  __int64 v12; // rax
  __int64 v14; // rbx
  __int64 v15; // rcx
  struct EPOINTL *v16; // rax
  LONG v17; // edx
  __int64 v18; // r9
  __int64 v19; // rcx
  __int64 v20; // r9
  int v21; // r12d
  __int64 v22; // r15
  __int64 v23; // rcx
  __int64 v24; // rax
  __int64 v25; // rax
  LONG v26; // eax
  LONG v27; // r13d
  int v28; // r12d
  __int64 v29; // rax
  LONG v30; // edx
  LONG v31; // r8d
  REGION *v32; // r8
  REGION *v33; // r8
  __int64 v34; // r9
  HSURF v35; // r12
  int v36; // ebx
  __int64 v37; // rax
  int v39; // [rsp+50h] [rbp-B0h]
  LONG left; // [rsp+50h] [rbp-B0h]
  int v42[2]; // [rsp+58h] [rbp-A8h]
  LONG top; // [rsp+58h] [rbp-A8h]
  int v44; // [rsp+5Ch] [rbp-A4h]
  struct _POINTL v45; // [rsp+68h] [rbp-98h] BYREF
  unsigned __int64 v46; // [rsp+70h] [rbp-90h] BYREF
  __int64 v47; // [rsp+78h] [rbp-88h] BYREF
  REGION *v48; // [rsp+80h] [rbp-80h]
  REGION *v49; // [rsp+88h] [rbp-78h] BYREF
  int v50; // [rsp+90h] [rbp-70h]
  struct tagRECT v51; // [rsp+98h] [rbp-68h] BYREF
  int v52; // [rsp+A8h] [rbp-58h]
  int v53; // [rsp+ACh] [rbp-54h]
  int v54; // [rsp+B0h] [rbp-50h]
  int v55; // [rsp+B4h] [rbp-4Ch]
  __int64 v56; // [rsp+B8h] [rbp-48h]
  int v57; // [rsp+C0h] [rbp-40h]
  int v58; // [rsp+C4h] [rbp-3Ch]
  _QWORD v59[2]; // [rsp+C8h] [rbp-38h] BYREF
  _QWORD v60[2]; // [rsp+D8h] [rbp-28h] BYREF
  _BYTE v61[32]; // [rsp+E8h] [rbp-18h] BYREF
  __int64 v62; // [rsp+108h] [rbp+8h]
  _BYTE v63[112]; // [rsp+110h] [rbp+10h] BYREF
  _BYTE v64[112]; // [rsp+180h] [rbp+80h] BYREF
  struct _RECTL v65; // [rsp+1F0h] [rbp+F0h] BYREF
  struct _RECTL v66; // [rsp+200h] [rbp+100h] BYREF

  v5 = 0;
  v6 = a4;
  v7 = *(_QWORD *)a1;
  v9 = 0;
  v10 = 0LL;
  v46 = 0LL;
  v48 = 0LL;
  if ( !v7
    || (*(_DWORD *)(v7 + 36) & 0x200) == 0
    || !g_pDwmState
    || (*(_DWORD *)(v7 + 36) & 0x4001) != 0x4001
    || !*(_QWORD *)(v7 + 488)
    || !(unsigned int)XDCOBJ::bHasSurface(a1)
    || !*(_DWORD *)(v11 + 504) && !*(_DWORD *)(v11 + 508)
    || KeAreApcsDisabled() )
  {
    return 0;
  }
  DEVLOCKOBJ::DEVLOCKOBJ((DEVLOCKOBJ *)v63, a1, 0);
  if ( (v63[24] & 1) == 0 )
    goto LABEL_13;
  v12 = *(_QWORD *)a1;
  if ( !*(_QWORD *)(*(_QWORD *)a1 + 520LL) )
  {
    v14 = *(_QWORD *)(*(_QWORD *)(v12 + 48) + 40LL);
    if ( !*(_DWORD *)(v12 + 508) )
    {
      v15 = *(_QWORD *)(v12 + 1544);
      if ( !v15 )
        goto LABEL_13;
      v51 = *(struct tagRECT *)(v15 + 88);
      if ( (unsigned int)IsRectEmptyInl(&v51) )
        goto LABEL_13;
    }
    if ( !(_DWORD)v6 )
      goto LABEL_13;
    if ( !a5 )
      goto LABEL_13;
    if ( (unsigned __int64)(v6 + a2 + 0x80000000LL) > 0xFFFFFFFF )
      goto LABEL_13;
    if ( (unsigned __int64)(a5 + (__int64)a3 + 0x80000000LL) > 0xFFFFFFFF )
      goto LABEL_13;
    EXFORMOBJ::vQuickInit((EXFORMOBJ *)v60, a1, 0x204u);
    if ( (*(_DWORD *)(v60[0] + 32LL) & 2) == 0 )
      goto LABEL_13;
    v45.x = a2;
    v45.y = a3;
    EXFORMOBJ::bXform((EXFORMOBJ *)v60, &v45, 1uLL);
    v16 = DC::eptlOrigin(*(DC **)a1);
    v17 = *((_DWORD *)v16 + 1) + v45.y;
    v45.x += *(_DWORD *)v16;
    v45.y = v17;
    v65.left = v45.x;
    v65.bottom = v17 + a5;
    v65.top = v17;
    v65.right = v45.x + v6;
    ERECTL::vOrder((ERECTL *)&v65);
    v19 = *(_QWORD *)(v18 + 512);
    v56 = 0LL;
    v57 = *(_DWORD *)(v19 + 56);
    v58 = *(_DWORD *)(v19 + 60);
    ERECTL::operator*=(&v65);
    if ( (unsigned int)IsRectEmptyInl((const struct tagRECT *)&v65) )
      goto LABEL_13;
    if ( *(_DWORD *)(v20 + 508) )
    {
      v28 = v44;
      v27 = a3;
      goto LABEL_71;
    }
    if ( (*(_DWORD *)(v20 + 36) & 0x4000) != 0 )
      SURFACE::bUnMap(*(SURFACE **)(v20 + 512), 0LL, (struct DC *)v20);
    v21 = 0;
    v39 = 0;
    GreAcquireSemaphore(ghsemDwmState);
    EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemDwmState", ghsemDwmState, 7LL);
    if ( !g_pDwmState )
    {
      v28 = v44;
      v27 = a3;
LABEL_63:
      EtwTraceGreLockReleaseSemaphore(L"ghsemDwmState", ghsemDwmState);
      GreReleaseSemaphoreInternal(ghsemDwmState);
      if ( (*(_DWORD *)(*(_QWORD *)a1 + 36LL) & 0x4000) != 0
        && (unsigned int)SURFACE::Map(*(_QWORD *)(*(_QWORD *)a1 + 512LL), 0LL, *(_QWORD *)a1) == 2 )
      {
        *(_DWORD *)(*(_QWORD *)a1 + 44LL) |= 1u;
LABEL_66:
        if ( v10 )
          REGION::vDeleteREGION(v10);
        goto LABEL_13;
      }
      if ( !v39 )
        goto LABEL_13;
LABEL_71:
      if ( *(_DWORD *)(*(_QWORD *)a1 + 508LL) )
      {
        v65.left += *(_DWORD *)(v14 + 2608);
        v65.right += *(_DWORD *)(v14 + 2608);
        v65.top += *(_DWORD *)(v14 + 2612);
        v65.bottom += *(_DWORD *)(v14 + 2612);
      }
      else
      {
        v65.left += v27;
        v65.right += v27;
        v65.top += v28;
        v65.bottom += v28;
      }
      ERECTL::operator*=(&v65);
      if ( !(unsigned int)IsRectEmptyInl((const struct tagRECT *)&v65) )
      {
        left = v65.left;
        top = v65.top;
        if ( *(_DWORD *)(v34 + 508) )
        {
          v65.left -= *(_DWORD *)(v14 + 2608);
          v65.right -= *(_DWORD *)(v14 + 2608);
          v65.top -= *(_DWORD *)(v14 + 2612);
          v65.bottom -= *(_DWORD *)(v14 + 2612);
        }
        else
        {
          v65.right -= v27;
          v65.left -= v27;
          v65.bottom -= v28;
          v65.top -= v28;
        }
        v35 = *(HSURF *)(*(_QWORD *)(v34 + 512) + 32LL);
        DEVLOCKOBJ::~DEVLOCKOBJ((DEVLOCKOBJ *)v63);
        v36 = 8;
        while ( 1 )
        {
          DEVLOCKOBJ::DEVLOCKOBJ((DEVLOCKOBJ *)v64, a1, 0);
          v37 = *(_QWORD *)(*(_QWORD *)a1 + 48LL);
          if ( v37 )
          {
            if ( *(_QWORD *)(v37 + 3496) )
            {
              v9 = (*(__int64 (__fastcall **)(_QWORD, unsigned __int64 *))(v37 + 3496))(*(_QWORD *)(v37 + 1824), &v46);
              if ( v9 == 258 )
              {
                KeDelayExecutionThread(0, 0, gpLockShortDelay);
                --v36;
              }
            }
          }
          else
          {
            v9 = -1073741823;
          }
          DEVLOCKOBJ::~DEVLOCKOBJ((DEVLOCKOBJ *)v64);
          if ( v9 != 258 )
            break;
          if ( !v36 )
            goto LABEL_86;
        }
        if ( v9 >= 0 )
          return bSpDwmUpdateSurface(0LL, 0, v46, a1, v35, 1.0, left, top, (struct ERECTL *)&v65, v10);
LABEL_86:
        if ( v10 )
          REGION::vDeleteREGION(v10);
        return v5;
      }
      goto LABEL_66;
    }
    DWMSPRITEREF::DWMSPRITEREF((DWMSPRITEREF *)v61, *(HWND *)(*(_QWORD *)a1 + 488LL));
    v22 = v62;
    if ( !v62 )
    {
      v28 = v44;
      v27 = a3;
LABEL_61:
      v62 = 0LL;
      UnexpectedThreadTerminationHandler<DWMSPRITEREF>::~UnexpectedThreadTerminationHandler<DWMSPRITEREF>(v61);
      v10 = v48;
      goto LABEL_63;
    }
    v23 = *(_QWORD *)(v62 + 128);
    *(_QWORD *)v42 = v23;
    if ( (*(_DWORD *)(v23 + 256) & 0x200) != 0 )
      goto LABEL_48;
    v24 = *(_QWORD *)(*(_QWORD *)a1 + 512LL);
    v25 = v24 ? v24 + 24 : 0LL;
    if ( *(_QWORD *)(v23 + 192) != v25 )
      goto LABEL_48;
    if ( *(_QWORD *)(v23 + 88) )
    {
      v47 = *(_QWORD *)(v23 + 88);
      RGNMEMOBJTMP::RGNMEMOBJTMP((RGNMEMOBJTMP *)v59);
      if ( v47 && v59[0] && !RGNOBJ::bContain((RGNOBJ *)&v47, &v65) )
      {
        RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)&v49);
        if ( v49 )
        {
          v26 = *(_DWORD *)(v22 + 64) - *(_DWORD *)(v22 + 56);
          v66.bottom = *(_DWORD *)(v22 + 68) - *(_DWORD *)(v22 + 60);
          *(_QWORD *)&v66.left = 0LL;
          v66.right = v26;
          RGNOBJ::vSet((RGNOBJ *)v59, &v66);
          if ( RGNOBJ::iCombine((RGNOBJ *)&v49, (struct RGNOBJ *)v59, (struct RGNOBJ *)&v47, BYTE4(gafjRgnOp)) )
          {
            v21 = 1;
            v48 = v49;
            v39 = 1;
          }
          else if ( v49 )
          {
            REGION::vDeleteREGION(v49);
          }
        }
        if ( v50 == 1 )
          RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v49);
      }
      RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)v59);
      if ( !v21 )
      {
        v22 = v62;
LABEL_48:
        v27 = v42[0];
        v28 = v42[1];
LABEL_49:
        if ( v22 )
          _InterlockedDecrement((volatile signed __int32 *)(v22 + 12));
        goto LABEL_61;
      }
      v23 = *(_QWORD *)v42;
    }
    else
    {
      v39 = 1;
    }
    v29 = *(_QWORD *)(v23 + 192);
    if ( v29 )
    {
      v30 = *(_DWORD *)(v29 + 32);
      v31 = *(_DWORD *)(v29 + 36);
    }
    else
    {
      v31 = HIDWORD(v46);
      v30 = v46;
    }
    v27 = *(_DWORD *)(v22 + 56);
    v28 = *(_DWORD *)(v22 + 60);
    v65.bottom = v31;
    v32 = v48;
    *(_QWORD *)&v65.left = 0LL;
    v65.right = v30;
    *(_DWORD *)(v23 + 256) |= 0x200u;
    if ( v32 )
    {
      v52 = *((_DWORD *)v32 + 22);
      v53 = *((_DWORD *)v32 + 23);
      v54 = *((_DWORD *)v32 + 24);
      v55 = *((_DWORD *)v32 + 25);
      ERECTL::operator*=(&v65);
      if ( (unsigned int)ERECTL::bEmpty((ERECTL *)&v65) )
      {
        REGION::vDeleteREGION(v33);
        v39 = 0;
        *(_DWORD *)(*(_QWORD *)v42 + 256LL) |= 0x200u;
      }
    }
    v22 = v62;
    goto LABEL_49;
  }
  v5 = 1;
LABEL_13:
  DEVLOCKOBJ::~DEVLOCKOBJ((DEVLOCKOBJ *)v63);
  return v5;
}
