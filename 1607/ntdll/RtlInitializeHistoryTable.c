/*
 * XREFs of RtlInitializeHistoryTable @ 0x18007C070
 * Callers:
 *     LdrpInitializeProcess @ 0x180091E24 (LdrpInitializeProcess.c)
 * Callees:
 *     LdrProtectMrdata @ 0x180019098 (LdrProtectMrdata.c)
 *     RtlLookupFunctionEntry @ 0x180035F90 (RtlLookupFunctionEntry.c)
 *     RtlpFunctionAddressTableEntry @ 0x18007C148 (RtlpFunctionAddressTableEntry.c)
 */

void RtlInitializeHistoryTable()
{
  unsigned int i; // ebx
  void (__stdcall *v1)(PEXCEPTION_RECORD); // rax
  char v2; // dl
  PRUNTIME_FUNCTION v3; // rax
  unsigned __int64 v4; // rcx
  __int64 v5; // rdi
  __int64 EndAddress; // r8
  unsigned __int64 v7; // rdx
  ULONG_PTR v8; // r8
  unsigned __int64 v9; // rax
  ULONG_PTR v10; // rax
  unsigned __int64 ImageBase; // [rsp+30h] [rbp+8h] BYREF

  LdrProtectMrdata(0);
  for ( i = 0; i < 0xC; ++i )
  {
    v1 = (void (__stdcall *)(PEXCEPTION_RECORD))RtlpFunctionAddressTableEntry(i);
    if ( !v1 )
      break;
    v2 = BYTE5(LdrSystemDllInitBlock.Wow64SharedInformation[15]);
    if ( v1 == RtlRaiseException )
      v2 = i;
    BYTE5(LdrSystemDllInitBlock.Wow64SharedInformation[15]) = v2;
    v3 = RtlLookupFunctionEntry((ULONG64)v1, &ImageBase, 0LL);
    v4 = ImageBase;
    v5 = 2LL * i;
    EndAddress = v3->EndAddress;
    v7 = ImageBase + v3->BeginAddress;
    LdrSystemDllInitBlock.MitigationOptionsMap.Map[v5 + 2] = (ULONG_PTR)v3;
    v8 = v4 + EndAddress;
    LdrSystemDllInitBlock.MitigationOptionsMap.Map[v5 + 1] = v4;
    v9 = *(_QWORD *)&LdrSystemDllInitBlock.RngData;
    if ( v7 < *(_QWORD *)&LdrSystemDllInitBlock.RngData )
      v9 = v7;
    *(_QWORD *)&LdrSystemDllInitBlock.RngData = v9;
    v10 = LdrSystemDllInitBlock.MitigationOptionsMap.Map[0];
    if ( v8 > LdrSystemDllInitBlock.MitigationOptionsMap.Map[0] )
      v10 = v8;
    LdrSystemDllInitBlock.MitigationOptionsMap.Map[0] = v10;
  }
  LODWORD(LdrSystemDllInitBlock.Wow64SharedInformation[15]) = i;
  LdrProtectMrdata(1);
}
