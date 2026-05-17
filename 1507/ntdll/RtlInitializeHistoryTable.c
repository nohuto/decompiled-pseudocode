/*
 * XREFs of RtlInitializeHistoryTable @ 0x180011520
 * Callers:
 *     LdrpInitializeProcess @ 0x1800BEA44 (LdrpInitializeProcess.c)
 * Callees:
 *     RtlpFunctionAddressTableEntry @ 0x1800115F8 (RtlpFunctionAddressTableEntry.c)
 *     RtlLookupFunctionEntry @ 0x180014E40 (RtlLookupFunctionEntry.c)
 *     LdrProtectMrdata @ 0x18003611C (LdrProtectMrdata.c)
 */

__int64 RtlInitializeHistoryTable()
{
  unsigned int i; // ebx
  void (__stdcall *v1)(PEXCEPTION_RECORD); // rax
  char v2; // dl
  PRUNTIME_FUNCTION v3; // rax
  unsigned __int64 v4; // rcx
  __int64 v5; // rdi
  __int64 EndAddress; // r8
  unsigned __int64 v7; // rdx
  unsigned __int64 v8; // r8
  __int64 v9; // rax
  __int64 v10; // rax
  unsigned __int64 ImageBase; // [rsp+30h] [rbp+8h] BYREF

  LdrProtectMrdata(0LL);
  for ( i = 0; i < 0xC; ++i )
  {
    v1 = (void (__stdcall *)(PEXCEPTION_RECORD))RtlpFunctionAddressTableEntry(i);
    if ( !v1 )
      break;
    v2 = byte_18015A335;
    if ( v1 == RtlRaiseException )
      v2 = i;
    byte_18015A335 = v2;
    v3 = RtlLookupFunctionEntry((ULONG64)v1, &ImageBase, 0LL);
    v4 = ImageBase;
    v5 = 2LL * i;
    EndAddress = v3->EndAddress;
    v7 = ImageBase + v3->BeginAddress;
    *(_QWORD *)&RtlpUnwindHistoryTable[2 * v5 + 8] = v3;
    v8 = v4 + EndAddress;
    *(_QWORD *)&RtlpUnwindHistoryTable[2 * v5 + 6] = v4;
    v9 = qword_18015A338;
    if ( v7 < qword_18015A338 )
      v9 = v7;
    qword_18015A338 = v9;
    v10 = qword_18015A340;
    if ( v8 > qword_18015A340 )
      v10 = v8;
    qword_18015A340 = v10;
  }
  RtlpUnwindHistoryTable[0] = i;
  return LdrProtectMrdata(1LL);
}
