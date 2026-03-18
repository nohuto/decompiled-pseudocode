/*
 * XREFs of ?Lock@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_MULTI_ALLOC@@KPEAPEAX@Z @ 0x1C004E8E4
 * Callers:
 *     ?VidMmLock@@YAJPEAVVIDMM_GLOBAL@@PEAU_VIDMM_MULTI_ALLOC@@KPEAPEAX@Z @ 0x1C000E2A0 (-VidMmLock@@YAJPEAVVIDMM_GLOBAL@@PEAU_VIDMM_MULTI_ALLOC@@KPEAPEAX@Z.c)
 * Callees:
 *     ?IsCurrentProcess@VIDMM_PROCESS@@QEAAEXZ @ 0x1C0003B98 (-IsCurrentProcess@VIDMM_PROCESS@@QEAAEXZ.c)
 *     memset @ 0x1C0008500 (memset.c)
 *     ?WaitForAllPagingEngines@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C002F414 (-WaitForAllPagingEngines@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?CalculateLockData@VIDMM_GLOBAL@@IEAA?AUVIDMM_LOCK2_DATA@@PEAUVIDMM_ALLOC@@@Z @ 0x1C004BAD0 (-CalculateLockData@VIDMM_GLOBAL@@IEAA-AUVIDMM_LOCK2_DATA@@PEAUVIDMM_ALLOC@@@Z.c)
 *     ?LockInternal@VIDMM_GLOBAL@@IEAAJPEAUVIDMM_LOCK2_DATA@@PEAUVIDMM_ALLOC@@PEAPEAXKPEA_NPEAPEAU3@@Z @ 0x1C004EEA4 (-LockInternal@VIDMM_GLOBAL@@IEAAJPEAUVIDMM_LOCK2_DATA@@PEAUVIDMM_ALLOC@@PEAPEAXKPEA_NPEAPEAU3@@Z.c)
 *     ?NeedsApertureForLock@VIDMM_GLOBAL@@IEAA_NPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C0050684 (-NeedsApertureForLock@VIDMM_GLOBAL@@IEAA_NPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?QueueDeferredCommand@VIDMM_GLOBAL@@QEAAJAEAVVIDMM_PAGING_QUEUE@@PEAU_VIDMM_DEFERRED_COMMAND@@_NPEA_K@Z @ 0x1C00518BC (-QueueDeferredCommand@VIDMM_GLOBAL@@QEAAJAEAVVIDMM_PAGING_QUEUE@@PEAU_VIDMM_DEFERRED_COMMAND@@_N.c)
 */

