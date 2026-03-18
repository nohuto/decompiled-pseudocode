/*
 * XREFs of ??0CApplicationChannel@DirectComposition@@IEAA@PEAVCConnection@1@_NI@Z @ 0x1C003DEDC
 * Callers:
 *     ?Create@CApplicationChannel@DirectComposition@@SAJPEAI0PEAPEAX@Z @ 0x1C000D5B4 (-Create@CApplicationChannel@DirectComposition@@SAJPEAI0PEAPEAX@Z.c)
 *     ?Create@CSystemChannel@DirectComposition@@SAJPEAVCConnection@2@PEAPEAV12@@Z @ 0x1C0079F60 (-Create@CSystemChannel@DirectComposition@@SAJPEAVCConnection@2@PEAPEAV12@@Z.c)
 *     ?Create@CDwmChannel@DirectComposition@@SAJPEAI@Z @ 0x1C00803E0 (-Create@CDwmChannel@DirectComposition@@SAJPEAI@Z.c)
 * Callees:
 *     <none>
 */

DirectComposition::CApplicationChannel *__fastcall DirectComposition::CApplicationChannel::CApplicationChannel(
        DirectComposition::CApplicationChannel *this,
        struct DirectComposition::CConnection *a2,
        char a3,
        int a4)
{
  char v7; // al

  *((_QWORD *)this + 4) = 0LL;
  *(_QWORD *)this = &DirectComposition::CChannel::`vftable';
  v7 = a3 ^ *((_BYTE *)this + 48);
  *((_DWORD *)this + 2) = 1;
  *((_QWORD *)this + 5) = a2;
  *((_BYTE *)this + 48) ^= v7 & 1;
  if ( (*((_BYTE *)this + 48) & 1) != 0 )
    _InterlockedAdd((volatile signed __int32 *)a2, 1u);
  *((_QWORD *)this + 2) = PsGetCurrentProcess(1LL);
  *(_QWORD *)this = &DirectComposition::CApplicationChannel::`vftable';
  *((_BYTE *)this + 72) = a3;
  *((_QWORD *)this + 7) = &DirectComposition::CExternalResourceTable::`vftable';
  *((_QWORD *)this + 12) = 8LL;
  *((_QWORD *)this + 15) = &DirectComposition::CInternalResourceTable::`vftable';
  *((_BYTE *)this + 136) = a3;
  *((_QWORD *)this + 20) = 8LL;
  RtlInitializeGenericTable(
    (PRTL_GENERIC_TABLE)((char *)this + 272),
    DirectComposition::CGenericTable<DirectComposition::CResourceMarshaler *,DirectComposition::CWeakReferenceBase,1953973060,1>::CompareTableEntries,
    DirectComposition::CGenericTable<DirectComposition::CResourceMarshaler *,DirectComposition::CWeakReferenceBase,1953973060,1>::AllocateTableEntry,
    (PRTL_GENERIC_FREE_ROUTINE)rimUserMemAllocNodeFree,
    0LL);
  *((_BYTE *)this + 496) = a3;
  *((_QWORD *)this + 65) = 8LL;
  *((_QWORD *)this + 60) = &DirectComposition::CDeletedNotificationList::`vftable';
  *((_QWORD *)this + 69) = (char *)this + 544;
  *((_QWORD *)this + 68) = (char *)this + 544;
  *((_QWORD *)this + 71) = (char *)this + 560;
  *((_QWORD *)this + 70) = (char *)this + 560;
  *((_QWORD *)this + 73) = (char *)this + 576;
  *((_QWORD *)this + 72) = (char *)this + 576;
  *((_QWORD *)this + 75) = (char *)this + 592;
  *((_QWORD *)this + 74) = (char *)this + 592;
  *((_BYTE *)this + 640) = a3;
  *((_QWORD *)this + 78) = (char *)this + 616;
  *((_QWORD *)this + 77) = (char *)this + 616;
  *((_DWORD *)this + 180) = a4;
  InitializeSListHead((PSLIST_HEADER)this + 13);
  *((_QWORD *)this + 44) = (char *)this + 344;
  *((_QWORD *)this + 43) = (char *)this + 344;
  *((_QWORD *)this + 33) = (char *)this + 256;
  *((_QWORD *)this + 32) = (char *)this + 256;
  return this;
}
