/*
 * XREFs of ?ReportFailure_Hr@details@wil@@YAXPEAXIPEBD110W4FailureType@2@J@Z @ 0x180077640
 * Callers:
 *     ?FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180076220 (-FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?LogFailure@details@wil@@YAXPEAXIPEBD110W4FailureType@2@JPEBG_NPEAG_KPEAD6PEAUFailureInfo@2@@Z @ 0x180076B28 (-LogFailure@details@wil@@YAXPEAXIPEBD110W4FailureType@2@JPEBG_NPEAG_KPEAD6PEAUFailureInfo@2@@Z.c)
 *     ?Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z @ 0x180076E44 (-Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1800781F0 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?Return_HrPreRelease@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007E418 (-Return_HrPreRelease@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007E4E8 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 * Callees:
 *     ?ReportFailure@details@wil@@YAXPEAXIPEBD110W4FailureType@2@JPEBGW4ReportFailureOptions@12@@Z @ 0x180077514 (-ReportFailure@details@wil@@YAXPEAXIPEBD110W4FailureType@2@JPEBGW4ReportFailureOptions@12@@Z.c)
 */

void __fastcall wil::details::ReportFailure_Hr(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        int a7,
        unsigned int a8)
{
  wil::details::ReportFailure(a1, a2, a3, a4, a5, a6, a7, a8);
}
