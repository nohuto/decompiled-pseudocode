/*
 * XREFs of CcInitializeCacheMapEx @ 0x1400E62E0
 * Callers:
 *     CcInitializeCacheMap @ 0x1400B24C8 (CcInitializeCacheMap.c)
 * Callees:
 *     KeSetEvent @ 0x140055E50 (KeSetEvent.c)
 *     KeWaitForSingleObject @ 0x14005C400 (KeWaitForSingleObject.c)
 *     KxReleaseQueuedSpinLock @ 0x1400690F0 (KxReleaseQueuedSpinLock.c)
 *     CcExtendVacbArray @ 0x14006CA98 (CcExtendVacbArray.c)
 *     DbgPrint @ 0x140084CC8 (DbgPrint.c)
 *     CcInitializeVolumeCacheMap @ 0x14009F728 (CcInitializeVolumeCacheMap.c)
 *     MmDisableModifiedWriteOfSection @ 0x1400A8C2C (MmDisableModifiedWriteOfSection.c)
 *     FsRtlIsNtstatusExpected @ 0x1400A9C60 (FsRtlIsNtstatusExpected.c)
 *     CcInsertIntoCleanSharedCacheMapList @ 0x1400C9B88 (CcInsertIntoCleanSharedCacheMapList.c)
 *     CcDeleteSharedCacheMap @ 0x1400CABD4 (CcDeleteSharedCacheMap.c)
 *     PsGetPagePriorityThread @ 0x1400E5CA0 (PsGetPagePriorityThread.c)
 *     KeAcquireQueuedSpinLock @ 0x1400E6BD0 (KeAcquireQueuedSpinLock.c)
 *     KeReleaseQueuedSpinLock @ 0x1400E6C40 (KeReleaseQueuedSpinLock.c)
 *     ObfReferenceObjectWithTag @ 0x1400EC370 (ObfReferenceObjectWithTag.c)
 *     RtlRaiseStatus @ 0x1400F4588 (RtlRaiseStatus.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x14015DA70 (KeBugCheckEx.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 *     MmCreateCacheManagerSection @ 0x140470450 (MmCreateCacheManagerSection.c)
 *     ObDeleteCapturedInsertInfo @ 0x1404A4794 (ObDeleteCapturedInsertInfo.c)
 *     CcCreateVacbArray @ 0x1404B1B74 (CcCreateVacbArray.c)
 *     MmExtendSection @ 0x14050494C (MmExtendSection.c)
 */

