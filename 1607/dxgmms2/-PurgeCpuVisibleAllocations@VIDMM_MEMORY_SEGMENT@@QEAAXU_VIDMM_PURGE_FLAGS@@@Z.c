/*
 * XREFs of ?PurgeCpuVisibleAllocations@VIDMM_MEMORY_SEGMENT@@QEAAXU_VIDMM_PURGE_FLAGS@@@Z @ 0x1C0097DDC
 * Callers:
 *     ?ProcessSystemCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N_KPEAU_VIDSCH_SYNC_OBJECT@@@Z @ 0x1C0053C88 (-ProcessSystemCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N_KPEAU_VIDSCH_SYNC_OBJECT@.c)
 * Callees:
 *     ?ReleaseRange@VIDMM_CPU_HOST_APERTURE@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C00123F8 (-ReleaseRange@VIDMM_CPU_HOST_APERTURE@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?UnmapRange@VIDMM_CPU_HOST_APERTURE@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C00128F8 (-UnmapRange@VIDMM_CPU_HOST_APERTURE@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     __security_check_cookie @ 0x1C0013750 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0014AE0 (_guard_dispatch_icall_nop.c)
 *     ?SuspendAccessToAllocation@VIDMM_WORKER_THREAD@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C0068CB4 (-SuspendAccessToAllocation@VIDMM_WORKER_THREAD@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?PurgeAllocation@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@U_VIDMM_PURGE_FLAGS@@@Z @ 0x1C006A12C (-PurgeAllocation@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@U_VIDMM_PURGE_FLAGS@@@Z.c)
 */

void __fastcall VIDMM_MEMORY_SEGMENT::PurgeCpuVisibleAllocations(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v4; // ebx
  _QWORD *v6; // rdi
  DXGFASTMUTEX **v7; // rdx
  DXGFASTMUTEX *v8; // rax
  _QWORD *v9; // r14
  __int64 v10; // rdi
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  _QWORD *v19; // rax
  __int64 v20; // rax
  __int64 v21; // r13
  int v22; // eax
  __int64 v23; // rdx
  __int64 v24; // r8
  __int64 v25; // r9
  __int64 v26; // r12
  __int64 v27; // rcx
  _QWORD *v28; // rax
  struct _KAPC_STATE ApcState; // [rsp+60h] [rbp-78h] BYREF

  v4 = a2;
  if ( (*(_DWORD *)(a1 + 56) & 0x6004) != 0 )
  {
    if ( g_IsInternalReleaseOrDbg )
      *(_QWORD *)(WdLogNewEntry5_WdTrace(a1, a2, a3, a4) + 24) = a1;
    v6 = *(_QWORD **)(a1 + 152);
    while ( v6 != (_QWORD *)(a1 + 152) )
    {
      v7 = (DXGFASTMUTEX **)(v6 - 50);
      v6 = (_QWORD *)*v6;
      v8 = v7[13];
      if ( v8 && (*((_BYTE *)v8 + 32) & 1) != 0 )
        VIDMM_WORKER_THREAD::SuspendAccessToAllocation(**(VIDMM_GLOBAL ****)(a1 + 8), v7);
    }
    v9 = *(_QWORD **)(a1 + 168);
    while ( v9 != (_QWORD *)(a1 + 168) )
    {
      v10 = (__int64)(v9 - 50);
      v9 = (_QWORD *)*v9;
      KeEnterCriticalRegion();
      ExAcquirePushLockExclusiveEx(v10 + 496, 0LL);
      if ( *(_DWORD *)(v10 + 344) )
      {
        ExReleasePushLockExclusiveEx(v10 + 496, 0LL);
        KeLeaveCriticalRegion();
        if ( g_IsInternalReleaseOrDbg )
          *(_QWORD *)(WdLogNewEntry5_WdTrace(v16, v15, v17, v18) + 24) = v10;
        if ( (*(_DWORD *)(v10 + 76) & 0x100) != 0 )
        {
          if ( g_IsInternalRelease )
          {
            v19 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v16, v15, v17, v18);
            v19[3] = 270LL;
            v19[4] = 9LL;
            v19[5] = 0LL;
            v19[6] = 0LL;
            v19[7] = 0LL;
            WdLogEvent5_WdCriticalError(v19);
          }
        }
        VIDMM_GLOBAL::PurgeAllocation(*(VIDMM_GLOBAL **)(a1 + 8), v10, v4, v18);
      }
      else
      {
        v20 = *(_QWORD *)(v10 + 104);
        if ( v20 && (*(_BYTE *)(v20 + 32) & 1) != 0 )
        {
          if ( g_IsInternalReleaseOrDbg )
            *(_QWORD *)(WdLogNewEntry5_WdTrace(v12, v11, v13, v14) + 24) = v10;
          v21 = *(_QWORD *)(v10 + 104);
          KeStackAttachProcess(**(PRKPROCESS **)(v21 + 8), &ApcState);
          v22 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, __int64, _QWORD, _QWORD, _QWORD, _QWORD, int, __int64))(**(_QWORD **)(*(_QWORD *)(v21 + 8) + 24LL) + 48LL))(
                  *(_QWORD *)(*(_QWORD *)(v21 + 8) + 24LL),
                  *(_QWORD *)(a1 + 8),
                  *(_QWORD *)(v21 + 24),
                  3LL,
                  0LL,
                  0LL,
                  0LL,
                  0LL,
                  1,
                  v10);
          v26 = v22;
          v27 = v22 + 0x80000000;
          if ( (int)v27 >= 0 && v22 != -1073741558 )
          {
            v28 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v27, v23, v24, v25);
            v28[6] = v26;
            v28[7] = 0LL;
            v28[3] = 270LL;
            v28[4] = 4LL;
            v28[5] = 3LL;
            WdLogEvent5_WdCriticalError(v28);
          }
          *(_BYTE *)(v21 + 32) &= ~1u;
          KeUnstackDetachProcess(&ApcState);
          if ( *(_QWORD *)(v10 + 464) )
          {
            VIDMM_CPU_HOST_APERTURE::UnmapRange(
              *(VIDMM_CPU_HOST_APERTURE **)(a1 + 472),
              (struct _VIDMM_GLOBAL_ALLOC *)v10);
            VIDMM_CPU_HOST_APERTURE::ReleaseRange(
              *(VIDMM_CPU_HOST_APERTURE **)(a1 + 472),
              (struct _VIDMM_GLOBAL_ALLOC *)v10);
          }
        }
        ExReleasePushLockExclusiveEx(v10 + 496, 0LL);
        KeLeaveCriticalRegion();
      }
    }
  }
}
