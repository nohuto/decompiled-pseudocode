/*
 * XREFs of DmmGetEmergentSimulatedTarget @ 0x1C008FA30
 * Callers:
 *     ?DisplayConfigCountMonitorsCallback@@YAJPEAVDXGADAPTER@@PEAX@Z @ 0x1C008F880 (-DisplayConfigCountMonitorsCallback@@YAJPEAVDXGADAPTER@@PEAX@Z.c)
 *     ?_OnAdapterInitializationDone@MONITOR_MGR@@QEAAJXZ @ 0x1C00CB72C (-_OnAdapterInitializationDone@MONITOR_MGR@@QEAAJXZ.c)
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C000250C (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x1C0003E94 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C00049CC (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C0004E90 (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ?GetNextTarget@DMMVIDEOPRESENTTARGETSET@@QEBAPEBVDMMVIDEOPRESENTTARGET@@QEBV2@@Z @ 0x1C0004F50 (-GetNextTarget@DMMVIDEOPRESENTTARGETSET@@QEBAPEBVDMMVIDEOPRESENTTARGET@@QEBV2@@Z.c)
 *     IsInternalVideoOutput @ 0x1C0004FC0 (IsInternalVideoOutput.c)
 */

__int64 __fastcall DmmGetEmergentSimulatedTarget(DXGADAPTER *a1, _DWORD *a2)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v8; // rdi
  __int64 v9; // rdi
  int v10; // eax
  _QWORD *v11; // rbx
  _QWORD *v12; // rdi
  __int64 v13; // rdi
  const struct DMMVIDEOPRESENTTARGET *NextTarget; // rdx
  const struct DMMVIDEOPRESENTTARGET *v15; // rdx
  int v16; // eax
  unsigned int v17; // edi
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21; // rax
  __int64 v22; // rax
  __int64 v23; // [rsp+38h] [rbp+10h] BYREF

  if ( !a2 )
  {
    v20 = WdLogNewEntry5_WdError(a1);
    *(_QWORD *)(v20 + 24) = 0LL;
    WdLogEvent5_WdError(v20);
    return 3221225485LL;
  }
  *a2 = -1;
  if ( !a1 )
  {
    v19 = WdLogNewEntry5_WdError(0LL);
    *(_QWORD *)(v19 + 24) = 0LL;
    goto LABEL_19;
  }
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(a1) )
  {
    v21 = WdLogNewEntry5_WdAssertion(v5, v4, v6, v7);
    WdLogEvent5_WdAssertion(v21);
  }
  v8 = *((_QWORD *)a1 + 247);
  if ( !v8 )
  {
    v19 = WdLogNewEntry5_WdError(v5);
    *(_QWORD *)(v19 + 24) = a1;
LABEL_19:
    WdLogEvent5_WdError(v19);
    return 3223191554LL;
  }
  v9 = *(_QWORD *)(v8 + 88);
  if ( v9 )
  {
    EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>((__int64)&v23, v9);
    v10 = *(_DWORD *)(v9 + 492);
    if ( v10 == -1 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(v9 + 96) + 72LL));
      v11 = *(_QWORD **)(v9 + 96);
      v12 = v11 + 3;
      if ( (_QWORD *)*v12 == v12 )
        v13 = 0LL;
      else
        v13 = *v12 - 8LL;
      NextTarget = (const struct DMMVIDEOPRESENTTARGET *)v13;
      if ( !v13 )
        goto LABEL_22;
      while ( !IsInternalVideoOutput(*((_DWORD *)NextTarget + 18)) )
      {
        NextTarget = DMMVIDEOPRESENTTARGETSET::GetNextTarget((DMMVIDEOPRESENTTARGETSET *)v11, v15);
        if ( !NextTarget )
          goto LABEL_13;
      }
      v13 = (__int64)v15;
LABEL_13:
      if ( v13 )
      {
        v16 = *(_DWORD *)(v13 + 24);
        v17 = 0;
        *a2 = v16;
      }
      else
      {
LABEL_22:
        v17 = -1073741275;
      }
      if ( v11 )
        ReferenceCounted::Release((ReferenceCounted *)(v11 + 8));
    }
    else
    {
      *a2 = v10;
      v17 = 0;
    }
    DXGFASTMUTEX::Release(*(struct _KTHREAD ***)(v23 + 40));
    return v17;
  }
  else
  {
    v22 = WdLogNewEntry5_WdError(v5);
    *(_QWORD *)(v22 + 24) = a1;
    WdLogEvent5_WdError(v22);
    return 3223192373LL;
  }
}
