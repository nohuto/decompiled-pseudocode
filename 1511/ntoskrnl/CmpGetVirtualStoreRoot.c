/*
 * XREFs of CmpGetVirtualStoreRoot @ 0x1405E2874
 * Callers:
 *     CmpReplicateKeyToVirtual @ 0x1405E29D0 (CmpReplicateKeyToVirtual.c)
 * Callees:
 *     CmpGetMappingHiveForString @ 0x1403BC7AC (CmpGetMappingHiveForString.c)
 *     CmpGetVirtualizationID @ 0x1403BD028 (CmpGetVirtualizationID.c)
 *     RtlFreeAnsiString @ 0x140445624 (RtlFreeAnsiString.c)
 */

__int64 __fastcall CmpGetVirtualStoreRoot(_QWORD *a1, _DWORD *a2)
{
  int VirtualizationID; // ebx
  UNICODE_STRING UnicodeString; // [rsp+20h] [rbp-18h] BYREF

  UnicodeString.Length = 0;
  *(_QWORD *)&UnicodeString.MaximumLength = 0LL;
  *(_DWORD *)((char *)&UnicodeString.Buffer + 2) = 0;
  HIWORD(UnicodeString.Buffer) = 0;
  VirtualizationID = CmpGetVirtualizationID(&UnicodeString);
  if ( VirtualizationID >= 0 )
  {
    VirtualizationID = CmpGetMappingHiveForString(&UnicodeString, a1);
    RtlFreeAnsiString(&UnicodeString);
    if ( VirtualizationID >= 0 )
      *a2 = *(_DWORD *)(*(_QWORD *)(*a1 + 64LL) + 36LL);
  }
  return (unsigned int)VirtualizationID;
}
