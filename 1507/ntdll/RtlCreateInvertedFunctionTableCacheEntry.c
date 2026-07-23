/*
 * XREFs of RtlCreateInvertedFunctionTableCacheEntry @ 0x1800CAD74
 * Callers:
 *     LdrpInitializeProcess @ 0x1800BEA44 (LdrpInitializeProcess.c)
 * Callees:
 *     RtlpxLookupFunctionTable @ 0x180015180 (RtlpxLookupFunctionTable.c)
 *     LdrProtectMrdata @ 0x18003611C (LdrProtectMrdata.c)
 *     RtlRemoveInvertedFunctionTable @ 0x18006CB9C (RtlRemoveInvertedFunctionTable.c)
 */

void __fastcall RtlCreateInvertedFunctionTableCacheEntry(PVOID BaseAddress, int a2)
{
  int v3; // edi
  __int64 v5; // rbp
  ULONG_PTR v6; // rsi
  PS_MITIGATION_OPTIONS_MAP MitigationOptionsMap; // [rsp+20h] [rbp-38h] BYREF
  ULONG_PTR v8; // [rsp+60h] [rbp+8h]

  v3 = 0;
  if ( (unsigned __int64)BaseAddress < LdrSystemDllInitBlock.MitigationOptionsMap.Map[1]
    || (unsigned __int64)BaseAddress >= LdrSystemDllInitBlock.MitigationOptionsMap.Map[1]
                                      + LODWORD(LdrSystemDllInitBlock.MitigationOptionsMap.Map[2]) )
  {
    v5 = RtlpxLookupFunctionTable(BaseAddress, (__int64)&MitigationOptionsMap);
  }
  else
  {
    v5 = LdrSystemDllInitBlock.MitigationOptionsMap.Map[0];
    MitigationOptionsMap = LdrSystemDllInitBlock.MitigationOptionsMap;
  }
  if ( v5 )
  {
    v6 = MitigationOptionsMap.Map[1];
    v3 = HIDWORD(MitigationOptionsMap.Map[2]);
  }
  else
  {
    v6 = v8;
  }
  LdrProtectMrdata(0);
  LdrSystemDllInitBlock.MitigationOptionsMap.Map[0] = v5;
  LdrSystemDllInitBlock.MitigationOptionsMap.Map[1] = v6;
  LODWORD(LdrSystemDllInitBlock.MitigationOptionsMap.Map[2]) = a2;
  HIDWORD(LdrSystemDllInitBlock.MitigationOptionsMap.Map[2]) = v3;
  RtlRemoveInvertedFunctionTable((__int64)BaseAddress);
  LdrProtectMrdata(1);
}
