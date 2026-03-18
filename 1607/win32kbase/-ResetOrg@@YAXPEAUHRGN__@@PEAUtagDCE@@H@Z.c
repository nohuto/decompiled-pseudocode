/*
 * XREFs of ?ResetOrg@@YAXPEAUHRGN__@@PEAUtagDCE@@H@Z @ 0x1C0034760
 * Callers:
 *     _GetDCEx @ 0x1C00212B0 (_GetDCEx.c)
 *     UserSetDCVisRgn @ 0x1C0036CE0 (UserSetDCVisRgn.c)
 * Callees:
 *     IsGetLayeredOrRedirectedParentSupported_0 @ 0x1C0002408 (IsGetLayeredOrRedirectedParentSupported_0.c)
 *     GetLayeredOrRedirectedParent_0 @ 0x1C0002410 (GetLayeredOrRedirectedParent_0.c)
 *     IsGetRedirectionBitmapSupported_0 @ 0x1C0002418 (IsGetRedirectionBitmapSupported_0.c)
 *     GetRedirectionBitmap_0 @ 0x1C0002420 (GetRedirectionBitmap_0.c)
 *     ?RestoreAttributes@XDCOBJ@@AEAAXXZ @ 0x1C0028CB0 (-RestoreAttributes@XDCOBJ@@AEAAXXZ.c)
 *     HmgShareLock @ 0x1C0029670 (HmgShareLock.c)
 *     HmgDecrementShareReferenceCount @ 0x1C0029BC0 (HmgDecrementShareReferenceCount.c)
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C00352B8 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     GreSetDCOrg @ 0x1C0035760 (GreSetDCOrg.c)
 *     ?GreSelectVisRgnInternal@@YAHAEAVDCOBJA@@PEAUHRGN__@@W4_VIS_REGION_SELECT@@@Z @ 0x1C0035860 (-GreSelectVisRgnInternal@@YAHAEAVDCOBJA@@PEAUHRGN__@@W4_VIS_REGION_SELECT@@@Z.c)
 *     GreOffsetRgn @ 0x1C0036A90 (GreOffsetRgn.c)
 *     W32GetThreadWin32Thread @ 0x1C0036CBC (W32GetThreadWin32Thread.c)
 *     GreSetRectRgn @ 0x1C0039670 (GreSetRectRgn.c)
 *     IntersectRect @ 0x1C005903C (IntersectRect.c)
 *     ?SetMonitorRegion@@YAXPEAUtagMONITOR@@PEAUHRGN__@@1@Z @ 0x1C0078F90 (-SetMonitorRegion@@YAXPEAUtagMONITOR@@PEAUHRGN__@@1@Z.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VBRUSHSELOBJ@@@@QEAA@XZ @ 0x1C00BCFD0 (--1-$UnexpectedThreadTerminationHandler@VBRUSHSELOBJ@@@@QEAA@XZ.c)
 *     ??0?$UnexpectedThreadTerminationHandler@VDCOBJA@@@@QEAA@XZ @ 0x1C00C53B8 (--0-$UnexpectedThreadTerminationHandler@VDCOBJA@@@@QEAA@XZ.c)
 */

