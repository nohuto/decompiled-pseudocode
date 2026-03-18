/*
 * XREFs of ?bDeleteDCInternalWorker@@YAHPEAVXDCOBJ@@HHH@Z @ 0x1C0032CE0
 * Callers:
 *     NtGdiDeleteObjectApp @ 0x1C0028D90 (NtGdiDeleteObjectApp.c)
 *     bDeleteDCInternal @ 0x1C005A4D0 (bDeleteDCInternal.c)
 * Callees:
 *     IsWin32FreeToPagedLookasideListImplSupported_0 @ 0x1C0002C48 (IsWin32FreeToPagedLookasideListImplSupported_0.c)
 *     Win32FreeToPagedLookasideListImpl_0 @ 0x1C0002C50 (Win32FreeToPagedLookasideListImpl_0.c)
 *     ??B?$HmgLockResultBase@VDRVOBJ@@@@QEBA_NXZ @ 0x1C0027218 (--B-$HmgLockResultBase@VDRVOBJ@@@@QEBA_NXZ.c)
 *     ?bCleanDC@XDCOBJ@@QEAAHH@Z @ 0x1C0027340 (-bCleanDC@XDCOBJ@@QEAAHH@Z.c)
 *     ?bDeleteDC@XDCOBJ@@QEAAHH@Z @ 0x1C00285B0 (-bDeleteDC@XDCOBJ@@QEAAHH@Z.c)
 *     DEC_SHARE_REF_CNT @ 0x1C0029DA0 (DEC_SHARE_REF_CNT.c)
 *     ?GetEntry@GdiHandleEntryDirectory@@QEAAPEAU_ENTRY@@I_N@Z @ 0x1C002AFD0 (-GetEntry@GdiHandleEntryDirectory@@QEAAPEAU_ENTRY@@I_N@Z.c)
 *     ?vUnreferencePdev@PDEVOBJ@@QEAAXW4_CLEANUPTYPE@@@Z @ 0x1C0031C50 (-vUnreferencePdev@PDEVOBJ@@QEAAXW4_CLEANUPTYPE@@@Z.c)
 *     bFreeDCAttributesWorker @ 0x1C0034080 (bFreeDCAttributesWorker.c)
 *     ?vDeleteREGION@REGION@@QEAAXXZ @ 0x1C0036608 (-vDeleteREGION@REGION@@QEAAXXZ.c)
 *     Win32FreePool @ 0x1C0036A50 (Win32FreePool.c)
 *     ?vUnreferencePdevWorker@@YAXPEAUtagUNREFDATA@@@Z @ 0x1C0069C90 (-vUnreferencePdevWorker@@YAXPEAUtagUNREFDATA@@@Z.c)
 *     ??0AcquireDcVisRgnExclusive@@QEAA@PEAVDC@@@Z @ 0x1C00BD700 (--0AcquireDcVisRgnExclusive@@QEAA@PEAVDC@@@Z.c)
 *     ??1AcquireDcVisRgnShared@@QEAA@XZ @ 0x1C00BD78C (--1AcquireDcVisRgnShared@@QEAA@XZ.c)
 *     ?DEC_SHARE_REF_CNT_LAZY0@@YAXPEAVBRUSH@@@Z @ 0x1C00C0210 (-DEC_SHARE_REF_CNT_LAZY0@@YAXPEAVBRUSH@@@Z.c)
 *     ?DEC_SHARE_REF_CNT_LAZY_DEL_LOGFONT@@YAXPEAVLFONT@@@Z @ 0x1C00C02E0 (-DEC_SHARE_REF_CNT_LAZY_DEL_LOGFONT@@YAXPEAVLFONT@@@Z.c)
 *     Template_pqz @ 0x1C00CC378 (Template_pqz.c)
 *     Template_pz @ 0x1C00CC434 (Template_pz.c)
 */

