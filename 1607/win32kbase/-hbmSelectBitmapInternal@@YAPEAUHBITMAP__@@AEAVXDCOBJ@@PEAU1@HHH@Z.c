/*
 * XREFs of ?hbmSelectBitmapInternal@@YAPEAUHBITMAP__@@AEAVXDCOBJ@@PEAU1@HHH@Z @ 0x1C00C4EA0
 * Callers:
 *     hbmSelectBitmap @ 0x1C0025B20 (hbmSelectBitmap.c)
 * Callees:
 *     IsvMirrorIncludeNotifySupported_0 @ 0x1C0001650 (IsvMirrorIncludeNotifySupported_0.c)
 *     vMirrorIncludeNotifyWrap_0 @ 0x1C0001658 (vMirrorIncludeNotifyWrap_0.c)
 *     ?ReleaseLock@CPushLock@@QEBAXXZ @ 0x1C001B12C (-ReleaseLock@CPushLock@@QEBAXXZ.c)
 *     ?AcquireLockShared@CPushLock@@QEBAJXZ @ 0x1C001B168 (-AcquireLockShared@CPushLock@@QEBAJXZ.c)
 *     GreAcquireHmgrSemaphore @ 0x1C0025AB0 (GreAcquireHmgrSemaphore.c)
 *     EngAcquireSemaphore @ 0x1C0025AF0 (EngAcquireSemaphore.c)
 *     ?vDec_cRef@SURFACE@@QEAAXXZ @ 0x1C0026A8C (-vDec_cRef@SURFACE@@QEAAXXZ.c)
 *     ?bDIBSection@SURFACE@@QEAAHXZ @ 0x1C0026AC0 (-bDIBSection@SURFACE@@QEAAHXZ.c)
 *     ??1SURFREF@@QEAA@XZ @ 0x1C0026AD8 (--1SURFREF@@QEAA@XZ.c)
 *     ??0SURFREF@@QEAA@PEAUHSURF__@@@Z @ 0x1C0026AFC (--0SURFREF@@QEAA@PEAUHSURF__@@@Z.c)
 *     ??1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C0026B40 (--1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ??0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C0026B68 (--0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     GreReleaseHmgrSemaphore @ 0x1C0026BB0 (GreReleaseHmgrSemaphore.c)
 *     GreReleaseSemaphoreInternal @ 0x1C0026BF0 (GreReleaseSemaphoreInternal.c)
 *     GreAcquireSemaphoreSharedInternal @ 0x1C0026C10 (GreAcquireSemaphoreSharedInternal.c)
 *     bIsCompatible @ 0x1C0026C30 (bIsCompatible.c)
 *     INC_SHARE_REF_CNT @ 0x1C00294C0 (INC_SHARE_REF_CNT.c)
 *     HmgShareLockCheck @ 0x1C0029900 (HmgShareLockCheck.c)
 *     DEC_SHARE_REF_CNT @ 0x1C0029DA0 (DEC_SHARE_REF_CNT.c)
 *     ?GetEntryFromObject@GdiHandleManager@@QEAAPEAU_ENTRY@@PEAVOBJECT@@@Z @ 0x1C002ABE0 (-GetEntryFromObject@GdiHandleManager@@QEAAPEAU_ENTRY@@PEAVOBJECT@@@Z.c)
 *     ?dwSetLayout@DC@@QEAAKJK@Z @ 0x1C002BA20 (-dwSetLayout@DC@@QEAAKJK@Z.c)
 *     ?bSetDefaultRegion@DC@@QEAAHXZ @ 0x1C002C9A0 (-bSetDefaultRegion@DC@@QEAAHXZ.c)
 *     ?vUpdate_VisRect@DC@@QEAAXPEAVREGION@@@Z @ 0x1C002CD80 (-vUpdate_VisRect@DC@@QEAAXPEAVREGION@@@Z.c)
 *     EtwTraceGreLockReleaseSemaphore @ 0x1C0073A30 (EtwTraceGreLockReleaseSemaphore.c)
 *     EtwTraceGreLockAcquireSemaphoreShared @ 0x1C00740F0 (EtwTraceGreLockAcquireSemaphoreShared.c)
 *     ?bDeleteSurface@SURFREF@@QEAAHW4_CLEANUPTYPE@@H@Z @ 0x1C00BEDC0 (-bDeleteSurface@SURFREF@@QEAAHW4_CLEANUPTYPE@@H@Z.c)
 *     ?vUnrefPalette@XEPALOBJ@@QEAAXXZ @ 0x1C00BF6C0 (-vUnrefPalette@XEPALOBJ@@QEAAXXZ.c)
 *     ??0SURFREF@@QEAA@XZ @ 0x1C00C4E0C (--0SURFREF@@QEAA@XZ.c)
 *     bIsSurfaceAllowedInDC @ 0x1C00CD5C0 (bIsSurfaceAllowedInDC.c)
 */