void __fastcall ResetOrg(HRGN a1, struct tagDCE *a2, int a3)
{
  __int64 v4; // rdx
  int v7; // ecx
  char *v8; // rax
  int v9; // ecx
  int v10; // ecx
  char *v11; // rax
  int v12; // ecx
  __int128 v13; // xmm0
  int v14; // ecx
  __int64 v15; // rsi
  int v16; // ecx
  int v17; // ecx
  struct tagMONITOR *v18; // rcx
  int *v19; // rax
  int v20; // ecx
  int v21; // eax
  int v22; // edx
  int v23; // eax
  _DWORD *LayeredOrRedirectedParent_0; // rsi
  int v25; // r14d
  int v26; // esi
  int v27; // ecx
  __int64 v28; // r8
  int v29; // ecx
  int v30; // esi
  int v31; // r14d
  __int64 v32; // rbx
  __int128 v33; // [rsp+30h] [rbp-40h] BYREF
  unsigned int *v34[2]; // [rsp+40h] [rbp-30h] BYREF
  _BYTE v35[32]; // [rsp+50h] [rbp-20h] BYREF

  v4 = *((_QWORD *)a2 + 2);
  if ( (*(_WORD *)(v4 + 66) & 0x3FFF) == 0x29D )
  {
    *(_QWORD *)&v33 = 0LL;
    if ( (W32GetCurrentThreadDpiAwarenessContext() & 0xF) != 0
      || (!*(_QWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 408)
        ? (v7 = 0)
        : (v7 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 408) + 8LL) + 244LL) & 1),
          !v7) )
    {
      if ( (W32GetCurrentThreadDpiAwarenessContext() & 0xF) == 1
        && (!*(_QWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 408)
          ? (v9 = 0)
          : (v9 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 408) + 8LL) + 244LL) & 1),
            v9) )
      {
        v8 = (char *)gpsi + 2968;
      }
      else
      {
        v8 = (char *)gpsi + 2192;
      }
    }
    else
    {
      v8 = (char *)gpsi + 2580;
    }
    DWORD2(v33) = *(_DWORD *)v8;
    if ( (W32GetCurrentThreadDpiAwarenessContext() & 0xF) != 0
      || (!*(_QWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 408)
        ? (v10 = 0)
        : (v10 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 408) + 8LL) + 244LL) & 1),
          !v10) )
    {
      if ( (W32GetCurrentThreadDpiAwarenessContext() & 0xF) == 1
        && (!*(_QWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 408)
          ? (v12 = 0)
          : (v12 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 408) + 8LL)
                             + 244LL) & 1),
            v12) )
      {
        v11 = (char *)gpsi + 2972;
      }
      else
      {
        v11 = (char *)gpsi + 2196;
      }
    }
    else
    {
      v11 = (char *)gpsi + 2584;
    }
    HIDWORD(v33) = *(_DWORD *)v11;
  }
  else
  {
    if ( (*((_DWORD *)a2 + 16) & 1) != 0 )
      v13 = *(_OWORD *)(v4 + 112);
    else
      v13 = *(_OWORD *)(v4 + 128);
    v33 = v13;
  }
  if ( *((_QWORD *)a2 + 11) && (*((_DWORD *)a2 + 16) & 0x4000) == 0 )
  {
    if ( (W32GetCurrentThreadDpiAwarenessContext() & 0xF) != 0
      || (!*(_QWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 408)
        ? (v14 = 0)
        : (v14 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 408) + 8LL) + 244LL) & 1),
          !v14) )
    {
      if ( (W32GetCurrentThreadDpiAwarenessContext() & 0xF) == 1
        && (!*(_QWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 408)
          ? (v16 = 0)
          : (v16 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 408) + 8LL)
                             + 244LL) & 1),
            v16) )
      {
        v15 = *((_QWORD *)a2 + 11) + 60LL;
      }
      else
      {
        v15 = *((_QWORD *)a2 + 11) + 28LL;
      }
    }
    else
    {
      v15 = *((_QWORD *)a2 + 11) + 44LL;
    }
    if ( (W32GetCurrentThreadDpiAwarenessContext() & 0xF) != 0
      || (!*(_QWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 408)
        ? (v17 = 0)
        : (v17 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 408) + 8LL) + 244LL) & 1),
          !v17) )
    {
      if ( (W32GetCurrentThreadDpiAwarenessContext() & 0xF) == 1
        && (!*(_QWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 408)
          ? (v20 = 0)
          : (v20 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 408) + 8LL)
                             + 244LL) & 1),
            v20) )
      {
        v18 = (struct tagMONITOR *)*((_QWORD *)a2 + 11);
        v19 = (int *)((char *)v18 + 60);
      }
      else
      {
        v18 = (struct tagMONITOR *)*((_QWORD *)a2 + 11);
        v19 = (int *)((char *)v18 + 28);
      }
    }
    else
    {
      v18 = (struct tagMONITOR *)*((_QWORD *)a2 + 11);
      v19 = (int *)((char *)v18 + 44);
    }
    v21 = *v19;
    v22 = -*(_DWORD *)(v15 + 4);
    HIDWORD(v33) -= *(_DWORD *)(v15 + 4);
    v23 = -v21;
    LODWORD(v33) = v23 + v33;
    DWORD2(v33) += v23;
    DWORD1(v33) += v22;
    if ( a1 )
      SetMonitorRegion(v18, a1, a1);
  }
  if ( (*((_DWORD *)a2 + 16) & 0x4000000) != 0 )
    goto LABEL_89;
  if ( (int)IsGetLayeredOrRedirectedParentSupported_0() < 0 )
    LayeredOrRedirectedParent_0 = 0LL;
  else
    LayeredOrRedirectedParent_0 = (_DWORD *)GetLayeredOrRedirectedParent_0();
  if ( !LayeredOrRedirectedParent_0 )
    goto LABEL_91;
  if ( (LayeredOrRedirectedParent_0[12] & 0x20000000) != 0
    && (int)IsGetRedirectionBitmapSupported_0() >= 0
    && GetRedirectionBitmap_0() )
  {
    v25 = LayeredOrRedirectedParent_0[28];
    v26 = LayeredOrRedirectedParent_0[29];
    if ( *((_QWORD *)a2 + 11) && *((int *)a2 + 16) < 0 )
    {
      LODWORD(v33) = v25 + v33;
      DWORD2(v33) += v25;
      HIDWORD(v33) += v26;
      DWORD1(v33) += v26;
      if ( (W32GetCurrentThreadDpiAwarenessContext() & 0xF) != 0
        || (!*(_QWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 408)
          ? (v27 = 0)
          : (v27 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 408) + 8LL)
                             + 244LL) & 1),
            !v27) )
      {
        if ( (W32GetCurrentThreadDpiAwarenessContext() & 0xF) == 1
          && (!*(_QWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 408)
            ? (v29 = 0)
            : (v29 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 408) + 8LL)
                               + 244LL) & 1),
              v29) )
        {
          v28 = *((_QWORD *)a2 + 11) + 60LL;
        }
        else
        {
          v28 = *((_QWORD *)a2 + 11) + 28LL;
        }
      }
      else
      {
        v28 = *((_QWORD *)a2 + 11) + 44LL;
      }
      IntersectRect(&v33, &v33, v28);
    }
    v30 = -v26;
    v31 = -v25;
    LODWORD(v33) = v31 + v33;
    DWORD2(v33) += v31;
    HIDWORD(v33) += v30;
    DWORD1(v33) += v30;
    if ( a1 )
      GreOffsetRgn(a1);
  }
  else
  {
LABEL_89:
    if ( a1 )
      GreSetRectRgn(a1, 0);
  }
LABEL_91:
  GreSetDCOrg(*((_QWORD *)a2 + 1), (unsigned int)v33, DWORD1(v33), &v33);
  if ( a3 )
  {
    v32 = *((_QWORD *)a2 + 1);
    v34[0] = 0LL;
    v34[1] = 0LL;
    UnexpectedThreadTerminationHandler<DCOBJA>::UnexpectedThreadTerminationHandler<DCOBJA>(v35);
    v34[0] = (unsigned int *)HmgShareLock(v32, 1);
    GreSelectVisRgnInternal(v34, a1, 1LL);
    if ( v34[0] )
    {
      XDCOBJ::RestoreAttributes((XDCOBJ *)v34);
      HmgDecrementShareReferenceCount(v34[0]);
    }
    UnexpectedThreadTerminationHandler<BRUSHSELOBJ>::~UnexpectedThreadTerminationHandler<BRUSHSELOBJ>(v35);
  }
}