__int64 __fastcall bDeleteDCInternalWorker(DC **this, int a2, int a3, int a4)
{
  int v7; // ebp
  DC *v9; // rax
  __int64 v10; // rbx
  PVOID DeferredContext; // r13
  unsigned int v12; // esi
  __int64 v13; // r15
  unsigned int v14; // edx
  signed int v15; // ecx
  __int64 v16; // r9
  unsigned int v17; // ecx
  __int64 v18; // r12
  unsigned int v19; // edx
  signed int v20; // ecx
  __int64 v21; // r8
  struct DC *v22; // rdx
  struct DC *v23; // r15
  bool v24; // zf
  struct DC *v25; // rdx
  struct REGION *v26; // rdi
  DC *v27; // rax
  PVOID v28; // r13
  unsigned int v29; // esi
  __int64 v30; // r15
  unsigned int v31; // edx
  signed int v32; // ecx
  __int64 v33; // r9
  unsigned int v34; // ecx
  __int64 v35; // r12
  unsigned int v36; // edx
  signed int v37; // ecx
  __int64 v38; // r8
  struct DC *v39; // rdx
  __int16 *v40; // rdi
  REGION *v41; // rcx
  REGION *v42; // rcx
  REGION *v43; // rcx
  int v44; // edx
  struct _LIST_ENTRY *Blink; // rcx
  int v46; // r8d
  struct _ERESOURCE *v47; // rdi
  int v48; // edi
  struct _LIST_ENTRY *v49; // rax
  __int64 v50; // rcx
  struct DC *v51; // [rsp+30h] [rbp-48h] BYREF
  __int64 v52; // [rsp+38h] [rbp-40h] BYREF
  BOOL v53; // [rsp+40h] [rbp-38h]
  int v54; // [rsp+44h] [rbp-34h]

  v7 = 0;
  XDCOBJ::bCleanDC(this, a4);
  if ( !a2 && (*((_DWORD *)*this + 9) & 8) != 0 )
    return 0LL;
  if ( !a3 )
    bFreeDCAttributesWorker(*this);
  DEC_SHARE_REF_CNT_LAZY0(*((struct BRUSH **)*this + 18));
  DEC_SHARE_REF_CNT_LAZY0(*((struct BRUSH **)*this + 19));
  DEC_SHARE_REF_CNT_LAZY_DEL_LOGFONT(*((struct LFONT **)*this + 20));
  DEC_SHARE_REF_CNT(*((unsigned int **)*this + 13));
  v9 = *this;
  v51 = v9;
  v10 = *((_QWORD *)v9 + 6);
  *((_DWORD *)v9 + 9) |= 0x10u;
  DeferredContext = WPP_MAIN_CB.Dpc.DeferredContext;
  v12 = (unsigned __int16)*(_DWORD *)v9 | (*(_DWORD *)v9 >> 8) & 0xFF0000;
  if ( v12 >= 0x10000 )
  {
    if ( *(_DWORD *)WPP_MAIN_CB.Dpc.DeferredContext > 0x10000u )
    {
      if ( *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(
                                  *((GdiHandleEntryDirectory **)WPP_MAIN_CB.Dpc.DeferredContext + 2),
                                  (unsigned __int16)*(_DWORD *)v9,
                                  1)
           + 13) == HIWORD(v12) )
        v12 = (unsigned __int16)v12;
    }
    else
    {
      v12 = (unsigned __int16)*(_DWORD *)v9;
    }
  }
  v13 = *((_QWORD *)DeferredContext + 2);
  v14 = *(_DWORD *)(v13 + 2056);
  if ( v12 >= v14 + ((*(unsigned __int16 *)(v13 + 2) - 1) << 16) )
    goto LABEL_21;
  if ( v12 < v14 )
  {
    v15 = 0;
    goto LABEL_15;
  }
  v15 = ((v12 - v14) >> 16) + 1;
  if ( (v12 - v14) >> 16 == -2 )
  {
LABEL_21:
    v18 = 0LL;
    goto LABEL_22;
  }
LABEL_15:
  v16 = *(_QWORD *)(v13 + 8LL * v15 + 8);
  if ( v15 )
    v17 = v12 - ((v15 - 1) << 16) - v14;
  else
    v17 = v12;
  v18 = 0LL;
  if ( v17 < *(_DWORD *)(v16 + 20)
    && *(_QWORD *)(*(_QWORD *)(**(_QWORD **)(v16 + 24) + 8 * ((unsigned __int64)v17 >> 8))
                 + 16LL * (unsigned __int8)v17
                 + 8) )
  {
    v18 = *(_QWORD *)v16 + 24LL * v17;
  }
LABEL_22:
  if ( v12 >= 0x10000 )
  {
    if ( *(_DWORD *)DeferredContext > 0x10000u )
    {
      if ( *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(
                                  *((GdiHandleEntryDirectory **)DeferredContext + 2),
                                  (unsigned __int16)v12,
                                  1)
           + 13) == HIWORD(v12) )
        v12 = (unsigned __int16)v12;
    }
    else
    {
      v12 = (unsigned __int16)v12;
    }
  }
  v19 = *(_DWORD *)(v13 + 2056);
  if ( v12 >= v19 + ((*(unsigned __int16 *)(v13 + 2) - 1) << 16) )
    goto LABEL_35;
  if ( v12 >= v19 )
  {
    v20 = ((v12 - v19) >> 16) + 1;
    if ( (v12 - v19) >> 16 == -2 )
    {
LABEL_35:
      v22 = 0LL;
      goto LABEL_36;
    }
  }
  else
  {
    v20 = 0;
  }
  v21 = *(_QWORD *)(v13 + 8LL * v20 + 8);
  if ( v20 )
    v12 = v12 - ((v20 - 1) << 16) - v19;
  if ( v12 >= *(_DWORD *)(v21 + 20) )
    goto LABEL_35;
  v22 = *(struct DC **)(*(_QWORD *)(**(_QWORD **)(v21 + 24) + 8 * ((unsigned __int64)v12 >> 8))
                      + 16LL * (unsigned __int8)v12
                      + 8);
