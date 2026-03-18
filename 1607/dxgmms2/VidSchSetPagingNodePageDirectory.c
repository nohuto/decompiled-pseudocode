/*
 * XREFs of VidSchSetPagingNodePageDirectory @ 0x1C001305C
 * Callers:
 *     ?InitPagingProcessVaSpace@VIDMM_GLOBAL@@QEAAJIE@Z @ 0x1C006F124 (-InitPagingProcessVaSpace@VIDMM_GLOBAL@@QEAAJIE@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0013750 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0014AE0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0014E40 (memset.c)
 *     ?RecordVaPagingHistorySetPageDirectory@VIDMM_GLOBAL@@QEAAXPEAU_EPROCESS@@PEAU_DXGKARG_SETROOTPAGETABLE@@PEAU_VIDSCH_CONTEXT@@@Z @ 0x1C0059B60 (-RecordVaPagingHistorySetPageDirectory@VIDMM_GLOBAL@@QEAAXPEAU_EPROCESS@@PEAU_DXGKARG_SETROOTPAG.c)
 */

void __fastcall VidSchSetPagingNodePageDirectory(_QWORD *a1, unsigned int a2, UINT a3, UINT a4, UINT64 a5)
{
  __int64 v7; // r14
  char i; // si
  __int64 v10; // rax
  __int64 v11; // rbp
  __int64 v12; // rcx
  _DXGKARG_SETROOTPAGETABLE v13; // [rsp+20h] [rbp-78h] BYREF

  v7 = a2;
  for ( i = 0; ; i = 1 )
  {
    v10 = i ? a1[29] : a1[28];
    v11 = *(_QWORD *)(v10 + 8 * v7);
    memset(&v13, 0, sizeof(v13));
    v12 = a1[1];
    v13.hContext = *(HANDLE *)(v11 + 64);
    v13.Address.SegmentId = a4;
    v13.Address.SegmentOffset = a5;
    v13.NumEntries = a3;
    ((void (__fastcall *)(__int64, _DXGKARG_SETROOTPAGETABLE *))DxgCoreInterface[37])(v12, &v13);
    *(_QWORD *)(v11 + 824) = v13.Address.SegmentOffset;
    VIDMM_GLOBAL::RecordVaPagingHistorySetPageDirectory(
      *(VIDMM_GLOBAL **)(a1[1] + 408LL),
      0LL,
      &v13,
      (struct _VIDSCH_CONTEXT *)v11);
    if ( i || (*(_BYTE *)(*(_QWORD *)(a1[2] + 2040LL) + 48 * v7 + 16) & 0xC) != 0xC )
      break;
  }
}
