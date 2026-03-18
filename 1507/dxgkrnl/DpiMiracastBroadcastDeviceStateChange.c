/*
 * XREFs of DpiMiracastBroadcastDeviceStateChange @ 0x1C0168BD0
 * Callers:
 *     DpiMiracastStopMiracastSessionSync @ 0x1C00251B0 (DpiMiracastStopMiracastSessionSync.c)
 *     DpiMiracastTargetDeviceChange @ 0x1C0025700 (DpiMiracastTargetDeviceChange.c)
 *     DpiMiracastTearDownAssociation @ 0x1C0025B74 (DpiMiracastTearDownAssociation.c)
 *     DxgkMiracastStartMiracastSession @ 0x1C00269F0 (DxgkMiracastStartMiracastSession.c)
 *     DpiMiracastHandleStartSessionDone @ 0x1C01696F0 (DpiMiracastHandleStartSessionDone.c)
 * Callees:
 *     memset @ 0x1C0010C80 (memset.c)
 *     Template_xqq @ 0x1C0027F44 (Template_xqq.c)
 */

__int64 __fastcall DpiMiracastBroadcastDeviceStateChange(__int64 a1, __int64 a2, __int64 a3)
{
  _DWORD *PoolWithTag; // rax
  __int64 v5; // rcx
  _QWORD *v6; // rax
  __int64 v7; // rbx
  int updated; // eax
  __int64 v9; // rcx
  _QWORD *v10; // rax
  int v12; // [rsp+20h] [rbp-38h]
  int v13; // [rsp+28h] [rbp-30h]
  struct _UNICODE_STRING DestinationString; // [rsp+40h] [rbp-18h] BYREF

  if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x200000) != 0 )
  {
    v13 = *(_DWORD *)(a1 + 296);
    v12 = *(_DWORD *)(a1 + 288);
    Template_xqq(a1, a2, a3, *(_QWORD *)(a1 + 96), v12, v13);
  }
  if ( !*(_QWORD *)(a1 + 472) )
  {
    PoolWithTag = ExAllocatePoolWithTag((POOL_TYPE)512, 0x214uLL, 0x74727044u);
    *(_QWORD *)(a1 + 472) = PoolWithTag;
    if ( !PoolWithTag )
    {
      v6 = (_QWORD *)WdLogNewEntry5_WdLowResource(v5);
      LODWORD(v7) = -1073741801;
      v6[3] = DpiMiracastBroadcastDeviceStateChange;
      v6[4] = ExAllocatePoolWithTag;
      v6[5] = -1073741801LL;
      WdLogEvent5_WdLowResource(v6);
      return (unsigned int)v7;
    }
    *PoolWithTag = 1;
    memset((void *)(*(_QWORD *)(a1 + 472) + 4LL), 0, 0x208uLL);
    DestinationString.Buffer = (wchar_t *)(*(_QWORD *)(a1 + 472) + 4LL);
    DestinationString.MaximumLength = 518;
    RtlCopyUnicodeString(&DestinationString, (PCUNICODE_STRING)(a1 + 160));
  }
  *(_DWORD *)(*(_QWORD *)(a1 + 472) + 524LL) = *(_DWORD *)(a1 + 288);
  *(_DWORD *)(*(_QWORD *)(a1 + 472) + 528LL) = *(_DWORD *)(a1 + 296);
  updated = ZwUpdateWnfStateData(
              &WNF_DX_NETWORK_DISPLAY_STATE_CHANGE_NOTIFICATION,
              *(_QWORD *)(a1 + 472),
              532LL,
              0LL,
              a1 + 300,
              0,
              0);
  v7 = updated;
  if ( updated < 0 )
  {
    v10 = (_QWORD *)WdLogNewEntry5_WdError(v9);
    v10[3] = DpiMiracastBroadcastDeviceStateChange;
    v10[4] = ZwUpdateWnfStateData;
    v10[5] = v7;
    WdLogEvent5_WdError(v10);
  }
  return (unsigned int)v7;
}
