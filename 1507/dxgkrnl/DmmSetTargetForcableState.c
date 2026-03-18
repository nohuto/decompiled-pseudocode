/*
 * XREFs of DmmSetTargetForcableState @ 0x1C0177308
 * Callers:
 *     DpiFdoInvalidateChildStatus @ 0x1C00C4CD8 (DpiFdoInvalidateChildStatus.c)
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C000250C (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x1C0003E94 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C00049CC (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?FindById@?$IndexedSet@VDMMVIDEOPRESENTTARGET@@@@QEBAPEAVDMMVIDEOPRESENTTARGET@@I@Z @ 0x1C0004BA8 (-FindById@-$IndexedSet@VDMMVIDEOPRESENTTARGET@@@@QEBAPEAVDMMVIDEOPRESENTTARGET@@I@Z.c)
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C0004E90 (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 */

__int64 __fastcall DmmSetTargetForcableState(DXGADAPTER *a1, unsigned int a2, char a3)
{
  __int64 v3; // rsi
  __int64 v6; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // rdi
  __int64 v15; // rax
  __int64 v16; // rbx
  __int64 v17; // rax
  __int64 v18; // rcx
  __int64 v19; // rdx
  __int64 v20; // rax
  unsigned int v21; // edi
  int v22; // eax
  __int64 v23; // [rsp+30h] [rbp+8h] BYREF

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
    v12 = WdLogNewEntry5_WdAssertion(v9, v8, v10, v11);
    WdLogEvent5_WdAssertion(v12);
  }
  v13 = *((_QWORD *)a1 + 247);
  if ( !v13 )
  {
    v6 = WdLogNewEntry5_WdError(v9);
    *(_QWORD *)(v6 + 24) = a1;
    goto LABEL_3;
  }
  v14 = *(_QWORD *)(v13 + 88);
  if ( v14 )
  {
    EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>((__int64)&v23, *(_QWORD *)(v13 + 88));
    _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(v14 + 96) + 72LL));
    v16 = *(_QWORD *)(v14 + 96);
    v17 = IndexedSet<DMMVIDEOPRESENTTARGET>::FindById(v16, v3);
    v19 = v17;
    if ( v17 )
    {
      v22 = *(_DWORD *)(v17 + 72);
      if ( v22 >= 0 && (v22 <= 3 || v22 == 14) )
        *(_DWORD *)(v19 + 392) = a3 != 0;
      v21 = 0;
    }
    else
    {
      v20 = WdLogNewEntry5_WdError(v18);
      *(_QWORD *)(v20 + 24) = v3;
      WdLogEvent5_WdError(v20);
      v21 = -1071774971;
    }
    if ( v16 )
      ReferenceCounted::Release((ReferenceCounted *)(v16 + 64));
    DXGFASTMUTEX::Release(*(struct _KTHREAD ***)(v23 + 40));
    return v21;
  }
  else
  {
    v15 = WdLogNewEntry5_WdError(v9);
    *(_QWORD *)(v15 + 24) = a1;
    WdLogEvent5_WdError(v15);
    return 3223192373LL;
  }
}
