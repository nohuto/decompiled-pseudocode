/*
 * XREFs of ?bSpDwmValidateSurface@@YAHAEAVXDCOBJ@@HHHH@Z @ 0x1C002E0E0
 * Callers:
 *     NtGdiGetPixel @ 0x1C002CF70 (NtGdiGetPixel.c)
 *     NtGdiPatBlt @ 0x1C00412C0 (NtGdiPatBlt.c)
 *     NtGdiAlphaBlend @ 0x1C0044190 (NtGdiAlphaBlend.c)
 *     GreStretchBltInternal @ 0x1C0046C60 (GreStretchBltInternal.c)
 *     NtGdiBitBltInternal @ 0x1C0048C50 (NtGdiBitBltInternal.c)
 *     NtGdiTransparentBlt @ 0x1C00F0040 (NtGdiTransparentBlt.c)
 *     GreMaskBlt @ 0x1C00F0648 (GreMaskBlt.c)
 *     ?bReadBackRect@DWMSCREENREADMODIFYWRITEASSIST@@QEAAHPEBU_RECTL@@@Z @ 0x1C0130704 (-bReadBackRect@DWMSCREENREADMODIFYWRITEASSIST@@QEAAHPEBU_RECTL@@@Z.c)
 *     GrePlgBlt @ 0x1C028000C (GrePlgBlt.c)
 * Callees:
 *     ??1RGNMEMOBJTMP@@QEAA@XZ @ 0x1C0016CC4 (--1RGNMEMOBJTMP@@QEAA@XZ.c)
 *     ??0RGNMEMOBJTMP@@QEAA@XZ @ 0x1C0016CEC (--0RGNMEMOBJTMP@@QEAA@XZ.c)
 *     ?vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z @ 0x1C0019C30 (-vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z.c)
 *     ?bXform@EXFORMOBJ@@QEAAHPEAU_POINTL@@_K@Z @ 0x1C0019C8C (-bXform@EXFORMOBJ@@QEAAHPEAU_POINTL@@_K@Z.c)
 *     ?eptlOrigin@DC@@QEAAAEAVEPOINTL@@XZ @ 0x1C0027E48 (-eptlOrigin@DC@@QEAAAEAVEPOINTL@@XZ.c)
 *     ??0DEVLOCKOBJ@@QEAA@AEAVXDCOBJ@@H@Z @ 0x1C002C838 (--0DEVLOCKOBJ@@QEAA@AEAVXDCOBJ@@H@Z.c)
 *     ?vDestructor@DEVLOCKOBJ@@QEAAXXZ @ 0x1C002C870 (-vDestructor@DEVLOCKOBJ@@QEAAXXZ.c)
 *     ?bContain@RGNOBJ@@QEAAHAEAU_RECTL@@@Z @ 0x1C0036A6C (-bContain@RGNOBJ@@QEAAHAEAU_RECTL@@@Z.c)
 *     ??XERECTL@@QEAAAEAV0@AEAU_RECTL@@@Z @ 0x1C0041C98 (--XERECTL@@QEAAAEAV0@AEAU_RECTL@@@Z.c)
 *     ?vOrder@ERECTL@@QEAAXXZ @ 0x1C0041DE4 (-vOrder@ERECTL@@QEAAXXZ.c)
 *     ?IsRectEmptyInl@@YAHPEBUtagRECT@@@Z @ 0x1C0041E08 (-IsRectEmptyInl@@YAHPEBUtagRECT@@@Z.c)
 *     ?vDeleteREGION@REGION@@QEAAXXZ @ 0x1C007B840 (-vDeleteREGION@REGION@@QEAAXXZ.c)
 *     ??0DWMSPRITEREF@@QEAA@PEAUHWND__@@@Z @ 0x1C007C138 (--0DWMSPRITEREF@@QEAA@PEAUHWND__@@@Z.c)
 *     ?bSpDwmUpdateSurface@@YAHPEAUHWND__@@I_KAEAVXDCOBJ@@PEAUHSURF__@@MHHAEAVERECTL@@PEAVREGION@@@Z @ 0x1C00C98FC (-bSpDwmUpdateSurface@@YAHPEAUHWND__@@I_KAEAVXDCOBJ@@PEAUHSURF__@@MHHAEAVERECTL@@PEAVREGION@@@Z.c)
 *     __security_check_cookie @ 0x1C01512D0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0152950 (_guard_dispatch_icall_nop.c)
 *     ?bEmpty@ERECTL@@QEAAHXZ @ 0x1C025DDE4 (-bEmpty@ERECTL@@QEAAHXZ.c)
 */

