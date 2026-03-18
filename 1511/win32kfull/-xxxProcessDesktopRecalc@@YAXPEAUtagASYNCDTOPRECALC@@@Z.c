/*
 * XREFs of ?xxxProcessDesktopRecalc@@YAXPEAUtagASYNCDTOPRECALC@@@Z @ 0x1C0090E2C
 * Callers:
 *     xxxProcessEventMessage @ 0x1C0063E9C (xxxProcessEventMessage.c)
 * Callees:
 *     xxxEndDeferWindowPosEx @ 0x1C0051394 (xxxEndDeferWindowPosEx.c)
 *     PushW32ThreadLock @ 0x1C0051990 (PushW32ThreadLock.c)
 *     _GetProp @ 0x1C00540EC (_GetProp.c)
 *     HMValidateHandleNoSecure @ 0x1C0055AB4 (HMValidateHandleNoSecure.c)
 *     InternalBeginDeferWindowPos @ 0x1C0075248 (InternalBeginDeferWindowPos.c)
 *     PopW32ThreadLock @ 0x1C00829E0 (PopW32ThreadLock.c)
 *     ComputeProposedPerMonRect @ 0x1C0090C88 (ComputeProposedPerMonRect.c)
 *     IsNonImmersiveBand @ 0x1C00910EC (IsNonImmersiveBand.c)
 *     xxxDeferWindowPosAndCheckPoint @ 0x1C0091108 (xxxDeferWindowPosAndCheckPoint.c)
 *     FindOldMonitor @ 0x1C00912EC (FindOldMonitor.c)
 *     xxxNotifyMonitorChanged @ 0x1C0091974 (xxxNotifyMonitorChanged.c)
 *     __security_check_cookie @ 0x1C01512D0 (__security_check_cookie.c)
 */

void __fastcall xxxProcessDesktopRecalc(struct tagASYNCDTOPRECALC *a1)
{
  struct tagSMWP *v2; // rdi
  int v3; // r15d
  char *v4; // r14
  unsigned __int64 v5; // r13
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // rsi
  __int64 v11; // rdx
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rax
  int v15; // edi
  unsigned __int64 *v16; // r14
  __int64 v17; // rsi
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 Prop; // [rsp+40h] [rbp-19h]
  _QWORD v21[3]; // [rsp+48h] [rbp-11h] BYREF
  _QWORD v22[3]; // [rsp+60h] [rbp+7h] BYREF
  struct tagRECT v23; // [rsp+78h] [rbp+1Fh] BYREF

  if ( a1 )
  {
    v2 = (struct tagSMWP *)InternalBeginDeferWindowPos(*((_DWORD *)a1 + 3));
    if ( v2 )
    {
      v3 = 0;
      if ( *((int *)a1 + 3) > 0 )
      {
        v4 = (char *)a1 + 16;
        do
        {
          v5 = *(_QWORD *)v4;
          v6 = HMValidateHandleNoSecure(*(_QWORD *)v4, 1);
          v10 = v6;
          if ( v6
            && *(char *)(v6 + 48) >= 0
            && (unsigned int)IsNonImmersiveBand(v6, v7, v8, v9)
            && *(_QWORD *)(v10 + 112) == *((_QWORD *)a1 + 3 * v3 + 3)
            && *(_QWORD *)(v10 + 120) == *((_QWORD *)a1 + 3 * v3 + 4) )
          {
            v11 = (unsigned __int16)atomCheckpointProp;
            v22[0] = *(_QWORD *)(gptiCurrent + 368LL);
            *(_QWORD *)(gptiCurrent + 368LL) = v22;
            v22[1] = v10;
            ++*(_DWORD *)(v10 + 8);
            Prop = GetProp(v10, v11, 1LL);
            if ( v2 )
            {
              PushW32ThreadLock((__int64)v2, v21, (__int64)DestroySMWP);
              v2 = (struct tagSMWP *)xxxDeferWindowPosAndCheckPoint(
                                       v2,
                                       v10,
                                       *(_QWORD *)a1,
                                       v10 + 112,
                                       Prop,
                                       *((_DWORD *)a1 + 2),
                                       0);
              if ( !v2 )
                PopW32ThreadLock(v21);
            }
            ThreadUnlock1(v13, v12);
            v14 = HMValidateHandleNoSecure(v5, 1);
            if ( v14
              && *(_DWORD *)(v14 + 344) == 2
              && (*(_DWORD *)(*(_QWORD *)(v14 + 16) + 568LL) & 0x2000000) == 0
              && (unsigned int)ComputeProposedPerMonRect(
                                 v14,
                                 *(struct tagMONITORRECTS **)a1,
                                 (struct tagRECT *)(v14 + 112),
                                 &v23) )
            {
              *(struct tagRECT *)(v4 + 8) = v23;
            }
            else
            {
              *(_QWORD *)v4 = 0LL;
            }
            if ( v2 )
              PopW32ThreadLock(v21);
          }
          ++v3;
          v4 += 24;
        }
        while ( v3 < *((_DWORD *)a1 + 3) );
      }
      if ( v2 )
        xxxEndDeferWindowPosEx(v2, 0);
    }
    v15 = 0;
    if ( *((int *)a1 + 3) > 0 )
    {
      v16 = (unsigned __int64 *)((char *)a1 + 16);
      do
      {
        if ( *v16 )
        {
          v17 = HMValidateHandleNoSecure(*v16, 1);
          if ( v17 )
          {
            v21[0] = *(_QWORD *)(gptiCurrent + 368LL);
            *(_QWORD *)(gptiCurrent + 368LL) = v21;
            v21[1] = v17;
            ++*(_DWORD *)(v17 + 8);
            FindOldMonitor(v17 + 112, *(_QWORD *)a1, *(unsigned int *)(v17 + 344));
            xxxNotifyMonitorChanged((struct tagWND *)v17);
            ThreadUnlock1(v19, v18);
          }
        }
        ++v15;
        v16 += 3;
      }
      while ( v15 < *((_DWORD *)a1 + 3) );
    }
    Win32FreePool(*(_QWORD *)a1);
    Win32FreePool(a1);
  }
}
