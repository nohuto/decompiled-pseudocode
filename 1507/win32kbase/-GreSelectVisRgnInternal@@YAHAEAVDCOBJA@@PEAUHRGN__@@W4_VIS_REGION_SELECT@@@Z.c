/*
 * XREFs of ?GreSelectVisRgnInternal@@YAHAEAVDCOBJA@@PEAUHRGN__@@W4_VIS_REGION_SELECT@@@Z @ 0x1C0043D80
 * Callers:
 *     ?ResetOrg@@YAXPEAUHRGN__@@PEAUtagDCE@@H@Z @ 0x1C00433D0 (-ResetOrg@@YAXPEAUHRGN__@@PEAUtagDCE@@H@Z.c)
 *     GreSelectVisRgn @ 0x1C0044570 (GreSelectVisRgn.c)
 *     GreSelectVisRgnShared @ 0x1C0069360 (GreSelectVisRgnShared.c)
 * Callees:
 *     IsWin32FreeToPagedLookasideListImplSupported_0 @ 0x1C0002C18 (IsWin32FreeToPagedLookasideListImplSupported_0.c)
 *     Win32FreeToPagedLookasideListImpl_0 @ 0x1C0002C20 (Win32FreeToPagedLookasideListImpl_0.c)
 *     Win32FreePool @ 0x1C0033BB0 (Win32FreePool.c)
 *     HmgDecProcessHandleCount @ 0x1C00386E0 (HmgDecProcessHandleCount.c)
 *     ?Pid@HANDLELOCK@@QEAAXK@Z @ 0x1C003C470 (-Pid@HANDLELOCK@@QEAAXK@Z.c)
 *     ?vReleaseVis@DC@@QEAAXXZ @ 0x1C003CC0C (-vReleaseVis@DC@@QEAAXXZ.c)
 *     ?bSetDefaultRegion@DC@@QEAAHXZ @ 0x1C003DBA0 (-bSetDefaultRegion@DC@@QEAAHXZ.c)
 *     ?UpdateUserRgn@RGNOBJ@@QEAAXXZ @ 0x1C003E0E0 (-UpdateUserRgn@RGNOBJ@@QEAAXXZ.c)
 *     ?vCopy@RGNOBJ@@QEAAXAEAV1@@Z @ 0x1C003FBF0 (-vCopy@RGNOBJ@@QEAAXAEAV1@@Z.c)
 *     ?vDeleteRGNOBJ@RGNOBJ@@QEAAXXZ @ 0x1C00400F0 (-vDeleteRGNOBJ@RGNOBJ@@QEAAXXZ.c)
 *     ?vSet@RGNOBJ@@QEAAXPEAU_RECTL@@@Z @ 0x1C0040180 (-vSet@RGNOBJ@@QEAAXPEAU_RECTL@@@Z.c)
 *     ?bSwap@RGNOBJAPI@@QEAAHPEAVRGNOBJ@@@Z @ 0x1C0042CD0 (-bSwap@RGNOBJAPI@@QEAAHPEAVRGNOBJ@@@Z.c)
 *     HmgIncProcessHandleCount @ 0x1C004AE80 (HmgIncProcessHandleCount.c)
 *     ??0RGNMEMOBJ@@QEAA@K@Z @ 0x1C004C040 (--0RGNMEMOBJ@@QEAA@K@Z.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VBRUSHSELOBJ@@@@QEAA@XZ @ 0x1C00AEF50 (--1-$UnexpectedThreadTerminationHandler@VBRUSHSELOBJ@@@@QEAA@XZ.c)
 *     ??0AcquireDcVisRgnExclusive@@QEAA@PEAVDC@@@Z @ 0x1C00AF5E0 (--0AcquireDcVisRgnExclusive@@QEAA@PEAVDC@@@Z.c)
 *     ??0RGNOBJAPI@@QEAA@PEAUHRGN__@@HH@Z @ 0x1C00B0F10 (--0RGNOBJAPI@@QEAA@PEAUHRGN__@@HH@Z.c)
 *     ?HmgRemoveObjectImpl@@YAPEAXPEAUHOBJ__@@JJKEPEAK@Z @ 0x1C00B2F54 (-HmgRemoveObjectImpl@@YAPEAXPEAUHOBJ__@@JJKEPEAK@Z.c)
 *     ??1AcquireDcVisRgnShared@@QEAA@XZ @ 0x1C00B3DB8 (--1AcquireDcVisRgnShared@@QEAA@XZ.c)
 *     ?GrepValidateVisRgn@@YA_NPEAVDC@@PEAVREGION@@AEAVERECTL@@@Z @ 0x1C00BE150 (-GrepValidateVisRgn@@YA_NPEAVDC@@PEAVREGION@@AEAVERECTL@@@Z.c)
 *     Template_pqz @ 0x1C00BEC08 (Template_pqz.c)
 *     Template_pz @ 0x1C00BECC4 (Template_pz.c)
 */

