/*
 * XREFs of sub_1800011FC @ 0x1800011FC
 * Callers:
 *     sub_18000B5E4 @ 0x18000B5E4 (sub_18000B5E4.c)
 *     sub_18000B884 @ 0x18000B884 (sub_18000B884.c)
 *     sub_18000BE40 @ 0x18000BE40 (sub_18000BE40.c)
 *     sub_18000C34C @ 0x18000C34C (sub_18000C34C.c)
 *     sub_18000C560 @ 0x18000C560 (sub_18000C560.c)
 *     sub_18000C980 @ 0x18000C980 (sub_18000C980.c)
 *     sub_18000CB50 @ 0x18000CB50 (sub_18000CB50.c)
 *     sub_18000CF70 @ 0x18000CF70 (sub_18000CF70.c)
 *     sub_18000D108 @ 0x18000D108 (sub_18000D108.c)
 *     sub_1800127A8 @ 0x1800127A8 (sub_1800127A8.c)
 *     sub_180012910 @ 0x180012910 (sub_180012910.c)
 *     sub_180012F50 @ 0x180012F50 (sub_180012F50.c)
 *     sub_1800130C0 @ 0x1800130C0 (sub_1800130C0.c)
 *     sub_18001895C @ 0x18001895C (sub_18001895C.c)
 *     sub_1800189D0 @ 0x1800189D0 (sub_1800189D0.c)
 * Callees:
 *     <none>
 */

ULONG __fastcall sub_1800011FC(
        __int64 a1,
        unsigned __int8 *a2,
        const GUID *a3,
        const GUID *a4,
        ULONG UserDataCount,
        PEVENT_DATA_DESCRIPTOR UserData)
{
  ULONG v7; // ecx
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+30h] [rbp-18h] BYREF

  *(_DWORD *)&EventDescriptor.Id = ((_DWORD)a2 - (unsigned int)&unk_180032D88) | (*a2 << 24);
  *(_DWORD *)&EventDescriptor.Level = *(unsigned __int16 *)(a2 + 1);
  EventDescriptor.Keyword = *(_QWORD *)(a2 + 3);
  UserData->Ptr = *(_QWORD *)(a1 + 8);
  v7 = **(unsigned __int16 **)(a1 + 8);
  UserData[1].Ptr = (ULONGLONG)(a2 + 11);
  UserData->Size = v7;
  UserData->Reserved = 2;
  UserData[1].Size = *(unsigned __int16 *)(a2 + 11);
  UserData[1].Reserved = 1;
  return EventWriteTransfer(*(_QWORD *)(a1 + 32), &EventDescriptor, a3, a4, UserDataCount, UserData);
}