LABEL_36:
  v23 = v51;
  v24 = v22 == v51;
  v25 = v51;
  if ( !v24 )
    v18 = 0LL;
  *(_BYTE *)(v18 + 15) |= 4u;
  AcquireDcVisRgnExclusive::AcquireDcVisRgnExclusive((AcquireDcVisRgnExclusive *)&v51, v25);
  v26 = (struct REGION *)*((_QWORD *)v23 + 192);
  if ( v26 && v26 != prgnDefault )
  {
    if ( (*((_WORD *)v26 + 7) & 0x8000) != 0 )
    {
      if ( (int)IsWin32FreeToPagedLookasideListImplSupported_0() >= 0 )
        Win32FreeToPagedLookasideListImpl_0();
    }
    else
    {
      Win32FreePool(*((_QWORD *)v23 + 192));
    }
  }
  *((_QWORD *)v23 + 192) = prgnDefault;
  AcquireDcVisRgnShared::~AcquireDcVisRgnShared((AcquireDcVisRgnShared *)&v51);
  v27 = *this;
  v51 = v27;
  *((_DWORD *)v27 + 9) |= 0x10u;
  v28 = WPP_MAIN_CB.Dpc.DeferredContext;
  v29 = (unsigned __int16)*(_DWORD *)v27 | (*(_DWORD *)v27 >> 8) & 0xFF0000;
  if ( v29 >= 0x10000 )
  {
    if ( *(_DWORD *)WPP_MAIN_CB.Dpc.DeferredContext > 0x10000u )
    {
      if ( *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(
                                  *((GdiHandleEntryDirectory **)WPP_MAIN_CB.Dpc.DeferredContext + 2),
                                  (unsigned __int16)*(_DWORD *)v27,
                                  1)
           + 13) == HIWORD(v29) )
        v29 = (unsigned __int16)v29;
    }
    else
    {
      v29 = (unsigned __int16)*(_DWORD *)v27;
    }
  }
  v30 = *((_QWORD *)v28 + 2);
  v31 = *(_DWORD *)(v30 + 2056);
  if ( v29 >= v31 + ((*(unsigned __int16 *)(v30 + 2) - 1) << 16) )
    goto LABEL_59;
  if ( v29 < v31 )
  {
    v32 = 0;
    goto LABEL_53;
  }
  v32 = ((v29 - v31) >> 16) + 1;
  if ( (v29 - v31) >> 16 == -2 )
  {
LABEL_59:
    v35 = 0LL;
    goto LABEL_60;
  }
LABEL_53:
  v33 = *(_QWORD *)(v30 + 8LL * v32 + 8);
  if ( v32 )
    v34 = v29 - ((v32 - 1) << 16) - v31;
  else
    v34 = v29;
  v35 = 0LL;
  if ( v34 < *(_DWORD *)(v33 + 20)
    && *(_QWORD *)(*(_QWORD *)(**(_QWORD **)(v33 + 24) + 8 * ((unsigned __int64)v34 >> 8))
                 + 16LL * (unsigned __int8)v34
                 + 8) )
  {
    v35 = *(_QWORD *)v33 + 24LL * v34;
  }
LABEL_60:
  if ( v29 >= 0x10000 )
  {
    if ( *(_DWORD *)v28 > 0x10000u )
    {
      if ( *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(
                                  *((GdiHandleEntryDirectory **)v28 + 2),
                                  (unsigned __int16)v29,
                                  1)
           + 13) == HIWORD(v29) )
        v29 = (unsigned __int16)v29;
    }
    else
    {
      v29 = (unsigned __int16)v29;
    }
  }
  v36 = *(_DWORD *)(v30 + 2056);
  if ( v29 >= v36 + ((*(unsigned __int16 *)(v30 + 2) - 1) << 16) )
    goto LABEL_73;
  if ( v29 >= v36 )
  {
    v37 = ((v29 - v36) >> 16) + 1;
    if ( (v29 - v36) >> 16 == -2 )
    {
LABEL_73:
      v39 = 0LL;
      goto LABEL_74;
    }
  }
  else
  {
    v37 = 0;
  }
  v38 = *(_QWORD *)(v30 + 8LL * v37 + 8);
  if ( v37 )
    v29 = v29 - ((v37 - 1) << 16) - v36;
  if ( v29 >= *(_DWORD *)(v38 + 20) )
    goto LABEL_73;
  v39 = *(struct DC **)(*(_QWORD *)(**(_QWORD **)(v38 + 24) + 8 * ((unsigned __int64)v29 >> 8))
                      + 16LL * (unsigned __int8)v29
                      + 8);
