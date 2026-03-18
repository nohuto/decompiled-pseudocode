/*
 * XREFs of GreSetDCOwnerEx @ 0x1C0023A20
 * Callers:
 *     CreateCacheDC @ 0x1C0020830 (CreateCacheDC.c)
 *     _GetDCEx @ 0x1C00212B0 (_GetDCEx.c)
 *     ReleaseCacheDC @ 0x1C0024AF0 (ReleaseCacheDC.c)
 *     GetMonitorDC @ 0x1C0038300 (GetMonitorDC.c)
 *     ?DestroyDC@@YAXPEAPEAUHDC__@@@Z @ 0x1C0054D68 (-DestroyDC@@YAXPEAPEAUHDC__@@@Z.c)
 *     InitUserScreen @ 0x1C0057224 (InitUserScreen.c)
 *     DestroyCacheDC @ 0x1C005A3A0 (DestroyCacheDC.c)
 *     GreCleanDCAndSetOwnerEx @ 0x1C00CCFD0 (GreCleanDCAndSetOwnerEx.c)
 * Callees:
 *     GreSetBrushOwner @ 0x1C00246C0 (GreSetBrushOwner.c)
 *     HmgAllocateDcAttr @ 0x1C002498C (HmgAllocateDcAttr.c)
 *     ??B?$HmgLockResultBase@VDRVOBJ@@@@QEBA_NXZ @ 0x1C0027218 (--B-$HmgLockResultBase@VDRVOBJ@@@@QEBA_NXZ.c)
 *     ?vUnlock@HANDLELOCK@@QEAAXXZ @ 0x1C0029F70 (-vUnlock@HANDLELOCK@@QEAAXXZ.c)
 *     ?Pid@HANDLELOCK@@QEAAXK@Z @ 0x1C002A4AC (-Pid@HANDLELOCK@@QEAAXK@Z.c)
 *     ?GetEntry@GdiHandleEntryDirectory@@QEAAPEAU_ENTRY@@I_N@Z @ 0x1C002AFD0 (-GetEntry@GdiHandleEntryDirectory@@QEAAPEAU_ENTRY@@I_N@Z.c)
 *     ?vSet@RGNOBJ@@QEAAXPEAU_RECTL@@@Z @ 0x1C002E660 (-vSet@RGNOBJ@@QEAAXPEAU_RECTL@@@Z.c)
 *     HmgFreeDcAttr @ 0x1C0034278 (HmgFreeDcAttr.c)
 *     HmgDecProcessHandleCount @ 0x1C0036468 (HmgDecProcessHandleCount.c)
 *     HmgIncProcessHandleCount @ 0x1C0036580 (HmgIncProcessHandleCount.c)
 *     GreIncQuotaCount @ 0x1C0076740 (GreIncQuotaCount.c)
 *     ??0AcquireDcVisRgnExclusive@@QEAA@PEAVDC@@@Z @ 0x1C00BD700 (--0AcquireDcVisRgnExclusive@@QEAA@PEAVDC@@@Z.c)
 *     ??1AcquireDcVisRgnShared@@QEAA@XZ @ 0x1C00BD78C (--1AcquireDcVisRgnShared@@QEAA@XZ.c)
 *     ?RECSTACKBACKTRACE@@YAXI@Z @ 0x1C00C0798 (-RECSTACKBACKTRACE@@YAXI@Z.c)
 *     ??0AcquireDcVisRgnShared@@QEAA@PEAVDC@@@Z @ 0x1C00C1980 (--0AcquireDcVisRgnShared@@QEAA@PEAVDC@@@Z.c)
 *     ?GrepValidateVisRgn@@YA_NPEAVDC@@PEAVREGION@@AEAVERECTL@@@Z @ 0x1C00CB930 (-GrepValidateVisRgn@@YA_NPEAVDC@@PEAVREGION@@AEAVERECTL@@@Z.c)
 *     Template_pqz @ 0x1C00CC378 (Template_pqz.c)
 *     Template_pz @ 0x1C00CC434 (Template_pz.c)
 */