int __fastcall bSpDwmValidateSurface(struct XDCOBJ *a1, int a2, int a3, int a4, int a5)
{
  int v5; // esi
  __int64 v6; // rdi
  __int64 v8; // r12
  __int64 v9; // rcx
  REGION *v10; // r15
  __int64 v11; // r13
  __int64 v13; // rax
  __int64 v14; // rbx
  __int64 v15; // rcx
  struct EPOINTL *v16; // rax
  LONG v17; // edx
  LONG v18; // r8d
  __int64 v19; // r9
  __int64 v20; // rcx
  __int64 v21; // r9
  int v22; // r12d
  __int64 v23; // rdi
  __int64 v24; // rcx
  __int64 v25; // rax
  __int64 v26; // rax
  LONG y; // r13d
  LONG x; // r12d
  __int64 v29; // rdx
  int v30; // r8d
  int v31; // ecx
  __int64 v32; // r9
  HSURF v33; // r12
  int v34; // ebx
  int v35; // edi
  __int64 v36; // rax
  LONG v37; // eax
  __int64 v38; // rax
  LONG v39; // edx
  LONG v40; // r8d
  struct _POINTL v41; // [rsp+50h] [rbp-B0h] BYREF
  int top; // [rsp+58h] [rbp-A8h]
  __int64 v43; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v44; // [rsp+68h] [rbp-98h] BYREF
  int v45; // [rsp+70h] [rbp-90h]
  int v46; // [rsp+74h] [rbp-8Ch]
  __int64 v47; // [rsp+80h] [rbp-80h] BYREF
  REGION *v48; // [rsp+88h] [rbp-78h] BYREF
  int v49; // [rsp+90h] [rbp-70h]
  unsigned __int64 v50; // [rsp+98h] [rbp-68h] BYREF
  __int64 v51; // [rsp+A0h] [rbp-60h] BYREF
  int v52; // [rsp+A8h] [rbp-58h]
  int v53; // [rsp+ACh] [rbp-54h]
  struct tagRECT v54; // [rsp+B0h] [rbp-50h] BYREF
  _DWORD v55[4]; // [rsp+C0h] [rbp-40h] BYREF
  _QWORD v56[2]; // [rsp+D0h] [rbp-30h] BYREF
  _QWORD v57[2]; // [rsp+E0h] [rbp-20h] BYREF
  _BYTE v58[80]; // [rsp+F0h] [rbp-10h] BYREF
  _BYTE v59[80]; // [rsp+140h] [rbp+40h] BYREF
  struct _RECTL v60; // [rsp+190h] [rbp+90h] BYREF
  struct _RECTL v61; // [rsp+1A0h] [rbp+A0h] BYREF

  v5 = 0;
  v6 = a4;
  v8 = a3;
  v9 = *(_QWORD *)a1;
  v10 = 0LL;
  v11 = a2;
  v50 = 0LL;
  if ( !v9
    || (*(_DWORD *)(v9 + 36) & 0x200) == 0
    || !g_pDwmState
    || (*(_DWORD *)(v9 + 36) & 0x4001) != 0x4001
    || !*(_QWORD *)(v9 + 488)
    || !*(_QWORD *)(v9 + 512)
    || !*(_DWORD *)(v9 + 504) && !*(_DWORD *)(v9 + 508)
    || KeAreApcsDisabled() )
  {
    return 0;
  }
  DEVLOCKOBJ::DEVLOCKOBJ((DEVLOCKOBJ *)v58, a1, 0);
  if ( (v58[24] & 1) == 0 )
    goto LABEL_40;
  v13 = *(_QWORD *)a1;
  if ( *(_QWORD *)(*(_QWORD *)a1 + 520LL) )
  {
    v5 = 1;
    goto LABEL_40;
  }
  v14 = *(_QWORD *)(*(_QWORD *)(v13 + 48) + 40LL);
  if ( !*(_DWORD *)(v13 + 508) )
  {
    v15 = *(_QWORD *)(v13 + 1520);
    if ( !v15 )
      goto LABEL_40;
    v54 = *(struct tagRECT *)(v15 + 88);
    if ( (unsigned int)IsRectEmptyInl(&v54) )
      goto LABEL_40;
  }
  if ( !(_DWORD)v6 )
    goto LABEL_40;
  if ( !a5 )
    goto LABEL_40;
  if ( (unsigned __int64)(v6 + v11 + 0x80000000LL) > 0xFFFFFFFF )
    goto LABEL_40;
  if ( (unsigned __int64)(a5 + v8 + 0x80000000LL) > 0xFFFFFFFF )
    goto LABEL_40;
  EXFORMOBJ::vQuickInit((EXFORMOBJ *)v57, a1, 0x204u);
  if ( (*(_DWORD *)(v57[0] + 32LL) & 2) == 0 )
    goto LABEL_40;
  v41.x = v11;
  v41.y = v8;
  EXFORMOBJ::bXform((EXFORMOBJ *)v57, &v41);
  v16 = DC::eptlOrigin(*(DC **)a1);
  v17 = *((_DWORD *)v16 + 1) + v41.y;
  v18 = *(_DWORD *)v16 + v41.x;
  v60.bottom = v17 + a5;
  v41.x = v18;
  v41.y = v17;
  v60.left = v18;
  v60.right = v18 + v6;
  v60.top = v17;
  ERECTL::vOrder((ERECTL *)&v60);
  v20 = *(_QWORD *)(v19 + 512);
  v51 = 0LL;
  v52 = *(_DWORD *)(v20 + 56);
  v53 = *(_DWORD *)(v20 + 60);
  ERECTL::operator*=(&v60, &v51);
  if ( (unsigned int)IsRectEmptyInl((const struct tagRECT *)&v60) )
    goto LABEL_40;
  if ( *(_DWORD *)(v21 + 508) )
  {
    y = v41.y;
    x = v41.x;
    goto LABEL_43;
  }
  if ( (*(_DWORD *)(v21 + 36) & 0x4000) != 0 )
    SURFACE::bUnMap(*(SURFACE **)(v21 + 512), 0LL, (struct DC *)v21);
  v22 = 0;
  top = 0;
  GreAcquireSemaphore(ghsemDwmState);
  EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemDwmState", ghsemDwmState, 7LL);
  if ( !g_pDwmState
    || (DWMSPRITEREF::DWMSPRITEREF((DWMSPRITEREF *)&v47, *(HWND *)(*(_QWORD *)a1 + 488LL)), (v23 = v47) == 0) )
  {
    y = v41.y;
    x = v41.x;
    goto LABEL_37;
  }
  v24 = *(_QWORD *)(v47 + 128);
  v44 = v24;
  if ( (*(_DWORD *)(v24 + 256) & 0x200) != 0 )
    goto LABEL_35;
  v25 = *(_QWORD *)(*(_QWORD *)a1 + 512LL);
  v26 = v25 ? v25 + 24 : 0LL;
  if ( *(_QWORD *)(v24 + 192) != v26 )
    goto LABEL_35;
  if ( !*(_QWORD *)(v24 + 88) )
  {
    top = 1;
LABEL_64:
    v38 = *(_QWORD *)(v24 + 192);
    if ( v38 )
    {
      v39 = *(_DWORD *)(v38 + 32);
      v40 = *(_DWORD *)(v38 + 36);
    }
    else
    {
      v40 = HIDWORD(v47);
      v39 = v47;
    }
    x = *(_DWORD *)(v23 + 56);
    y = *(_DWORD *)(v23 + 60);
    *(_QWORD *)&v60.left = 0LL;
    v60.right = v39;
    v60.bottom = v40;
    *(_DWORD *)(v24 + 256) |= 0x200u;
    if ( v10 )
    {
      v55[0] = *((_DWORD *)v10 + 22);
      v55[1] = *((_DWORD *)v10 + 23);
      v55[2] = *((_DWORD *)v10 + 24);
      v55[3] = *((_DWORD *)v10 + 25);
      ERECTL::operator*=(&v60, v55);
      if ( (unsigned int)ERECTL::bEmpty((ERECTL *)&v60) )
      {
        REGION::vDeleteREGION(v10);
        top = 0;
        *(_DWORD *)(v44 + 256) |= 0x200u;
      }
    }
    goto LABEL_36;
  }
  v43 = *(_QWORD *)(v24 + 88);
  RGNMEMOBJTMP::RGNMEMOBJTMP((RGNMEMOBJTMP *)v56);
  if ( v43 && v56[0] && !(unsigned int)RGNOBJ::bContain((RGNOBJ *)&v43, &v60) )
  {
    RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)&v48);
    if ( v48 )
    {
      v37 = *(_DWORD *)(v23 + 64) - *(_DWORD *)(v23 + 56);
      v61.bottom = *(_DWORD *)(v23 + 68) - *(_DWORD *)(v23 + 60);
      *(_QWORD *)&v61.left = 0LL;
      v61.right = v37;
      RGNOBJ::vSet((RGNOBJ *)v56, &v61);
      if ( RGNOBJ::iCombine((RGNOBJ *)&v48, (struct RGNOBJ *)v56, (struct RGNOBJ *)&v43, BYTE4(gafjRgnOp)) )
      {
        v10 = v48;
        v22 = 1;
        top = 1;
      }
      else if ( v48 )
      {
        REGION::vDeleteREGION(v48);
      }
    }
    if ( v49 == 1 )
      RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v48);
  }
  RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)v56);
  if ( v22 )
  {
    v24 = v44;
    goto LABEL_64;
  }
