/*
 * XREFs of ?Reset@ADAPTER_DISPLAY@@QEAAJPEAU_TDR_RECOVERY_CONTEXT@@@Z @ 0x1C0148460
 * Callers:
 *     ?Reset@DXGADAPTER@@QEAAJPEAU_TDR_RECOVERY_CONTEXT@@@Z @ 0x1C01463D8 (-Reset@DXGADAPTER@@QEAAJPEAU_TDR_RECOVERY_CONTEXT@@@Z.c)
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00094F0 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0009D08 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0009D40 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0009DB0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?IterateOutputDuplMgrsForRender@ADAPTER_DISPLAY@@QEAAJP6AJPEAVOUTPUTDUPL_MGR@@PEAX@Z1@Z @ 0x1C00867B8 (-IterateOutputDuplMgrsForRender@ADAPTER_DISPLAY@@QEAAJP6AJPEAVOUTPUTDUPL_MGR@@PEAX@Z1@Z.c)
 *     ?Reset@DISPLAY_SOURCE@@AEAAJPEAU_TDR_RECOVERY_CONTEXT@@@Z @ 0x1C01485B4 (-Reset@DISPLAY_SOURCE@@AEAAJPEAU_TDR_RECOVERY_CONTEXT@@@Z.c)
 *     ?Reset@BLTQUEUE@@QEAAXE@Z @ 0x1C018444C (-Reset@BLTQUEUE@@QEAAXE@Z.c)
 *     DmmAssignEmptyTopologyToActiveVidPn @ 0x1C01A3350 (DmmAssignEmptyTopologyToActiveVidPn.c)
 */

__int64 __fastcall ADAPTER_DISPLAY::Reset(struct DXGADAPTER **this, struct _TDR_RECOVERY_CONTEXT *a2)
{
  struct _TDR_RECOVERY_CONTEXT *v3; // rdx
  __int64 v4; // rcx
  int active; // esi
  __int64 v6; // rax
  unsigned int i; // edi
  __int64 v8; // rcx
  __int64 v9; // rax
  struct DXGADAPTER **j; // rax
  struct DXGADAPTER **k; // rax
  struct DXGADAPTER *v12; // rbx
  unsigned int m; // edi
  _BYTE v15[16]; // [rsp+20h] [rbp-28h] BYREF
  _BYTE v16[24]; // [rsp+30h] [rbp-18h] BYREF

  active = DmmAssignEmptyTopologyToActiveVidPn(this[2]);
  if ( active < 0 )
  {
    v6 = WdLogNewEntry5_WdAssertion(v4);
    *(_QWORD *)(v6 + 24) = 4681LL;
    WdLogEvent5_WdAssertion(v6);
  }
  for ( i = 0; i < *((_DWORD *)this + 20); ++i )
    DISPLAY_SOURCE::Reset((struct DXGADAPTER *)((char *)this[14] + 1016 * i), v3);
  ADAPTER_DISPLAY::IterateOutputDuplMgrsForRender(
    (ADAPTER_DISPLAY *)this,
    (__int64 (__fastcall *)(__int64, void *))lambda_8c4f9d5363fac7cd16350590c99b22c5_::_lambda_invoker_cdecl_,
    0LL);
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(this[2]) )
  {
    v9 = WdLogNewEntry5_WdAssertion(v8);
    *(_QWORD *)(v9 + 24) = 5295LL;
    WdLogEvent5_WdAssertion(v9);
  }
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v16, (struct DXGFASTMUTEX *const)(this + 25));
  for ( j = (struct DXGADAPTER **)this[23]; j != this + 23; j = (struct DXGADAPTER **)*j )
    *((_BYTE *)j + 24) = 1;
  if ( v16[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v16);
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v15, (struct DXGFASTMUTEX *const)(this + 3));
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v15);
  for ( k = (struct DXGADAPTER **)this[8]; k != this + 8 && k; k = (struct DXGADAPTER **)*k )
    *((_DWORD *)k + 14) = 0;
  DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v15);
  v12 = this[32];
  if ( v12 )
  {
    for ( m = 0; m < *(_DWORD *)v12; ++m )
      BLTQUEUE::Reset((BLTQUEUE *)(*((_QWORD *)v12 + 1) + 2632LL * m), 0);
  }
  if ( v15[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v15);
  return (unsigned int)active;
}
