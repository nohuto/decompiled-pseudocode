/*
 * XREFs of sub_14000BCA0 @ 0x14000BCA0
 * Callers:
 *     sub_140005E5C @ 0x140005E5C (sub_140005E5C.c)
 * Callees:
 *     <none>
 */

__int64 sub_14000BCA0()
{
  unsigned int v0; // ebx
  struct _UNICODE_STRING Destination; // [rsp+20h] [rbp-18h] BYREF

  v0 = 0;
  RtlInitUnicodeString(&stru_140020170, (PCWSTR)0x7FFE0030);
  Destination.Length = 0;
  Destination.MaximumLength = stru_140020170.MaximumLength + stru_1400208A0.MaximumLength + 20;
  Destination.Buffer = (PWSTR)RtlAllocateHeap(
                                *(PVOID *)(*(_QWORD *)&KeGetPcr()->MajorVersion + 48LL),
                                Flags,
                                Destination.MaximumLength);
  if ( Destination.Buffer )
  {
    RtlAppendUnicodeStringToString(&Destination, &stru_140020170);
    RtlAppendUnicodeToString(&Destination, L"\\system32;");
    RtlAppendUnicodeStringToString(&Destination, &stru_1400208A0);
    RtlFreeHeap(*(PVOID *)(*(_QWORD *)&KeGetPcr()->MajorVersion + 48LL), 0, stru_1400208A0.Buffer);
    stru_1400208A0 = Destination;
  }
  else
  {
    return (unsigned int)-1073741801;
  }
  return v0;
}