__int64 __fastcall GreSetDCOwnerEx(unsigned int a1, unsigned int a2, int a3, int a4)
{
  _OWORD *DcAttr; // rsi
  _BOOL8 v7; // rcx
  struct _ERESOURCE *v8; // rbx
  unsigned __int16 *v9; // r14
  __int64 v10; // rdi
  int v11; // r12d
  unsigned int v12; // r15d
  _QWORD *DeferredContext; // rax
  __int64 v14; // rbx
  unsigned int v15; // edx
  signed int v16; // ecx
  __int64 v17; // rbx
  __int64 v19; // rcx
  char v20; // al
  __int64 v21; // r9
  unsigned int v22; // edx
  __int64 v23; // r9
  unsigned int v25; // edi
  unsigned int v26; // ebx
  __int64 v27; // r9
  unsigned int v28; // edx
  signed int v29; // ecx
  __int64 v30; // r9
  __int64 v31; // r15
  unsigned int v32; // r12d
  bool v33; // bl
  unsigned __int64 v34; // rbx
  unsigned int v35; // eax
  int v36; // edi
  int v37; // ecx
  unsigned int v38; // eax
  int v39; // r13d
  __int64 CurrentProcessWin32Process; // rax
  _OWORD *v41; // rax
  __int64 v42; // rdx
  unsigned int v43; // edi
  unsigned int v44; // ebx
  __int64 v45; // r8
  unsigned int v46; // edx
  signed int v47; // ecx
  __int64 v48; // r9
  _QWORD *v49; // rdx
  int v50; // eax
  unsigned int v51; // ebx
  _OWORD *v52; // rax
  _OWORD *v53; // rcx
  __int64 v54; // rdx
  unsigned int v55; // edi
  unsigned int v56; // ebx
  __int64 v57; // r8
  unsigned int v58; // edx
  signed int v59; // ecx
  __int64 v60; // r9
  _QWORD *v61; // rdx
  unsigned int CurrentProcessId; // eax
  unsigned int v63; // eax
  BOOL v64; // ecx
  unsigned int v65; // edi
  unsigned int v66; // ebx
  __int64 v67; // r8
  unsigned int v68; // edx
  signed int v69; // ecx
  __int64 v70; // r9
  _DWORD *v71; // rdx
  GdiHandleEntryDirectory **v72; // r14
  int v73; // eax
  __int64 v74; // rdi
  unsigned int v75; // ebx
  GdiHandleEntryDirectory *v76; // r8
  unsigned int v77; // edx
  signed int v78; // ecx
  __int64 v79; // r10
  __int64 v80; // rcx
  unsigned int v82; // [rsp+30h] [rbp-B8h]
  BOOL v83; // [rsp+34h] [rbp-B4h]
  char *v84; // [rsp+40h] [rbp-A8h]
  char *v85; // [rsp+48h] [rbp-A0h] BYREF
  BOOL v86; // [rsp+50h] [rbp-98h]
  unsigned __int16 *v87; // [rsp+58h] [rbp-90h] BYREF
  int v88; // [rsp+60h] [rbp-88h]
  int v89; // [rsp+64h] [rbp-84h]
  char v90[8]; // [rsp+70h] [rbp-78h] BYREF
  char v91[8]; // [rsp+78h] [rbp-70h] BYREF
  char v92[8]; // [rsp+80h] [rbp-68h] BYREF
  __int64 v93; // [rsp+88h] [rbp-60h]
  __int64 v94; // [rsp+90h] [rbp-58h]
  __int64 v95; // [rsp+98h] [rbp-50h]
  struct _RECTL v96; // [rsp+A0h] [rbp-48h] BYREF
  __int16 v97; // [rsp+F2h] [rbp+Ah]

  v97 = HIWORD(a1);
  v82 = 0;
  DcAttr = 0LL;
  v7 = a3 == 0;
  v83 = a3 == 0;
  v86 = v83;
  if ( a2 == -2147483646 && !a3 )
    DcAttr = (_OWORD *)HmgAllocateDcAttr();
  v8 = ghsemHmgr;
  if ( ghsemHmgr )
  {
    PsEnterPriorityRegion(v7);
    ExEnterCriticalRegionAndAcquireResourceExclusive(v8);
    LODWORD(v8) = (_DWORD)ghsemHmgr;
  }
  if ( gbLockEtw && (Microsoft_Windows_Win32kEnableBits & 0x10) != 0 )
    Template_pqz(v7, a2, a3, (_DWORD)v8, 16, (__int64)L"ghsemHmgr");
  v9 = 0LL;
  v87 = 0LL;
  v10 = (unsigned __int16)a1 | (a1 >> 8) & 0xFF0000;
  PsGetCurrentThreadWin32ThreadAndEnterCriticalRegion(v92);
  v11 = 1;
  v88 = 1;
  v12 = v10;
  DeferredContext = WPP_MAIN_CB.Dpc.DeferredContext;
  v85 = (char *)WPP_MAIN_CB.Dpc.DeferredContext;
  if ( (unsigned int)v10 >= 0x10000 )
  {
    if ( *(_DWORD *)WPP_MAIN_CB.Dpc.DeferredContext > 0x10000u )
    {
      if ( *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(
                                  *((GdiHandleEntryDirectory **)WPP_MAIN_CB.Dpc.DeferredContext + 2),
                                  (unsigned __int16)v10,
                                  1)
           + 13) == WORD1(v10) )
        v12 = (unsigned __int16)v10;
      DeferredContext = v85;
    }
    else
    {
      v12 = (unsigned __int16)v10;
    }
  }
  v14 = DeferredContext[2];
  v15 = *(_DWORD *)(v14 + 2056);
  if ( v12 >= v15 + ((*(unsigned __int16 *)(v14 + 2) - 1) << 16) )
    goto LABEL_49;
  if ( v12 >= v15 )
  {
    v16 = ((v12 - v15) >> 16) + 1;
    if ( (v12 - v15) >> 16 == -2 )
    {
LABEL_49:
      v11 = 0;
      v88 = 0;
      KeLeaveCriticalRegion();
      goto LABEL_50;
    }
  }
  else
  {
    v16 = 0;
  }
  v17 = *(_QWORD *)(v14 + 8LL * v16 + 8);
  v93 = v17;
  if ( v16 )
    v12 = v12 - ((v16 - 1) << 16) - v15;
  if ( v12 >= *(_DWORD *)(v17 + 20) )
    goto LABEL_49;
  v85 = (char *)(16LL * (unsigned __int8)v12);
  v84 = &v85[*(_QWORD *)(**(_QWORD **)(v17 + 24) + 8LL * (v12 >> 8))];
  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx(v84, 0LL);
  if ( v12 < *(_DWORD *)(v17 + 20) && *(_QWORD *)&v85[*(_QWORD *)(**(_QWORD **)(v17 + 24) + 8LL * (v12 >> 8)) + 8] )
  {
    v19 = 3LL * v12;
    *(_DWORD *)(*(_QWORD *)v17 + 24LL * v12 + 8) |= 1u;
    v20 = 1;
  }
  else
  {
    ExReleasePushLockExclusiveEx(v84, 0LL);
    KeLeaveCriticalRegion();
    v20 = 0;
  }
  if ( !v20 )
    goto LABEL_49;
  if ( (unsigned int)v10 >= 0x10000 )
  {
    if ( *(_DWORD *)WPP_MAIN_CB.Dpc.DeferredContext > 0x10000u )
    {
      v19 = *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(
                                   *((GdiHandleEntryDirectory **)WPP_MAIN_CB.Dpc.DeferredContext + 2),
                                   (unsigned __int16)v10,
                                   1)
            + 13);
      if ( (_DWORD)v19 == WORD1(v10) )
        v10 = (unsigned __int16)v10;
    }
    else
    {
      v10 = (unsigned __int16)v10;
    }
  }
  v21 = *((_QWORD *)WPP_MAIN_CB.Dpc.DeferredContext + 2);
  v22 = *(_DWORD *)(v21 + 2056);
  if ( (unsigned int)v10 >= v22 + ((*(unsigned __int16 *)(v21 + 2) - 1) << 16) )
    goto LABEL_47;
  if ( (unsigned int)v10 < v22 )
  {
    v19 = 0LL;
LABEL_39:
    v23 = *(_QWORD *)(v21 + 8LL * (int)v19 + 8);
    v94 = v23;
    if ( (_DWORD)v19 )
      v10 = (_DWORD)v10 - (((_DWORD)v19 - 1) << 16) - v22;
    if ( (unsigned int)v10 < *(_DWORD *)(v23 + 20) )
    {
      v19 = *(_QWORD *)(*(_QWORD *)(**(_QWORD **)(v23 + 24) + 8LL * ((unsigned int)v10 >> 8))
                      + 16LL * (unsigned __int8)v10
                      + 8);
      if ( v19 )
      {
        v19 = 3 * v10;
        v9 = (unsigned __int16 *)(*(_QWORD *)v23 + 24 * v10);
      }
    }
    goto LABEL_47;
  }
  v19 = (((unsigned int)v10 - v22) >> 16) + 1;
  if ( ((unsigned int)v10 - v22) >> 16 != -2 )
    goto LABEL_39;
