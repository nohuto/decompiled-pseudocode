/*
 * XREFs of RtlLookupFunctionTable @ 0x1800CAF40
 * Callers:
 *     <none>
 * Callees:
 *     RtlpxLookupFunctionTable @ 0x180015180 (RtlpxLookupFunctionTable.c)
 */

__int64 __fastcall RtlLookupFunctionTable(void *a1, _QWORD *a2, _DWORD *a3)
{
  __int64 result; // rax
  PS_MITIGATION_OPTIONS_MAP MitigationOptionsMap; // [rsp+20h] [rbp-28h] BYREF

  if ( (unsigned __int64)a1 < LdrSystemDllInitBlock.MitigationOptionsMap.Map[1]
    || (unsigned __int64)a1 >= LdrSystemDllInitBlock.MitigationOptionsMap.Map[1]
                             + LODWORD(LdrSystemDllInitBlock.MitigationOptionsMap.Map[2]) )
  {
    result = RtlpxLookupFunctionTable(a1, (__int64)&MitigationOptionsMap);
  }
  else
  {
    result = LdrSystemDllInitBlock.MitigationOptionsMap.Map[0];
    MitigationOptionsMap = LdrSystemDllInitBlock.MitigationOptionsMap;
  }
  if ( result )
  {
    *a2 = MitigationOptionsMap.Map[1];
    *a3 = HIDWORD(MitigationOptionsMap.Map[2]);
  }
  return result;
}
