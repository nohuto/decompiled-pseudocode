/*
 * XREFs of sub_140668B98 @ 0x140668B98
 * Callers:
 *     sub_14067C9CC @ 0x14067C9CC (sub_14067C9CC.c)
 * Callees:
 *     ExfAcquirePushLockExclusiveEx @ 0x140020CE0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x140030AD8 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x140042090 (KeAbPostRelease.c)
 *     ObfDereferenceObject @ 0x140042920 (ObfDereferenceObject.c)
 *     ObfReferenceObject @ 0x140042AA0 (ObfReferenceObject.c)
 *     KeAbPreAcquire @ 0x140042DA0 (KeAbPreAcquire.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140088F60 (KiLeaveCriticalRegionUnsafe.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     memmove @ 0x140166980 (memmove.c)
 *     ExAllocatePoolWithTag @ 0x140238380 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 *     MmUnmapViewInSystemSpace @ 0x1403C7C24 (MmUnmapViewInSystemSpace.c)
 *     CmSetValueKey @ 0x1403F36C0 (CmSetValueKey.c)
 *     sub_14054598C @ 0x14054598C (sub_14054598C.c)
 *     sub_1406695B8 @ 0x1406695B8 (sub_1406695B8.c)
 *     sub_14066994C @ 0x14066994C (sub_14066994C.c)
 *     ExpParseFastCacheHelper @ 0x140669F10 (ExpParseFastCacheHelper.c)
 *     sub_140669FD4 @ 0x140669FD4 (sub_140669FD4.c)
 *     ExpValidateFastCacheSize @ 0x14066A5F0 (ExpValidateFastCacheSize.c)
 */

