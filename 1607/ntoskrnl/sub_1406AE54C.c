/*
 * XREFs of sub_1406AE54C @ 0x1406AE54C
 * Callers:
 *     <none>
 * Callees:
 *     KeAbPreAcquire @ 0x14002BD30 (KeAbPreAcquire.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140055B20 (KiLeaveCriticalRegionUnsafe.c)
 *     ObfReferenceObject @ 0x140069BE0 (ObfReferenceObject.c)
 *     ObfDereferenceObject @ 0x14006A780 (ObfDereferenceObject.c)
 *     KeAbPostRelease @ 0x14006AA40 (KeAbPostRelease.c)
 *     ExpLicUpdateChecksum @ 0x14008795C (ExpLicUpdateChecksum.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400C5F10 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1400C65D8 (ExfTryToWakePushLock.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     memmove @ 0x140171780 (memmove.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 *     CmSetValueKey @ 0x140402670 (CmSetValueKey.c)
 *     MmUnmapViewInSystemSpace @ 0x140508E94 (MmUnmapViewInSystemSpace.c)
 *     ExpObtainFastCacheKeyBody @ 0x14057AB9C (ExpObtainFastCacheKeyBody.c)
 *     sub_1406AED74 @ 0x1406AED74 (sub_1406AED74.c)
 *     sub_1406AF170 @ 0x1406AF170 (sub_1406AF170.c)
 *     ExpParseFastCacheHelper @ 0x1406AF734 (ExpParseFastCacheHelper.c)
 *     sub_1406AF7F8 @ 0x1406AF7F8 (sub_1406AF7F8.c)
 *     ExpValidateFastCacheSize @ 0x1406AFCE0 (ExpValidateFastCacheSize.c)
 */

