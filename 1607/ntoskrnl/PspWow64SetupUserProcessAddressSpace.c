/*
 * XREFs of PspWow64SetupUserProcessAddressSpace @ 0x1400F5128
 * Callers:
 *     PspSetupUserProcessAddressSpace @ 0x1404FD9F4 (PspSetupUserProcessAddressSpace.c)
 * Callees:
 *     PspWow64ThunkProcessParameters @ 0x1400A9FB8 (PspWow64ThunkProcessParameters.c)
 *     PspWow64CurrentPeb @ 0x1400F7E14 (PspWow64CurrentPeb.c)
 */

NTSTATUS __fastcall PspWow64SetupUserProcessAddressSpace(__int64 a1, __int64 a2, __int64 a3)
{
  NTSTATUS result; // eax
  __int64 v6; // rcx
  __int64 v7; // [rsp+30h] [rbp+8h] BYREF

  if ( !*(_QWORD *)(a1 + 1064) && !*(_QWORD *)(a2 + 1064) )
    return 0;
  result = PspWow64CurrentPeb(&v7);
  if ( result >= 0 )
  {
    v6 = v7;
    *(_DWORD *)(a3 + 220) = v7;
    if ( !*(_QWORD *)(a2 + 1064) )
      return 0;
    result = PspWow64ThunkProcessParameters(v6, *(unsigned int **)(a3 + 200), (_DWORD *)(a3 + 216));
    if ( result >= 0 )
      return 0;
  }
  return result;
}
