/*
 * XREFs of ?Reset@ADAPTER_DISPLAY@@QEAAJPEAU_TDR_RECOVERY_CONTEXT@@@Z @ 0x1C01283F4
 * Callers:
 *     ?Reset@DXGADAPTER@@QEAAJPEAU_TDR_RECOVERY_CONTEXT@@@Z @ 0x1C01288A0 (-Reset@DXGADAPTER@@QEAAJPEAU_TDR_RECOVERY_CONTEXT@@@Z.c)
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C000250C (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002878 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0002938 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002970 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?IterateOutputDuplMgrsForRender@ADAPTER_DISPLAY@@QEAAJP6AJPEAVOUTPUTDUPL_MGR@@PEAX@Z1@Z @ 0x1C0095350 (-IterateOutputDuplMgrsForRender@ADAPTER_DISPLAY@@QEAAJP6AJPEAVOUTPUTDUPL_MGR@@PEAX@Z1@Z.c)
 *     ?Reset@DISPLAY_SOURCE@@AEAAJPEAU_TDR_RECOVERY_CONTEXT@@@Z @ 0x1C01287C0 (-Reset@DISPLAY_SOURCE@@AEAAJPEAU_TDR_RECOVERY_CONTEXT@@@Z.c)
 *     ?Reset@BLTQUEUE@@QEAAXE@Z @ 0x1C015A7D4 (-Reset@BLTQUEUE@@QEAAXE@Z.c)
 *     DmmAssignEmptyTopologyToActiveVidPn @ 0x1C0175350 (DmmAssignEmptyTopologyToActiveVidPn.c)
 */

__int64 __fastcall ADAPTER_DISPLAY::Reset(ADAPTER_DISPLAY *this, struct _TDR_RECOVERY_CONTEXT *a2)
{
  struct _TDR_RECOVERY_CONTEXT *v3; // rdx
  __int64 v4; // rcx
  int active; // esi
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v8; // rax
  unsigned int i; // edi
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // rax
  _BYTE *j; // rax
  _DWORD *k; // rax
  __int64 v17; // rbx
  unsigned int m; // edi
  _BYTE v20[16]; // [rsp+20h] [rbp-28h] BYREF
  _BYTE v21[24]; // [rsp+30h] [rbp-18h] BYREF

  active = DmmAssignEmptyTopologyToActiveVidPn(*((_QWORD *)this + 2), a2);
  if ( active < 0 )
  {
    v8 = WdLogNewEntry5_WdAssertion(v4, v3, v6, v7);
    *(_QWORD *)(v8 + 24) = 19687LL;
    WdLogEvent5_WdAssertion(v8);
  }
  for ( i = 0; i < *((_DWORD *)this + 20); ++i )
    DISPLAY_SOURCE::Reset((DISPLAY_SOURCE *)(*((_QWORD *)this + 14) + 1008LL * i), v3);
  ADAPTER_DISPLAY::IterateOutputDuplMgrsForRender(
    this,
    (__int64 (__fastcall *)(__int64, __int64))lambda_e1b948e1d41ccab4a78cb003c390c9f7_::_helper_func_cdecl_,
    0LL,
    v7);
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(*((DXGADAPTER **)this + 2)) )
  {
    v14 = WdLogNewEntry5_WdAssertion(v11, v10, v12, v13);
    *(_QWORD *)(v14 + 24) = 22737LL;
    WdLogEvent5_WdAssertion(v14);
  }
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v21, (ADAPTER_DISPLAY *)((char *)this + 200));
  for ( j = (_BYTE *)*((_QWORD *)this + 23); j != (char *)this + 184; j = *(_BYTE **)j )
    j[24] = 1;
  if ( v21[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v21);
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v20, (ADAPTER_DISPLAY *)((char *)this + 24));
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v20);
  for ( k = (_DWORD *)*((_QWORD *)this + 8); k != (_DWORD *)((char *)this + 64) && k; k = *(_DWORD **)k )
    k[14] = 0;
  DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v20);
  v17 = *((_QWORD *)this + 31);
  if ( v17 )
  {
    for ( m = 0; m < *(_DWORD *)v17; ++m )
      BLTQUEUE::Reset((BLTQUEUE *)(*(_QWORD *)(v17 + 8) + 2384LL * m), 0);
  }
  if ( v20[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v20);
  return (unsigned int)active;
}
