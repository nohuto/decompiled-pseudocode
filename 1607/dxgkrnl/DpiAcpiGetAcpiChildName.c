/*
 * XREFs of DpiAcpiGetAcpiChildName @ 0x1C00F72F4
 * Callers:
 *     DpiFdoEnumChildDevices @ 0x1C00F6D44 (DpiFdoEnumChildDevices.c)
 *     DpEvalAcpiMethod @ 0x1C0191EC0 (DpEvalAcpiMethod.c)
 * Callees:
 *     DpiAcpiPrepareAcpiChildNameList @ 0x1C00F732C (DpiAcpiPrepareAcpiChildNameList.c)
 */

__int64 __fastcall DpiAcpiGetAcpiChildName(__int64 a1, int a2)
{
  int v4; // eax
  unsigned int v5; // r8d
  unsigned int v6; // edx
  __int64 v8; // rcx

  v4 = DpiAcpiPrepareAcpiChildNameList();
  v5 = 0;
  if ( v4 < 0 )
    return 0LL;
  v6 = *(_DWORD *)(a1 + 3088);
  if ( !v6 )
    return 0LL;
  v8 = *(_QWORD *)(a1 + 3104);
  while ( a2 != *(_DWORD *)(v8 + 16LL * v5) )
  {
    if ( ++v5 >= v6 )
      return 0LL;
  }
  return *(_QWORD *)(v8 + 16LL * v5 + 8);
}
