/*
 * XREFs of ?ResetOrg@@YAXPEAUHRGN__@@PEAUtagDCE@@H@Z @ 0x1C00433D0
 * Callers:
 *     _GetDCEx @ 0x1C0036B60 (_GetDCEx.c)
 *     UserSetDCVisRgn @ 0x1C0044440 (UserSetDCVisRgn.c)
 * Callees:
 *     IsGetLayeredOrRedirectedParentSupported_0 @ 0x1C0002400 (IsGetLayeredOrRedirectedParentSupported_0.c)
 *     GetLayeredOrRedirectedParent_0 @ 0x1C0002408 (GetLayeredOrRedirectedParent_0.c)
 *     IsGetRedirectionBitmapSupported_0 @ 0x1C0002410 (IsGetRedirectionBitmapSupported_0.c)
 *     GetRedirectionBitmap_0 @ 0x1C0002418 (GetRedirectionBitmap_0.c)
 *     W32GetThreadWin32Thread @ 0x1C00384E0 (W32GetThreadWin32Thread.c)
 *     ?RestoreAttributes@XDCOBJ@@AEAAXXZ @ 0x1C003BB20 (-RestoreAttributes@XDCOBJ@@AEAAXXZ.c)
 *     ?vLockHandle@HANDLELOCK@@QEAAXPEAU_ENTRY@@HIH@Z @ 0x1C003C1F0 (-vLockHandle@HANDLELOCK@@QEAAXPEAU_ENTRY@@HIH@Z.c)
 *     ?UpdateUserRgn@RGNOBJ@@QEAAXXZ @ 0x1C003E0E0 (-UpdateUserRgn@RGNOBJ@@QEAAXXZ.c)
 *     ?bOffset@RGNOBJ@@QEAAHPEAU_POINTL@@@Z @ 0x1C003FF30 (-bOffset@RGNOBJ@@QEAAHPEAU_POINTL@@@Z.c)
 *     GreSetRectRgn @ 0x1C0042B20 (GreSetRectRgn.c)
 *     ?GreSelectVisRgnInternal@@YAHAEAVDCOBJA@@PEAUHRGN__@@W4_VIS_REGION_SELECT@@@Z @ 0x1C0043D80 (-GreSelectVisRgnInternal@@YAHAEAVDCOBJA@@PEAUHRGN__@@W4_VIS_REGION_SELECT@@@Z.c)
 *     IntersectRect @ 0x1C00553DC (IntersectRect.c)
 *     ?SetMonitorRegion@@YAXPEAUtagMONITOR@@PEAUHRGN__@@1@Z @ 0x1C0056A9C (-SetMonitorRegion@@YAXPEAUtagMONITOR@@PEAUHRGN__@@1@Z.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VBRUSHSELOBJ@@@@QEAA@XZ @ 0x1C00AEF50 (--1-$UnexpectedThreadTerminationHandler@VBRUSHSELOBJ@@@@QEAA@XZ.c)
 *     ??0RGNOBJAPI@@QEAA@PEAUHRGN__@@HH@Z @ 0x1C00B0F10 (--0RGNOBJAPI@@QEAA@PEAUHRGN__@@HH@Z.c)
 *     ?RECALTUNLOCKSTACKBACKTRACE@@YAXI@Z @ 0x1C00B3150 (-RECALTUNLOCKSTACKBACKTRACE@@YAXI@Z.c)
 *     ??0?$UnexpectedThreadTerminationHandler@VDCOBJA@@@@QEAA@XZ @ 0x1C00B7804 (--0-$UnexpectedThreadTerminationHandler@VDCOBJA@@@@QEAA@XZ.c)
 */

