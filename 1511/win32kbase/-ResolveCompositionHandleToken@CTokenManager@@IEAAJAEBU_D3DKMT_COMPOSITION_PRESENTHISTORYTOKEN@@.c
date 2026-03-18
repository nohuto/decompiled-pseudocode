/*
 * XREFs of ?ResolveCompositionHandleToken@CTokenManager@@IEAAJAEBU_D3DKMT_COMPOSITION_PRESENTHISTORYTOKEN@@@Z @ 0x1C003CBA8
 * Callers:
 *     ?ProcessDxgkAdapterTokens@CTokenManager@@IEAAJI@Z @ 0x1C003CD0C (-ProcessDxgkAdapterTokens@CTokenManager@@IEAAJI@Z.c)
 * Callees:
 *     ?ResolveHandle@CompositionObject@@SAJPEAXKDW4CompositionObjectType@@PEAPEAU1@@Z @ 0x1C0039408 (-ResolveHandle@CompositionObject@@SAJPEAXKDW4CompositionObjectType@@PEAPEAU1@@Z.c)
 *     ?NotifyPresent@CSynchronizationManager@DirectComposition@@SAX_K_N@Z @ 0x1C0045E58 (-NotifyPresent@CSynchronizationManager@DirectComposition@@SAX_K_N@Z.c)
 *     ?MarkCompleted@CompositionTokenObject@@QEAAJXZ @ 0x1C004600C (-MarkCompleted@CompositionTokenObject@@QEAAJXZ.c)
 */

__int64 __fastcall CTokenManager::ResolveCompositionHandleToken(
        CTokenManager *this,
        const struct _D3DKMT_COMPOSITION_PRESENTHISTORYTOKEN *a2)
{
  void *hPrivateData; // rsi
  int v4; // edi
  _QWORD *v5; // rbx
  CTokenManager **v6; // rax
  CTokenManager *v7; // rdx
  PVOID Object; // [rsp+48h] [rbp+10h] BYREF

  hPrivateData = (void *)a2->hPrivateData;
  Object = 0LL;
  v4 = CompositionObject::ResolveHandle(hPrivateData, 2u, 1, 4, &Object);
  if ( v4 >= 0 )
  {
    v5 = Object;
    v4 = CompositionTokenObject::MarkCompleted((CompositionTokenObject *)Object);
    if ( v4 < 0 )
    {
      ObfDereferenceObject(v5);
    }
    else
    {
      v6 = (CTokenManager **)*((_QWORD *)this + 26);
      v7 = (CTokenManager *)(v5 + 5);
      v5[5] = (char *)this + 200;
      v5[6] = v6;
      if ( *v6 != (CTokenManager *)((char *)this + 200) )
        __fastfail(3u);
      *v6 = v7;
      *((_QWORD *)this + 26) = v7;
      DirectComposition::CSynchronizationManager::NotifyPresent(v5[14], 1);
    }
  }
  if ( hPrivateData )
    NtClose(hPrivateData);
  return (unsigned int)v4;
}
