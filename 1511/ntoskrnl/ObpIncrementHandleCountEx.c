/*
 * XREFs of ObpIncrementHandleCountEx @ 0x14040BFB0
 * Callers:
 *     ObInheritObjectHandle @ 0x1403E2FE4 (ObInheritObjectHandle.c)
 *     ObpCreateHandle @ 0x14040CFA0 (ObpCreateHandle.c)
 *     ObDuplicateObject @ 0x1404246E0 (ObDuplicateObject.c)
 *     ObpInsertOrLocateNamedObject @ 0x14046FBC0 (ObpInsertOrLocateNamedObject.c)
 *     ObCaptureObjectStateForDuplication @ 0x14047D164 (ObCaptureObjectStateForDuplication.c)
 *     ObCompleteObjectDuplication @ 0x140480070 (ObCompleteObjectDuplication.c)
 * Callees:
 *     ExfAcquirePushLockExclusiveEx @ 0x140020CE0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfReleasePushLock @ 0x1400309C0 (ExfReleasePushLock.c)
 *     KeAbPostRelease @ 0x140042090 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegion @ 0x140042660 (KeLeaveCriticalRegion.c)
 *     KeAbPreAcquire @ 0x140042DA0 (KeAbPreAcquire.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x1400430F0 (KiLeaveGuardedRegionUnsafe.c)
 *     PspChargeQuota @ 0x140063930 (PspChargeQuota.c)
 *     PspReturnQuota @ 0x140089190 (PspReturnQuota.c)
 *     KiStackAttachProcess @ 0x1400A6700 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x1400A6A00 (KiUnstackDetachProcess.c)
 *     OBJECT_HEADER_TO_PROCESS_INFO @ 0x1400F2380 (OBJECT_HEADER_TO_PROCESS_INFO.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     SeComputeQuotaInformationSize @ 0x14046B800 (SeComputeQuotaInformationSize.c)
 *     PsReturnSharedPoolQuota @ 0x14046C2DC (PsReturnSharedPoolQuota.c)
 *     ObpDeleteNameCheck @ 0x1404701A0 (ObpDeleteNameCheck.c)
 *     ObpUnlockHandleDatabaseEntry @ 0x14049CE60 (ObpUnlockHandleDatabaseEntry.c)
 *     ObpLockHandleDataBaseEntry @ 0x14049CEE0 (ObpLockHandleDataBaseEntry.c)
 */

