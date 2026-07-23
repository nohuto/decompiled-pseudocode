/*
 * XREFs of AlpcpCreateView @ 0x140475280
 * Callers:
 *     AlpcpCreateSectionView @ 0x140474264 (AlpcpCreateSectionView.c)
 *     AlpcpReceiveView @ 0x140474CA0 (AlpcpReceiveView.c)
 *     AlpcpMapLegacyPortRemoteView @ 0x1405820A8 (AlpcpMapLegacyPortRemoteView.c)
 * Callees:
 *     ObfReferenceObject @ 0x14004E630 (ObfReferenceObject.c)
 *     ObfReferenceObjectWithTag @ 0x14004E670 (ObfReferenceObjectWithTag.c)
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     ExfAcquirePushLockSharedEx @ 0x1400F2F00 (ExfAcquirePushLockSharedEx.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400F30E0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfReleasePushLockShared @ 0x1400F3600 (ExfReleasePushLockShared.c)
 *     ExfTryToWakePushLock @ 0x1400F36F8 (ExfTryToWakePushLock.c)
 *     KeBugCheckEx @ 0x140182750 (KeBugCheckEx.c)
 *     RtlpInterlockedPushEntrySList @ 0x14018B480 (RtlpInterlockedPushEntrySList.c)
 *     memset @ 0x140195A80 (memset.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     MmMapViewOfSection @ 0x140466864 (MmMapViewOfSection.c)
 *     AlpcpAllocateBlob @ 0x140475B60 (AlpcpAllocateBlob.c)
 *     AlpcpDestroyBlob @ 0x140476564 (AlpcpDestroyBlob.c)
 *     MiMapViewOfSection @ 0x1404BA540 (MiMapViewOfSection.c)
 */

