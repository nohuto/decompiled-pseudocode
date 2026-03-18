/*
 * XREFs of EtwpUpdateDisallowedGuids @ 0x1404CF680
 * Callers:
 *     EtwpUpdateDisallowList @ 0x1404C6270 (EtwpUpdateDisallowList.c)
 * Callees:
 *     ExfAcquirePushLockExclusiveEx @ 0x140020CE0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x140030AD8 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x140042090 (KeAbPostRelease.c)
 *     KeAbPreAcquire @ 0x140042DA0 (KeAbPreAcquire.c)
 *     KeWaitForSingleObject @ 0x140081870 (KeWaitForSingleObject.c)
 *     KeReleaseMutex @ 0x140087240 (KeReleaseMutex.c)
 *     memcmp @ 0x140144AB0 (memcmp.c)
 *     qsort @ 0x140144B80 (qsort.c)
 *     memmove @ 0x140166980 (memmove.c)
 *     ExAllocatePoolWithTag @ 0x140238380 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 *     EtwpDisallowedGuidRemoval @ 0x1403B5278 (EtwpDisallowedGuidRemoval.c)
 *     EtwpDisallowedGuidAddition @ 0x1404CFA30 (EtwpDisallowedGuidAddition.c)
 */

__int64 __fastcall EtwpUpdateDisallowedGuids(
        __int64 a1,
        unsigned __int16 a2,
        const void *a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        _DWORD *a7)
{
  unsigned int v7; // ebx
  unsigned int v11; // esi
  SIZE_T v12; // rdi
  char *PoolWithTag; // rax
  char *v14; // r15
  unsigned int v15; // r8d
  __int64 v16; // rdx
  __int64 v17; // rcx
  unsigned __int16 v18; // ax
  char *v19; // rdi
  char *v20; // r14
  char *v21; // rsi
  char *v22; // r12
  int v23; // eax
  PVOID *v24; // rax
  PVOID **v25; // rcx
  unsigned __int64 *v26; // rdi
  __int64 v27; // rax
  __int64 v28; // rsi
  void *v29; // r14
  PVOID *v30; // rax
  _QWORD *v31; // rsi
  _QWORD *v32; // rdi
  __int64 v33; // rcx
  _QWORD *v34; // rax
  PVOID *v35; // rax
  _QWORD *v36; // rsi
  PVOID *v38; // rax
  PVOID **v39; // rcx
  PVOID *v40; // rax
  PVOID **v41; // rcx
  _OWORD **v42; // rdi
  _OWORD *v43; // rcx
  void **v44; // rax
  PVOID *v45; // rax
  PVOID **v46; // rcx
  PVOID *v47; // rax
  _QWORD *v48; // rdi
  _QWORD *v49; // rcx
  __int64 v50; // rdx
  _QWORD *v51; // rax
  PVOID *v52; // rax
  _QWORD *v53; // rdi
  _QWORD *v54; // rcx
  __int64 v55; // rdx
  _QWORD *v56; // rax
  PVOID P; // [rsp+30h] [rbp-20h] BYREF
  PVOID *p_P; // [rsp+38h] [rbp-18h]
  PVOID v59; // [rsp+40h] [rbp-10h] BYREF
  PVOID *v60; // [rsp+48h] [rbp-8h]
  struct _KMUTANT *Mutex; // [rsp+A8h] [rbp+58h]

  v7 = 0;
  if ( a2 > 0x200u )
    return 3221225485LL;
  p_P = &P;
  P = &P;
  v60 = &v59;
  v59 = &v59;
  if ( a2 )
  {
    v11 = a2;
    v12 = 16LL * a2;
    PoolWithTag = (char *)ExAllocatePoolWithTag(PagedPool, v12, 0x64777445u);
    v14 = PoolWithTag;
    if ( !PoolWithTag )
    {
      v7 = -1073741670;
      goto LABEL_65;
    }
    memmove(PoolWithTag, a3, v12);
    qsort(v14, v11, 0x10uLL, (int (__cdecl *)(const void *, const void *))EtwpCompareGuid);
    v15 = 0;
    if ( a2 != 1 )
    {
      do
      {
        v16 = 16LL * v15;
        v17 = *(_QWORD *)&v14[v16] - *(_QWORD *)&v14[v16 + 16];
        if ( !v17 )
          v17 = *(_QWORD *)&v14[v16 + 8] - *(_QWORD *)&v14[v16 + 24];
        if ( !v17 )
        {
          ExFreePoolWithTag(v14, 0);
          v7 = -1073741811;
          goto LABEL_65;
        }
        ++v15;
      }
      while ( v15 < (unsigned int)a2 - 1 );
    }
  }
  else
  {
    v14 = 0LL;
  }
  Mutex = (struct _KMUTANT *)(a1 + 648);
  KeWaitForSingleObject((PVOID)(a1 + 648), Executive, 0, 0, 0LL);
  v18 = *(_WORD *)(a1 + 896);
  if ( v18 )
  {
    v19 = *(char **)(a1 + 904);
    v20 = &v19[16 * v18];
  }
  else
  {
    v19 = 0LL;
    v20 = 0LL;
  }
  if ( a2 )
  {
    v21 = v14;
    v22 = &v14[16 * a2];
  }
  else
  {
    v21 = 0LL;
    v22 = 0LL;
  }
  if ( v19 >= v20 )
  {
LABEL_20:
    while ( v21 < v22 )
    {
      v24 = (PVOID *)ExAllocatePoolWithTag(PagedPool, 0x18uLL, 0x74777445u);
      if ( !v24 )
        goto LABEL_64;
      v24[2] = v21;
      v25 = (PVOID **)p_P;
      *v24 = &P;
      v24[1] = v25;
      if ( *v25 != &P )
        __fastfail(3u);
      *v25 = v24;
      v21 += 16;
      p_P = v24;
    }
    v26 = (unsigned __int64 *)(a1 + 704);
    v27 = KeAbPreAcquire(a1 + 704, 0LL, 0LL);
    v28 = v27;
    if ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 704), 0LL) )
      ExfAcquirePushLockExclusiveEx(v26, v27, (ULONG_PTR)v26);
    if ( v28 )
      *(_BYTE *)(v28 + 26) |= 1u;
    v29 = *(void **)(a1 + 904);
    *(_QWORD *)(a1 + 904) = v14;
    *(_WORD *)(a1 + 896) = a2;
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v26, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)v26);
    KeAbPostRelease((ULONG_PTR)v26);
    KeReleaseMutex((PRKMUTEX)(a1 + 648), 0);
    v30 = (PVOID *)P;
    v31 = P;
    while ( v30 != &P )
    {
      v32 = v31;
      v31 = (_QWORD *)*v31;
      EtwpDisallowedGuidAddition(v32[2], a7);
      v33 = *v32;
      v34 = (_QWORD *)v32[1];
      if ( *(_QWORD **)(*v32 + 8LL) != v32 || (_QWORD *)*v34 != v32 )
        __fastfail(3u);
      *v34 = v33;
      *(_QWORD *)(v33 + 8) = v34;
      ExFreePoolWithTag(v32, 0);
      v30 = (PVOID *)P;
    }
    v35 = (PVOID *)v59;
    v36 = v59;
    while ( v35 != &v59 )
    {
      v42 = (_OWORD **)v36;
      v36 = (_QWORD *)*v36;
      EtwpDisallowedGuidRemoval(v42[2], a7);
      v43 = *v42;
      v44 = (void **)v42[1];
      if ( *((_OWORD ***)*v42 + 1) != v42 || *v44 != v42 )
        __fastfail(3u);
      *v44 = v43;
      *((_QWORD *)v43 + 1) = v44;
      ExFreePoolWithTag(v42, 0);
      v35 = (PVOID *)v59;
    }
    if ( v29 )
      ExFreePoolWithTag(v29, 0);
    return v7;
  }
  while ( v21 < v22 )
  {
    v23 = memcmp(v19, v21, 0x10uLL);
    if ( v23 )
    {
      if ( v23 < 0 )
      {
        v40 = (PVOID *)ExAllocatePoolWithTag(PagedPool, 0x18uLL, 0x74777445u);
        if ( !v40 )
          goto LABEL_64;
        v40[2] = v19;
        v41 = (PVOID **)v60;
        *v40 = &v59;
        v40[1] = v41;
        if ( *v41 != &v59 )
          __fastfail(3u);
        *v41 = v40;
        v19 += 16;
        v60 = v40;
        goto LABEL_18;
      }
      v38 = (PVOID *)ExAllocatePoolWithTag(PagedPool, 0x18uLL, 0x74777445u);
      if ( !v38 )
        goto LABEL_64;
      v38[2] = v21;
      v39 = (PVOID **)p_P;
      *v38 = &P;
      v38[1] = v39;
      if ( *v39 != &P )
        __fastfail(3u);
      *v39 = v38;
      p_P = v38;
    }
    else
    {
      v19 += 16;
    }
    v21 += 16;
LABEL_18:
    if ( v19 >= v20 )
      goto LABEL_19;
  }
  while ( 1 )
  {
LABEL_19:
    if ( v19 >= v20 )
      goto LABEL_20;
    v45 = (PVOID *)ExAllocatePoolWithTag(PagedPool, 0x18uLL, 0x74777445u);
    if ( !v45 )
      break;
    v45[2] = v19;
    v46 = (PVOID **)v60;
    *v45 = &v59;
    v45[1] = v46;
    if ( *v46 != &v59 )
      __fastfail(3u);
    *v46 = v45;
    v19 += 16;
    v60 = v45;
  }
LABEL_64:
  v7 = -1073741670;
  KeReleaseMutex(Mutex, 0);
LABEL_65:
  v47 = (PVOID *)P;
  v48 = P;
  while ( v47 != &P )
  {
    v49 = v48;
    v48 = (_QWORD *)*v48;
    v50 = *v49;
    v51 = (_QWORD *)v49[1];
    if ( *(_QWORD **)(*v49 + 8LL) != v49 || (_QWORD *)*v51 != v49 )
      __fastfail(3u);
    *v51 = v50;
    *(_QWORD *)(v50 + 8) = v51;
    ExFreePoolWithTag(v49, 0);
    v47 = (PVOID *)P;
  }
  v52 = (PVOID *)v59;
  v53 = v59;
  while ( v52 != &v59 )
  {
    v54 = v53;
    v53 = (_QWORD *)*v53;
    v55 = *v54;
    v56 = (_QWORD *)v54[1];
    if ( *(_QWORD **)(*v54 + 8LL) != v54 || (_QWORD *)*v56 != v54 )
      __fastfail(3u);
    *v56 = v55;
    *(_QWORD *)(v55 + 8) = v56;
    ExFreePoolWithTag(v54, 0);
    v52 = (PVOID *)v59;
  }
  return v7;
}
