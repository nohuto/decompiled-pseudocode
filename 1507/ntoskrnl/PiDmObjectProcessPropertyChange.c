/*
 * XREFs of PiDmObjectProcessPropertyChange @ 0x1404E0000
 * Callers:
 *     PiPnpRtlObjectEventWorker @ 0x1404DFCE4 (PiPnpRtlObjectEventWorker.c)
 * Callees:
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     ExfReleasePushLock @ 0x1400F35E0 (ExfReleasePushLock.c)
 *     memcmp @ 0x140172AE0 (memcmp.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 *     PnpGetObjectProperty @ 0x140437764 (PnpGetObjectProperty.c)
 *     PiDmObjectRelease @ 0x140439810 (PiDmObjectRelease.c)
 *     PiDmGetObject @ 0x140439850 (PiDmGetObject.c)
 *     PiDmGetCacheKeys @ 0x140439DB0 (PiDmGetCacheKeys.c)
 *     PiDmGetCachedKeyIndex @ 0x140439E00 (PiDmGetCachedKeyIndex.c)
 *     PiDmCacheDataDecode @ 0x140439E44 (PiDmCacheDataDecode.c)
 *     PiDmObjectAcquireExclusiveLock @ 0x1404E04DC (PiDmObjectAcquireExclusiveLock.c)
 *     PiDmCacheDataFree @ 0x1404E0850 (PiDmCacheDataFree.c)
 *     PiDmCacheDataEncode @ 0x1404E0880 (PiDmCacheDataEncode.c)
 *     PiDmGetReferencedObjectFromProperty @ 0x1405471E8 (PiDmGetReferencedObjectFromProperty.c)
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
  __int64 v13; // r8
  __int64 v14; // rbx
  unsigned int v15; // edx
  __int64 v16; // r15
  ULONG_PTR v17; // rdx
  int v18; // eax
  unsigned int v19; // ebx
  GUID *PoolWithTag; // rax
  void *v21; // rbx
  _BYTE *v22; // r14
  signed __int64 v23; // rax
  signed __int64 v24; // rcx
  signed __int64 v25; // rtt
  ULONG_PTR v26; // rbx
  struct _KTHREAD *CurrentThread; // rcx
  __int16 v28; // ax
  unsigned int v29; // r8d
  _QWORD *v30; // rdx
  __int64 v31; // r9
  __int64 v32; // rcx
  char *v33; // rdi
  signed __int64 *v34; // rbx
  __int64 v35; // rdi
  __int64 v36; // rdx
  int v37; // eax
  int v38; // eax
  signed __int64 v39; // rax
  signed __int64 v40; // rcx
  signed __int64 v41; // rtt
  ULONG_PTR v42; // rbx
  struct _KTHREAD *v43; // rcx
  __int16 v44; // ax
  int v45; // [rsp+30h] [rbp-71h]
  __int64 v46; // [rsp+68h] [rbp-39h] BYREF
  void *Buf2; // [rsp+70h] [rbp-31h] BYREF
  int v48; // [rsp+78h] [rbp-29h] BYREF
  SIZE_T NumberOfBytes; // [rsp+7Ch] [rbp-25h] BYREF
  ULONG_PTR v50; // [rsp+88h] [rbp-19h] BYREF
  void *Buf1; // [rsp+90h] [rbp-11h]
  unsigned int v52; // [rsp+98h] [rbp-9h] BYREF
  DEVPROPKEY **v53; // [rsp+A0h] [rbp-1h] BYREF
  int v55; // [rsp+100h] [rbp+5Fh]
  ULONG_PTR BugCheckParameter2; // [rsp+108h] [rbp+67h] BYREF
  char v57; // [rsp+110h] [rbp+6Fh]

  BugCheckParameter2 = a3;
  v55 = a2;
  NumberOfBytes = 0LL;
  v6 = (signed __int64 *)a3;
  v57 = 0;
  *a6 = 0;
  Object = 0;
  Buf1 = 0LL;
  v10 = 0;
  Buf2 = 0LL;
  v48 = 0;
  LODWORD(v46) = 0;
  v50 = 0LL;
  if ( a4 )
    return;
  PiDmGetCacheKeys(a1, &v53, &v52);
  if ( !v52 )
    return;
  v11 = v53;
  CachedKeyIndex = PiDmGetCachedKeyIndex((__int64)v53, v52, a5);
  v14 = CachedKeyIndex;
  if ( CachedKeyIndex >= v15 )
    return;
  if ( !v6 )
  {
    Object = PiDmGetObject(a1, a2, &BugCheckParameter2);
    if ( Object < 0 )
      return;
    v6 = (signed __int64 *)BugCheckParameter2;
    v13 = a5;
    v57 = 1;
  }
  v16 = 3 * v14;
  if ( LODWORD(v11[3 * v14 + 2]) == 1 )
  {
    Object = PnpGetObjectProperty(
               0x5A706E50u,
               0x10uLL,
               v55,
               a1,
               0LL,
               v45,
               v13,
               (__int64)&v46,
               &Buf2,
               (_DWORD *)&NumberOfBytes + 1,
               0x10000);
    if ( Object == -1073741275 )
    {
      Object = 0;
      LODWORD(v46) = 0;
      HIDWORD(NumberOfBytes) = 0;
    }
    else
    {
      v10 = HIDWORD(NumberOfBytes);
    }
  }
  PiDmObjectAcquireExclusiveLock(v6);
  if ( !LODWORD(v6[v16 + 13]) )
  {
    if ( !LODWORD(v11[3 * v14 + 2]) )
      goto LABEL_77;
    goto LABEL_22;
  }
  if ( Object < 0 || !LODWORD(v11[3 * v14 + 2]) )
    goto LABEL_22;
  v18 = PiDmCacheDataDecode((__int64)&v6[v16 + 13], &v48, 0LL, 0, (unsigned int *)&NumberOfBytes);
  Object = v18;
  if ( v18 == -1073741275 )
  {
    Object = 0;
    v48 = 0;
    if ( !(_DWORD)v46 )
    {
LABEL_20:
      v22 = a6;
      *a6 = 1;
      goto LABEL_28;
    }
LABEL_22:
    v21 = Buf2;
    goto LABEL_23;
  }
  if ( (int)(v18 + 0x80000000) >= 0 && v18 != -1073741789 )
    goto LABEL_22;
  v19 = NumberOfBytes;
  if ( !(_DWORD)NumberOfBytes )
  {
    PoolWithTag = (GUID *)Buf1;
    goto LABEL_15;
  }
  PoolWithTag = (GUID *)ExAllocatePoolWithTag(PagedPool, (unsigned int)NumberOfBytes, 0x5A706E50u);
  Buf1 = PoolWithTag;
  if ( !PoolWithTag )
  {
    Object = -1073741670;
    goto LABEL_22;
  }
LABEL_15:
  Object = PiDmCacheDataDecode((__int64)&v6[v16 + 13], &v48, PoolWithTag, v19, (unsigned int *)&NumberOfBytes);
  if ( Object < 0 || v48 != (_DWORD)v46 || (_DWORD)NumberOfBytes != v10 )
    goto LABEL_22;
  if ( !(_DWORD)NumberOfBytes )
    goto LABEL_20;
  v21 = Buf2;
  if ( !memcmp(Buf1, Buf2, (unsigned int)NumberOfBytes) )
    goto LABEL_20;
LABEL_23:
  PiDmCacheDataFree(&v6[v16 + 13]);
  if ( Object >= 0 )
  {
    if ( LODWORD(v11[v16 + 2]) != 1 )
      goto LABEL_27;
    if ( !HIDWORD(v11[v16 + 1]) )
    {
      Object = PiDmCacheDataEncode((unsigned int)v46, v21, v10, LODWORD(v11[v16 + 1]), 0, &v6[v16 + 13]);
LABEL_27:
      v22 = a6;
      goto LABEL_28;
    }
  }
LABEL_77:
  v22 = a6;
LABEL_28:
  _m_prefetchw(v6);
  v23 = *v6;
  v24 = *v6 - 16;
  if ( (*v6 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
    v24 = 0LL;
  if ( (v23 & 2) != 0
    || (v17 = BugCheckParameter2,
        v25 = *v6,
        v25 != _InterlockedCompareExchange64((volatile signed __int64 *)BugCheckParameter2, v24, v23)) )
  {
    v26 = BugCheckParameter2;
    ExfReleasePushLock((_QWORD *)BugCheckParameter2, v17);
  }
  else
  {
    v26 = BugCheckParameter2;
  }
  KeAbPostRelease(v26);
  CurrentThread = KeGetCurrentThread();
  v28 = CurrentThread->KernelApcDisable + 1;
  CurrentThread->KernelApcDisable = v28;
  if ( !v28
    && ($CD287064E7C9F7953DE243E927CFCB99 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152
    && !CurrentThread->SpecialApcDisable )
  {
    KiCheckForKernelApcDelivery();
  }
  if ( !LODWORD(v11[v16 + 2]) || *v22 )
    goto LABEL_39;
  v29 = 0;
  v30 = &PiDmAggregatedBooleanDefs;
  while ( 1 )
  {
    v31 = v30[1];
    if ( *(_DWORD *)(v31 + 16) == *(_DWORD *)(a5 + 16) )
    {
      v32 = *(_QWORD *)v31 - *(_QWORD *)a5;
      if ( *(_QWORD *)v31 == *(_QWORD *)a5 )
        v32 = *(_QWORD *)(v31 + 8) - *(_QWORD *)(a5 + 8);
      if ( !v32 && a1 == *(_DWORD *)v30 )
        break;
    }
    ++v29;
    v30 += 7;
    if ( v29 >= 3 )
      goto LABEL_39;
  }
  v33 = (char *)&PiDmAggregatedBooleanDefs + 56 * v29;
  if ( !v33
    || (int)PiDmGetReferencedObjectFromProperty(
              a1,
              v55,
              BugCheckParameter2,
              v31,
              *((_QWORD *)v33 + 2),
              *((_DWORD *)v33 + 6),
              (__int64)&v50) < 0 )
  {
    goto LABEL_39;
  }
  v34 = (signed __int64 *)v50;
  v35 = *((_QWORD *)v33 + 6);
  PiDmObjectAcquireExclusiveLock(v50);
  if ( Object < 0 || (v37 = *(_DWORD *)((char *)v34 + v35), v37 == 0x80000000) )
  {
    *(_DWORD *)((char *)v34 + v35) = 0x80000000;
    goto LABEL_64;
  }
  if ( v48 != 17 )
    goto LABEL_61;
  v36 = (__int64)Buf1;
  LOBYTE(v36) = *(_BYTE *)Buf1;
  if ( *(_BYTE *)Buf1 == 0xFF && ((_DWORD)v46 != 17 || !*(_BYTE *)Buf2) )
  {
    v38 = v37 - 1;
LABEL_63:
    *(_DWORD *)((char *)v34 + v35) = v38;
    goto LABEL_64;
  }
  if ( !(_BYTE)v36 )
  {
LABEL_61:
    if ( (_DWORD)v46 != 17 || *(_BYTE *)Buf2 != 0xFF )
      goto LABEL_64;
    v38 = v37 + 1;
    goto LABEL_63;
  }
LABEL_64:
  _m_prefetchw(v34);
  v39 = *v34;
  v40 = *v34 - 16;
  if ( (*v34 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
    v40 = 0LL;
  if ( (v39 & 2) != 0
    || (v36 = v50, v41 = *v34, v41 != _InterlockedCompareExchange64((volatile signed __int64 *)v50, v40, v39)) )
  {
    v42 = v50;
    ExfReleasePushLock((_QWORD *)v50, v36);
  }
  else
  {
    v42 = v50;
  }
  KeAbPostRelease(v42);
  v43 = KeGetCurrentThread();
  v44 = v43->KernelApcDisable + 1;
  v43->KernelApcDisable = v44;
  if ( !v44
    && ($CD287064E7C9F7953DE243E927CFCB99 *)v43->ApcState.ApcListHead[0].Flink != &v43->152
    && !v43->SpecialApcDisable )
  {
    KiCheckForKernelApcDelivery();
  }
LABEL_39:
  if ( Buf1 )
    ExFreePoolWithTag(Buf1, 0x5A706E50u);
  if ( Buf2 )
    ExFreePoolWithTag(Buf2, 0x5A706E50u);
  if ( v50 )
    PiDmObjectRelease((unsigned int *)v50);
  if ( v57 )
    PiDmObjectRelease((unsigned int *)BugCheckParameter2);
}
