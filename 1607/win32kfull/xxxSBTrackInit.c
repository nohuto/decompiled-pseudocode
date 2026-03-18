/*
 * XREFs of xxxSBTrackInit @ 0x1C022C980
 * Callers:
 *     xxxSysCommand @ 0x1C012ABE4 (xxxSysCommand.c)
 *     xxxDoScrollMenu @ 0x1C022C4CC (xxxDoScrollMenu.c)
 *     xxxSBWndProc @ 0x1C022CE10 (xxxSBWndProc.c)
 * Callees:
 *     xxxCapture @ 0x1C00AACF4 (xxxCapture.c)
 *     zzzShowCaret @ 0x1C00AB9A4 (zzzShowCaret.c)
 *     CalcSBStuff @ 0x1C00AF9AC (CalcSBStuff.c)
 *     GetWndSBDisableFlags @ 0x1C014F10C (GetWndSBDisableFlags.c)
 *     __security_check_cookie @ 0x1C0158CD0 (__security_check_cookie.c)
 *     safe_cast_fnid_to_PSBWND @ 0x1C01CBCEC (safe_cast_fnid_to_PSBWND.c)
 *     ?CalcTrackDragRect@@YAXPEAUtagSBTRACK@@@Z @ 0x1C022A858 (-CalcTrackDragRect@@YAXPEAUtagSBTRACK@@@Z.c)
 *     ?xxxDoScroll@@YAXPEAUtagWND@@0HHH@Z @ 0x1C022AF3C (-xxxDoScroll@@YAXPEAUtagWND@@0HHH@Z.c)
 *     ?xxxSBTrackLoop@@YAXPEAUtagWND@@_JPEAUtagSBCALC@@@Z @ 0x1C022B3CC (-xxxSBTrackLoop@@YAXPEAUtagWND@@_JPEAUtagSBCALC@@@Z.c)
 */

