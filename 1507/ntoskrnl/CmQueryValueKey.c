/*
 * XREFs of CmQueryValueKey @ 0x1404C21A0
 * Callers:
 *     NtQueryValueKey @ 0x1404C0BB0 (NtQueryValueKey.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     ExAcquireResourceSharedLite @ 0x1400C8DB0 (ExAcquireResourceSharedLite.c)
 *     ExReleaseResourceLite @ 0x1400C92D0 (ExReleaseResourceLite.c)
 *     HvpFaultCellWithClustering @ 0x1400CA7F0 (HvpFaultCellWithClustering.c)
 *     HvpMapEntryGetBlockAddress @ 0x1400CA830 (HvpMapEntryGetBlockAddress.c)
 *     HvpGetCellContextReinitialize @ 0x1400CA874 (HvpGetCellContextReinitialize.c)
 *     PsBoostThreadIo @ 0x1400CA880 (PsBoostThreadIo.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     ExfAcquirePushLockSharedEx @ 0x1400F2F00 (ExfAcquirePushLockSharedEx.c)
 *     ExfReleasePushLock @ 0x1400F35E0 (ExfReleasePushLock.c)
 *     HvpMapEntryReleaseBlockAddress @ 0x14017DF88 (HvpMapEntryReleaseBlockAddress.c)
 *     KeBugCheckEx @ 0x140182750 (KeBugCheckEx.c)
 *     CmpLockTableAdd @ 0x1401DFF3C (CmpLockTableAdd.c)
 *     CmpLockTableRemove @ 0x1401E006C (CmpLockTableRemove.c)
 *     CmpLockKcbShared @ 0x140427A50 (CmpLockKcbShared.c)
 *     CmpQueryKeyValueData @ 0x140427AD0 (CmpQueryKeyValueData.c)
 *     CmpFindNameInListWithStatus @ 0x140429D80 (CmpFindNameInListWithStatus.c)
 *     CmpTryConvertKcbLockSharedToExclusive @ 0x14042A83C (CmpTryConvertKcbLockSharedToExclusive.c)
 *     CmEqualTrans @ 0x140449EE8 (CmEqualTrans.c)
 *     CmpUnlockKcb @ 0x1404C53F0 (CmpUnlockKcb.c)
 *     CmRmIsKCBDeleted @ 0x1404C69A0 (CmRmIsKCBDeleted.c)
 *     CmpUnlockRegistry @ 0x1404C6A10 (CmpUnlockRegistry.c)
 *     CmpFreeKeyControlBlock @ 0x1404C8DB0 (CmpFreeKeyControlBlock.c)
 *     RtlUpcaseUnicodeChar @ 0x1404CC660 (RtlUpcaseUnicodeChar.c)
 *     CmpCleanUpKcbValueCache @ 0x1404CC8C0 (CmpCleanUpKcbValueCache.c)
 *     RtlCompareUnicodeStrings @ 0x1404DA390 (RtlCompareUnicodeStrings.c)
 *     CmpSearchAddTrans @ 0x1404F0F50 (CmpSearchAddTrans.c)
 *     CmListGetNextElement @ 0x1404F1644 (CmListGetNextElement.c)
 *     CmpUpgradeKcbLockToExclusive @ 0x14055D194 (CmpUpgradeKcbLockToExclusive.c)
 */

