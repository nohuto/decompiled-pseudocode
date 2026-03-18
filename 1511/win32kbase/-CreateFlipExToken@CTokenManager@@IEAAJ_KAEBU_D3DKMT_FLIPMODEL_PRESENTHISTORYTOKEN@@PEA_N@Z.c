/*
 * XREFs of ?CreateFlipExToken@CTokenManager@@IEAAJ_KAEBU_D3DKMT_FLIPMODEL_PRESENTHISTORYTOKEN@@PEA_N@Z @ 0x1C003CC5C
 * Callers:
 *     ?ProcessDxgkAdapterTokens@CTokenManager@@IEAAJI@Z @ 0x1C003CD0C (-ProcessDxgkAdapterTokens@CTokenManager@@IEAAJI@Z.c)
 * Callees:
 *     ?CreateFromCompletedFlipToken@CToken@@SAJ_KAEBU_D3DKMT_FLIPMODEL_PRESENTHISTORYTOKEN@@PEAPEAV1@@Z @ 0x1C00392F0 (-CreateFromCompletedFlipToken@CToken@@SAJ_KAEBU_D3DKMT_FLIPMODEL_PRESENTHISTORYTOKEN@@PEAPEAV1@@.c)
 *     ?GetAnalogExclusive@CompositionSurfaceObject@@QEAA_NXZ @ 0x1C0039CF8 (-GetAnalogExclusive@CompositionSurfaceObject@@QEAA_NXZ.c)
 *     ?AddTokenToQueue@CTokenManager@@IEAAJPEAVCToken@@@Z @ 0x1C003CB68 (-AddTokenToQueue@CTokenManager@@IEAAJPEAVCToken@@@Z.c)
 *     ?NotifyPresent@CSynchronizationManager@DirectComposition@@SAX_K_N@Z @ 0x1C0045E58 (-NotifyPresent@CSynchronizationManager@DirectComposition@@SAX_K_N@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0088D70 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CTokenManager::CreateFlipExToken(
        CTokenManager *this,
        unsigned __int64 a2,
        const struct _D3DKMT_FLIPMODEL_PRESENTHISTORYTOKEN *a3,
        bool *a4)
{
  int v6; // edi
  struct CToken *v7; // rbx
  CompositionSurfaceObject *v8; // rcx
  UINT64 CompositionSyncKey; // rcx
  __int64 v11; // rdx
  char *v12; // rax
  void *v13; // rcx
  struct CToken *PreviousState; // [rsp+48h] [rbp+20h] BYREF

  *a4 = 0;
  v6 = CToken::CreateFromCompletedFlipToken(a2, a3, &PreviousState);
  if ( v6 < 0 )
    return (unsigned int)v6;
  v7 = PreviousState;
  if ( (*(unsigned __int8 (__fastcall **)(struct CToken *))(*(_QWORD *)PreviousState + 144LL))(PreviousState)
    && !(*(unsigned __int8 (__fastcall **)(struct CToken *))(*(_QWORD *)v7 + 152LL))(v7) )
  {
    v11 = *((_QWORD *)this + 29);
    v12 = (char *)v7 + 8;
    *((_QWORD *)v7 + 1) = v11;
    *((_QWORD *)v7 + 2) = (char *)this + 232;
    if ( *(CTokenManager **)(v11 + 8) != (CTokenManager *)((char *)this + 232) )
      __fastfail(3u);
    *(_QWORD *)(v11 + 8) = v12;
    *((_QWORD *)this + 29) = v12;
LABEL_15:
    if ( v6 < 0 )
      return (unsigned int)v6;
    goto LABEL_4;
  }
  v6 = CTokenManager::AddTokenToQueue(this, (struct CompositionSurfaceObject **)v7);
  if ( v6 < 0 )
  {
    (**(void (__fastcall ***)(struct CToken *, __int64))v7)(v7, 1LL);
    goto LABEL_15;
  }
LABEL_4:
  if ( *((_BYTE *)v7 + 89) )
  {
    LODWORD(PreviousState) = 0;
    ZwSetEvent(*((HANDLE *)this + 6), (PLONG)&PreviousState);
  }
  v8 = (CompositionSurfaceObject *)*((_QWORD *)v7 + 4);
  if ( v8 )
  {
    if ( CompositionSurfaceObject::GetAnalogExclusive(v8) )
    {
      LODWORD(PreviousState) = 0;
      v13 = (void *)*((_QWORD *)this + 7);
      if ( v13 )
        ZwSetEvent(v13, (PLONG)&PreviousState);
    }
  }
  CompositionSyncKey = a3->CompositionSyncKey;
  if ( CompositionSyncKey && !a3->RemainingTokens )
    DirectComposition::CSynchronizationManager::NotifyPresent(CompositionSyncKey, 1);
  return (unsigned int)v6;
}
