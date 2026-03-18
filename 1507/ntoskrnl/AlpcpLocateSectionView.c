/*
 * XREFs of AlpcpLocateSectionView @ 0x14047721C
 * Callers:
 *     AlpcpCaptureViewAttributeInternal @ 0x140476E58 (AlpcpCaptureViewAttributeInternal.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     ExfAcquirePushLockSharedEx @ 0x1400F2F00 (ExfAcquirePushLockSharedEx.c)
 *     ExfReleasePushLockShared @ 0x1400F3600 (ExfReleasePushLockShared.c)
 *     KeBugCheckEx @ 0x140182750 (KeBugCheckEx.c)
 *     AlpcpDestroyBlob @ 0x140476564 (AlpcpDestroyBlob.c)
 *     AlpcpEnumerateResourcesPort @ 0x140477330 (AlpcpEnumerateResourcesPort.c)
 */

__int64 __fastcall AlpcpLocateSectionView(__int64 a1, __int64 a2, __int64 a3, ULONG_PTR *a4)
{
  unsigned __int64 *v7; // rbx
  __int64 v8; // rdx
  __int64 v9; // rdi
  __int64 v10; // r8
  __int64 v11; // r9
  int v12; // edi
  signed __int64 v14; // rax
  bool v15; // cc
  ULONG_PTR BugCheckParameter4; // rax
  __int64 v17; // [rsp+30h] [rbp-38h] BYREF
  ULONG_PTR BugCheckParameter2; // [rsp+38h] [rbp-30h]

  v17 = a3;
  *a4 = 0LL;
  BugCheckParameter2 = 0LL;
  v7 = (unsigned __int64 *)(a2 + 352);
  do
  {
    v9 = KeAbPreAcquire((ULONG_PTR)v7, 0LL, 0LL, (__int64)a4);
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)v7, 17LL, 0LL) )
      ExfAcquirePushLockSharedEx(v7, v9, (ULONG_PTR)v7, v11);
    if ( v9 )
      *(_BYTE *)(v9 + 26) |= 1u;
    v12 = AlpcpEnumerateResourcesPort(a2, v8, v10, &v17);
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)v7, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared((signed __int64 *)v7);
    KeAbPostRelease((ULONG_PTR)v7);
  }
  while ( v12 == -1073741267 );
  if ( !BugCheckParameter2 )
    return 3221225793LL;
  if ( *(_QWORD *)(*(_QWORD *)(BugCheckParameter2 + 16) + 16LL) != a1 )
  {
    v14 = _InterlockedExchangeAdd64((volatile signed __int64 *)(BugCheckParameter2 - 24), 0xFFFFFFFFFFFFFFFFuLL);
    v15 = v14 <= 1;
    BugCheckParameter4 = v14 - 1;
    if ( v15 )
    {
      if ( BugCheckParameter4 )
        KeBugCheckEx(0x18u, 0LL, BugCheckParameter2, 0x21uLL, BugCheckParameter4);
      AlpcpDestroyBlob(BugCheckParameter2);
    }
    return 3221225793LL;
  }
  *a4 = BugCheckParameter2;
  return 0LL;
}
