/*
 * XREFs of sub_14066994C @ 0x14066994C
 * Callers:
 *     sub_140668B98 @ 0x140668B98 (sub_140668B98.c)
 * Callees:
 *     ExfAcquirePushLockSharedEx @ 0x140020AB0 (ExfAcquirePushLockSharedEx.c)
 *     ExfReleasePushLockShared @ 0x1400309E0 (ExfReleasePushLockShared.c)
 *     KeAbPostRelease @ 0x140042090 (KeAbPostRelease.c)
 *     ObfDereferenceObject @ 0x140042920 (ObfDereferenceObject.c)
 *     KeAbPreAcquire @ 0x140042DA0 (KeAbPreAcquire.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140088F60 (KiLeaveCriticalRegionUnsafe.c)
 *     bsearch @ 0x140144680 (bsearch.c)
 *     qsort @ 0x140144B80 (qsort.c)
 *     memmove @ 0x140166980 (memmove.c)
 *     ExAllocatePoolWithTag @ 0x140238380 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 *     MmUnmapViewInSystemSpace @ 0x1403C7C24 (MmUnmapViewInSystemSpace.c)
 *     ExpFindFastCacheDescriptor @ 0x1405170F0 (ExpFindFastCacheDescriptor.c)
 *     sub_1406695B8 @ 0x1406695B8 (sub_1406695B8.c)
 *     ExpParseFastCache @ 0x140669E80 (ExpParseFastCache.c)
 */

