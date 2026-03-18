/*
 * XREFs of sub_1406ECEC4 @ 0x1406ECEC4
 * Callers:
 *     sub_1406EC140 @ 0x1406EC140 (sub_1406EC140.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     ObfDereferenceObject @ 0x14004ED50 (ObfDereferenceObject.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     ExfAcquirePushLockSharedEx @ 0x1400F2F00 (ExfAcquirePushLockSharedEx.c)
 *     ExfReleasePushLockShared @ 0x1400F3600 (ExfReleasePushLockShared.c)
 *     bsearch @ 0x140172700 (bsearch.c)
 *     qsort @ 0x140172BB0 (qsort.c)
 *     memmove @ 0x140195740 (memmove.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 *     MmUnmapViewInSystemSpace @ 0x14051BEC8 (MmUnmapViewInSystemSpace.c)
 *     ExpFindFastCacheDescriptor @ 0x140587608 (ExpFindFastCacheDescriptor.c)
 *     ExpParseFastCache @ 0x1405A9954 (ExpParseFastCache.c)
 *     sub_1405A99E4 @ 0x1405A99E4 (sub_1405A99E4.c)
 */

__int64 __fastcall sub_1406ECEC4(
        unsigned int a1,
        unsigned int a2,
        _DWORD *a3,
        __int64 a4,
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
  __int64 v21; // r9
  __int64 *v22; // rbx
  __int64 v23; // rdi
  __int64 FastCacheDescriptor; // rax
  __int64 v25; // rax
  unsigned int v26; // ebx
  struct _KTHREAD *v27; // rcx
  __int16 v28; // ax
  unsigned int v29; // edi
  int v30; // ebx
  __int64 v31; // r9
  _DWORD *v32; // rcx
  char *v33; // r14
  unsigned int v34; // eax
  unsigned int v35; // edi
  const void **v36; // rdi
  __int64 v37; // rsi
  unsigned int v38; // ebx
  struct _KTHREAD *v39; // rax
  __int64 v40; // rbx
  __int64 v41; // r9
  struct _KTHREAD *v42; // rcx
  __int16 v43; // ax
  unsigned int v44; // eax
  __int64 v45; // rax
  _DWORD *v46; // rdx
  unsigned int v47; // ebx
  unsigned int v48; // esi
  struct _KTHREAD *v49; // rdx
  __int16 v50; // ax
  PVOID PoolWithTag; // rax
  PVOID v52; // rdi
  PVOID v53; // rax
  PVOID MappedBase; // [rsp+38h] [rbp-51h] BYREF
  PVOID Object; // [rsp+40h] [rbp-49h] BYREF
  int v57; // [rsp+48h] [rbp-41h]
  void *v58; // [rsp+50h] [rbp-39h]
  int v59; // [rsp+60h] [rbp-29h]
  __int64 v60; // [rsp+68h] [rbp-21h]
  char Key[8]; // [rsp+70h] [rbp-19h] BYREF
  __int64 v62; // [rsp+78h] [rbp-11h]
  char v66; // [rsp+F0h] [rbp+67h]

  v66 = a4;
  v11 = NumOfElements;
  v12 = a1;
  v13 = 0LL;
  v14 = 0LL;
  MappedBase = 0LL;
  Object = 0LL;
  v15 = 0LL;
  v58 = 0LL;
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
    v20 = KeAbPreAcquire((ULONG_PTR)&ExpFastCacheUpdateLock, 0LL, 0LL, a4);
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)&ExpFastCacheUpdateLock, 17LL, 0LL) )
      ExfAcquirePushLockSharedEx(&ExpFastCacheUpdateLock, v20, (ULONG_PTR)&ExpFastCacheUpdateLock, v21);
    if ( v20 )
      *(_BYTE *)(v20 + 26) |= 1u;
    v59 = *((_DWORD *)&unk_14077E460 + 2 * v16 + 7);
    if ( v11 )
    {
      v22 = Base + 1;
      v23 = v11;
      do
      {
        FastCacheDescriptor = ExpFindFastCacheDescriptor(a1, *v22);
        if ( FastCacheDescriptor )
        {
          v19 += (*(_DWORD *)(FastCacheDescriptor + 40) + 51) & 0xFFFFFFF8;
          if ( v66 )
            *(_QWORD *)(*v22 + 32) = qword_14077EAD0 + (unsigned int)dword_14077E060;
          else
            *(_QWORD *)(*v22 + 32) = *(_QWORD *)(FastCacheDescriptor + 32);
        }
        else
        {
          ++v18;
          *(_QWORD *)(*v22 + 32) = qword_14077EAD0 + (unsigned int)dword_14077E060;
        }
        v22 += 2;
        --v23;
      }
      while ( v23 );
      v11 = NumOfElements;
      v15 = 0LL;
      v16 = v60;
      v57 = v18;
    }
    v25 = *((_QWORD *)&unk_14077E460 + v16 + 1);
    if ( v25 )
      v26 = *(_DWORD *)(v25 + 8) - v19 + 24;
    else
      v26 = 24;
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)&ExpFastCacheUpdateLock, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared((signed __int64 *)&ExpFastCacheUpdateLock);
    KeAbPostRelease((ULONG_PTR)&ExpFastCacheUpdateLock);
    v27 = KeGetCurrentThread();
    v28 = v27->KernelApcDisable + 1;
    v27->KernelApcDisable = v28;
    if ( !v28
      && ($CD287064E7C9F7953DE243E927CFCB99 *)v27->ApcState.ApcListHead[0].Flink != &v27->152
      && !v27->SpecialApcDisable )
    {
      KiCheckForKernelApcDelivery();
    }
    v29 = v26 + a3[2];
    if ( v29 < v26 || v29 > a2 )
    {
      v30 = -1073700220;
      goto LABEL_67;
    }
    v30 = sub_1405A99E4(v29, &Object, &MappedBase);
    if ( v30 < 0 )
      goto LABEL_67;
    v32 = MappedBase;
    *(_DWORD *)MappedBase = *a3;
    v33 = (char *)(v32 + 6);
    v32[1] = a3[1];
    v34 = v29 - 24;
    v35 = 0;
    v32[2] = v34;
    if ( v11 )
    {
      v36 = (const void **)(Base + 1);
      v37 = v11;
      do
      {
        v38 = *((_DWORD *)*v36 + 10) + 44;
        memmove(v33, *v36, v38);
        v36 += 2;
        v33 += (v38 + 7) & 0xFFFFFFF8;
        --v37;
      }
      while ( v37 );
      v15 = v58;
      v35 = 0;
    }
    v39 = KeGetCurrentThread();
    --v39->KernelApcDisable;
    v40 = KeAbPreAcquire((ULONG_PTR)&ExpFastCacheUpdateLock, 0LL, 0LL, v31);
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)&ExpFastCacheUpdateLock, 17LL, 0LL) )
      ExfAcquirePushLockSharedEx(&ExpFastCacheUpdateLock, v40, (ULONG_PTR)&ExpFastCacheUpdateLock, v41);
    if ( v40 )
      *(_BYTE *)(v40 + 26) |= 1u;
    if ( v59 == *((_DWORD *)&unk_14077E460 + 2 * v16 + 7) )
      break;
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)&ExpFastCacheUpdateLock, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared((signed __int64 *)&ExpFastCacheUpdateLock);
    KeAbPostRelease((ULONG_PTR)&ExpFastCacheUpdateLock);
    v42 = KeGetCurrentThread();
    v43 = v42->KernelApcDisable + 1;
    v42->KernelApcDisable = v43;
    if ( !v43
      && ($CD287064E7C9F7953DE243E927CFCB99 *)v42->ApcState.ApcListHead[0].Flink != &v42->152
      && !v42->SpecialApcDisable )
    {
      KiCheckForKernelApcDelivery();
    }
    v14 = Object;
    v13 = MappedBase;
  }
  v44 = *((_DWORD *)&unk_14077E460 + 2 * v16 + 6);
  if ( v44 )
  {
    do
    {
      v45 = *((_QWORD *)&unk_14077E460 + v16 + 2);
      Key[0] = 1;
      v62 = *(_QWORD *)(v45 + 16LL * v35 + 8);
      if ( !bsearch(Key, Base, v11, 0x10uLL, (int (__cdecl *)(const void *, const void *))ExpFastCacheDescriptorCompare) )
      {
        v46 = *(_DWORD **)(*((_QWORD *)&unk_14077E460 + v16 + 2) + 16LL * v35 + 8);
        v47 = v46[10] + 44;
        memmove(v33, v46, v47);
        v33 += (v47 + 7) & 0xFFFFFFF8;
      }
      ++v35;
      v44 = *((_DWORD *)&unk_14077E460 + 2 * v16 + 6);
    }
    while ( v35 < v44 );
    v15 = 0LL;
  }
  v48 = v44 + v57;
  if ( v44 + v57 < v44 )
  {
    v48 = -1;
    v30 = -1073741675;
  }
  else
  {
    v30 = 0;
  }
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&ExpFastCacheUpdateLock, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)&ExpFastCacheUpdateLock);
  KeAbPostRelease((ULONG_PTR)&ExpFastCacheUpdateLock);
  v49 = KeGetCurrentThread();
  v50 = v49->KernelApcDisable + 1;
  v49->KernelApcDisable = v50;
  if ( !v50
    && ($CD287064E7C9F7953DE243E927CFCB99 *)v49->ApcState.ApcListHead[0].Flink != &v49->152
    && !v49->SpecialApcDisable )
  {
    KiCheckForKernelApcDelivery();
  }
  if ( v30 >= 0 )
  {
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, 16LL * v48, 0x20534C53u);
    v15 = PoolWithTag;
    if ( PoolWithTag )
    {
      v52 = MappedBase;
      v30 = ExpParseFastCache((__int64)MappedBase, (__int64)PoolWithTag, v48, 0LL);
      if ( v30 >= 0 )
      {
        qsort(v15, v48, 0x10uLL, (int (__cdecl *)(const void *, const void *))ExpFastCacheDescriptorCompare);
        MappedBase = 0LL;
        *a7 = v59;
        v53 = Object;
        Object = 0LL;
        *a8 = v53;
        *a9 = v52;
        *a10 = v48;
        *a11 = v15;
        v15 = 0LL;
      }
    }
    else
    {
      v30 = -1073741801;
    }
  }
LABEL_67:
  if ( Object )
    ObfDereferenceObject(Object);
  if ( MappedBase )
    MmUnmapViewInSystemSpace(MappedBase);
  if ( v15 )
    ExFreePoolWithTag(v15, 0);
  return (unsigned int)v30;
}
