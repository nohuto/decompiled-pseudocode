/*
 * XREFs of ?ResetOrg@@YAXPEAUHRGN__@@PEAUtagDCE@@H@Z @ 0x1C0024220
 * Callers:
 *     UserSetDCVisRgn @ 0x1C0023820 (UserSetDCVisRgn.c)
 *     _GetDCEx @ 0x1C002EFC0 (_GetDCEx.c)
 * Callees:
 *     IsGetLayeredOrRedirectedParentSupported_0 @ 0x1C0002430 (IsGetLayeredOrRedirectedParentSupported_0.c)
 *     GetLayeredOrRedirectedParent_0 @ 0x1C0002438 (GetLayeredOrRedirectedParent_0.c)
 *     IsGetRedirectionBitmapSupported_0 @ 0x1C0002440 (IsGetRedirectionBitmapSupported_0.c)
 *     GetRedirectionBitmap_0 @ 0x1C0002448 (GetRedirectionBitmap_0.c)
 *     GreSetRectRgn @ 0x1C0025020 (GreSetRectRgn.c)
 *     ?GreSelectVisRgnInternal@@YAHAEAVDCOBJA@@PEAUHRGN__@@W4_VIS_REGION_SELECT@@@Z @ 0x1C0025350 (-GreSelectVisRgnInternal@@YAHAEAVDCOBJA@@PEAUHRGN__@@W4_VIS_REGION_SELECT@@@Z.c)
 *     ??0RGNOBJAPI@@QEAA@PEAUHRGN__@@H@Z @ 0x1C0028350 (--0RGNOBJAPI@@QEAA@PEAUHRGN__@@H@Z.c)
 *     ?UpdateUserRgn@RGNOBJ@@QEAAXXZ @ 0x1C0028690 (-UpdateUserRgn@RGNOBJ@@QEAAXXZ.c)
 *     ?bOffset@RGNOBJ@@QEAAHPEAU_POINTL@@@Z @ 0x1C0029C90 (-bOffset@RGNOBJ@@QEAAHPEAU_POINTL@@@Z.c)
 *     ?RestoreAttributes@XDCOBJ@@AEAAXXZ @ 0x1C0031A10 (-RestoreAttributes@XDCOBJ@@AEAAXXZ.c)
 *     HmgDecrementShareReferenceCount @ 0x1C0031AF0 (HmgDecrementShareReferenceCount.c)
 *     ?vLockHandle@HANDLELOCK@@QEAAXPEAU_ENTRY@@HIH@Z @ 0x1C0031DD0 (-vLockHandle@HANDLELOCK@@QEAAXPEAU_ENTRY@@HIH@Z.c)
 *     ??1HANDLELOCK@@QEAA@XZ @ 0x1C0031F20 (--1HANDLELOCK@@QEAA@XZ.c)
 *     W32GetThreadWin32Thread @ 0x1C0034410 (W32GetThreadWin32Thread.c)
 *     IntersectRect @ 0x1C00446B8 (IntersectRect.c)
 *     ?SetMonitorRegion@@YAXPEAUtagMONITOR@@PEAUHRGN__@@1@Z @ 0x1C0075658 (-SetMonitorRegion@@YAXPEAUtagMONITOR@@PEAUHRGN__@@1@Z.c)
 */