__int64 __fastcall sub_1406AE54C(unsigned int a1, size_t Size, _DWORD *Src, char a4, char a5)
{
  SIZE_T v5; // rbx
  void *v6; // r15
  __int64 v9; // r12
  int updated; // edi
  PVOID v11; // rdi
  void *v12; // r14
  void *v13; // r12
  void *v14; // r13
  PVOID PoolWithTag; // rax
  int v16; // eax
  int v17; // r9d
  __int64 v18; // rdx
  PVOID v19; // r9
  __int64 *v20; // r8
  __int64 v21; // r10
  __int64 v22; // rax
  _QWORD *v23; // r8
  char *v24; // rcx
  struct _KTHREAD *CurrentThread; // rax
  _BYTE *v26; // rax
  __int64 v27; // rdx
  _BYTE *v28; // rdi
  signed __int32 v29; // ett
  __int64 v30; // rdx
  __int64 v31; // r8
  __int64 v32; // r9
  __int64 v33; // rdx
  __int64 v34; // r11
  __int64 v35; // r9
  __int64 v36; // r10
  __int64 v37; // rdx
  int v38; // edx
  _BYTE *v39; // rax
  signed __int8 v40; // cf
  _BYTE *v41; // rdi
  PVOID v42; // rdi
  __int64 v43; // rsi
  PVOID v44; // rax
  PVOID v45; // rax
  __int64 v46; // rdx
  __int64 v47; // r8
  __int64 v48; // r9
  __int64 v49; // rdx
  __int64 v50; // r8
  __int64 v51; // r9
  size_t NumOfElements; // [rsp+20h] [rbp-C1h]
  PVOID MappedBase; // [rsp+60h] [rbp-81h] BYREF
  PVOID P[4]; // [rsp+68h] [rbp-79h] BYREF
  PVOID Object; // [rsp+88h] [rbp-59h] BYREF
  unsigned int v57; // [rsp+90h] [rbp-51h] BYREF
  signed __int32 v58; // [rsp+94h] [rbp-4Dh] BYREF
  __int64 v59; // [rsp+98h] [rbp-49h] BYREF
  PVOID Base; // [rsp+A0h] [rbp-41h] BYREF
  __int64 v61; // [rsp+A8h] [rbp-39h] BYREF
  int v62; // [rsp+B0h] [rbp-31h] BYREF
  __int64 v63; // [rsp+B8h] [rbp-29h] BYREF
  _BYTE v64[8]; // [rsp+C0h] [rbp-21h] BYREF
  _BYTE v65[8]; // [rsp+C8h] [rbp-19h] BYREF
  _BYTE v66[8]; // [rsp+D0h] [rbp-11h] BYREF
  _BYTE v67[8]; // [rsp+D8h] [rbp-9h] BYREF
  int v68[2]; // [rsp+E0h] [rbp-1h] BYREF
  __int64 v69; // [rsp+E8h] [rbp+7h]
  __int64 v70; // [rsp+F0h] [rbp+Fh]

  v5 = (unsigned int)Size;
  Base = 0LL;
  v6 = 0LL;
  Object = 0LL;
  MappedBase = 0LL;
  P[0] = 0LL;
  v9 = a1;
  if ( _InterlockedCompareExchange(&ExpFastCacheReArmed, 0, 0) == 1 )
    return (unsigned int)-1073700219;
  if ( !a5 && !a4 )
    return (unsigned int)-1073741811;
  updated = ExpValidateFastCacheSize(a1, (unsigned int)Size, &v62);
  if ( updated < 0 )
    return (unsigned int)updated;
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
LABEL_21:
    memmove(v11, Src, v5);
    v16 = ExpParseFastCacheHelper(v11, &v57, &Base);
    updated = v16;
    if ( v16 < 0 )
    {
      v12 = 0LL;
      v13 = 0LL;
      v14 = 0LL;
      if ( v16 == -1073741762 )
        updated = -1073741811;
      goto LABEL_79;
    }
    if ( a4 )
      goto LABEL_29;
    v18 = v57;
    v19 = Base;
    v58 = 0;
    if ( v57 )
    {
      v20 = (__int64 *)((char *)Base + 8);
      v21 = v57;
      do
      {
        v22 = *v20;
        v20 += 2;
        *(_QWORD *)(v22 + 32) = qword_140747BD8 + (unsigned int)dword_140747058;
        --v21;
      }
      while ( v21 );
    }
    LODWORD(v59) = v18;
    P[0] = v19;
    Base = 0LL;
    while ( 1 )
    {
      v23 = (char *)MappedBase + 16;
      v24 = (char *)MappedBase + 24;
      *((_QWORD *)MappedBase + 2) = 0LL;
      updated = ExpLicUpdateChecksum((__int64)v24, v18, v23);
      if ( updated < 0 )
        goto LABEL_78;
      CurrentThread = KeGetCurrentThread();
      --CurrentThread->KernelApcDisable;
      v26 = (_BYTE *)KeAbPreAcquire((ULONG_PTR)&ExpFastCacheUpdateLock, 0LL, 0);
      v28 = v26;
      if ( _interlockedbittestandset64((volatile signed __int32 *)&ExpFastCacheUpdateLock, 0LL) )
        ExfAcquirePushLockExclusiveEx(&ExpFastCacheUpdateLock, v26, (ULONG_PTR)&ExpFastCacheUpdateLock);
      if ( v28 )
        v28[26] |= 1u;
      if ( !a4 )
        break;
      v27 = 9 * v9;
      v29 = v58;
      if ( v29 == _InterlockedCompareExchange((volatile signed __int32 *)&unk_1407474A0 + 18 * v9 + 7, v58 + 1, v58) )
        goto LABEL_47;
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&ExpFastCacheUpdateLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)&ExpFastCacheUpdateLock);
      KeAbPostRelease((ULONG_PTR)&ExpFastCacheUpdateLock);
      KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v30, v31, v32);
LABEL_29:
      if ( Object )
      {
        ObfDereferenceObject(Object);
        Object = 0LL;
      }
      if ( MappedBase )
      {
        MmUnmapViewInSystemSpace(MappedBase);
        MappedBase = 0LL;
      }
      if ( P[0] )
      {
        ExFreePoolWithTag(P[0], 0);
        P[0] = 0LL;
      }
      LOBYTE(v17) = a5;
      LODWORD(NumOfElements) = v57;
      updated = sub_1406AF170(
                  v9,
                  v62,
                  (int)v6,
                  v17,
                  NumOfElements,
                  Base,
                  (__int64)&v58,
                  (__int64)&Object,
                  (__int64)&MappedBase,
                  (__int64)&v59,
                  (__int64)P);
      if ( updated < 0 )
        goto LABEL_78;
    }
    _InterlockedIncrement((volatile signed __int32 *)&unk_1407474A0 + 18 * v9 + 7);
