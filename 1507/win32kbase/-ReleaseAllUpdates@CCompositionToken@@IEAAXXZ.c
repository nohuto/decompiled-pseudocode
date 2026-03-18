/*
 * XREFs of ?ReleaseAllUpdates@CCompositionToken@@IEAAXXZ @ 0x1C004C9FC
 * Callers:
 *     ?MarkInvalid@CCompositionToken@@UEAAXXZ @ 0x1C004CB60 (-MarkInvalid@CCompositionToken@@UEAAXXZ.c)
 *     ?Initialize@CCompositionToken@@IEAAJAEBUCompositionTokenInitInfo@@@Z @ 0x1C004CD5C (-Initialize@CCompositionToken@@IEAAJAEBUCompositionTokenInitInfo@@@Z.c)
 * Callees:
 *     Win32FreePool @ 0x1C0033BB0 (Win32FreePool.c)
 *     ?Release@CRegion@@QEBAJXZ @ 0x1C004A4FC (-Release@CRegion@@QEBAJXZ.c)
 */

void __fastcall CCompositionToken::ReleaseAllUpdates(CCompositionToken *this)
{
  unsigned int i; // edi
  __int64 v3; // rsi
  CRegion *v4; // rcx
  void *v5; // rcx

  if ( *((_QWORD *)this + 9) )
  {
    for ( i = 0; i < *((_DWORD *)this + 20); ++i )
    {
      v3 = 32LL * i;
      v4 = *(CRegion **)(v3 + *((_QWORD *)this + 9) + 24);
      if ( v4 )
        CRegion::Release(v4);
      v5 = *(void **)(v3 + *((_QWORD *)this + 9) + 8);
      if ( v5 )
        ObfDereferenceObject(v5);
    }
    Win32FreePool();
  }
  *((_QWORD *)this + 9) = 0LL;
  *((_DWORD *)this + 20) = 0;
}
