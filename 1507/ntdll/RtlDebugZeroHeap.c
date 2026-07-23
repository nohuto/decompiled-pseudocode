/*
 * XREFs of RtlDebugZeroHeap @ 0x1800ED8E4
 * Callers:
 *     RtlZeroHeap @ 0x1800DCA00 (RtlZeroHeap.c)
 * Callees:
 *     RtlLeaveCriticalSection @ 0x180034710 (RtlLeaveCriticalSection.c)
 *     RtlpCheckHeapSignature @ 0x18003479C (RtlpCheckHeapSignature.c)
 *     RtlEnterCriticalSection @ 0x1800351C0 (RtlEnterCriticalSection.c)
 *     RtlEndStrongEnumerationHashTable @ 0x180075B10 (RtlEndStrongEnumerationHashTable.c)
 *     RtlZeroHeap @ 0x1800DCA00 (RtlZeroHeap.c)
 *     RtlpHeapExceptionFilter @ 0x1800DD534 (RtlpHeapExceptionFilter.c)
 *     RtlpValidateHeap @ 0x1800EDA3C (RtlpValidateHeap.c)
 */

__int64 __fastcall RtlDebugZeroHeap(PRTL_CRITICAL_SECTION *BaseAddress, unsigned int a2)
{
  char v4; // r14
  ULONG v6; // esi
  unsigned __int32 v7; // ebx

  v4 = 0;
  if ( (*((_DWORD *)BaseAddress + 29) & 0x1000000) != 0 )
    return ((__int64 (__fastcall *)(PRTL_CRITICAL_SECTION *, _QWORD))qword_180143D30)(BaseAddress, a2);
  if ( !RtlpCheckHeapSignature(BaseAddress, "RtlZeroHeap") )
    goto LABEL_7;
  v6 = *((_DWORD *)BaseAddress + 29) | 0x10000000 | a2;
  if ( (v6 & 1) == 0 )
  {
    RtlEnterCriticalSection(BaseAddress[44]);
    v4 = 1;
    v6 |= 1u;
  }
  if ( (unsigned __int8)RtlpValidateHeap(BaseAddress) )
    v7 = RtlZeroHeap(BaseAddress, v6);
  else
LABEL_7:
    v7 = -1073741811;
  if ( v4 )
    RtlLeaveCriticalSection(BaseAddress[44]);
  return v7;
}
