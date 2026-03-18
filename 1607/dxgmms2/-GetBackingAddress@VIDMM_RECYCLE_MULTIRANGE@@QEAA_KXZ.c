/*
 * XREFs of ?GetBackingAddress@VIDMM_RECYCLE_MULTIRANGE@@QEAA_KXZ @ 0x1C00959DC
 * Callers:
 *     ?GetBackingAddress@VIDMM_RECYCLE_HEAP_MGR@@UEAA_KPEAX@Z @ 0x1C0095990 (-GetBackingAddress@VIDMM_RECYCLE_HEAP_MGR@@UEAA_KPEAX@Z.c)
 * Callees:
 *     ?CopyPfnArray@VIDMM_RECYCLE_HEAP_PHYSICAL_VIEW@@QEAAXPEA_K_K1@Z @ 0x1C0065F80 (-CopyPfnArray@VIDMM_RECYCLE_HEAP_PHYSICAL_VIEW@@QEAAXPEA_K_K1@Z.c)
 */

unsigned __int64 __fastcall VIDMM_RECYCLE_MULTIRANGE::GetBackingAddress(VIDMM_RECYCLE_MULTIRANGE *this)
{
  unsigned __int64 v1; // r8
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // r9
  unsigned __int64 v7; // rdi
  __int64 v8; // rbx
  _QWORD *v9; // rax
  unsigned __int64 v11; // [rsp+30h] [rbp+8h] BYREF

  v1 = *((_QWORD *)this + 4);
  v11 = 0LL;
  VIDMM_RECYCLE_HEAP_PHYSICAL_VIEW::CopyPfnArray(
    (VIDMM_RECYCLE_HEAP_PHYSICAL_VIEW *)(*((_QWORD *)this + 10) + 88LL),
    &v11,
    v1,
    v1 + 4096);
  v7 = v11;
  if ( !v11 )
  {
    v8 = *((_QWORD *)this + 4);
    v9 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v4, v3, v5, v6);
    v9[7] = 0LL;
    v9[3] = 270LL;
    v9[4] = 52LL;
    v9[5] = 20LL;
    v9[6] = v8;
    WdLogEvent5_WdCriticalError(v9);
  }
  return v7 << 12;
}
