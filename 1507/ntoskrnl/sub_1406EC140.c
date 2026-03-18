/*
 * XREFs of sub_1406EC140 @ 0x1406EC140
 * Callers:
 *     sub_140261FA8 @ 0x140261FA8 (sub_140261FA8.c)
 *     sub_140701838 @ 0x140701838 (sub_140701838.c)
 * Callees:
 *     ObfReferenceObject @ 0x14004E630 (ObfReferenceObject.c)
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     ObfDereferenceObject @ 0x14004ED50 (ObfDereferenceObject.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400F30E0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1400F36F8 (ExfTryToWakePushLock.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     memmove @ 0x140195740 (memmove.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 *     CmSetValueKey @ 0x140428B40 (CmSetValueKey.c)
 *     MmUnmapViewInSystemSpace @ 0x14051BEC8 (MmUnmapViewInSystemSpace.c)
 *     ExpParseFastCacheHelper @ 0x1405A9894 (ExpParseFastCacheHelper.c)
 *     sub_1405A99E4 @ 0x1405A99E4 (sub_1405A99E4.c)
 *     ExpValidateFastCacheSize @ 0x1405A9AF4 (ExpValidateFastCacheSize.c)
 *     sub_1405BC990 @ 0x1405BC990 (sub_1405BC990.c)
 *     sub_1406ECEC4 @ 0x1406ECEC4 (sub_1406ECEC4.c)
 *     sub_1406ED5D0 @ 0x1406ED5D0 (sub_1406ED5D0.c)
 */