__int64 __fastcall ObpIncrementHandleCountEx(
        unsigned int a1,
        __int64 a2,
        ULONG_PTR a3,
        __int64 a4,
        unsigned __int8 a5,
        __int16 a6,
        __int64 a7)
{
  __int64 v7; // rbp
  __int64 v8; // r15
  unsigned __int64 v9; // rdx
  __int64 v10; // r14
  struct _KTHREAD *CurrentThread; // rax
  __int64 v12; // rax
  __int64 v13; // rbx
  char v14; // dl
  char v15; // al
  signed __int64 v16; // rbx
  __int64 v17; // r12
  unsigned __int64 v18; // rcx
  unsigned int v19; // r11d
  unsigned int v20; // eax
  unsigned __int64 v21; // rcx
  __int64 v22; // r15
  int v23; // r15d
  ULONG_PTR v24; // r13
  bool v25; // zf
  signed __int64 v26; // rax
  signed __int64 v27; // rcx
  __int64 v28; // rtt
  unsigned __int32 v29; // esi
  signed __int64 v31; // rax
  signed __int64 v32; // rcx
  __int64 v33; // rtt
  char v34; // r12
  ULONG_PTR v35; // r13
  unsigned int v36; // r15d
  struct _KTHREAD *v37; // rax
  __int64 v38; // rax
  __int64 v39; // r13
  __int64 v40; // rdx
  unsigned int v41; // r13d
  __int64 v42; // r15
  int v43; // eax
  unsigned __int64 v44; // rcx
  __int64 v45; // rax
  int *v46; // rax
  _DWORD *v47; // r8
  _DWORD *v48; // rdx
  int v49; // ecx
  _DWORD *i; // rax
  signed __int64 v51; // rax
  __int64 v52; // rtt
  char v53; // r8
  _QWORD *v54; // rax
  __int64 *v55; // rbp
  void *v56; // rcx
  signed __int64 v57; // rax
  __int64 v58; // rtt
  struct _KTHREAD *v59; // rax
  volatile signed __int32 *v60; // rdi
  __int64 v61; // rax
  __int64 v62; // r13
  __int64 **v63; // rax
  signed __int64 v64; // rax
  signed __int64 v65; // rtt
  unsigned __int8 v66; // [rsp+30h] [rbp-B8h]
  bool v67; // [rsp+31h] [rbp-B7h]
  unsigned int v68; // [rsp+34h] [rbp-B4h] BYREF
  ULONG_PTR BugCheckParameter1; // [rsp+38h] [rbp-B0h]
  unsigned int v70; // [rsp+40h] [rbp-A8h]
  unsigned int v71; // [rsp+44h] [rbp-A4h]
  int v72; // [rsp+48h] [rbp-A0h] BYREF
  unsigned int v73; // [rsp+4Ch] [rbp-9Ch]
  __int64 v74; // [rsp+50h] [rbp-98h]
  __int64 v75; // [rsp+58h] [rbp-90h]
  __int64 v76; // [rsp+60h] [rbp-88h]
  $D4FCF91253F76F57393CBFE908971F67 v77; // [rsp+68h] [rbp-80h] BYREF

  v7 = a4 - 48;
  v74 = a7;
  v75 = a2;
  v8 = (unsigned __int8)((unsigned __int16)(a4 - 48) >> 8);
  v9 = (unsigned __int8)ObHeaderCookie ^ (unsigned __int64)*(unsigned __int8 *)(a4 - 48 + 24);
  v76 = a4;
  BugCheckParameter1 = a3;
  v71 = a1;
  v10 = ObTypeIndexTable[v8 ^ v9];
  if ( (a6 & 0x400) != 0 )
    v66 = 1;
  else
    v66 = a5;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v12 = KeAbPreAcquire(v7 + 16, 0LL, 0LL);
  v13 = v12;
  if ( _interlockedbittestandset64((volatile signed __int32 *)(v7 + 16), 0LL) )
    ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(v7 + 16), v12, v7 + 16);
  if ( v13 )
    *(_BYTE *)(v13 + 26) |= 1u;
  v14 = *(_BYTE *)(v7 + 27);
  v15 = *(_BYTE *)(v7 + 26);
  v67 = (v14 & 1) != 0;
  v16 = 0LL;
  v68 = 0;
  if ( (v15 & 8) != 0 )
    v17 = v7 - ObpInfoMaskToOffset[v15 & 0xF];
  else
    v17 = 0LL;
  if ( (v14 & 1) == 0 )
    goto LABEL_21;
  *(_BYTE *)(v7 + 27) = v14 & 0xFE;
  if ( v17 )
  {
    v18 = v74;
    v19 = *(_DWORD *)v17;
    v20 = *(_DWORD *)(v17 + 4);
    v70 = *(_DWORD *)v17;
    v73 = v20;
    if ( v74 || *(_QWORD *)(v7 + 40) && (v18 = *(_QWORD *)(v7 + 40) & 0xFFFFFFFFFFFFFFF0uLL) != 0 )
    {
      v23 = SeComputeQuotaInformationSize(v18, &v68);
      if ( v23 < 0 )
      {
LABEL_122:
        _m_prefetchw((const void *)(v7 + 16));
        v57 = *(_QWORD *)(v7 + 16);
        if ( (v57 & 0xFFFFFFFFFFFFFFF0uLL) > 0x10 )
          v16 = v57 - 16;
        if ( (v57 & 2) != 0
          || (v58 = *(_QWORD *)(v7 + 16),
              v58 != _InterlockedCompareExchange64((volatile signed __int64 *)(v7 + 16), v16, v57)) )
        {
          ExfReleasePushLock((_QWORD *)(v7 + 16));
        }
        KeAbPostRelease(v7 + 16);
        KeLeaveCriticalRegion();
        return (unsigned int)v23;
      }
      v41 = v68;
      if ( v68 )
      {
        if ( (PEPROCESS)BugCheckParameter1 == PsInitialSystemProcess )
        {
          v42 = 1LL;
        }
        else
        {
          v42 = *(_QWORD *)(BugCheckParameter1 + 1040);
          v43 = PspChargeQuota(v42, 0LL, 1, v68);
          v19 = v70;
          if ( v43 < 0 )
          {
            v42 = 0LL;
          }
          else
          {
            _InterlockedIncrement((volatile signed __int32 *)(v42 + 512));
            v41 = v68;
          }
        }
        *(_QWORD *)(v17 + 16) = v42;
        if ( !v42 )
        {
          v23 = -1073741756;
          goto LABEL_122;
        }
      }
      v20 = v73;
      *(_DWORD *)(v17 + 8) = v41;
    }
  }
  else
  {
    v44 = (unsigned __int8)ObHeaderCookie ^ (unsigned __int64)*(unsigned __int8 *)(v7 + 24);
    v68 = 0;
    v45 = ObTypeIndexTable[v8 ^ v44];
    v19 = *(_DWORD *)(v45 + 104);
    v20 = *(_DWORD *)(v45 + 108);
    v70 = v19;
  }
  v21 = v20;
  v74 = v20;
  if ( (PEPROCESS)BugCheckParameter1 == PsInitialSystemProcess )
  {
    v22 = 1LL;
    goto LABEL_20;
  }
  v22 = *(_QWORD *)(BugCheckParameter1 + 1040);
  if ( v19 )
  {
    if ( (int)PspChargeQuota(v22, 0LL, 1, v19) < 0 )
    {
      v22 = 0LL;
      goto LABEL_20;
    }
    v21 = v74;
  }
  if ( v21 && (int)PspChargeQuota(v22, 0LL, 0, v21) < 0 )
  {
    if ( v70 )
      PspReturnQuota((char *)v22, 0LL, 1, v70);
    v22 = 0LL;
  }
  else
  {
    _InterlockedIncrement((volatile signed __int32 *)(v22 + 512));
  }