__int64 __fastcall AlpcpCreateView(ULONG_PTR BugCheckParameter2, unsigned __int64 *Object, ULONG_PTR *a3, __int64 a4)
{
  ULONG_PTR v6; // r15
  ULONG_PTR v7; // rdi
  __int64 v8; // rax
  __int64 v9; // r9
  __int64 v10; // rbx
  signed __int64 BugCheckParameter4; // rax
  signed __int64 *v12; // r12
  __int64 v13; // rbx
  __int64 v14; // r9
  unsigned int v15; // ebp
  unsigned __int64 v16; // rax
  void *v17; // rbp
  void *Blob; // rax
  ULONG_PTR v19; // r14
  int v20; // eax
  int v21; // eax
  signed __int64 v22; // rax
  bool v23; // cc
  ULONG_PTR v24; // rax
  ULONG_PTR v25; // r15
  __int64 v26; // rax
  bool v27; // zf
  __int64 v28; // rdx
  __int64 v29; // rax
  PVOID v30; // rbp
  __int64 v31; // r9
  __int64 v32; // rax
  bool v33; // zf
  __int64 v34; // rdx
  __int64 v35; // rax
  unsigned __int64 *v36; // rbp
  __int64 v37; // rax
  __int64 v38; // r9
  __int64 v39; // r13
  unsigned __int64 *v40; // rax
  ULONG_PTR *v41; // rcx
  _QWORD *v42; // r13
  unsigned __int64 *v43; // rbp
  __int64 v44; // r9
  __int64 v45; // rax
  __int64 v46; // r9
  __int64 v47; // r15
  char v48; // cl
  int v49; // esi
  signed __int64 v50; // rcx
  __int64 v51; // rbx
  int (__fastcall *v52)(ULONG_PTR); // rax
  _SLIST_HEADER *v53; // r8
  __int64 v55; // [rsp+60h] [rbp-68h] BYREF
  PVOID Objecta; // [rsp+68h] [rbp-60h]
  ULONG_PTR BugCheckParameter2a; // [rsp+70h] [rbp-58h]
  __int64 v58; // [rsp+D0h] [rbp+8h] BYREF
  unsigned __int64 *v59; // [rsp+D8h] [rbp+10h]
  ULONG_PTR *v60; // [rsp+E0h] [rbp+18h]
  __int64 v61; // [rsp+E8h] [rbp+20h] BYREF

  v60 = a3;
  v59 = Object;
  *a3 = 0LL;
  v6 = *(_QWORD *)(BugCheckParameter2 + 16);
  BugCheckParameter2a = v6;
  v7 = v6 - 48;
  v8 = KeAbPreAcquire(v6 - 48 + 32, 0LL, 0LL, a4);
  v10 = v8;
  if ( _interlockedbittestandset64((volatile signed __int32 *)(v6 - 48 + 32), 0LL) )
    ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(v7 + 32), v8, v7 + 32, v9);
  if ( v10 )
    *(_BYTE *)(v10 + 26) |= 1u;
  *(_BYTE *)(v7 + 16) |= 1u;
  BugCheckParameter4 = _InterlockedExchangeAdd64((volatile signed __int64 *)(v7 + 24), 0x10000uLL) + 0x10000;
  if ( BugCheckParameter4 <= 0 )
    KeBugCheckEx(0x18u, 0LL, v6, 0x26uLL, BugCheckParameter4);
  v12 = (signed __int64 *)(Object + 44);
  v13 = KeAbPreAcquire((ULONG_PTR)(Object + 44), 0LL, 0LL, v9);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)Object + 44, 17LL, 0LL) )
    ExfAcquirePushLockSharedEx(Object + 44, v13, (ULONG_PTR)(Object + 44), v14);
  if ( v13 )
    *(_BYTE *)(v13 + 26) |= 1u;
  if ( (Object[52] & 0x20) != 0 )
  {
    v15 = -1073741769;
  }
  else
  {
    v16 = Object[38];
    v17 = (void *)Object[3];
    Objecta = v17;
    if ( v16 && v16 < *(_QWORD *)(BugCheckParameter2 + 40) )
    {
      v15 = -1073741756;
    }
    else if ( (*(_DWORD *)(BugCheckParameter2 + 48) & 1) != 0
           && (*(_DWORD *)(BugCheckParameter2 + 52) >= 2u || *(_QWORD *)(BugCheckParameter2 + 80)) )
    {
      v15 = -1073741790;
    }
    else
    {
      Blob = (void *)AlpcpAllocateBlob(&AlpcViewType, 96LL, 0LL);
      v19 = (ULONG_PTR)Blob;
      if ( Blob )
      {
        memset(Blob, 0, 0x60uLL);
        v55 = *(_QWORD *)(BugCheckParameter2 + 24);
        v61 = *(_QWORD *)(BugCheckParameter2 + 40);
        v20 = *(_DWORD *)(v6 + 48);
        v58 = 0LL;
        if ( (v20 & 2) != 0 )
          v21 = MiMapViewOfSection(
                  *(_QWORD *)v6,
                  (_DWORD)v17,
                  (unsigned int)&v58,
                  0,
                  0LL,
                  (__int64)&v55,
                  (__int64)&v61,
                  2,
                  0,
                  4,
                  2,
                  v19 + 56);
        else
          v21 = MmMapViewOfSection(
                  **(_QWORD **)(BugCheckParameter2 + 16),
                  (int)v17,
                  (int)&v58,
                  0,
                  0LL,
                  (__int64)&v55,
                  (__int64)&v61,
                  2,
                  0,
                  4);
        v15 = v21;
        if ( v21 >= 0 )
        {
          v25 = v19 - 48;
          _m_prefetchw((const void *)(v19 - 48 + 24));
          v26 = *(_QWORD *)(v19 - 48 + 24);
          v27 = v26 == 0;
          if ( v26 <= 0 )
          {
LABEL_30:
            if ( !v27 )
              KeBugCheckEx(0x18u, 0LL, v19, 0x20uLL, v26);
          }
          else
          {
            while ( 1 )
            {
              v28 = v26;
              v26 = _InterlockedCompareExchange64((volatile signed __int64 *)(v25 + 24), v26 + 1, v26);
              if ( v26 == v28 )
                break;
              v27 = v26 == 0;
              if ( v26 <= 0 )
                goto LABEL_30;
            }
          }
          v29 = v58;
          v30 = Objecta;
          *(_DWORD *)(v19 + 72) |= 1u;
          *(_QWORD *)(v19 + 40) = v29;
          *(_QWORD *)(v19 + 48) = v61;
          ObfReferenceObjectWithTag(v30, 0x63706C41u);
          *(_QWORD *)(v19 + 32) = v30;
          ObfReferenceObject(Object);
          *(_QWORD *)(v19 + 24) = Object;
          _m_prefetchw((const void *)(BugCheckParameter2 - 24));
          v32 = *(_QWORD *)(BugCheckParameter2 - 24);
          v33 = v32 == 0;
          if ( v32 <= 0 )
          {
LABEL_34:
            if ( !v33 )
              KeBugCheckEx(0x18u, 0LL, BugCheckParameter2, 0x20uLL, v32);
          }
          else
          {
            while ( 1 )
            {
              v34 = v32;
              v32 = _InterlockedCompareExchange64((volatile signed __int64 *)(BugCheckParameter2 - 24), v32 + 1, v32);
              if ( v32 == v34 )
                break;
              v33 = v32 == 0;
              if ( v32 <= 0 )
                goto LABEL_34;
            }
          }
          *(_QWORD *)(v19 + 16) = BugCheckParameter2;
          v35 = *(_QWORD *)(BugCheckParameter2 + 64);
          v36 = Object + 41;
          *(_QWORD *)v19 = BugCheckParameter2 + 56;
          *(_QWORD *)(v19 + 8) = v35;
          **(_QWORD **)(BugCheckParameter2 + 64) = v19;
          *(_QWORD *)(BugCheckParameter2 + 64) = v19;
          ++*(_DWORD *)(BugCheckParameter2 + 52);
          v37 = KeAbPreAcquire((ULONG_PTR)(Object + 41), 0LL, 0LL, v31);
          v39 = v37;
          if ( _interlockedbittestandset64((volatile signed __int32 *)v36, 0LL) )
            ExfAcquirePushLockExclusiveEx(v36, v37, (ULONG_PTR)v36, v38);
          if ( v39 )
            *(_BYTE *)(v39 + 26) |= 1u;
          v40 = v59 + 42;
          v41 = (ULONG_PTR *)v59[43];
          *(_QWORD *)v25 = v59 + 42;
          *(_QWORD *)(v25 + 8) = v41;
          if ( (unsigned __int64 *)*v41 != v40 )
            __fastfail(3u);
          *v41 = v25;
          v40[1] = v25;
          if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v36, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
            ExfTryToWakePushLock((volatile signed __int64 *)v36);
          KeAbPostRelease((ULONG_PTR)v36);
          v42 = Objecta;
          v43 = (unsigned __int64 *)((char *)Objecta + 1592);
          v45 = KeAbPreAcquire((ULONG_PTR)Objecta + 1592, 0LL, 0LL, v44);
          v47 = v45;
          if ( _interlockedbittestandset64((volatile signed __int32 *)v43, 0LL) )
            ExfAcquirePushLockExclusiveEx(v43, v45, (ULONG_PTR)v43, v46);
          if ( v47 )
            *(_BYTE *)(v47 + 26) |= 1u;
          *(_QWORD *)(v19 + 88) = v42[201];
          *(_QWORD *)(v19 + 80) = v42 + 200;
          *(_QWORD *)v42[201] = v19 + 80;
          v42[201] = v19 + 80;
          if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v43, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
            ExfTryToWakePushLock((volatile signed __int64 *)v43);
          KeAbPostRelease((ULONG_PTR)v43);
          if ( (*(_DWORD *)(BugCheckParameter2 + 48) & 1) != 0 )
            *(_QWORD *)(BugCheckParameter2 + 80) = v19;
          v6 = BugCheckParameter2a;
          *v60 = v19;
          v15 = 0;
        }
        else
        {
          v22 = _InterlockedExchangeAdd64((volatile signed __int64 *)(v19 - 24), 0xFFFFFFFFFFFFFFFFuLL);
          v23 = v22 <= 1;
          v24 = v22 - 1;
          if ( v23 )
          {
            if ( v24 )
              KeBugCheckEx(0x18u, 0LL, v19, 0x21uLL, v24);
            AlpcpDestroyBlob(v19);
          }
        }
      }
      else
      {
        v15 = -1073741670;
      }
    }
  }
  if ( _InterlockedCompareExchange64(v12, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared(v12);
  KeAbPostRelease((ULONG_PTR)v12);
  v48 = *(_BYTE *)(v7 + 16);
  v49 = 0;
  if ( (v48 & 1) != 0 )
  {
    v49 = 0x10000 - *(__int16 *)(v7 + 18);
    *(_WORD *)(v7 + 18) = 0;
    *(_BYTE *)(v7 + 16) = v48 & 0xFE;
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v7 + 32), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)(v7 + 32));
  KeAbPostRelease(v7 + 32);
  if ( v49 > 0 )
  {
    v50 = -v49 + _InterlockedExchangeAdd64((volatile signed __int64 *)(v7 + 24), -v49);
    if ( v50 <= 0 )
    {
      if ( v50 )
        KeBugCheckEx(0x18u, 0LL, v6, 0x28uLL, v50);
      v51 = AlpcpRegisteredTypes[*(unsigned __int8 *)(v7 + 17)];
      v52 = *(int (__fastcall **)(ULONG_PTR))(v51 + 32);
      if ( !v52 || v52(v6) >= 0 )
      {
        if ( (*(_BYTE *)(v7 + 16) & 2) != 0 )
        {
          v53 = &AlpcpLookasides + 8 * (unsigned __int64)*(unsigned int *)(v51 + 8);
          ++*((_DWORD *)&v53[1].HeaderX64 + 3);
          if ( LOWORD(v53->Alignment) < LOWORD(v53[1].Alignment) )
          {
            RtlpInterlockedPushEntrySList(v53, (PSLIST_ENTRY)v7);
          }
          else
          {
            ++LODWORD(v53[2].Alignment);
            ((void (__fastcall *)(ULONG_PTR))v53[3].Region)(v7);
          }
        }
        else if ( *(_QWORD *)(v51 + 40) )
        {
          (*((void (__fastcall **)(ULONG_PTR))&AlpcpLookasides + 16 * (unsigned __int64)*(unsigned int *)(v51 + 8) + 7))(v7);
        }
        else
        {
          ExFreePoolWithTag((PVOID)v7, *(_DWORD *)(v51 + 4));
        }
      }
    }
  }
  return v15;
}