void __fastcall ResetOrg(unsigned __int64 a1, struct tagDCE *a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rdx
  int v6; // r12d
  HRGN v7; // r15
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rax
  char *v13; // rax
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // rax
  __int128 v17; // xmm0
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // r9
  __int64 v22; // rax
  __int64 v23; // rbx
  __int64 v24; // rax
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // r9
  __int64 v29; // rax
  struct tagMONITOR *v30; // rcx
  int *v31; // rax
  int v32; // eax
  int v33; // edx
  int v34; // eax
  __int64 LayeredOrRedirectedParent_0; // rax
  __int64 v36; // rbx
  __int64 v37; // rdx
  __int64 v38; // rcx
  __int64 v39; // r8
  __int64 v40; // r9
  int v41; // esi
  int v42; // ebx
  __int64 v43; // rdx
  __int64 v44; // rcx
  __int64 v45; // r8
  __int64 v46; // r9
  __int64 v47; // rax
  __int64 v48; // r8
  LONG v49; // ebx
  LONG v50; // esi
  unsigned int *v51; // rax
  __int64 v52; // rsi
  __int64 v53; // rbx
  __int64 v54; // r14
  __int64 v55; // rcx
  unsigned int v56; // eax
  _DWORD *v57; // rbx
  __int64 v58; // rcx
  _DWORD *v59; // rdx
  int v60; // eax
  int v61; // ecx
  int v62; // ecx
  __int128 v63; // xmm0
  _DWORD *v64; // rsi
  __int64 v65; // rbx
  unsigned int v66; // eax
  __int64 v67; // rbx
  __int64 v68; // rdi
  __int64 v69; // rsi
  __int64 v70; // rcx
  unsigned int v71; // eax
  _DWORD *v72; // rdi
  __int64 v73; // rbx
  unsigned int v74; // eax
  __int64 v75; // [rsp+20h] [rbp-E0h]
  __int64 v76; // [rsp+20h] [rbp-E0h]
  __int64 v77; // [rsp+20h] [rbp-E0h]
  __int64 v78; // [rsp+20h] [rbp-E0h]
  __int64 v79; // [rsp+28h] [rbp-D8h]
  __int64 v80; // [rsp+28h] [rbp-D8h]
  __int64 v81; // [rsp+28h] [rbp-D8h]
  __int64 v82; // [rsp+28h] [rbp-D8h]
  __int128 v83; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v84; // [rsp+40h] [rbp-C0h] BYREF
  int v85; // [rsp+48h] [rbp-B8h]
  unsigned int v86; // [rsp+4Ch] [rbp-B4h]
  unsigned int v87; // [rsp+54h] [rbp-ACh]
  __int64 v88; // [rsp+58h] [rbp-A8h] BYREF
  int v89; // [rsp+60h] [rbp-A0h]
  unsigned int v90; // [rsp+64h] [rbp-9Ch]
  unsigned int v91; // [rsp+6Ch] [rbp-94h]
  __int64 v92; // [rsp+70h] [rbp-90h] BYREF
  int v93; // [rsp+78h] [rbp-88h]
  unsigned int v94; // [rsp+7Ch] [rbp-84h]
  unsigned int v95; // [rsp+84h] [rbp-7Ch]
  __int64 v96; // [rsp+88h] [rbp-78h] BYREF
  int v97; // [rsp+90h] [rbp-70h]
  unsigned int v98; // [rsp+94h] [rbp-6Ch]
  unsigned int v99; // [rsp+9Ch] [rbp-64h]
  _QWORD v100[2]; // [rsp+A0h] [rbp-60h] BYREF
  _BYTE v101[32]; // [rsp+B0h] [rbp-50h] BYREF
  _QWORD v102[2]; // [rsp+D0h] [rbp-30h] BYREF
  _BYTE v103[32]; // [rsp+E0h] [rbp-20h] BYREF
  unsigned int *v104; // [rsp+100h] [rbp+0h] BYREF
  _BYTE v105[40]; // [rsp+108h] [rbp+8h] BYREF
  int v106; // [rsp+130h] [rbp+30h]
  struct _POINTL v107; // [rsp+188h] [rbp+88h] BYREF

  v5 = *((_QWORD *)a2 + 2);
  v6 = a3;
  v7 = (HRGN)a1;
  if ( (*(_WORD *)(v5 + 66) & 0x3FFF) == 0x29D )
  {
    *(_QWORD *)&v83 = 0LL;
    if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(a1, v5, a3, a4, v75, v79) + 776) & 0x2000) != 0
      || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v9, v8, v10, v11, v76, v80) + 776) & 0x4000) != 0
      || !*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
      || (v12 = *(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416) + 8LL),
          v9 = *(_DWORD *)(v12 + 260) & 1,
          (*(_DWORD *)(v12 + 260) & 1) == 0) )
    {
      if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v9, v8, v10, v11, v76, v80) + 776) & 0x2000) != 0
        && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
        && (v14 = *(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416) + 8LL),
            v9 = *(_DWORD *)(v14 + 260) & 1,
            (*(_DWORD *)(v14 + 260) & 1) != 0) )
      {
        v13 = (char *)gpsi + 2968;
      }
      else
      {
        v13 = (char *)gpsi + 2192;
      }
    }
    else
    {
      v13 = (char *)gpsi + 2580;
    }
    DWORD2(v83) = *(_DWORD *)v13;
    if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v9, v8, v10, v11, v76, v80) + 776) & 0x2000) != 0
      || (*(_DWORD *)(PsGetCurrentProcessWin32Process(a1, v5, a3, a4, v75, v79) + 776) & 0x4000) != 0
      || !*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
      || (v15 = *(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416) + 8LL),
          a1 = *(_DWORD *)(v15 + 260) & 1,
          (*(_DWORD *)(v15 + 260) & 1) == 0) )
    {
      if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(a1, v5, a3, a4, v75, v79) + 776) & 0x2000) != 0
        && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
        && (v16 = *(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416) + 8LL),
            a1 = *(_DWORD *)(v16 + 260) & 1,
            (*(_DWORD *)(v16 + 260) & 1) != 0) )
      {
        HIDWORD(v83) = *((_DWORD *)gpsi + 743);
      }
      else
      {
        HIDWORD(v83) = *((_DWORD *)gpsi + 549);
      }
    }
    else
    {
      HIDWORD(v83) = *((_DWORD *)gpsi + 646);
    }
  }
  else
  {
    if ( (*((_DWORD *)a2 + 16) & 1) != 0 )
      v17 = *(_OWORD *)(v5 + 112);
    else
      v17 = *(_OWORD *)(v5 + 128);
    v83 = v17;
  }
  if ( *((_QWORD *)a2 + 11) && (*((_DWORD *)a2 + 16) & 0x4000) == 0 )
  {
    if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(a1, v5, a3, a4, v75, v79) + 776) & 0x2000) != 0
      || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v19, v18, v20, v21, v77, v81) + 776) & 0x4000) != 0
      || !*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
      || (v22 = *(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416) + 8LL),
          v19 = *(_DWORD *)(v22 + 260) & 1,
          (*(_DWORD *)(v22 + 260) & 1) == 0) )
    {
      if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v19, v18, v20, v21, v77, v81) + 776) & 0x2000) != 0
        && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
        && (v24 = *(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416) + 8LL),
            v19 = *(_DWORD *)(v24 + 260) & 1,
            (*(_DWORD *)(v24 + 260) & 1) != 0) )
      {
        v23 = *((_QWORD *)a2 + 11) + 60LL;
      }
      else
      {
        v23 = *((_QWORD *)a2 + 11) + 28LL;
      }
    }
    else
    {
      v23 = *((_QWORD *)a2 + 11) + 44LL;
    }
    if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v19, v18, v20, v21, v77, v81) + 776) & 0x2000) != 0
      || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v26, v25, v27, v28, v75, v79) + 776) & 0x4000) != 0
      || !*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
      || (v29 = *(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416) + 8LL),
          v26 = *(_DWORD *)(v29 + 260) & 1,
          (*(_DWORD *)(v29 + 260) & 1) == 0) )
    {
      if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v26, v25, v27, v28, v75, v79) + 776) & 0x2000) != 0
        && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
        && (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416) + 8LL)
                      + 260LL) & 1) != 0 )
      {
        v30 = (struct tagMONITOR *)*((_QWORD *)a2 + 11);
        v31 = (int *)((char *)v30 + 60);
      }
      else
      {
        v30 = (struct tagMONITOR *)*((_QWORD *)a2 + 11);
        v31 = (int *)((char *)v30 + 28);
      }
    }
    else
    {
      v30 = (struct tagMONITOR *)*((_QWORD *)a2 + 11);
      v31 = (int *)((char *)v30 + 44);
    }
    v32 = *v31;
    v33 = -*(_DWORD *)(v23 + 4);
    HIDWORD(v83) -= *(_DWORD *)(v23 + 4);
    v34 = -v32;
    LODWORD(v83) = v34 + v83;
    DWORD2(v83) += v34;
    DWORD1(v83) += v33;
    if ( v7 )
      SetMonitorRegion(v30, v7, v7);
  }
  if ( (*((_DWORD *)a2 + 16) & 0x4000000) != 0 )
    goto LABEL_77;
  if ( (int)IsGetLayeredOrRedirectedParentSupported_0() < 0 )
    goto LABEL_79;
  LayeredOrRedirectedParent_0 = GetLayeredOrRedirectedParent_0();
  v36 = LayeredOrRedirectedParent_0;
  if ( !LayeredOrRedirectedParent_0 )
    goto LABEL_79;
  if ( (*(_DWORD *)(LayeredOrRedirectedParent_0 + 48) & 0x20000000) != 0
    && (int)IsGetRedirectionBitmapSupported_0() >= 0
    && GetRedirectionBitmap_0() )
  {
    v41 = *(_DWORD *)(v36 + 112);
    v42 = *(_DWORD *)(v36 + 116);
    if ( *((_QWORD *)a2 + 11) && *((int *)a2 + 16) < 0 )
    {
      LODWORD(v83) = v41 + v83;
      DWORD2(v83) += v41;
      HIDWORD(v83) += v42;
      DWORD1(v83) += v42;
      if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v38, v37, v39, v40, v75, v79) + 776) & 0x2000) != 0
        || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v44, v43, v45, v46, v78, v82) + 776) & 0x4000) != 0
        || !*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
        || (v47 = *(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416) + 8LL),
            v44 = *(_DWORD *)(v47 + 260) & 1,
            (*(_DWORD *)(v47 + 260) & 1) == 0) )
      {
        if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v44, v43, v45, v46, v78, v82) + 776) & 0x2000) != 0
          && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
          && (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416) + 8LL)
                        + 260LL) & 1) != 0 )
        {
          v48 = *((_QWORD *)a2 + 11) + 60LL;
        }
        else
        {
          v48 = *((_QWORD *)a2 + 11) + 28LL;
        }
      }
      else
      {
        v48 = *((_QWORD *)a2 + 11) + 44LL;
      }
      IntersectRect(&v83, &v83, v48);
    }
    v49 = -v42;
    v50 = -v41;
    LODWORD(v83) = v50 + v83;
    DWORD2(v83) += v50;
    HIDWORD(v83) += v49;
    DWORD1(v83) += v49;
    if ( v7 )
    {
      RGNOBJAPI::RGNOBJAPI((RGNOBJAPI *)&v104, v7, 0, 0);
      v51 = v104;
      v107.x = v50;
      v107.y = v49;
      if ( v104 )
      {
        RGNOBJ::bOffset(&v104, &v107);
        v51 = v104;
      }
      if ( !v106 )
      {
        RGNOBJ::UpdateUserRgn((RGNOBJ *)&v104);
        v51 = v104;
      }
      if ( v51 )
        _InterlockedDecrement((volatile signed __int32 *)v51 + 3);
      UnexpectedThreadTerminationHandler<BRUSHSELOBJ>::~UnexpectedThreadTerminationHandler<BRUSHSELOBJ>(v105);
    }
  }
  else
  {
LABEL_77:
    if ( v7 )
      GreSetRectRgn(v7, 0, 0, 0, 0);
  }
