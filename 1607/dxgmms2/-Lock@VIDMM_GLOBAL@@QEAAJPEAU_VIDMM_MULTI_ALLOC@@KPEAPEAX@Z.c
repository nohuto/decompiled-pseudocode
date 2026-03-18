/*
 * XREFs of ?Lock@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_MULTI_ALLOC@@KPEAPEAX@Z @ 0x1C0059590
 * Callers:
 *     ?VidMmLock@@YAJPEAVVIDMM_GLOBAL@@PEAU_VIDMM_MULTI_ALLOC@@KPEAPEAX@Z @ 0x1C000FD60 (-VidMmLock@@YAJPEAVVIDMM_GLOBAL@@PEAU_VIDMM_MULTI_ALLOC@@KPEAPEAX@Z.c)
 * Callees:
 *     memset @ 0x1C0014E40 (memset.c)
 *     ?LockInternal@VIDMM_GLOBAL@@IEAAJPEAUVIDMM_LOCK2_DATA@@PEAUVIDMM_ALLOC@@PEAPEAXKPEA_NPEAPEAU3@@Z @ 0x1C004C5E0 (-LockInternal@VIDMM_GLOBAL@@IEAAJPEAUVIDMM_LOCK2_DATA@@PEAUVIDMM_ALLOC@@PEAPEAXKPEA_NPEAPEAU3@@Z.c)
 *     ?WaitForAllPagingEngines@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C004FC60 (-WaitForAllPagingEngines@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?QueueDeferredCommand@VIDMM_GLOBAL@@QEAAJAEAVVIDMM_PAGING_QUEUE@@PEAU_VIDMM_DEFERRED_COMMAND@@_NPEA_K@Z @ 0x1C0053A70 (-QueueDeferredCommand@VIDMM_GLOBAL@@QEAAJAEAVVIDMM_PAGING_QUEUE@@PEAU_VIDMM_DEFERRED_COMMAND@@_N.c)
 */

