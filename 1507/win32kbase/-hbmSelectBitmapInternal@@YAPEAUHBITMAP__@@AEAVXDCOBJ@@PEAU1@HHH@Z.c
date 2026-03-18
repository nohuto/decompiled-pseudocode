/*
 * XREFs of ?hbmSelectBitmapInternal@@YAPEAUHBITMAP__@@AEAVXDCOBJ@@PEAU1@HHH@Z @ 0x1C00B72F0
 * Callers:
 *     hbmSelectBitmap @ 0x1C0039900 (hbmSelectBitmap.c)
 * Callees:
 *     IsvMirrorIncludeNotifySupported_0 @ 0x1C0001640 (IsvMirrorIncludeNotifySupported_0.c)
 *     vMirrorIncludeNotifyWrap_0 @ 0x1C0001648 (vMirrorIncludeNotifyWrap_0.c)
 *     EtwTraceGreLockReleaseSemaphore @ 0x1C0008270 (EtwTraceGreLockReleaseSemaphore.c)
 *     EtwTraceGreLockAcquireSemaphoreShared @ 0x1C000B5B0 (EtwTraceGreLockAcquireSemaphoreShared.c)
 *     EngAcquireSemaphore @ 0x1C000D220 (EngAcquireSemaphore.c)
 *     GreAcquireHmgrSemaphore @ 0x1C00398C0 (GreAcquireHmgrSemaphore.c)
 *     ?vDec_cRef@SURFACE@@QEAAXXZ @ 0x1C003A8E0 (-vDec_cRef@SURFACE@@QEAAXXZ.c)
 *     ??1SURFREF@@QEAA@XZ @ 0x1C003A914 (--1SURFREF@@QEAA@XZ.c)
 *     ??0SURFREF@@QEAA@PEAUHSURF__@@@Z @ 0x1C003A938 (--0SURFREF@@QEAA@PEAUHSURF__@@@Z.c)
 *     ??1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C003A980 (--1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ??0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C003A9B0 (--0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     GreReleaseHmgrSemaphore @ 0x1C003A9F0 (GreReleaseHmgrSemaphore.c)
 *     GreReleaseSemaphoreInternal @ 0x1C003AA20 (GreReleaseSemaphoreInternal.c)
 *     GreAcquireSemaphoreSharedInternal @ 0x1C003AA40 (GreAcquireSemaphoreSharedInternal.c)
 *     bIsCompatible @ 0x1C003AA50 (bIsCompatible.c)
 *     HmgShareLockCheck @ 0x1C003AFC0 (HmgShareLockCheck.c)
 *     DEC_SHARE_REF_CNT @ 0x1C003BD20 (DEC_SHARE_REF_CNT.c)
 *     ?vUpdate_VisRect@DC@@QEAAXPEAVREGION@@@Z @ 0x1C003C4C0 (-vUpdate_VisRect@DC@@QEAAXPEAVREGION@@@Z.c)
 *     ?dwSetLayout@DC@@QEAAKJK@Z @ 0x1C003CB30 (-dwSetLayout@DC@@QEAAKJK@Z.c)
 *     ?bSetDefaultRegion@DC@@QEAAHXZ @ 0x1C003DBA0 (-bSetDefaultRegion@DC@@QEAAHXZ.c)
 *     INC_SHARE_REF_CNT @ 0x1C005E660 (INC_SHARE_REF_CNT.c)
 *     ?bDIBSection@SURFACE@@QEAAHXZ @ 0x1C006A0C0 (-bDIBSection@SURFACE@@QEAAHXZ.c)
 *     ??0?$UnexpectedThreadTerminationHandler@VSURFREF@@@@QEAA@XZ @ 0x1C00AEEB0 (--0-$UnexpectedThreadTerminationHandler@VSURFREF@@@@QEAA@XZ.c)
 *     ?ReleaseLock@CPushLock@@QEBAXXZ @ 0x1C00AF724 (-ReleaseLock@CPushLock@@QEBAXXZ.c)
 *     ?bDeleteSurface@SURFREF@@QEAAHW4_CLEANUPTYPE@@H@Z @ 0x1C00B0E60 (-bDeleteSurface@SURFREF@@QEAAHW4_CLEANUPTYPE@@H@Z.c)
 *     ?vUnrefPalette@XEPALOBJ@@QEAAXXZ @ 0x1C00B1940 (-vUnrefPalette@XEPALOBJ@@QEAAXXZ.c)
 *     ?AcquireLockShared@CPushLock@@QEBAJXZ @ 0x1C00B3DC8 (-AcquireLockShared@CPushLock@@QEBAJXZ.c)
 *     bIsSurfaceAllowedInDC @ 0x1C00BFE30 (bIsSurfaceAllowedInDC.c)
 */

