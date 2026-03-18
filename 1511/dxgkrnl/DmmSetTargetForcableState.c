/*
 * XREFs of DmmSetTargetForcableState @ 0x1C00DBE40
 * Callers:
 *     DpiFdoInvalidateChildStatus @ 0x1C00AA488 (DpiFdoInvalidateChildStatus.c)
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00031F4 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C0004934 (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x1C0005834 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0006CC0 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?FindById@?$IndexedSet@VDMMVIDEOPRESENTTARGET@@@@QEBAPEAVDMMVIDEOPRESENTTARGET@@I@Z @ 0x1C00070B8 (-FindById@-$IndexedSet@VDMMVIDEOPRESENTTARGET@@@@QEBAPEAVDMMVIDEOPRESENTTARGET@@I@Z.c)
 */

__int64 __fastcall DmmSetTargetForcableState(DXGADAPTER *a1, unsigned int a2, char a3)
{
  __int64 v3; // rsi
  __int64 v6; // rcx
  __int64 v7; // rax
  __int64 v8; // rdi
  __int64 v9; // rbx
  __int64 v10; // rax
  __int64 v11; // rcx
  __int64 v12; // rdx
  int v13; // eax
  unsigned int v14; // edi
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // [rsp+30h] [rbp+8h] BYREF

  v3 = a2;
  if ( !a1 )
  {
    v16 = WdLogNewEntry5_WdError(0LL);
    *(_QWORD *)(v16 + 24) = 0LL;
    goto LABEL_15;
  }
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(a1) )
  {
    v17 = WdLogNewEntry5_WdAssertion(v6);
    WdLogEvent5_WdAssertion(v17);
  }
  v7 = *((_QWORD *)a1 + 248);
  if ( !v7 )
  {
    v16 = WdLogNewEntry5_WdError(v6);
    *(_QWORD *)(v16 + 24) = a1;
LABEL_15:
    WdLogEvent5_WdError(v16);
    return 3223191554LL;
  }
  v8 = *(_QWORD *)(v7 + 112);
  if ( v8 )
  {
    EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>((__int64)&v20, *(_QWORD *)(v7 + 112));
    _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(v8 + 96) + 72LL));
    v9 = *(_QWORD *)(v8 + 96);
    v10 = IndexedSet<DMMVIDEOPRESENTTARGET>::FindById(v9, v3);
    v12 = v10;
    if ( v10 )
    {
      v13 = *(_DWORD *)(v10 + 72);
      if ( v13 >= 0 && (v13 <= 3 || v13 == 14) )
        *(_DWORD *)(v12 + 392) = a3 != 0;
      v14 = 0;
    }
    else
    {
      v19 = WdLogNewEntry5_WdError(v11);
      *(_QWORD *)(v19 + 24) = v3;
      WdLogEvent5_WdError(v19);
      v14 = -1071774971;
    }
    if ( v9 )
      ReferenceCounted::Release((ReferenceCounted *)(v9 + 64));
    DXGFASTMUTEX::Release(*(DXGFASTMUTEX **)(v20 + 40));
    return v14;
  }
  else
  {
    v18 = WdLogNewEntry5_WdError(v6);
    *(_QWORD *)(v18 + 24) = a1;
    WdLogEvent5_WdError(v18);
    return 3223192373LL;
  }
}