__int64 __fastcall sub_140668B98(unsigned int a1, size_t Size, _DWORD *Src, char a4, char a5)
{
  SIZE_T v5; // rbx
  __int64 v8; // r13
  int v9; // edi
  int v10; // eax
  char *v11; // rsi
  PVOID v12; // rdi
  PVOID PoolWithTag; // rax
  int v14; // eax
  int v15; // r9d
  PVOID v16; // r14
  PVOID v17; // r15
  PVOID v18; // r12
  int v19; // edx
  PVOID v20; // r9
  __int64 *v21; // r8
  __int64 v22; // r10
  __int64 v23; // rax
  int v24; // r14d
  int v25; // eax
  unsigned __int64 *v26; // rdx
  unsigned __int8 *v27; // r10
  unsigned int v28; // ecx
  unsigned __int64 v29; // rax
  __int64 v30; // r11
  unsigned int v31; // r8d
  unsigned int v32; // r9d
  int v33; // ecx
  struct _KTHREAD *CurrentThread; // rax
  __int64 v35; // rax
  signed __int8 v36; // cf
  __int64 v37; // rdi
  int v38; // ett
  PVOID v39; // rsi
  __int64 v40; // r14
  __int64 *v41; // r9
  __int64 v42; // r10
  unsigned int v43; // edx
  unsigned int v44; // r8d
  int v45; // ecx
  int *v46; // rsi
  int v47; // r8d
  int *v48; // rdx
  __int64 v49; // rax
  unsigned __int8 *v50; // r11
  __int64 v51; // rdi
  unsigned int v52; // r10d
  unsigned int v53; // r9d
  int v54; // ecx
  unsigned __int64 v55; // rax
  unsigned __int64 v56; // rcx
  unsigned int v57; // edx
  __int64 *v58; // r9
  __int64 v59; // r10
  unsigned int v60; // r8d
  int v61; // ecx
  int v62; // edx
  __int64 v63; // rax
  unsigned __int8 *v64; // r10
  __int64 v65; // r11
  unsigned int v66; // r8d
  unsigned int v67; // r9d
  int v68; // ecx
  int v69; // eax
  __int64 v70; // rax
  __int64 v71; // rdi
  PVOID v72; // rdi
  __int64 v73; // rsi
  PVOID v74; // rax
  size_t NumOfElements; // [rsp+20h] [rbp-E0h]
  PVOID MappedBase[3]; // [rsp+60h] [rbp-A0h] BYREF
  PVOID v78; // [rsp+78h] [rbp-88h]
  PVOID P; // [rsp+80h] [rbp-80h] BYREF
  PVOID Object; // [rsp+88h] [rbp-78h] BYREF
  unsigned __int64 v81; // [rsp+90h] [rbp-70h]
  unsigned __int64 v82; // [rsp+98h] [rbp-68h]
  PVOID Base; // [rsp+A0h] [rbp-60h] BYREF
  size_t v84; // [rsp+A8h] [rbp-58h] BYREF
  unsigned __int64 v85; // [rsp+B0h] [rbp-50h]
  __int64 v86; // [rsp+B8h] [rbp-48h] BYREF
  unsigned __int64 v87; // [rsp+C0h] [rbp-40h]
  __int64 v88; // [rsp+C8h] [rbp-38h] BYREF
  unsigned __int64 v89; // [rsp+D0h] [rbp-30h]
  __int64 v90; // [rsp+D8h] [rbp-28h] BYREF
  __int64 v91; // [rsp+E0h] [rbp-20h] BYREF
  PVOID v92; // [rsp+E8h] [rbp-18h]
  int v93; // [rsp+F0h] [rbp-10h] BYREF
  unsigned __int64 v94; // [rsp+F8h] [rbp-8h]
  unsigned __int64 v95; // [rsp+100h] [rbp+0h]
  __int64 v96; // [rsp+108h] [rbp+8h] BYREF
  __int64 v97; // [rsp+110h] [rbp+10h] BYREF
  int v98[2]; // [rsp+118h] [rbp+18h] BYREF
  unsigned __int64 v99; // [rsp+120h] [rbp+20h]
  unsigned __int64 v100; // [rsp+128h] [rbp+28h]

  v5 = (unsigned int)Size;
  Base = 0LL;
  v92 = 0LL;
  Object = 0LL;
  MappedBase[0] = 0LL;
  P = 0LL;
  v78 = 0LL;
  v8 = a1;
  if ( _InterlockedCompareExchange(&ExpFastCacheReArmed, 0, 0) == 1 )
    return (unsigned int)-1073700219;
  if ( !a5 && !a4 )
    return (unsigned int)-1073741811;
  v9 = ExpValidateFastCacheSize(a1, (unsigned int)Size, &v93);
  if ( v9 < 0 )
    return (unsigned int)v9;
  if ( a4 )
  {
    if ( (unsigned int)v5 <= 0x18 )
      return (unsigned int)-1073741811;
  }
  else if ( (unsigned int)v5 < 0x18 )
  {
    return (unsigned int)-1073741811;
  }
  if ( (_DWORD)v5 - 24 != Src[2] || *Src != 1 || (Src[1] & 0xFFFF0000) != 0 )
    return (unsigned int)-1073741811;
  if ( a4 )
  {
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, v5, 0x20534C53u);
    v92 = PoolWithTag;
    if ( !PoolWithTag )
      return (unsigned int)-1073741801;
    v11 = (char *)MappedBase[0];
    v12 = PoolWithTag;
  }
  else
  {
    v10 = sub_1406695B8((unsigned int)v5, &Object, MappedBase);
    v11 = (char *)MappedBase[0];
    v9 = v10;
    if ( v10 < 0 )
    {
LABEL_97:
      v16 = v78;
      v18 = v78;
      v17 = v78;
      goto LABEL_98;
    }
    v12 = MappedBase[0];
  }
  memmove(v12, Src, v5);
  v14 = ExpParseFastCacheHelper(v12, &v84, &Base);
  v9 = v14;
  if ( v14 < 0 )
  {
    v16 = v78;
    v17 = v78;
    v18 = v78;
    if ( v14 == -1073741762 )
      v9 = -1073741811;
    goto LABEL_98;
  }
  if ( a4 )
  {
    v24 = (int)v92;
    goto LABEL_29;
  }
  LODWORD(v86) = 0;
  v19 = v84;
  v20 = Base;
  if ( (_DWORD)v84 )
  {
    v21 = (__int64 *)((char *)Base + 8);
    v22 = (unsigned int)v84;
    do
    {
      v23 = *v21;
      v21 += 2;
      *(_QWORD *)(v23 + 32) = qword_1406FBAD8 + (unsigned int)dword_1406FB058;
      --v22;
    }
    while ( v22 );
  }
  Base = 0LL;
  v24 = (int)v92;
  LODWORD(v88) = v19;
  P = v20;
  while ( 1 )
  {
    v26 = (unsigned __int64 *)(v11 + 16);
    *((_QWORD *)v11 + 2) = 0LL;
    v27 = (unsigned __int8 *)(v11 + 24);
    v28 = *((_DWORD *)v11 + 2);
    if ( v11 == (char *)-24LL || v11 == (char *)-16LL )
    {
      v9 = -1073741811;
      goto LABEL_97;
    }
    v29 = *v26;
    v30 = v28;
    v82 = *v26;
    if ( v28 )
    {
      v31 = HIDWORD(v82);
      v32 = v82;
      do
      {
        v33 = *v27++;
        v33 -= 23737705;
        v31 = __ROR4__(-23737705 * __ROR4__(-23737705 * __ROR4__(-23737705 * (v31 + v33), 21), 21), 21);
        v32 += v31 + v33;
        --v30;
      }
      while ( v30 );
      v82 = __PAIR64__(v31, v32);
      v29 = __PAIR64__(v31, v32);
    }
    *v26 = v29;
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    v35 = KeAbPreAcquire((ULONG_PTR)&ExpFastCacheUpdateLock, 0LL, 0LL);
    v36 = _interlockedbittestandset64((volatile signed __int32 *)&ExpFastCacheUpdateLock, 0LL);
    v37 = v35;
    if ( v36 )
      ExfAcquirePushLockExclusiveEx(&ExpFastCacheUpdateLock, v35, (ULONG_PTR)&ExpFastCacheUpdateLock);
    if ( v37 )
      *(_BYTE *)(v37 + 26) |= 1u;
    if ( !a4 )
      break;
    v38 = v86;
    if ( v38 == _InterlockedCompareExchange((volatile signed __int32 *)&unk_1406FB430 + 18 * v8 + 7, v86 + 1, v86) )
      goto LABEL_52;
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&ExpFastCacheUpdateLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&ExpFastCacheUpdateLock);
    KeAbPostRelease((ULONG_PTR)&ExpFastCacheUpdateLock);
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
    v11 = (char *)MappedBase[0];