void __fastcall ResetOrg(unsigned __int64 a1, struct tagDCE *a2, int a3)
{
  __int64 v4; // rdx
  HRGN v6; // r15
  __int64 v7; // rcx
  __int64 v8; // rax
  char *v9; // rax
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // rax
  __int128 v13; // xmm0
  __int64 v14; // rcx
  __int64 v15; // rax
  __int64 v16; // rbx
  __int64 v17; // rax
  __int64 v18; // rcx
  __int64 v19; // rax
  struct tagMONITOR *v20; // rcx
  int *v21; // rax
  int v22; // eax
  int v23; // edx
  int v24; // eax
  __int64 LayeredOrRedirectedParent_0; // rax
  __int64 v26; // rbx
  __int64 v27; // rcx
  int v28; // esi
  int v29; // ebx
  __int64 v30; // rcx
  __int64 v31; // rax
  __int64 v32; // r8
  LONG v33; // ebx
  LONG v34; // esi
  __int64 v35; // rbx
  __int64 v36; // rsi
  __int64 v37; // rbx
  struct _ENTRY *v38; // r14
  __int64 v39; // rcx
  _DWORD *v40; // rcx
  __int64 v41; // rcx
  int v42; // edx
  int v43; // ecx
  int v44; // ecx
  __int128 v45; // xmm0
  __int64 v46; // rdi
  __int64 v47; // rbx
  struct _ENTRY *v48; // rsi
  __int64 v49; // rcx
  __int128 v50; // [rsp+30h] [rbp-59h] BYREF
  _QWORD v51[2]; // [rsp+40h] [rbp-49h] BYREF
  __int64 v52; // [rsp+50h] [rbp-39h] BYREF
  int v53; // [rsp+58h] [rbp-31h]
  unsigned int v54; // [rsp+5Ch] [rbp-2Dh]
  unsigned int v55; // [rsp+64h] [rbp-25h]
  __int64 v56; // [rsp+68h] [rbp-21h] BYREF
  int v57; // [rsp+70h] [rbp-19h]
  unsigned int v58; // [rsp+74h] [rbp-15h]
  unsigned int v59; // [rsp+7Ch] [rbp-Dh]
  _QWORD v60[2]; // [rsp+80h] [rbp-9h] BYREF
  _QWORD v61[2]; // [rsp+90h] [rbp+7h] BYREF
  int v62; // [rsp+A0h] [rbp+17h]
  struct _POINTL v63; // [rsp+F8h] [rbp+6Fh] BYREF

  v4 = *((_QWORD *)a2 + 2);
  v6 = (HRGN)a1;
  if ( (*(_WORD *)(v4 + 66) & 0x3FFF) == 0x29D )
  {
    *(_QWORD *)&v50 = 0LL;
    if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(a1) + 776) & 0x2000) != 0
      || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v7) + 776) & 0x4000) != 0
      || !*(_QWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 408)
      || (v8 = *(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 408) + 8LL),
          v7 = *(_DWORD *)(v8 + 244) & 1,
          (*(_DWORD *)(v8 + 244) & 1) == 0) )
    {
      if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v7) + 776) & 0x2000) != 0
        && *(_QWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 408)
        && (v10 = *(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 408) + 8LL),
            v7 = *(_DWORD *)(v10 + 244) & 1,
            (*(_DWORD *)(v10 + 244) & 1) != 0) )
      {
        v9 = (char *)gpsi + 2968;
      }
      else
      {
        v9 = (char *)gpsi + 2192;
      }
    }
    else
    {
      v9 = (char *)gpsi + 2580;
    }
    DWORD2(v50) = *(_DWORD *)v9;
    if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v7) + 776) & 0x2000) != 0
      || (*(_DWORD *)(PsGetCurrentProcessWin32Process(a1) + 776) & 0x4000) != 0
      || !*(_QWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 408)
      || (v11 = *(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 408) + 8LL),
          a1 = *(_DWORD *)(v11 + 244) & 1,
          (*(_DWORD *)(v11 + 244) & 1) == 0) )
    {
      if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(a1) + 776) & 0x2000) != 0
        && *(_QWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 408)
        && (v12 = *(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 408) + 8LL),
            a1 = *(_DWORD *)(v12 + 244) & 1,
            (*(_DWORD *)(v12 + 244) & 1) != 0) )
      {
        HIDWORD(v50) = *((_DWORD *)gpsi + 743);
      }
      else
      {
        HIDWORD(v50) = *((_DWORD *)gpsi + 549);
      }
    }
    else
    {
      HIDWORD(v50) = *((_DWORD *)gpsi + 646);
    }
  }
  else
  {
    if ( (*((_DWORD *)a2 + 16) & 1) != 0 )
      v13 = *(_OWORD *)(v4 + 112);
    else
      v13 = *(_OWORD *)(v4 + 128);
    v50 = v13;
  }
  if ( *((_QWORD *)a2 + 11) && (*((_DWORD *)a2 + 16) & 0x4000) == 0 )
  {
    if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(a1) + 776) & 0x2000) != 0
      || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v14) + 776) & 0x4000) != 0
      || !*(_QWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 408)
      || (v15 = *(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 408) + 8LL),
          v14 = *(_DWORD *)(v15 + 244) & 1,
          (*(_DWORD *)(v15 + 244) & 1) == 0) )
    {
      if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v14) + 776) & 0x2000) != 0
        && *(_QWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 408)
        && (v17 = *(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 408) + 8LL),
            v14 = *(_DWORD *)(v17 + 244) & 1,
            (*(_DWORD *)(v17 + 244) & 1) != 0) )
      {
        v16 = *((_QWORD *)a2 + 11) + 60LL;
      }
      else
      {
        v16 = *((_QWORD *)a2 + 11) + 28LL;
      }
    }
    else
    {
      v16 = *((_QWORD *)a2 + 11) + 44LL;
    }
    if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v14) + 776) & 0x2000) != 0
      || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v18) + 776) & 0x4000) != 0
      || !*(_QWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 408)
      || (v19 = *(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 408) + 8LL),
          v18 = *(_DWORD *)(v19 + 244) & 1,
          (*(_DWORD *)(v19 + 244) & 1) == 0) )
    {
      if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v18) + 776) & 0x2000) != 0
        && *(_QWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 408)
        && (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 408) + 8LL) + 244LL) & 1) != 0 )
      {
        v20 = (struct tagMONITOR *)*((_QWORD *)a2 + 11);
        v21 = (int *)((char *)v20 + 60);
      }
      else
      {
        v20 = (struct tagMONITOR *)*((_QWORD *)a2 + 11);
        v21 = (int *)((char *)v20 + 28);
      }
    }
    else
    {
      v20 = (struct tagMONITOR *)*((_QWORD *)a2 + 11);
      v21 = (int *)((char *)v20 + 44);
    }
    v22 = *v21;
    v23 = -*(_DWORD *)(v16 + 4);
    HIDWORD(v50) -= *(_DWORD *)(v16 + 4);
    v24 = -v22;
    LODWORD(v50) = v24 + v50;
    DWORD2(v50) += v24;
    DWORD1(v50) += v23;
    if ( v6 )
      SetMonitorRegion(v20, v6, v6);
  }
  if ( (*((_DWORD *)a2 + 16) & 0x4000000) != 0 )
    goto LABEL_76;
  if ( (int)IsGetLayeredOrRedirectedParentSupported_0() < 0 )
    goto LABEL_78;
  LayeredOrRedirectedParent_0 = GetLayeredOrRedirectedParent_0();
  v26 = LayeredOrRedirectedParent_0;
  if ( !LayeredOrRedirectedParent_0 )
    goto LABEL_78;
  if ( (*(_DWORD *)(LayeredOrRedirectedParent_0 + 48) & 0x20000000) != 0
    && (int)IsGetRedirectionBitmapSupported_0() >= 0
    && GetRedirectionBitmap_0() )
  {
    v28 = *(_DWORD *)(v26 + 112);
    v29 = *(_DWORD *)(v26 + 116);
    if ( *((_QWORD *)a2 + 11) && *((int *)a2 + 16) < 0 )
    {
      LODWORD(v50) = v28 + v50;
      DWORD2(v50) += v28;
      HIDWORD(v50) += v29;
      DWORD1(v50) += v29;
      if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v27) + 776) & 0x2000) != 0
        || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v30) + 776) & 0x4000) != 0
        || !*(_QWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 408)
        || (v31 = *(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 408) + 8LL),
            v30 = *(_DWORD *)(v31 + 244) & 1,
            (*(_DWORD *)(v31 + 244) & 1) == 0) )
      {
        if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v30) + 776) & 0x2000) != 0
          && *(_QWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 408)
          && (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 408) + 8LL) + 244LL) & 1) != 0 )
        {
          v32 = *((_QWORD *)a2 + 11) + 60LL;
        }
        else
        {
          v32 = *((_QWORD *)a2 + 11) + 28LL;
        }
      }
      else
      {
        v32 = *((_QWORD *)a2 + 11) + 44LL;
      }
      IntersectRect(&v50, &v50, v32);
    }
    v33 = -v29;
    v34 = -v28;
    LODWORD(v50) = v34 + v50;
    DWORD2(v50) += v34;
    HIDWORD(v50) += v33;
    DWORD1(v50) += v33;
    if ( v6 )
    {
      RGNOBJAPI::RGNOBJAPI((RGNOBJAPI *)v61, v6, 0);
      v63.y = v33;
      v35 = v61[0];
      v63.x = v34;
      if ( v61[0] )
        RGNOBJ::bOffset((RGNOBJ *)v61, &v63);
      if ( !v62 )
        RGNOBJ::UpdateUserRgn((RGNOBJ *)v61);
      if ( v35 )
        _InterlockedDecrement((volatile signed __int32 *)(v35 + 12));
    }
  }
  else
  {
LABEL_76:
    if ( v6 )
      GreSetRectRgn(v6, 0);
  }
