/*
 * XREFs of DmmAppendCcdConnectedSetForAdapter @ 0x1C005D394
 * Callers:
 *     sub_1C00BF2D0 @ 0x1C00BF2D0 (sub_1C00BF2D0.c)
 * Callees:
 *     RtlStringCchLengthW @ 0x1C00011C8 (RtlStringCchLengthW.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00031F4 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C0004934 (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x1C0005834 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0006CC0 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     MonitorGetCCDMonitorID @ 0x1C00A0070 (MonitorGetCCDMonitorID.c)
 */

__int64 __fastcall DmmAppendCcdConnectedSetForAdapter(DXGADAPTER *a1, unsigned __int16 *a2)
{
  __int64 v4; // rcx
  __int64 v5; // rax
  __int64 v6; // rbx
  __int64 v8; // rbx
  __int64 v9; // rax
  __int64 v10; // rbx
  _QWORD *v11; // rdi
  __int64 v12; // rdi
  unsigned int v13; // ebp
  __int64 v14; // r15
  unsigned __int16 v15; // dx
  unsigned __int16 v16; // r8
  const wchar_t *v17; // r13
  unsigned __int64 v18; // r12
  int CCDMonitorID; // eax
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // r9
  __int64 v24; // r14
  __int64 v25; // rdi
  __int64 v26; // rax
  size_t pcchLength; // [rsp+60h] [rbp+8h] BYREF
  __int64 v28; // [rsp+70h] [rbp+18h] BYREF

  if ( !DXGADAPTER::IsCoreResourceSharedOwner(a1) )
  {
    v5 = WdLogNewEntry5_WdAssertion(v4);
    WdLogEvent5_WdAssertion(v5);
  }
  v6 = *((_QWORD *)a1 + 248);
  if ( !v6 )
    return 0LL;
  v8 = *(_QWORD *)(v6 + 112);
  if ( !v8 )
  {
    v9 = WdLogNewEntry5_WdError(v4);
    *(_QWORD *)(v9 + 24) = a1;
    WdLogEvent5_WdError(v9);
    return 3223192373LL;
  }
  EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>((__int64)&v28, v8);
  _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(v8 + 96) + 72LL));
  v10 = *(_QWORD *)(v8 + 96);
  v11 = (_QWORD *)(v10 + 24);
  if ( (_QWORD *)*v11 == v11 || (v12 = *v11 - 8LL) == 0 )
  {
LABEL_22:
    v13 = 0;
    goto LABEL_23;
  }
  v13 = -1073741789;
  while ( 1 )
  {
    if ( !*(_BYTE *)(v12 + 396) )
    {
      v14 = *(_QWORD *)(v12 + 96);
      if ( v14 )
        break;
    }
LABEL_18:
    v25 = *(_QWORD *)(v12 + 8);
    if ( v25 == v10 + 24 )
      v12 = 0LL;
    else
      v12 = v25 - 8;
    if ( !v12 )
      goto LABEL_22;
  }
  v15 = *a2;
  v16 = a2[1];
  if ( *a2 >= v16 )
    goto LABEL_23;
  v17 = (const wchar_t *)(*((_QWORD *)a2 + 1) + 2 * ((unsigned __int64)v15 >> 1));
  v18 = (unsigned __int64)(v16 - v15) >> 1;
  CCDMonitorID = MonitorGetCCDMonitorID(*(_QWORD *)(v12 + 96), (unsigned int)v18, v17);
  v24 = CCDMonitorID;
  if ( CCDMonitorID == -2147483643 || CCDMonitorID == -1073741789 )
    goto LABEL_23;
  if ( CCDMonitorID >= 0 )
  {
    RtlStringCchLengthW(v17, (unsigned int)v18, &pcchLength);
    *a2 += 2 * pcchLength;
    if ( *a2 >= a2[1] )
      goto LABEL_23;
    *(_WORD *)(*((_QWORD *)a2 + 1) + 2 * ((unsigned __int64)*a2 >> 1)) = 94;
    *a2 += 2;
    goto LABEL_18;
  }
  v26 = WdLogNewEntry5_WdWarning(v21, v20, v22, v23);
  *(_QWORD *)(v26 + 24) = v14;
  *(_QWORD *)(v26 + 32) = v24;
  WdLogEvent5_WdWarning(v26);
  v13 = v24;
LABEL_23:
  if ( v10 )
    ReferenceCounted::Release((ReferenceCounted *)(v10 + 64));
  DXGFASTMUTEX::Release(*(DXGFASTMUTEX **)(v28 + 40));
  return v13;
}
