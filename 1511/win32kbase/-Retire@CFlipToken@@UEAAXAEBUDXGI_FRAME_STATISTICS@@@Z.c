/*
 * XREFs of ?Retire@CFlipToken@@UEAAXAEBUDXGI_FRAME_STATISTICS@@@Z @ 0x1C003BFA0
 * Callers:
 *     <none>
 * Callees:
 *     ?FindBuffer@CCompositionSurface@@IEBAJ_KPEAPEAVCCompositionBuffer@@@Z @ 0x1C003A2EC (-FindBuffer@CCompositionSurface@@IEBAJ_KPEAPEAVCCompositionBuffer@@@Z.c)
 *     ?TraceStateChanged@CFlipToken@@AEBAXXZ @ 0x1C003BC84 (-TraceStateChanged@CFlipToken@@AEBAXXZ.c)
 *     ?ReleaseLock@CPushLock@@QEBAXXZ @ 0x1C003C548 (-ReleaseLock@CPushLock@@QEBAXXZ.c)
 *     ?AcquireLockExclusive@CPushLock@@QEAAJXZ @ 0x1C003C584 (-AcquireLockExclusive@CPushLock@@QEAAJXZ.c)
 */

void __fastcall CFlipToken::Retire(CFlipToken *this, const struct DXGI_FRAME_STATISTICS *a2)
{
  __int64 v3; // rdi
  __int64 v4; // rsi
  struct CCompositionBuffer *v5; // rax
  __int128 v6; // [rsp+20h] [rbp-38h]
  __int128 v7; // [rsp+30h] [rbp-28h]
  struct CCompositionBuffer *v8; // [rsp+60h] [rbp+8h] BYREF

  v7 = *(_OWORD *)a2;
  v6 = *((_OWORD *)a2 + 1);
  *((_DWORD *)this + 6) = 5;
  CFlipToken::TraceStateChanged(this);
  v3 = *((_QWORD *)this + 4);
  v4 = *((_QWORD *)this + 5);
  LODWORD(v7) = *((_DWORD *)this + 26);
  if ( (int)CPushLock::AcquireLockExclusive((CPushLock *)(v3 + 32)) >= 0 )
  {
    if ( (int)CCompositionSurface::FindBuffer((CCompositionSurface *)(v3 + 24), v4, &v8) >= 0 )
    {
      v5 = v8;
      *((_DWORD *)v8 + 57) = 0;
      *(_OWORD *)((char *)v5 + 232) = v7;
      *((_BYTE *)v5 + 264) = 1;
      *(_OWORD *)((char *)v5 + 248) = v6;
    }
    CPushLock::ReleaseLock((CPushLock *)(v3 + 32));
  }
}
