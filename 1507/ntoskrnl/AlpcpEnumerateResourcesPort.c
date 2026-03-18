/*
 * XREFs of AlpcpEnumerateResourcesPort @ 0x140477330
 * Callers:
 *     AlpcpLocateSectionView @ 0x14047721C (AlpcpLocateSectionView.c)
 *     NtAlpcDeleteSectionView @ 0x14053BE80 (NtAlpcDeleteSectionView.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     ExfAcquirePushLockSharedEx @ 0x1400F2F00 (ExfAcquirePushLockSharedEx.c)
 *     ExfReleasePushLockShared @ 0x1400F3600 (ExfReleasePushLockShared.c)
 *     AlpcpViewSearchCallbackFunction @ 0x1404773F8 (AlpcpViewSearchCallbackFunction.c)
 */

__int64 __fastcall AlpcpEnumerateResourcesPort(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned __int64 *v4; // rdi
  int v6; // ebp
  __int64 v7; // rbx
  __int64 v8; // r9
  __int64 **v9; // rsi
  __int64 *i; // rbx

  v4 = (unsigned __int64 *)(a1 + 328);
  v6 = 0;
  v7 = KeAbPreAcquire(a1 + 328, 0LL, 0LL, a4);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)v4, 17LL, 0LL) )
    ExfAcquirePushLockSharedEx(v4, v7, (ULONG_PTR)v4, v8);
  if ( v7 )
    *(_BYTE *)(v7 + 26) |= 1u;
  v9 = (__int64 **)(a1 + 336);
  for ( i = *v9; i != (__int64 *)v9; i = (__int64 *)*i )
  {
    if ( *((_BYTE *)i + 17) == 6 )
    {
      v6 = AlpcpViewSearchCallbackFunction((ULONG_PTR)(i + 6));
      if ( v6 < 0 )
        break;
    }
  }
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)v4, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)v4);
  KeAbPostRelease((ULONG_PTR)v4);
  return (unsigned int)v6;
}
