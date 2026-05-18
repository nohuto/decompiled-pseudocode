/*
 * XREFs of sub_1800010DC @ 0x1800010DC
 * Callers:
 *     sub_180001310 @ 0x180001310 (sub_180001310.c)
 *     sub_18000149C @ 0x18000149C (sub_18000149C.c)
 *     sub_180001564 @ 0x180001564 (sub_180001564.c)
 *     DwmpCreateSessionProcess @ 0x180002CD0 (DwmpCreateSessionProcess.c)
 *     DwmpTerminateSessionProcess @ 0x1800030E0 (DwmpTerminateSessionProcess.c)
 *     sub_180005540 @ 0x180005540 (sub_180005540.c)
 *     sub_1800055F0 @ 0x1800055F0 (sub_1800055F0.c)
 *     sub_1800056A0 @ 0x1800056A0 (sub_1800056A0.c)
 *     sub_180005740 @ 0x180005740 (sub_180005740.c)
 * Callees:
 *     <none>
 */

ULONG __fastcall sub_1800010DC(
        __int64 a1,
        unsigned __int8 *a2,
        __int64 a3,
        __int64 a4,
        ULONG UserDataCount,
        PEVENT_DATA_DESCRIPTOR UserData)
{
  ULONG v7; // ecx
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+30h] [rbp-18h] BYREF

  *(_DWORD *)&EventDescriptor.Id = ((_DWORD)a2 - (unsigned int)&unk_1800096B0) | (*a2 << 24);
  *(_DWORD *)&EventDescriptor.Level = *(unsigned __int16 *)(a2 + 1);
  EventDescriptor.Keyword = *(_QWORD *)(a2 + 3);
  UserData->Ptr = *(_QWORD *)(a1 + 8);
  v7 = **(unsigned __int16 **)(a1 + 8);
  UserData[1].Ptr = (ULONGLONG)(a2 + 11);
  UserData->Size = v7;
  UserData->Reserved = 2;
  UserData[1].Size = *(unsigned __int16 *)(a2 + 11);
  UserData[1].Reserved = 1;
  return EventWriteTransfer(*(_QWORD *)(a1 + 32), &EventDescriptor, 0LL, 0LL, UserDataCount, UserData);
}
