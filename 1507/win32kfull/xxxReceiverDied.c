/*
 * XREFs of xxxReceiverDied @ 0x1C007B2C4
 * Callers:
 *     SendMsgCleanup @ 0x1C007B270 (SendMsgCleanup.c)
 *     SuspendThreadQueue @ 0x1C00E77B0 (SuspendThreadQueue.c)
 *     zzzCancelJournalling @ 0x1C00FEE88 (zzzCancelJournalling.c)
 * Callees:
 *     xxxInterSendMsgEx @ 0x1C006E0C0 (xxxInterSendMsgEx.c)
 *     UnlinkSendListSms @ 0x1C007B368 (UnlinkSendListSms.c)
 *     SetWakeBit @ 0x1C00904B0 (SetWakeBit.c)
 */

__int64 __fastcall xxxReceiverDied(__int64 a1)
{
  __int64 v2; // rcx
  __int64 result; // rax
  __int64 v4; // rcx
  int v5; // ecx
  int v6; // eax
  unsigned int v7; // eax
  _QWORD *v8; // rax
  __int64 v9; // r8
  _QWORD *v10; // rdx
  int v11; // ecx
  int v12; // eax
  __int64 v13; // rdx
  __int64 v14; // rdx
  __int64 v15; // rcx
  _QWORD v16[3]; // [rsp+50h] [rbp-58h] BYREF
  int v17; // [rsp+68h] [rbp-40h]
  __int64 v18; // [rsp+70h] [rbp-38h]
  __int64 v19; // [rsp+78h] [rbp-30h]
  __int64 v20; // [rsp+80h] [rbp-28h]

  v2 = *(_QWORD *)(a1 + 40);
  *(_DWORD *)(a1 + 84) |= 2u;
  *(_QWORD *)(a1 + 40) = 0LL;
  result = *(unsigned int *)(v2 + 448);
  if ( (result & 1) != 0 )
  {
    *(_DWORD *)(a1 + 84) &= ~0x4000u;
    *(_QWORD *)(a1 + 16) = 0LL;
  }
  else
  {
    --*(_DWORD *)(v2 + 496);
    v8 = (_QWORD *)(a1 + 16);
    v9 = *(_QWORD *)(a1 + 16);
    v10 = *(_QWORD **)(a1 + 24);
    if ( *(_QWORD *)(v9 + 8) != a1 + 16 || (_QWORD *)*v10 != v8 )
      __fastfail(3u);
    *v10 = v9;
    *(_QWORD *)(v9 + 8) = v10;
    *v8 = 0LL;
    result = v2 + 480;
    if ( *(_QWORD *)result == result )
    {
      *(_WORD *)(*(_QWORD *)(v2 + 408) + 6LL) &= ~0x40u;
      result = *(_QWORD *)(v2 + 408);
      *(_WORD *)(result + 4) &= ~0x40u;
    }
  }
  v4 = *(_QWORD *)(a1 + 32);
  if ( v4 )
  {
    v6 = *(_DWORD *)(a1 + 84);
    if ( (v6 & 1) != 0 )
    {
      v7 = v6 & 0xFFFFFFF7;
    }
    else
    {
      v7 = v6 | 0x8001;
      *(_QWORD *)(a1 + 72) = 0LL;
      *(_QWORD *)(a1 + 40) = 0LL;
    }
    *(_DWORD *)(a1 + 84) = v7;
    SetWakeBit(v4, 512LL);
    return HMAssignmentUnlock(a1 + 112);
  }
  else
  {
    v5 = *(_DWORD *)(a1 + 84);
    if ( (v5 & 4) == 0 )
    {
      result = v5 & 0x101;
      if ( (_DWORD)result == 256 )
      {
        v11 = v5 | 1;
        v20 = 0LL;
        *(_DWORD *)(a1 + 84) = v11;
        v12 = 33;
        if ( (v11 & 0x400) != 0 )
          v12 = 289;
        v13 = *(_QWORD *)(a1 + 112);
        v17 = v12;
        v18 = *(_QWORD *)(a1 + 48);
        v19 = *(_QWORD *)(a1 + 56);
        v16[0] = *(_QWORD *)(gptiCurrent + 376LL);
        *(_QWORD *)(gptiCurrent + 376LL) = v16;
        v16[1] = v13;
        if ( v13 )
          ++*(_DWORD *)(v13 + 8);
        xxxInterSendMsgEx(*(_QWORD *)(a1 + 112), *(_DWORD *)(a1 + 104), 0LL);
        result = ThreadUnlock1(v15, v14);
      }
    }
    if ( (*(_DWORD *)(a1 + 84) & 0x4000) == 0 )
      return UnlinkSendListSms(a1);
  }
  return result;
}
