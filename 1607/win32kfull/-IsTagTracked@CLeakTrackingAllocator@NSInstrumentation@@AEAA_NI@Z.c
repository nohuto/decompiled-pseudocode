/*
 * XREFs of ?IsTagTracked@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NI@Z @ 0x1C01278A0
 * Callers:
 *     ?Allocate@CLeakTrackingAllocator@NSInstrumentation@@QEAAPEAXW4_POOL_TYPE@@_KI@Z @ 0x1C01278EC (-Allocate@CLeakTrackingAllocator@NSInstrumentation@@QEAAPEAXW4_POOL_TYPE@@_KI@Z.c)
 *     ?AllocatePagedLookasideList@CLeakTrackingAllocator@NSInstrumentation@@QEAAPEAX_KIII@Z @ 0x1C012794C (-AllocatePagedLookasideList@CLeakTrackingAllocator@NSInstrumentation@@QEAAPEAX_KIII@Z.c)
 *     ??$AllocateCommon@V_lambda_c4c4ea517b44899cfbbfd85c0dbd9cda_@@V_lambda_fb1d754a87bb4379b691d90d9f0cbdb4_@@@CLeakTrackingAllocator@NSInstrumentation@@AEAAPEAX_KIV_lambda_c4c4ea517b44899cfbbfd85c0dbd9cda_@@V_lambda_fb1d754a87bb4379b691d90d9f0cbdb4_@@@Z @ 0x1C02D7768 (--$AllocateCommon@V_lambda_c4c4ea517b44899cfbbfd85c0dbd9cda_@@V_lambda_fb1d754a87bb4379b691d90d9.c)
 * Callees:
 *     <none>
 */

char __fastcall NSInstrumentation::CLeakTrackingAllocator::IsTagTracked(
        NSInstrumentation::CLeakTrackingAllocator *this,
        int a2)
{
  __int64 v3; // rax

  if ( (a2 & *((_DWORD *)this + 10)) != a2 )
    return 0;
  v3 = 0LL;
  if ( !*((_DWORD *)this + 11) )
    return 0;
  while ( *((_DWORD *)this + v3) != a2 )
  {
    if ( ++v3 >= (unsigned __int64)*((unsigned int *)this + 11) )
      return 0;
  }
  return 1;
}
