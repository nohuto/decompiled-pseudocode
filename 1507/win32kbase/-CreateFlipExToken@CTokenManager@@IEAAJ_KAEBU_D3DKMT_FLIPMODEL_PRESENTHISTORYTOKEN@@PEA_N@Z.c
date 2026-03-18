/*
 * XREFs of ?CreateFlipExToken@CTokenManager@@IEAAJ_KAEBU_D3DKMT_FLIPMODEL_PRESENTHISTORYTOKEN@@PEA_N@Z @ 0x1C0046FD8
 * Callers:
 *     ?ProcessDxgkAdapterTokens@CTokenManager@@IEAAJI@Z @ 0x1C00470AC (-ProcessDxgkAdapterTokens@CTokenManager@@IEAAJI@Z.c)
 * Callees:
 *     ?NotifyPresent@CSynchronizationManager@DirectComposition@@SAX_K_N@Z @ 0x1C0021BA0 (-NotifyPresent@CSynchronizationManager@DirectComposition@@SAX_K_N@Z.c)
 *     ?EnsureTokenQueue@CTokenManager@@IEAAJPEAUCompositionSurfaceObject@@PEAPEAUTokenQueueTableEntry@1@@Z @ 0x1C0046E18 (-EnsureTokenQueue@CTokenManager@@IEAAJPEAUCompositionSurfaceObject@@PEAPEAUTokenQueueTableEntry@.c)
 *     ?AddToken@CTokenQueue@@QEAAXPEAVCToken@@@Z @ 0x1C0047794 (-AddToken@CTokenQueue@@QEAAXPEAVCToken@@@Z.c)
 *     ?CreateFromCompletedFlipToken@CToken@@SAJ_KAEBU_D3DKMT_FLIPMODEL_PRESENTHISTORYTOKEN@@PEAPEAV1@PEA_N@Z @ 0x1C0047824 (-CreateFromCompletedFlipToken@CToken@@SAJ_KAEBU_D3DKMT_FLIPMODEL_PRESENTHISTORYTOKEN@@PEAPEAV1@P.c)
 *     _guard_dispatch_icall_nop @ 0x1C0085AE0 (_guard_dispatch_icall_nop.c)
 *     ?ReleaseLock@CPushLock@@QEBAXXZ @ 0x1C00AF724 (-ReleaseLock@CPushLock@@QEBAXXZ.c)
 *     ?AcquireLockShared@CPushLock@@QEBAJXZ @ 0x1C00B3DC8 (-AcquireLockShared@CPushLock@@QEBAJXZ.c)
 */

__int64 __fastcall CTokenManager::CreateFlipExToken(
        CTokenManager *this,
        unsigned __int64 a2,
        const struct _D3DKMT_FLIPMODEL_PRESENTHISTORYTOKEN *a3,
        bool *a4)
{
  int v7; // edi
  bool v8; // zf
  CompositionObject **v9; // rbx
  CompositionObject *v10; // rbx
  CPushLock *v11; // rbp
  char v12; // bl
  UINT64 CompositionSyncKey; // rcx
  CTokenManager **v15; // rdx
  CompositionObject **v16; // rax
  void *v17; // rcx
  CompositionObject **PreviousState; // [rsp+58h] [rbp+20h] BYREF

  *a4 = 0;
  v7 = CToken::CreateFromCompletedFlipToken(a2, a3, (struct CToken **)&PreviousState, a4);
  if ( v7 < 0 )
    return (unsigned int)v7;
  v8 = !*a4;
  v9 = PreviousState;
  if ( !v8 )
  {
    v15 = (CTokenManager **)*((_QWORD *)this + 25);
    v16 = PreviousState + 1;
    PreviousState[1] = (CompositionObject *)v15;
    v9[2] = (CTokenManager *)((char *)this + 200);
    if ( v15[1] != (CTokenManager *)((char *)this + 200) )
      __fastfail(3u);
    v15[1] = (CTokenManager *)v16;
    *((_QWORD *)this + 25) = v16;
LABEL_16:
    if ( v7 < 0 )
      return (unsigned int)v7;
    goto LABEL_5;
  }
  v7 = CTokenManager::EnsureTokenQueue(this, PreviousState[4], &PreviousState);
  if ( v7 < 0 )
  {
    (*(void (__fastcall **)(CompositionObject **, __int64))*v9)(v9, 1LL);
    goto LABEL_16;
  }
  CTokenQueue::AddToken(PreviousState[1], (struct CToken *)v9);
LABEL_5:
  if ( *((_BYTE *)v9 + 89) )
  {
    LODWORD(PreviousState) = 0;
    ZwSetEvent(*((HANDLE *)this + 5), (PLONG)&PreviousState);
  }
  v10 = v9[4];
  if ( v10 )
  {
    v11 = (CompositionObject *)((char *)v10 + 32);
    if ( (int)CPushLock::AcquireLockShared((CompositionObject *)((char *)v10 + 32)) >= 0 )
    {
      v12 = *((_BYTE *)v10 + 112);
      CPushLock::ReleaseLock(v11);
      if ( v12 )
      {
        LODWORD(PreviousState) = 0;
        v17 = (void *)*((_QWORD *)this + 6);
        if ( v17 )
          ZwSetEvent(v17, (PLONG)&PreviousState);
      }
    }
  }
  CompositionSyncKey = a3->CompositionSyncKey;
  if ( CompositionSyncKey && !a3->RemainingTokens )
    DirectComposition::CSynchronizationManager::NotifyPresent(CompositionSyncKey, 1);
  return (unsigned int)v7;
}
