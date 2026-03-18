/*
 * XREFs of CcInitializeVolumeCacheMap @ 0x140117D58
 * Callers:
 *     CcInitializeCacheMap @ 0x140040D10 (CcInitializeCacheMap.c)
 * Callees:
 *     KeAcquireQueuedSpinLock @ 0x140041D50 (KeAcquireQueuedSpinLock.c)
 *     KeReleaseQueuedSpinLock @ 0x140041DC0 (KeReleaseQueuedSpinLock.c)
 *     memset @ 0x140195A80 (memset.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall CcInitializeVolumeCacheMap(__int64 a1, __int64 **a2)
{
  __int64 v2; // rdi
  __int64 v4; // rdi
  KIRQL v5; // al
  __int64 *i; // rcx
  __int64 *v7; // rbx
  KIRQL v8; // dl
  __int64 *PoolWithTag; // rax
  KIRQL v11; // al
  __int64 *v12; // rcx
  __int64 *v13; // rsi
  __int64 **v14; // rcx

  v2 = *(_QWORD *)(a1 + 16);
  if ( v2 )
    v4 = *(_QWORD *)(v2 + 8);
  else
    v4 = *(_QWORD *)(a1 + 8);
  v5 = KeAcquireQueuedSpinLock(5uLL);
  for ( i = (__int64 *)CcVolumeCacheMapList; i != &CcVolumeCacheMapList; i = (__int64 *)*i )
  {
    v7 = i - 2;
    if ( *(i - 1) == v4 )
    {
      ++*((_DWORD *)v7 + 1);
      v8 = v5;
      goto LABEL_8;
    }
  }
  KeReleaseQueuedSpinLock(5uLL, v5);
  PoolWithTag = (__int64 *)ExAllocatePoolWithTag(NonPagedPoolNx, 0xD0uLL, 0x6D566343u);
  v7 = PoolWithTag;
  if ( !PoolWithTag )
    return 3221225626LL;
  memset(PoolWithTag, 0, 0xD0uLL);
  ++*((_DWORD *)v7 + 1);
  *(_DWORD *)v7 = 13632248;
  v7[1] = v4;
  v11 = KeAcquireQueuedSpinLock(5uLL);
  v12 = (__int64 *)CcVolumeCacheMapList;
  v8 = v11;
  while ( v12 != &CcVolumeCacheMapList )
  {
    v13 = v12 - 2;
    if ( *(v12 - 1) == v4 )
    {
      ++*((_DWORD *)v13 + 1);
      KeReleaseQueuedSpinLock(5uLL, v11);
      ExFreePoolWithTag(v7, 0x6D566343u);
      *a2 = v13;
      return 0LL;
    }
    v12 = (__int64 *)*v12;
  }
  v14 = (__int64 **)qword_14034DE88;
  v7[2] = (__int64)&CcVolumeCacheMapList;
  v7[3] = (__int64)v14;
  if ( *v14 != &CcVolumeCacheMapList )
    __fastfail(3u);
  *v14 = v7 + 2;
  qword_14034DE88 = (__int64)(v7 + 2);
LABEL_8:
  KeReleaseQueuedSpinLock(5uLL, v8);
  *a2 = v7;
  return 0LL;
}
