/*
 * XREFs of NtGdiDeleteObjectApp @ 0x1C00417F0
 * Callers:
 *     <none>
 * Callees:
 *     bDeleteFont_0 @ 0x1C00011B0 (bDeleteFont_0.c)
 *     IsWin32FreeToPagedLookasideListImplSupported_0 @ 0x1C0002C18 (IsWin32FreeToPagedLookasideListImplSupported_0.c)
 *     Win32FreeToPagedLookasideListImpl_0 @ 0x1C0002C20 (Win32FreeToPagedLookasideListImpl_0.c)
 *     UserReleaseDC @ 0x1C00118A0 (UserReleaseDC.c)
 *     EngSetLastError @ 0x1C0013020 (EngSetLastError.c)
 *     Win32FreePool @ 0x1C0033BB0 (Win32FreePool.c)
 *     HmgShareLockCheckIgnoreStockBit @ 0x1C0038760 (HmgShareLockCheckIgnoreStockBit.c)
 *     ?bDeleteDCInternalWorker@@YAHPEAVXDCOBJ@@HHH@Z @ 0x1C0038890 (-bDeleteDCInternalWorker@@YAHPEAVXDCOBJ@@HHH@Z.c)
 *     HmgDecrementShareReferenceCount @ 0x1C003BE20 (HmgDecrementShareReferenceCount.c)
 *     ?vUnlock@HANDLELOCK@@QEAAXXZ @ 0x1C003C1A0 (-vUnlock@HANDLELOCK@@QEAAXXZ.c)
 *     ?UpdateUserRgn@RGNOBJ@@QEAAXXZ @ 0x1C003E0E0 (-UpdateUserRgn@RGNOBJ@@QEAAXXZ.c)
 *     ?bPEBCacheHandle@@YAHPEAXW4_HANDLECACHETYPE@@PEAT_OBJECTATTR@@PEAU_ENTRY@@PEAVHANDLELOCK@@PEAPEAU_BASEOBJECT@@@Z @ 0x1C0041E60 (-bPEBCacheHandle@@YAHPEAXW4_HANDLECACHETYPE@@PEAT_OBJECTATTR@@PEAU_ENTRY@@PEAVHANDLELOCK@@PEAPEA.c)
 *     ?bDeleteHandle@RGNOBJAPI@@QEAAHXZ @ 0x1C0042E40 (-bDeleteHandle@RGNOBJAPI@@QEAAHXZ.c)
 *     bDeletePalette @ 0x1C005A8C0 (bDeletePalette.c)
 *     bDeleteBrush @ 0x1C005C2F0 (bDeleteBrush.c)
 *     HmgFreeObjectAttr @ 0x1C005C5F0 (HmgFreeObjectAttr.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C00AEEE0 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VBRUSHSELOBJ@@@@QEAA@XZ @ 0x1C00AEF50 (--1-$UnexpectedThreadTerminationHandler@VBRUSHSELOBJ@@@@QEAA@XZ.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C00AEF58 (--1DCOBJ@@QEAA@XZ.c)
 *     ?bDeleteSurface@SURFREF@@QEAAHW4_CLEANUPTYPE@@H@Z @ 0x1C00B0E60 (-bDeleteSurface@SURFREF@@QEAAHW4_CLEANUPTYPE@@H@Z.c)
 *     ??0RGNOBJAPI@@QEAA@PEAUHRGN__@@HH@Z @ 0x1C00B0F10 (--0RGNOBJAPI@@QEAA@PEAUHRGN__@@HH@Z.c)
 *     ??0SURFREF@@QEAA@XZ @ 0x1C00B38A0 (--0SURFREF@@QEAA@XZ.c)
 *     Template_pz @ 0x1C00BECC4 (Template_pz.c)
 */

