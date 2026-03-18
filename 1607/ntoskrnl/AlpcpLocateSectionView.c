/*
 * XREFs of AlpcpLocateSectionView @ 0x14040BA70
 * Callers:
 *     AlpcpCaptureViewAttributeInternal @ 0x14040B860 (AlpcpCaptureViewAttributeInternal.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14002C1B0 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14006AEC0 (KeAbPostRelease.c)
 *     ExfAcquirePushLockSharedEx @ 0x1400C8280 (ExfAcquirePushLockSharedEx.c)
 *     ExfReleasePushLockShared @ 0x1400C8640 (ExfReleasePushLockShared.c)
 *     AlpcpEnumerateResourcesPort @ 0x14040BB50 (AlpcpEnumerateResourcesPort.c)
 *     AlpcpDereferenceView @ 0x140655578 (AlpcpDereferenceView.c)
 */

__int64 __fastcall AlpcpLocateSectionView(__int64 a1, __int64 a2, __int64 a3, _QWORD *a4)
{
  unsigned __int64 *v6; // rbx
  __int64 v8; // rdx
  __int64 v9; // rdi
  __int64 v10; // r8
  int v11; // edi
  __int64 v13; // [rsp+20h] [rbp-38h] BYREF
  __int64 v14; // [rsp+28h] [rbp-30h]

  v13 = a3;
  *a4 = 0LL;
  v14 = 0LL;
  v6 = (unsigned __int64 *)(a2 + 352);
  do
  {
    v9 = KeAbPreAcquire((ULONG_PTR)v6, 0LL, 0);
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)v6, 17LL, 0LL) )
      ExfAcquirePushLockSharedEx(v6, v9, (ULONG_PTR)v6);
    if ( v9 )
      *(_BYTE *)(v9 + 26) |= 1u;
    v11 = ((__int64 (__fastcall *)(__int64, __int64, __int64, __int64 *))AlpcpEnumerateResourcesPort)(a2, v8, v10, &v13);
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)v6, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared((signed __int64 *)v6);
    KeAbPostRelease((ULONG_PTR)v6);
  }
  while ( v11 == -1073741267 );
  if ( !v14 )
    return 3221225793LL;
  if ( *(_QWORD *)(*(_QWORD *)(v14 + 16) + 16LL) != a1 )
  {
    AlpcpDereferenceView(v14);
    return 3221225793LL;
  }
  *a4 = v14;
  return 0LL;
}
