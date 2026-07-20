/*
 * XREFs of SmpExpandEnvironmentString @ 0x14000259C
 * Callers:
 *     SmpParseCommandLine @ 0x1400020D0 (SmpParseCommandLine.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SmpExpandEnvironmentString(PUNICODE_STRING Source)
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
                                SmBaseTag,
                                MaximumLength);
  if ( Destination.Buffer )
  {
    Destination.Length = 0;
    v3 = RtlExpandEnvironmentStrings_U(SmpDefaultEnvironment, Source, &Destination, 0LL);
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
