/*
 * XREFs of sub_1406AF170 @ 0x1406AF170
 * Callers:
 *     sub_1406AE54C @ 0x1406AE54C (sub_1406AE54C.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14002BD30 (KeAbPreAcquire.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140055B20 (KiLeaveCriticalRegionUnsafe.c)
 *     ObfDereferenceObject @ 0x14006A780 (ObfDereferenceObject.c)
 *     KeAbPostRelease @ 0x14006AA40 (KeAbPostRelease.c)
 *     ExfAcquirePushLockSharedEx @ 0x1400C6120 (ExfAcquirePushLockSharedEx.c)
 *     ExfReleasePushLockShared @ 0x1400C64E0 (ExfReleasePushLockShared.c)
 *     bsearch @ 0x14014E010 (bsearch.c)
 *     qsort @ 0x14014E520 (qsort.c)
 *     memmove @ 0x140171780 (memmove.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 *     MmUnmapViewInSystemSpace @ 0x140508E94 (MmUnmapViewInSystemSpace.c)
 *     sub_1406AED74 @ 0x1406AED74 (sub_1406AED74.c)
 *     ExpFindFastCacheDescriptor @ 0x1406AF108 (ExpFindFastCacheDescriptor.c)
 *     ExpParseFastCache @ 0x1406AF6A4 (ExpParseFastCache.c)
 */

