/*
 * XREFs of ?DmmResetBaseVideoOutputTechnology@@YAJQEAXI@Z @ 0x1C01A0D8C
 * Callers:
 *     DpiPdoRemovePdo @ 0x1C019C49C (DpiPdoRemovePdo.c)
 * Callees:
 *     ?FindById@?$IndexedSet@VDMMVIDEOPRESENTTARGET@@@@QEBAPEAVDMMVIDEOPRESENTTARGET@@I@Z @ 0x1C000199C (-FindById@-$IndexedSet@VDMMVIDEOPRESENTTARGET@@@@QEBAPEAVDMMVIDEOPRESENTTARGET@@I@Z.c)
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C00019D8 (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x1C0004734 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0006CCC (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00094F0 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 */

__int64 __fastcall DmmResetBaseVideoOutputTechnology(DXGADAPTER *a1, unsigned int a2)
{
  __int64 v2; // rsi
  __int64 v4; // rax
  __int64 v6; // rcx
  __int64 v7; // rax
  __int64 v8; // rax
  __int64 v9; // rdi
  __int64 v10; // rax
  __int64 v11; // rbx
  __int64 v12; // rax
  __int64 v13; // rcx
  __int64 v14; // rax
  unsigned int v15; // edi
  __int64 v16; // [rsp+30h] [rbp+8h] BYREF

  v2 = a2;
  if ( !a1 )
  {
    v4 = WdLogNewEntry5_WdError(0LL);
    *(_QWORD *)(v4 + 24) = 0LL;
LABEL_3:
    WdLogEvent5_WdError(v4);
    return 3223191554LL;
  }
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(a1) )
  {
    v7 = WdLogNewEntry5_WdAssertion(v6);
    WdLogEvent5_WdAssertion(v7);
  }
  v8 = *((_QWORD *)a1 + 266);
  if ( !v8 )
  {
    v4 = WdLogNewEntry5_WdError(v6);
    *(_QWORD *)(v4 + 24) = a1;
    goto LABEL_3;
  }
  v9 = *(_QWORD *)(v8 + 88);
  if ( v9 )
  {
    EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>((__int64)&v16, *(_QWORD *)(v8 + 88));
    _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(v9 + 96) + 72LL));
    v11 = *(_QWORD *)(v9 + 96);
    v12 = IndexedSet<DMMVIDEOPRESENTTARGET>::FindById(v11, v2);
    if ( v12 )
    {
      v15 = 0;
      *(_DWORD *)(v12 + 72) = *(_DWORD *)(v12 + 76);
    }
    else
    {
      v14 = WdLogNewEntry5_WdError(v13);
      *(_QWORD *)(v14 + 24) = v2;
      WdLogEvent5_WdError(v14);
      v15 = -1071774971;
    }
    if ( v11 )
      ReferenceCounted::Release((ReferenceCounted *)(v11 + 64));
    DXGFASTMUTEX::Release(*(struct _KTHREAD ***)(v16 + 40));
    return v15;
  }
  else
  {
    v10 = WdLogNewEntry5_WdError(v6);
    *(_QWORD *)(v10 + 24) = a1;
    WdLogEvent5_WdError(v10);
    return 3223192373LL;
  }
}
