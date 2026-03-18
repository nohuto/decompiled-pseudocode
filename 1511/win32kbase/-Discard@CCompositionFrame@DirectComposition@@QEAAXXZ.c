/*
 * XREFs of ?Discard@CCompositionFrame@DirectComposition@@QEAAXXZ @ 0x1C003BB68
 * Callers:
 *     NtDCompositionConfirmFrame @ 0x1C0011A20 (NtDCompositionConfirmFrame.c)
 *     NtDCompositionGetConnectionBatch @ 0x1C0012CD0 (NtDCompositionGetConnectionBatch.c)
 *     ?DiscardAllCompositionFrames@CConnection@DirectComposition@@AEAAXXZ @ 0x1C0013AC4 (-DiscardAllCompositionFrames@CConnection@DirectComposition@@AEAAXXZ.c)
 *     NtDCompositionGetFrameSurfaceUpdates @ 0x1C0039690 (NtDCompositionGetFrameSurfaceUpdates.c)
 *     NtDCompositionRetireFrame @ 0x1C003A8A0 (NtDCompositionRetireFrame.c)
 *     NtDCompositionDiscardFrame @ 0x1C003AC20 (NtDCompositionDiscardFrame.c)
 *     NtDCompositionBeginFrame @ 0x1C003AE80 (NtDCompositionBeginFrame.c)
 *     NtDCompositionGetFrameLegacyTokens @ 0x1C003C5F0 (NtDCompositionGetFrameLegacyTokens.c)
 *     ?Release@CCompositionFrame@DirectComposition@@QEBAJXZ @ 0x1C00A89F4 (-Release@CCompositionFrame@DirectComposition@@QEBAJXZ.c)
 * Callees:
 *     ?ReturnToApplication@CBatch@DirectComposition@@QEAAX_N@Z @ 0x1C001A4F8 (-ReturnToApplication@CBatch@DirectComposition@@QEAAX_N@Z.c)
 *     ?ReturnLegacyTokenBufferInternal@CTokenManager@@IEAAXPEAVCLegacyTokenBuffer@@@Z @ 0x1C003D2B8 (-ReturnLegacyTokenBufferInternal@CTokenManager@@IEAAXPEAVCLegacyTokenBuffer@@@Z.c)
 *     ??_GCLegacyTokenBuffer@@AEAAPEAXI@Z @ 0x1C003D8A4 (--_GCLegacyTokenBuffer@@AEAAPEAXI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0088D70 (_guard_dispatch_icall_nop.c)
 */

void __fastcall DirectComposition::CCompositionFrame::Discard(
        DirectComposition::CCompositionFrame *this,
        unsigned int a2)
{
  CTokenManager *v3; // rcx
  _QWORD **v4; // rsi
  _QWORD **v5; // rax
  _QWORD *v6; // rcx
  __int64 **v7; // rdi
  __int64 *v8; // rax
  __int64 v9; // rcx
  void (__fastcall ***v10)(_QWORD, __int64); // rbx
  DirectComposition::CBatch *v11; // rcx
  __int64 v12; // rbx
  __int64 *v13; // rbx

  if ( *((_QWORD *)this + 10) )
  {
    do
    {
      v11 = (DirectComposition::CBatch *)*((_QWORD *)this + 10);
      v12 = *(_QWORD *)v11;
      DirectComposition::CBatch::ReturnToApplication(v11, 1);
      *((_QWORD *)this + 10) = v12;
    }
    while ( v12 );
  }
  v3 = (CTokenManager *)*((_QWORD *)this + 11);
  *((_DWORD *)this + 18) = 3;
  if ( v3 )
  {
    if ( g_pTokenManager )
      CTokenManager::ReturnLegacyTokenBufferInternal(v3, v3);
    else
      CLegacyTokenBuffer::`scalar deleting destructor'(v3, a2);
    *((_QWORD *)this + 11) = 0LL;
  }
  *((_DWORD *)this + 24) = 0;
  v4 = (_QWORD **)((char *)this + 136);
  v5 = (_QWORD **)*((_QWORD *)this + 17);
  v6 = *v5;
  if ( v5[1] != (_QWORD *)((char *)this + 136) || (_QWORD **)v6[1] != v5 )
    __fastfail(3u);
  while ( 1 )
  {
    *v4 = v6;
    v6[1] = v4;
    if ( v5 == v4 )
      break;
    v10 = (void (__fastcall ***)(_QWORD, __int64))(v5 - 1);
    ((void (__fastcall *)(_QWORD **))(*(v5 - 1))[7])(v5 - 1);
    (**v10)(v10, 1LL);
    v5 = (_QWORD **)*v4;
    v6 = (_QWORD *)**v4;
    if ( (_QWORD **)(*v4)[1] != v4 || (_QWORD **)v6[1] != v5 )
      __fastfail(3u);
  }
  v7 = (__int64 **)((char *)this + 152);
  v8 = *v7;
  v9 = **v7;
  if ( (__int64 **)(*v7)[1] != v7 || *(__int64 **)(v9 + 8) != v8 )
    __fastfail(3u);
  while ( 1 )
  {
    *v7 = (__int64 *)v9;
    *(_QWORD *)(v9 + 8) = v7;
    if ( v8 == (__int64 *)v7 )
      break;
    v13 = v8 - 5;
    (*(void (__fastcall **)(__int64 *))(*(v8 - 1) + 56))(v8 - 1);
    ObfDereferenceObject(v13);
    v8 = *v7;
    v9 = **v7;
    if ( (__int64 **)(*v7)[1] != v7 || *(__int64 **)(v9 + 8) != v8 )
      __fastfail(3u);
  }
}
