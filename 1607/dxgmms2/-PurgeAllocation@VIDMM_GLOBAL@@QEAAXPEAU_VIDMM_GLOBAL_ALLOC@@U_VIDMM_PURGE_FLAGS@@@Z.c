/*
 * XREFs of ?PurgeAllocation@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@U_VIDMM_PURGE_FLAGS@@@Z @ 0x1C006A12C
 * Callers:
 *     ?PurgeContent@VIDMM_SEGMENT@@QEAAXU_VIDMM_PURGE_FLAGS@@PEAVVIDMM_PROCESS@@@Z @ 0x1C0069D54 (-PurgeContent@VIDMM_SEGMENT@@QEAAXU_VIDMM_PURGE_FLAGS@@PEAVVIDMM_PROCESS@@@Z.c)
 *     ?PurgeCpuVisibleAllocations@VIDMM_MEMORY_SEGMENT@@QEAAXU_VIDMM_PURGE_FLAGS@@@Z @ 0x1C0097DDC (-PurgeCpuVisibleAllocations@VIDMM_MEMORY_SEGMENT@@QEAAXU_VIDMM_PURGE_FLAGS@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0014AE0 (_guard_dispatch_icall_nop.c)
 *     ?FlushPagingBufferInternal@VIDMM_GLOBAL@@QEAAXKEP6AXPEAX@Z0EE@Z @ 0x1C004FD80 (-FlushPagingBufferInternal@VIDMM_GLOBAL@@QEAAXKEP6AXPEAX@Z0EE@Z.c)
 */

void __fastcall VIDMM_GLOBAL::PurgeAllocation(VIDMM_GLOBAL *a1, __int64 a2, __int64 a3, __int64 a4)
{
  _BYTE *v4; // rax
  char v7; // di
  _QWORD *v8; // rax
  __int64 v9; // rdx
  _QWORD *v10; // rcx
  __int64 v11; // rcx
  unsigned int v12; // [rsp+60h] [rbp+18h]

  v12 = a3;
  v4 = *(_BYTE **)&g_IsInternalReleaseOrDbg;
  v7 = 0;
  if ( g_IsInternalReleaseOrDbg )
  {
    *(_QWORD *)(WdLogNewEntry5_WdTrace(a1, a2, a3, a4) + 24) = a2;
    a3 = v12;
    v4 = *(_BYTE **)&g_IsInternalReleaseOrDbg;
  }
  if ( !*(_DWORD *)(a2 + 160) )
  {
    if ( *(_QWORD *)(a2 + 136) )
    {
      if ( *v4 )
      {
        WdLogNewEntry5_WdTrace(a1, a2, a3, a4);
        a3 = v12;
      }
      if ( (a3 & 2) != 0 || (a3 & 4) != 0 || (LOBYTE(a4) = 0, (a3 & 0x20) != 0) )
        LOBYTE(a4) = 1;
      LOBYTE(a3) = a3 & 1;
      (*(void (__fastcall **)(_QWORD, __int64, __int64, __int64, _BYTE, _QWORD))(**(_QWORD **)(a2 + 136) + 48LL))(
        *(_QWORD *)(a2 + 136),
        a2,
        a3,
        a4,
        0,
        0LL);
      v4 = *(_BYTE **)&g_IsInternalReleaseOrDbg;
      v7 = 1;
    }
    if ( *(_QWORD *)(a2 + 264) )
    {
      if ( *v4 )
        WdLogNewEntry5_WdTrace(a1, a2, a3, a4);
      if ( v7 == 1 )
        VIDMM_GLOBAL::FlushPagingBufferInternal(a1, *(_DWORD *)(a2 + 76) & 0x3F, 0LL, 0LL, 0LL, 0, 0);
      v8 = (_QWORD *)(a2 + 232);
      v9 = *(_QWORD *)(a2 + 232);
      v10 = *(_QWORD **)(a2 + 240);
      if ( *(_QWORD *)(v9 + 8) != a2 + 232 || (_QWORD *)*v10 != v8 )
        __fastfail(3u);
      *v10 = v9;
      *(_QWORD *)(v9 + 8) = v10;
      v11 = *(_QWORD *)(a2 + 264);
      *v8 = 0LL;
      *(_QWORD *)(a2 + 240) = 0LL;
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v11 + 88LL))(v11, a2);
      goto LABEL_19;
    }
    if ( v7 == 1 )
LABEL_19:
      VIDMM_GLOBAL::FlushPagingBufferInternal(a1, *(_DWORD *)(a2 + 76) & 0x3F, 0LL, 0LL, 0LL, 0, 0);
  }
}