__int64 __fastcall sub_1406EC140(unsigned int a1, size_t Size, _DWORD *Src, char a4, char a5)
{
  SIZE_T v5; // rbx
  void *v6; // r13
  __int64 v9; // r12
  int v10; // edi
  PVOID v11; // rdi
  void *v12; // r14
  void *v13; // r15
  void *v14; // r12
  PVOID PoolWithTag; // rax
  int v16; // eax
  int v17; // r9d
  int v18; // edx
  __int64 v19; // r9
  __int64 *v20; // r8
  __int64 v21; // r10
  __int64 v22; // rax
  _DWORD *v23; // rcx
  unsigned __int64 *v24; // rdx
  unsigned __int8 *v25; // r10
  unsigned int v26; // r8d
  unsigned __int64 v27; // rax
  __int64 v28; // r11
  unsigned int v29; // r8d
  int v30; // ecx
  struct _KTHREAD *CurrentThread; // rax
  __int64 v32; // rax
  __int64 v33; // r9
  __int64 v34; // rdi
  int v35; // ett
  struct _KTHREAD *v36; // rcx
  __int16 v37; // ax
  PVOID v38; // rsi
  __int64 v39; // r14
  __int64 *v40; // r9
  unsigned int v41; // r8d
  unsigned int v42; // edx
  __int64 v43; // r10
  int v44; // ecx
  int *v45; // rsi
  int v46; // r8d
  int *v47; // rdx
  __int64 v48; // rax
  unsigned __int8 *v49; // r11
  __int64 v50; // rdi
  unsigned int v51; // r10d
  unsigned int v52; // r9d
  int v53; // ecx
  unsigned __int64 v54; // rax
  unsigned __int64 v55; // rcx
  unsigned int v56; // edx
  __int64 *v57; // r9
  __int64 v58; // r10
  unsigned int v59; // r8d
  int v60; // ecx
  int v61; // edx
  __int64 v62; // rax
  unsigned __int8 *v63; // r10
  __int64 v64; // r11
  unsigned int v65; // r8d
  unsigned int v66; // r9d
  int v67; // ecx
  int v68; // eax
  __int64 v69; // r9
  __int64 v70; // rax
  __int64 v71; // r9
  signed __int8 v72; // cf
  __int64 v73; // rdi
  PVOID v74; // rdi
  __int64 v75; // rsi
  struct _KTHREAD *v76; // rcx
  __int16 v77; // ax
  struct _KTHREAD *v78; // rcx
  __int16 v79; // ax
  size_t NumOfElements; // [rsp+20h] [rbp-E0h]
  PVOID MappedBase[3]; // [rsp+60h] [rbp-A0h] BYREF
  void *v83; // [rsp+78h] [rbp-88h]
  PVOID P; // [rsp+80h] [rbp-80h] BYREF
  PVOID Object; // [rsp+88h] [rbp-78h] BYREF
  unsigned __int64 v86; // [rsp+90h] [rbp-70h]
  unsigned __int64 v87; // [rsp+98h] [rbp-68h]
  PVOID Base; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v89; // [rsp+A8h] [rbp-58h] BYREF
  unsigned __int64 v90; // [rsp+B0h] [rbp-50h]
  __int64 v91; // [rsp+B8h] [rbp-48h] BYREF
  unsigned __int64 v92; // [rsp+C0h] [rbp-40h]
  size_t v93; // [rsp+C8h] [rbp-38h] BYREF
  unsigned __int64 v94; // [rsp+D0h] [rbp-30h]
  __int64 v95; // [rsp+D8h] [rbp-28h] BYREF
  __int64 v96; // [rsp+E0h] [rbp-20h] BYREF
  int v97; // [rsp+E8h] [rbp-18h] BYREF
  unsigned __int64 v98; // [rsp+F0h] [rbp-10h]
  unsigned __int64 v99; // [rsp+F8h] [rbp-8h]
  __int64 v100; // [rsp+100h] [rbp+0h] BYREF
  __int64 v101; // [rsp+108h] [rbp+8h] BYREF
  _QWORD v102[3]; // [rsp+110h] [rbp+10h] BYREF

  v5 = (unsigned int)Size;
  Base = 0LL;
  v6 = 0LL;
  Object = 0LL;
  MappedBase[0] = 0LL;
  P = 0LL;
  v83 = 0LL;
  v9 = a1;
  if ( _InterlockedCompareExchange(&ExpFastCacheReArmed, 0, 0) == 1 )
    return (unsigned int)-1073700219;
  if ( !a5 && !a4 )
    return (unsigned int)-1073741811;
  v10 = ExpValidateFastCacheSize(a1, Size, (unsigned int *)&v97);
  if ( v10 < 0 )
    return (unsigned int)v10;
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
    v6 = PoolWithTag;
    if ( !PoolWithTag )
      return (unsigned int)-1073741801;
    v11 = PoolWithTag;
  }
  else
  {
    v10 = sub_1405A99E4(v5, &Object, MappedBase);
    if ( v10 < 0 )
    {
      v12 = 0LL;
      v13 = 0LL;
      v14 = 0LL;
      goto LABEL_109;
    }
    v11 = MappedBase[0];
  }
  memmove(v11, Src, v5);
  v16 = ExpParseFastCacheHelper((__int64)v11, (unsigned int *)&v93, &Base);
  v10 = v16;
  if ( v16 < 0 )
  {
    v12 = 0LL;
    v13 = 0LL;
    v14 = 0LL;
    if ( v16 == -1073741762 )
      v10 = -1073741811;
    goto LABEL_109;
  }
  if ( a4 )
    goto LABEL_29;
  v18 = v93;
  v19 = (__int64)Base;
  LODWORD(v91) = 0;
  if ( (_DWORD)v93 )
  {
    v20 = (__int64 *)((char *)Base + 8);
    v21 = (unsigned int)v93;
    do
    {
      v22 = *v20;
      v20 += 2;
      *(_QWORD *)(v22 + 32) = qword_14077EAD0 + (unsigned int)dword_14077E060;
      --v21;
    }
    while ( v21 );
  }
  LODWORD(v89) = v18;
  P = (PVOID)v19;
  Base = 0LL;
  while ( 1 )
  {
    v23 = MappedBase[0];
    v24 = (unsigned __int64 *)((char *)MappedBase[0] + 16);
    v25 = (unsigned __int8 *)MappedBase[0] + 24;
    *((_QWORD *)MappedBase[0] + 2) = 0LL;
    v26 = v23[2];
    if ( !v25 || !v24 )
    {
      v10 = -1073741811;
LABEL_108:
      v12 = 0LL;
      v13 = 0LL;
      v14 = 0LL;
      goto LABEL_109;
    }
    v27 = 0LL;
    v28 = v26;
    v87 = 0LL;
    if ( v26 )
    {
      v29 = HIDWORD(v87);
      LODWORD(v19) = v87;
      do
      {
        v30 = *v25++;
        v30 -= 23737705;
        v29 = __ROR4__(-23737705 * __ROR4__(-23737705 * __ROR4__(-23737705 * (v29 + v30), 21), 21), 21);
        v19 = v29 + v30 + (_DWORD)v19;
        --v28;
      }
      while ( v28 );
      v87 = __PAIR64__(v29, v19);
      v27 = __PAIR64__(v29, v19);
    }
    *v24 = v27;
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    v32 = KeAbPreAcquire((ULONG_PTR)&ExpFastCacheUpdateLock, 0LL, 0LL, v19);
    v34 = v32;
    if ( _interlockedbittestandset64((volatile signed __int32 *)&ExpFastCacheUpdateLock, 0LL) )
      ExfAcquirePushLockExclusiveEx(&ExpFastCacheUpdateLock, v32, (ULONG_PTR)&ExpFastCacheUpdateLock, v33);
    if ( v34 )
      *(_BYTE *)(v34 + 26) |= 1u;
    if ( !a4 )
      break;
    v35 = v91;
    if ( v35 == _InterlockedCompareExchange((volatile signed __int32 *)&unk_14077E460 + 18 * v9 + 7, v91 + 1, v91) )
      goto LABEL_55;
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&ExpFastCacheUpdateLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&ExpFastCacheUpdateLock);
    KeAbPostRelease((ULONG_PTR)&ExpFastCacheUpdateLock);
    v36 = KeGetCurrentThread();
    v37 = v36->KernelApcDisable + 1;
    v36->KernelApcDisable = v37;
    if ( !v37
      && ($CD287064E7C9F7953DE243E927CFCB99 *)v36->ApcState.ApcListHead[0].Flink != &v36->152
      && !v36->SpecialApcDisable )
    {
      KiCheckForKernelApcDelivery();
    }
