/*
 * XREFs of sub_14000247C @ 0x14000247C
 * Callers:
 *     sub_140001FB0 @ 0x140001FB0 (sub_140001FB0.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_14000247C(PUNICODE_STRING Source)
{
  USHORT MaximumLength; // ax
  NTSTATUS v3; // ebx
  void *v4; // rcx
  struct _UNICODE_STRING Destination; // [rsp+20h] [rbp-18h] BYREF

  MaximumLength = 520;
  if ( Source->MaximumLength >= 0x208u )
    MaximumLength = Source->MaximumLength;
  Destination.MaximumLength = MaximumLength;
  Destination.Buffer = (PWSTR)RtlAllocateHeap(
                                *(PVOID *)(*(_QWORD *)&KeGetPcr()->MajorVersion + 48LL),
                                Flags,
                                MaximumLength);
  if ( Destination.Buffer )
  {
    Destination.Length = 0;
    v3 = RtlExpandEnvironmentStrings_U(Environment, Source, &Destination, 0LL);
    v4 = *(void **)(*(_QWORD *)&KeGetPcr()->MajorVersion + 48LL);
    if ( v3 < 0 )
    {
      RtlFreeHeap(v4, 0, Destination.Buffer);
    }
    else
    {
      RtlFreeHeap(v4, 0, Source->Buffer);
      *Source = Destination;
    }
  }
  else
  {
    return (unsigned int)-1073741801;
  }
  return (unsigned int)v3;
}
