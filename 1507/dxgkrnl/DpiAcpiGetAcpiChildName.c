/*
 * XREFs of DpiAcpiGetAcpiChildName @ 0x1C00D4A5C
 * Callers:
 *     DpiFdoEnumChildDevices @ 0x1C00D45E0 (DpiFdoEnumChildDevices.c)
 *     DpEvalAcpiMethod @ 0x1C0165AC0 (DpEvalAcpiMethod.c)
 * Callees:
 *     DpiAcpiPrepareAcpiChildNameList @ 0x1C00D4AA0 (DpiAcpiPrepareAcpiChildNameList.c)
 */

__int64 __fastcall DpiAcpiGetAcpiChildName(__int64 a1, int a2)
{
  int v4; // eax
  unsigned int v5; // r8d
  unsigned int v6; // edx
  __int64 v8; // rcx

  v4 = DpiAcpiPrepareAcpiChildNameList(a1);
  v5 = 0;
  if ( v4 < 0 )
    return 0LL;
  v6 = *(_DWORD *)(a1 + 1904);
  if ( !v6 )
    return 0LL;
  v8 = *(_QWORD *)(a1 + 1920);
  while ( a2 != *(_DWORD *)(v8 + 16LL * v5) )
  {
    if ( ++v5 >= v6 )
      return 0LL;
  }
  return *(_QWORD *)(v8 + 16LL * v5 + 8);
}