LABEL_29:
    if ( Object )
    {
      ObfDereferenceObject(Object);
      Object = 0LL;
    }
    if ( MappedBase[0] )
    {
      MmUnmapViewInSystemSpace(MappedBase[0]);
      MappedBase[0] = 0LL;
    }
    if ( P )
    {
      ExFreePoolWithTag(P, 0);
      P = 0LL;
    }
    LOBYTE(v17) = a5;
    LODWORD(NumOfElements) = v93;
    v10 = sub_1406ECEC4(
            v9,
            v97,
            (int)v6,
            v17,
            NumOfElements,
            Base,
            (__int64)&v91,
            (__int64)&Object,
            (__int64)MappedBase,
            (__int64)&v89,
            (__int64)&P);
    if ( v10 < 0 )
      goto LABEL_108;
  }
  _InterlockedIncrement((volatile signed __int32 *)&unk_14077E460 + 18 * v9 + 7);
LABEL_55:
  v38 = MappedBase[0];
  v39 = *((_QWORD *)MappedBase[0] + 2);
  if ( !qword_14077ED28 )
  {
    v10 = sub_1405BC990((UNICODE_STRING *)&stru_140721B40, (PVOID *)&qword_14077ED28);
    if ( v10 < 0 )
      goto LABEL_85;
  }
  v40 = &v100;
  v100 = qword_14077EAD0;
  v90 = 0LL;
  v41 = 0;
  v42 = 0;
  v43 = 8LL;
  do
  {
    v44 = *(unsigned __int8 *)v40;
    v40 = (__int64 *)((char *)v40 + 1);
    v44 -= 23737705;
    v42 = __ROR4__(-23737705 * __ROR4__(-23737705 * __ROR4__(-23737705 * (v42 + v44), 21), 21), 21);
    v41 += v42 + v44;
    --v43;
  }
  while ( v43 );
  v90 = __PAIR64__(v42, v41);
  v99 = __PAIR64__(v42, v41);
  v45 = &dword_14077E480;
  v46 = 0;
  v47 = &dword_14077E480;
  do
  {
    if ( ExpFastCacheReArmed )
    {
LABEL_66:
      v95 = 0LL;
      goto LABEL_67;
    }
    if ( v46 == (_DWORD)v9 )
    {
      v95 = v39;
    }
    else
    {
      v48 = *((_QWORD *)v47 - 3);
      if ( !v48 || *v47 )
        goto LABEL_66;
      v95 = *(_QWORD *)(v48 + 16);
    }
LABEL_67:
    v49 = (unsigned __int8 *)&v95;
    v86 = v99;
    v50 = 8LL;
    v51 = HIDWORD(v99);
    v52 = v99;
    do
    {
      v53 = *v49++;
      v53 -= 23737705;
      v51 = __ROR4__(-23737705 * __ROR4__(-23737705 * __ROR4__(-23737705 * (v51 + v53), 21), 21), 21);
      v52 += v51 + v53;
      --v50;
    }
    while ( v50 );
    v86 = __PAIR64__(v51, v52);
    v54 = __PAIR64__(v51, v52);
    v99 = __PAIR64__(v51, v52);
    ++v46;
    v47 += 18;
  }
  while ( (unsigned __int64)v46 < 5 );
  v55 = 0LL;
  if ( (_DWORD)v9 != -1 )
  {
    v92 = 0LL;
    v56 = 0;
    v57 = &v101;
    v58 = 8LL;
    v101 = qword_14077EAD0;
    v59 = 0;
    do
    {
      v60 = *(unsigned __int8 *)v57;
      v57 = (__int64 *)((char *)v57 + 1);
      v60 -= 23737705;
      v56 = __ROR4__(-23737705 * __ROR4__(-23737705 * __ROR4__(-23737705 * (v56 + v60), 21), 21), 21);
      v59 += v56 + v60;
      --v58;
    }
    while ( v58 );
    v92 = __PAIR64__(v56, v59);
    v98 = __PAIR64__(v56, v59);
    v61 = 0;
    do
    {
      if ( ExpFastCacheReArmed || v61 == -1 || (v62 = *((_QWORD *)v45 - 3)) == 0 || *v45 )
        v96 = 0LL;
      else
        v96 = *(_QWORD *)(v62 + 16);
      v63 = (unsigned __int8 *)&v96;
      v94 = v98;
      v64 = 8LL;
      v65 = HIDWORD(v98);
      v66 = v98;
      do
      {
        v67 = *v63++;
        v67 -= 23737705;
        v65 = __ROR4__(-23737705 * __ROR4__(-23737705 * __ROR4__(-23737705 * (v65 + v67), 21), 21), 21);
        v66 += v65 + v67;
        --v64;
      }
      while ( v64 );
      v94 = __PAIR64__(v65, v66);
      v55 = __PAIR64__(v65, v66);
      v98 = __PAIR64__(v65, v66);
      ++v61;
      v45 += 18;
    }
    while ( (unsigned __int64)v61 < 5 );
    v54 = v86;
  }
  v102[2] = v55;
  LODWORD(NumOfElements) = 24;
  v102[0] = qword_14077EAD0;
  v102[1] = v54;
  v68 = CmSetValueKey(qword_14077ED28, &stru_140721B50, 3u, v102, NumOfElements, 0LL, 0);
  v38 = MappedBase[0];
  v10 = v68;