LABEL_29:
    if ( Object )
    {
      ObfDereferenceObject(Object);
      Object = 0LL;
    }
    if ( v11 )
    {
      MmUnmapViewInSystemSpace(v11);
      MappedBase[0] = 0LL;
    }
    if ( P )
    {
      ExFreePoolWithTag(P, 0);
      P = 0LL;
    }
    LOBYTE(v15) = a5;
    LODWORD(NumOfElements) = v84;
    v25 = sub_14066994C(
            v8,
            v93,
            v24,
            v15,
            NumOfElements,
            Base,
            (__int64)&v86,
            (__int64)&Object,
            (__int64)MappedBase,
            (__int64)&v88,
            (__int64)&P);
    v11 = (char *)MappedBase[0];
    v9 = v25;
    if ( v25 < 0 )
      goto LABEL_97;
  }
  _InterlockedIncrement((volatile signed __int32 *)&unk_1406FB430 + 18 * v8 + 7);
LABEL_52:
  v39 = MappedBase[0];
  v18 = 0LL;
  v40 = *((_QWORD *)MappedBase[0] + 2);
  if ( !*(_QWORD *)&qword_1406FBD30 )
  {
    v9 = sub_14054598C((UNICODE_STRING *)&stru_1406A1900, (PVOID *)&qword_1406FBD30);
    if ( v9 < 0 )
      goto LABEL_82;
  }
  v41 = &v96;
  v85 = 0LL;
  v42 = 8LL;
  v43 = 0;
  v44 = 0;
  v96 = qword_1406FBAD8;
  do
  {
    v45 = *(unsigned __int8 *)v41;
    v41 = (__int64 *)((char *)v41 + 1);
    v45 -= 23737705;
    v43 = __ROR4__(-23737705 * __ROR4__(-23737705 * __ROR4__(-23737705 * (v43 + v45), 21), 21), 21);
    v44 += v43 + v45;
    --v42;
  }
  while ( v42 );
  v85 = __PAIR64__(v43, v44);
  v94 = __PAIR64__(v43, v44);
  v46 = &dword_1406FB450;
  v47 = 0;
  v48 = &dword_1406FB450;
  while ( 2 )
  {
    if ( ExpFastCacheReArmed )
      goto LABEL_63;
    if ( v47 != (_DWORD)v8 )
    {
      v49 = *((_QWORD *)v48 - 3);
      if ( v49 && !*v48 )
      {
        v90 = *(_QWORD *)(v49 + 16);
        goto LABEL_64;
      }
LABEL_63:
      v90 = 0LL;
      goto LABEL_64;
    }
    v90 = v40;
LABEL_64:
    v50 = (unsigned __int8 *)&v90;
    v81 = v94;
    v51 = 8LL;
    v52 = HIDWORD(v94);
    v53 = v94;
    do
    {
      v54 = *v50++;
      v54 -= 23737705;
      v52 = __ROR4__(-23737705 * __ROR4__(-23737705 * __ROR4__(-23737705 * (v52 + v54), 21), 21), 21);
      v53 += v52 + v54;
      --v51;
    }
    while ( v51 );
    v81 = __PAIR64__(v52, v53);
    v55 = __PAIR64__(v52, v53);
    v94 = __PAIR64__(v52, v53);
    ++v47;
    v48 += 18;
    if ( (unsigned __int64)v47 < 5 )
      continue;
    break;
  }
  v56 = 0LL;
  if ( (_DWORD)v8 != -1 )
  {
    v87 = 0LL;
    v57 = 0;
    v58 = &v97;
    v59 = 8LL;
    v97 = qword_1406FBAD8;
    v60 = 0;
    do
    {
      v61 = *(unsigned __int8 *)v58;
      v58 = (__int64 *)((char *)v58 + 1);
      v61 -= 23737705;
      v57 = __ROR4__(-23737705 * __ROR4__(-23737705 * __ROR4__(-23737705 * (v57 + v61), 21), 21), 21);
      v60 += v57 + v61;
      --v59;
    }
    while ( v59 );
    v87 = __PAIR64__(v57, v60);
    v95 = __PAIR64__(v57, v60);
    v62 = 0;
    do
    {
      if ( ExpFastCacheReArmed || v62 == -1 || (v63 = *((_QWORD *)v46 - 3)) == 0 || *v46 )
        v91 = 0LL;
      else
        v91 = *(_QWORD *)(v63 + 16);
      v64 = (unsigned __int8 *)&v91;
      v89 = v95;
      v65 = 8LL;
      v66 = HIDWORD(v95);
      v67 = v95;
      do
      {
        v68 = *v64++;
        v68 -= 23737705;
        v66 = __ROR4__(-23737705 * __ROR4__(-23737705 * __ROR4__(-23737705 * (v66 + v68), 21), 21), 21);
        v67 += v66 + v68;
        --v65;
      }
      while ( v65 );
      v89 = __PAIR64__(v66, v67);
      v56 = __PAIR64__(v66, v67);
      v95 = __PAIR64__(v66, v67);
      ++v62;
      v46 += 18;
    }
    while ( (unsigned __int64)v62 < 5 );
    v55 = v81;
  }
  v100 = v56;
  LODWORD(NumOfElements) = 24;
  *(_QWORD *)v98 = qword_1406FBAD8;
  v99 = v55;
  v69 = CmSetValueKey(*(__int64 *)&qword_1406FBD30, &stru_1406A18F0, 3u, v98, NumOfElements, 0LL, 0);
  v39 = MappedBase[0];
  v9 = v69;
