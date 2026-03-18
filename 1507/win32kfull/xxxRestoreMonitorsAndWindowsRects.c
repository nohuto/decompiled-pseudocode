/*
 * XREFs of xxxRestoreMonitorsAndWindowsRects @ 0x1C01D6784
 * Callers:
 *     xxxRestoreDesktopsMonitorsAndWindowsRects @ 0x1C012EC2C (xxxRestoreDesktopsMonitorsAndWindowsRects.c)
 * Callees:
 *     SnapshotMonitorRects @ 0x1C0038D80 (SnapshotMonitorRects.c)
 *     IsNonImmersiveBand @ 0x1C0045A6C (IsNonImmersiveBand.c)
 *     xxxDeferWindowPosAndCheckPoint @ 0x1C0045A88 (xxxDeferWindowPosAndCheckPoint.c)
 *     PopW32ThreadLock @ 0x1C005BC70 (PopW32ThreadLock.c)
 *     PushW32ThreadLock @ 0x1C0063490 (PushW32ThreadLock.c)
 *     xxxEndDeferWindowPosEx @ 0x1C00634F0 (xxxEndDeferWindowPosEx.c)
 *     HMValidateHandleNoSecure @ 0x1C0066B04 (HMValidateHandleNoSecure.c)
 *     InternalBeginDeferWindowPos @ 0x1C008537C (InternalBeginDeferWindowPos.c)
 */

__int64 __fastcall xxxRestoreMonitorsAndWindowsRects(__int64 a1, __int64 a2)
{
  char *v4; // rax
  int *v5; // r9
  unsigned int v6; // ebx
  int v7; // edx
  int v8; // r11d
  int v9; // r8d
  __int64 v10; // rbp
  __int64 v11; // rsi
  struct tagMONITORRECTS *v12; // r15
  struct tagSMWP *v13; // rax
  struct tagSMWP *v14; // rsi
  __int64 v15; // rbp
  int i; // r14d
  __int64 v17; // rax
  __int64 v18; // rcx
  __int64 v19; // r10
  struct tagRECT *v20; // rax
  __int64 v21; // rdx
  __int64 v22; // rcx
  _QWORD v23[3]; // [rsp+40h] [rbp-48h] BYREF
  _QWORD v24[3]; // [rsp+58h] [rbp-30h] BYREF

  if ( *(_QWORD *)(a1 + 40) != a2 || *(_DWORD *)(gpDispInfo + 80LL) <= 1u )
    return 0LL;
  if ( *(_QWORD *)(a1 + 16) && *(_QWORD *)(a1 + 24) )
  {
    v4 = SnapshotMonitorRects();
    if ( !v4 )
      return (unsigned int)-1073741801;
    v5 = *(int **)(a1 + 16);
    v6 = 0;
    v7 = 0;
    if ( *v5 > 0 )
    {
      v8 = *(_DWORD *)v4;
      while ( 1 )
      {
        v9 = 0;
        if ( v8 <= 0 )
          break;
        v10 = 28LL * v7;
        while ( 1 )
        {
          v11 = 112LL * v9;
          if ( *(_QWORD *)&v5[v10 + 2] == *(_QWORD *)&v4[v11 + 8] && *(_QWORD *)&v5[v10 + 4] == *(_QWORD *)&v4[v11 + 16] )
            break;
          if ( ++v9 >= v8 )
            goto LABEL_14;
        }
        if ( ++v7 >= *v5 )
          goto LABEL_15;
      }
LABEL_14:
      v6 = -1073741823;
    }
LABEL_15:
    Win32FreePool(v4);
    v12 = *(struct tagMONITORRECTS **)(a1 + 16);
    if ( (v6 & 0x80000000) != 0 )
      return v6;
    v13 = (struct tagSMWP *)InternalBeginDeferWindowPos(*(_DWORD *)(a1 + 32));
    v14 = v13;
    if ( !v13 )
      return v6;
    PushW32ThreadLock((__int64)v13, v24, (__int64)DestroySMWP);
    v15 = *(_QWORD *)(a1 + 24);
    for ( i = 0; i < *(_DWORD *)(a1 + 32); v15 += 48LL )
    {
      if ( !v14 )
        break;
      v17 = HMValidateHandleNoSecure(*(_QWORD *)(v15 + 40), 1);
      if ( v17
        && *(char *)(v17 + 48) >= 0
        && IsNonImmersiveBand(v17)
        && (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v18 + 16) + 384LL) + 776LL) & 0x30) != 0x10 )
      {
        v23[0] = *(_QWORD *)(gptiCurrent + 376LL);
        *(_QWORD *)(gptiCurrent + 376LL) = v23;
        v23[1] = v19;
        ++*(_DWORD *)(v19 + 8);
        if ( (*(_DWORD *)(v15 + 32) & 1) != 0 )
          v20 = (struct tagRECT *)(v15 + 16);
        else
          v20 = 0LL;
        v14 = (struct tagSMWP *)xxxDeferWindowPosAndCheckPoint(
                                  (__int64)v14,
                                  v19,
                                  v12,
                                  (struct tagRECT *)v15,
                                  v20,
                                  20,
                                  1);
        ThreadUnlock1(v22, v21);
      }
      ++i;
    }
    PopW32ThreadLock(v24);
    if ( v14 )
      xxxEndDeferWindowPosEx(v14, 1);
    else
      return (unsigned int)-1073741801;
  }
  else
  {
    return (unsigned int)-1073741823;
  }
  return v6;
}
