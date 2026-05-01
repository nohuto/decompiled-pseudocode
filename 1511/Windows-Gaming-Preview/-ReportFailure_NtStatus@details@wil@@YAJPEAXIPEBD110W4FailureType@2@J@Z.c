/*
 * XREFs of ?ReportFailure_NtStatus@details@wil@@YAJPEAXIPEBD110W4FailureType@2@J@Z @ 0x18001EEE4
 * Callers:
 *     ?Return_NtStatusPreRelease@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z @ 0x18001EF50 (-Return_NtStatusPreRelease@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z.c)
 * Callees:
 *     ?ReportFailure@details@wil@@YAXPEAXIPEBD110W4FailureType@2@JPEBGW4ReportFailureOptions@12@@Z @ 0x180008930 (-ReportFailure@details@wil@@YAXPEAXIPEBD110W4FailureType@2@JPEBGW4ReportFailureOptions@12@@Z.c)
 *     ?NtStatusToHr@details@wil@@YAJJ@Z @ 0x18001EE7C (-NtStatusToHr@details@wil@@YAJJ@Z.c)
 */

__int64 __fastcall wil::details::ReportFailure_NtStatus(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        unsigned int a8)
{
  unsigned int v9; // ebx

  v9 = wil::details::NtStatusToHr((wil::details *)a8);
  wil::details::ReportFailure(
    a1,
    17LL,
    (__int64)"shell\\lib\\calleridentity\\calleridentity_capability.cpp",
    0LL,
    0LL,
    a6,
    2,
    v9,
    0LL);
  return v9;
}
