/*
 * XREFs of RtlDebugFreeHeap @ 0x1800EC7E4
 * Callers:
 *     RtlpFreeHeap @ 0x18002C140 (RtlpFreeHeap.c)
 * Callees:
 *     RtlNtStatusToDosError @ 0x18000F0C0 (RtlNtStatusToDosError.c)
 *     DbgPrint @ 0x180010000 (DbgPrint.c)
 *     RtlFreeHeap @ 0x18002AB90 (RtlFreeHeap.c)
 *     RtlLeaveCriticalSection @ 0x180034710 (RtlLeaveCriticalSection.c)
 *     RtlpCheckHeapSignature @ 0x18003479C (RtlpCheckHeapSignature.c)
 *     RtlEnterCriticalSection @ 0x1800351C0 (RtlEnterCriticalSection.c)
 *     RtlpValidateHeapEntry @ 0x180038924 (RtlpValidateHeapEntry.c)
 *     RtlpGetExtraStuffPointer @ 0x1800582B0 (RtlpGetExtraStuffPointer.c)
 *     RtlEndStrongEnumerationHashTable @ 0x180075B10 (RtlEndStrongEnumerationHashTable.c)
 *     RtlpGetTagName @ 0x1800D91B0 (RtlpGetTagName.c)
 *     RtlpHeapExceptionFilter @ 0x1800DD534 (RtlpHeapExceptionFilter.c)
 *     RtlpBreakPointHeap @ 0x1800EDA10 (RtlpBreakPointHeap.c)
 *     RtlpValidateHeap @ 0x1800EDA3C (RtlpValidateHeap.c)
 *     RtlpValidateHeapHeaders @ 0x1800EE040 (RtlpValidateHeapHeaders.c)
 *     RtlpAnalyzeHeapFailure @ 0x1800EEA14 (RtlpAnalyzeHeapFailure.c)
 */

__int64 __fastcall RtlDebugFreeHeap(
        PRTL_CRITICAL_SECTION *BaseAddress,
        _RTL_DYNAMIC_HASH_TABLE_ENUMERATOR *a2,
        char *a3)
{
  unsigned int v4; // esi
  LOGICAL v6; // r14d
  PRTL_DYNAMIC_HASH_TABLE v7; // rbx
  int v9; // esi
  unsigned __int64 v10; // rdx
  struct _PEB *v11; // rax
  __int16 v12; // r8
  unsigned __int16 v13; // dx
  wchar_t *TagName; // rax
  char v15; // [rsp+20h] [rbp-38h]
  __int64 v16; // [rsp+28h] [rbp-30h]
  int Flags; // [rsp+68h] [rbp+10h]
  unsigned __int16 v18; // [rsp+78h] [rbp+20h]

  v4 = (unsigned int)a2;
  v6 = 0;
  v15 = 0;
  if ( (*((_DWORD *)BaseAddress + 29) & 0x1000000) != 0 )
  {
    v7 = qword_180143CB0;
    ((void (__cdecl *)(PRTL_DYNAMIC_HASH_TABLE, PRTL_DYNAMIC_HASH_TABLE_ENUMERATOR))_guard_check_icall_fptr)(
      qword_180143CB0,
      a2);
    return ((unsigned __int8 (__fastcall *)(PRTL_CRITICAL_SECTION *, _QWORD, char *))v7)(BaseAddress, v4, a3);
  }
  if ( RtlpCheckHeapSignature(BaseAddress, "RtlFreeHeap") )
  {
    v9 = *((_DWORD *)BaseAddress + 29) | 0x10000000 | v4;
    Flags = v9;
    if ( (v9 & 1) == 0 )
    {
      RtlEnterCriticalSection(BaseAddress[44]);
      v15 = 1;
      Flags = v9 | 1;
    }
    RtlpValidateHeap(BaseAddress);
    v10 = (unsigned __int64)(a3 - 16);
    _m_prefetchw(a3 - 16);
    if ( *(a3 - 1) == 5 )
      v10 -= 16LL * *(unsigned __int8 *)(v10 + 14);
    v16 = v10;
    if ( !RtlpValidateHeapEntry((unsigned __int64)BaseAddress, v10, "RtlFreeHeap") )
      goto LABEL_34;
    v11 = NtCurrentPeb();
    if ( a3 == (char *)qword_180144600 )
    {
      if ( v11->Ldr )
        DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
      else
        DbgPrint("HEAP: ");
      DbgPrint("About to free block at %p\n", (const void *)qword_180144600);
    }
    else
    {
      if ( (v11->NtGlobalFlag & 0x800) == 0 )
        goto LABEL_33;
      v12 = unk_180144608;
      if ( !unk_180144608 )
        goto LABEL_33;
      if ( *((_DWORD *)BaseAddress + 31) )
      {
        *(_DWORD *)(v16 + 8) ^= *((_DWORD *)BaseAddress + 34);
        if ( *(_BYTE *)(v16 + 11) != (*(_BYTE *)(v16 + 8) ^ (unsigned __int8)(*(_BYTE *)(v16 + 9) ^ *(_BYTE *)(v16 + 10))) )
        {
          RtlpAnalyzeHeapFailure(BaseAddress, v16);
          v12 = unk_180144608;
        }
      }
      if ( (*(_BYTE *)(v16 + 10) & 2) != 0 )
        v13 = *(_WORD *)(RtlpGetExtraStuffPointer(v16) + 2);
      else
        v13 = *(unsigned __int8 *)(v16 + 11);
      v18 = v13;
      if ( *((_DWORD *)BaseAddress + 31) )
      {
        *(_BYTE *)(v16 + 11) = *(_BYTE *)(v16 + 8) ^ *(_BYTE *)(v16 + 9) ^ *(_BYTE *)(v16 + 10);
        *(_DWORD *)(v16 + 8) ^= *((_DWORD *)BaseAddress + 34);
      }
      if ( !v13 || v13 != v12 || *((_WORD *)BaseAddress + 104) != word_18014460A )
        goto LABEL_33;
      if ( NtCurrentPeb()->Ldr )
        DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
      else
        DbgPrint("HEAP: ");
      TagName = RtlpGetTagName((__int64)BaseAddress, v18);
      DbgPrint("About to free block at %p with tag %ws\n", a3, TagName);
    }
    RtlpBreakPointHeap(0LL);
LABEL_33:
    v6 = RtlFreeHeap(BaseAddress, Flags, a3);
    RtlpValidateHeapHeaders(BaseAddress);
    RtlpValidateHeap(BaseAddress);
    goto LABEL_34;
  }
  v6 = 0;
LABEL_34:
  if ( v15 )
    RtlLeaveCriticalSection(BaseAddress[44]);
  return v6;
}