HBITMAP __fastcall hbmSelectBitmapInternal(DC **a1, HBITMAP a2, int a3, int a4, int a5)
{
  int v8; // ebx
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // rdx
  DYNAMICMODECHANGESHARELOCK *v12; // rcx
  __int64 v13; // r8
  struct _ERESOURCE *v14; // rdi
  int v15; // ebx
  __int64 v16; // r8
  int v17; // edx
  __int64 v18; // rcx
  int v19; // r8d
  __int64 v20; // r8
  SURFACE *v21; // rsi
  __int64 v22; // r9
  __int64 v23; // rcx
  __int64 v24; // rdx
  bool v25; // r14
  DC *v26; // r10
  SURFACE *v27; // r14
  unsigned int v28; // r13d
  DC *v29; // rax
  int v30; // eax
  BOOL v31; // ecx
  DC *v32; // rax
  DC *v33; // rdx
  bool v34; // zf
  SURFACE *v35; // rcx
  __int64 v36; // rdx
  __int64 v37; // rax
  BOOL v38; // eax
  __int64 v39; // rcx
  __int64 v40; // rdx
  __int64 v41; // rcx
  __int64 v42; // r8
  DC *v43; // rsi
  _BYTE v45[8]; // [rsp+38h] [rbp-51h] BYREF
  HSURF v46; // [rsp+40h] [rbp-49h]
  HBITMAP v47; // [rsp+48h] [rbp-41h]
  unsigned int v48; // [rsp+50h] [rbp-39h]
  __int64 v49; // [rsp+58h] [rbp-31h] BYREF
  __int64 v50; // [rsp+60h] [rbp-29h]
  _BYTE v51[32]; // [rsp+68h] [rbp-21h] BYREF
  SURFACE *v52; // [rsp+88h] [rbp-1h]
  _BYTE v53[40]; // [rsp+90h] [rbp+7h] BYREF

  v47 = 0LL;
  v46 = 0LL;
  v8 = (int)a2;
  UnexpectedThreadTerminationHandler<SURFREF>::UnexpectedThreadTerminationHandler<SURFREF>(v51);
  v52 = 0LL;
  DYNAMICMODECHANGESHARELOCK::DYNAMICMODECHANGESHARELOCK((DYNAMICMODECHANGESHARELOCK *)v45, v9, v10);
  v52 = (SURFACE *)HmgShareLockCheck(v8, 5);
  if ( v52 )
  {
    v14 = ghsemGreLock;
    v15 = 1;
    if ( a4 == 1 )
    {
      GreAcquireSemaphoreSharedInternal((__int64)ghsemGreLock);
      EtwTraceGreLockAcquireSemaphoreShared((__int64)L"hsem", (__int64)v14, v16);
    }
    else
    {
      EngAcquireSemaphore((HSEMAPHORE)ghsemGreLock);
    }
    GreAcquireHmgrSemaphore(v18, v17, v19);
    v20 = (__int64)*a1;
    v21 = v52;
    v22 = *((_QWORD *)*a1 + 6);
    v23 = (unsigned __int16)*(_DWORD *)*a1;
    v50 = v22;
    v24 = 3 * v23;
    v25 = (*(_DWORD *)(*(_QWORD *)&WPP_MAIN_CB.AlignmentRequirement + 24 * v23 + 8) & 0xFFFFFFFE) == 0;
    if ( *(_DWORD *)(v20 + 32) != 1 )
      goto LABEL_77;
    v23 = 512LL;
    if ( *((_DWORD *)v52 + 40)
      && ((*(_DWORD *)v52 & 0x800000) == 0 || (*((_WORD *)v52 + 51) & 0x200) == 0)
      && *((_QWORD *)v52 + 19) != *(_QWORD *)v20 )
    {
      goto LABEL_77;
    }
    if ( !(unsigned int)bIsCompatible(&v49, *((_QWORD *)v52 + 15), (__int64)v52, v22, 1)
      || !(unsigned int)bIsSurfaceAllowedInDC(v21, *((_QWORD *)*a1 + 6))
      || !v25 && (*((_DWORD *)v21 + 28) & 0x800) != 0
      || !a5 && v25 )
    {
      goto LABEL_77;
    }
    v27 = (SURFACE *)*((_QWORD *)v26 + 64);
    v23 = 0x4000000LL;
    if ( !v27 )
      v27 = SURFACE::pdibDefault;
    if ( ((*((_DWORD *)v27 + 28) & 0x4000000) == 0
       || (*((_DWORD *)v21 + 28) & 0x4000000) == 0
       || (*((_DWORD *)v27 + 29) & 0x200) != 0)
      && !a4
      && !a3 )
    {
      goto LABEL_77;
    }
    v48 = *(_DWORD *)(*((_QWORD *)v26 + 10) + 312LL);
    v28 = v48 & 7;
    if ( (v48 & 7) != 0 )
      DC::dwSetLayout(v26, -1, 0);
    v23 = v49;
    if ( *((_QWORD *)v21 + 15) != v49 )
    {
      *((_DWORD *)v21 + 28) |= 0x8000000u;
      *((_QWORD *)v21 + 15) = v23;
      if ( v23 )
        INC_SHARE_REF_CNT((_DWORD *)v23);
    }
    if ( (*((_DWORD *)v27 + 28) & 0x1000000) != 0 )
      v46 = *(HSURF *)v27;
    v47 = (HBITMAP)*((_QWORD *)v27 + 4);
    if ( a2 != v47 )
    {
      v29 = *a1;
      if ( v21 == SURFACE::pdibDefault )
      {
        *((_QWORD *)v29 + 64) = 0LL;
      }
      else
      {
        *((_QWORD *)v29 + 64) = v21;
        if ( (*(_DWORD *)v21 & 0x800000) != 0 && (*((_WORD *)v21 + 51) & 0x200) != 0
          || !*((_WORD *)v21 + 50) && *((_DWORD *)v21 + 53) )
        {
          *((_DWORD *)*a1 + 9) |= 0x10000u;
        }
        else
        {
          *((_DWORD *)*a1 + 9) &= ~0x10000u;
        }
      }
      *((_QWORD *)*a1 + 66) = *((_QWORD *)v21 + 7);
      *(_DWORD *)(*((_QWORD *)*a1 + 10) + 8LL) |= 0xFu;
      if ( v27 != SURFACE::pdibDefault )
      {
        if ( (*((_DWORD *)v27 + 28) & 0x10) != 0 && (int)IsvMirrorIncludeNotifySupported_0() >= 0 )
          vMirrorIncludeNotifyWrap_0();
        SURFACE::vDec_cRef(v27);
        if ( !*((_DWORD *)v27 + 40) )
        {
          if ( v46 )
            v46 = *(HSURF *)v27;
          if ( (*((_DWORD *)v27 + 28) & 0x8000000) != 0 )
          {
            v49 = *((_QWORD *)v27 + 15);
            *((_QWORD *)v27 + 15) = 0LL;
            XEPALOBJ::vUnrefPalette((XEPALOBJ *)&v49);
          }
          *((_DWORD *)v27 + 28) &= ~0x8000000u;
        }
      }
      if ( (int)IsvMirrorIncludeNotifySupported_0() >= 0 )
        vMirrorIncludeNotifyWrap_0();
      v30 = *((_DWORD *)v21 + 28);
      v31 = (v30 & 0x4000) != 0 || (v30 & 0x800010) != 0 && (*(_DWORD *)(v50 + 56) & 1) != 0;
      v32 = *a1;
      if ( v31 )
        *((_DWORD *)v32 + 9) |= 0x200u;
      else
        *((_DWORD *)v32 + 9) &= ~0x200u;
      v33 = *a1;
      if ( (*((_DWORD *)*a1 + 9) & *((_DWORD *)v21 + 28) & 0x200) != 0 )
        *((_DWORD *)v33 + 9) |= 0x8000u;
      else
        *((_DWORD *)v33 + 9) &= ~0x8000u;
      if ( v21 != SURFACE::pdibDefault )
      {
        INC_SHARE_REF_CNT(v21);
        ++*((_DWORD *)v21 + 40);
        if ( (*(_DWORD *)v21 & 0x800000) == 0 || (*((_WORD *)v21 + 51) & 0x200) == 0 )
        {
          *((_QWORD *)v21 + 19) = *(_QWORD *)*a1;
          *((_QWORD *)v21 + 6) = *((_QWORD *)*a1 + 6);
        }
      }
      v34 = !SURFACE::bDIBSection(v21);
      v37 = *(_QWORD *)(v36 + 80);
      if ( v34 )
        *(_DWORD *)(v37 + 8) &= ~0x4000u;
      else
        *(_DWORD *)(v37 + 8) |= 0x4000u;
      v38 = SURFACE::bDIBSection(v35);
      v39 = *((_QWORD *)*a1 + 10);
      if ( v38 )
        *(_QWORD *)(v39 + 128) = *((_QWORD *)v21 + 25);
      else
        *(_QWORD *)(v39 + 128) = 0LL;
      DEC_SHARE_REF_CNT(v52);
      v52 = 0LL;
      GreReleaseHmgrSemaphore(v41, v40, v42);
      v15 = 0;
      DC::bSetDefaultRegion(*a1);
      v43 = *a1;
      CPushLock::AcquireLockShared((DC *)((char *)*a1 + 1504));
      DC::vUpdate_VisRect(*a1, *((struct REGION **)*a1 + 192));
      CPushLock::ReleaseLock((DC *)((char *)v43 + 1504));
      if ( v46 )
      {
        SURFREF::SURFREF((SURFREF *)v53, v46);
        SURFREF::bDeleteSurface((__int64)v53, 0);
        v47 = qword_1C0101078;
        SURFREF::~SURFREF((SURFREF *)v53);
      }
    }
    if ( v28 )
      DC::dwSetLayout(*a1, -1, v48);
    if ( v15 )
LABEL_77:
      GreReleaseHmgrSemaphore(v23, v24, v20);
    EtwTraceGreLockReleaseSemaphore((__int64)L"hsem", (__int64)v14, v20);
    GreReleaseSemaphoreInternal(v14);
  }
  DYNAMICMODECHANGESHARELOCK::~DYNAMICMODECHANGESHARELOCK(v12, v11, v13);
  SURFREF::~SURFREF((SURFREF *)v51);
  return v47;
}
