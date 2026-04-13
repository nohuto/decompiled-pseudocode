/*
 * XREFs of ?Throw_HrIfMsg@in1diag3@details@wil@@YA_NPEAXIPEBDJ_N1ZZ @ 0x1800328B8
 * Callers:
 *     ?ActivateSubscriptionIfInactive@SubscribedContentStore@CreativeFramework@@YAXPEBGAEBV?$map@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V12@U?$less@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V12@@std@@@2@@std@@PEAW4SubscriptionActivationFlags@12@@Z @ 0x180033668 (-ActivateSubscriptionIfInactive@SubscribedContentStore@CreativeFramework@@YAXPEBGAEBV-$map@V-$ba.c)
 * Callees:
 *     ?ReportFailure_HrMsg@details@wil@@YAXPEAXIPEBD110W4FailureType@2@J1PEAD@Z @ 0x180002BCC (-ReportFailure_HrMsg@details@wil@@YAXPEAXIPEBD110W4FailureType@2@J1PEAD@Z.c)
 */

char wil::details::in1diag3::Throw_HrIfMsg(
        wil::details::in1diag3 *this,
        void *a2,
        __int64 a3,
        const char *a4,
        char a5,
        __int64 a6,
        const char *a7,
        ...)
{
  __int64 v8; // [rsp+20h] [rbp-38h]
  __int64 retaddr; // [rsp+58h] [rbp+0h]

  if ( a5 )
    wil::details::ReportFailure_HrMsg(
      (__int64)this,
      (unsigned int)a2,
      a3,
      (__int64)a4,
      v8,
      retaddr,
      0,
      (unsigned int)a4,
      a6,
      (char *)&a7);
  return a5;
}
