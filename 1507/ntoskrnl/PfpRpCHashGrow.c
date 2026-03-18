/*
 * XREFs of PfpRpCHashGrow @ 0x1404536C4
 * Callers:
 *     PfpRpCHashAddEntries @ 0x1404555D0 (PfpRpCHashAddEntries.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400F30E0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1400F36F8 (ExfTryToWakePushLock.c)
 *     memmove @ 0x140195740 (memmove.c)
 *     memset @ 0x140195A80 (memset.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall PfpRpCHashGrow(__int64 a1, __m128i *a2, unsigned __int64 *a3, _QWORD *a4)
{
  struct _KTHREAD *CurrentThread; // rax
  unsigned __int64 *v5; // r14
  __m128i *v7; // r12
  __int64 v8; // rax
  __int64 v9; // r9
  __int64 v10; // rdi
  unsigned int v11; // edi
  unsigned int v12; // edi
  unsigned int v13; // edi
  char v14; // dl
  int v15; // r15d
  char v16; // cl
  unsigned int v17; // r13d
  unsigned int v18; // eax
  unsigned int v19; // edi
  __int64 v20; // r9
  unsigned __int64 v21; // rax
  int v22; // ebx
  __int64 *v23; // r14
  __int64 v24; // r8
  int v25; // edx
  __int64 i; // rax
  __int64 v27; // rdx
  char *v28; // r9
  struct _KTHREAD *v29; // rax
  __int64 v30; // rax
  __int64 v31; // r9
  __int64 v32; // rdi
  unsigned int v33; // r15d
  struct _KTHREAD *v34; // rdx
  __int16 v35; // ax
  struct _KTHREAD *v37; // rax
  __int64 v38; // rax
  __int64 v39; // r9
  __int64 v40; // rdi
  char *PoolWithTag; // [rsp+28h] [rbp-48h]
  unsigned __int64 v42; // [rsp+30h] [rbp-40h]
  unsigned __int64 *v43; // [rsp+38h] [rbp-38h]
  __m128i v44; // [rsp+40h] [rbp-30h]
  __int64 v45; // [rsp+50h] [rbp-20h]
  __m128i Src; // [rsp+58h] [rbp-18h]
  char v47; // [rsp+B0h] [rbp+40h]
  __int64 v48; // [rsp+B0h] [rbp+40h]

  CurrentThread = KeGetCurrentThread();
  v5 = (unsigned __int64 *)(a1 + 128);
  v43 = (unsigned __int64 *)(a1 + 128);
  v7 = a2;
  --CurrentThread->KernelApcDisable;
  v8 = KeAbPreAcquire(a1 + 128, 0LL, 0LL, (__int64)a4);
  v10 = v8;
  if ( _interlockedbittestandset64((volatile signed __int32 *)v5, 0LL) )
    ExfAcquirePushLockExclusiveEx(v5, v8, (ULONG_PTR)v5, v9);
  if ( v10 )
    *(_BYTE *)(v10 + 26) |= 1u;
  v11 = v7->m128i_u32[3];
  if ( 2 * v7[1].m128i_i32[0] < v11 )
  {
    v37 = KeGetCurrentThread();
    v33 = 0;
    --v37->KernelApcDisable;
    v38 = KeAbPreAcquire((ULONG_PTR)a3, 0LL, 0LL, v9);
    v40 = v38;
    if ( _interlockedbittestandset64((volatile signed __int32 *)a3, 0LL) )
      ExfAcquirePushLockExclusiveEx(a3, v38, (ULONG_PTR)a3, v39);
    if ( v40 )
      *(_BYTE *)(v40 + 26) |= 1u;
  }
  else
  {
    v12 = 2 * v11;
    if ( v12 < 8 )
      v12 = 8;
    v13 = v12 << v7->m128i_i32[2];
    PoolWithTag = (char *)ExAllocatePoolWithTag(PagedPool, v13, 0x48436650u);
    if ( PoolWithTag )
    {
      v14 = -1;
      v15 = -1;
      v16 = _mm_cvtsi128_si32(_mm_srli_si128(*v7, 8));
      Src = *v7;
      v17 = 1 << v16;
      v47 = v16;
      v18 = 1 << v16;
      if ( 1 << v16 )
      {
        do
        {
          ++v15;
          v18 >>= 1;
        }
        while ( v18 );
      }
      if ( ((v17 - 1) & v17) != 0 )
        ++v15;
      v19 = v13 >> v15;
      if ( ((v19 - 1) & v19) != 0 )
      {
        for ( ; v19; v19 >>= 1 )
          ++v14;
        v19 = 1 << v14;
      }
      LODWORD(v45) = 0;
      v44.m128i_i64[1] = __PAIR64__(v19, v15);
      v44.m128i_i64[0] = (__int64)PoolWithTag;
      memset(PoolWithTag, 0, v19 << v15);
      v21 = Src.m128i_i64[0] + (unsigned int)(Src.m128i_i32[3] << v47);
      v42 = v21;
      if ( Src.m128i_i64[0] < v21 )
      {
        v22 = 0;
        v23 = (__int64 *)Src.m128i_i64[0];
        do
        {
          v24 = *v23;
          if ( *v23 )
          {
            if ( v19 )
            {
              v48 = *v23;
              v25 = HIBYTE(v48)
                  + 37
                  * (BYTE6(v48)
                   + 37
                   * (BYTE5(v48)
                    + 37
                    * (BYTE4(v48)
                     + 37
                     * (BYTE3(v48) + 37 * (BYTE2(v48) + 37 * (BYTE1(v48) + 37 * ((unsigned __int8)v24 + 11623883)))))));
              for ( i = 0LL; ; v25 = i + v27 )
              {
                v27 = (v19 - 1) & v25;
                v28 = &PoolWithTag[v27 << v15];
                if ( !*(_QWORD *)v28 || *(_QWORD *)v28 == v24 )
                  break;
                if ( !i )
                {
                  i = 2654435761LL * v24;
                  if ( ((-79 * (_BYTE)v24) & 1) == 0 )
                    ++i;
                }
              }
            }
            else
            {
              v28 = 0LL;
            }
            memmove(v28, v23, v17);
            v21 = v42;
            LODWORD(v45) = ++v22;
          }
          v23 = (__int64 *)((char *)v23 + v17);
        }
        while ( (unsigned __int64)v23 < v21 );
        v5 = v43;
        v7 = a2;
      }
      v29 = KeGetCurrentThread();
      --v29->KernelApcDisable;
      v30 = KeAbPreAcquire((ULONG_PTR)a3, 0LL, 0LL, v20);
      v32 = v30;
      if ( _interlockedbittestandset64((volatile signed __int32 *)a3, 0LL) )
        ExfAcquirePushLockExclusiveEx(a3, v30, (ULONG_PTR)a3, v31);
      if ( v32 )
        *(_BYTE *)(v32 + 26) |= 1u;
      *v7 = v44;
      v7[1].m128i_i64[0] = v45;
      if ( Src.m128i_i64[0] )
      {
        *(_QWORD *)Src.m128i_i64[0] = *a4;
        *a4 = Src.m128i_i64[0];
      }
      v33 = 0;
    }
    else
    {
      v33 = -1073741670;
    }
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v5, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)v5);
  KeAbPostRelease((ULONG_PTR)v5);
  v34 = KeGetCurrentThread();
  v35 = v34->KernelApcDisable + 1;
  v34->KernelApcDisable = v35;
  if ( !v35
    && ($CD287064E7C9F7953DE243E927CFCB99 *)v34->ApcState.ApcListHead[0].Flink != &v34->152
    && !v34->SpecialApcDisable )
  {
    KiCheckForKernelApcDelivery();
  }
  return v33;
}
