/*
 * XREFs of ObpIncrementHandleCountEx @ 0x14044CB20
 * Callers:
 *     ObpInsertOrLocateNamedObject @ 0x140404DA0 (ObpInsertOrLocateNamedObject.c)
 *     ObpCreateHandle @ 0x140418AE0 (ObpCreateHandle.c)
 *     ObInheritObjectHandle @ 0x14045DB84 (ObInheritObjectHandle.c)
 *     ObCaptureObjectStateForDuplication @ 0x1404B017C (ObCaptureObjectStateForDuplication.c)
 *     ObCompleteObjectDuplication @ 0x1404B1680 (ObCompleteObjectDuplication.c)
 *     ObDuplicateObject @ 0x1404EFB40 (ObDuplicateObject.c)
 * Callees:
 *     PsDetachSiloFromCurrentThread @ 0x1400098A0 (PsDetachSiloFromCurrentThread.c)
 *     PsAttachSiloToCurrentThread @ 0x1400098C0 (PsAttachSiloToCurrentThread.c)
 *     PspReturnQuota @ 0x140010620 (PspReturnQuota.c)
 *     PsGetProcessServerSilo @ 0x140013220 (PsGetProcessServerSilo.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x1400136F0 (KiLeaveGuardedRegionUnsafe.c)
 *     PspChargeQuota @ 0x14002B710 (PspChargeQuota.c)
 *     KeAbPreAcquire @ 0x14002BD30 (KeAbPreAcquire.c)
 *     KeLeaveCriticalRegion @ 0x140069880 (KeLeaveCriticalRegion.c)
 *     KeAbPostRelease @ 0x14006AA40 (KeAbPostRelease.c)
 *     OBJECT_HEADER_TO_PROCESS_INFO @ 0x1400B0F48 (OBJECT_HEADER_TO_PROCESS_INFO.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400C5F10 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfReleasePushLock @ 0x1400C64C0 (ExfReleasePushLock.c)
 *     KiStackAttachProcess @ 0x1400CB090 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x1400CC6C0 (KiUnstackDetachProcess.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     ObpDeleteNameCheck @ 0x1404054E0 (ObpDeleteNameCheck.c)
 *     ObpUnlockHandleDatabaseEntry @ 0x1404A6BB0 (ObpUnlockHandleDatabaseEntry.c)
 *     ObpLockHandleDataBaseEntry @ 0x1404A6C30 (ObpLockHandleDataBaseEntry.c)
 *     SeComputeQuotaInformationSize @ 0x14051D9E0 (SeComputeQuotaInformationSize.c)
 *     PsReturnSharedPoolQuota @ 0x14051E3D0 (PsReturnSharedPoolQuota.c)
 */

