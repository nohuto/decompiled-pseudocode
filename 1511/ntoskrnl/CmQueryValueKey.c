/*
 * XREFs of CmQueryValueKey @ 0x140405E20
 * Callers:
 *     NtQueryValueKey @ 0x140400BF0 (NtQueryValueKey.c)
 * Callees:
 *     ExfAcquirePushLockSharedEx @ 0x140020AB0 (ExfAcquirePushLockSharedEx.c)
 *     ExfReleasePushLock @ 0x1400309C0 (ExfReleasePushLock.c)
 *     ExReleaseResourceLite @ 0x14003FBB0 (ExReleaseResourceLite.c)
 *     ExAcquireResourceSharedLite @ 0x14003FBC0 (ExAcquireResourceSharedLite.c)
 *     HvpFaultCellWithClustering @ 0x140040C60 (HvpFaultCellWithClustering.c)
 *     HvpMapEntryGetBlockAddress @ 0x140040CA0 (HvpMapEntryGetBlockAddress.c)
 *     HvpGetCellContextReinitialize @ 0x140040CE8 (HvpGetCellContextReinitialize.c)
 *     PsBoostThreadIo @ 0x140040CF0 (PsBoostThreadIo.c)
 *     KeAbPostRelease @ 0x140042090 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegion @ 0x140042660 (KeLeaveCriticalRegion.c)
 *     KeAbPreAcquire @ 0x140042DA0 (KeAbPreAcquire.c)
 *     HvpMapEntryReleaseBlockAddress @ 0x14014FEAC (HvpMapEntryReleaseBlockAddress.c)
 *     KeBugCheckEx @ 0x140153DC0 (KeBugCheckEx.c)
 *     CmpLockTableAdd @ 0x1401A9FF0 (CmpLockTableAdd.c)
 *     CmpLockTableRemove @ 0x1401AA120 (CmpLockTableRemove.c)
 *     CmpSearchAddTrans @ 0x1403D6DD0 (CmpSearchAddTrans.c)
 *     CmListGetNextElement @ 0x1403D72EC (CmListGetNextElement.c)
 *     CmEqualTrans @ 0x1403E0784 (CmEqualTrans.c)
 *     CmpTryConvertKcbLockSharedToExclusive @ 0x1403F4074 (CmpTryConvertKcbLockSharedToExclusive.c)
 *     CmpFindNameInListWithStatus @ 0x1403F40F0 (CmpFindNameInListWithStatus.c)
 *     CmpCleanUpKcbValueCache @ 0x1403F9C74 (CmpCleanUpKcbValueCache.c)
 *     RtlUpcaseUnicodeChar @ 0x1403FB1D0 (RtlUpcaseUnicodeChar.c)
 *     CmpFreeKeyControlBlock @ 0x1403FCC40 (CmpFreeKeyControlBlock.c)
 *     CmRmIsKCBDeleted @ 0x1403FE220 (CmRmIsKCBDeleted.c)
 *     CmpUnlockKcb @ 0x1403FE4F0 (CmpUnlockKcb.c)
 *     CmpQueryKeyValueData @ 0x140422850 (CmpQueryKeyValueData.c)
 *     CmpUnlockRegistry @ 0x140423B00 (CmpUnlockRegistry.c)
 *     CmpLockKcbShared @ 0x140423B90 (CmpLockKcbShared.c)
 *     CmpUpgradeKcbLockToExclusive @ 0x1404C66EC (CmpUpgradeKcbLockToExclusive.c)
 *     RtlCompareUnicodeStrings @ 0x1404C74D0 (RtlCompareUnicodeStrings.c)
 */