LABEL_85:
  if ( v10 < 0 || (v10 = sub_1406ED5D0((unsigned int)v9, v38), v10 < 0) )
  {
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&ExpFastCacheUpdateLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&ExpFastCacheUpdateLock);
    KeAbPostRelease((ULONG_PTR)&ExpFastCacheUpdateLock);
    v78 = KeGetCurrentThread();
    v79 = v78->KernelApcDisable + 1;
    v78->KernelApcDisable = v79;
    if ( !v79
      && ($CD287064E7C9F7953DE243E927CFCB99 *)v78->ApcState.ApcListHead[0].Flink != &v78->152
      && !v78->SpecialApcDisable )
    {
      KiCheckForKernelApcDelivery();
    }
    v12 = v83;
    v13 = v83;
    v14 = v83;
  }
  else
  {
    v70 = KeAbPreAcquire((ULONG_PTR)&ExpFastCacheLock, 0LL, 0LL, v69);
    v72 = _interlockedbittestandset64((volatile signed __int32 *)&ExpFastCacheLock, 0LL);
    v73 = v70;
    if ( v72 )
      ExfAcquirePushLockExclusiveEx(&ExpFastCacheLock, v70, (ULONG_PTR)&ExpFastCacheLock, v71);
    if ( v73 )
      *(_BYTE *)(v73 + 26) |= 1u;
    v74 = Object;
    v75 = 9 * v9;
    v12 = (void *)*((_QWORD *)&unk_14077E460 + 9 * v9);
    v13 = (void *)*((_QWORD *)&unk_14077E460 + 9 * v9 + 1);
    ObfReferenceObject(Object);
    v14 = (void *)*((_QWORD *)&unk_14077E460 + 9 * v9 + 2);
    *((PVOID *)&unk_14077E460 + v75 + 1) = MappedBase[0];
    *((_QWORD *)&unk_14077E460 + v75 + 2) = P;
    *((_DWORD *)&unk_14077E460 + 2 * v75 + 6) = v89;
    *((_QWORD *)&unk_14077E460 + v75) = v74;
    MappedBase[0] = 0LL;
    P = 0LL;
    *((_DWORD *)&unk_14077E460 + 2 * v75 + 8) = 0;
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&ExpFastCacheLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&ExpFastCacheLock);
    KeAbPostRelease((ULONG_PTR)&ExpFastCacheLock);
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&ExpFastCacheUpdateLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&ExpFastCacheUpdateLock);
    KeAbPostRelease((ULONG_PTR)&ExpFastCacheUpdateLock);
    v76 = KeGetCurrentThread();
    v77 = v76->KernelApcDisable + 1;
    v76->KernelApcDisable = v77;
    if ( !v77
      && ($CD287064E7C9F7953DE243E927CFCB99 *)v76->ApcState.ApcListHead[0].Flink != &v76->152
      && !v76->SpecialApcDisable )
    {
      KiCheckForKernelApcDelivery();
    }
    v10 = 0;
  }
LABEL_109:
  if ( Object )
    ObfDereferenceObject(Object);
  if ( v12 )
    ObfDereferenceObject(v12);
  if ( MappedBase[0] )
    MmUnmapViewInSystemSpace(MappedBase[0]);
  if ( v13 )
    MmUnmapViewInSystemSpace(v13);
  if ( Base )
    ExFreePoolWithTag(Base, 0);
  if ( P )
    ExFreePoolWithTag(P, 0);
  if ( v14 )
    ExFreePoolWithTag(v14, 0);
  if ( v6 )
    ExFreePoolWithTag(v6, 0);
  return (unsigned int)v10;
}
