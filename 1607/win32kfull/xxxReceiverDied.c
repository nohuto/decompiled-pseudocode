/*
 * XREFs of xxxReceiverDied @ 0x1C01067A8
 * Callers:
 *     zzzCancelJournalling @ 0x1C00945F8 (zzzCancelJournalling.c)
 *     SendMsgCleanup @ 0x1C0106750 (SendMsgCleanup.c)
 *     SuspendThreadQueue @ 0x1C01142D0 (SuspendThreadQueue.c)
 * Callees:
 *     UnlinkSendListSms @ 0x1C0058070 (UnlinkSendListSms.c)
 *     SetWakeBit @ 0x1C005B6A0 (SetWakeBit.c)
 *     RemoveSMSReceiveList @ 0x1C007F5F4 (RemoveSMSReceiveList.c)
 *     xxxInterSendMsgEx @ 0x1C0085BE0 (xxxInterSendMsgEx.c)
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C0088728 (W32GetCurrentThreadDpiAwarenessContext.c)
 */

void __fastcall xxxReceiverDied(__int64 a1, __int64 a2, _QWORD *a3)
{
  __int64 v3; // r9
  __int64 v5; // rcx
  int v6; // ecx
  __int64 v7; // rdx
  int v8; // ecx
  int v9; // eax
  __int64 v10; // rdx
  __int64 v11; // rcx
  int v12; // eax
  unsigned int v13; // eax
  int CurrentThreadDpiAwarenessContext; // [rsp+28h] [rbp-80h]
  int v15; // [rsp+48h] [rbp-60h]
  __int64 v16; // [rsp+50h] [rbp-58h] BYREF
  __int64 v17; // [rsp+58h] [rbp-50h]
  int v18; // [rsp+68h] [rbp-40h] BYREF
  __int64 v19; // [rsp+70h] [rbp-38h]
  __int64 v20; // [rsp+78h] [rbp-30h]
  __int64 v21; // [rsp+80h] [rbp-28h]

  v3 = *(_QWORD *)(a1 + 40);
  *(_QWORD *)(a1 + 40) = 0LL;
  *(_DWORD *)(a1 + 84) |= 2u;
  if ( (*(_DWORD *)(v3 + 440) & 1) != 0 )
  {
    *(_DWORD *)(a1 + 84) &= ~0x4000u;
    *(_QWORD *)(a1 + 16) = 0LL;
  }
  else
  {
    RemoveSMSReceiveList(a1, v3);
    a3 = (_QWORD *)(v3 + 472);
    if ( (_QWORD *)*a3 == a3 )
    {
      *(_WORD *)(*(_QWORD *)(v3 + 400) + 6LL) &= ~0x40u;
      *(_WORD *)(*(_QWORD *)(v3 + 400) + 4LL) &= ~0x40u;
    }
  }
  v5 = *(_QWORD *)(a1 + 32);
  if ( v5 )
  {
    v12 = *(_DWORD *)(a1 + 84);
    if ( (v12 & 1) != 0 )
    {
      v13 = v12 & 0xFFFFFFF7;
    }
    else
    {
      *(_QWORD *)(a1 + 72) = 0LL;
      v13 = v12 | 0x8001;
      *(_QWORD *)(a1 + 40) = 0LL;
    }
    *(_DWORD *)(a1 + 84) = v13;
    SetWakeBit(v5, 512LL, (__int64)a3);
    HMAssignmentUnlock(a1 + 112);
  }
  else
  {
    v6 = *(_DWORD *)(a1 + 84);
    if ( (v6 & 4) == 0 && (*(_DWORD *)(a1 + 84) & 0x101) == 0x100 )
    {
      v7 = *(_QWORD *)(a1 + 112);
      v8 = v6 | 1;
      *(_DWORD *)(a1 + 84) = v8;
      v9 = 33;
      if ( (v8 & 0x400) != 0 )
        v9 = 289;
      v21 = 0LL;
      v18 = v9;
      v19 = *(_QWORD *)(a1 + 48);
      v20 = *(_QWORD *)(a1 + 56);
      v16 = *(_QWORD *)(gptiCurrent + 368LL);
      *(_QWORD *)(gptiCurrent + 368LL) = &v16;
      v17 = v7;
      if ( v7 )
        ++*(_DWORD *)(v7 + 8);
      v15 = *(_DWORD *)(a1 + 84) & 0x10000;
      CurrentThreadDpiAwarenessContext = W32GetCurrentThreadDpiAwarenessContext(gptiCurrent, v7, (__int64)a3, v3);
      xxxInterSendMsgEx(
        *(_QWORD *)(a1 + 112),
        *(unsigned int *)(a1 + 104),
        0LL,
        0LL,
        0LL,
        CurrentThreadDpiAwarenessContext,
        *(_QWORD *)(a1 + 64),
        &v18,
        1,
        v15,
        v16,
        v17);
      ThreadUnlock1(v11, v10);
    }
    if ( (*(_DWORD *)(a1 + 84) & 0x4000) == 0 )
      UnlinkSendListSms((__int64 *)a1);
  }
}
