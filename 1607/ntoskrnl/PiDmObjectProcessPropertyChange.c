/*
 * XREFs of PiDmObjectProcessPropertyChange @ 0x1404E832C
 * Callers:
 *     PiPnpRtlObjectEventWorker @ 0x1404E769C (PiPnpRtlObjectEventWorker.c)
 * Callees:
 *     KeAbPostRelease @ 0x14006AA40 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x1400C5C80 (KiCheckForKernelApcDelivery.c)
 *     ExfReleasePushLock @ 0x1400C64C0 (ExfReleasePushLock.c)
 *     memcmp @ 0x14014E450 (memcmp.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 *     PiDmGetReferencedObjectFromProperty @ 0x1404C1CB4 (PiDmGetReferencedObjectFromProperty.c)
 *     PiDmCacheDataEncode @ 0x1404C3F78 (PiDmCacheDataEncode.c)
 *     PiDmCacheDataFree @ 0x1404CBCD0 (PiDmCacheDataFree.c)
 *     PnpGetObjectProperty @ 0x1404DEBF4 (PnpGetObjectProperty.c)
 *     PiDmObjectRelease @ 0x1404E1F50 (PiDmObjectRelease.c)
 *     PiDmGetObject @ 0x1404E1F90 (PiDmGetObject.c)
 *     PiDmGetCacheKeys @ 0x1404E2474 (PiDmGetCacheKeys.c)
 *     PiDmGetCachedKeyIndex @ 0x1404E24C0 (PiDmGetCachedKeyIndex.c)
 *     PiDmCacheDataDecode @ 0x1404E2B40 (PiDmCacheDataDecode.c)
 *     PiDmObjectAcquireExclusiveLock @ 0x1404E90B4 (PiDmObjectAcquireExclusiveLock.c)
 */

