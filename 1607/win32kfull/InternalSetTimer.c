/*
 * XREFs of InternalSetTimer @ 0x1C005E280
 * Callers:
 *     SetDeepDelayableVisRITTimer @ 0x1C005E060 (SetDeepDelayableVisRITTimer.c)
 *     NtUserSetTimer @ 0x1C005E0A0 (NtUserSetTimer.c)
 *     SetRITTimer @ 0x1C005F490 (SetRITTimer.c)
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x1C0088F70 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 *     _SetSystemTimer @ 0x1C00ABC2C (_SetSystemTimer.c)
 *     ?AdjustRITDelayableTimers@@YAXH@Z @ 0x1C012D248 (-AdjustRITDelayableTimers@@YAXH@Z.c)
 *     xxxSoundSentry @ 0x1C01357C8 (xxxSoundSentry.c)
 *     _SetTimer @ 0x1C01E0CD0 (_SetTimer.c)
 *     ?MNSetTimerToAutoDismiss@@YAXPEAUtagMENUSTATE@@PEAUtagWND@@@Z @ 0x1C020E5DC (-MNSetTimerToAutoDismiss@@YAXPEAUtagMENUSTATE@@PEAUtagWND@@@Z.c)
 *     ?MNSetTimerToOpenHierarchy@@YAIPEAUtagPOPUPMENU@@@Z @ 0x1C020E630 (-MNSetTimerToOpenHierarchy@@YAIPEAUtagPOPUPMENU@@@Z.c)
 *     MNSetTimerToCloseHierarchy @ 0x1C020F0B0 (MNSetTimerToCloseHierarchy.c)
 *     UserSetTimer @ 0x1C0231578 (UserSetTimer.c)
 * Callees:
 *     ?SetDelayableTimer@@YAXKK@Z @ 0x1C005E6C0 (-SetDelayableTimer@@YAXKK@Z.c)
 *     ?DecTimerCount@@YAXPEAUtagTIMER@@@Z @ 0x1C00ECF9C (-DecTimerCount@@YAXPEAUtagTIMER@@@Z.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall InternalSetTimer(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5, int a6)
{
  unsigned int v6; // r12d
  struct _KTHREAD *CurrentThread; // rcx
  __int64 v10; // rbx
  __int64 *ThreadWin32Thread; // rax
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // r13
  unsigned int v15; // edi
  _QWORD **v16; // rsi
  _QWORD *i; // r15
  _QWORD *v18; // rbx
  __int64 v19; // rcx
  _QWORD *v20; // rsi
  _DWORD *v21; // r14
  unsigned int v22; // r10d
  unsigned int v23; // ecx
  unsigned int v24; // r8d
  unsigned int v25; // edx
  unsigned int v26; // eax
  unsigned int v27; // eax
  unsigned int v28; // edx
  unsigned int v29; // r8d
  unsigned int v30; // r9d
  __int64 result; // rax
  _QWORD *v32; // rax
  _QWORD *v33; // rdx
  char *v34; // rcx
  char *v35; // rax
  char **v36; // rdx
  signed int v37; // ecx
  int v38; // edx
  _QWORD *v39; // [rsp+20h] [rbp-58h]
  __int64 v40; // [rsp+28h] [rbp-50h]

  v6 = a3;
  if ( !gbCleanupInitiated )
  {
    CurrentThread = KeGetCurrentThread();
    if ( (unsigned int)a3 < 0xA )
      v6 = 10;
    if ( v6 > 0x7FFFFFFF )
      v6 = 0x7FFFFFFF;
    v10 = 0LL;
    v40 = 0LL;
    ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread, a2, a3, a4);
    if ( ThreadWin32Thread )
    {
      v10 = *ThreadWin32Thread;
      v40 = *ThreadWin32Thread;
    }
    v14 = v10;
    if ( !v10 || (a6 & 4) != 0 )
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
           || PsGetCurrentProcessWin32Process(v19, v12) == *(_QWORD *)(v18[3] + 376LL)
           || !a1 && (((unsigned __int8)v15 ^ *((_BYTE *)v18 + 48)) & 4) == 0) )
        {
          v39 = i - 14;
          if ( (v18[6] & 1) != 0 )
            DecTimerCount((struct tagTIMER *)(i - 14));
          goto LABEL_26;
        }
      }
    }
    LOBYTE(v13) = 16;
    v32 = (_QWORD *)HMAllocObject(v14, 0LL, v13);
    v39 = v32;
    v18 = v32;
    if ( !v32 )
      return 0LL;
    v32[11] = 0LL;
    if ( a1 )
    {
      v32[12] = a2;
LABEL_54:
      v33 = v32 + 9;
      if ( *(_QWORD *)(gtmrListHead + 8LL) != gtmrListHead )
        __fastfail(3u);
      v32[10] = gtmrListHead;
      *v33 = gtmrListHead;
      *(_QWORD *)(gtmrListHead + 8LL) = v33;
      v34 = (char *)(v32 + 14);
      gtmrListHead = v32 + 9;
      v35 = (char *)&gTimerHashTable + 16 * ((BYTE1(a1) + (unsigned __int8)v32[12]) & 0x3F);
      v36 = (char **)*((_QWORD *)v35 + 1);
      if ( *v36 != v35 )
        __fastfail(3u);
      *(_QWORD *)v34 = v35;
      v18[15] = v36;
      *v36 = v34;
      *((_QWORD *)v35 + 1) = v34;
LABEL_26:
      HMAssignmentLock(v18 + 11, a1);
      *((_DWORD *)v18 + 10) = v6;
      *((_DWORD *)v18 + 13) = v6;
      v18[4] = a4;
      v18[13] = 0LL;
      if ( (v15 & 0x200) != 0 )
        *((_DWORD *)v18 + 11) = a5;
      v20 = v39;
      *((_DWORD *)v39 + 32) = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
      if ( (v15 & 0x80u) != 0 )
      {
        v15 &= ~0x80u;
      }
      else if ( (v15 & 0x100) != 0 )
      {
        v18[13] = v40;
      }
      v21 = v39 + 6;
      *((_DWORD *)v39 + 12) = v15 | 8;
      v39[3] = v14;
      EtwTraceInternalSetTimer(v39);
      if ( !gbRITAlerted )
      {
        if ( !gbTimersProcActive )
        {
          v20 = v39;
          v22 = *((_DWORD *)v18 + 13);
          v23 = ((MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24) - gcmsLastTimer;
          if ( (*v21 & 0x200) != 0 )
          {
            v24 = *((_DWORD *)v39 + 11);
            v25 = gCurrentTimerCoalescingTolerance;
            v26 = gCurrentTimerCoalescingTolerance;
            if ( v24 > gCurrentTimerCoalescingTolerance )
              v26 = *((_DWORD *)v39 + 11);
            if ( v22 + v26 >= 0x7FFFFFFF )
            {
              v22 = 0x7FFFFFFF;
            }
            else
            {
              if ( v24 > gCurrentTimerCoalescingTolerance )
                v25 = *((_DWORD *)v39 + 11);
              v22 += v25;
            }
          }
          v27 = gdmsNextTimer;
          if ( v23 > gdmsNextTimer )
            goto LABEL_45;
          v28 = guNextCoalescableTimerDue;
          if ( v23 > guNextCoalescableTimerDue )
            goto LABEL_45;
          v29 = v22 + v23;
          if ( v22 + v23 < v22 )
            goto LABEL_45;
          *v21 &= ~8u;
          *((_DWORD *)v18 + 13) += v23;
          v30 = *((_DWORD *)v18 + 13);
          if ( v27 > v30 )
            goto LABEL_59;
          if ( v28 <= v29 )
          {
LABEL_45:
            if ( (*v21 & 8) != 0 )
            {
              gbRITAlerted = 1;
              KeAlertThread(gpkthreadRIT, 0LL);
            }
            goto LABEL_47;
          }
          if ( v30 < v27 )
          {
LABEL_59:
            v27 = *((_DWORD *)v18 + 13);
            gdmsNextTimer = v27;
          }
          if ( v28 >= v29 )
          {
            v28 = v22 + v23;
            guNextCoalescableTimerDue = v22 + v23;
          }
          SetDelayableTimer(v27 - v23, v28 - v23);
          goto LABEL_45;
        }
        gbRITRescan = 1;
      }
LABEL_47:
      result = v20[12];
      if ( !result )
        return 1LL;
      return result;
    }
    v37 = g_cTimerId;
    v38 = g_cTimerId;
    do
    {
      g_cTimerId = --v37;
      if ( v37 < 0 )
      {
        v37 = 32511;
        g_cTimerId = 32511;
      }
      if ( !_bittestandset(gTimerId, v37) )
      {
        v32[12] = v37 + 256;
        goto LABEL_54;
      }
    }
    while ( v37 != v38 );
    HMFreeObject(v32);
  }
  return 0LL;
}