LABEL_35:
  y = v41.y;
  x = v41.x;
LABEL_36:
  _InterlockedDecrement((volatile signed __int32 *)(v23 + 12));
LABEL_37:
  EtwTraceGreLockReleaseSemaphore(L"ghsemDwmState", ghsemDwmState);
  GreReleaseSemaphoreInternal(ghsemDwmState);
  if ( (*(_DWORD *)(*(_QWORD *)a1 + 36LL) & 0x4000) != 0
    && (unsigned int)SURFACE::Map(*(_QWORD *)(*(_QWORD *)a1 + 512LL), 0LL, *(_QWORD *)a1) == 2 )
  {
    *(_DWORD *)(*(_QWORD *)a1 + 44LL) |= 1u;
LABEL_80:
    if ( v10 )
      REGION::vDeleteREGION(v10);
    goto LABEL_40;
  }
  if ( top )
  {
LABEL_43:
    if ( *(_DWORD *)(*(_QWORD *)a1 + 508LL) )
    {
      v60.left += *(_DWORD *)(v14 + 2608);
      v60.right += *(_DWORD *)(v14 + 2608);
      v60.top += *(_DWORD *)(v14 + 2612);
      v60.bottom += *(_DWORD *)(v14 + 2612);
    }
    else
    {
      v60.left += x;
      v60.right += x;
      v60.top += y;
      v60.bottom += y;
    }
    v29 = *(_QWORD *)(v14 + 2576);
    v30 = *(_DWORD *)(v14 + 2612);
    LODWORD(v44) = *(_DWORD *)(v14 + 2608);
    v45 = *(_DWORD *)(v29 + 56) + v44;
    v31 = *(_DWORD *)(v29 + 60);
    HIDWORD(v44) = v30;
    v46 = v30 + v31;
    ERECTL::operator*=(&v60, &v44);
    if ( !(unsigned int)IsRectEmptyInl((const struct tagRECT *)&v60) )
    {
      v41.x = v60.left;
      top = v60.top;
      if ( *(_DWORD *)(v32 + 508) )
      {
        v60.left -= *(_DWORD *)(v14 + 2608);
        v60.right -= *(_DWORD *)(v14 + 2608);
        v60.top -= *(_DWORD *)(v14 + 2612);
        v60.bottom -= *(_DWORD *)(v14 + 2612);
      }
      else
      {
        v60.right -= x;
        v60.left -= x;
        v60.bottom -= y;
        v60.top -= y;
      }
      v33 = *(HSURF *)(*(_QWORD *)(v32 + 512) + 32LL);
      DEVLOCKOBJ::vDestructor((DEVLOCKOBJ *)v58);
      v34 = 0;
      v35 = 8;
      while ( 1 )
      {
        DEVLOCKOBJ::DEVLOCKOBJ((DEVLOCKOBJ *)v59, a1, 0);
        v36 = *(_QWORD *)(*(_QWORD *)a1 + 48LL);
        if ( v36 )
        {
          if ( *(_QWORD *)(v36 + 3496) )
          {
            v34 = (*(__int64 (__fastcall **)(_QWORD, unsigned __int64 *))(v36 + 3496))(*(_QWORD *)(v36 + 1824), &v50);
            if ( v34 == 258 )
            {
              KeDelayExecutionThread(0, 0, gpLockShortDelay);
              --v35;
            }
          }
        }
        else
        {
          v34 = -1073741823;
        }
        DEVLOCKOBJ::vDestructor((DEVLOCKOBJ *)v59);
        if ( v34 != 258 )
          break;
        if ( !v35 )
          goto LABEL_83;
      }
      if ( v34 >= 0 )
        return bSpDwmUpdateSurface(0LL, 0, v50, a1, v33, 1.0, v41.x, top, (struct ERECTL *)&v60, v10);
LABEL_83:
      if ( v10 )
        REGION::vDeleteREGION(v10);
      return v5;
    }
    goto LABEL_80;
  }
LABEL_40:
  DEVLOCKOBJ::vDestructor((DEVLOCKOBJ *)v58);
  return v5;
}
