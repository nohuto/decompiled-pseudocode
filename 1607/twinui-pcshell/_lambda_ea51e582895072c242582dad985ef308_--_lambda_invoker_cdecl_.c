/*
 * XREFs of _lambda_ea51e582895072c242582dad985ef308_::_lambda_invoker_cdecl_ @ 0x18001EA80
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall lambda_ea51e582895072c242582dad985ef308_::_lambda_invoker_cdecl_(
        PTP_CALLBACK_INSTANCE Instance,
        struct IUnknown *Context,
        PTP_TIMER Timer,
        __int64 a4)
{
  ExperienceManagerUtils::PostToUIThread(Instance, Context, 0LL, a4);
}
