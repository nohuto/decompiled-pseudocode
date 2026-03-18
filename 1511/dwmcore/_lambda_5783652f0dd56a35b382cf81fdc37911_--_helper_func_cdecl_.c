/*
 * XREFs of _lambda_5783652f0dd56a35b382cf81fdc37911_::_helper_func_cdecl_ @ 0x1801055E0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$CGuard@VCCriticalSection@@@@QEAA@XZ @ 0x1800A1C40 (--1-$CGuard@VCCriticalSection@@@@QEAA@XZ.c)
 *     ?RemoveAt@?$DynArray@PEAVCWARPCallbackRenderer@@$0A@@@QEAAJI@Z @ 0x180105A70 (-RemoveAt@-$DynArray@PEAVCWARPCallbackRenderer@@$0A@@@QEAAJI@Z.c)
 *     ?OnCompilationCompleted@CCompiledEffectTemplate@@QEAAJXZ @ 0x18012DEB4 (-OnCompilationCompleted@CCompiledEffectTemplate@@QEAAJXZ.c)
 */

__int64 __fastcall lambda_5783652f0dd56a35b382cf81fdc37911_::_helper_func_cdecl_(__int64 a1)
{
  struct _RTL_CRITICAL_SECTION *v4; // [rsp+30h] [rbp+8h] BYREF

  v4 = (struct _RTL_CRITICAL_SECTION *)(a1 + 32);
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 32));
  if ( *(_DWORD *)(a1 + 84) )
  {
    do
    {
      CCompiledEffectTemplate::OnCompilationCompleted(*(CCompiledEffectTemplate **)(**(_QWORD **)(a1 + 88) + 24LL));
      DynArray<CWARPCallbackRenderer *,0>::RemoveAt(a1 + 88, 0LL);
    }
    while ( (*(_DWORD *)(a1 + 84))-- != 1 );
  }
  CGuard<CCriticalSection>::~CGuard<CCriticalSection>(&v4);
  return 0LL;
}
