/*
 * XREFs of ?NtStatusToHr@details@wil@@YAJJ@Z @ 0x18001EF74
 * Callers:
 *     ?ReportFailure_NtStatus@details@wil@@YAJPEAXIPEBD110W4FailureType@2@J@Z @ 0x18001EFDC (-ReportFailure_NtStatus@details@wil@@YAJPEAXIPEBD110W4FailureType@2@J@Z.c)
 * Callees:
 *     ?dummy@Chunk@?$NaiveSplitView@PEAUHSTRING__@@PEAUIInspectable@@U?$DefaultEqualityPredicate@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@4567@U?$DefaultLifetimeTraits@PEAUIInspectable@@@4567@U?$HashMapOptions@PEAUHSTRING__@@PEAUIInspectable@@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@$0A@$00$0A@@4567@@Internal@Collections@Foundation@Windows@@EEAAXXZ @ 0x1800184A0 (-dummy@Chunk@-$NaiveSplitView@PEAUHSTRING__@@PEAUIInspectable@@U-$DefaultEqualityPredicate@PEAUH.c)
 */

__int64 __fastcall wil::details::NtStatusToHr(wil::details *this)
{
  int v1; // ebx
  __int64 result; // rax
  unsigned int v3; // eax
  int v4; // ecx

  v1 = (int)this;
  if ( (int)this >= 0 )
    return 0LL;
  if ( (_DWORD)this == -1073741801 )
    return 2147942414LL;
  if ( !wil::details::g_pfnRtlNtStatusToDosErrorNoTeb )
    return v1 | 0x10000000u;
  v3 = wil::details::g_pfnRtlNtStatusToDosErrorNoTeb((int)this);
  v4 = v3;
  if ( !v3 )
    return v1 | 0x10000000u;
  result = (unsigned __int16)v3 | 0x80070000;
  if ( v4 <= 0 )
    return (unsigned int)v4;
  return result;
}
