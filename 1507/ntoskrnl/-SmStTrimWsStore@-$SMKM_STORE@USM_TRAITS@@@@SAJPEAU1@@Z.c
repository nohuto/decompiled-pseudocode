/*
 * XREFs of ?SmStTrimWsStore@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@@Z @ 0x140252598
 * Callers:
 *     SmStoreCompressionStop @ 0x1406D9FF0 (SmStoreCompressionStop.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     RtlFindNextForwardRunClearCapped @ 0x140063A80 (RtlFindNextForwardRunClearCapped.c)
 *     KiUnstackDetachProcess @ 0x14009A720 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x14009AB60 (KiStackAttachProcess.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     ExfAcquirePushLockSharedEx @ 0x1400F2F00 (ExfAcquirePushLockSharedEx.c)
 *     ExfReleasePushLockShared @ 0x1400F3600 (ExfReleasePushLockShared.c)
 *     ?SmStMapVirtualRegion@?$SMKM_STORE@USM_TRAITS@@@@SAPEAXPEAU1@KKKK@Z @ 0x1401476BC (-SmStMapVirtualRegion@-$SMKM_STORE@USM_TRAITS@@@@SAPEAXPEAU1@KKKK@Z.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     ?SmStTrimWsStoreBatch@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@PEAKPEAPEAXKK@Z @ 0x140252898 (-SmStTrimWsStoreBatch@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@PEAKPEAPEAXKK@Z.c)
 */

__int64 __fastcall SMKM_STORE<SM_TRAITS>::SmStTrimWsStore(__int64 a1)
{
  __int64 v2; // r9
  unsigned int v3; // edi
  _QWORD *v4; // r14
  _QWORD *v5; // r15
  struct _KTHREAD *CurrentThread; // rax
  unsigned int v7; // r13d
  signed __int64 *v8; // r12
  __int64 v9; // rbx
  __int64 v10; // r9
  unsigned int v11; // r15d
  unsigned int v12; // r12d
  __int64 v13; // r14
  int NextForwardRunClearCapped; // eax
  unsigned int v15; // eax
  unsigned int v16; // r14d
  __int64 v17; // r13
  __int64 v18; // rbx
  unsigned int v19; // r15d
  __int64 v20; // r14
  __int64 v21; // rbx
  struct _KTHREAD *v22; // rcx
  __int16 v23; // ax
  unsigned int v25; // [rsp+38h] [rbp-89h] BYREF
  unsigned int v26; // [rsp+3Ch] [rbp-85h]
  __int64 v27; // [rsp+40h] [rbp-81h]
  _QWORD *v28; // [rsp+48h] [rbp-79h]
  _BYTE v29[48]; // [rsp+58h] [rbp-69h] BYREF
  _DWORD v30[8]; // [rsp+88h] [rbp-39h] BYREF
  _QWORD v31[8]; // [rsp+A8h] [rbp-19h] BYREF

  KiStackAttachProcess(PsInitialSystemProcess, 0, (__int64)v29);
  if ( (*(_BYTE *)(a1 + 4485) & 8) != 0 )
  {
    v3 = 0;
  }
  else
  {
    v4 = (_QWORD *)_InterlockedExchange64((volatile __int64 *)(a1 + 5016), -1LL);
    v28 = v4;
    if ( v4 == (_QWORD *)-1LL )
    {
      v3 = -1073740682;
    }
    else
    {
      v3 = 0;
      if ( !v4 || (v5 = v4 + 1, !*v4) )
        v5 = 0LL;
      CurrentThread = KeGetCurrentThread();
      v7 = 0;
      v27 = (__int64)v5;
      v26 = 0;
      --CurrentThread->SpecialApcDisable;
      v8 = (signed __int64 *)(a1 + 4488);
      v9 = KeAbPreAcquire(a1 + 4488, 0LL, 0LL, v2);
      if ( _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 4488), 17LL, 0LL) )
        ExfAcquirePushLockSharedEx((unsigned __int64 *)(a1 + 4488), v9, a1 + 4488, v10);
      if ( v9 )
        *(_BYTE *)(v9 + 26) |= 1u;
      if ( v5 )
      {
        v11 = 0;
        v25 = 0;
        v12 = 0;
LABEL_14:
        v13 = v27;
        while ( 1 )
        {
          NextForwardRunClearCapped = RtlFindNextForwardRunClearCapped(v13, v11, 0xFFFFFFFF, &v25);
          if ( !NextForwardRunClearCapped )
            break;
          v11 = v25;
          v15 = v25 + NextForwardRunClearCapped;
          if ( v25 < v15 )
          {
            v16 = v15;
            v17 = 8LL * v25;
            do
            {
              if ( (*(_QWORD *)(v17 + *(_QWORD *)(a1 + 4680)) & 0x7FFFFFFFFFFF0000LL) != 0 )
              {
                v18 = v12;
                v30[v12++] = v11;
                v31[v18] = SMKM_STORE<SM_TRAITS>::SmStMapVirtualRegion(a1, v11, 0, v10, 4u);
                if ( v12 == 8 )
                {
                  SMKM_STORE<SM_TRAITS>::SmStTrimWsStoreBatch(a1, v30, v31, 8LL);
                  v12 = 0;
                }
              }
              ++v11;
              v17 += 8LL;
            }
            while ( v11 < v16 );
            v25 = v11;
            v26 = v12;
            goto LABEL_14;
          }
        }
        v4 = v28;
        v8 = (signed __int64 *)(a1 + 4488);
        v7 = v26;
      }
      v19 = 0;
      v25 = 0;
      if ( *(_DWORD *)(a1 + 4676) )
      {
        v20 = v27;
        do
        {
          if ( (*(_QWORD *)(*(_QWORD *)(a1 + 4680) + 8LL * v19) & 0x7FFFFFFFFFFF0000LL) != 0
            && (!v20 || _bittest64(*(const signed __int64 **)(v20 + 8), v19)) )
          {
            v21 = v7;
            v30[v7++] = v19;
            v31[v21] = SMKM_STORE<SM_TRAITS>::SmStMapVirtualRegion(a1, v19, 0, v10, 4u);
            if ( v7 == 8 )
            {
              SMKM_STORE<SM_TRAITS>::SmStTrimWsStoreBatch(a1, v30, v31, 8LL);
              v7 = 0;
            }
          }
          ++v19;
        }
        while ( v19 < *(_DWORD *)(a1 + 4676) );
        v4 = v28;
        v25 = v19;
      }
      if ( v7 )
        SMKM_STORE<SM_TRAITS>::SmStTrimWsStoreBatch(a1, v30, v31, v7);
      if ( _InterlockedCompareExchange64(v8, 0LL, 17LL) != 17 )
        ExfReleasePushLockShared(v8);
      KeAbPostRelease((ULONG_PTR)v8);
      v22 = KeGetCurrentThread();
      v23 = v22->SpecialApcDisable + 1;
      v22->SpecialApcDisable = v23;
      if ( !v23 && ($CD287064E7C9F7953DE243E927CFCB99 *)v22->ApcState.ApcListHead[0].Flink != &v22->152 )
        KiCheckForKernelApcDelivery();
      _InterlockedExchange64((volatile __int64 *)(a1 + 5016), (__int64)v4);
    }
  }
  KiUnstackDetachProcess((struct _KTHREAD *)v29, 0);
  return v3;
}