__int64 __fastcall sub_14066994C(
        unsigned int a1,
        unsigned int a2,
        _DWORD *a3,
        char a4,
        size_t NumOfElements,
        __int64 *Base,
        _DWORD *a7,
        _QWORD *a8,
        _QWORD *a9,
        unsigned int *a10,
        _QWORD *a11)
{
  unsigned int v11; // r13d
  __int64 v12; // rax
  PVOID v13; // rbx
  PVOID v14; // rcx
  void *v15; // r15
  __int64 v16; // r12
  struct _KTHREAD *CurrentThread; // rax
  int v18; // r14d
  int v19; // esi
  __int64 v20; // rbx
  __int64 *v21; // rbx
  __int64 v22; // rdi
  __int64 FastCacheDescriptor; // rax
  __int64 v24; // rax
  unsigned int v25; // ebx
  unsigned int v26; // edi
  int v27; // ebx
  _DWORD *v28; // rcx
  char *v29; // r14
  unsigned int v30; // eax
  unsigned int v31; // edi
  const void **v32; // rdi
  __int64 v33; // rsi
  unsigned int v34; // ebx
  struct _KTHREAD *v35; // rax
  __int64 v36; // rbx
  unsigned int v37; // eax
  __int64 v38; // rax
  _DWORD *v39; // rdx
  unsigned int v40; // ebx
  unsigned int v41; // esi
  PVOID PoolWithTag; // rax
  PVOID v43; // rdi
  PVOID v44; // rax
  PVOID MappedBase; // [rsp+38h] [rbp-51h] BYREF
  PVOID Object; // [rsp+40h] [rbp-49h] BYREF
  int v48; // [rsp+48h] [rbp-41h]
  void *v49; // [rsp+50h] [rbp-39h]
  int v50; // [rsp+60h] [rbp-29h]
  __int64 v51; // [rsp+68h] [rbp-21h]
  char Key[8]; // [rsp+70h] [rbp-19h] BYREF
  __int64 v53; // [rsp+78h] [rbp-11h]

  v11 = NumOfElements;
  v12 = a1;
  v13 = 0LL;
  v14 = 0LL;
  MappedBase = 0LL;
  Object = 0LL;
  v15 = 0LL;
  v49 = 0LL;
  v16 = 9 * v12;
  v51 = 9 * v12;
  while ( 1 )
  {
    if ( v14 )
    {
      ObfDereferenceObject(v14);
      Object = 0LL;
    }
    if ( v13 )
    {
      MmUnmapViewInSystemSpace(v13);
      MappedBase = 0LL;
    }
    CurrentThread = KeGetCurrentThread();
    v18 = 0;
    v48 = 0;
    v19 = 0;
    --CurrentThread->KernelApcDisable;
    v20 = KeAbPreAcquire((ULONG_PTR)&ExpFastCacheUpdateLock, 0LL, 0LL);
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)&ExpFastCacheUpdateLock, 17LL, 0LL) )
      ExfAcquirePushLockSharedEx(&ExpFastCacheUpdateLock, v20, (ULONG_PTR)&ExpFastCacheUpdateLock);
    if ( v20 )
      *(_BYTE *)(v20 + 26) |= 1u;
    v50 = *((_DWORD *)&unk_1406FB430 + 2 * v16 + 7);
    if ( v11 )
    {
      v21 = Base + 1;
      v22 = v11;
      do
      {
        FastCacheDescriptor = ExpFindFastCacheDescriptor(a1, *v21);
        if ( FastCacheDescriptor )
        {
          v19 += (*(_DWORD *)(FastCacheDescriptor + 40) + 51) & 0xFFFFFFF8;
          if ( a4 )
            *(_QWORD *)(*v21 + 32) = qword_1406FBAD8 + (unsigned int)dword_1406FB058;
          else
            *(_QWORD *)(*v21 + 32) = *(_QWORD *)(FastCacheDescriptor + 32);
        }
        else
        {
          ++v18;
          *(_QWORD *)(*v21 + 32) = qword_1406FBAD8 + (unsigned int)dword_1406FB058;
        }
        v21 += 2;
        --v22;
      }
      while ( v22 );
      v11 = NumOfElements;
      v15 = 0LL;
      v16 = v51;
      v48 = v18;
    }
    v24 = *((_QWORD *)&unk_1406FB430 + v16 + 1);
    if ( v24 )
      v25 = *(_DWORD *)(v24 + 8) - v19 + 24;
    else
      v25 = 24;
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)&ExpFastCacheUpdateLock, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared((signed __int64 *)&ExpFastCacheUpdateLock);
    KeAbPostRelease((ULONG_PTR)&ExpFastCacheUpdateLock);
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
    v26 = v25 + a3[2];
    if ( v26 < v25 || v26 > a2 )
    {
      v27 = -1073700220;
      goto LABEL_55;
    }
    v27 = sub_1406695B8(v26, &Object, &MappedBase);
    if ( v27 < 0 )
      goto LABEL_55;
    v28 = MappedBase;
    *(_DWORD *)MappedBase = *a3;
    v29 = (char *)(v28 + 6);
    v28[1] = a3[1];
    v30 = v26 - 24;
    v31 = 0;
    v28[2] = v30;
    if ( v11 )
    {
      v32 = (const void **)(Base + 1);
      v33 = v11;
      do
      {
        v34 = *((_DWORD *)*v32 + 10) + 44;
        memmove(v29, *v32, v34);
        v32 += 2;
        v29 += (v34 + 7) & 0xFFFFFFF8;
        --v33;
      }
      while ( v33 );
      v15 = v49;
      v31 = 0;
    }
    v35 = KeGetCurrentThread();
    --v35->KernelApcDisable;
    v36 = KeAbPreAcquire((ULONG_PTR)&ExpFastCacheUpdateLock, 0LL, 0LL);
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)&ExpFastCacheUpdateLock, 17LL, 0LL) )
      ExfAcquirePushLockSharedEx(&ExpFastCacheUpdateLock, v36, (ULONG_PTR)&ExpFastCacheUpdateLock);
    if ( v36 )
      *(_BYTE *)(v36 + 26) |= 1u;
    if ( v50 == *((_DWORD *)&unk_1406FB430 + 2 * v16 + 7) )
      break;
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)&ExpFastCacheUpdateLock, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared((signed __int64 *)&ExpFastCacheUpdateLock);
    KeAbPostRelease((ULONG_PTR)&ExpFastCacheUpdateLock);
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
    v14 = Object;
    v13 = MappedBase;
  }
  v37 = *((_DWORD *)&unk_1406FB430 + 2 * v16 + 6);
  if ( v37 )
  {
    do
    {
      v38 = *((_QWORD *)&unk_1406FB430 + v16 + 2);
      Key[0] = 1;
      v53 = *(_QWORD *)(v38 + 16LL * v31 + 8);
      if ( !bsearch(Key, Base, v11, 0x10uLL, (int (__cdecl *)(const void *, const void *))ExpFastCacheDescriptorCompare) )
      {
        v39 = *(_DWORD **)(*((_QWORD *)&unk_1406FB430 + v16 + 2) + 16LL * v31 + 8);
        v40 = v39[10] + 44;
        memmove(v29, v39, v40);
        v29 += (v40 + 7) & 0xFFFFFFF8;
      }
      ++v31;
      v37 = *((_DWORD *)&unk_1406FB430 + 2 * v16 + 6);
    }
    while ( v31 < v37 );
    v15 = 0LL;
  }
  v41 = v37 + v48;
  if ( v37 + v48 < v37 )
  {
    v41 = -1;
    v27 = -1073741675;
  }
  else
  {
    v27 = 0;
  }
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&ExpFastCacheUpdateLock, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)&ExpFastCacheUpdateLock);
  KeAbPostRelease((ULONG_PTR)&ExpFastCacheUpdateLock);
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  if ( v27 >= 0 )
  {
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, 16LL * v41, 0x20534C53u);
    v15 = PoolWithTag;
    if ( PoolWithTag )
    {
      v43 = MappedBase;
      v27 = ExpParseFastCache(MappedBase, PoolWithTag, v41, 0LL);
      if ( v27 >= 0 )
      {
        qsort(v15, v41, 0x10uLL, (int (__cdecl *)(const void *, const void *))ExpFastCacheDescriptorCompare);
        MappedBase = 0LL;
        *a7 = v50;
        v44 = Object;
        Object = 0LL;
        *a8 = v44;
        *a9 = v43;
        *a10 = v41;
        *a11 = v15;
        v15 = 0LL;
      }
    }
    else
    {
      v27 = -1073741801;
    }
  }
LABEL_55:
  if ( Object )
    ObfDereferenceObject(Object);
  if ( MappedBase )
    MmUnmapViewInSystemSpace(MappedBase);
  if ( v15 )
    ExFreePoolWithTag(v15, 0);
  return (unsigned int)v27;
}