LABEL_20:
  *(_QWORD *)(v7 + 32) = v22;
  if ( !v22 )
  {
    if ( v17 )
    {
      v56 = *(void **)(v17 + 16);
      if ( v56 )
        PsReturnSharedPoolQuota(v56);
    }
    v23 = -1073741756;
    goto LABEL_122;
  }
LABEL_21:
  v23 = 0;
  if ( (a6 & 0x20) != 0 )
  {
    v53 = *(_BYTE *)(v7 + 27) & 8;
    if ( v53 == 0 || (a6 & 2) != 0 )
    {
      v23 = -1073741811;
      goto LABEL_122;
    }
    if ( (!v53 || !*(_QWORD *)OBJECT_HEADER_TO_PROCESS_INFO(v7)) && *(_QWORD *)(v7 + 8) )
      goto LABEL_102;
    if ( v53 )
    {
      v54 = (_QWORD *)OBJECT_HEADER_TO_PROCESS_INFO(v7);
      v24 = BugCheckParameter1;
      if ( *v54 && *v54 != BugCheckParameter1 )
        goto LABEL_102;
    }
    else
    {
      v24 = BugCheckParameter1;
    }
    *(_QWORD *)(v7 - ObpInfoMaskToOffset[*(_BYTE *)(v7 + 26) & 0x1F]) = v24;
  }
  else
  {
    if ( (*(_BYTE *)(v7 + 27) & 8) != 0 && *(_QWORD *)OBJECT_HEADER_TO_PROCESS_INFO(v7) )
    {
LABEL_102:
      v23 = -1073741790;
      goto LABEL_122;
    }
    v24 = BugCheckParameter1;
  }
  if ( v66 && (*(_BYTE *)(v7 + 27) & 4) != 0 )
  {
    v23 = -1073741790;
    goto LABEL_122;
  }
  if ( !v67
    && !*(_QWORD *)(v7 + 8)
    && (*(_BYTE *)(v10 + 66) & 0x10) != 0
    && !*(_QWORD *)(v10 + 120)
    && *(_QWORD *)(v10 + 128) )
  {
    v23 = -1073741823;
    goto LABEL_122;
  }
  v25 = (*(_BYTE *)(v10 + 66) & 0x10) == 0;
  v72 = 0;
  if ( !v25 )
  {
    v23 = ObpLockHandleDataBaseEntry(v7, v24, &v72);
    if ( v23 < 0 )
      goto LABEL_122;
  }
  _InterlockedIncrement64((volatile signed __int64 *)(v7 + 8));
  if ( !*(_QWORD *)(v10 + 120) )
    goto LABEL_29;
  _m_prefetchw((const void *)(v7 + 16));
  v31 = *(_QWORD *)(v7 + 16);
  if ( (v31 & 0xFFFFFFFFFFFFFFF0uLL) > 0x10 )
    v32 = v31 - 16;
  else
    v32 = 0LL;
  if ( (v31 & 2) != 0
    || (v33 = *(_QWORD *)(v7 + 16), v33 != _InterlockedCompareExchange64((volatile signed __int64 *)(v7 + 16), v32, v31)) )
  {
    ExfReleasePushLock((_QWORD *)(v7 + 16));
  }
  KeAbPostRelease(v7 + 16);
  KeLeaveCriticalRegion();
  v34 = 0;
  v35 = BugCheckParameter1;
  v36 = v71;
  if ( (_KPROCESS *)BugCheckParameter1 != KeGetCurrentThread()->ApcState.Process && v71 != 3 )
  {
    v34 = 1;
    KiStackAttachProcess((_KPROCESS *)BugCheckParameter1, 0LL, (__int64)&v77);
  }
  v23 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, ULONG_PTR, __int64, __int64, int))(v10 + 120))(
          v36,
          a5,
          v35,
          v76,
          v75,
          v72);
  if ( v34 )
    KiUnstackDetachProcess(&v77, 0LL);
  v37 = KeGetCurrentThread();
  --v37->KernelApcDisable;
  v38 = KeAbPreAcquire(v7 + 16, 0LL, 0LL);
  v39 = v38;
  if ( _interlockedbittestandset64((volatile signed __int32 *)(v7 + 16), 0LL) )
    ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(v7 + 16), v38, v7 + 16);
  if ( v39 )
    *(_BYTE *)(v39 + 26) |= 1u;
  if ( v23 >= 0 )
  {
    v24 = BugCheckParameter1;
LABEL_29:
    if ( (*(_BYTE *)(v10 + 66) & 0x10) != 0 )
    {
      v40 = v7 - ObpInfoMaskToOffset[*(_BYTE *)(v7 + 26) & 7];
      if ( (*(_BYTE *)(v7 + 27) & 0x40) != 0 )
      {
        --*(_BYTE *)(v40 + 11);
        *(_DWORD *)(v40 + 8) ^= (*(_DWORD *)(v40 + 8) ^ (*(_DWORD *)(v40 + 8) + 1)) & 0xFFFFFF;
      }
      else
      {
        v46 = *(int **)v40;
        v47 = 0LL;
        v48 = 0LL;
        v49 = *v46;
        for ( i = v46 + 2; v49; --v49 )
        {
          if ( *(_QWORD *)i == v24 )
          {
            if ( !v48 )
              v48 = i;
            v47 = i;
            if ( *((_BYTE *)i + 11) != 0xFF )
              break;
          }
          i += 4;
        }
        v48[2] ^= (v48[2] ^ (v48[2] + 1)) & 0xFFFFFF;
        --*((_BYTE *)v47 + 11);
      }
    }
    _m_prefetchw((const void *)(v7 + 16));
    v26 = *(_QWORD *)(v7 + 16);
    if ( (v26 & 0xFFFFFFFFFFFFFFF0uLL) > 0x10 )
      v27 = v26 - 16;
    else
      v27 = 0LL;
    if ( (v26 & 2) != 0
      || (v28 = *(_QWORD *)(v7 + 16),
          v28 != _InterlockedCompareExchange64((volatile signed __int64 *)(v7 + 16), v27, v26)) )
    {
      ExfReleasePushLock((_QWORD *)(v7 + 16));
    }
    KeAbPostRelease(v7 + 16);
    KeLeaveCriticalRegion();
    if ( !v71 && (*(_BYTE *)(v7 + 26) & 1) != 0 )
    {
      v55 = (__int64 *)(v7 - 32);
      if ( v55 )
      {
        v59 = KeGetCurrentThread();
        --v59->SpecialApcDisable;
        v60 = (volatile signed __int32 *)(v10 + 184);
        v61 = KeAbPreAcquire(v10 + 184, 0LL, 0LL);
        v62 = v61;
        if ( _interlockedbittestandset64(v60, 0LL) )
          ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(v10 + 184), v61, v10 + 184);
        if ( v62 )
          *(_BYTE *)(v62 + 26) |= 1u;
        v63 = *(__int64 ***)(v10 + 8);
        *v55 = v10;
        v55[1] = (__int64)v63;
        if ( *v63 != (__int64 *)v10 )
          __fastfail(3u);
        *v63 = v55;
        *(_QWORD *)(v10 + 8) = v55;
        _m_prefetchw((const void *)v60);
        v64 = *(_QWORD *)v60;
        if ( (*(_QWORD *)v60 & 0xFFFFFFFFFFFFFFF0uLL) > 0x10 )
          v16 = v64 - 16;
        if ( (v64 & 2) != 0
          || (v65 = *(_QWORD *)v60, v65 != _InterlockedCompareExchange64((volatile signed __int64 *)v60, v16, v64)) )
        {
          ExfReleasePushLock((_QWORD *)(v10 + 184));
        }
        KeAbPostRelease(v10 + 184);
        KiLeaveGuardedRegionUnsafe((__int64)KeGetCurrentThread());
      }
    }
    v29 = _InterlockedIncrement((volatile signed __int32 *)(v10 + 48));
    if ( v29 > *(_DWORD *)(v10 + 56) )
      *(_DWORD *)(v10 + 56) = v29;
    return (unsigned int)v23;
  }
  if ( (*(_BYTE *)(v10 + 66) & 0x10) != 0 )
    ObpUnlockHandleDatabaseEntry(v7, BugCheckParameter1);
  _InterlockedDecrement64((volatile signed __int64 *)(v7 + 8));
  _m_prefetchw((const void *)(v7 + 16));
  v51 = *(_QWORD *)(v7 + 16);
  if ( (v51 & 0xFFFFFFFFFFFFFFF0uLL) > 0x10 )
    v16 = v51 - 16;
  if ( (v51 & 2) != 0
    || (v52 = *(_QWORD *)(v7 + 16), v52 != _InterlockedCompareExchange64((volatile signed __int64 *)(v7 + 16), v16, v51)) )
  {
    ExfReleasePushLock((_QWORD *)(v7 + 16));
  }
  KeAbPostRelease(v7 + 16);
  KeLeaveCriticalRegion();
  ObpDeleteNameCheck(v7);
  return (unsigned int)v23;
}
