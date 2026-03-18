/*
 * XREFs of _GetWindowPlacement @ 0x1C00AF118
 * Callers:
 *     NtUserGetWindowPlacement @ 0x1C00AF010 (NtUserGetWindowPlacement.c)
 *     NtUserGetInternalWindowPos @ 0x1C0213BB0 (NtUserGetInternalWindowPos.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0044EEC (W32GetThreadWin32Thread.c)
 *     _GetProp @ 0x1C007AFEC (_GetProp.c)
 *     _GetDesktopWindow @ 0x1C007B420 (_GetDesktopWindow.c)
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C0088728 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     UpdateCheckpoint @ 0x1C00AFD1C (UpdateCheckpoint.c)
 *     CkptUpdate @ 0x1C00AFE40 (CkptUpdate.c)
 *     GetRect @ 0x1C00AFEE8 (GetRect.c)
 *     _MonitorFromRect @ 0x1C00B0090 (_MonitorFromRect.c)
 *     __security_check_cookie @ 0x1C0158CD0 (__security_check_cookie.c)
 *     memset @ 0x1C015A380 (memset.c)
 */

__int64 __fastcall GetWindowPlacement(__int64 a1, __int64 a2, int a3)
{
  __int64 v6; // rdx
  _BYTE *updated; // rsi
  __int64 v8; // r8
  __int64 v9; // r9
  char v10; // al
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  int v18; // r14d
  _QWORD *v19; // r12
  __int64 v20; // r14
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // r9
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // r9
  _DWORD *v29; // r15
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // r8
  __int64 v33; // r9
  __int64 v34; // rdx
  __int64 v35; // r8
  __int64 v36; // r9
  __int64 v37; // rdx
  __int64 v38; // r8
  __int64 v39; // r9
  int v40; // ecx
  _DWORD *v41; // r8
  int v42; // edx
  int v43; // ecx
  int v45; // eax
  __int64 Prop; // rax
  __int128 v47; // xmm1
  __int128 v48; // xmm0
  int v49; // eax
  _BYTE v50[52]; // [rsp+20h] [rbp-50h] BYREF
  __int128 v51; // [rsp+58h] [rbp-18h] BYREF

  memset(v50, 0, sizeof(v50));
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
  updated = v50;
  if ( Prop )
  {
    v47 = *(_OWORD *)(Prop + 16);
    *(_OWORD *)v50 = *(_OWORD *)Prop;
    v48 = *(_OWORD *)(Prop + 32);
    v49 = *(_DWORD *)(Prop + 48);
    *(_OWORD *)&v50[16] = v47;
    *(_DWORD *)&v50[48] = v49;
    *(_OWORD *)&v50[32] = v48;
  }
  else
  {
    GetRect(a1, &v51, 66LL);
    *(_DWORD *)&v50[32] &= 0xFFFFFF80;
    *(_OWORD *)v50 = v51;
    *(_OWORD *)&v50[36] = v51;
    *(__m128i *)&v50[16] = _mm_load_si128((const __m128i *)&_xmm_ffffffffffffffffffffffffffffffff);
    CkptUpdate(a1, &v51, v50);
  }
LABEL_4:
  v10 = *(_BYTE *)(a1 + 55);
  if ( (v10 & 0x20) != 0 )
    *(_DWORD *)(a2 + 8) = 2;
  else
    *(_DWORD *)(a2 + 8) = (2 * (v10 & 1)) | 1;
  *(_OWORD *)(a2 + 28) = *(_OWORD *)updated;
  if ( (*(_BYTE *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v6, v8, v9) + 432) + 224LL) & 1) != 0
    || (v15 = *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v11, v12, v13) + 432),
        (*(_BYTE *)(v15 + 224) & 0x20) != 0)
    || (W32GetCurrentThreadDpiAwarenessContext(v15, v14, v16, v17) & 0xF) == (*(_DWORD *)(a1 + 352) & 0xF) )
  {
    v18 = 0;
  }
  else
  {
    v18 = 1;
    TransformRectBetweenCoordinateSpaces(a2 + 28, a2 + 28, 0LL, a1);
  }
  v19 = (_QWORD *)(a2 + 12);
  if ( (*((_DWORD *)updated + 8) & 8) != 0 )
  {
    *v19 = *((_QWORD *)updated + 2);
    if ( v18 )
      TransformPointBetweenCoordinateSpaces(a2 + 12, a2 + 12, 0LL, a1);
  }
  else
  {
    *(_DWORD *)(a2 + 16) = -1;
    *(_DWORD *)v19 = -1;
  }
  if ( (*((_DWORD *)updated + 8) & 0x10) == 0 || (*(_BYTE *)(a1 + 43) & 0x40) != 0 )
  {
    *(_DWORD *)(a2 + 24) = -1;
    *(_DWORD *)(a2 + 20) = -1;
  }
  else
  {
    *(_QWORD *)(a2 + 20) = *((_QWORD *)updated + 3);
    if ( v18 )
      TransformPointBetweenCoordinateSpaces(a2 + 20, a2 + 20, 0LL, a1);
  }
  if ( *(_QWORD *)(a1 + 88) == GetDesktopWindow(a1) && *(char *)(a1 + 48) >= 0 )
  {
    v20 = MonitorFromRect(a2 + 28, 1LL);
    if ( (W32GetCurrentThreadDpiAwarenessContext(v22, v21, v23, v24) & 0xF) != 0
      || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v25, v27, v28) + 408)
        ? (v26 = 0LL)
        : (v26 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                       (__int64)KeGetCurrentThread(),
                                                       v25,
                                                       v27,
                                                       v28)
                                                   + 408)
                                       + 8LL)
                           + 244LL) & 1),
          !(_DWORD)v26) )
    {
      if ( (W32GetCurrentThreadDpiAwarenessContext(v26, v25, v27, v28) & 0xF) != 1
        || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v25, v27, v28) + 408)
          ? (v26 = 0LL)
          : (v26 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                         (__int64)KeGetCurrentThread(),
                                                         v25,
                                                         v27,
                                                         v28)
                                                     + 408)
                                         + 8LL)
                             + 244LL) & 1),
            v29 = (_DWORD *)(v20 + 108),
            !(_DWORD)v26) )
      {
        v29 = (_DWORD *)(v20 + 76);
      }
    }
    else
    {
      v29 = (_DWORD *)(v20 + 92);
    }
    if ( (W32GetCurrentThreadDpiAwarenessContext(v26, v25, v27, v28) & 0xF) != 0
      || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v30, v32, v33) + 408)
        ? (v31 = 0LL)
        : (v31 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                       (__int64)KeGetCurrentThread(),
                                                       v30,
                                                       v32,
                                                       v33)
                                                   + 408)
                                       + 8LL)
                           + 244LL) & 1),
          !(_DWORD)v31) )
    {
      if ( (W32GetCurrentThreadDpiAwarenessContext(v31, v30, v32, v33) & 0xF) != 1
        || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v34, v35, v36) + 408)
          ? (v40 = 0)
          : (v40 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                         (__int64)KeGetCurrentThread(),
                                                         v37,
                                                         v38,
                                                         v39)
                                                     + 408)
                                         + 8LL)
                             + 244LL) & 1),
            v41 = (_DWORD *)(v20 + 60),
            !v40) )
      {
        v41 = (_DWORD *)(v20 + 28);
      }
    }
    else
    {
      v41 = (_DWORD *)(v20 + 44);
    }
    if ( (*((_DWORD *)updated + 8) & 8) != 0 )
    {
      *(_DWORD *)v19 += *v41 - *v29;
      *(_DWORD *)(a2 + 16) += v41[1] - v29[1];
    }
    v42 = v41[1] - v29[1];
    v43 = *v41 - *v29;
    *(_DWORD *)(a2 + 28) += v43;
    *(_DWORD *)(a2 + 36) += v43;
    *(_DWORD *)(a2 + 40) += v42;
    *(_DWORD *)(a2 + 32) += v42;
  }
  *(_DWORD *)(a2 + 4) = 0;
  if ( (*(_BYTE *)(a1 + 55) & 0xC0) == 0x40 )
  {
    v45 = *(_DWORD *)(a2 + 4);
    if ( (updated[32] & 1) != 0 )
      v45 = 1;
    *(_DWORD *)(a2 + 4) = v45;
  }
  if ( ((unsigned __int8)~*(_BYTE *)(a1 + 55) & ((*((_DWORD *)updated + 8) & 2) == 0)) == 0 )
    *(_DWORD *)(a2 + 4) |= 2u;
  *(_DWORD *)a2 = 44;
  return 1LL;
}
