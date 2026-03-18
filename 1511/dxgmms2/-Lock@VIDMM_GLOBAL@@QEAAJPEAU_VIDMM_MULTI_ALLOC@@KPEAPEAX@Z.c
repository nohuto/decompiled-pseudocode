/*
 * XREFs of ?Lock@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_MULTI_ALLOC@@KPEAPEAX@Z @ 0x1C0051FD0
 * Callers:
 *     ?VidMmLock@@YAJPEAVVIDMM_GLOBAL@@PEAU_VIDMM_MULTI_ALLOC@@KPEAPEAX@Z @ 0x1C00117F0 (-VidMmLock@@YAJPEAVVIDMM_GLOBAL@@PEAU_VIDMM_MULTI_ALLOC@@KPEAPEAX@Z.c)
 * Callees:
 *     memset @ 0x1C0016C00 (memset.c)
 *     ?LockInternal@VIDMM_GLOBAL@@IEAAJPEAUVIDMM_LOCK2_DATA@@PEAUVIDMM_ALLOC@@PEAPEAXKPEA_NPEAPEAU3@@Z @ 0x1C0043990 (-LockInternal@VIDMM_GLOBAL@@IEAAJPEAUVIDMM_LOCK2_DATA@@PEAUVIDMM_ALLOC@@PEAPEAXKPEA_NPEAPEAU3@@Z.c)
 *     ?WaitForAllPagingEngines@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C00472F0 (-WaitForAllPagingEngines@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?QueueDeferredCommand@VIDMM_GLOBAL@@QEAAJAEAVVIDMM_PAGING_QUEUE@@PEAU_VIDMM_DEFERRED_COMMAND@@_NPEA_K@Z @ 0x1C004BB00 (-QueueDeferredCommand@VIDMM_GLOBAL@@QEAAJAEAVVIDMM_PAGING_QUEUE@@PEAU_VIDMM_DEFERRED_COMMAND@@_N.c)
 */

