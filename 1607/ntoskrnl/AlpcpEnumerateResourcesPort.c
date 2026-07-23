/*
 * XREFs of AlpcpEnumerateResourcesPort @ 0x14040AA10
 * Callers:
 *     AlpcpLocateSectionView @ 0x14040A930 (AlpcpLocateSectionView.c)
 *     NtAlpcDeleteSectionView @ 0x1404B4EB0 (NtAlpcDeleteSectionView.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14002BD30 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14006AA40 (KeAbPostRelease.c)
 *     ExfAcquirePushLockSharedEx @ 0x1400C6120 (ExfAcquirePushLockSharedEx.c)
 *     ExfReleasePushLockShared @ 0x1400C64E0 (ExfReleasePushLockShared.c)
 *     AlpcpViewSearchCallbackFunction @ 0x14040AAD4 (AlpcpViewSearchCallbackFunction.c)
 */

__int64 __fastcall AlpcpEnumerateResourcesPort(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned __int64 *v4; // rdi
  int v7; // ebp
  __int64 v8; // rbx
  __int64 **v9; // rsi
  __int64 *i; // rbx

  v4 = (unsigned __int64 *)(a1 + 328);
  v7 = 0;
  v8 = KeAbPreAcquire(a1 + 328, 0LL, 0);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)v4, 17LL, 0LL) )
    ExfAcquirePushLockSharedEx(v4, v8, (ULONG_PTR)v4);
  if ( v8 )
    *(_BYTE *)(v8 + 26) |= 1u;
  v9 = (__int64 **)(a1 + 336);
  for ( i = *v9; i != (__int64 *)v9; i = (__int64 *)*i )
  {
    if ( *((_BYTE *)i + 17) == 6 )
    {
      v7 = AlpcpViewSearchCallbackFunction(i + 6, a4);
      if ( v7 < 0 )
        break;
    }
  }
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)v4, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)v4);
  KeAbPostRelease((ULONG_PTR)v4);
  return (unsigned int)v7;
}
