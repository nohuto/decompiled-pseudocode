/*
 * XREFs of _GetWindowPlacement @ 0x1C0083148
 * Callers:
 *     NtUserGetWindowPlacement @ 0x1C0083040 (NtUserGetWindowPlacement.c)
 *     NtUserGetInternalWindowPos @ 0x1C021AF60 (NtUserGetInternalWindowPos.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C001A694 (W32GetThreadWin32Thread.c)
 *     _GetProp @ 0x1C006524C (_GetProp.c)
 *     _GetDesktopWindow @ 0x1C00665E0 (_GetDesktopWindow.c)
 *     _MonitorFromRect @ 0x1C0082E40 (_MonitorFromRect.c)
 *     SameCoordinateSpace @ 0x1C00855C8 (SameCoordinateSpace.c)
 *     UpdateCheckpoint @ 0x1C0085BE8 (UpdateCheckpoint.c)
 *     CkptUpdate @ 0x1C0085D0C (CkptUpdate.c)
 *     GetRect @ 0x1C0087D10 (GetRect.c)
 *     __security_check_cookie @ 0x1C015BB90 (__security_check_cookie.c)
 *     memset @ 0x1C015D4C0 (memset.c)
 */

__int64 __fastcall GetWindowPlacement(__int64 a1, _DWORD *a2, int a3)
{
  _BYTE *updated; // rsi
  char v6; // al
  __int64 v7; // r14
  __int64 CurrentProcessWin32Process; // rax
  int v9; // r14d
  _QWORD *v10; // r12
  __int64 v11; // r8
  __int64 v12; // r14
  __int64 v13; // rcx
  __int64 v14; // rcx
  _DWORD *v15; // r15
  __int64 v16; // rcx
  int v17; // ecx
  _DWORD *v18; // r8
  int v19; // edx
  int v20; // ecx
  int v22; // ecx
  __int64 Prop; // rax
  __int64 v24; // rcx
  __int128 v25; // xmm1
  __int128 v26; // xmm0
  int v27; // eax
  _BYTE v28[52]; // [rsp+20h] [rbp-50h] BYREF
  __int128 v29; // [rsp+58h] [rbp-18h] BYREF

  memset(v28, 0, sizeof(v28));
  if ( (*(_BYTE *)(LODWORD(gSharedInfo[2]) * (unsigned int)(unsigned __int16)*(_DWORD *)a1 + gSharedInfo[1] + 17LL) & 1) != 0 )
    return 0LL;
  if ( a3 )
  {
    updated = (_BYTE *)UpdateCheckpoint(a1);
    if ( updated )
      goto LABEL_4;
    return 0LL;
  }
  Prop = GetProp(a1, (unsigned __int16)atomCheckpointProp, 1LL);
  updated = v28;
  if ( Prop )
  {
    v25 = *(_OWORD *)(Prop + 16);
    *(_OWORD *)v28 = *(_OWORD *)Prop;
    v26 = *(_OWORD *)(Prop + 32);
    v27 = *(_DWORD *)(Prop + 48);
    *(_OWORD *)&v28[16] = v25;
    *(_DWORD *)&v28[48] = v27;
    *(_OWORD *)&v28[32] = v26;
  }
  else
  {
    GetRect(v24, &v29, 66LL);
    *(_DWORD *)&v28[32] &= 0xFFFFFF80;
    *(_OWORD *)v28 = v29;
    *(_OWORD *)&v28[36] = v29;
    *(__m128i *)&v28[16] = _mm_load_si128((const __m128i *)&_xmm_ffffffffffffffffffffffffffffffff);
    CkptUpdate(a1, &v29, v28);
  }
LABEL_4:
  v6 = *(_BYTE *)(a1 + 55);
  if ( (v6 & 0x20) != 0 )
    a2[2] = 2;
  else
    a2[2] = (2 * (v6 & 1)) | 1;
  *(_OWORD *)(a2 + 7) = *(_OWORD *)updated;
  if ( (*(_BYTE *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 440) + 224LL) & 1) != 0
    || (v7 = *(_QWORD *)(a1 + 16),
        CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(0x100000000000000LL),
        (unsigned int)SameCoordinateSpace(CurrentProcessWin32Process, *(_QWORD *)(v7 + 384))) )
  {
    v9 = 0;
  }
  else
  {
    v9 = 1;
    TransformRectBetweenCoordinateSpaces(a2 + 7, a2 + 7, 0LL, a1);
  }
  v10 = a2 + 3;
  if ( (*((_DWORD *)updated + 8) & 8) != 0 )
  {
    *v10 = *((_QWORD *)updated + 2);
    if ( v9 )
      TransformPointBetweenCoordinateSpaces(a2 + 3, a2 + 3, 0LL, a1);
  }
  else
  {
    a2[4] = -1;
    *(_DWORD *)v10 = -1;
  }
  if ( (*((_DWORD *)updated + 8) & 0x10) == 0 || (*(_BYTE *)(a1 + 43) & 0x40) != 0 )
  {
    a2[6] = -1;
    a2[5] = -1;
  }
  else
  {
    *(_QWORD *)(a2 + 5) = *((_QWORD *)updated + 3);
    if ( v9 )
      TransformPointBetweenCoordinateSpaces(a2 + 5, a2 + 5, 0LL, a1);
  }
  if ( *(_QWORD *)(a1 + 88) == GetDesktopWindow(a1) && *(char *)(a1 + 48) >= 0 )
  {
    v12 = MonitorFromRect(a2 + 7, 1LL, v11);
    if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v13) + 776) & 0x2000) != 0
      || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v14) + 776) & 0x4000) != 0
      || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
        ? (v14 = 0LL)
        : (v14 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416) + 8LL)
                           + 260LL) & 1),
          !(_DWORD)v14) )
    {
      if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v14) + 776) & 0x2000) == 0
        || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
          ? (v14 = 0LL)
          : (v14 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
                                         + 8LL)
                             + 260LL) & 1),
            v15 = (_DWORD *)(v12 + 108),
            !(_DWORD)v14) )
      {
        v15 = (_DWORD *)(v12 + 76);
      }
    }
    else
    {
      v15 = (_DWORD *)(v12 + 92);
    }
    if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v14) + 776) & 0x2000) != 0
      || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v16) + 776) & 0x4000) != 0
      || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
        ? (v16 = 0LL)
        : (v16 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416) + 8LL)
                           + 260LL) & 1),
          !(_DWORD)v16) )
    {
      if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v16) + 776) & 0x2000) == 0
        || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
          ? (v17 = 0)
          : (v17 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
                                         + 8LL)
                             + 260LL) & 1),
            v18 = (_DWORD *)(v12 + 60),
            !v17) )
      {
        v18 = (_DWORD *)(v12 + 28);
      }
    }
    else
    {
      v18 = (_DWORD *)(v12 + 44);
    }
    if ( (*((_DWORD *)updated + 8) & 8) != 0 )
    {
      *(_DWORD *)v10 += *v18 - *v15;
      a2[4] += v18[1] - v15[1];
    }
    v19 = v18[1] - v15[1];
    v20 = *v18 - *v15;
    a2[7] += v20;
    a2[9] += v20;
    a2[10] += v19;
    a2[8] += v19;
  }
  a2[1] = 0;
  if ( (*(_BYTE *)(a1 + 55) & 0xC0) == 0x40 )
  {
    v22 = a2[1];
    if ( (updated[32] & 1) != 0 )
      v22 = 1;
    a2[1] = v22;
  }
  if ( ((unsigned __int8)~*(_BYTE *)(a1 + 55) & ((*((_DWORD *)updated + 8) & 2) == 0)) == 0 )
    a2[1] |= 2u;
  *a2 = 44;
  return 1LL;
}
