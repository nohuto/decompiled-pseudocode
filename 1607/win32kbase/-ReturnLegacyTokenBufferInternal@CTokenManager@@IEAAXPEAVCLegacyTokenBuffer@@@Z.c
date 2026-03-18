/*
 * XREFs of ?ReturnLegacyTokenBufferInternal@CTokenManager@@IEAAXPEAVCLegacyTokenBuffer@@@Z @ 0x1C001A4E0
 * Callers:
 *     ?Discard@CCompositionFrame@DirectComposition@@QEAAXXZ @ 0x1C001978C (-Discard@CCompositionFrame@DirectComposition@@QEAAXXZ.c)
 *     ?ReturnLegacyTokenBuffer@CCompositionFrame@DirectComposition@@IEAAXXZ @ 0x1C0019AD0 (-ReturnLegacyTokenBuffer@CCompositionFrame@DirectComposition@@IEAAXXZ.c)
 * Callees:
 *     ?Reset@CLegacyTokenBuffer@@IEAAXXZ @ 0x1C0016EE8 (-Reset@CLegacyTokenBuffer@@IEAAXXZ.c)
 *     ??_GCLegacyTokenBuffer@@AEAAPEAXI@Z @ 0x1C0016FA8 (--_GCLegacyTokenBuffer@@AEAAPEAXI@Z.c)
 *     ?AcquireTokenManagerLock@CTokenManager@@AEAAXXZ @ 0x1C001A9BC (-AcquireTokenManagerLock@CTokenManager@@AEAAXXZ.c)
 */

void __fastcall CTokenManager::ReturnLegacyTokenBufferInternal(CTokenManager *this, struct CLegacyTokenBuffer *a2)
{
  CTokenManager *v2; // rdi
  _QWORD *v4; // rax
  __int64 v5; // rdx

  v2 = g_pTokenManager;
  CLegacyTokenBuffer::Reset(a2);
  if ( *((_DWORD *)v2 + 28) > 3u )
  {
    if ( a2 )
      CLegacyTokenBuffer::`scalar deleting destructor'(a2);
  }
  else
  {
    CTokenManager::AcquireTokenManagerLock(v2);
    v4 = (_QWORD *)((char *)v2 + 96);
    v5 = *((_QWORD *)v2 + 12);
    if ( *(CTokenManager **)(v5 + 8) != (CTokenManager *)((char *)v2 + 96) )
      __fastfail(3u);
    *(_QWORD *)a2 = v5;
    *((_QWORD *)a2 + 1) = v4;
    *(_QWORD *)(v5 + 8) = a2;
    *v4 = a2;
    ++*((_DWORD *)v2 + 28);
    *((_QWORD *)v2 + 8) = 0LL;
    ExReleasePushLockExclusiveEx((char *)v2 + 56, 0LL);
  }
}