__int64 __fastcall VIDMM_GLOBAL::Lock(VIDMM_GLOBAL *this, struct _VIDMM_MULTI_ALLOC *a2, __int64 a3, void **a4)
{
  __int64 v5; // rbx
  __int64 v8; // rax
  _QWORD *v10; // r14
  __int64 v11; // rbx
  __int64 v12; // rcx
  __int64 v13; // rcx
  __int64 v14; // rcx
  __int64 v15; // r14
  __int64 v16; // rdx
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 v19; // rcx
  __int64 v20; // rax
  __int64 v21; // rcx
  __int64 v22; // rcx
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // r9
  unsigned int v27; // ebx
  int v28; // ebp
  int v29; // eax
  __int64 v30; // rdx
  __int64 v31; // rax
  _QWORD v32[10]; // [rsp+40h] [rbp-68h] BYREF
  int v33; // [rsp+C8h] [rbp+20h] BYREF
  char v34; // [rsp+CCh] [rbp+24h]

  *a4 = 0LL;
  v5 = (unsigned int)a3;
  if ( (_DWORD)a3 )
  {
    v8 = WdLogNewEntry5_WdAssertion(this, a2, a3, a4);
    *(_QWORD *)(v8 + 32) = 0LL;
    *(_QWORD *)(v8 + 24) = v5;
LABEL_3:
    WdLogEvent5_WdAssertion(v8);
    return 3221225485LL;
  }
  v10 = *(_QWORD **)a2;
  v11 = **(_QWORD **)a2;
  v12 = **(unsigned int **)(v11 + 472);
  if ( (v12 & 1) == 0 )
  {
    v8 = WdLogNewEntry5_WdAssertion(v12, a2, a3, a4);
    *(_QWORD *)(v8 + 24) = 19584LL;
    goto LABEL_3;
  }
  if ( (v12 & 8) == 0 && !VIDMM_PROCESS::IsCurrentProcess((VIDMM_PROCESS *)v10[1]) )
  {
    v8 = WdLogNewEntry5_WdAssertion(v13, a2, a3, a4);
    *(_QWORD *)(v8 + 24) = 19597LL;
    goto LABEL_3;
  }
  if ( (**(_DWORD **)(v11 + 472) & 0x60000000) == 0x20000000 )
  {
    v14 = *((_QWORD *)this + 3);
    if ( (*(_DWORD *)(v14 + 284) & 8) == 0 && (*(_DWORD *)(v14 + 1380) & 0x80u) == 0 && v10 != *(_QWORD **)(v11 + 96) )
    {
      v8 = WdLogNewEntry5_WdAssertion(v14, a2, a3, a4);
      *(_QWORD *)(v8 + 24) = 19612LL;
      goto LABEL_3;
    }
  }
  KeEnterCriticalRegion();
  v15 = v11 + 464;
  ExAcquirePushLockExclusiveEx(v11 + 464, 0LL);
  v19 = *(unsigned int *)(v11 + 336);
  if ( (_DWORD)v19 )
  {
    if ( (*(_DWORD *)(v11 + 84) & 0x20) == 0 )
    {
      v20 = WdLogNewEntry5_WdAssertion(v19, v16, v17, v18);
      *(_QWORD *)(v20 + 24) = 19623LL;
LABEL_30:
      WdLogEvent5_WdAssertion(v20);
      v27 = -1073741811;
LABEL_33:
      ExReleasePushLockExclusiveEx(v15, 0LL);
      KeLeaveCriticalRegion();
      return v27;
    }
  }
  else
  {
    v21 = **(unsigned int **)(v11 + 472);
    if ( (v21 & 1) != 0 )
    {
      if ( (v21 & 4) != 0 )
      {
        if ( (*(_BYTE *)(v11 + 76) & 0x40) == 0 )
        {
          v22 = *(unsigned int *)(*((_QWORD *)this + 3) + 284LL);
          if ( (v22 & 4) == 0 )
          {
            LOBYTE(v18) = (*(_BYTE *)(v11 + 76) & 0x40) != 0;
            v20 = WdLogNewEntry5_WdAssertion(v22, v16, v17, v18);
            *(_QWORD *)(v20 + 24) = 19649LL;
            goto LABEL_30;
          }
        }
      }
      else if ( *((_BYTE *)a2 + 25) & 1 | *((_DWORD *)a2 + 38)
             && VIDMM_GLOBAL::NeedsApertureForLock(this, (struct _VIDMM_GLOBAL_ALLOC *)v11)
             && !(_BYTE)v26
             && (*(_DWORD *)(v11 + 76) & 0x100) == 0 )
      {
        v20 = WdLogNewEntry5_WdAssertion(v24, v23, v25, v26);
        *(_QWORD *)(v20 + 24) = 19659LL;
        goto LABEL_30;
      }
    }
    else if ( (*(_DWORD *)(v11 + 76) & 0x80u) == 0 )
    {
      v20 = WdLogNewEntry5_WdAssertion(v21, v16, v17, v18);
      *(_QWORD *)(v20 + 24) = 19669LL;
      goto LABEL_30;
    }
  }
  VIDMM_GLOBAL::CalculateLockData((__int64)this, (__int64)&v33, (_BYTE **)a2);
  if ( v33 == 5 )
  {
    v27 = -1073741823;
    goto LABEL_33;
  }
  if ( v34 || (v28 = VIDMM_GLOBAL::LockInternal(this, (struct VIDMM_LOCK2_DATA *)&v33, a2, a4, 0, 0LL, 0LL), v34) )
  {
    ExReleasePushLockExclusiveEx(v11 + 464, 0LL);
    KeLeaveCriticalRegion();
    memset(v32, 0, sizeof(v32));
    v29 = *(_DWORD *)(v11 + 76);
    LODWORD(v32[5]) = 0;
    v30 = 152LL * (v29 & 0x3F);
    v31 = *((_QWORD *)a2 + 1);
    LODWORD(v32[0]) = 208;
    v32[2] = a2;
    v32[4] = a4;
    v28 = VIDMM_GLOBAL::QueueDeferredCommand(
            this,
            (struct VIDMM_PAGING_QUEUE *)(*(_QWORD *)(v31 + 64) + v30),
            (struct _VIDMM_DEFERRED_COMMAND *)v32,
            1,
            0LL);
  }
  else
  {
    ExReleasePushLockExclusiveEx(v11 + 464, 0LL);
    KeLeaveCriticalRegion();
  }
  if ( v28 >= 0 && (*((_BYTE *)this + 40552) & 8) == 0 )
    VIDMM_GLOBAL::WaitForAllPagingEngines(this, (struct _VIDMM_GLOBAL_ALLOC *)v11);
  return (unsigned int)v28;
}
