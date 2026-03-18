/*
 * XREFs of ?ResolveCompositionHandleToken@CTokenManager@@IEAAJAEBU_D3DKMT_COMPOSITION_PRESENTHISTORYTOKEN@@@Z @ 0x1C0019E20
 * Callers:
 *     ?ProcessDxgkAdapterTokens@CTokenManager@@IEAAJI@Z @ 0x1C0019F9C (-ProcessDxgkAdapterTokens@CTokenManager@@IEAAJI@Z.c)
 * Callees:
 *     ?NotifyPresent@CSynchronizationManager@DirectComposition@@SAX_K_N@Z @ 0x1C000E0E0 (-NotifyPresent@CSynchronizationManager@DirectComposition@@SAX_K_N@Z.c)
 *     ?MarkCompleted@CompositionTokenObject@@QEAAJXZ @ 0x1C000E1E0 (-MarkCompleted@CompositionTokenObject@@QEAAJXZ.c)
 *     ?ResolveHandle@CompositionObject@@SAJPEAXKDW4CompositionObjectType@@PEAPEAU1@@Z @ 0x1C004866C (-ResolveHandle@CompositionObject@@SAJPEAXKDW4CompositionObjectType@@PEAPEAU1@@Z.c)
 */

__int64 __fastcall CTokenManager::ResolveCompositionHandleToken(
        CTokenManager *this,
        const struct _D3DKMT_COMPOSITION_PRESENTHISTORYTOKEN *a2,
        __int64 a3)
{
  void *hPrivateData; // rsi
  int v5; // edi
  CTokenManager **v6; // rdx

  hPrivateData = (void *)a2->hPrivateData;
  LOBYTE(a3) = 1;
  v5 = CompositionObject::ResolveHandle(a2->hPrivateData, 2LL, a3);
  if ( v5 >= 0 )
  {
    v5 = CompositionTokenObject::MarkCompleted(0LL);
    if ( v5 < 0 )
    {
      ObfDereferenceObject(0LL);
    }
    else
    {
      v6 = (CTokenManager **)*((_QWORD *)this + 26);
      if ( *v6 != (CTokenManager *)((char *)this + 200) )
        __fastfail(3u);
      MEMORY[0x30] = *((_QWORD *)this + 26);
      MEMORY[0x28] = (char *)this + 200;
      *v6 = (CTokenManager *)40;
      *((_QWORD *)this + 26) = 40LL;
      DirectComposition::CSynchronizationManager::NotifyPresent(MEMORY[0x70], 1);
    }
  }
  if ( hPrivateData )
    NtClose(hPrivateData);
  return (unsigned int)v5;
}
