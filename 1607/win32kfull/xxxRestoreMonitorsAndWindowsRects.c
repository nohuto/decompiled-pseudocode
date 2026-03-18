/*
 * XREFs of xxxRestoreMonitorsAndWindowsRects @ 0x1C01CF26C
 * Callers:
 *     xxxRestoreDesktopsMonitorsAndWindowsRects @ 0x1C01541F8 (xxxRestoreDesktopsMonitorsAndWindowsRects.c)
 * Callees:
 *     PopW32ThreadLock @ 0x1C006FA40 (PopW32ThreadLock.c)
 *     xxxEndDeferWindowPosEx @ 0x1C0078230 (xxxEndDeferWindowPosEx.c)
 *     HMValidateHandleNoSecure @ 0x1C007A3E8 (HMValidateHandleNoSecure.c)
 *     PushW32ThreadLock @ 0x1C009F990 (PushW32ThreadLock.c)
 *     InternalBeginDeferWindowPos @ 0x1C00A6808 (InternalBeginDeferWindowPos.c)
 *     IsNonImmersiveBand @ 0x1C00AC030 (IsNonImmersiveBand.c)
 *     xxxDeferWindowPosAndCheckPoint @ 0x1C00AC04C (xxxDeferWindowPosAndCheckPoint.c)
 *     SnapshotMonitorRects @ 0x1C012C970 (SnapshotMonitorRects.c)
 */

__int64 __fastcall xxxRestoreMonitorsAndWindowsRects(__int64 a1, __int64 a2)
{
  char *v4; // rax
  __int64 v5; // r8
  int *v6; // r9
  unsigned int v7; // ebx
  __int64 v8; // rdx
  int v9; // r11d
  __int64 v10; // rbp
  __int64 v11; // rsi
  struct tagMONITORRECTS *v12; // r15
  struct tagSMWP *v13; // rax
  __int64 v14; // r9
  struct tagSMWP *v15; // rsi
  __int64 v16; // rdx
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 v19; // rbp
  int i; // r14d
  __int64 v21; // rax
  __int64 v22; // rcx
  __int64 v23; // r10
  struct tagRECT *v24; // rax
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  _QWORD v28[3]; // [rsp+40h] [rbp-48h] BYREF
  _QWORD v29[3]; // [rsp+58h] [rbp-30h] BYREF

  if ( *(_QWORD *)(a1 + 40) != a2 || *(_DWORD *)(gpDispInfo + 80LL) <= 1u )
    return 0LL;
  if ( *(_QWORD *)(a1 + 16) && *(_QWORD *)(a1 + 24) )
  {
    v4 = SnapshotMonitorRects();
    if ( !v4 )
      return (unsigned int)-1073741801;
    v6 = *(int **)(a1 + 16);
    v7 = 0;
    v8 = 0LL;
    if ( *v6 > 0 )
    {
      v9 = *(_DWORD *)v4;
      while ( 1 )
      {
        v5 = 0LL;
        if ( v9 <= 0 )
          break;
        v10 = 28LL * (int)v8;
        while ( 1 )
        {
          v11 = 112LL * (int)v5;
          if ( *(_QWORD *)&v6[v10 + 2] == *(_QWORD *)&v4[v11 + 8] && *(_QWORD *)&v6[v10 + 4] == *(_QWORD *)&v4[v11 + 16] )
            break;
          v5 = (unsigned int)(v5 + 1);
          if ( (int)v5 >= v9 )
            goto LABEL_14;
        }
        v8 = (unsigned int)(v8 + 1);
        if ( (int)v8 >= *v6 )
          goto LABEL_15;
      }
LABEL_14:
      v7 = -1073741823;
    }
LABEL_15:
    Win32FreePool(v4, v8, v5);
    v12 = *(struct tagMONITORRECTS **)(a1 + 16);
    if ( (v7 & 0x80000000) != 0 )
      return v7;
    v13 = (struct tagSMWP *)InternalBeginDeferWindowPos(*(_DWORD *)(a1 + 32));
    v15 = v13;
    if ( !v13 )
      return v7;
    PushW32ThreadLock((__int64)v13, v29, (__int64)DestroySMWP, v14);
    v19 = *(_QWORD *)(a1 + 24);
    for ( i = 0; i < *(_DWORD *)(a1 + 32); v19 += 48LL )
    {
      if ( !v15 )
        break;
      LOBYTE(v16) = 1;
      v21 = HMValidateHandleNoSecure(*(_QWORD *)(v19 + 40), v16, v17, v18);
      if ( v21
        && *(char *)(v21 + 48) >= 0
        && IsNonImmersiveBand(v21)
        && (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v22 + 16) + 376LL) + 768LL) & 0x30) != 0x10 )
      {
        v28[0] = *(_QWORD *)(gptiCurrent + 368LL);
        *(_QWORD *)(gptiCurrent + 368LL) = v28;
        v28[1] = v23;
        ++*(_DWORD *)(v23 + 8);
        if ( (*(_DWORD *)(v19 + 32) & 1) != 0 )
          v24 = (struct tagRECT *)(v19 + 16);
        else
          v24 = 0LL;
        v15 = (struct tagSMWP *)xxxDeferWindowPosAndCheckPoint(
                                  (__int64)v15,
                                  v23,
                                  v12,
                                  (struct tagRECT *)v19,
                                  v24,
                                  20,
                                  1);
        ThreadUnlock1(v26, v25);
      }
      ++i;
    }
    PopW32ThreadLock(v29, v16, v17, v18);
    if ( v15 )
      xxxEndDeferWindowPosEx(v15, 1LL, v27);
    else
      return (unsigned int)-1073741801;
  }
  else
  {
    return (unsigned int)-1073741823;
  }
  return v7;
}
