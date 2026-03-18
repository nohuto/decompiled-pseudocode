/*
 * XREFs of InternalSetTimer @ 0x1C004A670
 * Callers:
 *     NtUserSetTimer @ 0x1C004A550 (NtUserSetTimer.c)
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x1C0061810 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 *     _SetSystemTimer @ 0x1C00CA594 (_SetSystemTimer.c)
 *     SetDeepDelayableVisRITTimer @ 0x1C00EBA94 (SetDeepDelayableVisRITTimer.c)
 *     SetRITTimer @ 0x1C00F4780 (SetRITTimer.c)
 *     ?AdjustRITDelayableTimers@@YAXH@Z @ 0x1C010B110 (-AdjustRITDelayableTimers@@YAXH@Z.c)
 *     xxxSoundSentry @ 0x1C01144E8 (xxxSoundSentry.c)
 *     _SetTimer @ 0x1C01EA450 (_SetTimer.c)
 *     ?MNSetTimerToAutoDismiss@@YAXPEAUtagMENUSTATE@@PEAUtagWND@@@Z @ 0x1C0215774 (-MNSetTimerToAutoDismiss@@YAXPEAUtagMENUSTATE@@PEAUtagWND@@@Z.c)
 *     ?MNSetTimerToOpenHierarchy@@YAIPEAUtagPOPUPMENU@@@Z @ 0x1C02157C8 (-MNSetTimerToOpenHierarchy@@YAIPEAUtagPOPUPMENU@@@Z.c)
 *     MNSetTimerToCloseHierarchy @ 0x1C0216514 (MNSetTimerToCloseHierarchy.c)
 *     UserSetTimer @ 0x1C023951C (UserSetTimer.c)
 * Callees:
 *     ?DecTimerCount@@YAXPEAUtagTIMER@@@Z @ 0x1C00FB184 (-DecTimerCount@@YAXPEAUtagTIMER@@@Z.c)
 *     ?SetDelayableTimer@@YAXKK@Z @ 0x1C010BF9C (-SetDelayableTimer@@YAXKK@Z.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall InternalSetTimer(__int64 a1, __int64 a2, unsigned int a3, __int64 a4, int a5, int a6)
{
  unsigned int v6; // r12d
  __int64 result; // rax
  struct _KTHREAD *CurrentThread; // rcx
  __int64 v11; // rbx
  __int64 *ThreadWin32Thread; // rax
  __int64 v13; // r8
  __int64 v14; // r13
  unsigned int v15; // edi
  _QWORD **v16; // rsi
  _QWORD *i; // r15
  _QWORD *v18; // rbx
  __int64 v19; // rcx
  _QWORD *v20; // rax
  signed int v21; // ecx
  int v22; // edx
  char *v23; // rcx
  char *v24; // rax
  char **v25; // rdx
  unsigned int *v26; // rsi
  _DWORD *v27; // r14
  unsigned int v28; // r10d
  unsigned int v29; // ecx
  unsigned int v30; // r8d
  unsigned int v31; // edx
  unsigned int v32; // eax
  unsigned int v33; // eax
  unsigned int v34; // edx
  unsigned int v35; // r8d
  __int64 v36; // [rsp+20h] [rbp-58h]
  _QWORD *v37; // [rsp+28h] [rbp-50h]

  v6 = a3;
  if ( gbCleanupInitiated )
    return 0LL;
  CurrentThread = KeGetCurrentThread();
  if ( a3 < 0xA )
    v6 = 10;
  if ( v6 > 0x7FFFFFFF )
    v6 = 0x7FFFFFFF;
  v11 = 0LL;
  v36 = 0LL;
  ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
  if ( ThreadWin32Thread )
  {
    v11 = *ThreadWin32Thread;
    v36 = *ThreadWin32Thread;
  }
  v14 = v11;
  if ( !v11 || (a6 & 4) != 0 )
  {
    v14 = gptiRit;
  }
  else if ( a1 )
  {
    v14 = *(_QWORD *)(a1 + 16);
  }
  if ( a5 == -1 || !a5 && v14 && (*(_QWORD *)(v14 + 568) & 0x800000000LL) != 0 )
    v15 = a6 & 0xFFFFFDFF;
  else
    v15 = a6 | 0x200;
  v16 = (_QWORD **)((char *)&gTimerHashTable + 16 * ((BYTE1(a1) + (unsigned __int8)a2) & 0x3F));
  for ( i = *v16; i != v16; i = (_QWORD *)*i )
  {
    v18 = i - 14;
    if ( *(i - 3) == a1 && v18[12] == a2 )
    {
      v19 = *((unsigned int *)v18 + 12);
      if ( (((unsigned __int8)v15 ^ *((_BYTE *)v18 + 48)) & 6) == 0
        && ((v19 & 0x40) != 0
         || PsGetCurrentProcessWin32Process(v19) == *(_QWORD *)(v18[3] + 376LL)
         || !a1 && (((unsigned __int8)v15 ^ *((_BYTE *)v18 + 48)) & 4) == 0) )
      {
        v37 = i - 14;
        if ( (v18[6] & 1) != 0 )
          DecTimerCount((struct tagTIMER *)(i - 14));
        goto LABEL_47;
      }
    }
  }
  LOBYTE(v13) = 16;
  v20 = (_QWORD *)HMAllocObject(v14, 0LL, v13);
  v37 = v20;
  v18 = v20;
  if ( !v20 )
    return 0LL;
  v20[11] = 0LL;
  if ( a1 )
  {
    v20[12] = a2;
  }
  else
  {
    v21 = g_cTimerId;
    v22 = g_cTimerId;
    while ( 1 )
    {
      g_cTimerId = --v21;
      if ( v21 < 0 )
      {
        v21 = 32511;
        g_cTimerId = 32511;
      }
      if ( !_bittestandset(gTimerId, v21) )
        break;
      if ( v21 == v22 )
      {
        HMFreeObject(v20);
        return 0LL;
      }
    }
    v20[12] = v21 + 256;
  }
  v20[9] = gtmrListHead;
  v20[10] = gtmrListHead;
  if ( *(_QWORD *)(gtmrListHead + 8LL) != gtmrListHead )
    __fastfail(3u);
  *(_QWORD *)(gtmrListHead + 8LL) = v20 + 9;
  gtmrListHead = v20 + 9;
  v23 = (char *)(v20 + 14);
  v24 = (char *)&gTimerHashTable + 16 * ((BYTE1(a1) + (unsigned __int8)v20[12]) & 0x3F);
  v25 = (char **)*((_QWORD *)v24 + 1);
  v18[14] = v24;
  v18[15] = v25;
  if ( *v25 != v24 )
    __fastfail(3u);
  *v25 = v23;
  *((_QWORD *)v24 + 1) = v23;
LABEL_47:
  HMAssignmentLock(v18 + 11, a1);
  v26 = (unsigned int *)v18 + 13;
  *((_DWORD *)v18 + 10) = v6;
  *((_DWORD *)v18 + 13) = v6;
  v18[4] = a4;
  v18[13] = 0LL;
  if ( (v15 & 0x200) != 0 )
    *((_DWORD *)v18 + 11) = a5;
  if ( (v15 & 0x80u) == 0 )
  {
    if ( (v15 & 0x100) != 0 )
      v18[13] = v36;
  }
  else
  {
    v15 &= ~0x80u;
  }
  v27 = v18 + 6;
  *((_DWORD *)v18 + 12) = v15 | 8;
  v18[3] = v14;
  EtwTraceInternalSetTimer(v18);
  if ( !gbRITAlerted )
  {
    if ( !gbTimersProcActive )
    {
      v18 = v37;
      v28 = *v26;
      v29 = ((MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24) - gcmsLastTimer;
      if ( (*v27 & 0x200) != 0 )
      {
        v30 = *((_DWORD *)v37 + 11);
        v31 = gCurrentTimerCoalescingTolerance;
        v32 = gCurrentTimerCoalescingTolerance;
        if ( v30 > gCurrentTimerCoalescingTolerance )
          v32 = *((_DWORD *)v37 + 11);
        if ( v28 + v32 >= 0x7FFFFFFF )
        {
          v28 = 0x7FFFFFFF;
        }
        else
        {
          if ( v30 > gCurrentTimerCoalescingTolerance )
            v31 = *((_DWORD *)v37 + 11);
          v28 += v31;
        }
      }
      v33 = gdmsNextTimer;
      if ( v29 > gdmsNextTimer )
        goto LABEL_73;
      v34 = guNextCoalescableTimerDue;
      if ( v29 > guNextCoalescableTimerDue )
        goto LABEL_73;
      v35 = v28 + v29;
      if ( v28 + v29 < v28 )
        goto LABEL_73;
      *v27 &= ~8u;
      *v26 += v29;
      if ( v33 > *v26 )
        goto LABEL_69;
      if ( v34 <= v35 )
      {
LABEL_73:
        if ( (*v27 & 8) != 0 )
        {
          gbRITAlerted = 1;
          KeAlertThread(gpkthreadRIT, 0LL);
        }
        goto LABEL_76;
      }
      if ( *v26 < v33 )
      {
LABEL_69:
        v33 = *v26;
        gdmsNextTimer = *v26;
      }
      if ( v34 >= v35 )
      {
        v34 = v28 + v29;
        guNextCoalescableTimerDue = v28 + v29;
      }
      SetDelayableTimer(v33 - v29, v34 - v29);
      goto LABEL_73;
    }
    gbRITRescan = 1;
  }
LABEL_76:
  result = v18[12];
  if ( !result )
    return 1LL;
  return result;
}