__int64 __fastcall CmQueryValueKey(__int64 a1, const UNICODE_STRING *a2, int a3, void *a4, int a5, __int64 a6)
{
  signed __int64 v6; // rdi
  void *v7; // r13
  const UNICODE_STRING *v8; // r12
  struct _KTHREAD *CurrentThread; // rax
  unsigned __int64 v11; // r14
  __int64 *v12; // r15
  __int64 v13; // rbx
  bool v14; // zf
  __int64 v15; // r15
  __int64 v16; // rcx
  unsigned int v17; // r13d
  __int64 v18; // r9
  unsigned int v19; // esi
  __int64 (__fastcall *v20)(); // rax
  __int64 v21; // rcx
  int v22; // ebx
  unsigned __int8 *v23; // rsi
  WCHAR *Buffer; // r14
  unsigned __int16 v25; // r13
  unsigned __int16 v26; // cx
  WCHAR v27; // r12
  unsigned int v28; // r15d
  LONG v29; // ecx
  __int64 v30; // r10
  __int64 (__fastcall *v31)(ULONG_PTR); // rax
  unsigned int v32; // r8d
  __int64 v33; // rax
  int v34; // edx
  __int64 v35; // rax
  struct _EX_RUNDOWN_REF *v36; // rdx
  int KeyValueData; // ebx
  signed __int64 v38; // rax
  __int64 v39; // rtt
  __int64 v40; // rdx
  char *NextElement; // rax
  char *v43; // r10
  int v44; // ecx
  __int64 v45; // rdx
  __int64 v46; // rcx
  __int64 v47; // rax
  int v48; // [rsp+40h] [rbp-59h] BYREF
  unsigned __int16 v49; // [rsp+44h] [rbp-55h]
  int v50; // [rsp+48h] [rbp-51h] BYREF
  unsigned int v51; // [rsp+4Ch] [rbp-4Dh]
  int v52; // [rsp+50h] [rbp-49h] BYREF
  int v53; // [rsp+54h] [rbp-45h] BYREF
  char *v54; // [rsp+58h] [rbp-41h] BYREF
  unsigned int v55; // [rsp+60h] [rbp-39h] BYREF
  __int64 v56; // [rsp+68h] [rbp-31h]
  unsigned __int64 v57; // [rsp+70h] [rbp-29h]
  __int64 v58; // [rsp+78h] [rbp-21h]
  unsigned int v59; // [rsp+80h] [rbp-19h] BYREF
  __int64 v60; // [rsp+88h] [rbp-11h] BYREF
  _DWORD v61[6]; // [rsp+90h] [rbp-9h] BYREF
  BOOLEAN v62; // [rsp+F0h] [rbp+57h] BYREF
  const UNICODE_STRING *v63; // [rsp+F8h] [rbp+5Fh]
  int v64; // [rsp+100h] [rbp+67h]
  void *v65; // [rsp+108h] [rbp+6Fh]

  v65 = a4;
  v64 = a3;
  v63 = a2;
  v6 = 0LL;
  v50 = -1;
  v7 = a4;
  v8 = a2;
  v54 = 0LL;
  if ( !CmpPuntBoot )
  {
    PsBoostThreadIo((__int64)KeGetCurrentThread(), 0LL);
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    ExAcquireResourceSharedLite(&CmpRegistryLock, 1u);
  }
  v11 = *(_QWORD *)(a1 + 8);
  v57 = v11;
  if ( !*(_QWORD *)(a1 + 56) && !*(_QWORD *)(a1 + 64) )
    goto LABEL_5;
  CmpLockKcbShared(v11);
  if ( CmRmIsKCBDeleted(v11, (__int64)v54) )
  {
    KeyValueData = -1073741444;
    if ( (*(_BYTE *)(a1 + 48) & 1) != 0 )
      KeyValueData = -1073740763;
    CmpUnlockKcb((char *)v11);
    goto LABEL_90;
  }
  CmpUnlockKcb((char *)v11);
  KeyValueData = CmpSearchAddTrans(a1, 0LL, 0LL, *(_QWORD *)(a1 + 56), *(__int128 **)(a1 + 64), 0, &v54);
  if ( KeyValueData < 0 )
  {
LABEL_90:
    CmpUnlockRegistry();
    return (unsigned int)KeyValueData;
  }
LABEL_5:
  if ( (*(_DWORD *)(v11 + 4) & 0x100000) != 0 )
    *(_DWORD *)(v11 + 64) = CmpLockTableAdd(v11, 0);
  v12 = (__int64 *)(v11 + 48);
  v13 = KeAbPreAcquire(v11 + 48, 0LL, 0LL);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v11 + 48), 17LL, 0LL) )
    ExfAcquirePushLockSharedEx((unsigned __int64 *)(v11 + 48), v13, v11 + 48);
  if ( v13 )
    *(_BYTE *)(v13 + 26) |= 1u;
  _InterlockedIncrement((volatile signed __int32 *)(v11 + 56));
  while ( 1 )
  {
    v14 = (*(_DWORD *)(v11 + 4) & 0x20000) == 0;
    v60 = 0LL;
    if ( !v14 )
    {
LABEL_84:
      KeyValueData = -1073741444;
      if ( (*(_DWORD *)(a1 + 48) & 1) != 0 )
        KeyValueData = -1073740763;
      CmpUnlockKcb((char *)v11);
      CmpUnlockRegistry();
      return (unsigned int)KeyValueData;
    }
    if ( v54 )
    {
      do
      {
        NextElement = CmListGetNextElement((_QWORD *)(v11 + 200), &v60, 32);
        if ( !NextElement )
          goto LABEL_72;
        v44 = *((_DWORD *)NextElement + 17);
      }
      while ( v44 != 2 && v44 != 11 );
      if ( CmEqualTrans(*((_QWORD *)NextElement + 7), (__int64)v43) )
        goto LABEL_84;
      v43 = v54;
LABEL_72:
      if ( v43 && *(char **)(v11 + 280) == v43 )
        break;
    }
    if ( (*(_DWORD *)(v11 + 4) & 8) == 0 )
      goto LABEL_15;
    if ( *(struct _KTHREAD **)(v11 + 56) == KeGetCurrentThread() || CmpTryConvertKcbLockSharedToExclusive(v11) )
    {
      CmpCleanUpKcbValueCache(v11);
      v45 = *(unsigned int *)(v11 + 40);
      v46 = *(_QWORD *)(v11 + 32);
      v53 = -1;
      v47 = (*(__int64 (__fastcall **)(__int64, __int64, int *))(v46 + 8))(v46, v45, &v53);
      if ( !v47 )
      {
        KeyValueData = -1073741670;
        goto LABEL_52;
      }
      *(_DWORD *)(v11 + 96) = *(_DWORD *)(v47 + 36);
      *(_QWORD *)(v11 + 104) = *(unsigned int *)(v47 + 40);
      (*(void (__fastcall **)(_QWORD, int *))(*(_QWORD *)(v11 + 32) + 16LL))(*(_QWORD *)(v11 + 32), &v53);
LABEL_15:
      v15 = 0LL;
      v52 = -1;
      v48 = -1;
      if ( !*(_DWORD *)(v11 + 96) )
        goto LABEL_47;
      v58 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, int *))(*(_QWORD *)(v11 + 32) + 8LL))(
              *(_QWORD *)(v11 + 32),
              *(unsigned int *)(v11 + 104),
              &v52);
      v16 = v58;
      if ( !v58 )
        goto LABEL_47;
      v17 = 0;
      v51 = 0;
      if ( !*(_DWORD *)(v11 + 96) )
        goto LABEL_46;
      while ( 2 )
      {
        v18 = *(_QWORD *)(v11 + 32);
        v19 = *(_DWORD *)(v16 + 4LL * v17);
        v20 = *(__int64 (__fastcall **)())(v18 + 8);
        if ( v20 == HvpGetCellPaged )
        {
          if ( HvShutdownComplete != 1 )
          {
            HvpMapEntryGetBlockAddress(
              5LL * ((v19 >> 12) & 0x1FF),
              (struct _EX_RUNDOWN_REF *)(*(_QWORD *)(*(_QWORD *)(632 * ((unsigned __int64)v19 >> 31) + v18 + 1408)
                                                   + 8LL * ((v19 >> 21) & 0x3FF))
                                       + 40LL * ((v19 >> 12) & 0x1FF)),
              &v62,
              v61);
            HvpFaultCellWithClustering();
            v15 = v21 + 4;
            v22 = v19 ^ ((unsigned __int8)v19 ^ v62) & 1;
            v48 = v22;
LABEL_21:
            v56 = v15;
            if ( !v15 )
              goto LABEL_46;
            if ( (*(_BYTE *)(v15 + 16) & 1) != 0 )
            {
              v23 = (unsigned __int8 *)(v15 + 20);
              Buffer = v8->Buffer;
              v25 = *(_WORD *)(v15 + 2);
              v26 = v8->Length >> 1;
              v49 = v26;
              if ( v26 )
              {
                while ( v25 )
                {
                  v27 = *Buffer++;
                  v28 = *v23++;
                  if ( v27 != (_WORD)v28 )
                  {
                    if ( v27 >= 0x61u )
                    {
                      if ( v27 > 0x7Au )
                        v27 = RtlUpcaseUnicodeChar(v27);
                      else
                        v27 -= 32;
                    }
                    if ( v28 >= 0x61 )
                    {
                      if ( v28 > 0x7A )
                        LOWORD(v28) = RtlUpcaseUnicodeChar(v28);
                      else
                        LOWORD(v28) = v28 - 32;
                    }
                    v29 = v27 - (unsigned __int16)v28;
                    if ( v27 != (unsigned __int16)v28 )
                      goto LABEL_31;
                    v26 = v49;
                  }
                  --v26;
                  --v25;
                  v49 = v26;
                  if ( !v26 )
                    break;
                }
              }
              v29 = v26 - v25;
LABEL_31:
              v11 = v57;
              v17 = v51;
            }
            else
            {
              v29 = RtlCompareUnicodeStrings(
                      v8->Buffer,
                      (unsigned __int64)v8->Length >> 1,
                      (PCWCH)(v15 + 20),
                      (unsigned __int64)*(unsigned __int16 *)(v15 + 2) >> 1,
                      1u);
            }
            if ( !v29 )
            {
              v50 = v22;
              HvpGetCellContextReinitialize(&v48);
              v15 = v56;
LABEL_46:
              (*(void (__fastcall **)(_QWORD, int *))(*(_QWORD *)(v11 + 32) + 16LL))(*(_QWORD *)(v11 + 32), &v52);
              v7 = v65;
LABEL_47:
              if ( v15 )
LABEL_48:
                KeyValueData = CmpQueryKeyValueData(v11, v50, v15, v64, v7, a5, a6);
              else
                KeyValueData = -1073741772;
              if ( v15 )
                (*(void (__fastcall **)(_QWORD, int *))(*(_QWORD *)(v11 + 32) + 16LL))(*(_QWORD *)(v11 + 32), &v50);
LABEL_51:
              v12 = (__int64 *)(v11 + 48);
              goto LABEL_52;
            }
            v30 = *(_QWORD *)(v11 + 32);
            v31 = *(__int64 (__fastcall **)(ULONG_PTR))(v30 + 16);
            if ( v31 == HvpReleaseCellPaged )
            {
              v32 = v22 & 0xFFFFFFFE;
              v33 = (v22 & 0xFFFFFFFE) >> 31;
              v34 = (_DWORD)v33 << 31;
              v35 = 632 * v33;
              if ( (v22 & 0xFFFFFFFE) + v34 >= *(_DWORD *)(v35 + v30 + 1400)
                || (v36 = (struct _EX_RUNDOWN_REF *)(*(_QWORD *)(*(_QWORD *)(v35 + v30 + 1408)
                                                               + 8LL * ((v32 >> 21) & 0x3FF))
                                                   + 40LL * ((v32 >> 12) & 0x1FF))) == 0LL )
              {
                KeBugCheckEx(0x51u, 1uLL, *(_QWORD *)(v11 + 32), v32, 0x291uLL);
              }
              if ( (v22 & 1) != 0 )
                HvpMapEntryReleaseBlockAddress(5LL * ((v32 >> 12) & 0x1FF), v36);
              HvpGetCellContextReinitialize(&v48);
            }
            else
            {
              ((void (__fastcall *)(_QWORD, int *))v31)(*(_QWORD *)(v11 + 32), &v48);
            }
            ++v17;
            v15 = 0LL;
            v51 = v17;
            if ( v17 >= *(_DWORD *)(v11 + 96) )
              goto LABEL_46;
            v8 = v63;
            v16 = v58;
            continue;
          }
          v15 = 0LL;
        }
        else
        {
          v15 = ((__int64 (__fastcall *)(_QWORD, _QWORD, int *))v20)(*(_QWORD *)(v11 + 32), v19, &v48);
        }
        break;
      }
      v22 = v48;
      goto LABEL_21;
    }
    CmpUpgradeKcbLockToExclusive(v11);
  }
  KeyValueData = CmpFindNameInListWithStatus(*(_QWORD *)(v11 + 32), (_DWORD *)(v11 + 272), v8, 0, &v59, &v55);
  if ( KeyValueData >= 0 )
  {
    v15 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, int *))(*(_QWORD *)(v11 + 32) + 8LL))(
            *(_QWORD *)(v11 + 32),
            v55,
            &v50);
    if ( v15 )
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
  v38 = *v12;
  if ( (*v12 & 0xFFFFFFFFFFFFFFF0uLL) > 0x10 )
    v6 = v38 - 16;
  if ( (v38 & 2) != 0 || (v39 = *v12, v39 != _InterlockedCompareExchange64(v12, v6, v38)) )
    ExfReleasePushLock(v12);
  KeAbPostRelease((ULONG_PTR)v12);
  if ( (*(_DWORD *)(v11 + 4) & 0x100000) != 0 )
    CmpLockTableRemove(v11, *(_DWORD *)(v11 + 64));
  if ( (*(_DWORD *)(v11 + 4) & 0x80000) != 0 )
    CmpFreeKeyControlBlock(v11);
  if ( !CmpPuntBoot )
  {
    ExReleaseResourceLite(&CmpRegistryLock);
    KeLeaveCriticalRegion();
    LOBYTE(v40) = 1;
    PsBoostThreadIo((__int64)KeGetCurrentThread(), v40);
  }
  return (unsigned int)KeyValueData;
}
