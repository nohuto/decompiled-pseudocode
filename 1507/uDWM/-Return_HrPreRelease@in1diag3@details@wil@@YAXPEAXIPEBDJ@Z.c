/*
 * XREFs of ?Return_HrPreRelease@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180076518
 * Callers:
 *     ?OnWindowStyleUpdated@CTopLevelWindow3D@@QEAAJXZ @ 0x180027690 (-OnWindowStyleUpdated@CTopLevelWindow3D@@QEAAJXZ.c)
 * Callees:
 *     ?ReportFailure_Hr@details@wil@@YAXPEAXIPEBD110W4FailureType@2@J@Z @ 0x18006F408 (-ReportFailure_Hr@details@wil@@YAXPEAXIPEBD110W4FailureType@2@J@Z.c)
 */

void __fastcall wil::details::in1diag3::Return_HrPreRelease(
        wil::details::in1diag3 *this,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  __int64 retaddr; // [rsp+48h] [rbp+0h]

  wil::details::ReportFailure_Hr(
    (__int64)this,
    a2,
    (__int64)"windows\\dwm\\udwm\\toplevelwindow3d.cpp",
    0LL,
    0LL,
    retaddr,
    2,
    (unsigned int)a4);
}
