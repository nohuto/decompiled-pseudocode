/*
 * XREFs of ?ReserveTemporaryResource@VIDMM_SYSMEM_SEGMENT@@UEAAJPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C006BC00
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0008180 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall VIDMM_SYSMEM_SEGMENT::ReserveTemporaryResource(
        VIDMM_SYSMEM_SEGMENT *this,
        struct _VIDMM_GLOBAL_ALLOC *a2)
{
  (*(void (__fastcall **)(VIDMM_SYSMEM_SEGMENT *))(*(_QWORD *)this + 56LL))(this);
  *((_QWORD *)a2 + 30) = -1LL;
  *((_QWORD *)a2 + 31) = 0LL;
  *((_QWORD *)a2 + 32) = this;
  return 0LL;
}
