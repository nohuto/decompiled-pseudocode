/*
 * XREFs of _GetWindowPlacement @ 0x1C0076EB4
 * Callers:
 *     NtUserGetWindowPlacement @ 0x1C0077E00 (NtUserGetWindowPlacement.c)
 *     NtUserGetInternalWindowPos @ 0x1C021ACF0 (NtUserGetInternalWindowPos.c)
 * Callees:
 *     _GetProp @ 0x1C00540EC (_GetProp.c)
 *     W32GetThreadWin32Thread @ 0x1C005592C (W32GetThreadWin32Thread.c)
 *     _GetDesktopWindow @ 0x1C00573D0 (_GetDesktopWindow.c)
 *     SameCoordinateSpace @ 0x1C0075498 (SameCoordinateSpace.c)
 *     UpdateCheckpoint @ 0x1C0077304 (UpdateCheckpoint.c)
 *     CkptUpdate @ 0x1C0077428 (CkptUpdate.c)
 *     GetRect @ 0x1C0077D54 (GetRect.c)
 *     _MonitorFromRect @ 0x1C00780C0 (_MonitorFromRect.c)
 *     __security_check_cookie @ 0x1C01512D0 (__security_check_cookie.c)
 *     memset @ 0x1C0152CC0 (memset.c)
 */

