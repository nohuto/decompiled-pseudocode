/*
 * XREFs of PiDmObjectProcessPropertyChange @ 0x14045A798
 * Callers:
 *     PiPnpRtlObjectEventWorker @ 0x14045A4D8 (PiPnpRtlObjectEventWorker.c)
 * Callees:
 *     ExfReleasePushLock @ 0x1400309C0 (ExfReleasePushLock.c)
 *     KeAbPostRelease @ 0x140042090 (KeAbPostRelease.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140088F60 (KiLeaveCriticalRegionUnsafe.c)
 *     memcmp @ 0x140144AB0 (memcmp.c)
 *     ExAllocatePoolWithTag @ 0x140238380 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 *     PiDmObjectRelease @ 0x14043D3D0 (PiDmObjectRelease.c)
 *     PiDmGetObject @ 0x14043D410 (PiDmGetObject.c)
 *     PiDmGetCacheKeys @ 0x14043D898 (PiDmGetCacheKeys.c)
 *     PiDmGetCachedKeyIndex @ 0x14043D8F0 (PiDmGetCachedKeyIndex.c)
 *     PiDmCacheDataDecode @ 0x14043E09C (PiDmCacheDataDecode.c)
 *     PnpGetObjectProperty @ 0x14043ED84 (PnpGetObjectProperty.c)
 *     PiDmObjectAcquireExclusiveLock @ 0x14045AC18 (PiDmObjectAcquireExclusiveLock.c)
 *     PiDmCacheDataFree @ 0x14045ACDC (PiDmCacheDataFree.c)
 *     PiDmCacheDataEncode @ 0x14045AD0C (PiDmCacheDataEncode.c)
 *     PiDmGetReferencedObjectFromProperty @ 0x14045CC84 (PiDmGetReferencedObjectFromProperty.c)
 */

