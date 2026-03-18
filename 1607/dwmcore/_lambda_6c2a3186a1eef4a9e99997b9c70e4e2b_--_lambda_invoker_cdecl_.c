/*
 * XREFs of _lambda_6c2a3186a1eef4a9e99997b9c70e4e2b_::_lambda_invoker_cdecl_ @ 0x18011BAB0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x180038B54 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?RemoveAt@?$DynArray@PEAVCWARPCallbackRenderer@@$0A@@@QEAAJI@Z @ 0x18012994C (-RemoveAt@-$DynArray@PEAVCWARPCallbackRenderer@@$0A@@@QEAAJI@Z.c)
 *     ?OnCompilationCompleted@CCompiledEffectTemplate@@QEAAJXZ @ 0x18014E6CC (-OnCompilationCompleted@CCompiledEffectTemplate@@QEAAJXZ.c)
 */

__int64 __fastcall lambda_6c2a3186a1eef4a9e99997b9c70e4e2b_::_lambda_invoker_cdecl_(__int64 a1)
{
  __int64 v2; // r8
  __int64 v3; // r9
  struct _RTL_CRITICAL_SECTION *v6; // [rsp+30h] [rbp+8h] BYREF

  v6 = (struct _RTL_CRITICAL_SECTION *)(a1 + 32);
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 32));
  if ( *(_DWORD *)(a1 + 84) )
  {
    do
    {
      CCompiledEffectTemplate::OnCompilationCompleted(*(CCompiledEffectTemplate **)(**(_QWORD **)(a1 + 88) + 24LL));
      DynArray<CWARPCallbackRenderer *,0>::RemoveAt(a1 + 88, 0LL, v2, v3);
    }
    while ( (*(_DWORD *)(a1 + 84))-- != 1 );
  }
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v6);
  return 0LL;
}