void __fastcall PiDmObjectProcessPropertyChange(
        unsigned int a1,
        __int64 a2,
        ULONG_PTR a3,
        __int64 a4,
        __int64 a5,
        _BYTE *a6)
{
  signed __int64 *v6; // rdi
  int Object; // esi
  unsigned int v10; // r14d
  DEVPROPKEY **v11; // r12
  unsigned int CachedKeyIndex; // eax
  __int64 v13; // rbx
  unsigned int v14; // edx
  __int64 v15; // r15
  int v16; // eax
  __int128 *v17; // rbx
  int v18; // eax
  _BYTE *v19; // r14
  unsigned int v20; // ebx
  GUID *PoolWithTag; // rax
  signed __int64 v22; // rax
  signed __int64 v23; // rcx
  signed __int64 v24; // rtt
  ULONG_PTR v25; // rbx
  struct _KTHREAD *CurrentThread; // rcx
  __int16 v27; // ax
  unsigned int v28; // edx
  _QWORD *v29; // rcx
  __int64 v30; // r9
  __int64 v31; // r8
  char *v32; // rdi
  signed __int64 *v33; // rbx
  __int64 v34; // rdi
  int v35; // eax
  int v36; // eax
  signed __int64 v37; // rax
  signed __int64 v38; // rcx
  signed __int64 v39; // rtt
  ULONG_PTR v40; // rbx
  struct _KTHREAD *v41; // rcx
  __int16 v42; // ax
  __int64 v43; // [rsp+68h] [rbp-39h] BYREF
  void *Buf2; // [rsp+70h] [rbp-31h] BYREF
  int v45; // [rsp+78h] [rbp-29h] BYREF
  SIZE_T NumberOfBytes; // [rsp+7Ch] [rbp-25h] BYREF
  ULONG_PTR v47; // [rsp+88h] [rbp-19h] BYREF
  void *Buf1; // [rsp+90h] [rbp-11h]
  unsigned int v49; // [rsp+98h] [rbp-9h] BYREF
  DEVPROPKEY **v50; // [rsp+A0h] [rbp-1h] BYREF
  int v52; // [rsp+100h] [rbp+5Fh]
  ULONG_PTR BugCheckParameter2; // [rsp+108h] [rbp+67h] BYREF
  char v54; // [rsp+110h] [rbp+6Fh]

  BugCheckParameter2 = a3;
  v52 = a2;
  NumberOfBytes = 0LL;
  v6 = (signed __int64 *)a3;
  v54 = 0;
  *a6 = 0;
  Object = 0;
  Buf1 = 0LL;
  v10 = 0;
  Buf2 = 0LL;
  v45 = 0;
  LODWORD(v43) = 0;
  v47 = 0LL;
  if ( a4 )
    return;
  PiDmGetCacheKeys(a1, &v50, &v49);
  if ( !v49 )
    return;
  v11 = v50;
  CachedKeyIndex = PiDmGetCachedKeyIndex((__int64)v50, v49, a5);
  v13 = CachedKeyIndex;
  if ( CachedKeyIndex >= v14 )
    return;
  if ( !v6 )
  {
    Object = PiDmGetObject(a1, a2, &BugCheckParameter2);
    if ( Object < 0 )
      return;
    v6 = (signed __int64 *)BugCheckParameter2;
    v54 = 1;
  }
  v15 = 3 * v13;
  if ( LODWORD(v11[3 * v13 + 2]) == 1 )
  {
    Object = PnpGetObjectProperty(
               0x5A706E50u,
               0x10uLL,
               v52,
               a1,
               0LL,
               0LL,
               a5,
               (__int64)&v43,
               &Buf2,
               (_DWORD *)&NumberOfBytes + 1,
               0x10000);
    if ( Object == -1073741275 )
    {
      Object = 0;
      LODWORD(v43) = 0;
      HIDWORD(NumberOfBytes) = 0;
    }
    else
    {
      v10 = HIDWORD(NumberOfBytes);
    }
  }
  PiDmObjectAcquireExclusiveLock(v6);
  v16 = v6[v15 + 13];
  if ( !v16 )
  {
    if ( !LODWORD(v11[3 * v13 + 2]) )
      goto LABEL_37;
    goto LABEL_13;
  }
  if ( v16 == 1 || Object < 0 || !LODWORD(v11[3 * v13 + 2]) )
    goto LABEL_13;
  v18 = PiDmCacheDataDecode((__int64)&v6[v15 + 13], &v45, 0LL, 0, (unsigned int *)&NumberOfBytes);
  Object = v18;
  if ( v18 == -1073741275 )
  {
    Object = 0;
    v45 = 0;
    if ( !(_DWORD)v43 )
    {
LABEL_23:
      v19 = a6;
      *a6 = 1;
      goto LABEL_38;
    }
LABEL_13:
    v17 = (__int128 *)Buf2;
    goto LABEL_14;
  }
  if ( (int)(v18 + 0x80000000) >= 0 && v18 != -1073741789 )
    goto LABEL_13;
  v20 = NumberOfBytes;
  if ( (_DWORD)NumberOfBytes )
  {
    PoolWithTag = (GUID *)ExAllocatePoolWithTag(PagedPool, (unsigned int)NumberOfBytes, 0x5A706E50u);
    Buf1 = PoolWithTag;
    if ( !PoolWithTag )
    {
      Object = -1073741670;
      goto LABEL_13;
    }
  }
  else
  {
    PoolWithTag = (GUID *)Buf1;
  }
  Object = PiDmCacheDataDecode((__int64)&v6[v15 + 13], &v45, PoolWithTag, v20, (unsigned int *)&NumberOfBytes);
  if ( Object < 0 || v45 != (_DWORD)v43 || (_DWORD)NumberOfBytes != v10 )
    goto LABEL_13;
  if ( !(_DWORD)NumberOfBytes )
    goto LABEL_23;
  v17 = (__int128 *)Buf2;
  if ( !memcmp(Buf1, Buf2, (unsigned int)NumberOfBytes) )
    goto LABEL_23;
LABEL_14:
  PiDmCacheDataFree((__int64)&v6[v15 + 13]);
  if ( Object >= 0 )
  {
    if ( LODWORD(v11[v15 + 2]) != 1 )
    {
LABEL_36:
      v19 = a6;
      goto LABEL_38;
    }
    if ( !HIDWORD(v11[v15 + 1]) )
    {
      Object = PiDmCacheDataEncode(v43, v17, v10, (int)v11[v15 + 1], 0, (__int64)&v6[v15 + 13]);
      goto LABEL_36;
    }
  }
LABEL_37:
  v19 = a6;
LABEL_38:
  _m_prefetchw(v6);
  v22 = *v6;
  v23 = *v6 - 16;
  if ( (*v6 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
    v23 = 0LL;
  if ( (v22 & 2) != 0
    || (v24 = *v6, v24 != _InterlockedCompareExchange64((volatile signed __int64 *)BugCheckParameter2, v23, v22)) )
  {
    v25 = BugCheckParameter2;
    ExfReleasePushLock((_QWORD *)BugCheckParameter2);
  }
  else
  {
    v25 = BugCheckParameter2;
  }
  KeAbPostRelease(v25);
  CurrentThread = KeGetCurrentThread();
  v27 = CurrentThread->KernelApcDisable + 1;
  CurrentThread->KernelApcDisable = v27;
  if ( !v27
    && ($2B8565053CDC740D4E4887693DD8AC9E *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152
    && !CurrentThread->SpecialApcDisable )
  {
    KiCheckForKernelApcDelivery((__int64)CurrentThread);
  }
  if ( !LODWORD(v11[v15 + 2]) || *v19 )
    goto LABEL_82;
  v28 = 0;
  v29 = &PiDmAggregatedBooleanDefs;
  v30 = *(unsigned int *)(a5 + 16);
  while ( 1 )
  {
    v31 = v29[1];
    if ( *(_DWORD *)(v31 + 16) == (_DWORD)v30
      && *(_QWORD *)v31 == *(_QWORD *)a5
      && *(_QWORD *)(v31 + 8) == *(_QWORD *)(a5 + 8)
      && a1 == *(_DWORD *)v29 )
    {
      break;
    }
    ++v28;
    v29 += 7;
    if ( v28 >= 3 )
      goto LABEL_82;
  }
  v32 = (char *)&PiDmAggregatedBooleanDefs + 56 * v28;
  if ( !v32
    || (int)PiDmGetReferencedObjectFromProperty(
              a1,
              v52,
              BugCheckParameter2,
              v30,
              *((_QWORD *)v32 + 2),
              *((_DWORD *)v32 + 6),
              (PVOID *)&v47) < 0 )
  {
    goto LABEL_82;
  }
  v33 = (signed __int64 *)v47;
  v34 = *((_QWORD *)v32 + 6);
  PiDmObjectAcquireExclusiveLock(v47);
  if ( Object < 0 || (v35 = *(_DWORD *)((char *)v33 + v34), v35 == 0x80000000) )
  {
    *(_DWORD *)((char *)v33 + v34) = 0x80000000;
    goto LABEL_72;
  }
  if ( v45 != 17 )
    goto LABEL_68;
  if ( *(_BYTE *)Buf1 == 0xFF && ((_DWORD)v43 != 17 || !*(_BYTE *)Buf2) )
  {
    v36 = v35 - 1;
LABEL_70:
    *(_DWORD *)((char *)v33 + v34) = v36;
    goto LABEL_72;
  }
  if ( !*(_BYTE *)Buf1 )
  {
LABEL_68:
    if ( (_DWORD)v43 != 17 || *(_BYTE *)Buf2 != 0xFF )
      goto LABEL_72;
    v36 = v35 + 1;
    goto LABEL_70;
  }
LABEL_72:
  _m_prefetchw(v33);
  v37 = *v33;
  v38 = *v33 - 16;
  if ( (*v33 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
    v38 = 0LL;
  if ( (v37 & 2) != 0 || (v39 = *v33, v39 != _InterlockedCompareExchange64((volatile signed __int64 *)v47, v38, v37)) )
  {
    v40 = v47;
    ExfReleasePushLock((_QWORD *)v47);
  }
  else
  {
    v40 = v47;
  }
  KeAbPostRelease(v40);
  v41 = KeGetCurrentThread();
  v42 = v41->KernelApcDisable + 1;
  v41->KernelApcDisable = v42;
  if ( !v42
    && ($2B8565053CDC740D4E4887693DD8AC9E *)v41->ApcState.ApcListHead[0].Flink != &v41->152
    && !v41->SpecialApcDisable )
  {
    KiCheckForKernelApcDelivery((__int64)v41);
  }
LABEL_82:
  if ( Buf1 )
    ExFreePoolWithTag(Buf1, 0x5A706E50u);
  if ( Buf2 )
    ExFreePoolWithTag(Buf2, 0x5A706E50u);
  if ( v47 )
    PiDmObjectRelease((unsigned int *)v47);
  if ( v54 )
    PiDmObjectRelease((unsigned int *)BugCheckParameter2);
}
