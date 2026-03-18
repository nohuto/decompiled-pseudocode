/*
 * XREFs of _lambda_d7dfba564e8f284c77d6eef2ecd3c3f1_::_helper_func_cdecl_ @ 0x1800F8200
 * Callers:
 *     <none>
 * Callees:
 *     ?GetRestrictedErrorDescription@CEffectCompilationTask@@SAJPEAPEAG@Z @ 0x1800F8378 (-GetRestrictedErrorDescription@CEffectCompilationTask@@SAJPEAPEAG@Z.c)
 */

void __fastcall lambda_d7dfba564e8f284c77d6eef2ecd3c3f1_::_helper_func_cdecl_(
        PTP_CALLBACK_INSTANCE Instance,
        char *Context,
        PTP_WORK Work)
{
  int v4; // eax
  int v5; // edi
  CEffectCompilationService *v6; // rcx

  SetRestrictedErrorInfo(0LL, Context, Work);
  v4 = CompileEffectDescription(*((_QWORD *)Context + 4), Context + 56);
  v5 = 0;
  *((_DWORD *)Context + 18) = v4;
  if ( v4 < 0 )
    CEffectCompilationTask::GetRestrictedErrorDescription((unsigned __int16 **)Context + 8);
  v6 = (CEffectCompilationService *)*((_QWORD *)Context + 2);
  LOBYTE(v5) = *((int *)Context + 18) < 0;
  *((_DWORD *)Context + 12) = v5 + 2;
  CEffectCompilationService::OnTaskCompleted_AnyThread(v6, (struct CEffectCompilationTask *)Context, 0);
}