__int64 __fastcall sub_1406AF170(
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
  __int64 v26; // rdx
  __int64 v27; // r8
  __int64 v28; // r9
  unsigned int v29; // edi
  int v30; // ebx
  _DWORD *v31; // rcx
  char *v32; // r14
  unsigned int v33; // eax
  unsigned int v34; // edi
  const void **v35; // rdi
  __int64 v36; // rsi
  unsigned int v37; // ebx
  struct _KTHREAD *v38; // rax
  __int64 v39; // rbx
  __int64 v40; // rdx
  __int64 v41; // r8
  __int64 v42; // r9
  unsigned int v43; // eax
  __int64 v44; // rax
  _DWORD *v45; // rdx
  unsigned int v46; // ebx
  unsigned int v47; // esi
  __int64 v48; // rdx
  __int64 v49; // r8
  __int64 v50; // r9
  PVOID PoolWithTag; // rax
  PVOID v52; // rdi
  PVOID v53; // rax
  PVOID MappedBase; // [rsp+38h] [rbp-51h] BYREF
  PVOID Object; // [rsp+40h] [rbp-49h] BYREF
  int v57; // [rsp+48h] [rbp-41h]
  int v58; // [rsp+50h] [rbp-39h]
  void *v59; // [rsp+58h] [rbp-31h]
  __int64 v60; // [rsp+68h] [rbp-21h]
  char Key[8]; // [rsp+70h] [rbp-19h] BYREF
  __int64 v62; // [rsp+78h] [rbp-11h]

  v11 = NumOfElements;
  v12 = a1;
  v13 = 0LL;
  v14 = 0LL;
  MappedBase = 0LL;
  Object = 0LL;
  v15 = 0LL;
  v59 = 0LL;
  v16 = 9 * v12;
  v60 = 9 * v12;
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
    v57 = 0;
    v19 = 0;
    --CurrentThread->KernelApcDisable;
    v20 = KeAbPreAcquire((ULONG_PTR)&ExpFastCacheUpdateLock, 0LL, 0);
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)&ExpFastCacheUpdateLock, 17LL, 0LL) )
      ExfAcquirePushLockSharedEx(&ExpFastCacheUpdateLock, v20, (ULONG_PTR)&ExpFastCacheUpdateLock);
    if ( v20 )
      *(_BYTE *)(v20 + 26) |= 1u;
    v58 = *((_DWORD *)&unk_1407474A0 + 2 * v16 + 7);
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
            *(_QWORD *)(*v21 + 32) = qword_140747BD8 + (unsigned int)dword_140747058;
          else
            *(_QWORD *)(*v21 + 32) = *(_QWORD *)(FastCacheDescriptor + 32);
        }
        else
        {
          ++v18;
          *(_QWORD *)(*v21 + 32) = qword_140747BD8 + (unsigned int)dword_140747058;
        }
        v21 += 2;
        --v22;
      }
      while ( v22 );
      v11 = NumOfElements;
      v15 = 0LL;
      v16 = v60;
      v57 = v18;
    }
    v24 = *((_QWORD *)&unk_1407474A0 + v16 + 1);
    if ( v24 )
      v25 = *(_DWORD *)(v24 + 8) - v19 + 24;
    else
      v25 = 24;
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)&ExpFastCacheUpdateLock, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared((signed __int64 *)&ExpFastCacheUpdateLock);
    KeAbPostRelease((ULONG_PTR)&ExpFastCacheUpdateLock);
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v26, v27, v28);
    v29 = v25 + a3[2];
    if ( v29 < v25 || v29 > a2 )
    {
      v30 = -1073700220;
      goto LABEL_55;
    }
    v30 = sub_1406AED74(v29, &Object, &MappedBase);
    if ( v30 < 0 )
      goto LABEL_55;
    v31 = MappedBase;
    *(_DWORD *)MappedBase = *a3;
    v32 = (char *)(v31 + 6);
    v31[1] = a3[1];
    v33 = v29 - 24;
    v34 = 0;
    v31[2] = v33;
    if ( v11 )
    {
      v35 = (const void **)(Base + 1);
      v36 = v11;
      do
      {
        v37 = *((_DWORD *)*v35 + 10) + 44;
        memmove(v32, *v35, v37);
        v35 += 2;
        v32 += (v37 + 7) & 0xFFFFFFF8;
        --v36;
      }
      while ( v36 );
      v15 = v59;
      v34 = 0;
    }
    v38 = KeGetCurrentThread();
    --v38->KernelApcDisable;
    v39 = KeAbPreAcquire((ULONG_PTR)&ExpFastCacheUpdateLock, 0LL, 0);
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)&ExpFastCacheUpdateLock, 17LL, 0LL) )
      ExfAcquirePushLockSharedEx(&ExpFastCacheUpdateLock, v39, (ULONG_PTR)&ExpFastCacheUpdateLock);
    if ( v39 )
      *(_BYTE *)(v39 + 26) |= 1u;
    if ( v58 == *((_DWORD *)&unk_1407474A0 + 2 * v16 + 7) )
      break;
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)&ExpFastCacheUpdateLock, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared((signed __int64 *)&ExpFastCacheUpdateLock);
    KeAbPostRelease((ULONG_PTR)&ExpFastCacheUpdateLock);
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v40, v41, v42);
    v14 = Object;
    v13 = MappedBase;
  }
  v43 = *((_DWORD *)&unk_1407474A0 + 2 * v16 + 6);
  if ( v43 )
  {
    do
    {
      v44 = *((_QWORD *)&unk_1407474A0 + v16 + 2);
      Key[0] = 1;
      v62 = *(_QWORD *)(v44 + 16LL * v34 + 8);
      if ( !bsearch(Key, Base, v11, 0x10uLL, (int (__cdecl *)(const void *, const void *))ExpFastCacheDescriptorCompare) )
      {
        v45 = *(_DWORD **)(*((_QWORD *)&unk_1407474A0 + v16 + 2) + 16LL * v34 + 8);
        v46 = v45[10] + 44;
        memmove(v32, v45, v46);
        v32 += (v46 + 7) & 0xFFFFFFF8;
      }
      ++v34;
      v43 = *((_DWORD *)&unk_1407474A0 + 2 * v16 + 6);
    }
    while ( v34 < v43 );
    v15 = 0LL;
  }
  v47 = v43 + v57;
  if ( v43 + v57 < v43 )
  {
    v47 = -1;
    v30 = -1073741675;
  }
  else
  {
    v30 = 0;
  }
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&ExpFastCacheUpdateLock, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)&ExpFastCacheUpdateLock);
  KeAbPostRelease((ULONG_PTR)&ExpFastCacheUpdateLock);
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v48, v49, v50);
  if ( v30 >= 0 )
  {
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, 16LL * v47, 0x20534C53u);
    v15 = PoolWithTag;
    if ( PoolWithTag )
    {
      v52 = MappedBase;
      v30 = ExpParseFastCache(MappedBase, PoolWithTag, v47, 0LL);
      if ( v30 >= 0 )
      {
        qsort(v15, v47, 0x10uLL, (int (__cdecl *)(const void *, const void *))ExpFastCacheDescriptorCompare);
        MappedBase = 0LL;
        *a7 = v58;
        v53 = Object;
        Object = 0LL;
        *a8 = v53;
        *a9 = v52;
        *a10 = v47;
        *a11 = v15;
        v15 = 0LL;
      }
    }
    else
    {
      v30 = -1073741801;
    }
  }
LABEL_55:
  if ( Object )
    ObfDereferenceObject(Object);
  if ( MappedBase )
    MmUnmapViewInSystemSpace(MappedBase);
  if ( v15 )
    ExFreePoolWithTag(v15, 0);
  return (unsigned int)v30;
}
