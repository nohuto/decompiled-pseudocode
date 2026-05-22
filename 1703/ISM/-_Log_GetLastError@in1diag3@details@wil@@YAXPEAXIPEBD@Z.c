/*
 * XREFs of ?_Log_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180093B78
 * Callers:
 *     ?UnregisterCmNotifAsync@HolographicDriverHandleWrapper@Holographic@Internal@Windows@@AEAAXXZ @ 0x18009359C (-UnregisterCmNotifAsync@HolographicDriverHandleWrapper@Holographic@Internal@Windows@@AEAAXXZ.c)
 * Callees:
 *     ?ReportFailure_GetLastError@details@wil@@YAKPEAXIPEBD110W4FailureType@2@@Z @ 0x180002FC4 (-ReportFailure_GetLastError@details@wil@@YAKPEAXIPEBD110W4FailureType@2@@Z.c)
 */

void __fastcall wil::details::in1diag3::_Log_GetLastError(
        wil::details::in1diag3 *this,
        void *a2,
        __int64 a3,
        const char *a4)
{
  __int64 v4; // [rsp+20h] [rbp-28h]
  __int64 retaddr; // [rsp+48h] [rbp+0h]

  wil::details::ReportFailure_GetLastError(
    (__int64)this,
    0xFCu,
    (__int64)"onecoreuap\\analog\\input\\holographicdriverclientlib\\lib\\holographicdriverhandlewrapper.cpp",
    (__int64)a4,
    v4,
    retaddr,
    2u);
}
