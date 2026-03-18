/*
 * XREFs of ?DmmSetTemporaryVideoOutputTechnology@@YAJQEAXIW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@@Z @ 0x1C01A0E90
 * Callers:
 *     DpiPdoAddPdo @ 0x1C00EF39C (DpiPdoAddPdo.c)
 * Callees:
 *     ?FindById@?$IndexedSet@VDMMVIDEOPRESENTTARGET@@@@QEBAPEAVDMMVIDEOPRESENTTARGET@@I@Z @ 0x1C000199C (-FindById@-$IndexedSet@VDMMVIDEOPRESENTTARGET@@@@QEBAPEAVDMMVIDEOPRESENTTARGET@@I@Z.c)
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C00019D8 (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x1C0004734 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0006CCC (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00094F0 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 */

__int64 __fastcall DmmSetTemporaryVideoOutputTechnology(
        DXGADAPTER *a1,
        unsigned int a2,
        enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY a3)
{
  __int64 v3; // rsi
  __int64 v6; // rax
  __int64 v8; // rcx
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // rdi
  __int64 v12; // rax
  __int64 v13; // rbx
  __int64 v14; // rax
  __int64 v15; // rcx
  __int64 v16; // rax
  unsigned int v17; // edi
  __int64 v18; // [rsp+30h] [rbp+8h] BYREF

  v3 = a2;
  if ( !a1 )
  {
    v6 = WdLogNewEntry5_WdError(0LL);
    *(_QWORD *)(v6 + 24) = 0LL;
LABEL_3:
    WdLogEvent5_WdError(v6);
    return 3223191554LL;
  }
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(a1) )
  {
    v9 = WdLogNewEntry5_WdAssertion(v8);
    WdLogEvent5_WdAssertion(v9);
  }
  v10 = *((_QWORD *)a1 + 266);
  if ( !v10 )
  {
    v6 = WdLogNewEntry5_WdError(v8);
    *(_QWORD *)(v6 + 24) = a1;
    goto LABEL_3;
  }
  v11 = *(_QWORD *)(v10 + 88);
  if ( v11 )
  {
    EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>((__int64)&v18, *(_QWORD *)(v10 + 88));
    _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(v11 + 96) + 72LL));
    v13 = *(_QWORD *)(v11 + 96);
    v14 = IndexedSet<DMMVIDEOPRESENTTARGET>::FindById(v13, v3);
    if ( v14 )
    {
      *(_DWORD *)(v14 + 72) = a3;
      v17 = 0;
    }
    else
    {
      v16 = WdLogNewEntry5_WdError(v15);
      *(_QWORD *)(v16 + 24) = v3;
      WdLogEvent5_WdError(v16);
      v17 = -1071774971;
    }
    if ( v13 )
      ReferenceCounted::Release((ReferenceCounted *)(v13 + 64));
    DXGFASTMUTEX::Release(*(struct _KTHREAD ***)(v18 + 40));
    return v17;
  }
  else
  {
    v12 = WdLogNewEntry5_WdError(v8);
    *(_QWORD *)(v12 + 24) = a1;
    WdLogEvent5_WdError(v12);
    return 3223192373LL;
  }
}
