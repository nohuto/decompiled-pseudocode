/*
 * XREFs of NtGdiDeleteObjectApp @ 0x1C00266A0
 * Callers:
 *     <none>
 * Callees:
 *     bDeleteFont_0 @ 0x1C00011B0 (bDeleteFont_0.c)
 *     FreeObject @ 0x1C0022A50 (FreeObject.c)
 *     ?bDeleteHandle@RGNOBJAPI@@QEAAHXZ @ 0x1C0028110 (-bDeleteHandle@RGNOBJAPI@@QEAAHXZ.c)
 *     ??0RGNOBJAPI@@QEAA@PEAUHRGN__@@H@Z @ 0x1C0028350 (--0RGNOBJAPI@@QEAA@PEAUHRGN__@@H@Z.c)
 *     ?UpdateUserRgn@RGNOBJ@@QEAAXXZ @ 0x1C0028690 (-UpdateUserRgn@RGNOBJ@@QEAAXXZ.c)
 *     ?bPEBCacheHandle@@YAHPEAXW4_HANDLECACHETYPE@@PEAT_OBJECTATTR@@PEAU_ENTRY@@PEAVHANDLELOCK@@PEAPEAU_BASEOBJECT@@@Z @ 0x1C002A070 (-bPEBCacheHandle@@YAHPEAXW4_HANDLECACHETYPE@@PEAT_OBJECTATTR@@PEAU_ENTRY@@PEAVHANDLELOCK@@PEAPEA.c)
 *     ?bSaveAttributes@XDCOBJ@@AEAAHXZ @ 0x1C0031910 (-bSaveAttributes@XDCOBJ@@AEAAHXZ.c)
 *     ?RestoreAttributes@XDCOBJ@@AEAAXXZ @ 0x1C0031A10 (-RestoreAttributes@XDCOBJ@@AEAAXXZ.c)
 *     HmgDecrementShareReferenceCount @ 0x1C0031AF0 (HmgDecrementShareReferenceCount.c)
 *     ?vUnlock@HANDLELOCK@@QEAAXXZ @ 0x1C0031D80 (-vUnlock@HANDLELOCK@@QEAAXXZ.c)
 *     ?vLockHandle@HANDLELOCK@@QEAAXPEAU_ENTRY@@HIH@Z @ 0x1C0031DD0 (-vLockHandle@HANDLELOCK@@QEAAXPEAU_ENTRY@@HIH@Z.c)
 *     ??1HANDLELOCK@@QEAA@XZ @ 0x1C0031F20 (--1HANDLELOCK@@QEAA@XZ.c)
 *     ?bDeleteDCInternalWorker@@YAHPEAVXDCOBJ@@HHH@Z @ 0x1C0032210 (-bDeleteDCInternalWorker@@YAHPEAVXDCOBJ@@HHH@Z.c)
 *     ?bDeleteSurface@SURFACE@@QEAAHW4_CLEANUPTYPE@@H@Z @ 0x1C00361E0 (-bDeleteSurface@SURFACE@@QEAAHW4_CLEANUPTYPE@@H@Z.c)
 *     UserReleaseDC @ 0x1C0042CF0 (UserReleaseDC.c)
 *     bDeleteBrush @ 0x1C0045A40 (bDeleteBrush.c)
 *     bDeletePalette @ 0x1C004B470 (bDeletePalette.c)
 *     HmgFreeObjectAttr @ 0x1C0074420 (HmgFreeObjectAttr.c)
 *     EngSetLastError @ 0x1C0076470 (EngSetLastError.c)
 *     Template_pz @ 0x1C00C00D4 (Template_pz.c)
 */