void __fastcall CcInitializeCacheMapEx(_BYTE *Object, __m128i *a2, char a3, __int64 a4, __int64 a5, char a6)
{
  struct _KTHREAD *CurrentThread; // r8
  __int64 v8; // r15
  int v9; // ebp
  char *v10; // rsi
  PVOID v11; // r12
  NTSTATUS VacbArray; // r14d
  __m128i v13; // xmm0
  __int64 v15; // xmm1_8
  int v16; // ecx
  bool v17; // zf
  __int64 v18; // rbx
  __int64 v19; // rdi
  char *PoolWithTag; // rax
  KIRQL v21; // al
  KIRQL v22; // r15
  __int64 v23; // rbp
  _QWORD *v24; // rcx
  _QWORD *v25; // rax
  int v26; // eax
  unsigned int v27; // eax
  unsigned int v28; // eax
  __int64 v29; // rax
  _QWORD *v30; // rax
  __int64 v31; // rcx
  int v32; // edi
  int CacheManagerSection; // eax
  int v34; // ebx
  NTSTATUS v35; // ecx
  KIRQL v36; // al
  KIRQL v37; // al
  __int64 v38; // rdx
  NTSTATUS v39; // eax
  KIRQL v40; // al
  struct _KEVENT *v41; // rcx
  char *v42; // rax
  KIRQL v43; // bl
  struct _KEVENT *v44; // rcx
  _QWORD *v45; // rax
  _WORD *v46; // rbx
  KIRQL v47; // al
  int PagePriorityThread; // ecx
  _QWORD *v49; // rax
  int v50; // ecx
  _QWORD *v51; // rdx
  __int64 v52; // rcx
  unsigned __int64 v53; // rcx
  __int64 v54; // rbx
  unsigned int v55; // eax
  int v57; // [rsp+34h] [rbp-84h]
  int v58; // [rsp+38h] [rbp-80h]
  int v59; // [rsp+3Ch] [rbp-7Ch]
  int v60; // [rsp+44h] [rbp-74h]
  _KPROCESS *Process; // [rsp+48h] [rbp-70h]
  __int64 v63; // [rsp+58h] [rbp-60h]
  int v64[4]; // [rsp+60h] [rbp-58h] BYREF
  __int64 v65; // [rsp+70h] [rbp-48h]
  char v66; // [rsp+E8h] [rbp+30h]

  CurrentThread = KeGetCurrentThread();
  v8 = a4;
  v9 = 0;
  v58 = 0;
  v10 = 0LL;
  v57 = 0;
  v11 = 0LL;
  Process = CurrentThread->ApcState.Process;
  VacbArray = 0;
  v13 = *a2;
  v15 = a2[1].m128i_i64[0];
  if ( CcDbgDisableDAX )
    a6 = 0;
  v60 = 0;
  v66 = a6;
  v16 = _mm_cvtsi128_si32(v13);
  v63 = (__int64)CurrentThread;
  *(__m128i *)v64 = *a2;
  if ( !v13.m128i_i64[0] )
    v16 = 1;
  *(_QWORD *)v64 = v13.m128i_i64[0];
  v17 = (CurrentThread->MiscFlags & 0x400) == 0;
  v65 = v15;
  if ( v17 )
    v9 = 1;
  v64[0] = v16;
  v59 = v9;
  if ( Object[75] )
  {
    *(_QWORD *)v64 += 0xFFFFFLL;
    v64[0] &= 0xFFF00000;
  }
  else
  {
    *(_QWORD *)v64 += 0x3FFFFLL;
    v64[0] &= 0xFFFC0000;
  }
  v18 = v65;
  v19 = *(_QWORD *)&v64[2];
  if ( *(_QWORD *)(*((_QWORD *)Object + 5) + 8LL) )
    goto LABEL_20;
  while ( 1 )
  {
    PoolWithTag = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x210uLL, 0x63536343u);
    v10 = PoolWithTag;
    if ( !PoolWithTag )
      RtlRaiseStatus(-1073741670);
    memset(PoolWithTag, 0, 0x210uLL);
    *(_DWORD *)v10 = 34603775;
    *((_QWORD *)v10 + 12) = Object;
    *((_QWORD *)v10 + 1) = v19;
    *((_QWORD *)v10 + 5) = v18;
    *((_QWORD *)v10 + 6) = v18;
    *((_DWORD *)v10 + 128) = Process[1].ThreadSeed[1];
    VacbArray = CcInitializeVolumeCacheMap((__int64)Object, (__int64 **)v10 + 63);
    if ( VacbArray < 0 )
      RtlRaiseStatus(-1073741670);
    *((_DWORD *)v10 + 70) = 1;
    *((_QWORD *)v10 + 36) = 0LL;
    *((_DWORD *)v10 + 74) = 0;
    *((_WORD *)v10 + 152) = 1;
    v10[306] = 6;
    *((_DWORD *)v10 + 77) = 0;
    *((_QWORD *)v10 + 40) = v10 + 312;
    *((_QWORD *)v10 + 39) = v10 + 312;
    *((_QWORD *)v10 + 13) = 0LL;
    if ( a3 )
      *((_DWORD *)v10 + 38) |= 4u;
    if ( (*((_DWORD *)Object + 20) & 0x20) != 0 )
      *((_DWORD *)v10 + 38) |= 0x40u;
    if ( v9 )
      *((_DWORD *)v10 + 38) |= 0x200000u;
    *((_QWORD *)v10 + 3) = v10 + 16;
    *((_QWORD *)v10 + 2) = v10 + 16;
    *((_QWORD *)v10 + 27) = a5;
    *((_QWORD *)v10 + 26) = v8;
    *((_QWORD *)v10 + 29) = v10 + 224;
    *((_QWORD *)v10 + 28) = v10 + 224;
LABEL_20:
    v21 = KeAcquireQueuedSpinLock(5uLL);
    v22 = v21;
    if ( *((_QWORD *)Object + 6) )
      break;
    v23 = *(_QWORD *)(*((_QWORD *)Object + 5) + 8LL);
    if ( v23 )
    {
      if ( (*((_DWORD *)Object + 20) & 0x20) == 0 )
        *(_DWORD *)(v23 + 152) &= ~0x40u;
      v26 = *(_DWORD *)(v23 + 152);
      if ( (v26 & 0x200000) != 0 && !v59 )
        *(_DWORD *)(v23 + 152) = v26 & 0xFFDFFFFF;
      v27 = Process[1].ThreadSeed[1];
      if ( v27 )
        *(_DWORD *)(v23 + 512) = v27;
LABEL_34:
      if ( (_BYTE)KdDebuggerEnabled && !(_BYTE)KdDebuggerNotPresent && (*(_DWORD *)(v23 + 152) & 0x80000) != 0 )
      {
        DbgPrint("CC: Reusing shared cache map that is already marked for deletion!\n");
        __debugbreak();
      }
      v28 = *(_DWORD *)(v23 + 152) & 0xFFFFFFEF;
      *(_DWORD *)(v23 + 152) = v28;
      if ( *(_QWORD *)(v23 + 88) )
      {
        if ( (v28 & 0x100) == 0 )
        {
          ++*(_DWORD *)(v23 + 4);
          KeReleaseQueuedSpinLock(5uLL, v22);
          v32 = 0;
          v57 = 1;
          goto LABEL_85;
        }
      }
      else if ( (v28 & 0x100) == 0 )
      {
        ++*(_DWORD *)(v23 + 4);
        *(_DWORD *)(v23 + 152) = v28 | 0x100;
        v29 = *(_QWORD *)(v23 + 176);
        if ( v29 )
        {
          *(_WORD *)v29 = 0;
          *(_BYTE *)(v29 + 2) = 6;
          *(_DWORD *)(v29 + 4) = 0;
          v30 = (_QWORD *)(v29 + 8);
          v30[1] = v30;
          *v30 = v30;
        }
        KeReleaseQueuedSpinLock(5uLL, v22);
        v31 = *(_QWORD *)(v23 + 168);
        v32 = 0;
        v57 = 1;
        v58 = 1;
        if ( v31 )
        {
          if ( (v66 & 1) != 0 && (*(_DWORD *)(v23 + 152) & 0x40000000) == 0
            || (*(_DWORD *)(v23 + 152) & 0x40000000) != 0
            || (v66 & 1) == 0 )
          {
            VacbArray = -1073741811;
            goto LABEL_73;
          }
          v38 = *(_QWORD *)v64;
          if ( *(__int64 *)v64 > *(_QWORD *)(v23 + 32) )
          {
            v39 = MmExtendSection(v31, v64, 1LL);
            VacbArray = v39;
            if ( v39 < 0 )
            {
              if ( !FsRtlIsNtstatusExpected(v39) )
                VacbArray = -1073741588;
              goto LABEL_73;
            }
            v38 = *(_QWORD *)v64;
          }
          VacbArray = CcExtendVacbArray(v23, v38);
          if ( VacbArray < 0 )
            goto LABEL_73;
        }
        else
        {
          CacheManagerSection = MmCreateCacheManagerSection((int)v23 + 168, (int)v64);
          *(_DWORD *)(v23 + 156) = CacheManagerSection;
          v34 = CacheManagerSection;
          if ( CacheManagerSection < 0 )
          {
            *(_QWORD *)(v23 + 168) = 0LL;
            v35 = CacheManagerSection;
LABEL_45:
            VacbArray = -1073741590;
            if ( FsRtlIsNtstatusExpected(v35) )
              VacbArray = v34;
LABEL_73:
            v43 = KeAcquireQueuedSpinLock(5uLL);
            if ( v58 )
            {
              v44 = *(struct _KEVENT **)(v23 + 176);
              if ( v44 )
                KeSetEvent(v44, 0, 0);
              *(_DWORD *)(v23 + 152) &= ~0x100u;
            }
            v17 = (*(_DWORD *)(v23 + 4))-- == 1;
            if ( !v17 || (*(_DWORD *)(v23 + 152) & 0x20) != 0 || *(_DWORD *)(v23 + 112) )
              KeReleaseQueuedSpinLock(5uLL, v43);
            else
              CcDeleteSharedCacheMap(v23, v43, 0, 0LL);
LABEL_107:
            if ( v10 )
              ExFreePoolWithTag(v10, 0x63536343u);
            if ( v11 )
              ExFreePoolWithTag(v11, 0x63506343u);
            if ( VacbArray < 0 )
              RtlRaiseStatus(VacbArray);
            return;
          }
          ObDeleteCapturedInsertInfo(*(_QWORD *)(v23 + 168));
          if ( (*(_BYTE *)(*((_QWORD *)Object + 3) + 6LL) & 1) == 0 && !*((_QWORD *)Object + 4) )
          {
            MmDisableModifiedWriteOfSection(*((_QWORD **)Object + 5));
            v36 = KeAcquireQueuedSpinLock(5uLL);
            *(_DWORD *)(v23 + 152) |= 0x200u;
            KeReleaseQueuedSpinLock(5uLL, v36);
          }
          VacbArray = CcCreateVacbArray(v23, *(_QWORD *)v64);
          if ( VacbArray < 0 )
            goto LABEL_73;
          if ( (v66 & 1) != 0 )
          {
            v37 = KeAcquireQueuedSpinLock(5uLL);
            *(_DWORD *)(v23 + 152) |= 0x40000000u;
            KeReleaseQueuedSpinLock(5uLL, v37);
          }
        }
        v40 = KeAcquireQueuedSpinLock(5uLL);
        v41 = *(struct _KEVENT **)(v23 + 176);
        v22 = v40;
        *(_DWORD *)(v23 + 152) &= ~0x100u;
        if ( v41 )
          KeSetEvent(v41, 0, 0);
        KeReleaseQueuedSpinLock(5uLL, v22);
        v58 = 0;
LABEL_85:
        if ( v10 )
        {
          ExFreePoolWithTag(v10, 0x63536343u);
          v10 = 0LL;
        }
        v46 = (_WORD *)(v23 + 376);
        if ( !*(_WORD *)(v23 + 376) )
          goto LABEL_89;
        while ( 1 )
        {
          v11 = ExAllocatePoolWithTag(NonPagedPoolNx, 0x78uLL, 0x63506343u);
          if ( !v11 )
            break;
LABEL_89:
          v32 = 1;
          v47 = KeAcquireQueuedSpinLock(5uLL);
          v22 = v47;
          if ( *((_QWORD *)Object + 6) )
          {
            v55 = *(_DWORD *)(v23 + 4);
            if ( v55 <= 1 )
              KeBugCheckEx(0x34u, 0x807uLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
            *(_DWORD *)(v23 + 4) = v55 - 1;
            goto LABEL_106;
          }
          if ( !*v46 )
            goto LABEL_94;
          if ( v11 )
          {
            v46 = v11;
            v11 = 0LL;
LABEL_94:
            memset(v46, 0, 0x78uLL);
            *v46 = 766;
            *((_QWORD *)v46 + 1) = Object;
            *((_DWORD *)v46 + 1) = 4095;
            PagePriorityThread = (unsigned __int8)PsGetPagePriorityThread(v63);
            v49 = v46 + 48;
            v50 = (*(_DWORD *)v46 ^ (PagePriorityThread << 18)) & 0x1C0000;
            *((_QWORD *)v46 + 10) = 0LL;
            *(_DWORD *)v46 ^= v50;
            v51 = *(_QWORD **)(v23 + 232);
            if ( *v51 != v23 + 224 )
              __fastfail(3u);
            *v49 = v23 + 224;
            *((_QWORD *)v46 + 13) = v51;
            *v51 = v49;
            *(_QWORD *)(v23 + 232) = v49;
            *((_QWORD *)Object + 6) = v46;
            goto LABEL_97;
          }
          KeReleaseQueuedSpinLock(5uLL, v47);
          v32 = 0;
        }
LABEL_72:
        VacbArray = -1073741670;
        if ( v57 )
          goto LABEL_73;
LABEL_97:
        if ( !v32 )
          v22 = KeAcquireQueuedSpinLock(5uLL);
        if ( !v60 && !*(_DWORD *)(v23 + 112) && *(_DWORD *)(v23 + 4) )
          CcInsertIntoCleanSharedCacheMapList(v23);
        v52 = *(_QWORD *)(v23 + 272);
        if ( v52 )
        {
          do
          {
            v53 = v52 & 0xFFFFFFFFFFFFFFFEuLL;
            v54 = *(_QWORD *)v53;
            KeSetEvent((PRKEVENT)(v53 + 8), 0, 0);
            v52 = v54;
          }
          while ( v54 );
        }
        *(_DWORD *)(v23 + 152) &= ~0x10000u;
        *(_QWORD *)(v23 + 272) = 0LL;
LABEL_106:
        KxReleaseQueuedSpinLock((volatile signed __int64 **)KeGetPcr()->NtTib.ArbitraryUserPointer + 10);
        __writecr8(v22);
        goto LABEL_107;
      }
      if ( !*(_QWORD *)(v23 + 176) )
      {
        v42 = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x18uLL, 0x76456343u);
        *(_QWORD *)(v23 + 176) = v42;
        if ( !v42 )
        {
          KeReleaseQueuedSpinLock(5uLL, v22);
          v32 = 0;
          goto LABEL_72;
        }
        *(_WORD *)v42 = 0;
        v42[2] = 6;
        *((_DWORD *)v42 + 1) = 0;
        v45 = v42 + 8;
        v45[1] = v45;
        *v45 = v45;
      }
      ++*(_DWORD *)(v23 + 4);
      KeReleaseQueuedSpinLock(5uLL, v22);
      v32 = 0;
      v57 = 1;
      KeWaitForSingleObject(*(PVOID *)(v23 + 176), Executive, 0, 0, 0LL);
      v34 = *(_DWORD *)(v23 + 156);
      if ( v34 < 0 )
      {
        v35 = *(_DWORD *)(v23 + 156);
        goto LABEL_45;
      }
      goto LABEL_85;
    }
    if ( v10 )
    {
      v24 = (_QWORD *)qword_140322FC8;
      v23 = (__int64)v10;
      v10 = 0LL;
      v25 = (_QWORD *)(v23 + 136);
      if ( *(__int64 **)qword_140322FC8 != &CcCleanSharedCacheMapList )
        __fastfail(3u);
      *v25 = &CcCleanSharedCacheMapList;
      *(_QWORD *)(v23 + 144) = v24;
      *v24 = v25;
      qword_140322FC8 = v23 + 136;
      v60 = 1;
      *(_QWORD *)(*((_QWORD *)Object + 5) + 8LL) = v23;
      ObfReferenceObjectWithTag(Object, 0x746C6644u);
      goto LABEL_34;
    }
    KeReleaseQueuedSpinLock(5uLL, v21);
    v9 = v59;
    v8 = a4;
  }
  KeReleaseQueuedSpinLock(5uLL, v21);
  if ( v10 )
    ExFreePoolWithTag(v10, 0x63536343u);
}
