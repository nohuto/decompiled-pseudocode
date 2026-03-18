/*
 * XREFs of xxxInsertMenuItem @ 0x14003470C
 * Callers:
 *     NtUserThunkedMenuItemInfo @ 0x14004B410 (NtUserThunkedMenuItemInfo.c)
 * Callees:
 *     ?xxxRedrawForSetLPITEMInfo@@YAXAEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@@Z @ 0x14000E8C4 (-xxxRedrawForSetLPITEMInfo@@YAXAEBV-$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@@Z.c)
 *     MNGetPopupFromMenu @ 0x14000EA1C (MNGetPopupFromMenu.c)
 *     ??1?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ @ 0x14000EBC4 (--1-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ.c)
 *     ?DecrementCountAndTryFree@?$SmartObjStackRefBase@UtagCLS@@@@IEAAXXZ @ 0x14000EC1C (-DecrementCountAndTryFree@-$SmartObjStackRefBase@UtagCLS@@@@IEAAXXZ.c)
 *     ??0AtomicExecutionCheck@@QEAA@W4AtomicExecutionArm@@@Z @ 0x1400211C4 (--0AtomicExecutionCheck@@QEAA@W4AtomicExecutionArm@@@Z.c)
 *     ??4?$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z @ 0x140032F44 (--4-$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z.c)
 *     ?DecrementCountAndTryFree@?$SmartObjStackRefBase@UtagMENU@@@@IEAAXXZ @ 0x140032F98 (-DecrementCountAndTryFree@-$SmartObjStackRefBase@UtagMENU@@@@IEAAXXZ.c)
 *     ?SetLPITEMInfoNoRedraw@@YAHAEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@PEAUtagMENUITEMINFOW@@PEAU_UNICODE_STRING@@PEAH@Z @ 0x140033B50 (-SetLPITEMInfoNoRedraw@@YAHAEBV-$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@PEAUtagMENUITEMINFOW@.c)
 *     ?MNIsUAHMenu@@YAHPEAUtagMENU@@@Z @ 0x1400341BC (-MNIsUAHMenu@@YAHPEAUtagMENU@@@Z.c)
 *     ??1?$Win32HMOptionalThreadLock@UtagHOOK@@@@QEAA@XZ @ 0x140034200 (--1-$Win32HMOptionalThreadLock@UtagHOOK@@@@QEAA@XZ.c)
 *     MNFreeItem @ 0x140034288 (MNFreeItem.c)
 *     ??$ManualUnlock@X@?$Win32HMThreadLockBase@UtagCURSOR@@$00$00@@QEAAPEAUtagCURSOR@@XZ @ 0x140034424 (--$ManualUnlock@X@-$Win32HMThreadLockBase@UtagCURSOR@@$00$00@@QEAAPEAUtagCURSOR@@XZ.c)
 *     MNLookUpItem @ 0x1400344B8 (MNLookUpItem.c)
 *     ??1?$SmartObjStackRef@UtagMENU@@@@QEAA@XZ @ 0x140034678 (--1-$SmartObjStackRef@UtagMENU@@@@QEAA@XZ.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036890 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ?Init@?$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z @ 0x14011F644 (-Init@-$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z.c)
 *     ?MNAllocMenuItems@@YAHAEBV?$SmartObjStackRef@UtagMENU@@@@_N@Z @ 0x14012CF58 (-MNAllocMenuItems@@YAHAEBV-$SmartObjStackRef@UtagMENU@@@@_N@Z.c)
 *     ?Disarm@AtomicExecutionCheck@@QEAAXXZ @ 0x140199C94 (-Disarm@AtomicExecutionCheck@@QEAAXXZ.c)
 *     MNGetpItemIndex @ 0x1401DADAC (MNGetpItemIndex.c)
 *     ?MNDeleteAdjustIndexes@@YAXPEAUtagMENUSTATE@@V?$SmartObjStackRef@UtagPOPUPMENU@@@@I@Z @ 0x1402F2FEC (-MNDeleteAdjustIndexes@@YAXPEAUtagMENUSTATE@@V-$SmartObjStackRef@UtagPOPUPMENU@@@@I@Z.c)
 *     xxxMNSetGapState @ 0x1402F9954 (xxxMNSetGapState.c)
 *     MakeMenuRtoL @ 0x1402FAA10 (MakeMenuRtoL.c)
 *     memmove @ 0x14034FF00 (memmove.c)
 */