__int64 __fastcall xxxSBTrackInit(struct tagWND *a1, __int64 a2, int a3, int a4)
{
  __int64 result; // rax
  int v8; // r8d
  __int64 v9; // rsi
  __int64 v10; // rbx
  struct tagWND **v11; // r14
  struct tagWND **v12; // r15
  int v13; // eax
  int v14; // r9d
  char *v15; // rsi
  unsigned __int16 v16; // ax
  unsigned int v17; // edx
  __int64 v18; // rcx
  int v19; // edx
  __int128 *v20; // r8
  __int128 *v21; // rcx
  int v22; // r12d
  int v23; // eax
  int v24; // eax
  int v25; // r14d
  int v26; // eax
  int v27; // eax
  int v28; // eax
  __int64 v29; // rcx
  __int64 v30; // rdx
  __int64 v31; // r8
  char WndSBDisableFlags; // [rsp+34h] [rbp-A4h]
  __int128 v34; // [rsp+38h] [rbp-A0h] BYREF
  char v35; // [rsp+50h] [rbp-88h] BYREF

  result = safe_cast_fnid_to_PSBWND((__int64)a1);
  v9 = result;
  if ( *(_QWORD *)(*((_QWORD *)a1 + 2) + 632LL) || !result && !v8 )
    return result;
  result = Win32AllocPoolWithQuota(104LL, 1953723221LL);
  v10 = result;
  if ( !result )
    return result;
  *(_DWORD *)result &= ~1u;
  *(_QWORD *)(result + 64) = 0LL;
  v11 = (struct tagWND **)(result + 16);
  *(_QWORD *)(result + 8) = 0LL;
  *(_QWORD *)(result + 16) = 0LL;
  v12 = (struct tagWND **)(result + 24);
  *(_QWORD *)(result + 48) = xxxTrackBox;
  *(_QWORD *)(result + 24) = 0LL;
  HMAssignmentLock(result + 8, a1);
  *(_QWORD *)(*((_QWORD *)a1 + 2) + 632LL) = v10;
  v13 = *(_DWORD *)v10 ^ (*(_DWORD *)v10 ^ (4 * (a3 == 0))) & 4;
  *(_DWORD *)v10 = v13;
  if ( (v13 & 4) != 0 )
  {
    HMAssignmentLock(v10 + 16, a1);
    *(_DWORD *)v10 ^= (*(_DWORD *)v10 ^ (2 * *(_DWORD *)(v9 + 360))) & 2;
    HMAssignmentLock(v10 + 24, *((_QWORD *)a1 + 11));
    v14 = *(_DWORD *)(v9 + 364);
    v15 = (char *)(v9 + 368);
    WndSBDisableFlags = v14;
    *(_DWORD *)(v10 + 88) = 2;
  }
  else
  {
    v16 = WORD1(a2) - *((_WORD *)a1 + 58);
    if ( (*((_BYTE *)a1 + 50) & 0x40) != 0 )
      a2 = (unsigned __int16)(*((_WORD *)a1 + 60) - a2) | (v16 << 16);
    else
      a2 = (unsigned __int16)(a2 - *((_WORD *)a1 + 56)) | (v16 << 16);
    HMAssignmentLock(v10 + 24, a1);
    HMAssignmentLock(v10 + 16, 0LL);
    v17 = *(_DWORD *)v10 ^ (*(_DWORD *)v10 ^ (2 * a3)) & 2;
    *(_DWORD *)v10 = v17;
    WndSBDisableFlags = GetWndSBDisableFlags((__int64)a1, (v17 >> 1) & 1);
    LOBYTE(v14) = WndSBDisableFlags;
    v15 = (char *)&unk_1C032DBD0;
    *(_DWORD *)(v10 + 88) = a3 != 6;
    if ( *((_QWORD *)a1 + 2) == gptiCurrent )
      v15 = &v35;
  }
  *(_QWORD *)(v10 + 96) = v15;
  if ( (v14 & 3) == 3 )
    goto LABEL_13;
  if ( (*(_DWORD *)v10 & 4) == 0 )
  {
    CalcSBStuff((__int64)a1, (__int64)v15, (*(_DWORD *)v10 >> 1) & 1);
    LOBYTE(v14) = WndSBDisableFlags;
  }
  v19 = *(_DWORD *)v10;
  v20 = &v34;
  v21 = (__int128 *)((char *)&v34 + 4);
  if ( ((*(_DWORD *)v10 >> 1) & 1) != 0 )
  {
    v22 = SWORD1(a2);
  }
  else
  {
    v20 = (__int128 *)((char *)&v34 + 4);
    v21 = &v34;
    v22 = (__int16)a2;
  }
  *(_DWORD *)v20 = *((_DWORD *)v15 + 6);
  *(_DWORD *)v21 = *((_DWORD *)v15 + 4);
  *((_DWORD *)v20 + 2) = *((_DWORD *)v15 + 7);
  v23 = *((_DWORD *)v15 + 5);
  *(_DWORD *)(v10 + 56) = -1;
  *((_DWORD *)v21 + 2) = v23;
  if ( v22 < *((_DWORD *)v15 + 9) )
  {
    if ( (v14 & 1) != 0 )
    {
      if ( (v19 & 4) != 0 )
        goto LABEL_22;
      goto LABEL_13;
    }
    *(_DWORD *)(v10 + 56) = 0;
    v24 = *((_DWORD *)v15 + 9);
    goto LABEL_32;
  }
  if ( v22 >= *((_DWORD *)v15 + 10) )
  {
    if ( (v14 & 2) != 0 )
    {
      if ( (v19 & 4) != 0 )
      {
        zzzShowCaret(*v11);
LABEL_22:
        result = *((_QWORD *)a1 + 2);
        if ( v10 != *(_QWORD *)(result + 632) )
          return result;
      }
LABEL_13:
      *(_QWORD *)(*((_QWORD *)a1 + 2) + 632LL) = 0LL;
      HMAssignmentUnlock(v10 + 24);
      HMAssignmentUnlock(v10 + 16);
      v18 = v10 + 8;
LABEL_53:
      HMAssignmentUnlock(v18);
      return Win32FreePool(v10, v30, v31);
    }
    *(_DWORD *)(v10 + 56) = 1;
    *(_DWORD *)v21 = *((_DWORD *)v15 + 10);
LABEL_33:
    v25 = a4;
    goto LABEL_40;
  }
  if ( v22 < *((_DWORD *)v15 + 13) )
  {
    *(_DWORD *)(v10 + 56) = 2;
    *(_DWORD *)v21 = *((_DWORD *)v15 + 9);
    v24 = *((_DWORD *)v15 + 13);
LABEL_32:
    *((_DWORD *)v21 + 2) = v24;
    goto LABEL_33;
  }
  v25 = a4;
  if ( v22 < *((_DWORD *)v15 + 12) )
    goto LABEL_36;
  *(_DWORD *)(v10 + 56) = 3;
  *(_DWORD *)v21 = *((_DWORD *)v15 + 12);
  *((_DWORD *)v21 + 2) = *((_DWORD *)v15 + 10);
  while ( 1 )
  {
LABEL_40:
    if ( v25 != 1 )
      goto LABEL_43;
    v28 = *(_DWORD *)(v10 + 56);
    if ( !v28 )
      goto LABEL_46;
    if ( v28 == 1 )
    {
LABEL_43:
      if ( v25 != 2 )
        goto LABEL_46;
    }
    if ( *(_DWORD *)(v10 + 56) == 4 )
      break;
LABEL_36:
    if ( *((_DWORD *)v15 + 10) - *((_DWORD *)v15 + 9) <= *((_DWORD *)v15 + 8) )
    {
      result = *((_QWORD *)a1 + 2);
      v29 = v10 + 24;
      goto LABEL_52;
    }
    *(_DWORD *)(v10 + 56) = 4;
    CalcTrackDragRect((struct tagSBTRACK *)v10);
    *(_QWORD *)(v10 + 48) = xxxTrackThumb;
    v26 = *((_DWORD *)v15 + 13);
    *((_DWORD *)v15 + 11) = v26;
    *(_DWORD *)(v10 + 76) = v26;
    v27 = *((_DWORD *)v15 + 3);
    *(_DWORD *)(v10 + 80) = v27;
    *(_DWORD *)(v10 + 84) = v27;
    *(_DWORD *)(v10 + 72) = *((_DWORD *)v15 + 11) - v22;
    xxxCapture(gptiCurrent, (__int64 *)a1, 3);
    result = *((_QWORD *)a1 + 2);
    if ( v10 == *(_QWORD *)(result + 632) )
    {
      if ( !*v12 )
        continue;
      xxxDoScroll(*(struct tagWND **)(v10 + 16), *v12, 5u, *(_DWORD *)(v10 + 80), (*(_DWORD *)v10 >> 1) & 1);
      result = *((_QWORD *)a1 + 2);
      if ( v10 == *(_QWORD *)(result + 632) )
        continue;
    }
    return result;
  }
  *(_DWORD *)(v10 + 72) = *((_DWORD *)v15 + 8) / -2;
LABEL_46:
  xxxCapture(gptiCurrent, (__int64 *)a1, 3);
  result = *((_QWORD *)a1 + 2);
  if ( v10 == *(_QWORD *)(result + 632) )
  {
    if ( *(_DWORD *)(v10 + 56) != 4 )
      *(_OWORD *)(v10 + 32) = v34;
    xxxSBTrackLoop(a1, a2, (struct tagSBCALC *)v15);
    result = *((_QWORD *)a1 + 2);
    v10 = *(_QWORD *)(result + 632);
    if ( v10 )
    {
      v29 = v10 + 24;
LABEL_52:
      *(_QWORD *)(result + 632) = 0LL;
      HMAssignmentUnlock(v29);
      HMAssignmentUnlock(v10 + 16);
      v18 = v10 + 8;
      goto LABEL_53;
    }
  }
  return result;
}