LABEL_82:
  if ( v9 < 0 || (v9 = sub_140669FD4((unsigned int)v8, v39), v9 < 0) )
  {
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&ExpFastCacheUpdateLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&ExpFastCacheUpdateLock);
    KeAbPostRelease((ULONG_PTR)&ExpFastCacheUpdateLock);
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
    v11 = (char *)MappedBase[0];
    v16 = 0LL;
    v17 = 0LL;
  }
  else
  {
    v70 = KeAbPreAcquire((ULONG_PTR)&ExpFastCacheLock, 0LL, 0LL);
    v36 = _interlockedbittestandset64((volatile signed __int32 *)&ExpFastCacheLock, 0LL);
    v71 = v70;
    if ( v36 )
      ExfAcquirePushLockExclusiveEx(&ExpFastCacheLock, v70, (ULONG_PTR)&ExpFastCacheLock);
    if ( v71 )
      *(_BYTE *)(v71 + 26) |= 1u;
    v72 = Object;
    v73 = 9 * v8;
    v17 = (PVOID)*((_QWORD *)&unk_1406FB430 + 9 * v8);
    v16 = (PVOID)*((_QWORD *)&unk_1406FB430 + 9 * v8 + 1);
    ObfReferenceObject(Object);
    *((PVOID *)&unk_1406FB430 + v73 + 1) = MappedBase[0];
    v74 = P;
    P = 0LL;
    *((_DWORD *)&unk_1406FB430 + 2 * v73 + 8) = 0;
    MappedBase[0] = 0LL;
    v18 = (PVOID)*((_QWORD *)&unk_1406FB430 + 9 * v8 + 2);
    *((_QWORD *)&unk_1406FB430 + v73 + 2) = v74;
    *((_DWORD *)&unk_1406FB430 + 2 * v73 + 6) = v88;
    *((_QWORD *)&unk_1406FB430 + v73) = v72;
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&ExpFastCacheLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&ExpFastCacheLock);
    KeAbPostRelease((ULONG_PTR)&ExpFastCacheLock);
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&ExpFastCacheUpdateLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&ExpFastCacheUpdateLock);
    KeAbPostRelease((ULONG_PTR)&ExpFastCacheUpdateLock);
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
    v11 = (char *)MappedBase[0];
    v9 = 0;
  }
LABEL_98:
  if ( Object )
    ObfDereferenceObject(Object);
  if ( v17 )
    ObfDereferenceObject(v17);
  if ( v11 )
    MmUnmapViewInSystemSpace(v11);
  if ( v16 )
    MmUnmapViewInSystemSpace(v16);
  if ( Base )
    ExFreePoolWithTag(Base, 0);
  if ( P )
    ExFreePoolWithTag(P, 0);
  if ( v18 )
    ExFreePoolWithTag(v18, 0);
  if ( v92 )
    ExFreePoolWithTag(v92, 0);
  return (unsigned int)v9;
}
