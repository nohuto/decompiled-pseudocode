/*
 * XREFs of VidSchSetPagingNodePageDirectory @ 0x1C00151BC
 * Callers:
 *     ?InitPagingProcessVaSpace@VIDMM_GLOBAL@@QEAAJIE@Z @ 0x1C0067308 (-InitPagingProcessVaSpace@VIDMM_GLOBAL@@QEAAJIE@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C00155E0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0016890 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0016C00 (memset.c)
 *     ?RecordVaPagingHistorySetPageDirectory@VIDMM_GLOBAL@@QEAAXPEAU_EPROCESS@@PEAU_DXGKARG_SETROOTPAGETABLE@@PEAU_VIDSCH_CONTEXT@@@Z @ 0x1C00527DC (-RecordVaPagingHistorySetPageDirectory@VIDMM_GLOBAL@@QEAAXPEAU_EPROCESS@@PEAU_DXGKARG_SETROOTPAG.c)
 */

void __fastcall VidSchSetPagingNodePageDirectory(__int64 a1, unsigned int a2, UINT a3, UINT a4, UINT64 a5)
{
  __int64 v8; // rdi
  __int64 v9; // rcx
  _DXGKARG_SETROOTPAGETABLE v10; // [rsp+20h] [rbp-58h] BYREF

  v8 = *(_QWORD *)(*(_QWORD *)(a1 + 200) + 8LL * a2);
  memset(&v10, 0, sizeof(v10));
  v9 = *(_QWORD *)(a1 + 8);
  v10.hContext = *(HANDLE *)(v8 + 64);
  v10.Address.SegmentOffset = a5;
  v10.Address.SegmentId = a4;
  v10.NumEntries = a3;
  DxgCoreInterface[37](v9, (struct DXGALLOCATION *)&v10);
  *(_QWORD *)(v8 + 792) = v10.Address.SegmentOffset;
  VIDMM_GLOBAL::RecordVaPagingHistorySetPageDirectory(
    *(VIDMM_GLOBAL **)(*(_QWORD *)(a1 + 8) + 432LL),
    0LL,
    &v10,
    (struct _VIDSCH_CONTEXT *)v8);
}