__int64 __fastcall GetWindowPlacement(__int64 a1, __int64 a2, int a3)
{
  _BYTE *updated; // rsi
  char v6; // al
  __int64 v7; // r14
  __int64 CurrentProcessWin32Process; // rax
  int v9; // r14d
  _QWORD *v10; // r12
  __int64 v11; // r14
  __int64 v12; // rcx
  __int64 v13; // rcx
  _DWORD *v14; // r15
  __int64 v15; // rcx
  int v16; // ecx
  _DWORD *v17; // r8
  int v18; // edx
  int v19; // ecx
  int v21; // ecx
  __int64 Prop; // rax
  __int128 v23; // xmm1
  __int128 v24; // xmm0
  int v25; // eax
  _BYTE v26[52]; // [rsp+20h] [rbp-50h] BYREF
  __int128 v27; // [rsp+58h] [rbp-18h] BYREF

  memset(v26, 0, sizeof(v26));
  if ( (*(_BYTE *)(*((_DWORD *)&gSharedInfo + 4) * (unsigned int)(unsigned __int16)*(_DWORD *)a1
                 + *((_QWORD *)&gSharedInfo + 1)
                 + 17LL) & 1) != 0 )
    return 0LL;
  if ( a3 )
  {
    updated = (_BYTE *)UpdateCheckpoint(a1);
    if ( updated )
      goto LABEL_4;
    return 0LL;
  }
  Prop = GetProp(a1, (unsigned __int16)atomCheckpointProp, 1LL);
  updated = v26;
  if ( Prop )
  {
    v23 = *(_OWORD *)(Prop + 16);
    *(_OWORD *)v26 = *(_OWORD *)Prop;
    v24 = *(_OWORD *)(Prop + 32);
    v25 = *(_DWORD *)(Prop + 48);
    *(_OWORD *)&v26[16] = v23;
    *(_DWORD *)&v26[48] = v25;
    *(_OWORD *)&v26[32] = v24;
  }
  else
  {
    GetRect(a1, &v27, 66LL);
    *(_DWORD *)&v26[32] &= 0xFFFFFF80;
    *(_OWORD *)v26 = v27;
    *(_OWORD *)&v26[36] = v27;
    *(__m128i *)&v26[16] = _mm_load_si128((const __m128i *)&_xmm_ffffffffffffffffffffffffffffffff);
    CkptUpdate(a1, &v27, v26);
  }
LABEL_4:
  v6 = *(_BYTE *)(a1 + 55);
  if ( (v6 & 0x20) != 0 )
    *(_DWORD *)(a2 + 8) = 2;
  else
    *(_DWORD *)(a2 + 8) = (2 * (v6 & 1)) | 1;
  *(_OWORD *)(a2 + 28) = *(_OWORD *)updated;
  if ( (*(_BYTE *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 432) + 224LL) & 1) != 0
    || (v7 = *(_QWORD *)(a1 + 16),
        CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(0x100000000000000LL),
        (unsigned int)SameCoordinateSpace(CurrentProcessWin32Process, *(_QWORD *)(v7 + 376))) )
  {
    v9 = 0;
  }
  else
  {
    v9 = 1;
    TransformRectBetweenCoordinateSpaces(a2 + 28, a2 + 28, 0LL, a1);
  }
  v10 = (_QWORD *)(a2 + 12);
  if ( (*((_DWORD *)updated + 8) & 8) != 0 )
  {
    *v10 = *((_QWORD *)updated + 2);
    if ( v9 )
      TransformPointBetweenCoordinateSpaces(a2 + 12, a2 + 12, 0LL, a1);
  }
  else
  {
    *(_DWORD *)(a2 + 16) = -1;
    *(_DWORD *)v10 = -1;
  }
  if ( (*((_DWORD *)updated + 8) & 0x10) == 0 || (*(_BYTE *)(a1 + 43) & 0x40) != 0 )
  {
    *(_DWORD *)(a2 + 24) = -1;
    *(_DWORD *)(a2 + 20) = -1;
  }
  else
  {
    *(_QWORD *)(a2 + 20) = *((_QWORD *)updated + 3);
    if ( v9 )
      TransformPointBetweenCoordinateSpaces(a2 + 20, a2 + 20, 0LL, a1);
  }
  if ( *(_QWORD *)(a1 + 88) == GetDesktopWindow(a1) && *(char *)(a1 + 48) >= 0 )
  {
    v11 = MonitorFromRect(a2 + 28, 1LL);
    if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v12) + 776) & 0x2000) != 0
      || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v13) + 776) & 0x4000) != 0
      || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
        ? (v13 = 0LL)
        : (v13 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408) + 8LL)
                           + 244LL) & 1),
          !(_DWORD)v13) )
    {
      if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v13) + 776) & 0x2000) == 0
        || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
          ? (v13 = 0LL)
          : (v13 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
                                         + 8LL)
                             + 244LL) & 1),
            v14 = (_DWORD *)(v11 + 108),
            !(_DWORD)v13) )
      {
        v14 = (_DWORD *)(v11 + 76);
      }
    }
    else
    {
      v14 = (_DWORD *)(v11 + 92);
    }
    if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v13) + 776) & 0x2000) != 0
      || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v15) + 776) & 0x4000) != 0
      || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
        ? (v15 = 0LL)
        : (v15 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408) + 8LL)
                           + 244LL) & 1),
          !(_DWORD)v15) )
    {
      if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v15) + 776) & 0x2000) == 0
        || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
          ? (v16 = 0)
          : (v16 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
                                         + 8LL)
                             + 244LL) & 1),
            v17 = (_DWORD *)(v11 + 60),
            !v16) )
      {
        v17 = (_DWORD *)(v11 + 28);
      }
    }
    else
    {
      v17 = (_DWORD *)(v11 + 44);
    }
    if ( (*((_DWORD *)updated + 8) & 8) != 0 )
    {
      *(_DWORD *)v10 += *v17 - *v14;
      *(_DWORD *)(a2 + 16) += v17[1] - v14[1];
    }
    v18 = v17[1] - v14[1];
    v19 = *v17 - *v14;
    *(_DWORD *)(a2 + 28) += v19;
    *(_DWORD *)(a2 + 36) += v19;
    *(_DWORD *)(a2 + 40) += v18;
    *(_DWORD *)(a2 + 32) += v18;
  }
  *(_DWORD *)(a2 + 4) = 0;
  if ( (*(_BYTE *)(a1 + 55) & 0xC0) == 0x40 )
  {
    v21 = *(_DWORD *)(a2 + 4);
    if ( (updated[32] & 1) != 0 )
      v21 = 1;
    *(_DWORD *)(a2 + 4) = v21;
  }
  if ( ((unsigned __int8)~*(_BYTE *)(a1 + 55) & ((*((_DWORD *)updated + 8) & 2) == 0)) == 0 )
    *(_DWORD *)(a2 + 4) |= 2u;
  *(_DWORD *)a2 = 44;
  return 1LL;
}
