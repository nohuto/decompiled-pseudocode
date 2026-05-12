/*
 * XREFs of WPP_SF_S @ 0x1C0034618
 * Callers:
 *     RaUnitScsiGetDumpPointersIoctl @ 0x1C000B640 (RaUnitScsiGetDumpPointersIoctl.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0012F80 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall WPP_SF_S(__int64 a1, __int64 a2, __int64 a3, const wchar_t *a4)
{
  __int64 v5; // rdx
  __int64 v6; // rax
  const wchar_t *v7; // rcx

  if ( a4 )
  {
    if ( *a4 )
    {
      v6 = -1LL;
      do
        ++v6;
      while ( a4[v6] );
      v5 = 2 * v6 + 2;
    }
    else
    {
      v5 = 14LL;
    }
  }
  else
  {
    v5 = 10LL;
  }
  if ( a4 )
  {
    v7 = L"<NULL>";
    if ( *a4 )
      v7 = a4;
  }
  else
  {
    v7 = L"NULL";
  }
  return (*(__int64 (__fastcall **)(__int64, __int64, void *, __int64, const wchar_t *, __int64, _QWORD))&WPP_MAIN_CB.ActiveThreadCount)(
           a1,
           43LL,
           &WPP_0a9d81cc67956adf3a94d0464afc2bb3_Traceguids,
           36LL,
           v7,
           v5,
           0LL);
}