__int64 __fastcall xxxInsertMenuItem(__int64 a1, unsigned int a2, int a3, __int64 a4, unsigned __int16 *a5)
{
  int v8; // r14d
  __int64 *CurrentThreadWin32Thread; // rax
  unsigned int v10; // edi
  __int64 v11; // rdx
  __int64 *v12; // r15
  struct tagTHREADINFO *v13; // rax
  __int64 *v14; // rax
  __int64 v15; // rsi
  __int64 *v16; // rax
  __int64 v17; // r8
  __int64 v18; // rcx
  _QWORD *v19; // rcx
  int **v20; // rsi
  _QWORD *v21; // rbx
  struct tagTHREADINFO *v22; // rax
  __int64 *v23; // rdx
  __int64 v24; // r13
  __int64 v25; // r8
  __int64 v26; // r9
  struct tagMENU *v27; // rcx
  _QWORD *v28; // rax
  unsigned __int64 v29; // r8
  int v30; // ecx
  __int64 v31; // rcx
  __int64 *v32; // rax
  __int64 v33; // rsi
  _DWORD *v34; // rbx
  void *v35; // rax
  _QWORD *v36; // rax
  _QWORD *v38; // rbx
  struct tagTHREADINFO *v39; // rax
  __int64 v40; // rbx
  unsigned int v41; // edx
  unsigned int v42; // r9d
  __int64 v43; // rdx
  unsigned __int64 v44; // rcx
  __int64 v45; // rax
  __int64 v46; // rax
  __int64 v47; // r13
  __int64 v48; // r13
  __int64 *v49; // rbx
  void *CurrentWin32kStackRefLookAside; // rax
  __int64 v51; // rax
  _QWORD *v52; // rcx
  size_t v53; // r12
  __int64 v54; // rcx
  __int64 v55; // rbx
  unsigned __int64 v56; // rax
  char v57; // cl
  int v58; // eax
  _QWORD *v59; // rcx
  __int64 v60; // r8
  __int64 v61; // r9
  _QWORD *v62; // rcx
  int v63; // r8d
  int v64; // eax
  __int64 v65; // rdx
  __int64 v66; // r8
  __int64 v67; // rcx
  unsigned int v68; // r15d
  unsigned __int64 v69; // rsi
  __int64 v70; // r9
  int *v71; // rcx
  __int64 *v72; // [rsp+30h] [rbp-51h] BYREF
  __int64 v73; // [rsp+38h] [rbp-49h] BYREF
  _QWORD *v74; // [rsp+40h] [rbp-41h]
  _DWORD *v75; // [rsp+48h] [rbp-39h] BYREF
  __int64 v76; // [rsp+50h] [rbp-31h] BYREF
  __int64 v77; // [rsp+58h] [rbp-29h] BYREF
  __int64 v78; // [rsp+60h] [rbp-21h] BYREF
  __int64 v79; // [rsp+68h] [rbp-19h] BYREF
  __int64 v80; // [rsp+70h] [rbp-11h]
  ULONG_PTR BugCheckParameter3; // [rsp+78h] [rbp-9h] BYREF
  _QWORD *v82; // [rsp+80h] [rbp-1h]
  __int64 *v83; // [rsp+88h] [rbp+7h] BYREF
  _BYTE v84[64]; // [rsp+90h] [rbp+Fh] BYREF
  int v85; // [rsp+E0h] [rbp+5Fh] BYREF
  unsigned int v86; // [rsp+E8h] [rbp+67h]
  __int64 v87; // [rsp+F8h] [rbp+77h]

  v87 = a4;
  v8 = 1;
  CurrentThreadWin32Thread = (__int64 *)PsGetCurrentThreadWin32Thread(a1);
  v10 = 0;
  if ( CurrentThreadWin32Thread )
    v11 = *CurrentThreadWin32Thread;
  else
    v11 = 0LL;
  v12 = 0LL;
  v78 = gSmartObjNullRef;
  v79 = *(_QWORD *)(v11 + 1672);
  *(_QWORD *)(v11 + 1672) = &v79;
  v80 = 0LL;
  v77 = 0LL;
  v83 = 0LL;
  v13 = PtiCurrent();
  v75 = (_DWORD *)gSmartObjNullRef;
  v86 = 0;
  v76 = *((_QWORD *)v13 + 209);
  *((_QWORD *)v13 + 209) = &v76;
  v14 = *(__int64 **)a1;
  v85 = 0;
  v15 = *v14;
  v16 = (__int64 *)PsGetCurrentThreadWin32Thread(&v76);
  if ( v16 )
    v18 = *v16;
  else
    v18 = 0LL;
  v72 = (__int64 *)gSmartObjNullRef;
  if ( v15 )
  {
    v72 = *(__int64 **)(v15 + 152);
    ++*(_DWORD *)(*(_QWORD *)(v15 + 152) + 8LL);
  }
  v73 = *(_QWORD *)(v18 + 1672);
  *(_QWORD *)(v18 + 1672) = &v73;
  v19 = *(_QWORD **)(a1 + 16);
  v74 = v19;
  if ( a2 == -1 )
  {
    v20 = 0LL;
  }
  else
  {
    v45 = v80;
    if ( !v80 )
    {
      v19 = v74;
      v45 = *(_QWORD *)v78;
    }
    v77 = v45;
    if ( !v19 )
      v19 = (_QWORD *)*v72;
    v46 = MNLookUpItem(v19, a2, a3, &v77);
    v47 = v77;
    v20 = (int **)v46;
    v80 = 0LL;
    if ( v77 != *(_QWORD *)v78 )
    {
      SmartObjStackRefBase<tagMENU>::DecrementCountAndTryFree(&v78);
      if ( v47 )
      {
        v78 = *(_QWORD *)(v47 + 152);
        ++*(_DWORD *)(v78 + 8);
      }
      else
      {
        v78 = gSmartObjNullRef;
      }
    }
    if ( v20 )
    {
      v74 = (_QWORD *)v80;
      v48 = *(_QWORD *)v78;
      if ( *(_QWORD *)v78 != *v72 )
      {
        SmartObjStackRefBase<tagMENU>::DecrementCountAndTryFree((__int64 *)&v72);
        if ( v48 )
        {
          v72 = *(__int64 **)(v48 + 152);
          ++*((_DWORD *)v72 + 2);
        }
        else
        {
          v72 = (__int64 *)gSmartObjNullRef;
        }
      }
    }
    else
    {
      a2 = -1;
    }
  }
  if ( (*(_DWORD *)(*(_QWORD *)(*v72 + 40) + 40LL) & 1) == 0 )
  {
    if ( *(_DWORD *)(*(_QWORD *)(*v72 + 40) + 44LL) )
    {
      if ( (*(_DWORD *)(v87 + 4) & 0x80u) == 0 || (v56 = *(_QWORD *)(v87 + 72), v56 > 7) || !v56 )
      {
        v41 = a2;
        v42 = a2;
        if ( v20 && !a3 )
        {
          v59 = v74;
          if ( !v74 )
            v59 = (_QWORD *)*v72;
          v41 = MNGetpItemIndex(v59, v20, v17, a2);
        }
        if ( v41 )
        {
          if ( v41 == -1 )
            v41 = *(_DWORD *)(*(_QWORD *)(*v72 + 40) + 44LL);
          v43 = v41 - 1;
          v17 = *(_QWORD *)(*v72 + 88) + 96 * v43;
          if ( !(_DWORD)v43 )
            goto LABEL_10;
          do
          {
            v44 = *(_QWORD *)(*(_QWORD *)v17 + 96LL);
            if ( !v44 )
              break;
            if ( v44 >= 7 )
              break;
            v17 -= 96LL;
            a2 = v43;
            a3 = 1;
            LODWORD(v43) = v43 - 1;
          }
          while ( (_DWORD)v43 );
        }
        else
        {
          if ( *(_QWORD *)(**(_QWORD **)(*v72 + 88) + 96LL) == 1LL )
          {
            v57 = 1;
            a2 = 1;
          }
          else
          {
            v57 = 0;
          }
          v58 = 1;
          if ( !v57 )
            v58 = a3;
          a3 = v58;
        }
        if ( a2 != v42 )
          v20 = (int **)(*(_QWORD *)(*v72 + 88) + 96LL * a2);
      }
    }
  }
LABEL_10:
  if ( *(_DWORD *)(*(_QWORD *)(*v72 + 40) + 44LL) < *(_DWORD *)(*v72 + 60) )
  {
LABEL_11:
    v21 = v74;
    goto LABEL_12;
  }
  if ( (unsigned int)MNAllocMenuItems(&v72, 0LL, v17) )
  {
    if ( a2 == -1 )
      goto LABEL_11;
    v51 = v80;
    if ( !v80 )
      v51 = *(_QWORD *)v78;
    v52 = v74;
    v77 = v51;
    if ( !v74 )
      v52 = (_QWORD *)*v72;
    v20 = (int **)MNLookUpItem(v52, a2, a3, &v77);
    v80 = 0LL;
    SmartObjStackRefBase<tagMENU>::operator=((__int64)&v78, v77);
    v21 = v74;
    if ( v74 )
    {
      if ( v74 == (_QWORD *)v80 )
      {
LABEL_12:
        if ( !v21 )
          v21 = (_QWORD *)*v72;
        v22 = PtiCurrent();
        BugCheckParameter3 = *((_QWORD *)v22 + 56);
        *((_QWORD *)v22 + 56) = &BugCheckParameter3;
        v82 = v21;
        if ( v21 )
          HMLockObject(v21);
        if ( v20 )
        {
          v54 = (__int64)v74;
          if ( !v74 )
            v54 = *v72;
          v55 = MNGetPopupFromMenu(v54, &v83);
          if ( v55 != *(_QWORD *)v75 )
          {
            SmartObjStackRefBase<tagCLS>::DecrementCountAndTryFree((__int64 *)&v75);
            if ( v55 )
            {
              v75 = *(_DWORD **)(v55 + 88);
              ++v75[2];
            }
            else
            {
              v75 = (_DWORD *)gSmartObjNullRef;
            }
          }
          if ( *(_QWORD *)v75 )
          {
            AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)v84);
            v62 = v74;
            if ( !v74 )
              v62 = (_QWORD *)*v72;
            v63 = MNGetpItemIndex(v62, v20, v60, v61);
            v86 = v63;
            if ( *(_DWORD *)(*(_QWORD *)v75 + 80LL) >= (unsigned int)v63 )
              ++*(_DWORD *)(*(_QWORD *)v75 + 80LL);
            if ( (**(_DWORD **)v75 & 0x20) != 0 && *(_DWORD *)(*(_QWORD *)v75 + 84LL) >= (unsigned int)v63 )
              ++*(_DWORD *)(*(_QWORD *)v75 + 84LL);
            v12 = v83;
            if ( v83[8] == *(_QWORD *)(*(_QWORD *)v75 + 16LL) )
            {
              v64 = *((_DWORD *)v83 + 18);
              if ( v64 >= v63 )
                *((_DWORD *)v83 + 18) = v64 + 1;
            }
            if ( v12[10] == *(_QWORD *)(*(_QWORD *)v75 + 16LL) )
            {
              v65 = *((unsigned int *)v12 + 22);
              if ( (int)v65 >= v63 )
              {
                *((_DWORD *)v12 + 22) = v65 + 1;
                if ( (_DWORD)v65 == v63 )
                {
                  v66 = *((unsigned int *)v12 + 23);
                  if ( (v66 & 1) != 0 )
                    xxxMNSetGapState(v12[10], v65, v66, 0LL);
                }
              }
            }
            AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)v84);
          }
          else
          {
            v12 = v83;
          }
        }
        v24 = Win32HMThreadLockBase<tagCURSOR,1,1>::ManualUnlock<void>(&BugCheckParameter3);
        v74 = 0LL;
        if ( v24 == *v72 )
          goto LABEL_22;
        v23 = (__int64 *)gSmartObjNullRef;
        if ( v72 != (__int64 *)gSmartObjNullRef )
        {
          if ( !--*((_DWORD *)v72 + 2) && *((_BYTE *)v72 + 12) )
          {
            v49 = v72;
            CurrentWin32kStackRefLookAside = GetCurrentWin32kStackRefLookAside();
            Win32FreeToPagedLookasideList(CurrentWin32kStackRefLookAside, v49);
          }
          v23 = (__int64 *)gSmartObjNullRef;
        }
        if ( v24 )
        {
          v72 = *(__int64 **)(v24 + 152);
          ++*((_DWORD *)v72 + 2);
        }
        else
        {
          v72 = v23;
        }
        if ( !v74 )
        {
LABEL_22:
          if ( !*v72 )
          {
            Win32HMOptionalThreadLock<tagHOOK>::~Win32HMOptionalThreadLock<tagHOOK>(&BugCheckParameter3);
            SmartObjStackRef<tagMENU>::~SmartObjStackRef<tagMENU>((__int64 *)&v72);
            SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>((__int64)&v75);
LABEL_50:
            SmartObjStackRef<tagMENU>::~SmartObjStackRef<tagMENU>(&v78);
            return v10;
          }
        }
        ++*(_DWORD *)(*(_QWORD *)(*v72 + 40) + 44LL);
        if ( v20 )
        {
          v53 = *(_QWORD *)(*v72 + 88)
              + 96LL * (unsigned int)(*(_DWORD *)(*(_QWORD *)(*v72 + 40) + 44LL) - 1)
              - (_QWORD)v20;
          if ( v53 )
          {
            memmove(
              v20[12],
              *v20,
              **(_QWORD **)(*v72 + 88)
            + 112LL * (unsigned int)(*(_DWORD *)(*(_QWORD *)(*v72 + 40) + 44LL) - 1)
            - (_QWORD)*v20);
            memmove(v20 + 12, v20, v53);
            v23 = (__int64 *)((unsigned __int128)(((__int64)v20 - *(_QWORD *)(*v72 + 88) + 96)
                                                * (__int128)0x2AAAAAAAAAAAAAABLL) >> 64);
            v26 = ((__int64)v20 - *(_QWORD *)(*v72 + 88) + 96) / 96;
            while ( (unsigned int)v26 < *(_DWORD *)(*(_QWORD *)(*v72 + 40) + 44LL) )
            {
              v25 = 96LL * (int)v26;
              *(_QWORD *)(v25 + *(_QWORD *)(*v72 + 88)) = 112LL * (unsigned int)v26 + *(_QWORD *)(*v72 + 96);
              v23 = (__int64 *)(*(_QWORD *)(*(_QWORD *)(*v72 + 88) + v25) - *(_QWORD *)(*(_QWORD *)(*v72 + 24) + 16LL));
              LODWORD(v26) = v26 + 1;
              *(_QWORD *)(*(_QWORD *)(*v72 + 88) + v25 + 8) = v23;
            }
          }
        }
        else
        {
          v20 = (int **)(*(_QWORD *)(*v72 + 88) - 96LL + 96LL * *(unsigned int *)(*(_QWORD *)(*v72 + 40) + 44LL));
        }
        **v20 = 0;
        (*v20)[1] = 0;
        (*v20)[2] = 0;
        *((_QWORD *)*v20 + 2) = 0LL;
        v20[2] = 0LL;
        *((_QWORD *)*v20 + 3) = 0LL;
        *((_QWORD *)*v20 + 4) = 0LL;
        (*v20)[12] = 0;
        *((_QWORD *)*v20 + 7) = 0LL;
        (*v20)[16] = 0;
        (*v20)[17] = 0;
        (*v20)[18] = 0;
        (*v20)[19] = 0;
        *((_QWORD *)*v20 + 12) = 0LL;
        (*v20)[26] = -1;
        *((_QWORD *)*v20 + 5) = 0LL;
        v20[3] = 0LL;
        v20[11] = 0LL;
        v27 = (struct tagMENU *)v74;
        if ( !v74 )
          v27 = (struct tagMENU *)*v72;
        if ( (unsigned int)MNIsUAHMenu(v27, (__int64)v23) )
        {
          *(_OWORD *)((char *)v20 + 52) = 0LL;
          *(_OWORD *)((char *)v20 + 68) = 0LL;
        }
        if ( (unsigned int)SetLPITEMInfoNoRedraw((struct tagMENU ***)&v72, (struct _HEAD **)v20, v87, a5, &v85) )
        {
          if ( !v85 )
          {
            v28 = v74;
            if ( v74 )
              goto LABEL_35;
            goto LABEL_34;
          }
          v38 = v74;
          if ( !v74 )
            v38 = (_QWORD *)*v72;
          v39 = PtiCurrent();
          BugCheckParameter3 = *((_QWORD *)v39 + 56);
          *((_QWORD *)v39 + 56) = &BugCheckParameter3;
          v82 = v38;
          if ( v38 )
            HMLockObject(v38);
          xxxRedrawForSetLPITEMInfo(&v72, (__int64)v20);
          v40 = Win32HMThreadLockBase<tagCURSOR,1,1>::ManualUnlock<void>(&BugCheckParameter3);
          v74 = 0LL;
          if ( v40 != *v72 )
          {
            SmartObjStackRefBase<tagMENU>::DecrementCountAndTryFree((__int64 *)&v72);
            if ( v40 )
            {
              v72 = *(__int64 **)(v40 + 152);
              ++*((_DWORD *)v72 + 2);
            }
            else
            {
              v72 = (__int64 *)gSmartObjNullRef;
            }
            v28 = v74;
            if ( v74 )
              goto LABEL_35;
          }
          if ( *v72 )
          {
LABEL_34:
            v28 = (_QWORD *)*v72;
LABEL_35:
            v29 = (unsigned __int64)v20 - v28[11];
            if ( (v29 & 0x8000000000000000uLL) == 0LL
              && v29 < 96 * (unsigned __int64)*(unsigned int *)(v28[5] + 44LL)
              && (unsigned int)(v29 / 0x60) != -1
              && v29 == 96 * (v29 / 0x60) )
            {
              if ( (*(_DWORD *)(*(_QWORD *)(*v72 + 40) + 40LL) & 0x20) != 0
                || (v30 = **v20, (v30 & 0x2000) != 0) && (v30 & 4) == 0 )
              {
                **v20 |= 0x6000u;
                v71 = v20[2];
                if ( v71 )
                  MakeMenuRtoL(v71, 1LL);
              }
            }
            goto LABEL_41;
          }
        }
        else
        {
          if ( *(_QWORD *)v75 )
          {
            SmartObjStackRefBase<tagPOPUPMENU>::Init(v84, *(_QWORD *)v75);
            MNDeleteAdjustIndexes(v12, v84, v86);
          }
          v67 = (__int64)v74;
          if ( !v74 )
            v67 = *v72;
          MNFreeItem(v67, v20, 1);
          v68 = 96 * *(_DWORD *)(*(_QWORD *)(*v72 + 40) + 44LL) + *(_DWORD *)(*v72 + 88) - (_DWORD)v20 - 96;
          if ( 96 * *(_DWORD *)(*(_QWORD *)(*v72 + 40) + 44LL) + *(_DWORD *)(*v72 + 88) - (_DWORD)v20 != 96 )
          {
            memmove(
              *v20,
              v20[12],
              (unsigned int)(112 * *(_DWORD *)(*(_QWORD *)(*v72 + 40) + 44LL)
                           + **(_DWORD **)(*v72 + 88)
                           - *((_DWORD *)v20 + 24)));
            memmove(v20, v20 + 12, v68);
            v69 = 0xAAAAAAAAAAAAAAABuLL * (((__int64)v20 - *(_QWORD *)(*v72 + 88)) >> 5);
            while ( (unsigned int)v69 < *(_DWORD *)(*(_QWORD *)(*v72 + 40) + 44LL) - 1 )
            {
              v70 = 96LL * (int)v69;
              *(_QWORD *)(v70 + *(_QWORD *)(*v72 + 88)) = *(_QWORD *)(*v72 + 96) + 112LL * (unsigned int)v69;
              LODWORD(v69) = v69 + 1;
              *(_QWORD *)(*(_QWORD *)(*v72 + 88) + v70 + 8) = *(_QWORD *)(*(_QWORD *)(*v72 + 88) + v70)
                                                            - *(_QWORD *)(*(_QWORD *)(*v72 + 24) + 16LL);
            }
          }
          --*(_DWORD *)(*(_QWORD *)(*v72 + 40) + 44LL);
        }
        v8 = 0;
