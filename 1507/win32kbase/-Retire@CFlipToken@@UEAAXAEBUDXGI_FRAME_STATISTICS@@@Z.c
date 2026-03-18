/*
 * XREFs of ?Retire@CFlipToken@@UEAAXAEBUDXGI_FRAME_STATISTICS@@@Z @ 0x1C0047D80
 * Callers:
 *     <none>
 * Callees:
 *     ?TraceStateChanged@CFlipToken@@AEBAXXZ @ 0x1C0047B34 (-TraceStateChanged@CFlipToken@@AEBAXXZ.c)
 *     ?UpdateStats@CCompositionSurface@@IEAAJ_KAEBUCSM_BUFFER_STATISTICS@@@Z @ 0x1C00489FC (-UpdateStats@CCompositionSurface@@IEAAJ_KAEBUCSM_BUFFER_STATISTICS@@@Z.c)
 *     memset @ 0x1C0085E40 (memset.c)
 *     ?AcquireLockExclusive@CPushLock@@QEAAJXZ @ 0x1C00AF6B8 (-AcquireLockExclusive@CPushLock@@QEAAJXZ.c)
 *     ?ReleaseLock@CPushLock@@QEBAXXZ @ 0x1C00AF724 (-ReleaseLock@CPushLock@@QEBAXXZ.c)
 */

void __fastcall CFlipToken::Retire(CFlipToken *this, const struct DXGI_FRAME_STATISTICS *a2)
{
  __int128 v4; // xmm0
  int v5; // eax
  __int128 v6; // xmm1
  __int64 v7; // rbx
  unsigned __int64 v8; // rsi
  _OWORD v9[3]; // [rsp+20h] [rbp-38h] BYREF

  memset((char *)v9 + 4, 0, 0x2CuLL);
  *((_DWORD *)this + 6) = 5;
  CFlipToken::TraceStateChanged(this);
  v4 = *(_OWORD *)a2;
  v5 = *((_DWORD *)this + 27);
  v6 = *((_OWORD *)a2 + 1);
  v7 = *((_QWORD *)this + 4);
  LODWORD(v9[0]) = 0;
  v8 = *((_QWORD *)this + 5);
  v9[1] = v4;
  LODWORD(v9[1]) = v5;
  v9[2] = v6;
  if ( (int)CPushLock::AcquireLockExclusive((CPushLock *)(v7 + 32)) >= 0 )
  {
    CCompositionSurface::UpdateStats((CCompositionSurface *)(v7 + 24), v8, (const struct CSM_BUFFER_STATISTICS *)v9);
    CPushLock::ReleaseLock((CPushLock *)(v7 + 32));
  }
}