LABEL_47:
    if ( *(_QWORD *)&qword_140747E48
      || (updated = ExpObtainFastCacheKeyBody((UNICODE_STRING *)&stru_1406E9A88, (PVOID *)&qword_140747E48), updated >= 0) )
    {
      v63 = 0LL;
      updated = ExpLicUpdateChecksum((__int64)v64, v27, &v63);
      if ( updated >= 0 )
      {
        v33 = 0LL;
        while ( 1 )
        {
          updated = ExpLicUpdateChecksum((__int64)v65, v33, &v63);
          if ( updated < 0 )
            break;
          v33 = (unsigned int)(v33 + 1);
          if ( (unsigned __int64)(int)v33 >= 5 )
          {
            v35 = v63;
            goto LABEL_55;
          }
        }
      }
      v35 = v61;
LABEL_55:
      v36 = 0LL;
      if ( updated < 0 )
        goto LABEL_75;
      if ( (_DWORD)v9 != -1 )
      {
        v61 = 0LL;
        updated = ExpLicUpdateChecksum((__int64)v66, v33, &v61);
        if ( updated >= 0 )
        {
          v37 = 0LL;
          while ( 1 )
          {
            updated = ExpLicUpdateChecksum((__int64)v67, v37, &v61);
            if ( updated < 0 )
              break;
            v37 = (unsigned int)(v38 + 1);
            if ( (unsigned __int64)(int)v37 >= 5 )
            {
              v36 = v61;
              break;
            }
          }
        }
      }
      if ( updated < 0 )
        goto LABEL_75;
      v69 = v35;
      LODWORD(NumOfElements) = 24;
      *(_QWORD *)v68 = v34;
      v70 = v36;
      updated = CmSetValueKey(
                  *(__int64 *)&qword_140747E48,
                  (UNICODE_STRING *)&stru_1406E9A78,
                  3,
                  v68,
                  NumOfElements,
                  0LL,
                  0);
    }
    if ( updated >= 0 )
    {
      updated = sub_1406AF7F8((unsigned int)v9, MappedBase);
      if ( updated >= 0 )
      {
        v39 = (_BYTE *)KeAbPreAcquire((ULONG_PTR)&ExpFastCacheLock, 0LL, 0);
        v40 = _interlockedbittestandset64((volatile signed __int32 *)&ExpFastCacheLock, 0LL);
        v41 = v39;
        if ( v40 )
          ExfAcquirePushLockExclusiveEx(&ExpFastCacheLock, v39, (ULONG_PTR)&ExpFastCacheLock);
        if ( v41 )
          v41[26] |= 1u;
        v42 = Object;
        v43 = 9 * v9;
        v12 = (void *)*((_QWORD *)&unk_1407474A0 + 9 * v9);
        v13 = (void *)*((_QWORD *)&unk_1407474A0 + 9 * v9 + 1);
        ObfReferenceObject(Object);
        v44 = MappedBase;
        MappedBase = 0LL;
        *((_QWORD *)&unk_1407474A0 + v43 + 1) = v44;
        v45 = P[0];
        P[0] = 0LL;
        *((_DWORD *)&unk_1407474A0 + 2 * v43 + 8) = 0;
        *((_QWORD *)&unk_1407474A0 + v43) = v42;
        v14 = (void *)*((_QWORD *)&unk_1407474A0 + v43 + 2);
        *((_QWORD *)&unk_1407474A0 + v43 + 2) = v45;
        *((_DWORD *)&unk_1407474A0 + 2 * v43 + 6) = v59;
        if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&ExpFastCacheLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
          ExfTryToWakePushLock((volatile signed __int64 *)&ExpFastCacheLock);
        KeAbPostRelease((ULONG_PTR)&ExpFastCacheLock);
        if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&ExpFastCacheUpdateLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
          ExfTryToWakePushLock((volatile signed __int64 *)&ExpFastCacheUpdateLock);
        KeAbPostRelease((ULONG_PTR)&ExpFastCacheUpdateLock);
        KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v46, v47, v48);
        updated = 0;
        goto LABEL_79;
      }
    }
LABEL_75:
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&ExpFastCacheUpdateLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&ExpFastCacheUpdateLock);
    KeAbPostRelease((ULONG_PTR)&ExpFastCacheUpdateLock);
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v49, v50, v51);
LABEL_78:
    v12 = 0LL;
    v13 = 0LL;
    v14 = 0LL;
    goto LABEL_79;
  }
  updated = sub_1406AED74((unsigned int)v5, &Object, &MappedBase);
  if ( updated >= 0 )
  {
    v11 = MappedBase;
    goto LABEL_21;
  }
  v12 = 0LL;
  v13 = 0LL;
  v14 = 0LL;
LABEL_79:
  if ( Object )
    ObfDereferenceObject(Object);
  if ( v12 )
    ObfDereferenceObject(v12);
  if ( MappedBase )
    MmUnmapViewInSystemSpace(MappedBase);
  if ( v13 )
    MmUnmapViewInSystemSpace(v13);
  if ( Base )
    ExFreePoolWithTag(Base, 0);
  if ( P[0] )
    ExFreePoolWithTag(P[0], 0);
  if ( v14 )
    ExFreePoolWithTag(v14, 0);
  if ( v6 )
    ExFreePoolWithTag(v6, 0);
  return (unsigned int)updated;
}
