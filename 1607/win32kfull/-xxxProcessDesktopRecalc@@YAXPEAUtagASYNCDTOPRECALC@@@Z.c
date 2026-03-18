/*
 * XREFs of ?xxxProcessDesktopRecalc@@YAXPEAUtagASYNCDTOPRECALC@@@Z @ 0x1C00ABD4C
 * Callers:
 *     xxxProcessEventMessage @ 0x1C00889B8 (xxxProcessEventMessage.c)
 * Callees:
 *     PopW32ThreadLock @ 0x1C006FA40 (PopW32ThreadLock.c)
 *     xxxEndDeferWindowPosEx @ 0x1C0078230 (xxxEndDeferWindowPosEx.c)
 *     HMValidateHandleNoSecure @ 0x1C007A3E8 (HMValidateHandleNoSecure.c)
 *     _GetProp @ 0x1C007AFEC (_GetProp.c)
 *     PushW32ThreadLock @ 0x1C009F990 (PushW32ThreadLock.c)
 *     InternalBeginDeferWindowPos @ 0x1C00A6808 (InternalBeginDeferWindowPos.c)
 *     ComputeProposedPerMonRect @ 0x1C00ABCDC (ComputeProposedPerMonRect.c)
 *     IsNonImmersiveBand @ 0x1C00AC030 (IsNonImmersiveBand.c)
 *     xxxDeferWindowPosAndCheckPoint @ 0x1C00AC04C (xxxDeferWindowPosAndCheckPoint.c)
 *     FindOldMonitor @ 0x1C00AC84C (FindOldMonitor.c)
 *     xxxNotifyMonitorChanged @ 0x1C00AEA64 (xxxNotifyMonitorChanged.c)
 *     __security_check_cookie @ 0x1C0158CD0 (__security_check_cookie.c)
 */

void __fastcall xxxProcessDesktopRecalc(struct tagASYNCDTOPRECALC *a1)
{
  __int64 v2; // rdx
  struct tagSMWP *v3; // rsi
  __int64 v4; // r8
  __int64 v5; // r9
  int v6; // r15d
  char *v7; // r14
  unsigned __int64 v8; // r13
  __int64 v9; // rax
  __int64 v10; // rdi
  __int64 v11; // rdx
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r9
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // rdx
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 v20; // rax
  __int64 v21; // rdi
  int v22; // esi
  unsigned __int64 *v23; // r14
  __int64 v24; // rdi
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // rdx
  __int64 v28; // r8
  __int64 Prop; // [rsp+40h] [rbp-19h]
  __int64 v30; // [rsp+48h] [rbp-11h] BYREF
  __int64 v31; // [rsp+50h] [rbp-9h]
  _QWORD v32[3]; // [rsp+60h] [rbp+7h] BYREF
  struct tagRECT v33; // [rsp+78h] [rbp+1Fh] BYREF

  if ( a1 )
  {
    v3 = (struct tagSMWP *)InternalBeginDeferWindowPos(*((_DWORD *)a1 + 3));
    if ( v3 )
    {
      v6 = 0;
      if ( *((int *)a1 + 3) > 0 )
      {
        v7 = (char *)a1 + 16;
        do
        {
          v8 = *(_QWORD *)v7;
          LOBYTE(v2) = 1;
          v9 = HMValidateHandleNoSecure(*(_QWORD *)v7, v2, v4, v5);
          v10 = v9;
          if ( v9
            && *(char *)(v9 + 48) >= 0
            && (unsigned int)IsNonImmersiveBand(v9, v2, v4, v5)
            && *(_QWORD *)(v10 + 112) == *((_QWORD *)a1 + 3 * v6 + 3)
            && *(_QWORD *)(v10 + 120) == *((_QWORD *)a1 + 3 * v6 + 4) )
          {
            v11 = (unsigned __int16)atomCheckpointProp;
            v30 = *(_QWORD *)(gptiCurrent + 368LL);
            *(_QWORD *)(gptiCurrent + 368LL) = &v30;
            v31 = v10;
            ++*(_DWORD *)(v10 + 8);
            Prop = GetProp(v10, v11, 1LL);
            if ( v3 )
            {
              PushW32ThreadLock((__int64)v3, v32, (__int64)DestroySMWP, v14);
              v3 = (struct tagSMWP *)xxxDeferWindowPosAndCheckPoint(
                                       v3,
                                       v10,
                                       *(_QWORD *)a1,
                                       v10 + 112,
                                       Prop,
                                       *((_DWORD *)a1 + 2),
                                       0);
              if ( !v3 )
                PopW32ThreadLock(v32, v12, v15, v16);
            }
            ThreadUnlock1(v13, v12);
            LOBYTE(v17) = 1;
            v20 = HMValidateHandleNoSecure(v8, v17, v18, v19);
            v21 = v20;
            if ( v20 )
            {
              if ( (*(_DWORD *)(v20 + 352) & 0xF) == 2
                && (*(_DWORD *)(*(_QWORD *)(v20 + 16) + 568LL) & 0x2000000) == 0
                && (unsigned int)ComputeProposedPerMonRect(
                                   (struct tagRECT *)v20,
                                   *(struct tagMONITORRECTS **)a1,
                                   (struct tagRECT *)(v20 + 112),
                                   &v33) )
              {
                *(struct tagRECT *)(v7 + 8) = v33;
              }
              else
              {
                *(_QWORD *)v7 = 0LL;
                if ( (*(_DWORD *)(v21 + 352) & 0xF) == 2 && (*(_BYTE *)(v21 + 55) & 0x20) != 0 )
                  *(_DWORD *)(v21 + 288) |= 0x20000000u;
              }
            }
            else
            {
              *(_QWORD *)v7 = 0LL;
            }
            if ( v3 )
              PopW32ThreadLock(v32, v2, v4, v5);
          }
          ++v6;
          v7 += 24;
        }
        while ( v6 < *((_DWORD *)a1 + 3) );
      }
      if ( v3 )
        xxxEndDeferWindowPosEx(v3, 0LL, v4);
    }
    v22 = 0;
    if ( *((int *)a1 + 3) > 0 )
    {
      v23 = (unsigned __int64 *)((char *)a1 + 16);
      do
      {
        if ( *v23 )
        {
          LOBYTE(v2) = 1;
          v24 = HMValidateHandleNoSecure(*v23, v2, v4, v5);
          if ( v24 )
          {
            v30 = *(_QWORD *)(gptiCurrent + 368LL);
            *(_QWORD *)(gptiCurrent + 368LL) = &v30;
            v31 = v24;
            ++*(_DWORD *)(v24 + 8);
            FindOldMonitor(v24 + 112, *(_QWORD *)a1, *(unsigned int *)(v24 + 352));
            xxxNotifyMonitorChanged((struct tagWND *)v24);
            ThreadUnlock1(v26, v25);
          }
        }
        ++v22;
        v23 += 3;
      }
      while ( v22 < *((_DWORD *)a1 + 3) );
    }
    Win32FreePool(*(_QWORD *)a1, v2, v4);
    Win32FreePool(a1, v27, v28);
  }
}