__int64 __fastcall CmQueryValueKey(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5, __int64 a6)
{
  signed __int64 v6; // rdi
  _DWORD *v7; // r13
  const UNICODE_STRING *v8; // r12
  struct _KTHREAD *CurrentThread; // rax
  __int64 v11; // r14
  __int64 *v12; // r15
  __int64 v13; // rdx
  __int64 v14; // rbx
  __int64 v15; // r9
  bool v16; // zf
  __int64 v17; // r15
  __int64 v18; // rcx
  unsigned int v19; // r13d
  __int64 v20; // r9
  unsigned int v21; // esi
  __int64 (__fastcall *v22)(); // rax
  __int64 v23; // rcx
  int v24; // ebx
  unsigned __int8 *v25; // rsi
  WCHAR *Buffer; // r14
  unsigned __int16 v27; // r13
  unsigned __int16 v28; // cx
  WCHAR v29; // r12
  unsigned int v30; // r15d
  LONG v31; // ecx
  __int64 v32; // r10
  __int64 (__fastcall *v33)(ULONG_PTR); // rax
  unsigned int v34; // r8d
  __int64 v35; // rax
  int v36; // edx
  __int64 v37; // rax
  struct _EX_RUNDOWN_REF *v38; // rdx
  int KeyValueData; // ebx
  signed __int64 v40; // rax
  __int64 v41; // rtt
  __int64 v42; // rdx
  struct _KTHREAD *v43; // rcx
  __int16 v44; // ax
  __int64 NextElement; // rax
  __int64 v47; // r10
  int v48; // ecx
  __int64 v49; // rdx
  __int64 v50; // rcx
  __int64 v51; // rax
  int v52; // [rsp+40h] [rbp-59h] BYREF
  unsigned __int16 v53; // [rsp+44h] [rbp-55h]
  int v54; // [rsp+48h] [rbp-51h] BYREF
  unsigned int v55; // [rsp+4Ch] [rbp-4Dh]
  int v56; // [rsp+50h] [rbp-49h] BYREF
  int v57; // [rsp+54h] [rbp-45h] BYREF
  __int64 v58; // [rsp+58h] [rbp-41h] BYREF
  unsigned int v59; // [rsp+60h] [rbp-39h] BYREF
  __int64 v60; // [rsp+68h] [rbp-31h]
  __int64 v61; // [rsp+70h] [rbp-29h]
  __int64 v62; // [rsp+78h] [rbp-21h]
  unsigned int v63; // [rsp+80h] [rbp-19h] BYREF
  __int64 v64; // [rsp+88h] [rbp-11h] BYREF
  _DWORD v65[6]; // [rsp+90h] [rbp-9h] BYREF
  BOOLEAN v66; // [rsp+F0h] [rbp+57h] BYREF
  const UNICODE_STRING *v67; // [rsp+F8h] [rbp+5Fh]
  int v68; // [rsp+100h] [rbp+67h]
  _DWORD *v69; // [rsp+108h] [rbp+6Fh]

  v69 = (_DWORD *)a4;
  v68 = a3;
  v67 = (const UNICODE_STRING *)a2;
  v6 = 0LL;
  v54 = -1;
  v7 = (_DWORD *)a4;
  v8 = (const UNICODE_STRING *)a2;
  v58 = 0LL;
  if ( !CmpPuntBoot )
  {
    PsBoostThreadIo((__int64)KeGetCurrentThread(), 0LL);
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    ExAcquireResourceSharedLite(&CmpRegistryLock, 1u);
  }
  v11 = *(_QWORD *)(a1 + 8);
  v61 = v11;
  if ( !*(_QWORD *)(a1 + 56) && !*(_QWORD *)(a1 + 64) )
    goto LABEL_5;
  CmpLockKcbShared(v11, a2, a3, a4);
  if ( (unsigned __int8)CmRmIsKCBDeleted(v11, v58) == 1 )
  {
    KeyValueData = -1073741444;
    if ( (*(_BYTE *)(a1 + 48) & 1) != 0 )
      KeyValueData = -1073740763;
    CmpUnlockKcb((PVOID)v11);
    goto LABEL_94;
  }
  CmpUnlockKcb((PVOID)v11);
  KeyValueData = CmpSearchAddTrans(a1, 0, 0, *(_QWORD *)(a1 + 56), *(_QWORD *)(a1 + 64), 0, (__int64)&v58);
  if ( KeyValueData < 0 )
  {
LABEL_94:
    CmpUnlockRegistry();
    return (unsigned int)KeyValueData;
  }
LABEL_5:
  if ( (*(_DWORD *)(v11 + 4) & 0x100000) != 0 )
    *(_DWORD *)(v11 + 64) = CmpLockTableAdd(v11, 0);
  v12 = (__int64 *)(v11 + 48);
  v14 = KeAbPreAcquire(v11 + 48, 0LL, 0LL, a4);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v11 + 48), 17LL, 0LL) )
    ExfAcquirePushLockSharedEx((unsigned __int64 *)(v11 + 48), v14, v11 + 48, v15);
  if ( v14 )
    *(_BYTE *)(v14 + 26) |= 1u;
  _InterlockedIncrement((volatile signed __int32 *)(v11 + 56));
  while ( 1 )
  {
    v16 = (*(_DWORD *)(v11 + 4) & 0x20000) == 0;
    v64 = 0LL;
    if ( !v16 )
    {
LABEL_88:
      KeyValueData = -1073741444;
      if ( (*(_DWORD *)(a1 + 48) & 1) != 0 )
        KeyValueData = -1073740763;
      CmpUnlockKcb((PVOID)v11);
      CmpUnlockRegistry();
      return (unsigned int)KeyValueData;
    }
    if ( v58 )
    {
      do
      {
        NextElement = CmListGetNextElement(v11 + 200, &v64, 32LL);
        if ( !NextElement )
          goto LABEL_75;
        v48 = *(_DWORD *)(NextElement + 68);
      }
      while ( v48 != 2 && v48 != 11 );
      if ( CmEqualTrans(*(_QWORD *)(NextElement + 56), v47) )
        goto LABEL_88;
      v47 = v58;
LABEL_75:
      if ( v47 && *(_QWORD *)(v11 + 280) == v47 )
        break;
    }
    if ( (*(_DWORD *)(v11 + 4) & 8) == 0 )
      goto LABEL_15;
    if ( *(struct _KTHREAD **)(v11 + 56) == KeGetCurrentThread() || CmpTryConvertKcbLockSharedToExclusive(v11) )
    {
      CmpCleanUpKcbValueCache(v11);
      v49 = *(unsigned int *)(v11 + 40);
      v50 = *(_QWORD *)(v11 + 32);
      v57 = -1;
      v51 = (*(__int64 (__fastcall **)(__int64, __int64, int *))(v50 + 8))(v50, v49, &v57);
      if ( !v51 )
      {
        KeyValueData = -1073741670;
        goto LABEL_52;
      }
      *(_DWORD *)(v11 + 96) = *(_DWORD *)(v51 + 36);
      *(_QWORD *)(v11 + 104) = *(unsigned int *)(v51 + 40);
      (*(void (__fastcall **)(_QWORD, int *))(*(_QWORD *)(v11 + 32) + 16LL))(*(_QWORD *)(v11 + 32), &v57);
LABEL_15:
      v17 = 0LL;
      v56 = -1;
      v52 = -1;
      if ( !*(_DWORD *)(v11 + 96) )
        goto LABEL_47;
      v62 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, int *))(*(_QWORD *)(v11 + 32) + 8LL))(
              *(_QWORD *)(v11 + 32),
              *(unsigned int *)(v11 + 104),
              &v56);
      v18 = v62;
      if ( !v62 )
        goto LABEL_47;
      v19 = 0;
      v55 = 0;
      if ( !*(_DWORD *)(v11 + 96) )
        goto LABEL_46;
      while ( 2 )
      {
        v20 = *(_QWORD *)(v11 + 32);
        v21 = *(_DWORD *)(v18 + 4LL * v19);
        v22 = *(__int64 (__fastcall **)())(v20 + 8);
        if ( v22 == HvpGetCellPaged )
        {
          if ( HvShutdownComplete != 1 )
          {
            HvpMapEntryGetBlockAddress(
              5LL * ((v21 >> 12) & 0x1FF),
              (struct _EX_RUNDOWN_REF *)(*(_QWORD *)(*(_QWORD *)(632 * ((unsigned __int64)v21 >> 31) + v20 + 1408)
                                                   + 8LL * ((v21 >> 21) & 0x3FF))
                                       + 40LL * ((v21 >> 12) & 0x1FF)),
              &v66,
              v65);
            HvpFaultCellWithClustering();
            v17 = v23 + 4;
            v24 = v21 ^ ((unsigned __int8)v21 ^ v66) & 1;
            v52 = v24;
LABEL_21:
            v60 = v17;
            if ( !v17 )
              goto LABEL_46;
            if ( (*(_BYTE *)(v17 + 16) & 1) != 0 )
            {
              v25 = (unsigned __int8 *)(v17 + 20);
              Buffer = v8->Buffer;
              v27 = *(_WORD *)(v17 + 2);
              v28 = v8->Length >> 1;
              v53 = v28;
              if ( v28 )
              {
                while ( v27 )
                {
                  v29 = *Buffer++;
                  v30 = *v25++;
                  if ( v29 != (_WORD)v30 )
                  {
                    if ( v29 >= 0x61u )
                    {
                      if ( v29 > 0x7Au )
                        v29 = RtlUpcaseUnicodeChar(v29);
                      else
                        v29 -= 32;
                    }
                    if ( v30 >= 0x61 )
                    {
                      if ( v30 > 0x7A )
                        LOWORD(v30) = RtlUpcaseUnicodeChar(v30);
                      else
                        LOWORD(v30) = v30 - 32;
                    }
                    v31 = v29 - (unsigned __int16)v30;
                    if ( v29 != (unsigned __int16)v30 )
                      goto LABEL_31;
                    v28 = v53;
                  }
                  --v28;
                  --v27;
                  v53 = v28;
                  if ( !v28 )
                    break;
                }
              }
              v31 = v28 - v27;
LABEL_31:
              v11 = v61;
              v19 = v55;
            }
            else
            {
              v31 = RtlCompareUnicodeStrings(
                      v8->Buffer,
                      (unsigned __int64)v8->Length >> 1,
                      (PCWCH)(v17 + 20),
                      (unsigned __int64)*(unsigned __int16 *)(v17 + 2) >> 1,
                      1u);
            }
            if ( !v31 )
            {
              v54 = v24;
              HvpGetCellContextReinitialize(&v52);
              v17 = v60;
LABEL_46:
              (*(void (__fastcall **)(_QWORD, int *))(*(_QWORD *)(v11 + 32) + 16LL))(*(_QWORD *)(v11 + 32), &v56);
              v7 = v69;
LABEL_47:
              if ( v17 )
LABEL_48:
                KeyValueData = CmpQueryKeyValueData(v11, v54, v17, v68, v7, a5, (int *)a6);
              else
                KeyValueData = -1073741772;
              if ( v17 )
                (*(void (__fastcall **)(_QWORD, int *))(*(_QWORD *)(v11 + 32) + 16LL))(*(_QWORD *)(v11 + 32), &v54);
LABEL_51:
              v12 = (__int64 *)(v11 + 48);
              goto LABEL_52;
            }
            v32 = *(_QWORD *)(v11 + 32);
            v33 = *(__int64 (__fastcall **)(ULONG_PTR))(v32 + 16);
            if ( v33 == HvpReleaseCellPaged )
            {
              v34 = v24 & 0xFFFFFFFE;
              v35 = (v24 & 0xFFFFFFFE) >> 31;
              v36 = (_DWORD)v35 << 31;
              v37 = 632 * v35;
              if ( (v24 & 0xFFFFFFFE) + v36 >= *(_DWORD *)(v37 + v32 + 1400)
                || (v38 = (struct _EX_RUNDOWN_REF *)(*(_QWORD *)(*(_QWORD *)(v37 + v32 + 1408)
                                                               + 8LL * ((v34 >> 21) & 0x3FF))
                                                   + 40LL * ((v34 >> 12) & 0x1FF))) == 0LL )
              {
                KeBugCheckEx(0x51u, 1uLL, *(_QWORD *)(v11 + 32), v34, 0x291uLL);
              }
              if ( (v24 & 1) != 0 )
                HvpMapEntryReleaseBlockAddress(5LL * ((v34 >> 12) & 0x1FF), v38);
              HvpGetCellContextReinitialize(&v52);
            }
            else
            {
              ((void (__fastcall *)(_QWORD, int *))v33)(*(_QWORD *)(v11 + 32), &v52);
            }
            ++v19;
            v17 = 0LL;
            v55 = v19;
            if ( v19 >= *(_DWORD *)(v11 + 96) )
              goto LABEL_46;
            v8 = v67;
            v18 = v62;
            continue;
          }
          v17 = 0LL;
        }
        else
        {
          v17 = ((__int64 (__fastcall *)(_QWORD, _QWORD, int *))v22)(*(_QWORD *)(v11 + 32), v21, &v52);
        }
        break;
      }
      v24 = v52;
      goto LABEL_21;
    }
    CmpUpgradeKcbLockToExclusive(v11);
  }
  KeyValueData = CmpFindNameInListWithStatus(*(_QWORD *)(v11 + 32), (_DWORD *)(v11 + 272), v8, 0, &v63, &v59);
  if ( KeyValueData >= 0 )
  {
    v17 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, int *))(*(_QWORD *)(v11 + 32) + 8LL))(
            *(_QWORD *)(v11 + 32),
            v59,
            &v54);
    if ( v17 )
      goto LABEL_48;
    KeyValueData = -1073741670;
    goto LABEL_51;
  }
