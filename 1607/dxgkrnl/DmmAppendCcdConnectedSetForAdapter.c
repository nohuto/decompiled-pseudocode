/*
 * XREFs of DmmAppendCcdConnectedSetForAdapter @ 0x1C00B613C
 * Callers:
 *     _BtlPreAcquireSharedAccess_&CCD_BTL_CONNECTIVITY_COLLECTOR::_AppendConnectedSetAdaptersCallback_1_ @ 0x1C00D6190 (_BtlPreAcquireSharedAccess_-CCD_BTL_CONNECTIVITY_COLLECTOR--_AppendConnectedSetAdaptersCallback_.c)
 * Callees:
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C00019D8 (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x1C0004734 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0006CCC (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00094F0 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     RtlStringCchLengthW @ 0x1C000A308 (RtlStringCchLengthW.c)
 *     MonitorGetCCDMonitorID @ 0x1C00B62B8 (MonitorGetCCDMonitorID.c)
 */

__int64 __fastcall DmmAppendCcdConnectedSetForAdapter(DXGADAPTER *a1, unsigned __int16 *a2)
{
  __int64 v4; // rcx
  __int64 v5; // rbx
  __int64 v6; // rbx
  __int64 v7; // rbx
  _QWORD *v8; // rdi
  __int64 v9; // rdi
  unsigned int v10; // ebp
  __int64 v11; // r15
  __int64 v12; // rdi
  unsigned __int16 v14; // dx
  unsigned __int16 v15; // r8
  const wchar_t *v16; // r13
  unsigned __int64 v17; // r12
  int CCDMonitorID; // eax
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r9
  __int64 v23; // r14
  __int64 v24; // rax
  __int64 v25; // rax
  __int64 v26; // rax
  size_t pcchLength; // [rsp+60h] [rbp+8h] BYREF
  __int64 v28; // [rsp+70h] [rbp+18h] BYREF

  if ( !DXGADAPTER::IsCoreResourceSharedOwner(a1) )
  {
    v24 = WdLogNewEntry5_WdAssertion(v4);
    WdLogEvent5_WdAssertion(v24);
  }
  v5 = *((_QWORD *)a1 + 266);
  if ( !v5 )
    return 0LL;
  v6 = *(_QWORD *)(v5 + 88);
  if ( !v6 )
  {
    v25 = WdLogNewEntry5_WdError(v4);
    *(_QWORD *)(v25 + 24) = a1;
    WdLogEvent5_WdError(v25);
    return 3223192373LL;
  }
  EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>((__int64)&v28, v6);
  _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(v6 + 96) + 72LL));
  v7 = *(_QWORD *)(v6 + 96);
  v8 = (_QWORD *)(v7 + 24);
  if ( (_QWORD *)*v8 == v8 || (v9 = *v8 - 8LL) == 0 )
  {
LABEL_13:
    v10 = 0;
    goto LABEL_14;
  }
  v10 = -1073741789;
  while ( 1 )
  {
    if ( !*(_BYTE *)(v9 + 396) )
    {
      v11 = *(_QWORD *)(v9 + 96);
      if ( v11 )
        break;
    }
LABEL_10:
    v12 = *(_QWORD *)(v9 + 8);
    if ( v12 == v7 + 24 )
      v9 = 0LL;
    else
      v9 = v12 - 8;
    if ( !v9 )
      goto LABEL_13;
  }
  v14 = *a2;
  v15 = a2[1];
  if ( *a2 >= v15 )
    goto LABEL_14;
  v16 = (const wchar_t *)(*((_QWORD *)a2 + 1) + 2 * ((unsigned __int64)v14 >> 1));
  v17 = (unsigned __int64)(v15 - v14) >> 1;
  CCDMonitorID = MonitorGetCCDMonitorID(*(_QWORD *)(v9 + 96), (unsigned int)v17, v16);
  v23 = CCDMonitorID;
  if ( CCDMonitorID == -2147483643 || CCDMonitorID == -1073741789 )
    goto LABEL_14;
  if ( CCDMonitorID >= 0 )
  {
    RtlStringCchLengthW(v16, (unsigned int)v17, &pcchLength);
    *a2 += 2 * pcchLength;
    if ( *a2 >= a2[1] )
      goto LABEL_14;
    *(_WORD *)(*((_QWORD *)a2 + 1) + 2 * ((unsigned __int64)*a2 >> 1)) = 94;
    *a2 += 2;
    goto LABEL_10;
  }
  v26 = WdLogNewEntry5_WdWarning(v20, v19, v21, v22);
  *(_QWORD *)(v26 + 24) = v11;
  *(_QWORD *)(v26 + 32) = v23;
  WdLogEvent5_WdWarning(v26);
  v10 = v23;
LABEL_14:
  if ( v7 )
    ReferenceCounted::Release((ReferenceCounted *)(v7 + 64));
  DXGFASTMUTEX::Release(*(struct _KTHREAD ***)(v28 + 40));
  return v10;
}
