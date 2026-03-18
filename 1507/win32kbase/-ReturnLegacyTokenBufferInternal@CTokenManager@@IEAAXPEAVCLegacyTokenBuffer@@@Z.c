/*
 * XREFs of ?ReturnLegacyTokenBufferInternal@CTokenManager@@IEAAXPEAVCLegacyTokenBuffer@@@Z @ 0x1C00475E4
 * Callers:
 *     ?Discard@CCompositionFrame@DirectComposition@@QEAAXXZ @ 0x1C00469D0 (-Discard@CCompositionFrame@DirectComposition@@QEAAXXZ.c)
 * Callees:
 *     ?Reset@CLegacyTokenBuffer@@IEAAXXZ @ 0x1C00476B0 (-Reset@CLegacyTokenBuffer@@IEAAXXZ.c)
 *     ??_GCLegacyTokenBuffer@@AEAAPEAXI@Z @ 0x1C00706F4 (--_GCLegacyTokenBuffer@@AEAAPEAXI@Z.c)
 */

void __fastcall CTokenManager::ReturnLegacyTokenBufferInternal(CTokenManager *this, struct CLegacyTokenBuffer *a2)
{
  CTokenManager *v2; // rdi
  unsigned int v4; // edx
  __int64 v5; // rdx

  v2 = g_pTokenManager;
  CLegacyTokenBuffer::Reset(a2);
  if ( *((_DWORD *)v2 + 20) > 3u )
  {
    if ( a2 )
      CLegacyTokenBuffer::`scalar deleting destructor'(a2, v4);
  }
  else
  {
    ExAcquirePushLockExclusiveEx((char *)v2 + 56, 0LL);
    v5 = *((_QWORD *)v2 + 8);
    *(_QWORD *)a2 = v5;
    *((_QWORD *)a2 + 1) = (char *)v2 + 64;
    if ( *(CTokenManager **)(v5 + 8) != (CTokenManager *)((char *)v2 + 64) )
      __fastfail(3u);
    *(_QWORD *)(v5 + 8) = a2;
    *((_QWORD *)v2 + 8) = a2;
    ++*((_DWORD *)v2 + 20);
    ExReleasePushLockExclusiveEx((char *)v2 + 56, 0LL);
  }
}
