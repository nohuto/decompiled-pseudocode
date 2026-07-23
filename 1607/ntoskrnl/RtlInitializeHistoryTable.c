/*
 * XREFs of RtlInitializeHistoryTable @ 0x1407B82C0
 * Callers:
 *     KiCompleteKernelInit @ 0x1403D46A0 (KiCompleteKernelInit.c)
 * Callees:
 *     RtlLookupFunctionEntry @ 0x1400F4070 (RtlLookupFunctionEntry.c)
 *     RtlpFunctionAddressTableEntry @ 0x1407B83A4 (RtlpFunctionAddressTableEntry.c)
 */

PRUNTIME_FUNCTION RtlInitializeHistoryTable()
{
  unsigned int i; // ebx
  void (__stdcall __noreturn *v1)(NTSTATUS); // rax
  PRUNTIME_FUNCTION v2; // rax
  __int64 v3; // rdi
  unsigned __int64 v4; // r8
  unsigned __int64 v5; // rdx
  __int64 v6; // rdi
  DWORD64 *v7; // rbx
  PRUNTIME_FUNCTION result; // rax
  unsigned __int64 ImageBase; // [rsp+30h] [rbp+8h] BYREF

  for ( i = 0; i < 0xC; ++i )
  {
    v1 = (void (__stdcall __noreturn *)(NTSTATUS))RtlpFunctionAddressTableEntry(i);
    if ( !v1 )
      break;
    if ( v1 == RtlRaiseStatus )
      byte_1403A9635 = i;
    v2 = RtlLookupFunctionEntry((DWORD64)v1, &ImageBase, 0LL);
    v3 = 2LL * i;
    v4 = ImageBase + v2->BeginAddress;
    v5 = ImageBase + v2->EndAddress;
    *(_QWORD *)&RtlpUnwindHistoryTable[2 * v3 + 6] = ImageBase;
    *(_QWORD *)&RtlpUnwindHistoryTable[2 * v3 + 8] = v2;
    if ( v4 < qword_1403A9638 )
      qword_1403A9638 = v4;
    if ( v5 > qword_1403A9640 )
      qword_1403A9640 = v5;
  }
  RtlpUnwindHistoryTable[0] = i;
  v6 = 3LL;
  v7 = (DWORD64 *)&RtlpSafeMachineFrameEntries;
  do
  {
    result = RtlLookupFunctionEntry(*v7, &ImageBase, 0LL);
    *v7++ = ImageBase + result->UnwindData;
    --v6;
  }
  while ( v6 );
  return result;
}