__int64 __fastcall VIDMM_GLOBAL::Lock(VIDMM_GLOBAL *this, __int64 **a2, unsigned int a3, void **a4)
{
  __int64 v4; // rbx
  __int64 *v8; // r14
  __int64 v9; // rbx
  __int64 v10; // rcx
  _QWORD *v11; // rdi
  __int64 v12; // rcx
  __int64 v13; // rdx
  __int64 v14; // rcx
  int v15; // eax
  __int64 v16; // rdx
  __int64 *v17; // r8
  __int64 v18; // r9
  int v19; // eax
  __int64 v20; // rcx
  int v21; // edx
  int v22; // edi
  __int64 v24; // rax
  __int64 v25; // rax
  __int64 v26; // rax
  __int64 v27; // rcx
  int v28; // eax
  __int64 v29; // rax
  __int64 v30; // rax
  __int64 v31; // rcx
  __int64 v32; // rcx
  __int64 v33; // rax
  __int64 v34; // rdx
  __int64 *v35; // rax
  __int64 v36; // rax
  _QWORD v37[15]; // [rsp+40h] [rbp-78h] BYREF
  int v38; // [rsp+D8h] [rbp+20h] BYREF
  char v39; // [rsp+DCh] [rbp+24h]

  v4 = a3;
  *a4 = 0LL;
  if ( a3 )
  {
    v24 = WdLogNewEntry5_WdAssertion(this, a2);
    *(_QWORD *)(v24 + 24) = v4;
    *(_QWORD *)(v24 + 32) = 0LL;
    WdLogEvent5_WdAssertion(v24);
    return 3221225485LL;
  }
  v8 = *a2;
  v9 = **a2;
  v10 = **(unsigned int **)(v9 + 504);
  if ( (v10 & 1) == 0 )
  {
    v25 = WdLogNewEntry5_WdAssertion(v10, a2);
    *(_QWORD *)(v25 + 24) = 21029LL;
    WdLogEvent5_WdAssertion(v25);
    return 3221225485LL;
  }
  if ( (v10 & 8) == 0 )
  {
    v11 = (_QWORD *)v8[1];
    if ( *v11 != PsGetCurrentProcess(v10) )
    {
      v26 = WdLogNewEntry5_WdAssertion(v12, a2);
      *(_QWORD *)(v26 + 24) = 21042LL;
      WdLogEvent5_WdAssertion(v26);
      return 3221225485LL;
    }
  }
  if ( (**(_DWORD **)(v9 + 504) & 0x60000000) == 0x20000000 )
  {
    v27 = *((_QWORD *)this + 3);
    v28 = *(_DWORD *)(v27 + 300);
    if ( (v28 & 0x10) == 0 && (v28 & 8) == 0 && (*(_DWORD *)(v27 + 1524) & 0x80u) == 0 && v8 != *(__int64 **)(v9 + 104) )
    {
      v29 = WdLogNewEntry5_WdAssertion(v27, a2);
      *(_QWORD *)(v29 + 24) = 21058LL;
      WdLogEvent5_WdAssertion(v29);
      return 3221225485LL;
    }
  }
  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx(v9 + 496, 0LL);
  if ( *(_DWORD *)(v9 + 344) && (*(_DWORD *)(v9 + 84) & 0x20) == 0 )
  {
    v30 = WdLogNewEntry5_WdAssertion(v14, v13);
    *(_QWORD *)(v30 + 24) = 21069LL;
LABEL_43:
    WdLogEvent5_WdAssertion(v30);
    ExReleasePushLockExclusiveEx(v9 + 496, 0LL);
    KeLeaveCriticalRegion();
    return 3221225485LL;
  }
  if ( !*((_DWORD *)v8 + 19) )
  {
    v15 = *(_DWORD *)(v9 + 76);
    if ( (*(_DWORD *)(v9 + 80) & 0x80u) == 0 )
    {
      if ( (v15 & 0x80u) == 0 )
      {
        v30 = WdLogNewEntry5_WdAssertion(v14, v13);
        *(_QWORD *)(v30 + 24) = 21120LL;
        goto LABEL_43;
      }
    }
    else if ( (**(_DWORD **)(v9 + 504) & 4) != 0 )
    {
      if ( (v15 & 0x40) == 0 )
      {
        v31 = *(unsigned int *)(*((_QWORD *)this + 3) + 300LL);
        if ( (v31 & 8) == 0 )
        {
          v30 = WdLogNewEntry5_WdAssertion(v31, v13);
          *(_QWORD *)(v30 + 24) = 21095LL;
          goto LABEL_43;
        }
      }
    }
    else if ( ((*((_BYTE *)a2 + 25) & 1) != 0) | *((_DWORD *)a2 + 42) )
    {
      v16 = *(unsigned int *)(v9 + 76);
      if ( (v16 & 0xD0000) == 0 )
      {
        v32 = *(unsigned __int8 *)(264 * (v16 & 0x3F) + *((_QWORD *)this + 5150) + 258);
        if ( (_BYTE)v32 )
        {
          if ( (v15 & 0x40) == 0 && (v16 & 0x100) == 0 )
          {
            v30 = WdLogNewEntry5_WdAssertion(v32, v16);
            *(_QWORD *)(v30 + 24) = 21105LL;
            goto LABEL_43;
          }
        }
      }
    }
  }
  v17 = *a2;
  v38 = 0;
  v39 = 0;
  v18 = *v17;
  if ( !*((_DWORD *)v17 + 19) )
  {
    v19 = *(_DWORD *)(v18 + 80);
    v20 = *(_QWORD *)(v18 + 136);
    v38 = 1;
    if ( (v19 & 0x80u) == 0 )
    {
      v38 = 5;
    }
    else if ( (*((_DWORD *)this + 1616) & 0x20) != 0 )
    {
      if ( v20 )
        goto LABEL_45;
    }
    else if ( v20 )
    {
      v21 = *(_DWORD *)(v20 + 56);
      if ( (v21 & 0x1001) == 0 )
      {
        if ( (**(_DWORD **)(v18 + 504) & 4) != 0 && (*(_DWORD *)(*((_QWORD *)this + 3) + 300LL) & 8) == 0 )
          goto LABEL_45;
        if ( (v21 & 4) != 0 )
        {
          if ( (v17[4] & 1) == 0 )
          {
            v38 = 3;
            if ( *(_QWORD *)(v18 + 264) )
              goto LABEL_45;
          }
        }
        else
        {
          if ( (v21 & 0x2000) == 0 )
            goto LABEL_45;
          v36 = *(_QWORD *)(v18 + 104);
          if ( !v36 || (*(_BYTE *)(v36 + 32) & 1) == 0 )
            goto LABEL_45;
          v38 = 0;
        }
      }
    }
  }
  v22 = VIDMM_GLOBAL::LockInternal(this, (struct VIDMM_LOCK2_DATA *)&v38, (struct VIDMM_ALLOC *)a2, a4, 0, 0LL, 0LL);
  if ( v39 )
  {
LABEL_45:
    ExReleasePushLockExclusiveEx(v9 + 496, 0LL);
    KeLeaveCriticalRegion();
    memset(v37, 0, 0x50uLL);
    v33 = *(_DWORD *)(v9 + 76) & 0x3F;
    LODWORD(v37[0]) = 208;
    v34 = 168 * v33;
    v35 = a2[1];
    v37[2] = a2;
    v37[4] = a4;
    LODWORD(v37[5]) = 0;
    v22 = VIDMM_GLOBAL::QueueDeferredCommand(
            this,
            (struct VIDMM_PAGING_QUEUE *)(v35[9] + v34),
            (struct _VIDMM_DEFERRED_COMMAND *)v37,
            1,
            0LL);
    goto LABEL_19;
  }
  ExReleasePushLockExclusiveEx(v9 + 496, 0LL);
  KeLeaveCriticalRegion();
LABEL_19:
  if ( v22 >= 0 && (*((_BYTE *)this + 40872) & 8) == 0 )
    VIDMM_GLOBAL::WaitForAllPagingEngines(this, (struct _VIDMM_GLOBAL_ALLOC *)v9);
  return (unsigned int)v22;
}