HBITMAP __fastcall hbmSelectBitmapInternal(DC **a1, HBITMAP a2, int a3, int a4, int a5)
{
  unsigned int v7; // ebx
  DYNAMICMODECHANGESHARELOCK *v8; // rcx
  struct _ERESOURCE *v9; // rdi
  int v10; // ebx
  int v11; // edx
  __int64 v12; // rcx
  int v13; // r8d
  DC *v14; // r14
  struct OBJECT *v15; // rdx
  SURFACE *v16; // rsi
  __int64 v17; // rcx
  bool v18; // r12
  DC *v19; // r10
  SURFACE *v20; // r14
  unsigned int v21; // r13d
  DC *v22; // rax
  int v23; // eax
  BOOL v24; // ecx
  DC *v25; // rax
  DC *v26; // rdx
  bool v27; // zf
  SURFACE *v28; // rcx
  __int64 v29; // rdx
  __int64 v30; // rax
  int v31; // eax
  __int64 v32; // rcx
  __int64 v33; // rcx
  DC *v34; // rsi
  _BYTE v36[8]; // [rsp+38h] [rbp-61h] BYREF
  HSURF v37; // [rsp+40h] [rbp-59h]
  unsigned int v38; // [rsp+48h] [rbp-51h]
  HBITMAP v39; // [rsp+50h] [rbp-49h]
  struct _BASEOBJECT *v40; // [rsp+58h] [rbp-41h] BYREF
  __int64 v41; // [rsp+60h] [rbp-39h]
  _BYTE v42[32]; // [rsp+68h] [rbp-31h] BYREF
  SURFACE *v43; // [rsp+88h] [rbp-11h]
  _BYTE v44[88]; // [rsp+90h] [rbp-9h] BYREF

  v39 = 0LL;
  v37 = 0LL;
  v7 = (unsigned int)a2;
  SURFREF::SURFREF((SURFREF *)v42);
  DYNAMICMODECHANGESHARELOCK::DYNAMICMODECHANGESHARELOCK((DYNAMICMODECHANGESHARELOCK *)v36);
  v43 = (SURFACE *)HmgShareLockCheck(v7, 5);
  if ( v43 )
  {
    v9 = ghsemGreLock;
    v10 = 1;
    if ( a4 == 1 )
    {
      GreAcquireSemaphoreSharedInternal((__int64)ghsemGreLock);
      EtwTraceGreLockAcquireSemaphoreShared((__int64)L"hsem");
    }
    else
    {
      EngAcquireSemaphore((HSEMAPHORE)ghsemGreLock);
    }
    GreAcquireHmgrSemaphore(v12, v11, v13);
    v14 = *a1;
    v15 = *a1;
    v16 = v43;
    v41 = *((_QWORD *)*a1 + 6);
    v18 = (*((_DWORD *)GdiHandleManager::GetEntryFromObject(
                         (GdiHandleEntryDirectory **)WPP_MAIN_CB.Dpc.DeferredContext,
                         v15)
           + 2) & 0xFFFFFFFE) == 0;
    if ( *((_DWORD *)v14 + 8) != 1 )
      goto LABEL_77;
    v17 = 512LL;
    if ( *((_DWORD *)v16 + 40)
      && ((*(_DWORD *)v16 & 0x800000) == 0 || (*((_WORD *)v16 + 51) & 0x200) == 0)
      && *((_QWORD *)v16 + 19) != *(_QWORD *)v14 )
    {
      goto LABEL_77;
    }
    if ( !(unsigned int)bIsCompatible(&v40, *((_QWORD *)v16 + 15), (__int64)v16, v41, 1)
      || !(unsigned int)bIsSurfaceAllowedInDC(v16, *((_QWORD *)*a1 + 6))
      || !v18 && (*((_DWORD *)v16 + 28) & 0x800) != 0
      || !a5 && v18 )
    {
      goto LABEL_77;
    }
    v20 = (SURFACE *)*((_QWORD *)v19 + 64);
    v17 = 0x4000000LL;
    if ( !v20 )
      v20 = SURFACE::pdibDefault;
    if ( ((*((_DWORD *)v20 + 28) & 0x4000000) == 0
       || (*((_DWORD *)v16 + 28) & 0x4000000) == 0
       || (*((_DWORD *)v20 + 29) & 0x200) != 0)
      && !a4
      && !a3 )
    {
      goto LABEL_77;
    }
    v38 = *(_DWORD *)(*((_QWORD *)v19 + 10) + 312LL);
    v21 = v38 & 7;
    if ( (v38 & 7) != 0 )
      DC::dwSetLayout(v19, -1, 0);
    v17 = (__int64)v40;
    if ( *((struct _BASEOBJECT **)v16 + 15) != v40 )
    {
      *((_DWORD *)v16 + 28) |= 0x8000000u;
      *((_QWORD *)v16 + 15) = v17;
      if ( v17 )
        INC_SHARE_REF_CNT((struct _BASEOBJECT *)v17);
    }
    if ( (*((_DWORD *)v20 + 28) & 0x1000000) != 0 )
      v37 = *(HSURF *)v20;
    v39 = (HBITMAP)*((_QWORD *)v20 + 4);
    if ( a2 != v39 )
    {
      v22 = *a1;
      if ( v16 == SURFACE::pdibDefault )
      {
        *((_QWORD *)v22 + 64) = 0LL;
      }
      else
      {
        *((_QWORD *)v22 + 64) = v16;
        if ( (*(_DWORD *)v16 & 0x800000) != 0 && (*((_WORD *)v16 + 51) & 0x200) != 0
          || !*((_WORD *)v16 + 50) && *((_DWORD *)v16 + 54) )
        {
          *((_DWORD *)*a1 + 9) |= 0x10000u;
        }
        else
        {
          *((_DWORD *)*a1 + 9) &= ~0x10000u;
        }
      }
      *((_QWORD *)*a1 + 66) = *((_QWORD *)v16 + 7);
      *(_DWORD *)(*((_QWORD *)*a1 + 10) + 8LL) |= 0xFu;
      if ( v20 != SURFACE::pdibDefault )
      {
        if ( (*((_DWORD *)v20 + 28) & 0x10) != 0 && (int)IsvMirrorIncludeNotifySupported_0() >= 0 )
          vMirrorIncludeNotifyWrap_0();
        SURFACE::vDec_cRef(v20);
        if ( !*((_DWORD *)v20 + 40) )
        {
          if ( v37 )
            v37 = *(HSURF *)v20;
          if ( (*((_DWORD *)v20 + 28) & 0x8000000) != 0 )
          {
            v40 = (struct _BASEOBJECT *)*((_QWORD *)v20 + 15);
            *((_QWORD *)v20 + 15) = 0LL;
            XEPALOBJ::vUnrefPalette((unsigned int **)&v40);
          }
          *((_DWORD *)v20 + 28) &= ~0x8000000u;
        }
      }
      if ( (int)IsvMirrorIncludeNotifySupported_0() >= 0 )
        vMirrorIncludeNotifyWrap_0();
      v23 = *((_DWORD *)v16 + 28);
      v24 = (v23 & 0x4000) != 0 || (v23 & 0x800010) != 0 && (*(_DWORD *)(v41 + 56) & 1) != 0;
      v25 = *a1;
      if ( v24 )
        *((_DWORD *)v25 + 9) |= 0x200u;
      else
        *((_DWORD *)v25 + 9) &= ~0x200u;
      v26 = *a1;
      if ( (*((_DWORD *)v16 + 28) & *((_DWORD *)*a1 + 9) & 0x200) != 0 )
        *((_DWORD *)v26 + 9) |= 0x8000u;
      else
        *((_DWORD *)v26 + 9) &= ~0x8000u;
      if ( v16 != SURFACE::pdibDefault )
      {
        INC_SHARE_REF_CNT(v16);
        ++*((_DWORD *)v16 + 40);
        if ( (*(_DWORD *)v16 & 0x800000) == 0 || (*((_WORD *)v16 + 51) & 0x200) == 0 )
        {
          *((_QWORD *)v16 + 19) = *(_QWORD *)*a1;
          *((_QWORD *)v16 + 6) = *((_QWORD *)*a1 + 6);
        }
      }
      v27 = (unsigned int)SURFACE::bDIBSection(v16) == 0;
      v30 = *(_QWORD *)(v29 + 80);
      if ( v27 )
        *(_DWORD *)(v30 + 8) &= ~0x4000u;
      else
        *(_DWORD *)(v30 + 8) |= 0x4000u;
      v31 = SURFACE::bDIBSection(v28);
      v32 = *((_QWORD *)*a1 + 10);
      if ( v31 )
        *(_QWORD *)(v32 + 128) = *((_QWORD *)v16 + 26);
      else
        *(_QWORD *)(v32 + 128) = 0LL;
      DEC_SHARE_REF_CNT((unsigned int *)v43);
      v43 = 0LL;
      GreReleaseHmgrSemaphore(v33);
      v10 = 0;
      DC::bSetDefaultRegion(*a1);
      v34 = *a1;
      CPushLock::AcquireLockShared((DC *)((char *)*a1 + 1504));
      DC::vUpdate_VisRect(*a1, *((struct REGION **)*a1 + 192));
      CPushLock::ReleaseLock((DC *)((char *)v34 + 1504));
      if ( v37 )
      {
        SURFREF::SURFREF((SURFREF *)v44, v37);
        SURFREF::bDeleteSurface((__int64)v44, 0);
        v39 = (HBITMAP)gahStockObjects[21];
        SURFREF::~SURFREF((SURFREF *)v44);
      }
    }
    if ( v21 )
      DC::dwSetLayout(*a1, -1, v38);
    if ( v10 )
LABEL_77:
      GreReleaseHmgrSemaphore(v17);
    EtwTraceGreLockReleaseSemaphore((__int64)L"hsem");
    GreReleaseSemaphoreInternal(v9);
  }
  DYNAMICMODECHANGESHARELOCK::~DYNAMICMODECHANGESHARELOCK(v8);
  SURFREF::~SURFREF((SURFREF *)v42);
  return v39;
}
