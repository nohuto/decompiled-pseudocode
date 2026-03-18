/*
 * XREFs of _TlgWriteAgg @ 0x1C0027EB4
 * Callers:
 *     VidSchiMarkDeviceAsError @ 0x1C0001200 (VidSchiMarkDeviceAsError.c)
 * Callees:
 *     ExtractAggregateFieldTypes @ 0x1C0028418 (ExtractAggregateFieldTypes.c)
 *     InsertEventEntryInLookUpTable @ 0x1C00286E8 (InsertEventEntryInLookUpTable.c)
 */

NTSTATUS __fastcall TlgWriteAgg(
        __int64 a1,
        unsigned __int8 *a2,
        __int64 a3,
        __int64 a4,
        int a5,
        PEVENT_DATA_DESCRIPTOR UserData)
{
  ULONGLONG v6; // rax
  unsigned __int16 *v7; // rdx
  NTSTATUS result; // eax
  char AggregateFieldTypes; // al
  int v10; // ecx
  int v11; // r8d
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+30h] [rbp-18h] BYREF

  *(_DWORD *)&EventDescriptor.Id = ((_DWORD)a2 - (unsigned int)&TraceLoggingMetadata) | (*a2 << 24);
  *(_DWORD *)&EventDescriptor.Level = *(unsigned __int16 *)(a2 + 1);
  v6 = *(_QWORD *)(a2 + 3);
  v7 = (unsigned __int16 *)(a2 + 11);
  EventDescriptor.Keyword = v6;
  UserData->Ptr = (ULONGLONG)off_1C0035008;
  UserData->Size = *(unsigned __int16 *)off_1C0035008;
  UserData->Reserved = 2;
  UserData[1].Ptr = (ULONGLONG)v7;
  UserData[1].Size = *v7;
  result = -1073741811;
  UserData[1].Reserved = 1;
  if ( (void (__fastcall *)(LPCGUID, __int64, __int64, ULONGLONG, ULONGLONG, PEVENT_FILTER_DESCRIPTOR, _QWORD *))qword_1C0035028 == RegisteredProviderEtwCallback )
  {
    AggregateFieldTypes = ExtractAggregateFieldTypes(RegisteredProviderEtwCallback, UserData);
    if ( AggregateFieldTypes )
    {
      LOBYTE(v11) = 10;
      return InsertEventEntryInLookUpTable(
               v10,
               (unsigned int)&EventDescriptor,
               v11,
               (_DWORD)UserData,
               AggregateFieldTypes);
    }
    else
    {
      return EtwWriteTransfer(RegHandle, &EventDescriptor, 0LL, 0LL, 0xAu, UserData);
    }
  }
  return result;
}