LABEL_41:
        Win32HMOptionalThreadLock<tagHOOK>::~Win32HMOptionalThreadLock<tagHOOK>(&BugCheckParameter3);
        SmartObjStackRef<tagMENU>::~SmartObjStackRef<tagMENU>((__int64 *)&v72);
        v32 = (__int64 *)PsGetCurrentThreadWin32Thread(v31);
        if ( v32 )
          v33 = *v32;
        else
          v33 = 0LL;
        if ( v75 != (_DWORD *)gSmartObjNullRef && !--v75[2] )
        {
          if ( *((_BYTE *)v75 + 12) )
          {
            v34 = v75;
            v35 = GetCurrentWin32kStackRefLookAside();
            Win32FreeToPagedLookasideList(v35, v34);
          }
        }
        v36 = *(_QWORD **)(v33 + 1672);
        if ( v36 )
          *(_QWORD *)(v33 + 1672) = *v36;
        v10 = v8;
        goto LABEL_50;
      }
    }
    else if ( *v72 == *(_QWORD *)v78 )
    {
      goto LABEL_11;
    }
  }
  SmartObjStackRef<tagMENU>::~SmartObjStackRef<tagMENU>((__int64 *)&v72);
  SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>((__int64)&v75);
  SmartObjStackRef<tagMENU>::~SmartObjStackRef<tagMENU>(&v78);
  return 0LL;
}
