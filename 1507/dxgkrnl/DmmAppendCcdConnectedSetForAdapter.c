/*
 * XREFs of DmmAppendCcdConnectedSetForAdapter @ 0x1C009A84C
 * Callers:
 *     _BtlPreAcquireSharedAccess_&CCD_BTL_CONNECTIVITY_COLLECTOR::_AppendConnectedSetAdaptersCallback_ @ 0x1C00AD360 (_BtlPreAcquireSharedAccess_-CCD_BTL_CONNECTIVITY_COLLECTOR--_AppendConnectedSetAdaptersCallback_.c)
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C000250C (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x1C0003E94 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C00049CC (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C0004E90 (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     RtlStringCchLengthW @ 0x1C0008474 (RtlStringCchLengthW.c)
 *     MonitorGetCCDMonitorID @ 0x1C0099B70 (MonitorGetCCDMonitorID.c)
 */

__int64 __fastcall DmmAppendCcdConnectedSetForAdapter(DXGADAPTER *a1, unsigned __int16 *a2)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v8; // rbx
  __int64 v9; // rbx
  __int64 v10; // rbx
  _QWORD *v11; // rdi
  __int64 v12; // rdi
  unsigned int v13; // ebp
  __int64 v14; // r15
  __int64 v15; // rdi
  unsigned __int16 v17; // dx
  unsigned __int16 v18; // r8
  unsigned __int16 *v19; // r13
  unsigned __int64 v20; // r12
  int CCDMonitorID; // eax
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // r9
  __int64 v26; // r14
  __int64 v27; // rax
  __int64 v28; // rax
  __int64 v29; // rax
  size_t pcchLength; // [rsp+60h] [rbp+8h] BYREF
  __int64 v31; // [rsp+70h] [rbp+18h] BYREF

  if ( !DXGADAPTER::IsCoreResourceSharedOwner(a1) )
  {
    v27 = WdLogNewEntry5_WdAssertion(v5, v4, v6, v7);
    WdLogEvent5_WdAssertion(v27);
  }
  v8 = *((_QWORD *)a1 + 247);
  if ( !v8 )
    return 0LL;
  v9 = *(_QWORD *)(v8 + 88);
  if ( !v9 )
  {
    v28 = WdLogNewEntry5_WdError(v5);
    *(_QWORD *)(v28 + 24) = a1;
    WdLogEvent5_WdError(v28);
    return 3223192373LL;
  }
  EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>((__int64)&v31, v9);
  _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(v9 + 96) + 72LL));
  v10 = *(_QWORD *)(v9 + 96);
  v11 = (_QWORD *)(v10 + 24);
  if ( (_QWORD *)*v11 == v11 || (v12 = *v11 - 8LL) == 0 )
  {
LABEL_12:
    v13 = 0;
    goto LABEL_13;
  }
  v13 = -1073741789;
  while ( 1 )
  {
    v14 = *(_QWORD *)(v12 + 96);
    if ( v14 )
      break;
LABEL_9:
    v15 = *(_QWORD *)(v12 + 8);
    if ( v15 == v10 + 24 )
      v12 = 0LL;
    else
      v12 = v15 - 8;
    if ( !v12 )
      goto LABEL_12;
  }
  v17 = *a2;
  v18 = a2[1];
  if ( *a2 >= v18 )
    goto LABEL_13;
  v19 = (unsigned __int16 *)(*((_QWORD *)a2 + 1) + 2 * ((unsigned __int64)v17 >> 1));
  v20 = (unsigned __int64)(v18 - v17) >> 1;
  CCDMonitorID = MonitorGetCCDMonitorID(*(struct HDXGMONITOR__ **)(v12 + 96), v20, v19);
  v26 = CCDMonitorID;
  if ( CCDMonitorID == -2147483643 || CCDMonitorID == -1073741789 )
    goto LABEL_13;
  if ( CCDMonitorID >= 0 )
  {
    RtlStringCchLengthW(v19, (unsigned int)v20, &pcchLength);
    *a2 += 2 * pcchLength;
    if ( *a2 >= a2[1] )
      goto LABEL_13;
    *(_WORD *)(*((_QWORD *)a2 + 1) + 2 * ((unsigned __int64)*a2 >> 1)) = 94;
    *a2 += 2;
    goto LABEL_9;
  }
  v29 = WdLogNewEntry5_WdWarning(v23, v22, v24, v25);
  *(_QWORD *)(v29 + 24) = v14;
  *(_QWORD *)(v29 + 32) = v26;
  WdLogEvent5_WdWarning(v29);
  v13 = v26;
LABEL_13:
  if ( v10 )
    ReferenceCounted::Release((ReferenceCounted *)(v10 + 64));
  DXGFASTMUTEX::Release(*(struct _KTHREAD ***)(v31 + 40));
  return v13;
}
