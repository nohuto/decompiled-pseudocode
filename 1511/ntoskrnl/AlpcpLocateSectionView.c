/*
 * XREFs of AlpcpLocateSectionView @ 0x14047BECC
 * Callers:
 *     AlpcpCaptureViewAttributeInternal @ 0x14047BCB0 (AlpcpCaptureViewAttributeInternal.c)
 * Callees:
 *     ExfAcquirePushLockSharedEx @ 0x140020AB0 (ExfAcquirePushLockSharedEx.c)
 *     ExfReleasePushLockShared @ 0x1400309E0 (ExfReleasePushLockShared.c)
 *     KeAbPostRelease @ 0x140042090 (KeAbPostRelease.c)
 *     KeAbPreAcquire @ 0x140042DA0 (KeAbPreAcquire.c)
 *     AlpcpEnumerateResourcesPort @ 0x14047BF9C (AlpcpEnumerateResourcesPort.c)
 */

__int64 __fastcall AlpcpLocateSectionView(__int64 a1, __int64 a2, __int64 a3, _QWORD *a4)
{
  unsigned __int64 *v6; // rbx
  __int64 v7; // rdx
  __int64 v8; // rdi
  __int64 v9; // r8
  int v10; // edi
  __int64 v12; // [rsp+20h] [rbp-28h] BYREF
  __int64 v13; // [rsp+28h] [rbp-20h]

  v12 = a3;
  *a4 = 0LL;
  v13 = 0LL;
  v6 = (unsigned __int64 *)(a2 + 352);
  do
  {
    v8 = KeAbPreAcquire((ULONG_PTR)v6, 0LL, 0LL);
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)v6, 17LL, 0LL) )
      ExfAcquirePushLockSharedEx(v6, v8, (ULONG_PTR)v6);
    if ( v8 )
      *(_BYTE *)(v8 + 26) |= 1u;
    v10 = ((__int64 (__fastcall *)(__int64, __int64, __int64, __int64 *))AlpcpEnumerateResourcesPort)(a2, v7, v9, &v12);
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)v6, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared((signed __int64 *)v6);
    KeAbPostRelease((ULONG_PTR)v6);
  }
  while ( v10 == -1073741267 );
  if ( !v13 )
    return 3221225793LL;
  *a4 = v13;
  return 0LL;
}
