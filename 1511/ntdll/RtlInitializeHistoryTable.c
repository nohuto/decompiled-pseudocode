/*
 * XREFs of RtlInitializeHistoryTable @ 0x180079104
 * Callers:
 *     LdrpInitializeProcess @ 0x18008E534 (LdrpInitializeProcess.c)
 * Callees:
 *     LdrProtectMrdata @ 0x18002F3A4 (LdrProtectMrdata.c)
 *     RtlLookupFunctionEntry @ 0x1800361F0 (RtlLookupFunctionEntry.c)
 *     RtlpFunctionAddressTableEntry @ 0x1800791DC (RtlpFunctionAddressTableEntry.c)
 */

signed __int64 __fastcall RtlInitializeHistoryTable(__int64 a1, char *a2, __int64 a3, __int64 a4)
{
  unsigned int i; // ebx
  void (__stdcall *v5)(PEXCEPTION_RECORD); // rax
  char *v6; // rdx
  unsigned __int64 v7; // r8
  __int64 v8; // r9
  char v9; // dl
  PRUNTIME_FUNCTION v10; // rax
  unsigned __int64 v11; // rcx
  __int64 v12; // rdi
  __int64 EndAddress; // r8
  __int64 v14; // rax
  __int64 v15; // rax
  unsigned __int64 ImageBase; // [rsp+30h] [rbp+8h] BYREF

  LdrProtectMrdata(0, a2, a3, a4);
  for ( i = 0; i < 0xC; ++i )
  {
    v5 = (void (__stdcall *)(PEXCEPTION_RECORD))RtlpFunctionAddressTableEntry(i);
    if ( !v5 )
      break;
    v9 = byte_180158335;
    if ( v5 == RtlRaiseException )
      v9 = i;
    byte_180158335 = v9;
    v10 = RtlLookupFunctionEntry((ULONG64)v5, &ImageBase, 0LL);
    v11 = ImageBase;
    v12 = 2LL * i;
    EndAddress = v10->EndAddress;
    v6 = (char *)(ImageBase + v10->BeginAddress);
    *(_QWORD *)&RtlpUnwindHistoryTable[2 * v12 + 8] = v10;
    v7 = v11 + EndAddress;
    *(_QWORD *)&RtlpUnwindHistoryTable[2 * v12 + 6] = v11;
    v14 = qword_180158338;
    if ( (unsigned __int64)v6 < qword_180158338 )
      v14 = (__int64)v6;
    qword_180158338 = v14;
    v15 = qword_180158340;
    if ( v7 > qword_180158340 )
      v15 = v7;
    qword_180158340 = v15;
  }
  RtlpUnwindHistoryTable[0] = i;
  return LdrProtectMrdata(1, v6, v7, v8);
}