LABEL_74:
  if ( v39 != v51 )
    v35 = 0LL;
  *(_BYTE *)(v35 + 15) |= 4u;
  v40 = (__int16 *)*((_QWORD *)*this + 193);
  if ( v40 )
  {
    if ( v40 != (__int16 *)prgnDefault )
    {
      if ( v40[7] >= 0 )
      {
        Win32FreePool(*((_QWORD *)*this + 193));
      }
      else if ( (int)IsWin32FreeToPagedLookasideListImplSupported_0() >= 0 )
      {
        Win32FreeToPagedLookasideListImpl_0();
      }
    }
    *((_QWORD *)*this + 193) = 0LL;
  }
  v41 = (REGION *)*((_QWORD *)*this + 194);
  if ( v41 )
  {
    REGION::vDeleteREGION(v41);
    *((_QWORD *)*this + 194) = 0LL;
  }
  v42 = (REGION *)*((_QWORD *)*this + 195);
  if ( v42 )
  {
    REGION::vDeleteREGION(v42);
    *((_QWORD *)*this + 195) = 0LL;
  }
  v43 = (REGION *)*((_QWORD *)*this + 196);
  if ( v43 )
  {
    REGION::vDeleteREGION(v43);
    *((_QWORD *)*this + 196) = 0LL;
  }
  v51 = (struct DC *)*((_QWORD *)*this + 7);
  XDCOBJ::bDeleteDC((__int64 **)this);
  v47 = (struct _ERESOURCE *)ghsemDriverMgmt;
  if ( ghsemDriverMgmt )
  {
    PsEnterPriorityRegion(Blink);
    ExEnterCriticalRegionAndAcquireResourceExclusive(v47);
    LODWORD(v47) = (_DWORD)ghsemDriverMgmt;
  }
  if ( gbLockEtw && (Microsoft_Windows_Win32kEnableBits & 0x10) != 0 )
    Template_pqz((_DWORD)Blink, v44, v46, (_DWORD)v47, 12, (__int64)L"ghsemDriverMgmt");
  v24 = (*(_DWORD *)(v10 + 32))-- == 1;
  v48 = *(_DWORD *)(v10 + 32);
  if ( v24 )
  {
    Blink = WPP_MAIN_CB.DeviceQueue.DeviceListHead.Blink;
    if ( WPP_MAIN_CB.DeviceQueue.DeviceListHead.Blink == (struct _LIST_ENTRY *)v10 )
    {
      WPP_MAIN_CB.DeviceQueue.DeviceListHead.Blink = *(struct _LIST_ENTRY **)(v10 + 24);
    }
    else if ( WPP_MAIN_CB.DeviceQueue.DeviceListHead.Blink )
    {
      while ( 1 )
      {
        v49 = Blink[1].Blink;
        if ( v49 == (struct _LIST_ENTRY *)v10 )
          break;
        Blink = Blink[1].Blink;
        if ( !v49 )
          goto LABEL_102;
      }
      Blink[1].Blink = *(struct _LIST_ENTRY **)(v10 + 24);
    }
  }
LABEL_102:
  if ( gbLockEtw && (Microsoft_Windows_Win32kEnableBits & 0x10) != 0 )
    Template_pz(Blink, &LockRelease);
  if ( ghsemDriverMgmt )
  {
    ExReleaseResourceAndLeaveCriticalRegion((PERESOURCE)ghsemDriverMgmt);
    PsLeavePriorityRegion(v50);
  }
  if ( !v48 )
  {
    v52 = v10;
    v53 = a3 != 0;
    v54 = 1;
    vUnreferencePdevWorker((struct tagUNREFDATA *)&v52);
  }
  if ( HmgLockResultBase<DRVOBJ>::operator bool(&v51) )
  {
    LOBYTE(v7) = a3 != 0;
    PDEVOBJ::vUnreferencePdev((struct _LIST_ENTRY **)&v51, v7);
  }
  return 1LL;
}
