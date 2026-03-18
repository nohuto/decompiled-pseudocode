/*
 * XREFs of ObpIncrementHandleCountEx @ 0x1404952B0
 * Callers:
 *     ObDuplicateObject @ 0x1404243A0 (ObDuplicateObject.c)
 *     ObpCreateHandle @ 0x140492D10 (ObpCreateHandle.c)
 *     ObpInsertOrLocateNamedObject @ 0x1404D0FD4 (ObpInsertOrLocateNamedObject.c)
 *     ObInheritObjectHandle @ 0x140523C8C (ObInheritObjectHandle.c)
 *     ObCaptureObjectStateForDuplication @ 0x14053B60C (ObCaptureObjectStateForDuplication.c)
 *     ObCompleteObjectDuplication @ 0x14053E31C (ObCompleteObjectDuplication.c)
 * Callees:
 *     PspReturnQuota @ 0x140045E50 (PspReturnQuota.c)
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     PspChargeQuota @ 0x14008F940 (PspChargeQuota.c)
 *     KiUnstackDetachProcess @ 0x14009A720 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x14009AB60 (KiStackAttachProcess.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400F30E0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfReleasePushLock @ 0x1400F35E0 (ExfReleasePushLock.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     ObpUnlockHandleDatabaseEntry @ 0x1404080D0 (ObpUnlockHandleDatabaseEntry.c)
 *     SeComputeQuotaInformationSize @ 0x1404CF7D0 (SeComputeQuotaInformationSize.c)
 *     PsReturnSharedPoolQuota @ 0x1404D0010 (PsReturnSharedPoolQuota.c)
 *     ObpDeleteNameCheck @ 0x1404D3780 (ObpDeleteNameCheck.c)
 *     ObpLockHandleDataBaseEntry @ 0x1405249D0 (ObpLockHandleDataBaseEntry.c)
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
  __int64 v7; // rsi
  __int64 v8; // r15
  unsigned __int64 v9; // rdx
  __int64 v10; // r14
  unsigned __int8 v11; // r13
  struct _KTHREAD *CurrentThread; // rax
  __int64 v13; // rax
  __int64 v14; // r9
  __int64 v15; // rbx
  ULONG_PTR v16; // rdx
  char v17; // al
  signed __int64 v18; // rbx
  __int64 v19; // r12
  unsigned __int64 v20; // rcx
  unsigned int v21; // r11d
  unsigned int v22; // eax
  unsigned __int64 v23; // rcx
  __int64 v24; // r15
  int v25; // r15d
  ULONG_PTR v26; // r12
  bool v27; // zf
  signed __int64 v28; // rax
  signed __int64 v29; // rcx
  __int64 v30; // rtt
  __int64 v31; // r9
  struct _KTHREAD *v32; // rcx
  __int16 v33; // ax
  unsigned __int32 v34; // ebp
  signed __int64 v36; // rax
  signed __int64 v37; // rcx
  __int64 v38; // rtt
  struct _KTHREAD *v39; // rcx
  __int16 v40; // ax
  char v41; // r12
  ULONG_PTR v42; // r13
  unsigned int v43; // r15d
  __int64 v44; // r9
  struct _KTHREAD *v45; // rax
  __int64 v46; // rax
  __int64 v47; // r9
  __int64 v48; // r13
  unsigned int v49; // r8d
  __int64 v50; // r15
  int v51; // eax
  unsigned __int64 v52; // rcx
  __int64 v53; // rax
  int *v54; // rax
  _DWORD *v55; // r8
  int v56; // ecx
  _DWORD *i; // rax
  signed __int64 v58; // rax
  __int64 v59; // rtt
  struct _KTHREAD *v60; // rcx
  __int16 v61; // ax
  _QWORD *v62; // rcx
  unsigned __int8 v63; // r8
  _QWORD *v64; // rcx
  _QWORD *v65; // rcx
  __int64 *v66; // rsi
  void *v67; // rcx
  _QWORD *v68; // rcx
  signed __int64 v69; // rax
  __int64 v70; // rtt
  struct _KTHREAD *v71; // rcx
  __int16 v72; // ax
  struct _KTHREAD *v73; // rax
  volatile signed __int32 *v74; // rdi
  __int64 v75; // rax
  __int64 v76; // rdx
  __int64 v77; // r9
  __int64 v78; // r13
  __int64 **v79; // rax
  signed __int64 v80; // rax
  signed __int64 v81; // rtt
  struct _KTHREAD *v82; // rcx
  __int16 v83; // ax
  bool v84; // [rsp+30h] [rbp-B8h]
  unsigned int v85; // [rsp+34h] [rbp-B4h] BYREF
  ULONG_PTR BugCheckParameter1; // [rsp+38h] [rbp-B0h]
  unsigned int v87; // [rsp+40h] [rbp-A8h]
  unsigned int v88; // [rsp+44h] [rbp-A4h]
  int v89; // [rsp+48h] [rbp-A0h] BYREF
  unsigned int v90; // [rsp+4Ch] [rbp-9Ch]
  __int64 v91; // [rsp+50h] [rbp-98h]
  __int64 v92; // [rsp+58h] [rbp-90h]
  __int64 v93; // [rsp+60h] [rbp-88h]
  _BYTE v94[48]; // [rsp+68h] [rbp-80h] BYREF

  v7 = a4 - 48;
  v91 = a7;
  v92 = a2;
  v8 = (unsigned __int8)((unsigned __int16)(a4 - 48) >> 8);
  v9 = (unsigned __int8)ObHeaderCookie ^ (unsigned __int64)*(unsigned __int8 *)(a4 - 48 + 24);
  v93 = a4;
  BugCheckParameter1 = a3;
  v88 = a1;
  v10 = ObTypeIndexTable[v8 ^ v9];
  if ( (a6 & 0x400) != 0 )
    v11 = 1;
  else
    v11 = a5;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v13 = KeAbPreAcquire(v7 + 16, 0LL, 0LL, a4);
  v15 = v13;
  if ( _interlockedbittestandset64((volatile signed __int32 *)(v7 + 16), 0LL) )
    ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(v7 + 16), v13, v7 + 16, v14);
  if ( v15 )
    *(_BYTE *)(v15 + 26) |= 1u;
  v16 = *(unsigned __int8 *)(v7 + 27);
  v17 = *(_BYTE *)(v7 + 26);
  v84 = (v16 & 1) != 0;
  v18 = 0LL;
  v85 = 0;
  if ( (v17 & 8) != 0 )
    v19 = v7 - ObpInfoMaskToOffset[v17 & 0xF];
  else
    v19 = 0LL;
  if ( (v16 & 1) == 0 )
    goto LABEL_21;
  *(_BYTE *)(v7 + 27) = v16 & 0xFE;
  if ( v19 )
  {
    v20 = v91;
    v21 = *(_DWORD *)v19;
    v22 = *(_DWORD *)(v19 + 4);
    v87 = *(_DWORD *)v19;
    v90 = v22;
    if ( v91 || *(_QWORD *)(v7 + 40) && (v20 = *(_QWORD *)(v7 + 40) & 0xFFFFFFFFFFFFFFF0uLL) != 0 )
    {
      v25 = SeComputeQuotaInformationSize(v20, &v85);
      if ( v25 >= 0 )
      {
        v49 = v85;
        if ( !v85 )
          goto LABEL_74;
        if ( (PEPROCESS)BugCheckParameter1 == PsInitialSystemProcess )
        {
          v50 = 1LL;
        }
        else
        {
          v50 = *(_QWORD *)(BugCheckParameter1 + 1040);
          v51 = PspChargeQuota(v50, 0LL, 1, v85);
          v21 = v87;
          if ( v51 < 0 )
            v50 = 0LL;
          else
            _InterlockedIncrement((volatile signed __int32 *)(v50 + 512));
          v49 = v85;
        }
        *(_QWORD *)(v19 + 16) = v50;
        if ( v50 )
        {
LABEL_74:
          v22 = v90;
          *(_DWORD *)(v19 + 8) = v49;
          goto LABEL_13;
        }
        v25 = -1073741756;
      }
LABEL_147:
      _m_prefetchw((const void *)(v7 + 16));
      v69 = *(_QWORD *)(v7 + 16);
      if ( (v69 & 0xFFFFFFFFFFFFFFF0uLL) > 0x10 )
        v18 = v69 - 16;
      if ( (v69 & 2) != 0
        || (v70 = *(_QWORD *)(v7 + 16),
            v70 != _InterlockedCompareExchange64((volatile signed __int64 *)(v7 + 16), v18, v69)) )
      {
        ExfReleasePushLock((_QWORD *)(v7 + 16), v16);
      }
      KeAbPostRelease(v7 + 16);
      v71 = KeGetCurrentThread();
      v72 = v71->KernelApcDisable + 1;
      v71->KernelApcDisable = v72;
      if ( !v72
        && ($CD287064E7C9F7953DE243E927CFCB99 *)v71->ApcState.ApcListHead[0].Flink != &v71->152
        && !v71->SpecialApcDisable )
      {
        KiCheckForKernelApcDelivery();
      }
      return (unsigned int)v25;
    }
  }
  else
  {
    v52 = (unsigned __int8)ObHeaderCookie ^ (unsigned __int64)*(unsigned __int8 *)(v7 + 24);
    v85 = 0;
    v53 = ObTypeIndexTable[v8 ^ v52];
    v21 = *(_DWORD *)(v53 + 104);
    v22 = *(_DWORD *)(v53 + 108);
    v87 = v21;
  }
LABEL_13:
  v16 = BugCheckParameter1;
  v23 = v22;
  v91 = v22;
  if ( (PEPROCESS)BugCheckParameter1 == PsInitialSystemProcess )
  {
    v24 = 1LL;
    goto LABEL_20;
  }
  v24 = *(_QWORD *)(BugCheckParameter1 + 1040);
  if ( v21 )
  {
    if ( (int)PspChargeQuota(v24, 0LL, 1, v21) < 0 )
    {
      v24 = 0LL;
      goto LABEL_20;
    }
    v23 = v91;
  }
  if ( v23 && (int)PspChargeQuota(v24, 0LL, 0, v23) < 0 )
  {
    if ( v87 )
      PspReturnQuota((char *)v24, 0LL, 1u, v87);
    v24 = 0LL;
  }
  else
  {
    _InterlockedIncrement((volatile signed __int32 *)(v24 + 512));
  }
LABEL_20:
  *(_QWORD *)(v7 + 32) = v24;
  if ( !v24 )
  {
    if ( v19 )
    {
      v67 = *(void **)(v19 + 16);
      if ( v67 )
        PsReturnSharedPoolQuota(v67);
    }
    v25 = -1073741756;
    goto LABEL_147;
  }
LABEL_21:
  v25 = 0;
  if ( (a6 & 0x20) != 0 )
  {
    v16 = *(unsigned __int8 *)(v7 + 27);
    LOBYTE(v16) = v16 & 8;
    if ( (_BYTE)v16 == 0 || (a6 & 2) != 0 )
    {
      v25 = -1073741811;
      goto LABEL_147;
    }
    if ( !(_BYTE)v16
      || ((*(_BYTE *)(v7 + 26) & 0x10) == 0
        ? (v62 = 0LL)
        : (v62 = (_QWORD *)(v7 - ObpInfoMaskToOffset[*(_BYTE *)(v7 + 26) & 0x1F])),
          !*v62) )
    {
      if ( *(_QWORD *)(v7 + 8) )
        goto LABEL_142;
    }
    if ( (_BYTE)v16
      && ((v63 = *(_BYTE *)(v7 + 26), v16 = v63, LOBYTE(v16) = v63 & 0x10, (v63 & 0x10) == 0)
        ? (v64 = 0LL)
        : (v64 = (_QWORD *)(v7 - ObpInfoMaskToOffset[v63 & 0x1F])),
          *v64) )
    {
      if ( (_BYTE)v16 )
        v68 = (_QWORD *)(v7 - ObpInfoMaskToOffset[v63 & 0x1F]);
      else
        v68 = 0LL;
      v26 = BugCheckParameter1;
      if ( *v68 != BugCheckParameter1 )
        goto LABEL_142;
    }
    else
    {
      v26 = BugCheckParameter1;
    }
    *(_QWORD *)(v7 - ObpInfoMaskToOffset[*(_BYTE *)(v7 + 26) & 0x1F]) = v26;
  }
  else
  {
    if ( (*(_BYTE *)(v7 + 27) & 8) != 0 )
    {
      v65 = (*(_BYTE *)(v7 + 26) & 0x10) != 0 ? (_QWORD *)(v7 - ObpInfoMaskToOffset[*(_BYTE *)(v7 + 26) & 0x1F]) : 0LL;
      if ( *v65 )
      {
LABEL_142:
        v25 = -1073741790;
        goto LABEL_147;
      }
    }
    v26 = BugCheckParameter1;
  }
  if ( v11 && (*(_BYTE *)(v7 + 27) & 4) != 0 )
  {
    v25 = -1073741790;
    goto LABEL_147;
  }
  if ( !v84
    && !*(_QWORD *)(v7 + 8)
    && (*(_BYTE *)(v10 + 66) & 0x10) != 0
    && !*(_QWORD *)(v10 + 120)
    && *(_QWORD *)(v10 + 128) )
  {
    v25 = -1073741823;
    goto LABEL_147;
  }
  v27 = (*(_BYTE *)(v10 + 66) & 0x10) == 0;
  v89 = 0;
  if ( !v27 )
  {
    v25 = ObpLockHandleDataBaseEntry(v7, v26, &v89);
    if ( v25 < 0 )
      goto LABEL_147;
  }
  _InterlockedIncrement64((volatile signed __int64 *)(v7 + 8));
  if ( !*(_QWORD *)(v10 + 120) )
    goto LABEL_29;
  _m_prefetchw((const void *)(v7 + 16));
  v36 = *(_QWORD *)(v7 + 16);
  if ( (v36 & 0xFFFFFFFFFFFFFFF0uLL) > 0x10 )
    v37 = v36 - 16;
  else
    v37 = 0LL;
  if ( (v36 & 2) != 0
    || (v38 = *(_QWORD *)(v7 + 16), v38 != _InterlockedCompareExchange64((volatile signed __int64 *)(v7 + 16), v37, v36)) )
  {
    ExfReleasePushLock((_QWORD *)(v7 + 16), v16);
  }
  KeAbPostRelease(v7 + 16);
  v39 = KeGetCurrentThread();
  v40 = v39->KernelApcDisable + 1;
  v39->KernelApcDisable = v40;
  if ( !v40
    && ($CD287064E7C9F7953DE243E927CFCB99 *)v39->ApcState.ApcListHead[0].Flink != &v39->152
    && !v39->SpecialApcDisable )
  {
    KiCheckForKernelApcDelivery();
  }
  v41 = 0;
  v42 = BugCheckParameter1;
  v43 = v88;
  if ( (_KPROCESS *)BugCheckParameter1 != KeGetCurrentThread()->ApcState.Process && v88 != 3 )
  {
    v41 = 1;
    KiStackAttachProcess((_KPROCESS *)BugCheckParameter1, 0, (__int64)v94);
  }
  v25 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, ULONG_PTR, __int64, __int64, int))(v10 + 120))(
          v43,
          a5,
          v42,
          v93,
          v92,
          v89);
  if ( v41 )
    KiUnstackDetachProcess((struct _KTHREAD *)v94, 0);
  v45 = KeGetCurrentThread();
  --v45->KernelApcDisable;
  v46 = KeAbPreAcquire(v7 + 16, 0LL, 0LL, v44);
  v48 = v46;
  if ( _interlockedbittestandset64((volatile signed __int32 *)(v7 + 16), 0LL) )
    ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(v7 + 16), v46, v7 + 16, v47);
  if ( v48 )
    *(_BYTE *)(v48 + 26) |= 1u;
  if ( v25 >= 0 )
  {
    v26 = BugCheckParameter1;
LABEL_29:
    if ( (*(_BYTE *)(v10 + 66) & 0x10) != 0 )
    {
      v16 = v7 - ObpInfoMaskToOffset[*(_BYTE *)(v7 + 26) & 7];
      if ( (*(_BYTE *)(v7 + 27) & 0x40) != 0 )
      {
        --*(_BYTE *)(v16 + 11);
        *(_DWORD *)(v16 + 8) ^= (*(_DWORD *)(v16 + 8) ^ (*(_DWORD *)(v16 + 8) + 1)) & 0xFFFFFF;
      }
      else
      {
        v54 = *(int **)v16;
        v55 = 0LL;
        v16 = 0LL;
        v56 = *v54;
        for ( i = v54 + 2; v56; --v56 )
        {
          if ( *(_QWORD *)i == v26 )
          {
            if ( !v16 )
              v16 = (ULONG_PTR)i;
            v55 = i;
            if ( *((_BYTE *)i + 11) != 0xFF )
              break;
          }
          i += 4;
        }
        *(_DWORD *)(v16 + 8) ^= (*(_DWORD *)(v16 + 8) ^ (*(_DWORD *)(v16 + 8) + 1)) & 0xFFFFFF;
        --*((_BYTE *)v55 + 11);
      }
    }
    _m_prefetchw((const void *)(v7 + 16));
    v28 = *(_QWORD *)(v7 + 16);
    if ( (v28 & 0xFFFFFFFFFFFFFFF0uLL) > 0x10 )
      v29 = v28 - 16;
    else
      v29 = 0LL;
    if ( (v28 & 2) != 0
      || (v30 = *(_QWORD *)(v7 + 16),
          v30 != _InterlockedCompareExchange64((volatile signed __int64 *)(v7 + 16), v29, v28)) )
    {
      ExfReleasePushLock((_QWORD *)(v7 + 16), v16);
    }
    KeAbPostRelease(v7 + 16);
    v32 = KeGetCurrentThread();
    v33 = v32->KernelApcDisable + 1;
    v32->KernelApcDisable = v33;
    if ( !v33
      && ($CD287064E7C9F7953DE243E927CFCB99 *)v32->ApcState.ApcListHead[0].Flink != &v32->152
      && !v32->SpecialApcDisable )
    {
      KiCheckForKernelApcDelivery();
    }
    if ( !v88 && (*(_BYTE *)(v7 + 26) & 1) != 0 )
    {
      v66 = (__int64 *)(v7 - 32);
      if ( v66 )
      {
        v73 = KeGetCurrentThread();
        --v73->SpecialApcDisable;
        v74 = (volatile signed __int32 *)(v10 + 184);
        v75 = KeAbPreAcquire(v10 + 184, 0LL, 0LL, v31);
        v78 = v75;
        if ( _interlockedbittestandset64(v74, 0LL) )
          ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(v10 + 184), v75, v10 + 184, v77);
        if ( v78 )
          *(_BYTE *)(v78 + 26) |= 1u;
        v79 = *(__int64 ***)(v10 + 8);
        *v66 = v10;
        v66[1] = (__int64)v79;
        if ( *v79 != (__int64 *)v10 )
          __fastfail(3u);
        *v79 = v66;
        *(_QWORD *)(v10 + 8) = v66;
        _m_prefetchw((const void *)v74);
        v80 = *(_QWORD *)v74;
        if ( (*(_QWORD *)v74 & 0xFFFFFFFFFFFFFFF0uLL) > 0x10 )
          v18 = v80 - 16;
        if ( (v80 & 2) != 0
          || (v81 = *(_QWORD *)v74, v81 != _InterlockedCompareExchange64((volatile signed __int64 *)v74, v18, v80)) )
        {
          ExfReleasePushLock((_QWORD *)(v10 + 184), v76);
        }
        KeAbPostRelease(v10 + 184);
        v82 = KeGetCurrentThread();
        v83 = v82->SpecialApcDisable + 1;
        v82->SpecialApcDisable = v83;
        if ( !v83 && ($CD287064E7C9F7953DE243E927CFCB99 *)v82->ApcState.ApcListHead[0].Flink != &v82->152 )
          KiCheckForKernelApcDelivery();
      }
    }
    v34 = _InterlockedIncrement((volatile signed __int32 *)(v10 + 48));
    if ( v34 > *(_DWORD *)(v10 + 56) )
      *(_DWORD *)(v10 + 56) = v34;
    return (unsigned int)v25;
  }
  if ( (*(_BYTE *)(v10 + 66) & 0x10) != 0 )
    ObpUnlockHandleDatabaseEntry(v7, BugCheckParameter1);
  _InterlockedDecrement64((volatile signed __int64 *)(v7 + 8));
  _m_prefetchw((const void *)(v7 + 16));
  v58 = *(_QWORD *)(v7 + 16);
  if ( (v58 & 0xFFFFFFFFFFFFFFF0uLL) > 0x10 )
    v18 = v58 - 16;
  if ( (v58 & 2) != 0
    || (v59 = *(_QWORD *)(v7 + 16), v59 != _InterlockedCompareExchange64((volatile signed __int64 *)(v7 + 16), v18, v58)) )
  {
    ExfReleasePushLock((_QWORD *)(v7 + 16), v16);
  }
  KeAbPostRelease(v7 + 16);
  v60 = KeGetCurrentThread();
  v61 = v60->KernelApcDisable + 1;
  v60->KernelApcDisable = v61;
  if ( !v61
    && ($CD287064E7C9F7953DE243E927CFCB99 *)v60->ApcState.ApcListHead[0].Flink != &v60->152
    && !v60->SpecialApcDisable )
  {
    KiCheckForKernelApcDelivery();
  }
  ObpDeleteNameCheck(v7);
  return (unsigned int)v25;
}