__int64 __fastcall ObpIncrementHandleCountEx(
        unsigned int a1,
        __int64 a2,
        struct _KPROCESS *a3,
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
  _BYTE *v12; // rax
  _BYTE *v13; // rbx
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
  struct _KPROCESS *v24; // r13
  bool v25; // zf
  signed __int64 v26; // rax
  signed __int64 v27; // rcx
  __int64 v28; // rtt
  unsigned __int32 v29; // edi
  __int64 v31; // rdx
  signed __int64 v32; // rax
  signed __int64 v33; // rcx
  __int64 v34; // rtt
  char v35; // r12
  unsigned int v36; // r15d
  __int64 v37; // r13
  struct _KPROCESS *v38; // rax
  struct _KTHREAD *v39; // rax
  _BYTE *v40; // rax
  _BYTE *v41; // r13
  unsigned int v42; // r13d
  __int64 v43; // r15
  int v44; // eax
  __int64 ProcessServerSilo; // rax
  unsigned __int64 v46; // rcx
  __int64 v47; // rax
  int *v48; // rax
  _DWORD *v49; // r8
  _DWORD *v50; // rdx
  int v51; // ecx
  _DWORD *i; // rax
  signed __int64 v53; // rax
  __int64 v54; // rtt
  char v55; // r8
  struct _KPROCESS *v56; // rcx
  __int64 *v57; // r12
  void *v58; // rcx
  signed __int64 v59; // rax
  __int64 v60; // rtt
  struct _KTHREAD *v61; // rax
  volatile signed __int32 *v62; // rsi
  _BYTE *v63; // rax
  _BYTE *v64; // rbp
  __int64 **v65; // rax
  signed __int64 v66; // rax
  signed __int64 v67; // rtt
  unsigned __int8 v68; // [rsp+30h] [rbp-C8h]
  bool v69; // [rsp+31h] [rbp-C7h]
  unsigned int v71; // [rsp+40h] [rbp-B8h] BYREF
  unsigned int v72; // [rsp+44h] [rbp-B4h]
  unsigned int v73; // [rsp+48h] [rbp-B0h]
  int v74; // [rsp+4Ch] [rbp-ACh] BYREF
  unsigned int v75; // [rsp+50h] [rbp-A8h]
  __int64 v76; // [rsp+58h] [rbp-A0h]
  __int64 v77; // [rsp+60h] [rbp-98h]
  __int64 v78; // [rsp+68h] [rbp-90h]
  _BYTE v79[48]; // [rsp+70h] [rbp-88h] BYREF

  v7 = a4 - 48;
  v76 = a7;
  v77 = a2;
  v8 = (unsigned __int8)((unsigned __int16)(a4 - 48) >> 8);
  v9 = (unsigned __int8)ObHeaderCookie ^ (unsigned __int64)*(unsigned __int8 *)(a4 - 48 + 24);
  v78 = a4;
  v73 = a1;
  v10 = ObTypeIndexTable[v8 ^ v9];
  if ( (a6 & 0x400) != 0 )
    v68 = 1;
  else
    v68 = a5;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v12 = (_BYTE *)KeAbPreAcquire(v7 + 16, 0LL, 0);
  v13 = v12;
  if ( _interlockedbittestandset64((volatile signed __int32 *)(v7 + 16), 0LL) )
    ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(v7 + 16), v12, v7 + 16);
  if ( v13 )
    v13[26] |= 1u;
  v14 = *(_BYTE *)(v7 + 27);
  v15 = *(_BYTE *)(v7 + 26);
  v69 = (v14 & 1) != 0;
  v16 = 0LL;
  v71 = 0;
  if ( (v15 & 8) != 0 )
    v17 = v7 - ObpInfoMaskToOffset[v15 & 0xF];
  else
    v17 = 0LL;
  if ( (v14 & 1) == 0 )
    goto LABEL_21;
  *(_BYTE *)(v7 + 27) = v14 & 0xFE;
  if ( v17 )
  {
    v18 = v76;
    v19 = *(_DWORD *)v17;
    v20 = *(_DWORD *)(v17 + 4);
    v72 = *(_DWORD *)v17;
    v75 = v20;
    if ( v76 || *(_QWORD *)(v7 + 40) && (v18 = *(_QWORD *)(v7 + 40) & 0xFFFFFFFFFFFFFFF0uLL) != 0 )
    {
      v23 = SeComputeQuotaInformationSize(v18, &v71);
      if ( v23 >= 0 )
      {
        v42 = v71;
        if ( !v71
          || (a3 == PsInitialSystemProcess
            ? (v43 = 1LL)
            : (v43 = a3[1].ActiveProcessors.Bitmap[4], v44 = PspChargeQuota(v43, 0LL, 1, v71), v19 = v72, v44 < 0)
            ? (v43 = 0LL)
            : (_InterlockedIncrement((volatile signed __int32 *)(v43 + 512)), v42 = v71),
              (*(_QWORD *)(v17 + 16) = v43) != 0LL) )
        {
          v20 = v75;
          *(_DWORD *)(v17 + 8) = v42;
          goto LABEL_13;
        }
        v23 = -1073741756;
      }
LABEL_122:
      _m_prefetchw((const void *)(v7 + 16));
      v59 = *(_QWORD *)(v7 + 16);
      if ( (v59 & 0xFFFFFFFFFFFFFFF0uLL) > 0x10 )
        v16 = v59 - 16;
      if ( (v59 & 2) != 0
        || (v60 = *(_QWORD *)(v7 + 16),
            v60 != _InterlockedCompareExchange64((volatile signed __int64 *)(v7 + 16), v16, v59)) )
      {
        ExfReleasePushLock((_QWORD *)(v7 + 16));
      }
      KeAbPostRelease(v7 + 16);
      KeLeaveCriticalRegion();
      return (unsigned int)v23;
    }
  }
  else
  {
    v46 = (unsigned __int8)ObHeaderCookie ^ (unsigned __int64)*(unsigned __int8 *)(v7 + 24);
    v71 = 0;
    v47 = ObTypeIndexTable[v8 ^ v46];
    v19 = *(_DWORD *)(v47 + 104);
    v20 = *(_DWORD *)(v47 + 108);
    v72 = v19;
  }