LABEL_79:
  v52 = *((_QWORD *)a2 + 1);
  v100[0] = 0LL;
  v100[1] = 0LL;
  UnexpectedThreadTerminationHandler<DCOBJA>::UnexpectedThreadTerminationHandler<DCOBJA>(v101);
  v53 = 0LL;
  if ( (unsigned __int16)v52 < (unsigned int)gcMaxHmgr )
  {
    v54 = *(_QWORD *)&WPP_MAIN_CB.AlignmentRequirement + 24LL * (unsigned __int16)v52;
    HANDLELOCK::vLockHandle((HANDLELOCK *)&v92, (struct _ENTRY *)v54, 0, (unsigned __int16)v52, 0);
    if ( v93 )
    {
      v55 = v92;
      if ( v92 )
      {
        if ( *(_BYTE *)(v54 + 14) == 1 && *(_WORD *)(v54 + 12) == WORD1(v52) )
        {
          v53 = *(_QWORD *)v54;
          ++*(_DWORD *)(*(_QWORD *)v54 + 8LL);
        }
        if ( (*(_BYTE *)(v55 + 15) & 0x40) != 0 )
        {
          ExReleasePushLockExclusiveEx((char *)gpentPushLock + 8 * v95, 0LL);
        }
        else
        {
          v56 = *(_DWORD *)(v55 + 8) & 0xFFFFFFFE;
          _m_prefetchw((const void *)(v55 + 8));
          v94 = v56;
          _InterlockedExchange((volatile __int32 *)(v55 + 8), v56);
        }
      }
      KeLeaveCriticalRegion();
    }
  }
  v100[0] = v53;
  if ( v53 )
  {
    v57 = (_DWORD *)((*(_DWORD *)(v53 + 40) & 1) != 0 ? v53 + 1416 : v53 + 1408);
    *v57 = v83;
    v58 = (*(_DWORD *)(v100[0] + 40LL) & 1) != 0 ? v100[0] + 1416LL : v100[0] + 1408LL;
    *(_DWORD *)(v58 + 4) = DWORD1(v83);
    v59 = (_DWORD *)v100[0];
    v60 = *(_DWORD *)(v100[0] + 40LL);
    v61 = (v60 & 1) != 0 ? *(_DWORD *)(v100[0] + 1416LL) : *(_DWORD *)(v100[0] + 1408LL);
    *(_DWORD *)(v100[0] + 1576LL) = *(_DWORD *)(v100[0] + 136LL) + v61;
    v62 = (v60 & 1) != 0 ? v59[355] : v59[353];
    v63 = v83;
    v59[395] = v59[35] + v62;
    *(_OWORD *)(v100[0] + 1424LL) = v63;
    if ( v100[0] )
    {
      XDCOBJ::RestoreAttributes((XDCOBJ *)v100);
      v64 = (_DWORD *)v100[0];
      HANDLELOCK::vLockHandle(
        (HANDLELOCK *)&v96,
        (struct _ENTRY *)(*(_QWORD *)&WPP_MAIN_CB.AlignmentRequirement + 24LL * (unsigned __int16)*(_DWORD *)v100[0]),
        0,
        (unsigned __int16)*(_DWORD *)v100[0],
        0);
      if ( v97 )
      {
        v65 = v96;
        if ( v96 )
        {
          if ( *(_BYTE *)(*(_QWORD *)&WPP_MAIN_CB.AlignmentRequirement + 24LL * (unsigned __int16)*v64 + 14) == 5
            && *(_DWORD *)(&WPP_MAIN_CB.DeviceQueue.Size + 1)
            && gpentHmgrAltStacks )
          {
            RECALTUNLOCKSTACKBACKTRACE((unsigned __int16)*v64);
          }
          --v64[2];
          if ( (*(_BYTE *)(v65 + 15) & 0x40) != 0 )
          {
            ExReleasePushLockExclusiveEx((char *)gpentPushLock + 8 * v99, 0LL);
          }
          else
          {
            v66 = *(_DWORD *)(v65 + 8) & 0xFFFFFFFE;
            _m_prefetchw((const void *)(v65 + 8));
            v98 = v66;
            _InterlockedExchange((volatile __int32 *)(v65 + 8), v66);
          }
        }
        KeLeaveCriticalRegion();
      }
    }
  }
  UnexpectedThreadTerminationHandler<BRUSHSELOBJ>::~UnexpectedThreadTerminationHandler<BRUSHSELOBJ>(v101);
  if ( v6 )
  {
    v67 = *((_QWORD *)a2 + 1);
    v102[0] = 0LL;
    v102[1] = 0LL;
    UnexpectedThreadTerminationHandler<DCOBJA>::UnexpectedThreadTerminationHandler<DCOBJA>(v103);
    v68 = 0LL;
    if ( (unsigned __int16)v67 < (unsigned int)gcMaxHmgr )
    {
      v69 = *(_QWORD *)&WPP_MAIN_CB.AlignmentRequirement + 24LL * (unsigned __int16)v67;
      HANDLELOCK::vLockHandle((HANDLELOCK *)&v84, (struct _ENTRY *)v69, 0, (unsigned __int16)v67, 0);
      if ( v85 )
      {
        v70 = v84;
        if ( v84 )
        {
          if ( *(_BYTE *)(v69 + 14) == 1 && *(_WORD *)(v69 + 12) == WORD1(v67) )
          {
            v68 = *(_QWORD *)v69;
            ++*(_DWORD *)(*(_QWORD *)v69 + 8LL);
          }
          if ( (*(_BYTE *)(v70 + 15) & 0x40) != 0 )
          {
            ExReleasePushLockExclusiveEx((char *)gpentPushLock + 8 * v87, 0LL);
          }
          else
          {
            v71 = *(_DWORD *)(v70 + 8) & 0xFFFFFFFE;
            _m_prefetchw((const void *)(v70 + 8));
            v86 = v71;
            _InterlockedExchange((volatile __int32 *)(v70 + 8), v71);
          }
        }
        KeLeaveCriticalRegion();
      }
    }
    v102[0] = v68;
    GreSelectVisRgnInternal(v102, v7, 1LL);
    if ( v102[0] )
    {
      XDCOBJ::RestoreAttributes((XDCOBJ *)v102);
      v72 = (_DWORD *)v102[0];
      HANDLELOCK::vLockHandle(
        (HANDLELOCK *)&v88,
        (struct _ENTRY *)(*(_QWORD *)&WPP_MAIN_CB.AlignmentRequirement + 24LL * (unsigned __int16)*(_DWORD *)v102[0]),
        0,
        (unsigned __int16)*(_DWORD *)v102[0],
        0);
      if ( v89 )
      {
        v73 = v88;
        if ( v88 )
        {
          if ( *(_BYTE *)(*(_QWORD *)&WPP_MAIN_CB.AlignmentRequirement + 24LL * (unsigned __int16)*v72 + 14) == 5
            && *(_DWORD *)(&WPP_MAIN_CB.DeviceQueue.Size + 1)
            && gpentHmgrAltStacks )
          {
            RECALTUNLOCKSTACKBACKTRACE((unsigned __int16)*v72);
          }
          --v72[2];
          if ( (*(_BYTE *)(v73 + 15) & 0x40) != 0 )
          {
            ExReleasePushLockExclusiveEx((char *)gpentPushLock + 8 * v91, 0LL);
          }
          else
          {
            v74 = *(_DWORD *)(v73 + 8) & 0xFFFFFFFE;
            _m_prefetchw((const void *)(v73 + 8));
            v90 = v74;
            _InterlockedExchange((volatile __int32 *)(v73 + 8), v74);
          }
        }
        KeLeaveCriticalRegion();
      }
    }
    UnexpectedThreadTerminationHandler<BRUSHSELOBJ>::~UnexpectedThreadTerminationHandler<BRUSHSELOBJ>(v103);
  }
}
