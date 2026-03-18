/*
 * XREFs of PfpRpCHashAddEntries @ 0x1404555D0
 * Callers:
 *     PfpRpControlRequestUpdate @ 0x140455444 (PfpRpControlRequestUpdate.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400F30E0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1400F36F8 (ExfTryToWakePushLock.c)
 *     memmove @ 0x140195740 (memmove.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     PfpRpCHashGrow @ 0x1404536C4 (PfpRpCHashGrow.c)
 */

__int64 __fastcall PfpRpCHashAddEntries(__int64 a1, __m128i *a2, unsigned __int64 *a3, __int64 a4, int a5)
{
  int v5; // r13d
  __int64 v7; // rsi
  __int64 *v8; // r15
  __int32 v9; // ecx
  unsigned int v11; // r12d
  unsigned __int64 v12; // rbp
  int v13; // esi
  PVOID v14; // rcx
  __int64 v16; // r8
  __int32 v17; // r10d
  __int32 v18; // esi
  __int64 v19; // rdx
  unsigned __int64 v20; // r11
  __int64 *v21; // r9
  __int64 v22; // rax
  struct _KTHREAD *CurrentThread; // rax
  __int64 v24; // rax
  __int64 v25; // r9
  __int64 v26; // rsi
  struct _KTHREAD *v27; // rcx
  __int16 v28; // ax
  struct _KTHREAD *v29; // rcx
  __int16 v30; // ax
  __int64 v32; // [rsp+68h] [rbp+10h]
  PVOID P; // [rsp+78h] [rbp+20h] BYREF

  v5 = a5;
  v7 = a1;
  P = 0LL;
  v8 = (__int64 *)a4;
  v9 = a2->m128i_i32[2];
  v11 = 1 << v9;
  v12 = a4 + (unsigned int)(a5 << v9);
  if ( a5 )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    v24 = KeAbPreAcquire((ULONG_PTR)a3, 0LL, 0LL, a4);
    v26 = v24;
    if ( _interlockedbittestandset64((volatile signed __int32 *)a3, 0LL) )
      ExfAcquirePushLockExclusiveEx(a3, v24, (ULONG_PTR)a3, v25);
    if ( v26 )
      *(_BYTE *)(v26 + 26) |= 1u;
    v7 = a1;
  }
  if ( (unsigned __int64)v8 < v12 )
  {
    while ( 1 )
    {
      if ( (unsigned int)(2 * a2[1].m128i_i32[0]) >= a2->m128i_i32[3] )
      {
        if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)a3, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
          ExfTryToWakePushLock((volatile signed __int64 *)a3);
        KeAbPostRelease((ULONG_PTR)a3);
        v29 = KeGetCurrentThread();
        v30 = v29->KernelApcDisable + 1;
        v29->KernelApcDisable = v30;
        if ( !v30
          && ($CD287064E7C9F7953DE243E927CFCB99 *)v29->ApcState.ApcListHead[0].Flink != &v29->152
          && !v29->SpecialApcDisable )
        {
          KiCheckForKernelApcDelivery();
        }
        v13 = PfpRpCHashGrow(v7, a2, a3, &P);
        if ( v13 < 0 )
          goto LABEL_5;
      }
      v16 = *v8;
      v17 = a2->m128i_i32[3];
      if ( !v17 )
        break;
      v18 = a2->m128i_i32[2];
      v19 = 0LL;
      v32 = *v8;
      v20 = (37
           * (BYTE6(v32)
            + 37
            * (BYTE5(v32)
             + 37
             * (BYTE4(v32)
              + 37 * (BYTE3(v32) + 37 * (BYTE2(v32) + 37 * (BYTE1(v32) + 37 * ((unsigned __int8)v16 + 11623883)))))))
           + HIBYTE(v32)) & (unsigned int)(v17 - 1);
      v21 = (__int64 *)(a2->m128i_i64[0] + (v20 << v18));
      v22 = *v21;
      if ( *v21 )
      {
        do
        {
          if ( v22 == v16 )
            break;
          if ( !v19 )
          {
            v19 = 2654435761LL * v16;
            if ( ((-79 * (_BYTE)v16) & 1) == 0 )
              ++v19;
          }
          v20 = (unsigned int)(v17 - 1) & (v19 + v20);
          v21 = (__int64 *)(a2->m128i_i64[0] + (v20 << v18));
          v22 = *v21;
        }
        while ( *v21 );
        v5 = a5;
      }
      if ( !*v21 )
        goto LABEL_19;
LABEL_17:
      v8 = (__int64 *)((char *)v8 + v11);
      if ( (unsigned __int64)v8 >= v12 )
        goto LABEL_3;
      v7 = a1;
    }
    v21 = 0LL;
LABEL_19:
    memmove(v21, v8, v11);
    ++a2[1].m128i_i32[0];
    goto LABEL_17;
  }
LABEL_3:
  if ( v5 )
  {
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)a3, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)a3);
    KeAbPostRelease((ULONG_PTR)a3);
    v27 = KeGetCurrentThread();
    v28 = v27->KernelApcDisable + 1;
    v27->KernelApcDisable = v28;
    if ( !v28
      && ($CD287064E7C9F7953DE243E927CFCB99 *)v27->ApcState.ApcListHead[0].Flink != &v27->152
      && !v27->SpecialApcDisable )
    {
      KiCheckForKernelApcDelivery();
    }
  }
  v13 = 0;
LABEL_5:
  while ( 1 )
  {
    v14 = P;
    if ( !P )
      break;
    P = *(PVOID *)P;
    ExFreePoolWithTag(v14, 0);
  }
  return (unsigned int)v13;
}
