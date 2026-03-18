/*
 * XREFs of InternalSetTimer @ 0x1C007A390
 * Callers:
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x1C00724A0 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 *     _SetSystemTimer @ 0x1C0079ECC (_SetSystemTimer.c)
 *     SetRITTimer @ 0x1C0079F80 (SetRITTimer.c)
 *     SetDeepDelayableVisRITTimer @ 0x1C007A148 (SetDeepDelayableVisRITTimer.c)
 *     NtUserSetTimer @ 0x1C007A190 (NtUserSetTimer.c)
 *     ?AdjustRITDelayableTimers@@YAXH@Z @ 0x1C00FF710 (-AdjustRITDelayableTimers@@YAXH@Z.c)
 *     _SetTimer @ 0x1C01E9C40 (_SetTimer.c)
 *     xxxSoundSentry @ 0x1C01EF4B0 (xxxSoundSentry.c)
 *     ?MNSetTimerToAutoDismiss@@YAXPEAUtagMENUSTATE@@PEAUtagWND@@@Z @ 0x1C02158C4 (-MNSetTimerToAutoDismiss@@YAXPEAUtagMENUSTATE@@PEAUtagWND@@@Z.c)
 *     ?MNSetTimerToOpenHierarchy@@YAIPEAUtagPOPUPMENU@@@Z @ 0x1C0215918 (-MNSetTimerToOpenHierarchy@@YAIPEAUtagPOPUPMENU@@@Z.c)
 *     MNSetTimerToCloseHierarchy @ 0x1C02166B0 (MNSetTimerToCloseHierarchy.c)
 *     UserSetTimer @ 0x1C0239108 (UserSetTimer.c)
 * Callees:
 *     ?SetDelayableTimer@@YAXKK@Z @ 0x1C007A79C (-SetDelayableTimer@@YAXKK@Z.c)
 *     ?DecTimerCount@@YAXPEAUtagTIMER@@@Z @ 0x1C007AA84 (-DecTimerCount@@YAXPEAUtagTIMER@@@Z.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall InternalSetTimer(__int64 a1, __int64 a2, unsigned int a3, __int64 a4, int a5, int a6)
{
  int v6; // r12d
  __int64 result; // rax
  unsigned int v10; // r13d
  __int64 v11; // rbx
  __int64 *ThreadWin32Thread; // rax
  __int64 v13; // r8
  __int64 v14; // rax
  unsigned int v15; // edi
  _QWORD **v16; // r14
  _QWORD *v17; // rsi
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
  unsigned int v28; // ecx
  unsigned int v29; // r8d
  unsigned int v30; // edx
  unsigned int v31; // eax
  int v32; // r10d
  unsigned int v33; // eax
  unsigned int v34; // edx
  unsigned int v35; // r8d
  __int64 v36; // [rsp+20h] [rbp-48h]
  __int64 v37; // [rsp+28h] [rbp-40h]
  _QWORD *v38; // [rsp+30h] [rbp-38h]

  v6 = a3;
  if ( gbCleanupInitiated )
    return 0LL;
  v10 = 0x7FFFFFFF;
  if ( a3 >= 0xA )
  {
    if ( a3 > 0x7FFFFFFF )
      v6 = 0x7FFFFFFF;
  }
  else
  {
    v6 = 10;
  }
  v11 = 0LL;
  v37 = 0LL;
  ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
  if ( ThreadWin32Thread )
  {
    v11 = *ThreadWin32Thread;
    v37 = *ThreadWin32Thread;
  }
  v14 = v11;
  v36 = v11;
  if ( !v11 || (a6 & 4) != 0 )
  {
    v14 = gptiRit;
    goto LABEL_14;
  }
  if ( a1 )
  {
    v14 = *(_QWORD *)(a1 + 16);
LABEL_14:
    v36 = v14;
  }
  if ( a5 == -1 || !a5 && v14 && (*(_QWORD *)(v14 + 576) & 0x800000000LL) != 0 )
    v15 = a6 & 0xFFFFFDFF;
  else
    v15 = a6 | 0x200;
  v16 = (_QWORD **)((char *)&gTimerHashTable + 16 * ((BYTE1(a1) + (unsigned __int8)a2) & 0x3F));
  v17 = *v16;
  if ( *v16 == v16 )
  {
LABEL_30:
    LOBYTE(v13) = 16;
    v20 = (_QWORD *)HMAllocObject(v36, 0LL, v13, 128LL);
    v38 = v20;
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
    v20[9] = gtmrListHead[0];
    v20[10] = gtmrListHead[0];
    if ( *(_QWORD *)(gtmrListHead[0] + 8LL) != gtmrListHead[0] )
      __fastfail(3u);
    *(_QWORD *)(gtmrListHead[0] + 8LL) = v20 + 9;
    gtmrListHead[0] = v20 + 9;
    v23 = (char *)(v20 + 14);
    v24 = (char *)&gTimerHashTable + 16 * ((BYTE1(a1) + (unsigned __int8)v20[12]) & 0x3F);
    v25 = (char **)*((_QWORD *)v24 + 1);
    v18[14] = v24;
    v18[15] = v25;
    if ( *v25 != v24 )
      __fastfail(3u);
    *v25 = v23;
    *((_QWORD *)v24 + 1) = v23;
  }
  else
  {
    while ( 1 )
    {
      v18 = v17 - 14;
      if ( *(v17 - 3) == a1 && v18[12] == a2 )
      {
        v19 = *((unsigned int *)v18 + 12);
        if ( (((unsigned __int8)v15 ^ *((_BYTE *)v18 + 48)) & 6) == 0
          && ((v19 & 0x40) != 0
           || PsGetCurrentProcessWin32Process(v19) == *(_QWORD *)(v18[3] + 384LL)
           || !a1 && (((unsigned __int8)v15 ^ *((_BYTE *)v18 + 48)) & 4) == 0) )
        {
          break;
        }
      }
      v17 = (_QWORD *)*v17;
      if ( v17 == v16 )
        goto LABEL_30;
    }
    v38 = v17 - 14;
    if ( (v18[6] & 1) != 0 )
      DecTimerCount((struct tagTIMER *)(v17 - 14));
  }
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
      v18[13] = v37;
  }
  else
  {
    v15 &= ~0x80u;
  }
  v27 = v18 + 6;
  *((_DWORD *)v18 + 12) = v15 | 8;
  v18[3] = v36;
  EtwTraceInternalSetTimer(v18);
  if ( !gbRITAlerted )
  {
    if ( !gbTimersProcActive )
    {
      v18 = v38;
      v28 = ((MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24) - gcmsLastTimer;
      if ( (*v27 & 0x200) != 0 )
      {
        v29 = *((_DWORD *)v38 + 11);
        v30 = gCurrentTimerCoalescingTolerance;
        v31 = gCurrentTimerCoalescingTolerance;
        v32 = *v26;
        if ( v29 > gCurrentTimerCoalescingTolerance )
          v31 = *((_DWORD *)v38 + 11);
        if ( v32 + v31 < 0x7FFFFFFF )
        {
          if ( v29 > gCurrentTimerCoalescingTolerance )
            v30 = *((_DWORD *)v38 + 11);
          v10 = v32 + v30;
        }
      }
      else
      {
        v10 = *v26;
      }
      v33 = gdmsNextTimer;
      if ( v28 > gdmsNextTimer )
        goto LABEL_74;
      v34 = guNextCoalescableTimerDue;
      if ( v28 > guNextCoalescableTimerDue )
        goto LABEL_74;
      v35 = v28 + v10;
      if ( v28 + v10 < v10 )
        goto LABEL_74;
      *v27 &= ~8u;
      *v26 += v28;
      if ( v33 > *v26 )
        goto LABEL_70;
      if ( v34 <= v35 )
      {
LABEL_74:
        if ( (*v27 & 8) != 0 )
        {
          gbRITAlerted = 1;
          KeAlertThread(gpkthreadRIT, 0LL);
        }
        goto LABEL_77;
      }
      if ( *v26 < v33 )
      {
LABEL_70:
        v33 = *v26;
        gdmsNextTimer = *v26;
      }
      if ( v34 >= v35 )
      {
        v34 = v28 + v10;
        guNextCoalescableTimerDue = v28 + v10;
      }
      SetDelayableTimer(v33 - v28, v34 - v28);
      goto LABEL_74;
    }
    gbRITRescan = 1;
  }
LABEL_77:
  result = v18[12];
  if ( !result )
    return 1LL;
  return result;
}
