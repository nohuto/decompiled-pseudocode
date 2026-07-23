/*
 * XREFs of RtlDebugZeroHeap @ 0x1800F0070
 * Callers:
 *     RtlZeroHeap @ 0x1800E2BC0 (RtlZeroHeap.c)
 * Callees:
 *     RtlEnterCriticalSection @ 0x18002E900 (RtlEnterCriticalSection.c)
 *     RtlpCheckHeapSignature @ 0x18002EB04 (RtlpCheckHeapSignature.c)
 *     RtlLeaveCriticalSection @ 0x18002EE00 (RtlLeaveCriticalSection.c)
 *     RtlEndStrongEnumerationHashTable @ 0x180081AE0 (RtlEndStrongEnumerationHashTable.c)
 *     RtlpValidateHeap @ 0x180092BC8 (RtlpValidateHeap.c)
 *     RtlZeroHeap @ 0x1800E2BC0 (RtlZeroHeap.c)
 *     RtlpHeapExceptionFilter @ 0x1800E3178 (RtlpHeapExceptionFilter.c)
 */

__int64 __fastcall RtlDebugZeroHeap(PRTL_CRITICAL_SECTION *BaseAddress, unsigned int a2)
{
  char v4; // r14
  ULONG v6; // esi
  unsigned __int32 v7; // ebx

  v4 = 0;
  if ( (*((_DWORD *)BaseAddress + 29) & 0x1000000) != 0 )
    return ((__int64 (__fastcall *)(PRTL_CRITICAL_SECTION *, _QWORD))qword_180142150)(BaseAddress, a2);
  if ( !RtlpCheckHeapSignature(BaseAddress, "RtlZeroHeap") )
    goto LABEL_7;
  v6 = *((_DWORD *)BaseAddress + 29) | 0x10000000 | a2;
  if ( (v6 & 1) == 0 )
  {
    RtlEnterCriticalSection(BaseAddress[44]);
    v4 = 1;
    v6 |= 1u;
  }
  if ( RtlpValidateHeap((PVOID *)BaseAddress, 0) )
    v7 = RtlZeroHeap(BaseAddress, v6);
  else
LABEL_7:
    v7 = -1073741811;
  if ( v4 )
    RtlLeaveCriticalSection(BaseAddress[44]);
  return v7;
}
