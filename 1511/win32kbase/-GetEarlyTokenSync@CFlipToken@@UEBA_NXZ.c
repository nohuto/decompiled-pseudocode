/*
 * XREFs of ?GetEarlyTokenSync@CFlipToken@@UEBA_NXZ @ 0x1C003C1F0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetBufferAttributes@CCompositionSurface@@IEBAJ_KPEAUCSM_BUFFER_ATTRIBUTES@@@Z @ 0x1C003A24C (-GetBufferAttributes@CCompositionSurface@@IEBAJ_KPEAUCSM_BUFFER_ATTRIBUTES@@@Z.c)
 *     ?AcquireLockShared@CPushLock@@QEBAJXZ @ 0x1C003C4EC (-AcquireLockShared@CPushLock@@QEBAJXZ.c)
 *     ?ReleaseLock@CPushLock@@QEBAXXZ @ 0x1C003C548 (-ReleaseLock@CPushLock@@QEBAXXZ.c)
 */

bool __fastcall CFlipToken::GetEarlyTokenSync(CFlipToken *this)
{
  __int64 v1; // rsi
  bool v2; // bl
  unsigned __int64 v3; // rbp
  _BYTE v5[136]; // [rsp+20h] [rbp-B8h] BYREF
  int v6; // [rsp+A8h] [rbp-30h]

  v1 = *((_QWORD *)this + 4);
  v2 = 0;
  v3 = *((_QWORD *)this + 5);
  if ( (int)CPushLock::AcquireLockShared((CPushLock *)(v1 + 32)) >= 0 )
  {
    if ( (int)CCompositionSurface::GetBufferAttributes(
                (CCompositionSurface *)(v1 + 24),
                v3,
                (struct CSM_BUFFER_ATTRIBUTES *)v5) >= 0 )
      v2 = v6 != 0;
    CPushLock::ReleaseLock((CPushLock *)(v1 + 32));
  }
  return v2;
}
