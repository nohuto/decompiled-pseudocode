/*
 * XREFs of AlpcpCreateSectionView @ 0x140474264
 * Callers:
 *     NtAlpcCreateSectionView @ 0x140473D80 (NtAlpcCreateSectionView.c)
 *     AlpcpMapLegacyPortView @ 0x14052ABD8 (AlpcpMapLegacyPortView.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400F30E0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1400F36F8 (ExfTryToWakePushLock.c)
 *     KeBugCheckEx @ 0x140182750 (KeBugCheckEx.c)
 *     AlpcpCreateRegion @ 0x14047446C (AlpcpCreateRegion.c)
 *     AlpcpCreateView @ 0x140475280 (AlpcpCreateView.c)
 *     AlpcpDestroyBlob @ 0x140476564 (AlpcpDestroyBlob.c)
 */

__int64 __fastcall AlpcpCreateSectionView(
        ULONG_PTR BugCheckParameter2,
        void *a2,
        __int64 a3,
        __int64 a4,
        volatile signed __int32 *BugCheckParameter2a)
{
  unsigned __int64 *v5; // rsi
  __int64 v8; // rax
  __int64 v9; // r9
  __int64 v10; // rdi
  signed __int64 BugCheckParameter4; // rax
  int Region; // eax
  char v13; // dl
  int View; // r14d
  int v15; // esi
  __int64 v16; // r9
  signed __int64 v17; // rcx
  __int64 v18; // rax
  __int64 v19; // r9
  __int64 v20; // rsi
  signed __int64 v21; // rax
  int v22; // esi
  char v23; // al
  signed __int64 v24; // rcx
  signed __int64 v25; // rdi
  bool v26; // cc
  ULONG_PTR v27; // rdi
  __int64 v29; // [rsp+60h] [rbp+8h]

  v5 = (unsigned __int64 *)(BugCheckParameter2 - 16);
  *(_QWORD *)BugCheckParameter2a = 0LL;
  v8 = KeAbPreAcquire(BugCheckParameter2 - 16, 0LL, 0LL, a4);
  v10 = v8;
  if ( _interlockedbittestandset64((volatile signed __int32 *)v5, 0LL) )
    ExfAcquirePushLockExclusiveEx(v5, v8, (ULONG_PTR)v5, v9);
  if ( v10 )
    *(_BYTE *)(v10 + 26) |= 1u;
  *(_BYTE *)(BugCheckParameter2 - 32) |= 1u;
  BugCheckParameter4 = _InterlockedExchangeAdd64((volatile signed __int64 *)(BugCheckParameter2 - 24), 0x10000uLL)
                     + 0x10000;
  if ( BugCheckParameter4 <= 0 )
    KeBugCheckEx(0x18u, 0LL, BugCheckParameter2, 0x26uLL, BugCheckParameter4);
  Region = AlpcpCreateRegion(BugCheckParameter2);
  v13 = *(_BYTE *)(BugCheckParameter2 - 32);
  View = Region;
  v15 = 0;
  if ( (v13 & 1) != 0 )
  {
    v15 = 0x10000 - *(__int16 *)(BugCheckParameter2 - 30);
    *(_WORD *)(BugCheckParameter2 - 30) = 0;
    *(_BYTE *)(BugCheckParameter2 - 32) = v13 & 0xFE;
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(BugCheckParameter2 - 16), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)(BugCheckParameter2 - 16));
  KeAbPostRelease(BugCheckParameter2 - 16);
  if ( v15 > 0 )
  {
    v17 = -v15 + _InterlockedExchangeAdd64((volatile signed __int64 *)(BugCheckParameter2 - 24), -v15);
    if ( v17 <= 0 )
    {
      if ( v17 )
        KeBugCheckEx(0x18u, 0LL, BugCheckParameter2, 0x28uLL, v17);
      AlpcpDestroyBlob(BugCheckParameter2);
    }
  }
  if ( View < 0 )
    return (unsigned int)View;
  v18 = KeAbPreAcquire((ULONG_PTR)(BugCheckParameter2a - 4), 0LL, 0LL, v16);
  v20 = v18;
  if ( _interlockedbittestandset64(BugCheckParameter2a - 4, 0LL) )
    ExfAcquirePushLockExclusiveEx(
      (unsigned __int64 *)BugCheckParameter2a - 2,
      v18,
      (ULONG_PTR)(BugCheckParameter2a - 4),
      v19);
  if ( v20 )
    *(_BYTE *)(v20 + 26) |= 1u;
  *((_BYTE *)BugCheckParameter2a - 32) |= 1u;
  v21 = _InterlockedExchangeAdd64((volatile signed __int64 *)BugCheckParameter2a - 3, 0x10000uLL) + 0x10000;
  if ( v21 <= 0 )
    KeBugCheckEx(0x18u, 0LL, (ULONG_PTR)BugCheckParameter2a, 0x26uLL, v21);
  View = AlpcpCreateView((ULONG_PTR)BugCheckParameter2a, a2);
  v22 = 0;
  v23 = *((_BYTE *)BugCheckParameter2a - 32);
  if ( (v23 & 1) != 0 )
  {
    v22 = 0x10000 - *((__int16 *)BugCheckParameter2a - 15);
    *((_WORD *)BugCheckParameter2a - 15) = 0;
    *((_BYTE *)BugCheckParameter2a - 32) = v23 & 0xFE;
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)BugCheckParameter2a - 2, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)BugCheckParameter2a - 2);
  KeAbPostRelease((ULONG_PTR)(BugCheckParameter2a - 4));
  if ( v22 > 0 )
  {
    v24 = -v22 + _InterlockedExchangeAdd64((volatile signed __int64 *)BugCheckParameter2a - 3, -v22);
    if ( v24 <= 0 )
    {
      if ( v24 )
        KeBugCheckEx(0x18u, 0LL, (ULONG_PTR)BugCheckParameter2a, 0x28uLL, v24);
      AlpcpDestroyBlob(BugCheckParameter2a);
    }
  }
  v25 = _InterlockedExchangeAdd64((volatile signed __int64 *)BugCheckParameter2a - 3, 0xFFFFFFFFFFFFFFFFuLL);
  v26 = v25 <= 1;
  v27 = v25 - 1;
  if ( v26 )
  {
    if ( v27 )
      KeBugCheckEx(0x18u, 0LL, (ULONG_PTR)BugCheckParameter2a, 0x21uLL, v27);
    AlpcpDestroyBlob(BugCheckParameter2a);
  }
  if ( View < 0 )
    return (unsigned int)View;
  *(_QWORD *)BugCheckParameter2a = v29;
  return 0LL;
}
