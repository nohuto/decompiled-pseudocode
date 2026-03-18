/*
 * XREFs of ??0CApplicationChannel@DirectComposition@@IEAA@PEAVCConnection@1@_N@Z @ 0x1C002D724
 * Callers:
 *     ?Create@CApplicationChannel@DirectComposition@@SAJPEAI@Z @ 0x1C0024874 (-Create@CApplicationChannel@DirectComposition@@SAJPEAI@Z.c)
 *     ?Create@CSystemChannel@DirectComposition@@SAJPEAVCConnection@2@PEAPEAV12@@Z @ 0x1C0080BAC (-Create@CSystemChannel@DirectComposition@@SAJPEAVCConnection@2@PEAPEAV12@@Z.c)
 *     ?Create@CDwmChannel@DirectComposition@@SAJPEAI@Z @ 0x1C0082120 (-Create@CDwmChannel@DirectComposition@@SAJPEAI@Z.c)
 * Callees:
 *     <none>
 */

DirectComposition::CApplicationChannel *__fastcall DirectComposition::CApplicationChannel::CApplicationChannel(
        DirectComposition::CApplicationChannel *this,
        struct DirectComposition::CConnection *a2,
        char a3)
{
  char v5; // al

  *((_QWORD *)this + 4) = 0LL;
  *(_QWORD *)this = &DirectComposition::CChannel::`vftable';
  v5 = a3 ^ *((_BYTE *)this + 48);
  *((_DWORD *)this + 2) = 1;
  *((_QWORD *)this + 5) = a2;
  *((_BYTE *)this + 48) ^= v5 & 1;
  if ( (*((_BYTE *)this + 48) & 1) != 0 )
    _InterlockedAdd((volatile signed __int32 *)a2, 1u);
  *((_QWORD *)this + 2) = PsGetCurrentProcess(1LL, a2);
  *(_QWORD *)this = &DirectComposition::CApplicationChannel::`vftable';
  *((_BYTE *)this + 72) = a3;
  *((_QWORD *)this + 7) = &DirectComposition::CLinearHandleTable<unsigned int,DirectComposition::CResourceMarshaler,1953645380>::`vftable';
  *((_QWORD *)this + 12) = 8LL;
  RtlInitializeGenericTable(
    (PRTL_GENERIC_TABLE)((char *)this + 192),
    (PRTL_GENERIC_COMPARE_ROUTINE)DirectComposition::CGenericTable<unsigned int,DirectComposition::CChannel,1952662340,1>::CompareTableEntries,
    (PRTL_GENERIC_ALLOCATE_ROUTINE)DirectComposition::CGenericTable<unsigned int,DirectComposition::CDuplicatedVisualMarshaler,1952727876,1>::AllocateTableEntry,
    (PRTL_GENERIC_FREE_ROUTINE)rimUserMemAllocNodeFree,
    0LL);
  RtlInitializeGenericTable(
    (PRTL_GENERIC_TABLE)((char *)this + 264),
    (PRTL_GENERIC_COMPARE_ROUTINE)DirectComposition::CGenericTable<DirectComposition::CResourceMarshaler *,DirectComposition::CWeakReferenceBase,1953973060,1>::CompareTableEntries,
    (PRTL_GENERIC_ALLOCATE_ROUTINE)DirectComposition::CGenericTable<DirectComposition::CResourceMarshaler *,DirectComposition::CWeakReferenceBase,1953973060,1>::AllocateTableEntry,
    (PRTL_GENERIC_FREE_ROUTINE)rimUserMemAllocNodeFree,
    0LL);
  *((_BYTE *)this + 488) = a3;
  *((_QWORD *)this + 64) = 8LL;
  *((_QWORD *)this + 59) = &DirectComposition::CDCompDynamicArray<unsigned __int64>::`vftable';
  *((_QWORD *)this + 68) = (char *)this + 536;
  *((_QWORD *)this + 67) = (char *)this + 536;
  *((_QWORD *)this + 70) = (char *)this + 552;
  *((_QWORD *)this + 69) = (char *)this + 552;
  *((_QWORD *)this + 72) = (char *)this + 568;
  *((_QWORD *)this + 71) = (char *)this + 568;
  *((_QWORD *)this + 74) = (char *)this + 584;
  *((_QWORD *)this + 73) = (char *)this + 584;
  *((_BYTE *)this + 632) = a3;
  *((_QWORD *)this + 77) = (char *)this + 608;
  *((_QWORD *)this + 76) = (char *)this + 608;
  InitializeSListHead((PSLIST_HEADER)this + 9);
  *((_QWORD *)this + 43) = (char *)this + 336;
  *((_QWORD *)this + 42) = (char *)this + 336;
  return this;
}
