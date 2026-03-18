/*
 * XREFs of ?GreSelectVisRgnInternal@@YAHAEAVDCOBJA@@PEAUHRGN__@@W4_VIS_REGION_SELECT@@@Z @ 0x1C0025350
 * Callers:
 *     GreSelectVisRgn @ 0x1C0023950 (GreSelectVisRgn.c)
 *     ?ResetOrg@@YAXPEAUHRGN__@@PEAUtagDCE@@H@Z @ 0x1C0024220 (-ResetOrg@@YAXPEAUHRGN__@@PEAUtagDCE@@H@Z.c)
 *     GreSelectVisRgnShared @ 0x1C0083C20 (GreSelectVisRgnShared.c)
 * Callees:
 *     IsWin32FreeToPagedLookasideListImplSupported_0 @ 0x1C0002C48 (IsWin32FreeToPagedLookasideListImplSupported_0.c)
 *     Win32FreeToPagedLookasideListImpl_0 @ 0x1C0002C50 (Win32FreeToPagedLookasideListImpl_0.c)
 *     Win32FreePool @ 0x1C0020110 (Win32FreePool.c)
 *     ?GrepValidateVisRgn@@YAXPEAVDC@@PEAVREGION@@@Z @ 0x1C0023B18 (-GrepValidateVisRgn@@YAXPEAVDC@@PEAVREGION@@@Z.c)
 *     HmgDecProcessHandleCount @ 0x1C002522C (HmgDecProcessHandleCount.c)
 *     ?bSwap@RGNOBJAPI@@QEAAHPEAVRGNOBJ@@@Z @ 0x1C0027FA0 (-bSwap@RGNOBJAPI@@QEAAHPEAVRGNOBJ@@@Z.c)
 *     ??0RGNOBJAPI@@QEAA@PEAUHRGN__@@H@Z @ 0x1C0028350 (--0RGNOBJAPI@@QEAA@PEAUHRGN__@@H@Z.c)
 *     ?UpdateUserRgn@RGNOBJ@@QEAAXXZ @ 0x1C0028690 (-UpdateUserRgn@RGNOBJ@@QEAAXXZ.c)
 *     ?vCopy@RGNOBJ@@QEAAXAEAV1@@Z @ 0x1C0029990 (-vCopy@RGNOBJ@@QEAAXAEAV1@@Z.c)
 *     ?vDeleteRGNOBJ@RGNOBJ@@QEAAXXZ @ 0x1C0029E50 (-vDeleteRGNOBJ@RGNOBJ@@QEAAXXZ.c)
 *     HmgIncProcessHandleCount @ 0x1C002A680 (HmgIncProcessHandleCount.c)
 *     ?vInitialize@RGNMEMOBJ@@QEAAXK@Z @ 0x1C002B3F8 (-vInitialize@RGNMEMOBJ@@QEAAXK@Z.c)
 *     ?vReleaseVis@DC@@QEAAXXZ @ 0x1C002C90C (-vReleaseVis@DC@@QEAAXXZ.c)
 *     ?bSetDefaultRegion@DC@@QEAAHXZ @ 0x1C002D860 (-bSetDefaultRegion@DC@@QEAAHXZ.c)
 *     ?vLockHandle@HANDLELOCK@@QEAAXPEAU_ENTRY@@HIH@Z @ 0x1C0031DD0 (-vLockHandle@HANDLELOCK@@QEAAXPEAU_ENTRY@@HIH@Z.c)
 *     ?Pid@HANDLELOCK@@QEAAXK@Z @ 0x1C0032050 (-Pid@HANDLELOCK@@QEAAXK@Z.c)
 *     Template_pqz @ 0x1C00C0018 (Template_pqz.c)
 *     Template_pz @ 0x1C00C00D4 (Template_pz.c)
 */

