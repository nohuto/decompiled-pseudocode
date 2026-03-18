/*
 * XREFs of VidSchSetPagingNodePageDirectory @ 0x1C001D040
 * Callers:
 *     ?InitPagingProcessVaSpace@VIDMM_GLOBAL@@QEAAJIE@Z @ 0x1C0039A20 (-InitPagingProcessVaSpace@VIDMM_GLOBAL@@QEAAJIE@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0006E70 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0008180 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0008500 (memset.c)
 *     ?RecordVaPagingHistorySetPageDirectory@VIDMM_GLOBAL@@QEAAXPEAU_EPROCESS@@PEAU_DXGKARG_SETROOTPAGETABLE@@PEAU_VIDSCH_CONTEXT@@@Z @ 0x1C0062284 (-RecordVaPagingHistorySetPageDirectory@VIDMM_GLOBAL@@QEAAXPEAU_EPROCESS@@PEAU_DXGKARG_SETROOTPAG.c)
 */

void __fastcall VidSchSetPagingNodePageDirectory(__int64 a1, unsigned int a2, UINT a3, UINT a4, UINT64 a5)
{
  __int64 v8; // rdi
  __int64 v9; // rcx
  struct _DXGKARG_SETROOTPAGETABLE v10; // [rsp+20h] [rbp-58h] BYREF

  v8 = *(_QWORD *)(*(_QWORD *)(a1 + 192) + 8LL * a2);
  memset(&v10, 0, sizeof(v10));
  v9 = *(_QWORD *)(a1 + 8);
  v10.hContext = *(HANDLE *)(v8 + 64);
  v10.Address.SegmentOffset = a5;
  v10.Address.SegmentId = a4;
  v10.NumEntries = a3;
  ((__int64 (__fastcall **)(__int64, struct _DXGKARG_SETROOTPAGETABLE *))DxgCoreInterface)[37](v9, &v10);
  *(_QWORD *)(v8 + 792) = v10.Address.SegmentOffset;
  VIDMM_GLOBAL::RecordVaPagingHistorySetPageDirectory(
    *(VIDMM_GLOBAL **)(*(_QWORD *)(a1 + 8) + 408LL),
    0LL,
    &v10,
    (struct _VIDSCH_CONTEXT *)v8);
}
