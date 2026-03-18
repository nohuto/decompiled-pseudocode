/*
 * XREFs of ?OnTaskCompleted_AnyThread@CEffectCompilationService@@AEAAXPEAVCEffectCompilationTask@@_N@Z @ 0x1800E9A38
 * Callers:
 *     _lambda_d7dfba564e8f284c77d6eef2ecd3c3f1_::_helper_func_cdecl_ @ 0x1800F8200 (_lambda_d7dfba564e8f284c77d6eef2ecd3c3f1_--_helper_func_cdecl_.c)
 *     ?Cancel@CEffectCompilationTask@@QEAAXXZ @ 0x1800F8328 (-Cancel@CEffectCompilationTask@@QEAAXXZ.c)
 * Callees:
 *     ??1?$CGuard@VCCriticalSection@@@@QEAA@XZ @ 0x180051C78 (--1-$CGuard@VCCriticalSection@@@@QEAA@XZ.c)
 *     ?RemoveAt@?$DynArray@PEAVCWARPCallbackRenderer@@$0A@@@QEAAJI@Z @ 0x1800DEB0C (-RemoveAt@-$DynArray@PEAVCWARPCallbackRenderer@@$0A@@@QEAAJI@Z.c)
 */

void __fastcall CEffectCompilationService::OnTaskCompleted_AnyThread(
        CEffectCompilationService *this,
        struct CEffectCompilationTask *a2,
        char a3)
{
  unsigned int v6; // ecx
  __int64 i; // r9
  struct _RTL_CRITICAL_SECTION *v8; // [rsp+30h] [rbp+8h] BYREF

  v8 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 32);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 32));
  if ( !*((_BYTE *)this + 80) )
  {
    v6 = *((_DWORD *)this + 28);
    for ( i = 0LL; (unsigned int)i < v6; i = (unsigned int)(i + 1) )
    {
      if ( *(struct CEffectCompilationTask **)(*((_QWORD *)this + 11) + 8 * i) == a2 )
        break;
    }
    if ( (unsigned int)i < v6 )
    {
      if ( (unsigned int)i >= *((_DWORD *)this + 21) )
      {
        *(_QWORD *)(*((_QWORD *)this + 11) + 8 * i) = *(_QWORD *)(*((_QWORD *)this + 11)
                                                                + 8LL * *((unsigned int *)this + 21));
        *(_QWORD *)(*((_QWORD *)this + 11) + 8LL * *((unsigned int *)this + 21)) = a2;
        LODWORD(i) = *((_DWORD *)this + 21);
        *((_DWORD *)this + 21) = i + 1;
      }
      if ( a3 )
      {
        DynArray<CWARPCallbackRenderer *,0>::RemoveAt((__int64 *)this + 11, i);
        --*((_DWORD *)this + 21);
      }
      SetEvent(*((HANDLE *)this + 3));
    }
  }
  CGuard<CCriticalSection>::~CGuard<CCriticalSection>(&v8);
}