__int64 __fastcall NtGdiDeleteObjectApp(unsigned __int64 a1)
{
  struct HOBJ__ *v1; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r8
  int v5; // edx
  __int64 v6; // r9
  int v7; // edx
  int v8; // edx
  int v9; // edx
  int v10; // edx
  PERESOURCE v11; // r9
  unsigned int v12; // ebx
  __int64 v13; // r8
  __int64 v14; // rcx
  unsigned int v15; // edi
  BOOL v16; // r15d
  struct REGION *v17; // rax
  __int64 v18; // rcx
  unsigned int v19; // r15d
  __int64 v20; // rsi
  __int64 v21; // r13
  __int64 v22; // rbx
  __int64 *CurrentThreadWin32ThreadAndEnterCriticalRegion; // rax
  __int64 v24; // rax
  __int64 v25; // r12
  signed __int32 v26; // eax
  unsigned int v27; // edx
  __int64 v28; // rcx
  int v29; // ebx
  __int64 v30; // [rsp+30h] [rbp-89h] BYREF
  int v31; // [rsp+38h] [rbp-81h]
  unsigned int v32; // [rsp+3Ch] [rbp-7Dh]
  int v33; // [rsp+40h] [rbp-79h]
  unsigned int v34; // [rsp+44h] [rbp-75h]
  struct REGION *v35; // [rsp+48h] [rbp-71h] BYREF
  char v36[40]; // [rsp+50h] [rbp-69h] BYREF
  int v37; // [rsp+78h] [rbp-41h]
  _BYTE v38[32]; // [rsp+80h] [rbp-39h] BYREF
  _DWORD *v39; // [rsp+A0h] [rbp-19h]
  _QWORD v40[7]; // [rsp+A8h] [rbp-11h] BYREF
  int v41; // [rsp+128h] [rbp+6Fh] BYREF
  __int64 v42; // [rsp+130h] [rbp+77h]

  v1 = (struct HOBJ__ *)a1;
  if ( (a1 & 0x800000) != 0 )
    return 1LL;
  v3 = (unsigned __int16)a1;
  v4 = a1 >> 16;
  v5 = BYTE2(a1) & 0x1F;
  if ( (unsigned __int16)a1 < (unsigned int)gcMaxHmgr )
  {
    a1 = 3LL * (unsigned __int16)a1;
    v6 = *(_QWORD *)&WPP_MAIN_CB.AlignmentRequirement + 24 * v3;
    if ( *(unsigned __int8 *)(v6 + 14) == v5
      && *(_WORD *)(v6 + 12) == (_WORD)v4
      && (*(_DWORD *)(v6 + 8) & 0xFFFFFFFE) == 0 )
    {
      return v1 != 0LL;
    }
  }
  if ( v5 != 4 )
  {
    v7 = v5 - 1;
    if ( v7 )
    {
      v8 = v7 - 4;
      if ( v8 )
      {
        v9 = v8 - 3;
        if ( v9 )
        {
          v10 = v9 - 2;
          if ( v10 )
          {
            if ( v10 == 6 )
              return bDeleteBrush(v1);
            else
              return 0LL;
          }
          else
          {
            return bDeleteFont_0();
          }
        }
        else
        {
          return bDeletePalette((HPALETTE)v1);
        }
      }
      else
      {
        v11 = ghsemDynamicModeChange;
        if ( ghsemDynamicModeChange )
        {
          ExEnterPriorityRegionAndAcquireResourceShared(ghsemDynamicModeChange);
          v11 = ghsemDynamicModeChange;
        }
        if ( gbLockEtw && (Microsoft_Windows_Win32kEnableBits & 0x10) != 0 )
          Template_pz(a1, &LockAcquireShared, v4, v11);
        SURFREF::SURFREF((SURFREF *)v38);
        v39 = (_DWORD *)HmgShareLockCheckIgnoreStockBit((int)v1, 5);
        v12 = SURFREF::bDeleteSurface(v38, 0LL);
        if ( v39 )
          HmgDecrementShareReferenceCount(v39);
        UnexpectedThreadTerminationHandler<BRUSHSELOBJ>::~UnexpectedThreadTerminationHandler<BRUSHSELOBJ>(v38);
        if ( gbLockEtw && (Microsoft_Windows_Win32kEnableBits & 0x10) != 0 )
          Template_pz((unsigned int)Microsoft_Windows_Win32kEnableBits, &LockRelease, v13, ghsemDynamicModeChange);
        if ( ghsemDynamicModeChange )
        {
          ExReleaseResourceAndLeaveCriticalRegion(ghsemDynamicModeChange);
          PsLeavePriorityRegion(v14);
        }
        return v12;
      }
    }
    else
    {
      v15 = 0;
      v16 = 0;
      DCOBJ::DCOBJ((DCOBJ *)v40, (HDC)v1);
      if ( v40[0]
        && *(_WORD *)(*(_QWORD *)(*(_QWORD *)&WPP_MAIN_CB.AlignmentRequirement + 24LL * (unsigned __int16)v1) + 12LL) <= 1u )
      {
        v15 = bDeleteDCInternalWorker((struct XDCOBJ *)v40, 0, 0, 0);
        v16 = v15 == 0;
      }
      else
      {
        EngSetLastError(0xAAu);
      }
      DCOBJ::~DCOBJ((DCOBJ *)v40);
      if ( v16 )
        return (unsigned int)UserReleaseDC((__int64)v1);
      return v15;
    }
  }
  RGNOBJAPI::RGNOBJAPI((RGNOBJAPI *)&v35, (HRGN)v1, 0, 0);
  v17 = v35;
  if ( !v35 || *((_DWORD *)v35 + 8) )
  {
LABEL_86:
    v19 = 0;
    goto LABEL_87;
  }
  v18 = *(_QWORD *)v35;
  v19 = 1;
  v20 = (unsigned __int16)*(_QWORD *)v35;
  v21 = 0LL;
  v31 = 0;
  v30 = 0LL;
  v34 = 0;
  v42 = v18;
  if ( (unsigned int)v20 >= gcMaxHmgr )
  {
LABEL_76:
    if ( (unsigned int)RGNOBJAPI::bDeleteHandle((RGNOBJAPI *)&v35) )
    {
      if ( v35 && v35 != prgnDefault )
      {
        if ( *((__int16 *)v35 + 7) >= 0 )
        {
          Win32FreePool();
        }
        else if ( (int)IsWin32FreeToPagedLookasideListImplSupported_0() >= 0 )
        {
          Win32FreeToPagedLookasideListImpl_0();
        }
      }
      v17 = 0LL;
      v35 = 0LL;
      if ( v21 )
      {
        HmgFreeObjectAttr(v21);
        v17 = v35;
      }
      goto LABEL_87;
    }
    v17 = v35;
    goto LABEL_86;
  }
  v22 = *(_QWORD *)&WPP_MAIN_CB.AlignmentRequirement + 24 * v20;
  CurrentThreadWin32ThreadAndEnterCriticalRegion = (__int64 *)PsGetCurrentThreadWin32ThreadAndEnterCriticalRegion(&v41);
  if ( CurrentThreadWin32ThreadAndEnterCriticalRegion && (v24 = *CurrentThreadWin32ThreadAndEnterCriticalRegion) != 0 )
    v25 = *(_QWORD *)(v24 + 72);
  else
    v25 = 0LL;
  v31 = 1;
  v30 = v22;
  v34 = v20;
LABEL_46:
  _m_prefetchw((const void *)(v22 + 8));
  v26 = *(_DWORD *)(v22 + 8);
  v27 = v26 & 0xFFFFFFFE;
  v32 = v26;
  if ( (v26 & 0xFFFFFFFE) != (v41 & 0xFFFFFFFC) && v27 && (!v25 || v27 != *(_DWORD *)(v25 + 8))
    || (*(_BYTE *)(v22 + 15) & 0x20) != 0 )
  {
LABEL_75:
    KeLeaveCriticalRegion();
    goto LABEL_76;
  }
  while ( (*(_BYTE *)(v22 + 15) & 0x40) == 0 )
  {
    if ( (v26 & 1) != 0 )
    {
      KeDelayExecutionThread(0, 0, gpLockShortDelay);
      goto LABEL_46;
    }
    v33 = v26 | 1;
    if ( v26 != _InterlockedCompareExchange((volatile signed __int32 *)(v22 + 8), v26 | 1, v26)
      || (*(_BYTE *)(v22 + 15) & 0x40) != 0 )
    {
      goto LABEL_46;
    }
    *((_QWORD *)gpentPushLock + v20) = 0LL;
    *(_BYTE *)(v22 + 15) |= 0x40u;
    _m_prefetchw((const void *)(v22 + 8));
    v32 = *(_DWORD *)(v22 + 8) & 0xFFFFFFFE;
    _InterlockedExchange((volatile __int32 *)(v22 + 8), v32);
    v26 = v32;
  }
  ExAcquirePushLockExclusiveEx((char *)gpentPushLock + 8 * v20, 0LL);
  if ( *(_BYTE *)(v22 + 14) != 4 || *(_WORD *)(v22 + 12) != WORD1(v42) )
  {
    if ( (*(_BYTE *)(v22 + 15) & 0x40) != 0 )
    {
      ExReleasePushLockExclusiveEx((char *)gpentPushLock + 8 * v20, 0LL);
    }
    else
    {
      _m_prefetchw((const void *)(v22 + 8));
      v32 = *(_DWORD *)(v22 + 8) & 0xFFFFFFFE;
      _InterlockedExchange((volatile __int32 *)(v22 + 8), v32);
    }
    goto LABEL_75;
  }
  v28 = (unsigned __int16)*(_DWORD *)v35;
  v21 = *(_QWORD *)(*(_QWORD *)&WPP_MAIN_CB.AlignmentRequirement + 24 * v28 + 16);
  if ( v21 )
  {
    v29 = bPEBCacheHandle(*(_QWORD *)v35, 2LL, v21, *(_QWORD *)&WPP_MAIN_CB.AlignmentRequirement + 24 * v28, &v30, &v35);
    if ( v29 )
      goto LABEL_64;
  }
  else
  {
    v29 = 0;
  }
  HANDLELOCK::vUnlock((HANDLELOCK *)&v30);
LABEL_64:
  if ( v31 )
  {
    if ( v30 )
    {
      if ( (*(_BYTE *)(v30 + 15) & 0x40) != 0 )
      {
        ExReleasePushLockExclusiveEx((char *)gpentPushLock + 8 * v34, 0LL);
      }
      else
      {
        _m_prefetchw((const void *)(v30 + 8));
        v32 = *(_DWORD *)(v30 + 8) & 0xFFFFFFFE;
        _InterlockedExchange((volatile __int32 *)(v30 + 8), v32);
      }
    }
    KeLeaveCriticalRegion();
  }
  if ( !v29 )
    goto LABEL_76;
  v17 = v35;
LABEL_87:
  if ( !v37 )
  {
    RGNOBJ::UpdateUserRgn((RGNOBJ *)&v35);
    v17 = v35;
  }
  if ( v17 )
    _InterlockedDecrement((volatile signed __int32 *)v17 + 3);
  UnexpectedThreadTerminationHandler<BRUSHSELOBJ>::~UnexpectedThreadTerminationHandler<BRUSHSELOBJ>(v36);
  return v19;
}
