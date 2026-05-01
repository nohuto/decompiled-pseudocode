/*
 * XREFs of ?NtStatusToHr@details@wil@@YAJJ@Z @ 0x18004B0B0
 * Callers:
 *     ?ReportFailure_NtStatus@details@wil@@YAJPEAXIPEBD110W4FailureType@2@J@Z @ 0x18004C04C (-ReportFailure_NtStatus@details@wil@@YAJPEAXIPEBD110W4FailureType@2@J@Z.c)
 * Callees:
 *     PsmInitializeServiceExtension2 @ 0x180024620 (PsmInitializeServiceExtension2.c)
 */

signed int __fastcall wil::details::NtStatusToHr(wil::details *this)
{
  int v1; // ebx
  signed int result; // eax

  v1 = (int)this;
  if ( (int)this >= 0 )
    return 0;
  if ( (_DWORD)this == -1073741801 )
    return -2147024882;
  if ( !wil::details::g_pfnRtlNtStatusToDosErrorNoTeb )
    return v1 | 0x10000000;
  result = wil::details::g_pfnRtlNtStatusToDosErrorNoTeb((int)this);
  if ( !result )
    return v1 | 0x10000000;
  if ( result > 0 )
    return (unsigned __int16)result | 0x80070000;
  return result;
}
