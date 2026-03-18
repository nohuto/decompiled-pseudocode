/*
 * XREFs of PspWow64SetupUserProcessAddressSpace @ 0x14002B378
 * Callers:
 *     PspSetupUserProcessAddressSpace @ 0x14046567C (PspSetupUserProcessAddressSpace.c)
 * Callees:
 *     PspWow64ThunkProcessParameters @ 0x14012A964 (PspWow64ThunkProcessParameters.c)
 *     PspWow64CurrentPeb @ 0x1401301FC (PspWow64CurrentPeb.c)
 */

__int64 __fastcall PspWow64SetupUserProcessAddressSpace(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax
  __int64 v6; // rcx
  __int64 v7; // [rsp+30h] [rbp+8h] BYREF

  if ( !*(_QWORD *)(a1 + 1064) && !*(_QWORD *)(a2 + 1064) )
    return 0LL;
  result = PspWow64CurrentPeb(&v7);
  if ( (int)result >= 0 )
  {
    v6 = v7;
    *(_DWORD *)(a3 + 220) = v7;
    if ( !*(_QWORD *)(a2 + 1064) )
      return 0LL;
    result = PspWow64ThunkProcessParameters(v6, *(_QWORD *)(a3 + 200), a3 + 216);
    if ( (int)result >= 0 )
      return 0LL;
  }
  return result;
}
