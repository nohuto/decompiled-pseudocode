/*
 * XREFs of ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800765E8
 * Callers:
 *     ?OnWindowStyleUpdated@CTopLevelWindow3D@@QEAAJXZ @ 0x180027690 (-OnWindowStyleUpdated@CTopLevelWindow3D@@QEAAJXZ.c)
 *     ?OnWindowSizeUpdated@CTopLevelWindow3D@@QEAAXXZ @ 0x180027900 (-OnWindowSizeUpdated@CTopLevelWindow3D@@QEAAXXZ.c)
 *     ?ShowWindow@CTopLevelWindow3D@@QEAAJ_N0@Z @ 0x180027A30 (-ShowWindow@CTopLevelWindow3D@@QEAAJ_N0@Z.c)
 * Callees:
 *     ?ReportFailure_Hr@details@wil@@YAXPEAXIPEBD110W4FailureType@2@J@Z @ 0x18006F408 (-ReportFailure_Hr@details@wil@@YAXPEAXIPEBD110W4FailureType@2@J@Z.c)
 */

void __fastcall wil::details::in1diag3::_Log_Hr(wil::details::in1diag3 *this, __int64 a2, __int64 a3, const char *a4)
{
  __int64 retaddr; // [rsp+48h] [rbp+0h]

  wil::details::ReportFailure_Hr(
    (__int64)this,
    a2,
    (__int64)"windows\\dwm\\udwm\\toplevelwindow3d.cpp",
    0LL,
    0LL,
    retaddr,
    3,
    (unsigned int)a4);
}
