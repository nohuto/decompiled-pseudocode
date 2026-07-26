/*
 * XREFs of ?reserve@?$KArray@PEAX@Rtl@@QEAA_N_K@Z @ 0x1C00A5880
 * Callers:
 *     _lambda_ec9adc5b0c3de61ef55d8ad95ac8116c_::operator() @ 0x1C00A56AC (_lambda_ec9adc5b0c3de61ef55d8ad95ac8116c_--operator().c)
 *     ?grow@?$KArray@PEAX@Rtl@@AEAA_N_K@Z @ 0x1C00A5914 (-grow@-$KArray@PEAX@Rtl@@AEAA_N_K@Z.c)
 *     ?resize@?$KArray@PEAX@Rtl@@QEAA_N_K@Z @ 0x1C00A5948 (-resize@-$KArray@PEAX@Rtl@@QEAA_N_K@Z.c)
 * Callees:
 *     memmove @ 0x1C0023700 (memmove.c)
 */

char __fastcall Rtl::KArray<void *>::reserve(__int64 a1, unsigned __int64 a2)
{
  int v2; // edi
  PVOID PoolWithTag; // rax
  PVOID v5; // rsi
  void *v6; // rcx

  v2 = a2;
  if ( *(unsigned int *)(a1 + 4) >= a2 )
    return 1;
  if ( a2 < 0xFFFFFFFF && is_mul_ok(8uLL, a2) )
  {
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, 8 * a2, 0x7272414Bu);
    v5 = PoolWithTag;
    if ( PoolWithTag )
    {
      memmove(PoolWithTag, *(const void **)(a1 + 16), 8LL * *(unsigned int *)(a1 + 8));
      v6 = *(void **)(a1 + 16);
      if ( v6 )
        ExFreePoolWithTag(v6, 0x7272414Bu);
      *(_DWORD *)(a1 + 4) = v2;
      *(_QWORD *)(a1 + 16) = v5;
      return 1;
    }
  }
  return 0;
}