void __fastcall PiDmObjectProcessPropertyChange(
        unsigned int a1,
        __int64 a2,
        ULONG_PTR a3,
        __int64 a4,
        __int64 a5,
        _BYTE *a6)
{
  signed __int64 *v6; // rsi
  int Object; // edi
  unsigned int v10; // r12d
  DEVPROPKEY **v11; // r15
  unsigned int CachedKeyIndex; // eax
  __int64 v13; // rbx
  unsigned int v14; // edx
  __int64 v15; // r14
  int v16; // eax
  unsigned int v17; // ebx
  GUID *PoolWithTag; // rax
  void *v19; // rbx
  _BYTE *v20; // r12
  signed __int64 v21; // rax
  signed __int64 v22; // rcx
  signed __int64 v23; // rtt
  ULONG_PTR v24; // rbx
  unsigned int v25; // r8d
  _QWORD *v26; // rdx
  __int64 v27; // r9
  __int64 v28; // rcx
  char *v29; // rsi
  signed __int64 *v30; // rbx
  __int64 v31; // rsi
  int v32; // eax
  int v33; // eax
  signed __int64 v34; // rax
  signed __int64 v35; // rcx
  signed __int64 v36; // rtt
  ULONG_PTR v37; // rbx
  int v38; // [rsp+30h] [rbp-71h]
  __int64 v39; // [rsp+68h] [rbp-39h] BYREF
  void *Buf2; // [rsp+70h] [rbp-31h] BYREF
  int v41; // [rsp+78h] [rbp-29h] BYREF
  SIZE_T NumberOfBytes; // [rsp+7Ch] [rbp-25h] BYREF
  ULONG_PTR v43; // [rsp+88h] [rbp-19h] BYREF
  void *Buf1; // [rsp+90h] [rbp-11h]
  unsigned int v45; // [rsp+98h] [rbp-9h] BYREF
  DEVPROPKEY **v46; // [rsp+A0h] [rbp-1h] BYREF
  ULONG_PTR BugCheckParameter2; // [rsp+108h] [rbp+67h] BYREF
  char v50; // [rsp+110h] [rbp+6Fh]

  BugCheckParameter2 = a3;
  NumberOfBytes = 0LL;
  v6 = (signed __int64 *)a3;
  v50 = 0;
  *a6 = 0;
  Object = 0;
  Buf1 = 0LL;
  v10 = 0;
  Buf2 = 0LL;
  v41 = 0;
  LODWORD(v39) = 0;
  v43 = 0LL;
  if ( a4 )
    return;
  PiDmGetCacheKeys(a1, &v46, &v45);
  if ( !v45 )
    return;
  v11 = v46;
  CachedKeyIndex = PiDmGetCachedKeyIndex((__int64)v46, v45, a5);
  v13 = CachedKeyIndex;
  if ( CachedKeyIndex >= v14 )
    return;
  if ( !v6 )
  {
    Object = PiDmGetObject(a1, a2, &BugCheckParameter2);
    if ( Object < 0 )
      return;
    v6 = (signed __int64 *)BugCheckParameter2;
    v50 = 1;
  }
  v15 = 3 * v13;
  if ( LODWORD(v11[3 * v13 + 2]) == 1 )
  {
    Object = PnpGetObjectProperty(
               0x5A706E50u,
               0x10uLL,
               a2,
               a1,
               0LL,
               v38,
               a5,
               (__int64)&v39,
               &Buf2,
               (_DWORD *)&NumberOfBytes + 1,
               0x10000);
    if ( Object == -1073741275 )
    {
      Object = 0;
      LODWORD(v39) = 0;
      HIDWORD(NumberOfBytes) = 0;
    }
    else
    {
      v10 = HIDWORD(NumberOfBytes);
    }
  }
  PiDmObjectAcquireExclusiveLock(v6);
  if ( LODWORD(v6[v15 + 13]) )
  {
    if ( Object < 0 || !LODWORD(v11[3 * v13 + 2]) )
      goto LABEL_30;
    v16 = PiDmCacheDataDecode((__int64)&v6[v15 + 13], &v41, 0LL, 0, (unsigned int *)&NumberOfBytes);
    Object = v16;
    if ( v16 == -1073741275 )
    {
      Object = 0;
      v41 = 0;
      if ( !(_DWORD)v39 )
        goto LABEL_20;
    }
    else
    {
      if ( (int)(v16 + 0x80000000) >= 0 && v16 != -1073741789 )
        goto LABEL_30;
      v17 = NumberOfBytes;
      if ( (_DWORD)NumberOfBytes )
      {
        PoolWithTag = (GUID *)ExAllocatePoolWithTag(PagedPool, (unsigned int)NumberOfBytes, 0x5A706E50u);
        Buf1 = PoolWithTag;
        if ( !PoolWithTag )
        {
          Object = -1073741670;
          goto LABEL_30;
        }
      }
      else
      {
        PoolWithTag = (GUID *)Buf1;
      }
      Object = PiDmCacheDataDecode((__int64)&v6[v15 + 13], &v41, PoolWithTag, v17, (unsigned int *)&NumberOfBytes);
      if ( Object >= 0 && v41 == (_DWORD)v39 && (_DWORD)NumberOfBytes == v10 )
      {
        if ( (_DWORD)NumberOfBytes )
        {
          v19 = Buf2;
          if ( memcmp(Buf1, Buf2, (unsigned int)NumberOfBytes) )
          {
LABEL_31:
            PiDmCacheDataFree(&v6[v15 + 13]);
            if ( Object >= 0 && LODWORD(v11[v15 + 2]) == 1 && !HIDWORD(v11[v15 + 1]) )
              Object = PiDmCacheDataEncode((unsigned int)v39, v19, v10, LODWORD(v11[v15 + 1]), 0, &v6[v15 + 13]);
            goto LABEL_35;
          }
        }
LABEL_20:
        v20 = a6;
        *a6 = 1;
        goto LABEL_36;
      }
    }
LABEL_30:
    v19 = Buf2;
    goto LABEL_31;
  }
  if ( LODWORD(v11[3 * v13 + 2]) )
    goto LABEL_30;
LABEL_35:
  v20 = a6;
LABEL_36:
  _m_prefetchw(v6);
  v21 = *v6;
  if ( (*v6 & 0xFFFFFFFFFFFFFFF0uLL) > 0x10 )
    v22 = v21 - 16;
  else
    v22 = 0LL;
  if ( (v21 & 2) != 0
    || (v23 = *v6, v23 != _InterlockedCompareExchange64((volatile signed __int64 *)BugCheckParameter2, v22, v21)) )
  {
    v24 = BugCheckParameter2;
    ExfReleasePushLock((_QWORD *)BugCheckParameter2);
  }
  else
  {
    v24 = BugCheckParameter2;
  }
  KeAbPostRelease(v24);
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  if ( !LODWORD(v11[v15 + 2]) || *v20 )
    goto LABEL_21;
  v25 = 0;
  v26 = &PiDmAggregatedBooleanDefs;
  while ( 1 )
  {
    v27 = v26[1];
    if ( *(_DWORD *)(v27 + 16) == *(_DWORD *)(a5 + 16) )
    {
      v28 = *(_QWORD *)v27 - *(_QWORD *)a5;
      if ( *(_QWORD *)v27 == *(_QWORD *)a5 )
        v28 = *(_QWORD *)(v27 + 8) - *(_QWORD *)(a5 + 8);
      if ( !v28 && a1 == *(_DWORD *)v26 )
        break;
    }
    ++v25;
    v26 += 7;
    if ( v25 >= 3 )
      goto LABEL_21;
  }
  v29 = (char *)&PiDmAggregatedBooleanDefs + 56 * v25;
  if ( !v29
    || (int)PiDmGetReferencedObjectFromProperty(
              a1,
              a2,
              BugCheckParameter2,
              v27,
              *((_QWORD *)v29 + 2),
              *((_DWORD *)v29 + 6),
              (__int64)&v43) < 0 )
  {
    goto LABEL_21;
  }
  v30 = (signed __int64 *)v43;
  v31 = *((_QWORD *)v29 + 6);
  PiDmObjectAcquireExclusiveLock(v43);
  if ( Object < 0 || (v32 = *(_DWORD *)((char *)v30 + v31), v32 == 0x80000000) )
  {
    *(_DWORD *)((char *)v30 + v31) = 0x80000000;
    goto LABEL_64;
  }
  if ( v41 != 17 )
    goto LABEL_61;
  if ( *(_BYTE *)Buf1 == 0xFF && ((_DWORD)v39 != 17 || !*(_BYTE *)Buf2) )
  {
    v33 = v32 - 1;
    goto LABEL_63;
  }
  if ( !*(_BYTE *)Buf1 )
  {
LABEL_61:
    if ( (_DWORD)v39 == 17 && *(_BYTE *)Buf2 == 0xFF )
    {
      v33 = v32 + 1;
LABEL_63:
      *(_DWORD *)((char *)v30 + v31) = v33;
    }
  }
LABEL_64:
  _m_prefetchw(v30);
  v34 = *v30;
  if ( (*v30 & 0xFFFFFFFFFFFFFFF0uLL) > 0x10 )
    v35 = v34 - 16;
  else
    v35 = 0LL;
  if ( (v34 & 2) != 0 || (v36 = *v30, v36 != _InterlockedCompareExchange64((volatile signed __int64 *)v43, v35, v34)) )
  {
    v37 = v43;
    ExfReleasePushLock((_QWORD *)v43);
  }
  else
  {
    v37 = v43;
  }
  KeAbPostRelease(v37);
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
LABEL_21:
  if ( Buf1 )
    ExFreePoolWithTag(Buf1, 0x5A706E50u);
  if ( Buf2 )
    ExFreePoolWithTag(Buf2, 0x5A706E50u);
  if ( v43 )
    PiDmObjectRelease((unsigned int *)v43);
  if ( v50 )
    PiDmObjectRelease((unsigned int *)BugCheckParameter2);
}
