/*
 * XREFs of _lambda_5783652f0dd56a35b382cf81fdc37911_::_helper_func_cdecl_ @ 0x1800E9660
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$CGuard@VCCriticalSection@@@@QEAA@XZ @ 0x180051C78 (--1-$CGuard@VCCriticalSection@@@@QEAA@XZ.c)
 *     ?RemoveAt@?$DynArray@PEAVCWARPCallbackRenderer@@$0A@@@QEAAJI@Z @ 0x1800DEB0C (-RemoveAt@-$DynArray@PEAVCWARPCallbackRenderer@@$0A@@@QEAAJI@Z.c)
 *     ?OnCompilationCompleted@CCompiledEffectTemplate@@QEAAJXZ @ 0x1801154B8 (-OnCompilationCompleted@CCompiledEffectTemplate@@QEAAJXZ.c)
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
      DynArray<CWARPCallbackRenderer *,0>::RemoveAt((__int64 *)(a1 + 88), 0);
    }
    while ( (*(_DWORD *)(a1 + 84))-- != 1 );
  }
  CGuard<CCriticalSection>::~CGuard<CCriticalSection>(&v4);
  return 0LL;
}
