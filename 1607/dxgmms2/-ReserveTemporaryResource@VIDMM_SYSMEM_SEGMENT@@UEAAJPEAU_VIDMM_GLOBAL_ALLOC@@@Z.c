/*
 * XREFs of ?ReserveTemporaryResource@VIDMM_SYSMEM_SEGMENT@@UEAAJPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C0063900
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0014AE0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall VIDMM_SYSMEM_SEGMENT::ReserveTemporaryResource(
        VIDMM_SYSMEM_SEGMENT *this,
        struct _VIDMM_GLOBAL_ALLOC *a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // rax

  if ( g_IsInternalReleaseOrDbg )
  {
    WdLogNewEntry5_WdTrace(this, a2, a3, a4);
    v10 = WdLogNewEntry5_WdTrace(v7, v6, v8, v9);
    *(_QWORD *)(v10 + 24) = this;
    *(_QWORD *)(v10 + 32) = a2;
  }
  (*(void (__fastcall **)(VIDMM_SYSMEM_SEGMENT *, struct _VIDMM_GLOBAL_ALLOC *))(*(_QWORD *)this + 56LL))(this, a2);
  *((_QWORD *)a2 + 31) = -1LL;
  *((_QWORD *)a2 + 32) = 0LL;
  *((_QWORD *)a2 + 33) = this;
  return 0LL;
}
