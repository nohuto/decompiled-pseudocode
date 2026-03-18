/*
 * XREFs of ?Discard@CCompositionFrame@DirectComposition@@QEAAXXZ @ 0x1C001978C
 * Callers:
 *     NtDCompositionDiscardFrame @ 0x1C0017640 (NtDCompositionDiscardFrame.c)
 *     NtDCompositionConfirmFrame @ 0x1C0017740 (NtDCompositionConfirmFrame.c)
 *     NtDCompositionGetFrameLegacyTokens @ 0x1C0017B80 (NtDCompositionGetFrameLegacyTokens.c)
 *     NtDCompositionGetConnectionBatch @ 0x1C0017E70 (NtDCompositionGetConnectionBatch.c)
 *     ?BeginFrame@CConnection@DirectComposition@@QEAAJAEBUCOMPOSITION_FRAME_INFO@@PEA_K@Z @ 0x1C00181B0 (-BeginFrame@CConnection@DirectComposition@@QEAAJAEBUCOMPOSITION_FRAME_INFO@@PEA_K@Z.c)
 *     ?RemoveCompositionFrame@CConnection@DirectComposition@@QEAAJ_K@Z @ 0x1C0018460 (-RemoveCompositionFrame@CConnection@DirectComposition@@QEAAJ_K@Z.c)
 *     ?DiscardAllCompositionFrames@CConnection@DirectComposition@@AEAAXXZ @ 0x1C00192AC (-DiscardAllCompositionFrames@CConnection@DirectComposition@@AEAAXXZ.c)
 *     NtDCompositionGetFrameSurfaceUpdates @ 0x1C0019420 (NtDCompositionGetFrameSurfaceUpdates.c)
 *     ?Release@CCompositionFrame@DirectComposition@@QEBAJXZ @ 0x1C00196F8 (-Release@CCompositionFrame@DirectComposition@@QEBAJXZ.c)
 * Callees:
 *     ??_GCLegacyTokenBuffer@@AEAAPEAXI@Z @ 0x1C0016FA8 (--_GCLegacyTokenBuffer@@AEAAPEAXI@Z.c)
 *     ?ReturnLegacyTokenBufferInternal@CTokenManager@@IEAAXPEAVCLegacyTokenBuffer@@@Z @ 0x1C001A4E0 (-ReturnLegacyTokenBufferInternal@CTokenManager@@IEAAXPEAVCLegacyTokenBuffer@@@Z.c)
 *     ?ReturnToApplication@CBatch@DirectComposition@@QEAAX_N@Z @ 0x1C001AE60 (-ReturnToApplication@CBatch@DirectComposition@@QEAAX_N@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0089D10 (_guard_dispatch_icall_nop.c)
 */

void __fastcall DirectComposition::CCompositionFrame::Discard(DirectComposition::CCompositionFrame *this)
{
  CTokenManager *v2; // rcx
  _QWORD **v3; // rsi
  _QWORD **v4; // rax
  _QWORD *v5; // rcx
  __int64 **v6; // rdi
  __int64 *v7; // rax
  __int64 v8; // rcx
  void (__fastcall ***v9)(_QWORD, __int64); // rbx
  DirectComposition::CBatch *v10; // rcx
  __int64 v11; // rbx
  __int64 *v12; // rbx

  if ( *((_QWORD *)this + 10) )
  {
    do
    {
      v10 = (DirectComposition::CBatch *)*((_QWORD *)this + 10);
      v11 = *(_QWORD *)v10;
      DirectComposition::CBatch::ReturnToApplication(v10, 1);
      *((_QWORD *)this + 10) = v11;
    }
    while ( v11 );
  }
  v2 = (CTokenManager *)*((_QWORD *)this + 11);
  *((_DWORD *)this + 18) = 3;
  if ( v2 )
  {
    if ( g_pTokenManager )
      CTokenManager::ReturnLegacyTokenBufferInternal(v2, v2);
    else
      CLegacyTokenBuffer::`scalar deleting destructor'(v2);
    *((_QWORD *)this + 11) = 0LL;
  }
  *((_DWORD *)this + 24) = 0;
  v3 = (_QWORD **)((char *)this + 136);
  v4 = (_QWORD **)*((_QWORD *)this + 17);
  v5 = *v4;
  if ( v4[1] != (_QWORD *)((char *)this + 136) || (_QWORD **)v5[1] != v4 )
    __fastfail(3u);
  while ( 1 )
  {
    *v3 = v5;
    v5[1] = v3;
    if ( v4 == v3 )
      break;
    v9 = (void (__fastcall ***)(_QWORD, __int64))(v4 - 1);
    ((void (__fastcall *)(_QWORD **))(*(v4 - 1))[7])(v4 - 1);
    (**v9)(v9, 1LL);
    v4 = (_QWORD **)*v3;
    v5 = (_QWORD *)**v3;
    if ( (_QWORD **)(*v3)[1] != v3 || (_QWORD **)v5[1] != v4 )
      __fastfail(3u);
  }
  v6 = (__int64 **)((char *)this + 152);
  v7 = *v6;
  v8 = **v6;
  if ( (__int64 **)(*v6)[1] != v6 || *(__int64 **)(v8 + 8) != v7 )
    __fastfail(3u);
  while ( 1 )
  {
    *v6 = (__int64 *)v8;
    *(_QWORD *)(v8 + 8) = v6;
    if ( v7 == (__int64 *)v6 )
      break;
    v12 = v7 - 5;
    (*(void (__fastcall **)(__int64 *))(*(v7 - 1) + 56))(v7 - 1);
    ObfDereferenceObject(v12);
    v7 = *v6;
    v8 = **v6;
    if ( (__int64 **)(*v6)[1] != v6 || *(__int64 **)(v8 + 8) != v7 )
      __fastfail(3u);
  }
}
