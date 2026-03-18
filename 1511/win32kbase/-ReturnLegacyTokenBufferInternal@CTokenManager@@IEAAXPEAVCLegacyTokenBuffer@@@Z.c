/*
 * XREFs of ?ReturnLegacyTokenBufferInternal@CTokenManager@@IEAAXPEAVCLegacyTokenBuffer@@@Z @ 0x1C003D2B8
 * Callers:
 *     NtDCompositionRetireFrame @ 0x1C003A8A0 (NtDCompositionRetireFrame.c)
 *     ?Discard@CCompositionFrame@DirectComposition@@QEAAXXZ @ 0x1C003BB68 (-Discard@CCompositionFrame@DirectComposition@@QEAAXXZ.c)
 * Callees:
 *     ?Reset@CLegacyTokenBuffer@@IEAAXXZ @ 0x1C003D7C0 (-Reset@CLegacyTokenBuffer@@IEAAXXZ.c)
 *     ??_GCLegacyTokenBuffer@@AEAAPEAXI@Z @ 0x1C003D8A4 (--_GCLegacyTokenBuffer@@AEAAPEAXI@Z.c)
 */

void __fastcall CTokenManager::ReturnLegacyTokenBufferInternal(CTokenManager *this, struct CLegacyTokenBuffer *a2)
{
  CTokenManager *v2; // rdi
  unsigned int v4; // edx
  __int64 v5; // rdx

  v2 = g_pTokenManager;
  CLegacyTokenBuffer::Reset(a2);
  if ( *((_DWORD *)v2 + 28) > 3u )
  {
    if ( a2 )
      CLegacyTokenBuffer::`scalar deleting destructor'(a2, v4);
  }
  else
  {
    ExAcquirePushLockExclusiveEx((char *)v2 + 64, 0LL);
    *(_QWORD *)v2 = KeGetCurrentThread();
    v5 = *((_QWORD *)v2 + 12);
    *(_QWORD *)a2 = v5;
    *((_QWORD *)a2 + 1) = (char *)v2 + 96;
    if ( *(CTokenManager **)(v5 + 8) != (CTokenManager *)((char *)v2 + 96) )
      __fastfail(3u);
    *(_QWORD *)(v5 + 8) = a2;
    *((_QWORD *)v2 + 12) = a2;
    ++*((_DWORD *)v2 + 28);
    *(_QWORD *)v2 = 0LL;
    ExReleasePushLockExclusiveEx((char *)v2 + 64);
  }
}