LABEL_47:
  v87 = v9;
  _m_prefetchw(v9 + 4);
  v89 = *((_DWORD *)v9 + 2);
  if ( (*((_BYTE *)v9 + 15) & 0x20) != 0 )
  {
    HANDLELOCK::vUnlock((HANDLELOCK *)&v87);
    v11 = v88;
    v9 = v87;
  }
LABEL_50:
  if ( !v11 )
    goto LABEL_187;
  if ( v9 )
  {
    v25 = *(_DWORD *)v9 & 0xFFFFFF;
    if ( v25 >= 0x10000 )
    {
      if ( *(_DWORD *)WPP_MAIN_CB.Dpc.DeferredContext > 0x10000u )
      {
        v26 = *v9;
        if ( *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(
                                    *((GdiHandleEntryDirectory **)WPP_MAIN_CB.Dpc.DeferredContext + 2),
                                    v26,
                                    1)
             + 13) == HIWORD(v25) )
          v25 = v26;
      }
      else
      {
        v25 = *v9;
      }
    }
    v27 = *((_QWORD *)WPP_MAIN_CB.Dpc.DeferredContext + 2);
    v28 = *(_DWORD *)(v27 + 2056);
    if ( v25 >= v28 + ((*(unsigned __int16 *)(v27 + 2) - 1) << 16) )
      goto LABEL_65;
    if ( v25 >= v28 )
    {
      v29 = ((v25 - v28) >> 16) + 1;
      if ( (v25 - v28) >> 16 == -2 )
        goto LABEL_65;
    }
    else
    {
      v29 = 0;
    }
    v30 = *(_QWORD *)(v27 + 8LL * v29 + 8);
    v95 = v30;
    if ( v29 )
      v25 = v25 - ((v29 - 1) << 16) - v28;
    if ( v25 < *(_DWORD *)(v30 + 20) )
    {
      v31 = *(_QWORD *)(*(_QWORD *)(**(_QWORD **)(v30 + 24) + 8LL * (v25 >> 8)) + 16LL * (unsigned __int8)v25 + 8);
LABEL_66:
      if ( *((_BYTE *)v9 + 14) != 1 )
        goto LABEL_155;
      if ( v9[6] != v97 )
        goto LABEL_155;
      if ( *(_WORD *)(v31 + 12) )
      {
        v9 = v87;
        if ( *(struct _KTHREAD **)(v31 + 16) != KeGetCurrentThread() )
          goto LABEL_155;
      }
      v32 = a2;
      if ( a2 != -2147483630 )
      {
        if ( (*((_DWORD *)v9 + 2) & 0xFFFFFFFE) == 0x80000012 )
        {
          AcquireDcVisRgnShared::AcquireDcVisRgnShared((AcquireDcVisRgnShared *)v90, (struct DC *)v31);
          v33 = GrepValidateVisRgn((struct DC *)v31, *(struct REGION **)(v31 + 1536), (struct ERECTL *)&v96);
          AcquireDcVisRgnShared::~AcquireDcVisRgnShared((AcquireDcVisRgnShared *)v90);
          if ( !v33 )
          {
            AcquireDcVisRgnExclusive::AcquireDcVisRgnExclusive((AcquireDcVisRgnExclusive *)v91, (struct DC *)v31);
            v85 = *(char **)(v31 + 1536);
            if ( (unsigned int)HmgLockResultBase<DRVOBJ>::operator bool(&v85) )
              RGNOBJ::vSet((RGNOBJ *)&v85, &v96);
            AcquireDcVisRgnShared::~AcquireDcVisRgnShared((AcquireDcVisRgnShared *)v91);
          }
        }
        if ( a2 )
        {
          if ( a2 == -2147483646 )
          {
            v34 = (unsigned __int64)PsGetCurrentProcessId() & 0xFFFFFFFC;
            v35 = *((_DWORD *)v9 + 2) & 0xFFFFFFFE;
            if ( v35 == (_DWORD)v34 || v35 == -2147483630 || !v35 )
            {
              v36 = 0;
              v37 = 1;
              v82 = 1;
              if ( v35 == (_DWORD)v34 || !a4 )
              {
                v39 = a3;
              }
              else
              {
                v38 = HmgIncProcessHandleCount((unsigned int)v34);
                v37 = v38;
                v82 = v38;
                v39 = a3;
                if ( v38 )
                {
                  v36 = 1;
                }
                else if ( a3 )
                {
                  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v38);
                  GreIncQuotaCount(CurrentProcessWin32Process);
                  v36 = 1;
                  v82 = 1;
LABEL_89:
                  if ( *((_QWORD *)v9 + 2) )
                    goto LABEL_96;
                  if ( DcAttr )
                  {
                    *(_QWORD *)(v31 + 80) = DcAttr;
                    *((_QWORD *)v9 + 2) = DcAttr;
                    v41 = (_OWORD *)(v31 + 536);
                    v42 = 3LL;
                    do
                    {
                      *DcAttr = *v41;
                      DcAttr[1] = v41[1];
                      DcAttr[2] = v41[2];
                      DcAttr[3] = v41[3];
                      DcAttr[4] = v41[4];
                      DcAttr[5] = v41[5];
                      DcAttr[6] = v41[6];
                      DcAttr += 8;
                      *(DcAttr - 1) = v41[7];
                      v41 += 8;
                      --v42;
                    }
                    while ( v42 );
                    *DcAttr = *v41;
                    DcAttr[1] = v41[1];
                    DcAttr = 0LL;
LABEL_96:
                    *((_DWORD *)v9 + 2) = v34 ^ ((unsigned __int8)v34 ^ (unsigned __int8)*((_DWORD *)v9 + 2)) & 1;
                    v43 = *(_DWORD *)v9 & 0xFFFFFF;
                    if ( v43 >= 0x10000 )
                    {
                      if ( *(_DWORD *)WPP_MAIN_CB.Dpc.DeferredContext > 0x10000u )
                      {
                        v44 = *v9;
                        if ( *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(
                                                    *((GdiHandleEntryDirectory **)WPP_MAIN_CB.Dpc.DeferredContext + 2),
                                                    v44,
                                                    1)
                             + 13) == HIWORD(v43) )
                          v43 = v44;
                      }
                      else
                      {
                        v43 = *v9;
                      }
                    }
                    v45 = *((_QWORD *)WPP_MAIN_CB.Dpc.DeferredContext + 2);
                    v46 = *(_DWORD *)(v45 + 2056);
                    if ( v43 >= v46 + ((*(unsigned __int16 *)(v45 + 2) - 1) << 16) )
                      goto LABEL_109;
                    if ( v43 >= v46 )
                    {
                      v47 = ((v43 - v46) >> 16) + 1;
                      if ( (v43 - v46) >> 16 == -2 )
                        goto LABEL_109;
                    }
                    else
                    {
                      v47 = 0;
                    }
                    v48 = *(_QWORD *)(v45 + 8LL * v47 + 8);
                    if ( v47 )
                      v43 = v43 - ((v47 - 1) << 16) - v46;
                    if ( v43 < *(_DWORD *)(v48 + 20) )
                    {
                      v49 = *(_QWORD **)(*(_QWORD *)(**(_QWORD **)(v48 + 24) + 8 * ((unsigned __int64)v43 >> 8))
                                       + 16LL * (unsigned __int8)v43
                                       + 8);
LABEL_110:
                      if ( LODWORD(WPP_MAIN_CB.Dpc.DpcData) && gpentHmgrStacks )
                        RECSTACKBACKTRACE((unsigned __int16)*v49 | ((unsigned int)*v49 >> 8) & 0xFF0000);
                      goto LABEL_113;
                    }
LABEL_109:
                    v49 = 0LL;
                    goto LABEL_110;
                  }
                  if ( v39 )
                    goto LABEL_96;
                  v82 = 0;
LABEL_114:
                  if ( v36 )
                  {
                    HmgDecProcessHandleCount((unsigned int)v34);
                    v50 = v82;
                    goto LABEL_149;
                  }
LABEL_113:
                  v50 = v82;
LABEL_149:
                  v64 = v83;
                  goto LABEL_150;
                }
              }
              if ( !v37 )
                goto LABEL_114;
              goto LABEL_89;
            }
          }
LABEL_148:
          v50 = 0;
          goto LABEL_149;
        }
      }
      v51 = *((_DWORD *)v9 + 2) & 0xFFFFFFFE;
      if ( v51 != ((unsigned int)PsGetCurrentProcessId() & 0xFFFFFFFC) )
      {
        v63 = *((_DWORD *)v9 + 2) & 0xFFFFFFFE;
        if ( v63 == -2147483630 )
        {
          HANDLELOCK::Pid((HANDLELOCK *)&v87, a2);
          v50 = 1;
          v82 = 1;
          goto LABEL_149;
        }
        if ( !v63 && !a2 )
        {
          v50 = 1;
          v82 = 1;
          v64 = 0;
LABEL_150:
          if ( v32 != -2147483630 && v50 && v64 && (unsigned int)GreSetBrushOwner(**(HBRUSH **)(v31 + 144), v32) )
            GreSetBrushOwner(**(HBRUSH **)(v31 + 152), v32);
LABEL_155:
          v65 = *(_DWORD *)v9 & 0xFFFFFF;
          if ( v65 >= 0x10000 )
          {
            if ( *(_DWORD *)WPP_MAIN_CB.Dpc.DeferredContext > 0x10000u )
            {
              v66 = *v9;
              if ( *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(
                                          *((GdiHandleEntryDirectory **)WPP_MAIN_CB.Dpc.DeferredContext + 2),
                                          v66,
                                          1)
                   + 13) == HIWORD(v65) )
                v65 = v66;
            }
            else
            {
              v65 = *v9;
            }
          }
          v67 = *((_QWORD *)WPP_MAIN_CB.Dpc.DeferredContext + 2);
          v68 = *(_DWORD *)(v67 + 2056);
          if ( v65 >= v68 + ((*(unsigned __int16 *)(v67 + 2) - 1) << 16) )
            goto LABEL_168;
          if ( v65 >= v68 )
          {
            v69 = ((v65 - v68) >> 16) + 1;
            if ( (v65 - v68) >> 16 == -2 )
              goto LABEL_168;
          }
          else
          {
            v69 = 0;
          }
          v70 = *(_QWORD *)(v67 + 8LL * v69 + 8);
          if ( v69 )
            v65 = v65 - ((v69 - 1) << 16) - v68;
          if ( v65 < *(_DWORD *)(v70 + 20) )
          {
            v71 = *(_DWORD **)(*(_QWORD *)(**(_QWORD **)(v70 + 24) + 8 * ((unsigned __int64)v65 >> 8))
                             + 16LL * (unsigned __int8)v65
                             + 8);
            goto LABEL_169;
          }
LABEL_168:
          v71 = 0LL;
LABEL_169:
          v72 = (GdiHandleEntryDirectory **)WPP_MAIN_CB.Dpc.DeferredContext;
          v73 = (unsigned __int16)*v71;
          v74 = v73 | (*v71 >> 8) & 0xFF0000u;
          if ( (unsigned int)v74 >= 0x10000 )
          {
            if ( *(_DWORD *)WPP_MAIN_CB.Dpc.DeferredContext > 0x10000u )
            {
              v75 = (unsigned __int16)v73;
              if ( *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(
                                          *((GdiHandleEntryDirectory **)WPP_MAIN_CB.Dpc.DeferredContext + 2),
                                          (unsigned __int16)v73,
                                          1)
                   + 13) == WORD1(v74) )
                v74 = v75;
            }
            else
            {
              v74 = (unsigned __int16)v73;
            }
            if ( (unsigned int)v74 >= 0x10000 && *(_DWORD *)v72 > 0x10000u )
              GdiHandleEntryDirectory::GetEntry(v72[2], (unsigned __int16)v74, 1);
          }
          v76 = v72[2];
          v77 = *((_DWORD *)v76 + 514);
          if ( (unsigned int)v74 >= v77 + ((*((unsigned __int16 *)v76 + 1) - 1) << 16) )
            goto LABEL_184;
          if ( (unsigned int)v74 >= v77 )
          {
            v78 = (((unsigned int)v74 - v77) >> 16) + 1;
            if ( ((unsigned int)v74 - v77) >> 16 == -2 )
            {
LABEL_184:
              v11 = 0;
              v88 = 0;
              v87 = 0LL;
              KeLeaveCriticalRegion();
              goto LABEL_185;
            }
          }
          else
          {
            v78 = 0;
          }
          v79 = *((_QWORD *)v76 + v78 + 1);
          if ( v78 )
            v74 = (_DWORD)v74 - ((v78 - 1) << 16) - v77;
          *(_DWORD *)(*(_QWORD *)v79 + 24 * v74 + 8) &= ~1u;
          ExReleasePushLockExclusiveEx(
            *(_QWORD *)(**(_QWORD **)(v79 + 24) + 8 * ((unsigned __int64)(unsigned int)v74 >> 8))
          + 16LL * (unsigned __int8)v74,
            0LL);
          KeLeaveCriticalRegion();
          goto LABEL_184;
        }
        goto LABEL_148;
      }
      v52 = (_OWORD *)(v31 + 536);
      v53 = *(_OWORD **)(v31 + 80);
      if ( v53 != (_OWORD *)(v31 + 536) )
      {
        v54 = 3LL;
        do
        {
          *v52 = *v53;
          v52[1] = v53[1];
          v52[2] = v53[2];
          v52[3] = v53[3];
          v52[4] = v53[4];
          v52[5] = v53[5];
          v52[6] = v53[6];
          v52 += 8;
          *(v52 - 1) = v53[7];
          v53 += 8;
          --v54;
        }
        while ( v54 );
        *v52 = *v53;
        v52[1] = v53[1];
        DcAttr = *(_OWORD **)(v31 + 80);
        if ( DcAttr == (_OWORD *)(v31 + 960) )
          DcAttr = *(_OWORD **)(v31 + 952);
        *(_QWORD *)(v31 + 80) = v31 + 536;
        *((_QWORD *)v9 + 2) = 0LL;
      }
      *((_DWORD *)v9 + 2) = a2 ^ ((unsigned __int8)a2 ^ (unsigned __int8)*((_DWORD *)v9 + 2)) & 1;
      v55 = *(_DWORD *)v9 & 0xFFFFFF;
      if ( v55 >= 0x10000 )
      {
        if ( *(_DWORD *)WPP_MAIN_CB.Dpc.DeferredContext > 0x10000u )
        {
          v56 = *v9;
          if ( *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(
                                      *((GdiHandleEntryDirectory **)WPP_MAIN_CB.Dpc.DeferredContext + 2),
                                      v56,
                                      1)
               + 13) == HIWORD(v55) )
            v55 = v56;
        }
        else
        {
          v55 = *v9;
        }
      }
      v57 = *((_QWORD *)WPP_MAIN_CB.Dpc.DeferredContext + 2);
      v58 = *(_DWORD *)(v57 + 2056);
      if ( v55 >= v58 + ((*(unsigned __int16 *)(v57 + 2) - 1) << 16) )
        goto LABEL_136;
      if ( v55 >= v58 )
      {
        v59 = ((v55 - v58) >> 16) + 1;
        if ( (v55 - v58) >> 16 == -2 )
          goto LABEL_136;
      }
      else
      {
        v59 = 0;
      }
      v60 = *(_QWORD *)(v57 + 8LL * v59 + 8);
      if ( v59 )
        v55 = v55 - ((v59 - 1) << 16) - v58;
      if ( v55 < *(_DWORD *)(v60 + 20) )
      {
        v61 = *(_QWORD **)(*(_QWORD *)(**(_QWORD **)(v60 + 24) + 8 * ((unsigned __int64)v55 >> 8))
                         + 16LL * (unsigned __int8)v55
                         + 8);
        goto LABEL_137;
      }
LABEL_136:
      v61 = 0LL;
LABEL_137:
      if ( LODWORD(WPP_MAIN_CB.Dpc.DpcData) && gpentHmgrStacks )
        RECSTACKBACKTRACE((unsigned __int16)*v61 | ((unsigned int)*v61 >> 8) & 0xFF0000);
      if ( a4 )
      {
        CurrentProcessId = (unsigned int)PsGetCurrentProcessId();
        HmgDecProcessHandleCount(CurrentProcessId & 0xFFFFFFFC);
      }
      v50 = 1;
      v82 = 1;
      goto LABEL_149;
    }
LABEL_65:
    v31 = 0LL;
    goto LABEL_66;
  }
LABEL_185:
  if ( v11 )
    HANDLELOCK::vUnlock((HANDLELOCK *)&v87);
LABEL_187:
  if ( gbLockEtw && (Microsoft_Windows_Win32kEnableBits & 0x10) != 0 )
    Template_pz(v19, &LockRelease);
  if ( ghsemHmgr )
  {
    ExReleaseResourceAndLeaveCriticalRegion(ghsemHmgr);
    PsLeavePriorityRegion(v80);
  }
  if ( DcAttr )
    HmgFreeDcAttr(DcAttr);
  return v82;
}