LABEL_13:
  v21 = v20;
  v76 = v20;
  if ( a3 == PsInitialSystemProcess )
  {
    v22 = 1LL;
    goto LABEL_20;
  }
  v22 = a3[1].ActiveProcessors.Bitmap[4];
  if ( v19 )
  {
    if ( (int)PspChargeQuota(v22, 0LL, 1, v19) < 0 )
    {
      v22 = 0LL;
      goto LABEL_20;
    }
    v21 = v76;
  }
  if ( v21 && (int)PspChargeQuota(v22, 0LL, 0, v21) < 0 )
  {
    if ( v72 )
      PspReturnQuota((char *)v22, 0LL, 1u, v72);
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
      v58 = *(void **)(v17 + 16);
      if ( v58 )
        PsReturnSharedPoolQuota(v58);
    }
    v23 = -1073741756;
    goto LABEL_122;
  }
LABEL_21:
  v23 = 0;
  if ( (a6 & 0x20) != 0 )
  {
    v55 = *(_BYTE *)(v7 + 27) & 8;
    if ( v55 == 0 || (a6 & 2) != 0 )
    {
      v23 = -1073741811;
      goto LABEL_122;
    }
    if ( (!v55 || !*(_QWORD *)OBJECT_HEADER_TO_PROCESS_INFO(v7)) && *(_QWORD *)(v7 + 8) )
      goto LABEL_116;
    if ( v55 )
    {
      v24 = a3;
      v56 = *(struct _KPROCESS **)OBJECT_HEADER_TO_PROCESS_INFO(v7);
      if ( v56 && v56 != a3 )
        goto LABEL_116;
    }
    else
    {
      v24 = a3;
    }
    *(_QWORD *)(v7 - ObpInfoMaskToOffset[*(_BYTE *)(v7 + 26) & 0x1F]) = v24;
  }
  else
  {
    if ( (*(_BYTE *)(v7 + 27) & 8) != 0 && *(_QWORD *)OBJECT_HEADER_TO_PROCESS_INFO(v7) )
    {
LABEL_116:
      v23 = -1073741790;
      goto LABEL_122;
    }
    v24 = a3;
  }
  if ( v68 && (*(_BYTE *)(v7 + 27) & 4) != 0 )
  {
    v23 = -1073741790;
    goto LABEL_122;
  }
  if ( !v69
    && !*(_QWORD *)(v7 + 8)
    && (*(_BYTE *)(v10 + 66) & 0x10) != 0
    && !*(_QWORD *)(v10 + 120)
    && *(_QWORD *)(v10 + 128) )
  {
    v23 = -1073741823;
    goto LABEL_122;
  }
  v25 = (*(_BYTE *)(v10 + 66) & 0x10) == 0;
  v74 = 0;
  if ( !v25 )
  {
    v23 = ObpLockHandleDataBaseEntry(v7, v24, &v74);
    if ( v23 < 0 )
      goto LABEL_122;
  }
  _InterlockedIncrement64((volatile signed __int64 *)(v7 + 8));
  if ( !*(_QWORD *)(v10 + 120) )
    goto LABEL_29;
  _m_prefetchw((const void *)(v7 + 16));
  v32 = *(_QWORD *)(v7 + 16);
  if ( (v32 & 0xFFFFFFFFFFFFFFF0uLL) > 0x10 )
    v33 = v32 - 16;
  else
    v33 = 0LL;
  if ( (v32 & 2) != 0
    || (v34 = *(_QWORD *)(v7 + 16), v34 != _InterlockedCompareExchange64((volatile signed __int64 *)(v7 + 16), v33, v32)) )
  {
    ExfReleasePushLock((_QWORD *)(v7 + 16));
  }
  KeAbPostRelease(v7 + 16);
  KeLeaveCriticalRegion();
  v35 = 0;
  v36 = v73;
  v37 = 0LL;
  v38 = a3;
  if ( a3 != KeGetCurrentThread()->ApcState.Process && v73 != 3 )
  {
    v35 = 1;
    ProcessServerSilo = PsGetProcessServerSilo((__int64)a3);
    v37 = PsAttachSiloToCurrentThread(ProcessServerSilo);
    KiStackAttachProcess(a3, 0, (__int64)v79);
    v38 = a3;
  }
  v23 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, struct _KPROCESS *, __int64, __int64, int))(v10 + 120))(
          v36,
          a5,
          v38,
          v78,
          v77,
          v74);
  if ( v35 )
  {
    KiUnstackDetachProcess((struct _KTHREAD *)v79, 0);
    PsDetachSiloFromCurrentThread(v37);
  }
  v39 = KeGetCurrentThread();
  --v39->KernelApcDisable;
  v40 = (_BYTE *)KeAbPreAcquire(v7 + 16, 0LL, 0);
  v41 = v40;
  if ( _interlockedbittestandset64((volatile signed __int32 *)(v7 + 16), 0LL) )
    ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(v7 + 16), v40, v7 + 16);
  if ( v41 )
    v41[26] |= 1u;
  if ( v23 >= 0 )
  {
    v24 = a3;
LABEL_29:
    if ( (*(_BYTE *)(v10 + 66) & 0x10) != 0 )
    {
      v31 = v7 - ObpInfoMaskToOffset[*(_BYTE *)(v7 + 26) & 7];
      if ( (*(_BYTE *)(v7 + 27) & 0x40) != 0 )
      {
        --*(_BYTE *)(v31 + 11);
        *(_DWORD *)(v31 + 8) ^= (*(_DWORD *)(v31 + 8) ^ (*(_DWORD *)(v31 + 8) + 1)) & 0xFFFFFF;
      }
      else
      {
        v48 = *(int **)v31;
        v49 = 0LL;
        v50 = 0LL;
        v51 = *v48;
        for ( i = v48 + 2; v51; --v51 )
        {
          if ( *(struct _KPROCESS **)i == v24 )
          {
            if ( !v50 )
              v50 = i;
            v49 = i;
            if ( *((_BYTE *)i + 11) != 0xFF )
              break;
          }
          i += 4;
        }
        v50[2] ^= (v50[2] ^ (v50[2] + 1)) & 0xFFFFFF;
        --*((_BYTE *)v49 + 11);
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
    if ( !v73 && (*(_BYTE *)(v7 + 26) & 1) != 0 )
    {
      v57 = (__int64 *)(v7 - 32);
      if ( v7 != 32 )
      {
        v61 = KeGetCurrentThread();
        --v61->SpecialApcDisable;
        v62 = (volatile signed __int32 *)(v10 + 184);
        v63 = (_BYTE *)KeAbPreAcquire(v10 + 184, 0LL, 0);
        v64 = v63;
        if ( _interlockedbittestandset64(v62, 0LL) )
          ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(v10 + 184), v63, v10 + 184);
        if ( v64 )
          v64[26] |= 1u;
        v65 = *(__int64 ***)(v10 + 8);
        if ( *v65 != (__int64 *)v10 )
          __fastfail(3u);
        *v57 = v10;
        v57[1] = (__int64)v65;
        *v65 = v57;
        *(_QWORD *)(v10 + 8) = v57;
        _m_prefetchw((const void *)v62);
        v66 = *(_QWORD *)v62;
        if ( (*(_QWORD *)v62 & 0xFFFFFFFFFFFFFFF0uLL) > 0x10 )
          v16 = v66 - 16;
        if ( (v66 & 2) != 0
          || (v67 = *(_QWORD *)v62, v67 != _InterlockedCompareExchange64((volatile signed __int64 *)v62, v16, v66)) )
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
    ObpUnlockHandleDatabaseEntry(v7, a3);
  _InterlockedDecrement64((volatile signed __int64 *)(v7 + 8));
  _m_prefetchw((const void *)(v7 + 16));
  v53 = *(_QWORD *)(v7 + 16);
  if ( (v53 & 0xFFFFFFFFFFFFFFF0uLL) > 0x10 )
    v16 = v53 - 16;
  if ( (v53 & 2) != 0
    || (v54 = *(_QWORD *)(v7 + 16), v54 != _InterlockedCompareExchange64((volatile signed __int64 *)(v7 + 16), v16, v53)) )
  {
    ExfReleasePushLock((_QWORD *)(v7 + 16));
  }
  KeAbPostRelease(v7 + 16);
  KeLeaveCriticalRegion();
  ObpDeleteNameCheck(v7);
  return (unsigned int)v23;
}