LABEL_78:
  v36 = *((_QWORD *)a2 + 1);
  v37 = 0LL;
  v60[1] = 0LL;
  if ( (unsigned __int16)v36 < (unsigned int)gcMaxHmgr )
  {
    v38 = (struct _ENTRY *)((char *)WPP_MAIN_CB.Dpc.SystemArgument2 + 24 * (unsigned __int16)v36);
    HANDLELOCK::vLockHandle((HANDLELOCK *)&v56, v38, 0, (unsigned __int16)v36, 0);
    if ( v57 )
    {
      v39 = v56;
      if ( v56 )
      {
        if ( *((_BYTE *)v38 + 14) == 1 && *((_WORD *)v38 + 6) == WORD1(v36) )
        {
          v37 = *(_QWORD *)v38;
          ++*(_DWORD *)(*(_QWORD *)v38 + 8LL);
        }
        if ( (*(_BYTE *)(v39 + 15) & 0x40) != 0 )
        {
          ExReleasePushLockExclusiveEx((char *)WPP_MAIN_CB.Dpc.DpcData + 8 * v59);
        }
        else
        {
          _m_prefetchw((const void *)(v39 + 8));
          v58 = *(_DWORD *)(v39 + 8) & 0xFFFFFFFE;
          _InterlockedExchange((volatile __int32 *)(v39 + 8), v58);
        }
        v57 = 0;
        v56 = 0LL;
        KeLeaveCriticalRegion();
      }
    }
    HANDLELOCK::~HANDLELOCK((HANDLELOCK *)&v56);
  }
  v60[0] = v37;
  if ( v37 )
  {
    v40 = (_DWORD *)(v37 + 1416);
    if ( (*(_DWORD *)(v37 + 40) & 1) == 0 )
      v40 = (_DWORD *)(v37 + 1408);
    *v40 = v50;
    v41 = v37 + 1416;
    if ( (*(_DWORD *)(v37 + 40) & 1) == 0 )
      v41 = v37 + 1408;
    *(_DWORD *)(v41 + 4) = DWORD1(v50);
    v42 = *(_DWORD *)(v37 + 40) & 1;
    if ( v42 )
      v43 = *(_DWORD *)(v37 + 1416);
    else
      v43 = *(_DWORD *)(v37 + 1408);
    *(_DWORD *)(v37 + 1552) = *(_DWORD *)(v37 + 136) + v43;
    if ( v42 )
      v44 = *(_DWORD *)(v37 + 1420);
    else
      v44 = *(_DWORD *)(v37 + 1412);
    v45 = v50;
    *(_DWORD *)(v37 + 1556) = *(_DWORD *)(v37 + 140) + v44;
    *(_OWORD *)(v37 + 1424) = v45;
    XDCOBJ::RestoreAttributes((XDCOBJ *)v60);
    HmgDecrementShareReferenceCount(v60[0]);
  }
  if ( a3 )
  {
    v46 = *((_QWORD *)a2 + 1);
    v47 = 0LL;
    v51[1] = 0LL;
    if ( (unsigned __int16)v46 < (unsigned int)gcMaxHmgr )
    {
      v48 = (struct _ENTRY *)((char *)WPP_MAIN_CB.Dpc.SystemArgument2 + 24 * (unsigned __int16)v46);
      HANDLELOCK::vLockHandle((HANDLELOCK *)&v52, v48, 0, (unsigned __int16)v46, 0);
      if ( v53 )
      {
        v49 = v52;
        if ( v52 )
        {
          if ( *((_BYTE *)v48 + 14) == 1 && *((_WORD *)v48 + 6) == WORD1(v46) )
          {
            v47 = *(_QWORD *)v48;
            ++*(_DWORD *)(*(_QWORD *)v48 + 8LL);
          }
          if ( (*(_BYTE *)(v49 + 15) & 0x40) != 0 )
          {
            ExReleasePushLockExclusiveEx((char *)WPP_MAIN_CB.Dpc.DpcData + 8 * v55);
          }
          else
          {
            _m_prefetchw((const void *)(v49 + 8));
            v54 = *(_DWORD *)(v49 + 8) & 0xFFFFFFFE;
            _InterlockedExchange((volatile __int32 *)(v49 + 8), v54);
          }
          v53 = 0;
          v52 = 0LL;
          KeLeaveCriticalRegion();
        }
      }
      HANDLELOCK::~HANDLELOCK((HANDLELOCK *)&v52);
    }
    v51[0] = v47;
    GreSelectVisRgnInternal(v51, v6, 1LL);
    if ( v47 )
    {
      XDCOBJ::RestoreAttributes((XDCOBJ *)v51);
      HmgDecrementShareReferenceCount(v51[0]);
    }
  }
}
