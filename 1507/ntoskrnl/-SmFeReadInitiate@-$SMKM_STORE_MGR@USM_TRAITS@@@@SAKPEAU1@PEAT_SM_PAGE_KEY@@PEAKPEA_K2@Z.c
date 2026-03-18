/*
 * XREFs of ?SmFeReadInitiate@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAKPEAU1@PEAT_SM_PAGE_KEY@@PEAKPEA_K2@Z @ 0x14013C960
 * Callers:
 *     ?SmReadPickStore@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAT_SM_PAGE_KEY@@PEAKPEAPEAU?$SMKM_STORE@USM_TRAITS@@@@2@Z @ 0x14013C834 (-SmReadPickStore@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAT_SM_PAGE_KEY@@PEAKPEAPEAU-$SMKM_STO.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     ExfAcquirePushLockSharedEx @ 0x1400F2F00 (ExfAcquirePushLockSharedEx.c)
 *     ExfReleasePushLockShared @ 0x1400F3600 (ExfReleasePushLockShared.c)
 *     ?SmFeCheckPresent@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAKPEAU1@PEAT_SM_PAGE_KEY@@PEAK2@Z @ 0x14013CAB0 (-SmFeCheckPresent@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAKPEAU1@PEAT_SM_PAGE_KEY@@PEAK2@Z.c)
 */

__int64 __fastcall SMKM_STORE_MGR<SM_TRAITS>::SmFeReadInitiate(
        __int64 a1,
        __int64 a2,
        int *a3,
        LONGLONG *a4,
        _DWORD *a5)
{
  struct _KTHREAD *CurrentThread; // rax
  int v7; // r14d
  unsigned __int64 *v11; // rdi
  __int64 v12; // rbx
  __int64 v13; // r9
  _DWORD *v14; // rbx
  unsigned int v15; // esi
  int v16; // eax
  int v17; // ebx
  __int64 v18; // rbp
  LONGLONG v19; // rax
  struct _KTHREAD *v20; // rcx
  __int16 v21; // ax
  __int64 v23; // rcx
  LARGE_INTEGER PerformanceCounter; // rdx
  __int64 v25; // r8
  __int64 v26; // r9
  unsigned int v27; // ebx
  __int64 i; // rcx
  int v29; // [rsp+60h] [rbp+8h] BYREF

  CurrentThread = KeGetCurrentThread();
  v7 = *a3;
  v29 = *a3;
  --CurrentThread->SpecialApcDisable;
  v11 = (unsigned __int64 *)(a1 + 5816);
  v12 = KeAbPreAcquire(a1 + 5816, 0LL, 0LL, (__int64)a4);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)v11, 17LL, 0LL) )
    ExfAcquirePushLockSharedEx(v11, v12, (ULONG_PTR)v11, v13);
  if ( v12 )
    *(_BYTE *)(v12 + 26) |= 1u;
  v14 = a5;
  v15 = SMKM_STORE_MGR<SM_TRAITS>::SmFeCheckPresent(a1, a2, &v29, a5);
  if ( v15 != 32 )
  {
    v16 = *(_DWORD *)(a1 + 10096);
    if ( ((v16 & 4) != 0 || !*v14) && ((v17 = v29, v29 == v7) || (v16 & 8) != 0) )
    {
      v18 = *(_QWORD *)(176LL * (v15 & 0x1F) + a1);
      if ( *(_BYTE *)(v18 + 4484) )
      {
        v23 = *(_QWORD *)(v18 + 2448);
        if ( *(int *)(v23 + 8) <= 0 )
        {
          PerformanceCounter = KeQueryPerformanceCounter(0LL);
        }
        else
        {
          PerformanceCounter.QuadPart = *(_QWORD *)v23 + *(unsigned int *)(v23 + 12);
          v17 = v29;
        }
        v25 = *(_QWORD *)(v18 + 2448);
        v26 = *(_QWORD *)(v18 + 4584);
        v27 = v17 << 12;
        for ( i = *(_QWORD *)(v25 + 16); *(_DWORD *)i < v27; i += 32LL )
          ;
        ++*(_WORD *)(i + 4);
        v17 = v29;
        *(_QWORD *)(v25 + 40) = MEMORY[0xFFFFF78000000008];
        v19 = PerformanceCounter.QuadPart + v26 + *(_QWORD *)(i + 8);
      }
      else
      {
        v19 = 0LL;
      }
      *a4 = v19;
      *a3 = v17;
    }
    else
    {
      v15 = 32;
    }
  }
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)v11, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)v11);
  KeAbPostRelease((ULONG_PTR)v11);
  v20 = KeGetCurrentThread();
  v21 = v20->SpecialApcDisable + 1;
  v20->SpecialApcDisable = v21;
  if ( !v21 && ($CD287064E7C9F7953DE243E927CFCB99 *)v20->ApcState.ApcListHead[0].Flink != &v20->152 )
    KiCheckForKernelApcDelivery();
  return v15;
}
