/*
 * XREFs of RtlDebugFreeHeap @ 0x180091B50
 * Callers:
 *     RtlpFreeHeap @ 0x180049360 (RtlpFreeHeap.c)
 * Callees:
 *     RtlEnterCriticalSection @ 0x180019B40 (RtlEnterCriticalSection.c)
 *     RtlpCheckHeapSignature @ 0x180019D74 (RtlpCheckHeapSignature.c)
 *     RtlLeaveCriticalSection @ 0x180019DB0 (RtlLeaveCriticalSection.c)
 *     RtlpGetExtraStuffPointer @ 0x180029010 (RtlpGetExtraStuffPointer.c)
 *     RtlFreeHeap @ 0x1800466E0 (RtlFreeHeap.c)
 *     RtlNtStatusToDosError @ 0x18005A4D0 (RtlNtStatusToDosError.c)
 *     DbgPrint @ 0x18005C3D0 (DbgPrint.c)
 *     RtlpValidateHeapHeaders @ 0x18005D2F0 (RtlpValidateHeapHeaders.c)
 *     RtlpValidateHeapEntry @ 0x1800769A8 (RtlpValidateHeapEntry.c)
 *     RtlpValidateHeap @ 0x180091234 (RtlpValidateHeap.c)
 *     _guard_dispatch_icall_nop @ 0x1800A9C80 (_guard_dispatch_icall_nop.c)
 *     RtlpGetTagName @ 0x1800EA2F8 (RtlpGetTagName.c)
 *     RtlpHeapExceptionFilter @ 0x1800EC2D0 (RtlpHeapExceptionFilter.c)
 *     RtlpAnalyzeHeapFailure @ 0x1800F79F4 (RtlpAnalyzeHeapFailure.c)
 *     RtlpBreakPointHeap @ 0x1800FB678 (RtlpBreakPointHeap.c)
 */

__int64 __fastcall RtlDebugFreeHeap(PRTL_CRITICAL_SECTION *Src, int a2, char *a3)
{
  LOGICAL v6; // r14d
  __int64 v7; // rcx
  unsigned __int16 v8; // dx
  __int16 v9; // r8
  __int64 TagName; // rax
  int v11; // esi
  unsigned __int64 v12; // rdx
  struct _PEB *v13; // rax
  char v15; // [rsp+20h] [rbp-38h]
  __int64 v16; // [rsp+28h] [rbp-30h]
  int Flags; // [rsp+68h] [rbp+10h]
  unsigned __int16 v18; // [rsp+78h] [rbp+20h]

  v6 = 0;
  v15 = 0;
  if ( (*((_DWORD *)Src + 29) & 0x1000000) != 0 )
    return (unsigned __int8)_guard_dispatch_icall_fptr();
  if ( !RtlpCheckHeapSignature(Src, "RtlFreeHeap") )
  {
    v6 = 0;
    goto LABEL_34;
  }
  v11 = *((_DWORD *)Src + 29) | 0x10000000 | a2;
  Flags = v11;
  if ( (v11 & 1) == 0 )
  {
    RtlEnterCriticalSection(Src[44]);
    v15 = 1;
    Flags = v11 | 1;
  }
  RtlpValidateHeap((__int64)Src, 0);
  v12 = (unsigned __int64)(a3 - 16);
  _m_prefetchw(a3 - 16);
  if ( *(a3 - 1) == 5 )
    v12 -= 16LL * *(unsigned __int8 *)(v12 + 14);
  v16 = v12;
  if ( !RtlpValidateHeapEntry((unsigned __int64)Src, v12, "RtlFreeHeap") )
    goto LABEL_34;
  v13 = NtCurrentPeb();
  if ( a3 == (char *)qword_180150680 )
  {
    if ( v13->Ldr )
      DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
    else
      DbgPrint("HEAP: ");
    DbgPrint("About to free block at %p\n", (const void *)qword_180150680);
  }
  else
  {
    if ( (v13->NtGlobalFlag & 0x800) == 0 )
      goto LABEL_7;
    v9 = unk_180150688;
    if ( !unk_180150688 )
      goto LABEL_7;
    if ( *((_DWORD *)Src + 31) )
    {
      *(_DWORD *)(v16 + 8) ^= *((_DWORD *)Src + 34);
      if ( *(_BYTE *)(v16 + 11) != (*(_BYTE *)(v16 + 8) ^ (unsigned __int8)(*(_BYTE *)(v16 + 9) ^ *(_BYTE *)(v16 + 10))) )
      {
        RtlpAnalyzeHeapFailure(Src, v16);
        v9 = unk_180150688;
      }
    }
    if ( (*(_BYTE *)(v16 + 10) & 2) != 0 )
      v8 = *(_WORD *)(RtlpGetExtraStuffPointer(v16) + 2);
    else
      v8 = *(unsigned __int8 *)(v16 + 11);
    v18 = v8;
    if ( *((_DWORD *)Src + 31) )
    {
      *(_BYTE *)(v16 + 11) = *(_BYTE *)(v16 + 8) ^ *(_BYTE *)(v16 + 9) ^ *(_BYTE *)(v16 + 10);
      *(_DWORD *)(v16 + 8) ^= *((_DWORD *)Src + 34);
    }
    if ( !v8 || v8 != v9 || *((_WORD *)Src + 104) != word_18015068A )
      goto LABEL_7;
    if ( NtCurrentPeb()->Ldr )
      DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
    else
      DbgPrint("HEAP: ");
    TagName = RtlpGetTagName(Src, v18);
    DbgPrint("About to free block at %p with tag %ws\n", a3, TagName);
  }
  RtlpBreakPointHeap(v7);
LABEL_7:
  v6 = RtlFreeHeap(Src, Flags, a3);
  RtlpValidateHeapHeaders((PVOID *)Src, 1);
  RtlpValidateHeap((__int64)Src, 0);
LABEL_34:
  if ( v15 )
    RtlLeaveCriticalSection(Src[44]);
  return v6;
}
