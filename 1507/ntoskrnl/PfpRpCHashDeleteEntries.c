/*
 * XREFs of PfpRpCHashDeleteEntries @ 0x140453A14
 * Callers:
 *     PfpRpControlRequestUpdate @ 0x140455444 (PfpRpControlRequestUpdate.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     ExfAcquirePushLockSharedEx @ 0x1400F2F00 (ExfAcquirePushLockSharedEx.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400F30E0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfReleasePushLockShared @ 0x1400F3600 (ExfReleasePushLockShared.c)
 *     ExfReleasePushLockExclusive @ 0x1400F36C0 (ExfReleasePushLockExclusive.c)
 *     ExfTryToWakePushLock @ 0x1400F36F8 (ExfTryToWakePushLock.c)
 *     memmove @ 0x140195740 (memmove.c)
 *     memset @ 0x140195A80 (memset.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall PfpRpCHashDeleteEntries(__int64 a1, __m128i *a2, unsigned __int64 *a3, __int64 a4, __int64 a5)
{
  struct _KTHREAD *CurrentThread; // rax
  unsigned __int64 *v6; // rbp
  __int64 v9; // rax
  __int64 v10; // r9
  __int64 v11; // rdi
  unsigned __int32 v12; // edi
  __int64 v13; // r9
  void *v14; // r13
  struct _KTHREAD *v15; // rax
  __int64 v16; // r9
  __int64 v17; // r14
  char v18; // dl
  char v19; // r15
  int v20; // ecx
  unsigned int v21; // r14d
  unsigned int v22; // eax
  unsigned int v23; // edi
  char *v24; // r13
  char *v25; // rdx
  __int32 v26; // ebp
  size_t v27; // rbx
  char *v28; // r14
  __int64 v29; // r8
  __int64 v30; // r9
  struct _KTHREAD *v31; // rcx
  __int16 v32; // ax
  struct _KTHREAD *v33; // rax
  struct _KTHREAD *v34; // rdx
  __int16 v35; // ax
  unsigned int v36; // edi
  struct _KTHREAD *v37; // rdx
  __int16 v38; // ax
  __int64 v40; // rcx
  int v41; // edx
  __int64 i; // rax
  __int64 v43; // rdx
  char *v44; // r9
  __int64 v45; // rdi
  __int64 v46; // r9
  signed __int32 v47[8]; // [rsp+0h] [rbp-88h] BYREF
  char *v48; // [rsp+20h] [rbp-68h]
  char *PoolWithTag; // [rsp+28h] [rbp-60h]
  unsigned __int64 *v50; // [rsp+30h] [rbp-58h]
  PVOID P[2]; // [rsp+38h] [rbp-50h]
  __int32 v52; // [rsp+90h] [rbp+8h]
  __int64 v53; // [rsp+90h] [rbp+8h]
  unsigned int v54; // [rsp+A8h] [rbp+20h]

  v54 = a4;
  CurrentThread = KeGetCurrentThread();
  v6 = (unsigned __int64 *)(a1 + 128);
  v50 = (unsigned __int64 *)(a1 + 128);
  --CurrentThread->KernelApcDisable;
  v9 = KeAbPreAcquire(a1 + 128, 0LL, 0LL, a4);
  v11 = v9;
  if ( _interlockedbittestandset64((volatile signed __int32 *)v6, 0LL) )
    ExfAcquirePushLockExclusiveEx(v6, v9, (ULONG_PTR)v6, v10);
  if ( v11 )
    *(_BYTE *)(v11 + 26) |= 1u;
  v12 = a2->m128i_i32[3] << a2->m128i_i32[2];
  if ( !v12 )
    goto LABEL_28;
  PoolWithTag = (char *)ExAllocatePoolWithTag(PagedPool, v12, 0x48436650u);
  v14 = PoolWithTag;
  if ( PoolWithTag )
  {
    v15 = KeGetCurrentThread();
    --v15->KernelApcDisable;
    v17 = KeAbPreAcquire((ULONG_PTR)a3, 0LL, 0LL, v13);
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)a3, 17LL, 0LL) )
      ExfAcquirePushLockSharedEx(a3, v17, (ULONG_PTR)a3, v16);
    if ( v17 )
      *(_BYTE *)(v17 + 26) |= 1u;
    v18 = -1;
    v19 = -1;
    v20 = _mm_cvtsi128_si32(_mm_srli_si128(*a2, 8));
    *(__m128i *)P = *a2;
    v21 = 1 << v20;
    LODWORD(v48) = v20;
    v22 = 1 << v20;
    if ( 1 << v20 )
    {
      do
      {
        ++v19;
        v22 >>= 1;
      }
      while ( v22 );
    }
    if ( ((v21 - 1) & v21) != 0 )
      ++v19;
    v23 = v12 >> v19;
    if ( ((v23 - 1) & v23) != 0 )
    {
      for ( ; v23; v23 >>= 1 )
        ++v18;
      v23 = 1 << v18;
    }
    v52 = 0;
    memset(v14, 0, v23 << v19);
    v24 = (char *)P[0];
    v25 = (char *)P[0] + (unsigned int)(HIDWORD(P[1]) << (char)v48);
    v48 = v25;
    if ( P[0] >= v25 )
    {
      v28 = PoolWithTag;
    }
    else
    {
      v26 = 0;
      v27 = v21;
      v28 = PoolWithTag;
      do
      {
        v29 = *(_QWORD *)v24;
        if ( *(_QWORD *)v24 )
        {
          if ( !a5 )
            goto LABEL_39;
          v40 = 0LL;
          if ( !v54 )
            goto LABEL_39;
          do
          {
            if ( *(_QWORD *)(a5 + 8 * v40) == v29 )
              break;
            v40 = (unsigned int)(v40 + 1);
          }
          while ( (unsigned int)v40 < v54 );
          if ( (unsigned int)v40 >= v54 )
          {
LABEL_39:
            if ( v23 )
            {
              v53 = *(_QWORD *)v24;
              v41 = HIBYTE(v53)
                  + 37
                  * (BYTE6(v53)
                   + 37
                   * (BYTE5(v53)
                    + 37
                    * (BYTE4(v53)
                     + 37
                     * (BYTE3(v53) + 37 * (BYTE2(v53) + 37 * (BYTE1(v53) + 37 * ((unsigned __int8)v29 + 11623883)))))));
              for ( i = 0LL; ; v41 = i + v43 )
              {
                v43 = (v23 - 1) & v41;
                v44 = &PoolWithTag[v43 << v19];
                if ( !*(_QWORD *)v44 || *(_QWORD *)v44 == v29 )
                  break;
                if ( !i )
                {
                  i = 2654435761LL * v29;
                  if ( ((-79 * (_BYTE)v29) & 1) == 0 )
                    ++i;
                }
              }
            }
            else
            {
              v44 = 0LL;
            }
            memmove(v44, v24, v27);
            v25 = v48;
            ++v26;
          }
        }
        v24 += v27;
      }
      while ( v24 < v25 );
      v52 = v26;
      v6 = v50;
    }
    a2[1].m128i_i32[0] = v52;
    a2->m128i_i64[0] = (__int64)v28;
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)a3, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared((signed __int64 *)a3);
    KeAbPostRelease((ULONG_PTR)a3);
    v31 = KeGetCurrentThread();
    v32 = v31->KernelApcDisable + 1;
    v31->KernelApcDisable = v32;
    if ( !v32
      && ($CD287064E7C9F7953DE243E927CFCB99 *)v31->ApcState.ApcListHead[0].Flink != &v31->152
      && !v31->SpecialApcDisable )
    {
      KiCheckForKernelApcDelivery();
    }
    v33 = KeGetCurrentThread();
    --v33->KernelApcDisable;
    _InterlockedOr(v47, 0);
    if ( (*a3 & 1) != 0 )
    {
      v45 = KeAbPreAcquire((ULONG_PTR)a3, 0LL, 0LL, v30);
      ExfAcquirePushLockExclusiveEx(a3, v45, (ULONG_PTR)a3, v46);
      if ( v45 )
        *(_BYTE *)(v45 + 26) |= 1u;
      ExfReleasePushLockExclusive((volatile signed __int64 *)a3);
      if ( v45 )
        KeAbPostRelease((ULONG_PTR)a3);
    }
    v34 = KeGetCurrentThread();
    v35 = v34->KernelApcDisable + 1;
    v34->KernelApcDisable = v35;
    if ( !v35
      && ($CD287064E7C9F7953DE243E927CFCB99 *)v34->ApcState.ApcListHead[0].Flink != &v34->152
      && !v34->SpecialApcDisable )
    {
      KiCheckForKernelApcDelivery();
    }
    ExFreePoolWithTag(P[0], 0);
LABEL_28:
    v36 = 0;
    goto LABEL_29;
  }
  v36 = -1073741670;
LABEL_29:
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v6, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)v6);
  KeAbPostRelease((ULONG_PTR)v6);
  v37 = KeGetCurrentThread();
  v38 = v37->KernelApcDisable + 1;
  v37->KernelApcDisable = v38;
  if ( !v38
    && ($CD287064E7C9F7953DE243E927CFCB99 *)v37->ApcState.ApcListHead[0].Flink != &v37->152
    && !v37->SpecialApcDisable )
  {
    KiCheckForKernelApcDelivery();
  }
  return v36;
}
