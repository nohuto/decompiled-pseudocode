/*
 * XREFs of DmmSetViewState @ 0x1C00C4878
 * Callers:
 *     DpiGdoDispatchIoctl @ 0x1C00C47A0 (DpiGdoDispatchIoctl.c)
 *     DpiGdoCreateGdiObjects @ 0x1C00CEE00 (DpiGdoCreateGdiObjects.c)
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00031F4 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C0004934 (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x1C0005834 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0006CC0 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?FindById@?$IndexedSet@VDMMVIDEOPRESENTSOURCE@@@@QEBAPEAVDMMVIDEOPRESENTSOURCE@@I@Z @ 0x1C000CDB8 (-FindById@-$IndexedSet@VDMMVIDEOPRESENTSOURCE@@@@QEBAPEAVDMMVIDEOPRESENTSOURCE@@I@Z.c)
 */

__int64 __fastcall DmmSetViewState(DXGADAPTER *this, unsigned int a2, char a3)
{
  __int64 v4; // rbp
  __int64 v6; // rax
  __int64 v7; // rcx
  __int64 v8; // rcx
  __int64 v9; // rax
  __int64 v10; // rsi
  __int64 v11; // rbx
  __int64 v12; // rax
  __int64 v13; // rcx
  unsigned int v14; // edi
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // [rsp+40h] [rbp+8h] BYREF

  v4 = a2;
  v6 = WdLogNewEntry5_WdDmmEvent(this);
  *(_QWORD *)(v6 + 24) = v4;
  *(_QWORD *)(v6 + 32) = this;
  WdLogEvent5_WdDmmEvent(v6);
  if ( !this )
  {
    v16 = WdLogNewEntry5_WdError(v7);
    *(_QWORD *)(v16 + 24) = 0LL;
    goto LABEL_12;
  }
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(this) )
  {
    v17 = WdLogNewEntry5_WdAssertion(v8);
    WdLogEvent5_WdAssertion(v17);
  }
  v9 = *((_QWORD *)this + 248);
  if ( !v9 )
  {
    v16 = WdLogNewEntry5_WdError(v8);
    *(_QWORD *)(v16 + 24) = this;
LABEL_12:
    WdLogEvent5_WdError(v16);
    return 3223191554LL;
  }
  v10 = *(_QWORD *)(v9 + 112);
  if ( v10 )
  {
    EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>((__int64)&v20, *(_QWORD *)(v9 + 112));
    _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(v10 + 88) + 72LL));
    v11 = *(_QWORD *)(v10 + 88);
    v12 = IndexedSet<DMMVIDEOPRESENTSOURCE>::FindById(v11, v4);
    if ( v12 )
    {
      *(_BYTE *)(v12 + 128) = a3;
      v14 = 0;
    }
    else
    {
      v19 = WdLogNewEntry5_WdError(v13);
      *(_QWORD *)(v19 + 24) = (unsigned int)v4;
      WdLogEvent5_WdError(v19);
      v14 = -1071774972;
    }
    if ( v11 )
      ReferenceCounted::Release((ReferenceCounted *)(v11 + 64));
    DXGFASTMUTEX::Release(*(DXGFASTMUTEX **)(v20 + 40));
    return v14;
  }
  else
  {
    v18 = WdLogNewEntry5_WdError(v8);
    *(_QWORD *)(v18 + 24) = this;
    WdLogEvent5_WdError(v18);
    return 3223192373LL;
  }
}