__int64 __fastcall GreSelectVisRgnInternal(struct DC **a1, HRGN a2, int a3)
{
  struct REGION *v3; // r15
  int v4; // r14d
  struct DC **v6; // rbx
  struct _ERESOURCE *v8; // rdi
  struct DC *v9; // rax
  unsigned int v10; // esi
  __int64 v11; // rdx
  int v12; // r8d
  struct _ERESOURCE *v13; // rbx
  char *v14; // rbx
  bool v15; // zf
  signed __int32 v16; // eax
  __int64 v17; // rdx
  __int64 v18; // r8
  __int64 v19; // rsi
  unsigned int v20; // esi
  __int64 v21; // rdx
  int v22; // r8d
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // r8
  struct REGION *v26; // r13
  unsigned __int64 v27; // rdx
  __int64 v28; // rcx
  unsigned __int64 v29; // rdx
  unsigned int v30; // edx
  int v31; // ebx
  struct _ERESOURCE *v32; // rsi
  struct _ENTRY *v33; // r12
  __int64 v34; // rdx
  __int64 v35; // rcx
  int v36; // esi
  __int64 v37; // r14
  struct REGION *v38; // r15
  __int64 v39; // rsi
  char *v40; // rsi
  int v41; // ebx
  struct DC *v42; // rsi
  int v43; // eax
  __int16 *v44; // rbx
  struct REGION *v45; // [rsp+30h] [rbp-59h] BYREF
  HRGN v46; // [rsp+38h] [rbp-51h]
  int v47; // [rsp+40h] [rbp-49h]
  char *v48; // [rsp+48h] [rbp-41h] BYREF
  int v49; // [rsp+50h] [rbp-39h]
  unsigned int v50; // [rsp+54h] [rbp-35h]
  int v51; // [rsp+58h] [rbp-31h]
  int v52; // [rsp+5Ch] [rbp-2Dh]
  __int64 v53; // [rsp+60h] [rbp-29h]
  struct REGION *v54; // [rsp+68h] [rbp-21h] BYREF
  int v55; // [rsp+70h] [rbp-19h]
  __int64 v56; // [rsp+78h] [rbp-11h] BYREF
  int v57; // [rsp+80h] [rbp-9h]
  unsigned int v58; // [rsp+84h] [rbp-5h]
  unsigned int v59; // [rsp+8Ch] [rbp+3h]
  struct REGION *v60; // [rsp+90h] [rbp+7h]
  struct REGION *v61; // [rsp+98h] [rbp+Fh] BYREF
  __int64 v62; // [rsp+A0h] [rbp+17h]
  _BYTE v63[8]; // [rsp+A8h] [rbp+1Fh] BYREF
  int v66; // [rsp+108h] [rbp+7Fh]

  v3 = 0LL;
  v4 = a3;
  v6 = a1;
  if ( !*a1 )
    return 0LL;
  v8 = ghsemVisRgnPublish;
  if ( ghsemVisRgnPublish )
  {
    PsEnterPriorityRegion(a1, a2);
    ExEnterCriticalRegionAndAcquireResourceExclusive(v8);
  }
  v9 = *v6;
  v10 = 1;
  v66 = 1;
  *((_DWORD *)v9 + 9) |= 0x10u;
  *((_BYTE *)WPP_MAIN_CB.Dpc.SystemArgument2 + 24 * (unsigned __int16)*(_DWORD *)v9 + 15) |= 4u;
  if ( a2 )
  {
    PsGetCurrentProcessId();
    if ( (unsigned __int16)a2 < (unsigned int)gcMaxHmgr )
    {
      v13 = ghsemHmgr;
      if ( ghsemHmgr )
      {
        PsEnterPriorityRegion(L"ghsemHmgr", v11);
        ExEnterCriticalRegionAndAcquireResourceExclusive(v13);
        LODWORD(v13) = (_DWORD)ghsemHmgr;
      }
      if ( gbLockEtw && (Microsoft_Windows_Win32kEnableBits & 0x10) != 0 )
        Template_pqz((unsigned int)L"ghsemHmgr", v11, v12, (_DWORD)v13, 16, (__int64)L"ghsemHmgr");
      v14 = (char *)WPP_MAIN_CB.Dpc.SystemArgument2 + 24 * (unsigned __int16)a2;
      PsGetCurrentThreadWin32ThreadAndEnterCriticalRegion(v63);
      v49 = 1;
      v48 = v14;
      v52 = (unsigned __int16)a2;
      _m_prefetchw(v14 + 8);
      v15 = (v14[15] & 0x20) == 0;
      v16 = *((_DWORD *)v14 + 2);
      v50 = v16;
      if ( v15 )
      {
        while ( 1 )
        {
          while ( 1 )
          {
            if ( (v14[15] & 0x40) != 0 )
            {
              ExAcquirePushLockExclusiveEx((char *)WPP_MAIN_CB.Dpc.DpcData + 8 * (unsigned __int16)a2, 0LL);
              if ( v14[14] == 4 && *((_WORD *)v14 + 6) == WORD1(a2) )
              {
                v19 = *(_QWORD *)v14;
                PsGetThreadWin32Thread(KeGetCurrentThread(), v17, v18);
                if ( !*(_WORD *)(v19 + 12) || *(struct _KTHREAD **)(v19 + 16) == KeGetCurrentThread() )
                {
                  v20 = *((_DWORD *)v14 + 2) & 0xFFFFFFFE;
                  if ( v20 )
                  {
                    if ( (unsigned int)HmgIncProcessHandleCount(0LL) )
                    {
                      HmgDecProcessHandleCount(v20, v21, v22);
                      HANDLELOCK::Pid((HANDLELOCK *)&v48, 0);
                    }
                  }
                }
              }
              if ( (v14[15] & 0x40) != 0 )
              {
                ExReleasePushLockExclusiveEx((char *)WPP_MAIN_CB.Dpc.DpcData + 8 * (unsigned __int16)a2);
              }
              else
              {
                _m_prefetchw(v14 + 8);
                v50 = *((_DWORD *)v14 + 2) & 0xFFFFFFFE;
                _InterlockedExchange((volatile __int32 *)v14 + 2, v50);
              }
              goto LABEL_31;
            }
            if ( (v16 & 1) == 0 )
              break;
            KeDelayExecutionThread(0, 0, gpLockShortDelay);
LABEL_19:
            _m_prefetchw(v14 + 8);
            v15 = (v14[15] & 0x20) == 0;
            v16 = *((_DWORD *)v14 + 2);
            v50 = v16;
            if ( !v15 )
              goto LABEL_31;
          }
          v51 = v16 | 1;
          if ( v16 != _InterlockedCompareExchange((volatile signed __int32 *)v14 + 2, v16 | 1, v16)
            || (v14[15] & 0x40) != 0 )
          {
            goto LABEL_19;
          }
          *((_QWORD *)WPP_MAIN_CB.Dpc.DpcData + (unsigned __int16)a2) = 0LL;
          v14[15] |= 0x40u;
          _m_prefetchw(v14 + 8);
          v50 = *((_DWORD *)v14 + 2) & 0xFFFFFFFE;
          _InterlockedExchange((volatile __int32 *)v14 + 2, v50);
          v16 = v50;
        }
      }
LABEL_31:
      KeLeaveCriticalRegion();
      if ( gbLockEtw && (Microsoft_Windows_Win32kEnableBits & 0x10) != 0 )
        Template_pz(v23, &LockRelease, v24, ghsemHmgr, L"ghsemHmgr");
      if ( ghsemHmgr )
      {
        ExReleaseResourceAndLeaveCriticalRegion(ghsemHmgr);
        PsLeavePriorityRegion();
      }
      v4 = a3;
      v6 = a1;
    }
    RGNOBJAPI::RGNOBJAPI((RGNOBJAPI *)&v45, a2, 0);
    v26 = v45;
    if ( !v45 )
    {
      v3 = prgnDefault;
      goto LABEL_92;
    }
    v25 = (unsigned int)gcMaxHmgr;
    v27 = *(_QWORD *)*v6;
    if ( (unsigned __int16)v27 >= (unsigned int)gcMaxHmgr
      || (v28 = 3LL * (unsigned __int16)v27,
          *((_BYTE *)WPP_MAIN_CB.Dpc.SystemArgument2 + 24 * (unsigned __int16)v27 + 14) != 1)
      || (v29 = v27 >> 16, *((_WORD *)WPP_MAIN_CB.Dpc.SystemArgument2 + 4 * v28 + 6) != (_WORD)v29)
      || (*((_DWORD *)WPP_MAIN_CB.Dpc.SystemArgument2 + 2 * v28 + 2) & 0xFFFFFFFE) != 0x80000012 )
    {
      GrepValidateVisRgn(*v6, v45);
      v25 = (unsigned int)gcMaxHmgr;
    }
    if ( v4 != 1 )
    {
      if ( v4 == 2 )
      {
        v30 = *((_DWORD *)v26 + 20);
        v55 = 0;
        RGNMEMOBJ::vInitialize((RGNMEMOBJ *)&v54, v30);
        v3 = v54;
        if ( v54 )
          RGNOBJ::vCopy((RGNOBJ *)&v54, (struct RGNOBJ *)&v45);
        else
          v3 = prgnDefault;
        if ( v55 == 1 )
          RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v54);
      }
      else if ( v4 == 4 )
      {
        v3 = (struct REGION *)*((_QWORD *)*v6 + 189);
        if ( !v3 )
          v3 = prgnDefault;
        if ( v3 != prgnDefault )
        {
          v61 = v3;
          RGNOBJAPI::bSwap((RGNOBJAPI *)&v45, (struct RGNOBJ *)&v61);
          v3 = v61;
LABEL_99:
          *((_QWORD *)*v6 + 189) = v3;
          v15 = v47 == 0;
          *((_DWORD *)v3 + 7) = _InterlockedIncrement((volatile signed __int32 *)&REGION::ulUniqueREGION);
          if ( v15 )
            RGNOBJ::UpdateUserRgn((RGNOBJ *)&v45);
          v10 = v66;
          if ( v45 )
            _InterlockedDecrement((volatile signed __int32 *)v45 + 3);
          goto LABEL_104;
        }
        v66 = 0;
      }
LABEL_92:
      v42 = *a1;
      v43 = *(_DWORD *)*a1;
      *((_DWORD *)v42 + 9) |= 0x10u;
      *((_BYTE *)WPP_MAIN_CB.Dpc.SystemArgument2 + 24 * (unsigned __int16)v43 + 15) |= 4u;
      v44 = (__int16 *)*((_QWORD *)v42 + 189);
      if ( v44 && v44 != (__int16 *)prgnDefault )
      {
        if ( v44[7] >= 0 )
        {
          Win32FreePool();
        }
        else if ( (int)IsWin32FreeToPagedLookasideListImplSupported_0() >= 0 )
        {
          Win32FreeToPagedLookasideListImpl_0();
        }
      }
      v6 = a1;
      *((_QWORD *)v42 + 189) = prgnDefault;
      goto LABEL_99;
    }
    v31 = (int)v46;
    v3 = v26;
    v60 = v26;
    if ( v46 == hrgnDefault )
      goto LABEL_92;
    if ( (unsigned __int16)v46 >= (unsigned int)v25 )
    {
      v38 = 0LL;
    }
    else
    {
      v32 = ghsemHmgr;
      if ( ghsemHmgr )
      {
        PsEnterPriorityRegion(v28, v29);
        ExEnterCriticalRegionAndAcquireResourceExclusive(v32);
        LODWORD(v32) = (_DWORD)ghsemHmgr;
      }
      if ( gbLockEtw && (Microsoft_Windows_Win32kEnableBits & 0x10) != 0 )
        Template_pqz(v28, v29, v25, (_DWORD)v32, 16, (__int64)L"ghsemHmgr");
      v53 = (unsigned __int16)v31;
      v33 = (struct _ENTRY *)((char *)WPP_MAIN_CB.Dpc.SystemArgument2 + 24 * (unsigned __int16)v31);
      v62 = 24LL * (unsigned __int16)v31;
      HANDLELOCK::vLockHandle((HANDLELOCK *)&v56, v33, 1, (unsigned __int16)v31, 0);
      v36 = v57;
      v37 = v56;
      if ( v57 && v56 )
      {
        if ( *((_BYTE *)v33 + 14) == 4
          && *((_WORD *)v33 + 6) == HIWORD(v31)
          && (v38 = *(struct REGION **)v33, *(_WORD *)(*(_QWORD *)v33 + 12LL) == 1)
          && !*((_DWORD *)v38 + 2)
          && (*((_BYTE *)v33 + 15) & 1) == 0 )
        {
          v39 = v62;
          *(_QWORD *)v38 = 0LL;
          v40 = (char *)WPP_MAIN_CB.Dpc.SystemArgument2 + v39;
          v41 = *((_DWORD *)v40 + 2);
          HmgDecProcessHandleCount(v41 & 0xFFFFFFFE, v34, v25);
          *(_QWORD *)v40 = ghFreeHmgr;
          ghFreeHmgr = v53;
          *((_WORD *)v33 + 6) += 256;
          --gcCurHmgr;
          *((_BYTE *)v33 + 14) = 0;
          *((_QWORD *)v33 + 2) = 0LL;
          *((_DWORD *)v40 + 2) = v41 & 1;
        }
        else
        {
          v38 = 0LL;
        }
        if ( (*(_BYTE *)(v37 + 15) & 0x40) != 0 )
        {
          ExReleasePushLockExclusiveEx((char *)WPP_MAIN_CB.Dpc.DpcData + 8 * v59);
        }
        else
        {
          _m_prefetchw((const void *)(v37 + 8));
          v58 = *(_DWORD *)(v37 + 8) & 0xFFFFFFFE;
          _InterlockedExchange((volatile __int32 *)(v37 + 8), v58);
          v26 = v45;
        }
        v36 = 0;
        v37 = 0LL;
        v57 = 0;
        v56 = 0LL;
        KeLeaveCriticalRegion();
      }
      else
      {
        v38 = 0LL;
      }
      if ( gbLockEtw && (Microsoft_Windows_Win32kEnableBits & 0x10) != 0 )
        Template_pz(v35, &LockRelease, v25, ghsemHmgr, L"ghsemHmgr");
      if ( ghsemHmgr )
      {
        ExReleaseResourceAndLeaveCriticalRegion(ghsemHmgr);
        PsLeavePriorityRegion();
      }
      if ( !v36 )
        goto LABEL_89;
      if ( v37 )
      {
        if ( (*(_BYTE *)(v37 + 15) & 0x40) != 0 )
        {
          ExReleasePushLockExclusiveEx((char *)WPP_MAIN_CB.Dpc.DpcData + 8 * v59);
          KeLeaveCriticalRegion();
          goto LABEL_89;
        }
        _m_prefetchw((const void *)(v37 + 8));
        v58 = *(_DWORD *)(v37 + 8) & 0xFFFFFFFE;
        _InterlockedExchange((volatile __int32 *)(v37 + 8), v58);
        v26 = v45;
      }
      KeLeaveCriticalRegion();
    }
LABEL_89:
    v15 = v38 == v26;
    v3 = v60;
    if ( v15 )
    {
      v46 = 0LL;
      v45 = 0LL;
    }
    goto LABEL_92;
  }
  DC::vReleaseVis(*v6);
  DC::bSetDefaultRegion(*v6);
LABEL_104:
  if ( v8 )
  {
    if ( gbLockEtw )
    {
      if ( (Microsoft_Windows_Win32kEnableBits & 0x10) != 0 )
        Template_pz((unsigned int)Microsoft_Windows_Win32kEnableBits, &LockRelease, v25, v8, L"hsem");
    }
    ExReleaseResourceAndLeaveCriticalRegion(v8);
    PsLeavePriorityRegion();
  }
  return v10;
}
