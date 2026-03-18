/*
 * XREFs of ?Init@VIDMM_PROCESS_HEAP@@UEAAJPEAVVIDMM_PROCESS@@@Z @ 0x1C0089100
 * Callers:
 *     <none>
 * Callees:
 *     ??2@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C00115F0 (--2@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ??0DXGFASTMUTEX@@QEAA@W4_DXGK_BLOCK_THREAD_REASON@@W4DXGK_LOCK_ORDER@@@Z @ 0x1C0011DE8 (--0DXGFASTMUTEX@@QEAA@W4_DXGK_BLOCK_THREAD_REASON@@W4DXGK_LOCK_ORDER@@@Z.c)
 */

__int64 __fastcall VIDMM_PROCESS_HEAP::Init(VIDMM_PROCESS_HEAP *this, struct VIDMM_PROCESS *a2)
{
  __int64 v3; // rax
  __int64 v4; // rcx
  __int64 v5; // rax

  *((_QWORD *)this + 1) = a2;
  v3 = (__int64)operator new(0x40uLL, 0x38326956u, (POOL_TYPE)512);
  if ( v3 )
    v3 = DXGFASTMUTEX::DXGFASTMUTEX(v3, 15);
  *((_QWORD *)this + 2) = v3;
  if ( v3 )
    return 0LL;
  _InterlockedIncrement(&dword_1C002F5B4);
  v5 = WdLogNewEntry5_WdLowResource(v4);
  *(_QWORD *)(v5 + 24) = 230LL;
  WdLogEvent5_WdLowResource(v5);
  return 3221225495LL;
}
