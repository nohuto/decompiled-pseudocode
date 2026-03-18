/*
 * XREFs of ?OnTaskCompleted_AnyThread@CEffectCompilationService@@AEAAXPEAVCEffectCompilationTask@@_N@Z @ 0x18011BE08
 * Callers:
 *     _lambda_150d5d81640f42c693c65612364f9ad2_::_lambda_invoker_cdecl_ @ 0x18012A850 (_lambda_150d5d81640f42c693c65612364f9ad2_--_lambda_invoker_cdecl_.c)
 *     ?Cancel@CEffectCompilationTask@@QEAAXXZ @ 0x18012A954 (-Cancel@CEffectCompilationTask@@QEAAXXZ.c)
 * Callees:
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x180038B54 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?RemoveAt@?$DynArray@PEAVCWARPCallbackRenderer@@$0A@@@QEAAJI@Z @ 0x18012994C (-RemoveAt@-$DynArray@PEAVCWARPCallbackRenderer@@$0A@@@QEAAJI@Z.c)
 */

void __fastcall CEffectCompilationService::OnTaskCompleted_AnyThread(
        CEffectCompilationService *this,
        struct CEffectCompilationTask *a2,
        char a3)
{
  __int64 v6; // r8
  unsigned int v7; // ecx
  __int64 i; // r9
  struct _RTL_CRITICAL_SECTION *v9; // [rsp+30h] [rbp+8h] BYREF

  v9 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 32);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 32));
  if ( !*((_BYTE *)this + 80) )
  {
    v7 = *((_DWORD *)this + 28);
    for ( i = 0LL; (unsigned int)i < v7; i = (unsigned int)(i + 1) )
    {
      if ( *(struct CEffectCompilationTask **)(*((_QWORD *)this + 11) + 8 * i) == a2 )
        break;
    }
    if ( (unsigned int)i < v7 )
    {
      if ( (unsigned int)i >= *((_DWORD *)this + 21) )
      {
        *(_QWORD *)(*((_QWORD *)this + 11) + 8 * i) = *(_QWORD *)(*((_QWORD *)this + 11)
                                                                + 8LL * *((unsigned int *)this + 21));
        *(_QWORD *)(*((_QWORD *)this + 11) + 8LL * *((unsigned int *)this + 21)) = a2;
        i = *((unsigned int *)this + 21);
        *((_DWORD *)this + 21) = i + 1;
      }
      if ( a3 )
      {
        DynArray<CWARPCallbackRenderer *,0>::RemoveAt((char *)this + 88, (unsigned int)i, v6, i);
        --*((_DWORD *)this + 21);
      }
      SetEvent(*((HANDLE *)this + 3));
    }
  }
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v9);
}
