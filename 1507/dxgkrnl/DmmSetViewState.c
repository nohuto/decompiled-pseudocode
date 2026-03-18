/*
 * XREFs of DmmSetViewState @ 0x1C00C50C0
 * Callers:
 *     DpiGdoDispatchIoctl @ 0x1C00C4970 (DpiGdoDispatchIoctl.c)
 *     DpiGdoCreateGdiObjects @ 0x1C00D6940 (DpiGdoCreateGdiObjects.c)
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C000250C (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x1C0003E94 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C00049CC (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C0004E90 (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ?FindById@?$IndexedSet@VDMMVIDEOPRESENTSOURCE@@@@QEBAPEAVDMMVIDEOPRESENTSOURCE@@I@Z @ 0x1C000D168 (-FindById@-$IndexedSet@VDMMVIDEOPRESENTSOURCE@@@@QEBAPEAVDMMVIDEOPRESENTSOURCE@@I@Z.c)
 */

__int64 __fastcall DmmSetViewState(DXGADAPTER *this, unsigned int a2, char a3)
{
  __int64 v4; // rbp
  __int64 v6; // rax
  __int64 v7; // rcx
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rax
  __int64 v13; // rsi
  __int64 v14; // rbx
  __int64 v15; // rax
  __int64 v16; // rcx
  unsigned int v17; // edi
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21; // rax
  __int64 v22; // rax
  __int64 v23; // [rsp+40h] [rbp+8h] BYREF

  v4 = a2;
  v6 = WdLogNewEntry5_WdDmmEvent(this);
  *(_QWORD *)(v6 + 24) = v4;
  *(_QWORD *)(v6 + 32) = this;
  WdLogEvent5_WdDmmEvent(v6);
  if ( !this )
  {
    v19 = WdLogNewEntry5_WdError(v7);
    *(_QWORD *)(v19 + 24) = 0LL;
    goto LABEL_12;
  }
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(this) )
  {
    v20 = WdLogNewEntry5_WdAssertion(v9, v8, v10, v11);
    WdLogEvent5_WdAssertion(v20);
  }
  v12 = *((_QWORD *)this + 247);
  if ( !v12 )
  {
    v19 = WdLogNewEntry5_WdError(v9);
    *(_QWORD *)(v19 + 24) = this;
LABEL_12:
    WdLogEvent5_WdError(v19);
    return 3223191554LL;
  }
  v13 = *(_QWORD *)(v12 + 88);
  if ( v13 )
  {
    EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>((__int64)&v23, *(_QWORD *)(v12 + 88));
    _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(v13 + 88) + 72LL));
    v14 = *(_QWORD *)(v13 + 88);
    v15 = IndexedSet<DMMVIDEOPRESENTSOURCE>::FindById(v14, v4);
    if ( v15 )
    {
      *(_BYTE *)(v15 + 128) = a3;
      v17 = 0;
    }
    else
    {
      v22 = WdLogNewEntry5_WdError(v16);
      *(_QWORD *)(v22 + 24) = (unsigned int)v4;
      WdLogEvent5_WdError(v22);
      v17 = -1071774972;
    }
    if ( v14 )
      ReferenceCounted::Release((ReferenceCounted *)(v14 + 64));
    DXGFASTMUTEX::Release(*(struct _KTHREAD ***)(v23 + 40));
    return v17;
  }
  else
  {
    v21 = WdLogNewEntry5_WdError(v9);
    *(_QWORD *)(v21 + 24) = this;
    WdLogEvent5_WdError(v21);
    return 3223192373LL;
  }
}
