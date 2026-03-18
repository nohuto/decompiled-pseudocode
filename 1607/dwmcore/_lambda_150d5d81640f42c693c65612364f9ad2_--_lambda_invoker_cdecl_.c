/*
 * XREFs of _lambda_150d5d81640f42c693c65612364f9ad2_::_lambda_invoker_cdecl_ @ 0x18012A850
 * Callers:
 *     <none>
 * Callees:
 *     ?GetRestrictedErrorDescription@CEffectCompilationTask@@SAJPEAPEAG@Z @ 0x18012A9A4 (-GetRestrictedErrorDescription@CEffectCompilationTask@@SAJPEAPEAG@Z.c)
 */

void __fastcall lambda_150d5d81640f42c693c65612364f9ad2_::_lambda_invoker_cdecl_(
        PTP_CALLBACK_INSTANCE Instance,
        char *Context,
        PTP_WORK Work)
{
  int v4; // eax
  int v5; // edi
  CEffectCompilationService *v6; // rcx

  SetRestrictedErrorInfo(0LL);
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