__int64 __fastcall NtGdiDeleteObjectApp(unsigned __int64 a1)
{
  HBRUSH v1; // rsi
  __int64 v3; // r8
  char *SystemArgument2; // r10
  unsigned __int64 v5; // r15
  int v6; // edx
  __int64 v7; // r14
  int v8; // edx
  int v9; // edx
  int v10; // edx
  int v11; // edx
  PERESOURCE v12; // r9
  __int64 v13; // rdi
  struct _ENTRY *v14; // rbx
  unsigned int v15; // ebx
  __int64 v16; // r8
  unsigned int v17; // edi
  int v18; // r13d
  __int64 v19; // rbx
  struct _ENTRY *v20; // r12
  __int64 v21; // rcx
  struct _KTHREAD *CurrentThread; // rcx
  __int16 v23; // ax
  unsigned int v24; // eax
  int v25; // ebx
  __int64 v26; // rbx
  __int64 v27; // r13
  unsigned int v28; // r12d
  __int64 v29; // rsi
  __int64 v30; // r14
  char *v31; // rbx
  __int64 *CurrentThreadWin32ThreadAndEnterCriticalRegion; // rax
  __int64 v33; // rax
  __int64 v34; // r15
  signed __int32 v35; // eax
  unsigned int v36; // edx
  __int64 v37; // rcx
  int v38; // eax
  int v39; // esi
  __int64 v40; // [rsp+30h] [rbp-49h] BYREF
  __int64 v41; // [rsp+38h] [rbp-41h]
  char *v42; // [rsp+40h] [rbp-39h] BYREF
  int v43; // [rsp+48h] [rbp-31h]
  unsigned int v44; // [rsp+4Ch] [rbp-2Dh]
  int v45; // [rsp+50h] [rbp-29h]
  unsigned int v46; // [rsp+54h] [rbp-25h]
  __int64 v47[2]; // [rsp+58h] [rbp-21h] BYREF
  int v48; // [rsp+68h] [rbp-11h]
  __int64 v49; // [rsp+70h] [rbp-9h] BYREF
  int v50; // [rsp+78h] [rbp-1h]
  unsigned int v51; // [rsp+7Ch] [rbp+3h]
  unsigned int v52; // [rsp+84h] [rbp+Bh]
  __int64 v53; // [rsp+88h] [rbp+Fh] BYREF
  int v54; // [rsp+90h] [rbp+17h]
  int v55; // [rsp+E8h] [rbp+6Fh] BYREF

  v1 = (HBRUSH)a1;
  if ( (a1 & 0x800000) != 0 )
    return 1LL;
  v3 = (unsigned int)gcMaxHmgr;
  SystemArgument2 = (char *)WPP_MAIN_CB.Dpc.SystemArgument2;
  v5 = a1 >> 16;
  v6 = BYTE2(a1) & 0x1F;
  v7 = (unsigned __int16)a1;
  if ( (unsigned __int16)a1 < (unsigned int)gcMaxHmgr )
  {
    a1 = 3LL * (unsigned __int16)a1;
    if ( *((unsigned __int8 *)WPP_MAIN_CB.Dpc.SystemArgument2 + 24 * v7 + 14) == v6
      && *((_WORD *)WPP_MAIN_CB.Dpc.SystemArgument2 + 12 * v7 + 6) == (_WORD)v5
      && (*((_DWORD *)WPP_MAIN_CB.Dpc.SystemArgument2 + 6 * v7 + 2) & 0xFFFFFFFE) == 0 )
    {
      return v1 != 0LL;
    }
  }
  if ( v6 != 4 )
  {
    v8 = v6 - 1;
    if ( v8 )
    {
      v9 = v8 - 4;
      if ( v9 )
      {
        v10 = v9 - 3;
        if ( v10 )
        {
          v11 = v10 - 2;
          if ( v11 )
          {
            if ( v11 == 6 )
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
        v12 = ghsemDynamicModeChange;
        if ( ghsemDynamicModeChange )
        {
          ExEnterPriorityRegionAndAcquireResourceShared(ghsemDynamicModeChange);
          v3 = (unsigned int)gcMaxHmgr;
          SystemArgument2 = (char *)WPP_MAIN_CB.Dpc.SystemArgument2;
          v12 = ghsemDynamicModeChange;
        }
        if ( gbLockEtw && (Microsoft_Windows_Win32kEnableBits & 0x10) != 0 )
        {
          Template_pz(a1, &LockAcquireShared, v3, v12, L"ghsemDynamicModeChange");
          LODWORD(v3) = gcMaxHmgr;
          SystemArgument2 = (char *)WPP_MAIN_CB.Dpc.SystemArgument2;
        }
        v13 = 0LL;
        if ( (unsigned int)v7 < (unsigned int)v3 )
        {
          v14 = (struct _ENTRY *)&SystemArgument2[24 * v7];
          HANDLELOCK::vLockHandle((HANDLELOCK *)&v53, v14, 1, v7, 0);
          if ( v54 && v53 )
          {
            if ( *((_BYTE *)v14 + 14) == 5
              && (((unsigned __int16)v5 ^ *((unsigned __int16 *)v14 + 6)) & 0xFFFFFF7F) == 0 )
            {
              v13 = *(_QWORD *)v14;
              ++*(_DWORD *)(*(_QWORD *)v14 + 8LL);
            }
            HANDLELOCK::vUnlock((HANDLELOCK *)&v53);
          }
          HANDLELOCK::~HANDLELOCK((HANDLELOCK *)&v53);
        }
        v15 = SURFACE::bDeleteSurface(v13, 0LL, 0LL);
        if ( !v15 && v13 )
          HmgDecrementShareReferenceCount(v13);
        if ( gbLockEtw && (Microsoft_Windows_Win32kEnableBits & 0x10) != 0 )
          Template_pz(
            (unsigned int)Microsoft_Windows_Win32kEnableBits,
            &LockRelease,
            v16,
            ghsemDynamicModeChange,
            L"ghsemDynamicModeChange");
        if ( ghsemDynamicModeChange )
        {
          ExReleaseResourceAndLeaveCriticalRegion(ghsemDynamicModeChange);
          PsLeavePriorityRegion();
        }
        return v15;
      }
    }
    v17 = 0;
    v40 = 0LL;
    v18 = 0;
    v41 = 0LL;
    v19 = 0LL;
    if ( (unsigned int)v7 < gcMaxHmgr )
    {
      v20 = (struct _ENTRY *)((char *)WPP_MAIN_CB.Dpc.SystemArgument2 + 24 * v7);
      HANDLELOCK::vLockHandle((HANDLELOCK *)&v49, v20, 1, v7, 0);
      if ( v50 )
      {
        v21 = v49;
        if ( v49 )
        {
          if ( *((_BYTE *)v20 + 14) == 1 && *((_WORD *)v20 + 6) == (_WORD)v5 )
          {
            CurrentThread = KeGetCurrentThread();
            v19 = *(_QWORD *)v20;
            v23 = *(_WORD *)(*(_QWORD *)v20 + 12LL);
            if ( !v23 || *(struct _KTHREAD **)(v19 + 16) == CurrentThread )
            {
              *(_QWORD *)(v19 + 16) = CurrentThread;
              *(_WORD *)(v19 + 12) = v23 + 1;
            }
            else
            {
              v19 = 0LL;
            }
            v21 = v49;
          }
          if ( (*(_BYTE *)(v21 + 15) & 0x40) != 0 )
          {
            ExReleasePushLockExclusiveEx((char *)WPP_MAIN_CB.Dpc.DpcData + 8 * v52);
          }
          else
          {
            v24 = *(_DWORD *)(v21 + 8) & 0xFFFFFFFE;
            _m_prefetchw((const void *)(v21 + 8));
            v51 = v24;
            _InterlockedExchange((volatile __int32 *)(v21 + 8), v24);
          }
        }
        KeLeaveCriticalRegion();
      }
    }
    v40 = v19;
    if ( !v19 )
      goto LABEL_61;
    if ( HIDWORD(v41) )
    {
      if ( (*(_DWORD *)(*(_QWORD *)(v19 + 48) + 56LL) & 0x8000) == 0 )
      {
LABEL_59:
        _InterlockedDecrement((volatile signed __int32 *)(v19 + 12));
        goto LABEL_60;
      }
      v25 = *(_DWORD *)(v19 + 2504);
      if ( v25 != ((unsigned int)PsGetCurrentProcessId() & 0xFFFFFFFC) )
      {
        v19 = v40;
        goto LABEL_59;
      }
    }
    if ( (unsigned int)XDCOBJ::bSaveAttributes((XDCOBJ *)&v40) )
    {
      if ( v40 && *(_WORD *)(*((_QWORD *)WPP_MAIN_CB.Dpc.SystemArgument2 + 3 * (unsigned __int16)v1) + 12LL) <= 1u )
      {
        v17 = bDeleteDCInternalWorker((struct XDCOBJ *)&v40, 0, 0, 0);
        if ( !v17 )
          v18 = 1;
        goto LABEL_62;
      }
LABEL_61:
      EngSetLastError(0xAAu);
LABEL_62:
      if ( v40 )
      {
        XDCOBJ::RestoreAttributes((XDCOBJ *)&v40);
        _InterlockedDecrement((volatile signed __int32 *)(v40 + 12));
      }
      if ( v18 )
        return (unsigned int)UserReleaseDC(v1);
      return v17;
    }
    _InterlockedDecrement((volatile signed __int32 *)(v40 + 12));
LABEL_60:
    v40 = 0LL;
    goto LABEL_61;
  }
  RGNOBJAPI::RGNOBJAPI((RGNOBJAPI *)v47, (HRGN)v1, 0);
  v26 = v47[0];
  if ( !v47[0] || *(_DWORD *)(v47[0] + 32) )
    goto LABEL_118;
  v27 = *(_QWORD *)v47[0];
  v28 = 1;
  v29 = (unsigned __int16)*(_QWORD *)v47[0];
  v30 = 0LL;
  v43 = 0;
  v42 = 0LL;
  v46 = 0;
  if ( (unsigned int)v29 < gcMaxHmgr )
  {
    v31 = (char *)WPP_MAIN_CB.Dpc.SystemArgument2 + 24 * v29;
    CurrentThreadWin32ThreadAndEnterCriticalRegion = (__int64 *)PsGetCurrentThreadWin32ThreadAndEnterCriticalRegion(&v55);
    if ( CurrentThreadWin32ThreadAndEnterCriticalRegion && (v33 = *CurrentThreadWin32ThreadAndEnterCriticalRegion) != 0 )
      v34 = *(_QWORD *)(v33 + 72);
    else
      v34 = 0LL;
    v43 = 1;
    v42 = v31;
    v46 = v29;
LABEL_81:
    _m_prefetchw(v31 + 8);
    v35 = *((_DWORD *)v31 + 2);
    v36 = v35 & 0xFFFFFFFE;
    v44 = v35;
    if ( ((v35 & 0xFFFFFFFE) == (v55 & 0xFFFFFFFC) || !v36 || v34 && v36 == *(_DWORD *)(v34 + 8))
      && (v31[15] & 0x20) == 0 )
    {
      while ( (v31[15] & 0x40) == 0 )
      {
        if ( (v35 & 1) != 0 )
        {
          KeDelayExecutionThread(0, 0, gpLockShortDelay);
          goto LABEL_81;
        }
        v45 = v35 | 1;
        if ( v35 != _InterlockedCompareExchange((volatile signed __int32 *)v31 + 2, v35 | 1, v35)
          || (v31[15] & 0x40) != 0 )
        {
          goto LABEL_81;
        }
        *((_QWORD *)WPP_MAIN_CB.Dpc.DpcData + v29) = 0LL;
        v31[15] |= 0x40u;
        _m_prefetchw(v31 + 8);
        v44 = *((_DWORD *)v31 + 2) & 0xFFFFFFFE;
        _InterlockedExchange((volatile __int32 *)v31 + 2, v44);
        v35 = v44;
      }
      ExAcquirePushLockExclusiveEx((char *)WPP_MAIN_CB.Dpc.DpcData + 8 * v29, 0LL);
      if ( v31[14] == 4 && *((_WORD *)v31 + 6) == WORD1(v27) )
      {
        v26 = v47[0];
        v37 = (unsigned __int16)*(_DWORD *)v47[0];
        v30 = *((_QWORD *)WPP_MAIN_CB.Dpc.SystemArgument2 + 3 * v37 + 2);
        if ( v30 )
        {
          v38 = bPEBCacheHandle(
                  *(_QWORD *)v47[0],
                  2LL,
                  v30,
                  (char *)WPP_MAIN_CB.Dpc.SystemArgument2 + 24 * v37,
                  &v42,
                  v47);
          v26 = v47[0];
          v39 = v38;
          if ( v38 )
          {
LABEL_99:
            if ( v43 )
            {
              if ( v42 )
              {
                if ( (v42[15] & 0x40) != 0 )
                {
                  ExReleasePushLockExclusiveEx((char *)WPP_MAIN_CB.Dpc.DpcData + 8 * v46);
                }
                else
                {
                  _m_prefetchw(v42 + 8);
                  v44 = *((_DWORD *)v42 + 2) & 0xFFFFFFFE;
                  _InterlockedExchange((volatile __int32 *)v42 + 2, v44);
                  v26 = v47[0];
                }
              }
              KeLeaveCriticalRegion();
            }
            if ( v39 )
              goto LABEL_119;
            goto LABEL_111;
          }
        }
        else
        {
          v39 = 0;
        }
        HANDLELOCK::vUnlock((HANDLELOCK *)&v42);
        goto LABEL_99;
      }
      if ( (v31[15] & 0x40) != 0 )
      {
        ExReleasePushLockExclusiveEx((char *)WPP_MAIN_CB.Dpc.DpcData + 8 * v29);
      }
      else
      {
        _m_prefetchw(v31 + 8);
        v44 = *((_DWORD *)v31 + 2) & 0xFFFFFFFE;
        _InterlockedExchange((volatile __int32 *)v31 + 2, v44);
      }
    }
    KeLeaveCriticalRegion();
  }
LABEL_111:
  if ( (unsigned int)RGNOBJAPI::bDeleteHandle((RGNOBJAPI *)v47) )
  {
    if ( v47[0] && (struct REGION *)v47[0] != prgnDefault )
      FreeObject(v47[0]);
    v26 = 0LL;
    v47[0] = 0LL;
    if ( v30 )
      HmgFreeObjectAttr(v30);
    goto LABEL_119;
  }
  v26 = v47[0];
LABEL_118:
  v28 = 0;
LABEL_119:
  if ( !v48 )
    RGNOBJ::UpdateUserRgn((RGNOBJ *)v47);
  if ( v26 )
    _InterlockedDecrement((volatile signed __int32 *)(v26 + 12));
  return v28;
}