__int64 __fastcall VIDMM_GLOBAL::Lock(VIDMM_GLOBAL *this, __int64 **a2, __int64 a3, void **a4)
{
  __int64 v4; // rbx
  __int64 v8; // rax
  __int64 *v10; // r14
  __int64 v11; // rdi
  __int64 v12; // rcx
  __int64 v13; // rax
  _QWORD *v14; // rbx
  __int64 v15; // rcx
  __int64 v16; // rax
  int v17; // ecx
  __int64 v18; // rcx
  __int64 v19; // rax
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // r9
  __int64 v24; // rax
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // rcx
  __int64 *v29; // r9
  __int64 v30; // rdx
  int v31; // eax
  __int64 v32; // rcx
  int v33; // r8d
  int v34; // ebx
  __int64 v35; // rax
  _QWORD v36[15]; // [rsp+40h] [rbp-78h] BYREF
  int v37; // [rsp+D8h] [rbp+20h] BYREF
  char v38; // [rsp+DCh] [rbp+24h]

  v4 = (unsigned int)a3;
  *a4 = 0LL;
  if ( (_DWORD)a3 )
  {
    v8 = WdLogNewEntry5_WdAssertion(this, a2, a3, a4);
    *(_QWORD *)(v8 + 24) = v4;
    *(_QWORD *)(v8 + 32) = 0LL;
    WdLogEvent5_WdAssertion(v8);
    return 3221225485LL;
  }
  v10 = *a2;
  v11 = **a2;
  v12 = **(unsigned int **)(v11 + 472);
  if ( (v12 & 1) == 0 )
  {
    v13 = WdLogNewEntry5_WdAssertion(v12, a2, a3, a4);
    *(_QWORD *)(v13 + 24) = 19915LL;
    WdLogEvent5_WdAssertion(v13);
    return 3221225485LL;
  }
  if ( (v12 & 8) == 0 )
  {
    v14 = (_QWORD *)v10[1];
    if ( *v14 != PsGetCurrentProcess() )
    {
      v16 = WdLogNewEntry5_WdAssertion(v15, a2, a3, a4);
      *(_QWORD *)(v16 + 24) = 19928LL;
      WdLogEvent5_WdAssertion(v16);
      return 3221225485LL;
    }
  }
  v17 = **(_DWORD **)(v11 + 472);
  if ( (v17 & 0x20000000) != 0 && (v17 & 0x40000000) == 0 )
  {
    v18 = *((_QWORD *)this + 3);
    if ( (*(_DWORD *)(v18 + 284) & 0x10) == 0
      && (*(_DWORD *)(v18 + 1388) & 0x80u) == 0
      && v10 != *(__int64 **)(v11 + 96) )
    {
      v19 = WdLogNewEntry5_WdAssertion(v18, a2, a3, a4);
      *(_QWORD *)(v19 + 24) = 19943LL;
      WdLogEvent5_WdAssertion(v19);
      return 3221225485LL;
    }
  }
  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx(v11 + 464, 0LL);
  if ( *(_DWORD *)(v11 + 336) && (*(_DWORD *)(v11 + 84) & 0x20) == 0 )
  {
    v24 = WdLogNewEntry5_WdAssertion(v21, v20, v22, v23);
    *(_QWORD *)(v24 + 24) = 19954LL;
LABEL_31:
    WdLogEvent5_WdAssertion(v24);
    ExReleasePushLockExclusiveEx(v11 + 464, 0LL);
    KeLeaveCriticalRegion();
    return 3221225485LL;
  }
  if ( !*((_DWORD *)v10 + 19) )
  {
    if ( (*(_DWORD *)(v11 + 80) & 0x80u) == 0 )
    {
      if ( (*(_DWORD *)(v11 + 76) & 0x80u) == 0 )
      {
        v24 = WdLogNewEntry5_WdAssertion(v21, v20, v22, v23);
        *(_QWORD *)(v24 + 24) = 20005LL;
        goto LABEL_31;
      }
    }
    else
    {
      v25 = *(unsigned __int8 *)(v11 + 76);
      LOBYTE(v25) = (v25 & 0x40) != 0;
      if ( (**(_DWORD **)(v11 + 472) & 4) != 0 )
      {
        if ( !(_BYTE)v25 )
        {
          v26 = *(unsigned int *)(*((_QWORD *)this + 3) + 284LL);
          if ( (v26 & 8) == 0 )
          {
            v24 = WdLogNewEntry5_WdAssertion(v26, v25, v22, v23);
            *(_QWORD *)(v24 + 24) = 19980LL;
            goto LABEL_31;
          }
        }
      }
      else if ( *((_BYTE *)a2 + 25) & 1 | *((_DWORD *)a2 + 38) )
      {
        v27 = *(unsigned int *)(v11 + 76);
        if ( (v27 & 0xD0000) == 0 )
        {
          v28 = *(unsigned __int8 *)(264 * (v27 & 0x3F) + *((_QWORD *)this + 5111) + 258);
          if ( (_BYTE)v28 )
          {
            if ( !(_BYTE)v25 && (v27 & 0x100) == 0 )
            {
              v24 = WdLogNewEntry5_WdAssertion(v28, v25, v27, v23);
              *(_QWORD *)(v24 + 24) = 19990LL;
              goto LABEL_31;
            }
          }
        }
      }
    }
  }
  v29 = *a2;
  v37 = 0;
  v38 = 0;
  v30 = *v29;
  if ( !*((_DWORD *)v29 + 19) )
  {
    v31 = *(_DWORD *)(v30 + 80);
    v32 = *(_QWORD *)(v30 + 128);
    v37 = 1;
    if ( (v31 & 0x80u) == 0 )
    {
      v37 = 5;
    }
    else if ( (VIDMM_GLOBAL::_Config & 0x40) != 0 )
    {
      if ( v32 )
        goto LABEL_50;
    }
    else if ( v32 )
    {
      v33 = *(_DWORD *)(v32 + 56);
      if ( (v33 & 0x1001) == 0 )
      {
        if ( (**(_DWORD **)(v30 + 472) & 4) != 0 && (*(_DWORD *)(*((_QWORD *)this + 3) + 284LL) & 8) == 0 )
          goto LABEL_50;
        if ( (v33 & 4) != 0 )
        {
          if ( (v29[4] & 1) == 0 )
          {
            v37 = 3;
            if ( *(_QWORD *)(v30 + 256) )
              goto LABEL_50;
          }
        }
        else
        {
          if ( (v33 & 0x2000) == 0 )
            goto LABEL_50;
          v37 = 2;
          if ( *(_QWORD *)(v30 + 256) )
            goto LABEL_50;
        }
      }
    }
  }
  v34 = VIDMM_GLOBAL::LockInternal(this, (struct VIDMM_LOCK2_DATA *)&v37, (struct VIDMM_ALLOC *)a2, a4, 0, 0LL, 0LL);
  if ( !v38 )
  {
    ExReleasePushLockExclusiveEx(v11 + 464, 0LL);
    KeLeaveCriticalRegion();
    goto LABEL_52;
  }
LABEL_50:
  ExReleasePushLockExclusiveEx(v11 + 464, 0LL);
  KeLeaveCriticalRegion();
  memset(v36, 0, 0x50uLL);
  v35 = *(_DWORD *)(v11 + 76) & 0x3F;
  LODWORD(v36[0]) = 208;
  v36[2] = a2;
  v36[4] = a4;
  LODWORD(v36[5]) = 0;
  v34 = VIDMM_GLOBAL::QueueDeferredCommand(
          this,
          (struct VIDMM_PAGING_QUEUE *)(a2[1][8] + 160 * v35),
          (struct _VIDMM_DEFERRED_COMMAND *)v36,
          1,
          0LL);
LABEL_52:
  if ( v34 >= 0 && (*((_BYTE *)this + 40608) & 8) == 0 )
    VIDMM_GLOBAL::WaitForAllPagingEngines(this, (struct _VIDMM_GLOBAL_ALLOC *)v11);
  return (unsigned int)v34;
}
