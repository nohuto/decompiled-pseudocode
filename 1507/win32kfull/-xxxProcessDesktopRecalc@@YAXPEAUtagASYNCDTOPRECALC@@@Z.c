/*
 * XREFs of ?xxxProcessDesktopRecalc@@YAXPEAUtagASYNCDTOPRECALC@@@Z @ 0x1C0045678
 * Callers:
 *     xxxProcessEventMessage @ 0x1C0071E4C (xxxProcessEventMessage.c)
 * Callees:
 *     ComputeProposedPerMonRect @ 0x1C0045040 (ComputeProposedPerMonRect.c)
 *     IsNonImmersiveBand @ 0x1C0045A6C (IsNonImmersiveBand.c)
 *     xxxDeferWindowPosAndCheckPoint @ 0x1C0045A88 (xxxDeferWindowPosAndCheckPoint.c)
 *     FindOldMonitor @ 0x1C0045C6C (FindOldMonitor.c)
 *     PopW32ThreadLock @ 0x1C005BC70 (PopW32ThreadLock.c)
 *     PushW32ThreadLock @ 0x1C0063490 (PushW32ThreadLock.c)
 *     xxxEndDeferWindowPosEx @ 0x1C00634F0 (xxxEndDeferWindowPosEx.c)
 *     _GetProp @ 0x1C006524C (_GetProp.c)
 *     HMValidateHandleNoSecure @ 0x1C0066B04 (HMValidateHandleNoSecure.c)
 *     xxxNotifyMonitorChanged @ 0x1C007E314 (xxxNotifyMonitorChanged.c)
 *     InternalBeginDeferWindowPos @ 0x1C008537C (InternalBeginDeferWindowPos.c)
 *     __security_check_cookie @ 0x1C015BB90 (__security_check_cookie.c)
 */

void __fastcall xxxProcessDesktopRecalc(struct tagASYNCDTOPRECALC *a1, __int64 a2)
{
  __int64 v3; // rdx
  struct tagSMWP *v4; // rdi
  int v5; // r15d
  char *v6; // r14
  __int64 v7; // r13
  __int64 v8; // rax
  __int64 v9; // r8
  __int64 v10; // rsi
  __int64 v11; // rdx
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rdx
  __int64 v15; // rax
  int v16; // edi
  _QWORD *v17; // r14
  __int64 v18; // rsi
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 Prop; // [rsp+40h] [rbp-19h]
  _QWORD v22[3]; // [rsp+48h] [rbp-11h] BYREF
  _QWORD v23[3]; // [rsp+60h] [rbp+7h] BYREF
  struct tagRECT v24; // [rsp+78h] [rbp+1Fh] BYREF

  if ( a1 )
  {
    v4 = (struct tagSMWP *)InternalBeginDeferWindowPos(*((unsigned int *)a1 + 3), a2);
    if ( v4 )
    {
      v5 = 0;
      if ( *((int *)a1 + 3) > 0 )
      {
        v6 = (char *)a1 + 16;
        do
        {
          v7 = *(_QWORD *)v6;
          LOBYTE(v3) = 1;
          v8 = HMValidateHandleNoSecure(*(_QWORD *)v6, v3);
          v10 = v8;
          if ( v8
            && *(char *)(v8 + 48) >= 0
            && (unsigned int)IsNonImmersiveBand(v8, v3, v9)
            && *(_QWORD *)(v10 + 112) == *((_QWORD *)a1 + 3 * v5 + 3)
            && *(_QWORD *)(v10 + 120) == *((_QWORD *)a1 + 3 * v5 + 4) )
          {
            v11 = (unsigned __int16)atomCheckpointProp;
            v23[0] = *(_QWORD *)(gptiCurrent + 376LL);
            *(_QWORD *)(gptiCurrent + 376LL) = v23;
            v23[1] = v10;
            ++*(_DWORD *)(v10 + 8);
            Prop = GetProp(v10, v11, 1LL);
            if ( v4 )
            {
              PushW32ThreadLock(v4, v22, DestroySMWP);
              v4 = (struct tagSMWP *)xxxDeferWindowPosAndCheckPoint(
                                       v4,
                                       v10,
                                       *(_QWORD *)a1,
                                       v10 + 112,
                                       Prop,
                                       *((_DWORD *)a1 + 2),
                                       0);
              if ( !v4 )
                PopW32ThreadLock(v22);
            }
            ThreadUnlock1(v13, v12);
            LOBYTE(v14) = 1;
            v15 = HMValidateHandleNoSecure(v7, v14);
            if ( v15
              && *(_DWORD *)(v15 + 344) == 2
              && (*(_DWORD *)(*(_QWORD *)(v15 + 16) + 576LL) & 0x2000000) == 0
              && (unsigned int)ComputeProposedPerMonRect(
                                 v15,
                                 *(struct tagMONITORRECTS **)a1,
                                 (struct tagRECT *)(v15 + 112),
                                 &v24) )
            {
              *(struct tagRECT *)(v6 + 8) = v24;
            }
            else
            {
              *(_QWORD *)v6 = 0LL;
            }
            if ( v4 )
              PopW32ThreadLock(v22);
          }
          ++v5;
          v6 += 24;
        }
        while ( v5 < *((_DWORD *)a1 + 3) );
      }
      if ( v4 )
        xxxEndDeferWindowPosEx(v4);
    }
    v16 = 0;
    if ( *((int *)a1 + 3) > 0 )
    {
      v17 = (_QWORD *)((char *)a1 + 16);
      do
      {
        if ( *v17 )
        {
          LOBYTE(v3) = 1;
          v18 = HMValidateHandleNoSecure(*v17, v3);
          if ( v18 )
          {
            v22[0] = *(_QWORD *)(gptiCurrent + 376LL);
            *(_QWORD *)(gptiCurrent + 376LL) = v22;
            v22[1] = v18;
            ++*(_DWORD *)(v18 + 8);
            FindOldMonitor(v18 + 112, *(_QWORD *)a1, *(unsigned int *)(v18 + 344));
            xxxNotifyMonitorChanged((struct tagWND *)v18);
            ThreadUnlock1(v20, v19);
          }
        }
        ++v16;
        v17 += 3;
      }
      while ( v16 < *((_DWORD *)a1 + 3) );
    }
    Win32FreePool(*(_QWORD *)a1);
    Win32FreePool(a1);
  }
}
