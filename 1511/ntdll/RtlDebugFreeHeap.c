/*
 * XREFs of RtlDebugFreeHeap @ 0x180092900
 * Callers:
 *     RtlpFreeHeap @ 0x180022430 (RtlpFreeHeap.c)
 * Callees:
 *     RtlFreeHeap @ 0x1800207C0 (RtlFreeHeap.c)
 *     RtlEnterCriticalSection @ 0x18002E900 (RtlEnterCriticalSection.c)
 *     RtlpCheckHeapSignature @ 0x18002EB04 (RtlpCheckHeapSignature.c)
 *     RtlLeaveCriticalSection @ 0x18002EE00 (RtlLeaveCriticalSection.c)
 *     RtlNtStatusToDosError @ 0x180048C10 (RtlNtStatusToDosError.c)
 *     DbgPrint @ 0x180049950 (DbgPrint.c)
 *     RtlpValidateHeapHeaders @ 0x18004B6B0 (RtlpValidateHeapHeaders.c)
 *     RtlpGetExtraStuffPointer @ 0x180074A8C (RtlpGetExtraStuffPointer.c)
 *     RtlpValidateHeapEntry @ 0x18007587C (RtlpValidateHeapEntry.c)
 *     RtlEndStrongEnumerationHashTable @ 0x180081AE0 (RtlEndStrongEnumerationHashTable.c)
 *     RtlpValidateHeap @ 0x180092BC8 (RtlpValidateHeap.c)
 *     RtlpGetTagName @ 0x1800E107C (RtlpGetTagName.c)
 *     RtlpHeapExceptionFilter @ 0x1800E3178 (RtlpHeapExceptionFilter.c)
 *     RtlpBreakPointHeap @ 0x1800F019C (RtlpBreakPointHeap.c)
 *     RtlpAnalyzeHeapFailure @ 0x1800F09E4 (RtlpAnalyzeHeapFailure.c)
 */

__int64 __fastcall RtlDebugFreeHeap(_DWORD *Src, unsigned int a2, unsigned __int64 a3)
{
  unsigned int v6; // r14d
  unsigned __int8 (__fastcall *v7)(_DWORD *, _QWORD, unsigned __int64); // rbx
  int v9; // esi
  unsigned __int64 v10; // rdx
  struct _PEB *v11; // rax
  __int16 v12; // r8
  unsigned __int16 v13; // dx
  __int64 TagName; // rax
  char v15; // [rsp+20h] [rbp-38h]
  __int64 v16; // [rsp+28h] [rbp-30h]
  unsigned int v17; // [rsp+68h] [rbp+10h]
  unsigned __int16 v18; // [rsp+78h] [rbp+20h]

  v6 = 0;
  v15 = 0;
  if ( (Src[29] & 0x1000000) != 0 )
  {
    v7 = (unsigned __int8 (__fastcall *)(_DWORD *, _QWORD, unsigned __int64))qword_1801420D0;
    _guard_check_icall_fptr();
    return v7(Src, a2, a3);
  }
  if ( RtlpCheckHeapSignature(Src, "RtlFreeHeap") )
  {
    v9 = Src[29] | 0x10000000 | a2;
    v17 = v9;
    if ( (v9 & 1) == 0 )
    {
      RtlEnterCriticalSection(*((_QWORD *)Src + 44));
      v15 = 1;
      v17 = v9 | 1;
    }
    RtlpValidateHeap(Src, 0LL);
    v10 = a3 - 16;
    _m_prefetchw((const void *)(a3 - 16));
    if ( *(_BYTE *)(a3 - 16 + 15) == 5 )
      v10 -= 16LL * *(unsigned __int8 *)(v10 + 14);
    v16 = v10;
    if ( !RtlpValidateHeapEntry((unsigned __int64)Src, v10, "RtlFreeHeap") )
      goto LABEL_34;
    v11 = NtCurrentPeb();
    if ( a3 == qword_180143640 )
    {
      if ( v11->Ldr )
        DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
      else
        DbgPrint("HEAP: ");
      DbgPrint("About to free block at %p\n", (const void *)qword_180143640);
    }
    else
    {
      if ( (v11->NtGlobalFlag & 0x800) == 0 )
        goto LABEL_33;
      v12 = unk_180143648;
      if ( !unk_180143648 )
        goto LABEL_33;
      if ( Src[31] )
      {
        *(_DWORD *)(v16 + 8) ^= Src[34];
        if ( *(_BYTE *)(v16 + 11) != (*(_BYTE *)(v16 + 8) ^ (unsigned __int8)(*(_BYTE *)(v16 + 9) ^ *(_BYTE *)(v16 + 10))) )
        {
          RtlpAnalyzeHeapFailure(Src, v16);
          v12 = unk_180143648;
        }
      }
      if ( (*(_BYTE *)(v16 + 10) & 2) != 0 )
        v13 = *(_WORD *)(RtlpGetExtraStuffPointer(v16) + 2);
      else
        v13 = *(unsigned __int8 *)(v16 + 11);
      v18 = v13;
      if ( Src[31] )
      {
        *(_BYTE *)(v16 + 11) = *(_BYTE *)(v16 + 8) ^ *(_BYTE *)(v16 + 9) ^ *(_BYTE *)(v16 + 10);
        *(_DWORD *)(v16 + 8) ^= Src[34];
      }
      if ( !v13 || v13 != v12 || *((_WORD *)Src + 104) != word_18014364A )
        goto LABEL_33;
      if ( NtCurrentPeb()->Ldr )
        DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
      else
        DbgPrint("HEAP: ");
      TagName = RtlpGetTagName(Src, v18);
      DbgPrint("About to free block at %p with tag %ws\n", a3, TagName);
    }
    RtlpBreakPointHeap(0LL);
LABEL_33:
    v6 = RtlFreeHeap((__int64)Src, v17, a3);
    RtlpValidateHeapHeaders((void **)Src, 1);
    RtlpValidateHeap(Src, 0LL);
    goto LABEL_34;
  }
  v6 = 0;
LABEL_34:
  if ( v15 )
    RtlLeaveCriticalSection(*((_QWORD *)Src + 44));
  return v6;
}