__int64 __fastcall GreSelectVisRgnInternal(struct DC **a1, HRGN a2, int a3)
{
  struct REGION *v3; // r15
  struct _ERESOURCE *v8; // rbx
  struct DC *v9; // rax
  unsigned int v10; // r14d
  int v11; // edx
  __int64 v12; // rcx
  int v13; // r8d
  struct _ERESOURCE *v14; // rdi
  __int64 v15; // r14
  __int64 v16; // rdi
  bool v17; // zf
  signed __int32 v18; // eax
  __int64 v19; // rsi
  unsigned int v20; // esi
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // rcx
  struct REGION *v24; // rdx
  __int64 v25; // r8
  int v26; // r13d
  int v27; // r13d
  struct REGION *v28; // rax
  struct DC *v29; // rsi
  int v30; // eax
  __int16 *v31; // rdi
  __int64 v32; // r8
  __int64 v33; // rcx
  __int64 v34; // [rsp+30h] [rbp-79h] BYREF
  int v35; // [rsp+38h] [rbp-71h]
  unsigned int v36; // [rsp+3Ch] [rbp-6Dh]
  int v37; // [rsp+40h] [rbp-69h]
  int v38; // [rsp+44h] [rbp-65h]
  struct REGION *v39; // [rsp+48h] [rbp-61h] BYREF
  struct REGION *v40; // [rsp+50h] [rbp-59h] BYREF
  int v41; // [rsp+58h] [rbp-51h]
  struct REGION *v42; // [rsp+60h] [rbp-49h] BYREF
  _BYTE v43[32]; // [rsp+68h] [rbp-41h] BYREF
  struct HOBJ__ *v44; // [rsp+88h] [rbp-21h]
  int v45; // [rsp+90h] [rbp-19h]
  _BYTE v46[8]; // [rsp+98h] [rbp-11h] BYREF
  _BYTE v47[8]; // [rsp+A0h] [rbp-9h] BYREF
  _BYTE v48[8]; // [rsp+A8h] [rbp-1h] BYREF
  _BYTE v49[16]; // [rsp+B0h] [rbp+7h] BYREF
  struct _RECTL v50; // [rsp+C0h] [rbp+17h] BYREF
  int v51; // [rsp+110h] [rbp+67h]
  int v53; // [rsp+128h] [rbp+7Fh]

  v3 = 0LL;
  if ( !*a1 )
    return 0LL;
  v8 = (struct _ERESOURCE *)ghsemVisRgnPublish;
  if ( ghsemVisRgnPublish )
  {
    PsEnterPriorityRegion(a1);
    ExEnterCriticalRegionAndAcquireResourceExclusive(v8);
  }
  v9 = *a1;
  v10 = 1;
  v51 = 1;
  v53 = 1;
  *((_DWORD *)v9 + 9) |= 0x10u;
  *(_BYTE *)(*(_QWORD *)&WPP_MAIN_CB.AlignmentRequirement + 24LL * (unsigned __int16)*(_DWORD *)v9 + 15) |= 4u;
  if ( a2 )
  {
    PsGetCurrentProcessId();
    if ( (unsigned __int16)a2 < (unsigned int)gcMaxHmgr )
    {
      v14 = ghsemHmgr;
      if ( ghsemHmgr )
      {
        PsEnterPriorityRegion(v12);
        ExEnterCriticalRegionAndAcquireResourceExclusive(v14);
        LODWORD(v14) = (_DWORD)ghsemHmgr;
      }
      if ( gbLockEtw && (Microsoft_Windows_Win32kEnableBits & 0x10) != 0 )
        Template_pqz((unsigned int)L"ghsemHmgr", v11, v13, (_DWORD)v14, 16, (__int64)L"ghsemHmgr");
      v15 = (unsigned __int16)a2;
      v16 = *(_QWORD *)&WPP_MAIN_CB.AlignmentRequirement + 24LL * (unsigned __int16)a2;
      PsGetCurrentThreadWin32ThreadAndEnterCriticalRegion(v49);
      v35 = 1;
      v34 = v16;
      v38 = (unsigned __int16)a2;
      _m_prefetchw((const void *)(v16 + 8));
      v17 = (*(_BYTE *)(v16 + 15) & 0x20) == 0;
      v18 = *(_DWORD *)(v16 + 8);
      v36 = v18;
      if ( v17 )
      {
        while ( 1 )
        {
          while ( 1 )
          {
            if ( (*(_BYTE *)(v16 + 15) & 0x40) != 0 )
            {
              ExAcquirePushLockExclusiveEx((char *)gpentPushLock + 8 * (unsigned __int16)a2, 0LL);
              if ( *(_BYTE *)(v16 + 14) == 4 && *(_WORD *)(v16 + 12) == WORD1(a2) )
              {
                v19 = *(_QWORD *)v16;
                PsGetThreadWin32Thread(KeGetCurrentThread());
                if ( !*(_WORD *)(v19 + 12) || *(struct _KTHREAD **)(v19 + 16) == KeGetCurrentThread() )
                {
                  v20 = *(_DWORD *)(v16 + 8) & 0xFFFFFFFE;
                  if ( v20 )
                  {
                    if ( (unsigned int)HmgIncProcessHandleCount(0LL) )
                    {
                      HmgDecProcessHandleCount(v20);
                      HANDLELOCK::Pid((HANDLELOCK *)&v34, 0);
                    }
                  }
                }
              }
              if ( (*(_BYTE *)(v16 + 15) & 0x40) != 0 )
              {
                ExReleasePushLockExclusiveEx((char *)gpentPushLock + 8 * v15, 0LL);
              }
              else
              {
                _m_prefetchw((const void *)(v16 + 8));
                v36 = *(_DWORD *)(v16 + 8) & 0xFFFFFFFE;
                _InterlockedExchange((volatile __int32 *)(v16 + 8), v36);
              }
              goto LABEL_31;
            }
            if ( (v18 & 1) == 0 )
              break;
            KeDelayExecutionThread(0, 0, gpLockShortDelay);
LABEL_19:
            _m_prefetchw((const void *)(v16 + 8));
            v17 = (*(_BYTE *)(v16 + 15) & 0x20) == 0;
            v18 = *(_DWORD *)(v16 + 8);
            v36 = v18;
            if ( !v17 )
              goto LABEL_31;
          }
          v37 = v18 | 1;
          if ( v18 != _InterlockedCompareExchange((volatile signed __int32 *)(v16 + 8), v18 | 1, v18)
            || (*(_BYTE *)(v16 + 15) & 0x40) != 0 )
          {
            goto LABEL_19;
          }
          *((_QWORD *)gpentPushLock + (unsigned __int16)a2) = 0LL;
          *(_BYTE *)(v16 + 15) |= 0x40u;
          _m_prefetchw((const void *)(v16 + 8));
          v36 = *(_DWORD *)(v16 + 8) & 0xFFFFFFFE;
          _InterlockedExchange((volatile __int32 *)(v16 + 8), v36);
          v18 = v36;
        }
      }
LABEL_31:
      KeLeaveCriticalRegion();
      if ( gbLockEtw && (Microsoft_Windows_Win32kEnableBits & 0x10) != 0 )
        Template_pz(v21, &LockRelease, v22, ghsemHmgr);
      if ( ghsemHmgr )
      {
        ExReleaseResourceAndLeaveCriticalRegion(ghsemHmgr);
        PsLeavePriorityRegion(v23);
      }
      v10 = 1;
    }
    RGNOBJAPI::RGNOBJAPI((RGNOBJAPI *)&v42, a2, 0, 0);
    v24 = v42;
    if ( v42 )
    {
      v25 = *(_QWORD *)*a1;
      if ( (unsigned __int16)v25 >= (unsigned int)gcMaxHmgr
        || *(_BYTE *)(*(_QWORD *)&WPP_MAIN_CB.AlignmentRequirement + 24LL * (unsigned __int16)v25 + 14) != 1
        || *(_WORD *)(*(_QWORD *)&WPP_MAIN_CB.AlignmentRequirement + 24LL * (unsigned __int16)v25 + 12) != WORD1(v25)
        || (*(_DWORD *)(*(_QWORD *)&WPP_MAIN_CB.AlignmentRequirement + 24LL * (unsigned __int16)v25 + 8) & 0xFFFFFFFE) != 0x80000012 )
      {
        if ( !GrepValidateVisRgn(*a1, v42, (struct ERECTL *)&v50) )
          RGNOBJ::vSet((RGNOBJ *)&v42, &v50);
        v24 = v42;
      }
      v26 = a3 - 1;
      if ( v26 )
      {
        v27 = v26 - 1;
        if ( v27 )
        {
          if ( v27 == 2 )
          {
            AcquireDcVisRgnExclusive::AcquireDcVisRgnExclusive((AcquireDcVisRgnExclusive *)v47, *a1);
            v3 = (struct REGION *)*((_QWORD *)*a1 + 192);
            if ( !v3 )
              v3 = prgnDefault;
            if ( v3 == prgnDefault )
            {
              v10 = 0;
              v51 = 0;
            }
            else
            {
              v39 = v3;
              RGNOBJAPI::bSwap((RGNOBJAPI *)&v42, (struct RGNOBJ *)&v39);
              v3 = v39;
              v53 = 0;
            }
            AcquireDcVisRgnShared::~AcquireDcVisRgnShared((AcquireDcVisRgnShared *)v47);
            if ( !v53 )
              goto LABEL_72;
          }
        }
        else
        {
          RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)&v40, *((_DWORD *)v24 + 20));
          v3 = v40;
          if ( v40 )
            RGNOBJ::vCopy((RGNOBJ *)&v40, (struct RGNOBJ *)&v42);
          else
            v3 = prgnDefault;
          if ( v41 == 1 )
            RGNOBJ::vDeleteRGNOBJ((__int16 **)&v40);
        }
      }
      else
      {
        v3 = v24;
        if ( v44 == (struct HOBJ__ *)hrgnDefault
          || (v28 = (struct REGION *)HmgRemoveObjectImpl(v44, 1, 0, 0, 4, 0LL), v24 = v42, v28 != v42) )
        {
          v10 = 0;
LABEL_73:
          if ( !v45 )
          {
            RGNOBJ::UpdateUserRgn((RGNOBJ *)&v42);
            v24 = v42;
          }
          if ( v24 )
            _InterlockedDecrement((volatile signed __int32 *)v24 + 3);
          UnexpectedThreadTerminationHandler<BRUSHSELOBJ>::~UnexpectedThreadTerminationHandler<BRUSHSELOBJ>(v43);
          goto LABEL_79;
        }
        v44 = 0LL;
        v42 = 0LL;
      }
    }
    else
    {
      v3 = prgnDefault;
    }
    v29 = *a1;
    v30 = *(_DWORD *)*a1;
    *((_DWORD *)v29 + 9) |= 0x10u;
    *(_BYTE *)(*(_QWORD *)&WPP_MAIN_CB.AlignmentRequirement + 24LL * (unsigned __int16)v30 + 15) |= 4u;
    AcquireDcVisRgnExclusive::AcquireDcVisRgnExclusive((AcquireDcVisRgnExclusive *)v48, v29);
    v31 = (__int16 *)*((_QWORD *)v29 + 192);
    if ( v31 && v31 != (__int16 *)prgnDefault )
    {
      if ( v31[7] >= 0 )
      {
        Win32FreePool();
      }
      else if ( (int)IsWin32FreeToPagedLookasideListImplSupported_0() >= 0 )
      {
        Win32FreeToPagedLookasideListImpl_0();
      }
    }
    *((_QWORD *)v29 + 192) = prgnDefault;
    AcquireDcVisRgnShared::~AcquireDcVisRgnShared((AcquireDcVisRgnShared *)v48);
    v10 = v51;
LABEL_72:
    AcquireDcVisRgnExclusive::AcquireDcVisRgnExclusive((AcquireDcVisRgnExclusive *)v46, *a1);
    *((_QWORD *)*a1 + 192) = v3;
    *((_DWORD *)v3 + 7) = _InterlockedIncrement((volatile signed __int32 *)&REGION::ulUniqueREGION);
    AcquireDcVisRgnShared::~AcquireDcVisRgnShared((AcquireDcVisRgnShared *)v46);
    v24 = v42;
    goto LABEL_73;
  }
  DC::vReleaseVis(*a1);
  DC::bSetDefaultRegion(*a1);
LABEL_79:
  if ( v8 )
  {
    if ( gbLockEtw )
    {
      if ( (Microsoft_Windows_Win32kEnableBits & 0x10) != 0 )
        Template_pz((unsigned int)Microsoft_Windows_Win32kEnableBits, &LockRelease, v32, v8);
    }
    ExReleaseResourceAndLeaveCriticalRegion(v8);
    PsLeavePriorityRegion(v33);
  }
  return v10;
}