LABEL_52:
  if ( *(struct _KTHREAD **)(v11 + 56) == KeGetCurrentThread() )
    *(_QWORD *)(v11 + 56) = 0LL;
  else
    _InterlockedDecrement((volatile signed __int32 *)(v11 + 56));
  _m_prefetchw(v12);
  v40 = *v12;
  if ( (*v12 & 0xFFFFFFFFFFFFFFF0uLL) > 0x10 )
    v6 = v40 - 16;
  if ( (v40 & 2) != 0 || (v41 = *v12, v41 != _InterlockedCompareExchange64(v12, v6, v40)) )
    ExfReleasePushLock(v12, v13);
  KeAbPostRelease((ULONG_PTR)v12);
  if ( (*(_DWORD *)(v11 + 4) & 0x100000) != 0 )
    CmpLockTableRemove(v11, *(_DWORD *)(v11 + 64));
  if ( (*(_DWORD *)(v11 + 4) & 0x80000) != 0 )
    CmpFreeKeyControlBlock((PVOID)v11);
  if ( !CmpPuntBoot )
  {
    ExReleaseResourceLite(&CmpRegistryLock);
    v43 = KeGetCurrentThread();
    v44 = v43->KernelApcDisable + 1;
    v43->KernelApcDisable = v44;
    if ( !v44
      && ($CD287064E7C9F7953DE243E927CFCB99 *)v43->ApcState.ApcListHead[0].Flink != &v43->152
      && !v43->SpecialApcDisable )
    {
      KiCheckForKernelApcDelivery();
    }
    LOBYTE(v42) = 1;
    PsBoostThreadIo((__int64)KeGetCurrentThread(), v42);
  }
  return (unsigned int)KeyValueData;
}
