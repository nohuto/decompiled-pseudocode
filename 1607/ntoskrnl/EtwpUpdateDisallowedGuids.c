/*
 * XREFs of EtwpUpdateDisallowedGuids @ 0x14052DA3C
 * Callers:
 *     EtwpUpdateDisallowList @ 0x14052D9DC (EtwpUpdateDisallowList.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14002BD30 (KeAbPreAcquire.c)
 *     KeReleaseMutex @ 0x140055B60 (KeReleaseMutex.c)
 *     KeWaitForSingleObject @ 0x14005C400 (KeWaitForSingleObject.c)
 *     KeAbPostRelease @ 0x14006AA40 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400C5F10 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1400C65D8 (ExfTryToWakePushLock.c)
 *     memcmp @ 0x14014E450 (memcmp.c)
 *     qsort @ 0x14014E520 (qsort.c)
 *     memmove @ 0x140171780 (memmove.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 *     EtwpDisallowedGuidAddition @ 0x140572F94 (EtwpDisallowedGuidAddition.c)
 *     EtwpDisallowedGuidRemoval @ 0x14069FC4C (EtwpDisallowedGuidRemoval.c)
 */

__int64 __fastcall EtwpUpdateDisallowedGuids(
        __int64 a1,
        unsigned __int16 a2,
        const void *a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7)
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
  PVOID *v25; // rcx
  unsigned __int64 *v26; // rdi
  _BYTE *v27; // rax
  _BYTE *v28; // rsi
  void *v29; // r14
  PVOID *v30; // rax
  _QWORD *v31; // rsi
  _QWORD *v32; // rdi
  __int64 v33; // rcx
  _QWORD *v34; // rax
  PVOID *v35; // rax
  _QWORD *v36; // rsi
  PVOID *v38; // rax
  PVOID *v39; // rcx
  PVOID *v40; // rax
  PVOID *v41; // rcx
  PVOID *v42; // rax
  PVOID *v43; // rcx
  PVOID *v44; // rax
  _QWORD *v45; // rdi
  _QWORD *v46; // rcx
  __int64 v47; // rdx
  _QWORD *v48; // rax
  PVOID *v49; // rax
  _QWORD *v50; // rdi
  _QWORD *v51; // rcx
  __int64 v52; // rdx
  _QWORD *v53; // rax
  _QWORD *v54; // rdi
  __int64 v55; // rcx
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
      goto LABEL_62;
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
          goto LABEL_62;
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
  Mutex = (struct _KMUTANT *)(a1 + 632);
  KeWaitForSingleObject((PVOID)(a1 + 632), Executive, 0, 0, 0LL);
  v18 = *(_WORD *)(a1 + 880);
  if ( v18 )
  {
    v19 = *(char **)(a1 + 888);
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
        goto LABEL_61;
      v24[2] = v21;
      v25 = p_P;
      if ( *p_P != &P )
        __fastfail(3u);
      v24[1] = p_P;
      *v24 = &P;
      v21 += 16;
      *v25 = v24;
      p_P = v24;
    }
    v26 = (unsigned __int64 *)(a1 + 688);
    v27 = (_BYTE *)KeAbPreAcquire(a1 + 688, 0LL, 0);
    v28 = v27;
    if ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 688), 0LL) )
      ExfAcquirePushLockExclusiveEx(v26, v27, (ULONG_PTR)v26);
    if ( v28 )
      v28[26] |= 1u;
    v29 = *(void **)(a1 + 888);
    *(_QWORD *)(a1 + 888) = v14;
    *(_WORD *)(a1 + 880) = a2;
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v26, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)v26);
    KeAbPostRelease((ULONG_PTR)v26);
    KeReleaseMutex((PRKMUTEX)(a1 + 632), 0);
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
      v54 = v36;
      v36 = (_QWORD *)*v36;
      EtwpDisallowedGuidRemoval(v54[2], a7);
      v55 = *v54;
      v56 = (_QWORD *)v54[1];
      if ( *(_QWORD **)(*v54 + 8LL) != v54 || (_QWORD *)*v56 != v54 )
        __fastfail(3u);
      *v56 = v55;
      *(_QWORD *)(v55 + 8) = v56;
      ExFreePoolWithTag(v54, 0);
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
        v38 = (PVOID *)ExAllocatePoolWithTag(PagedPool, 0x18uLL, 0x74777445u);
        if ( !v38 )
          goto LABEL_61;
        v38[2] = v19;
        v39 = v60;
        if ( *v60 != &v59 )
          __fastfail(3u);
        v38[1] = v60;
        *v38 = &v59;
        v19 += 16;
        *v39 = v38;
        v60 = v38;
        goto LABEL_18;
      }
      v40 = (PVOID *)ExAllocatePoolWithTag(PagedPool, 0x18uLL, 0x74777445u);
      if ( !v40 )
        goto LABEL_61;
      v40[2] = v21;
      v41 = p_P;
      if ( *p_P != &P )
        __fastfail(3u);
      v40[1] = p_P;
      *v40 = &P;
      *v41 = v40;
      p_P = v40;
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
    v42 = (PVOID *)ExAllocatePoolWithTag(PagedPool, 0x18uLL, 0x74777445u);
    if ( !v42 )
      break;
    v42[2] = v19;
    v43 = v60;
    if ( *v60 != &v59 )
      __fastfail(3u);
    v42[1] = v60;
    *v42 = &v59;
    v19 += 16;
    *v43 = v42;
    v60 = v42;
  }
LABEL_61:
  v7 = -1073741670;
  KeReleaseMutex(Mutex, 0);
LABEL_62:
  v44 = (PVOID *)P;
  v45 = P;
  while ( v44 != &P )
  {
    v46 = v45;
    v45 = (_QWORD *)*v45;
    v47 = *v46;
    v48 = (_QWORD *)v46[1];
    if ( *(_QWORD **)(*v46 + 8LL) != v46 || (_QWORD *)*v48 != v46 )
      __fastfail(3u);
    *v48 = v47;
    *(_QWORD *)(v47 + 8) = v48;
    ExFreePoolWithTag(v46, 0);
    v44 = (PVOID *)P;
  }
  v49 = (PVOID *)v59;
  v50 = v59;
  while ( v49 != &v59 )
  {
    v51 = v50;
    v50 = (_QWORD *)*v50;
    v52 = *v51;
    v53 = (_QWORD *)v51[1];
    if ( *(_QWORD **)(*v51 + 8LL) != v51 || (_QWORD *)*v53 != v51 )
      __fastfail(3u);
    *v53 = v52;
    *(_QWORD *)(v52 + 8) = v53;
    ExFreePoolWithTag(v51, 0);
    v49 = (PVOID *)v59;
  }
  return v7;
}
