/*
 * XREFs of EtwpQueryRegString @ 0x180002B3C
 * Callers:
 *     EtwpAddDebugInfoEvents @ 0x180002994 (EtwpAddDebugInfoEvents.c)
 * Callees:
 *     RtlAllocateHeap @ 0x180022DA0 (RtlAllocateHeap.c)
 *     RtlInitUnicodeString @ 0x180044140 (RtlInitUnicodeString.c)
 *     RtlFreeHeap @ 0x1800466E0 (RtlFreeHeap.c)
 *     NtClose @ 0x1800A6600 (NtClose.c)
 *     NtOpenKey @ 0x1800A6660 (NtOpenKey.c)
 *     NtQueryValueKey @ 0x1800A6700 (NtQueryValueKey.c)
 *     memmove @ 0x1800AC980 (memmove.c)
 *     memset @ 0x1800ACCC0 (memset.c)
 */

__int64 __fastcall EtwpQueryRegString(__int64 a1, void *a2, void *a3)
{
  NTSTATUS v4; // edi
  unsigned __int64 v5; // rax
  ULONG Length; // edi
  unsigned int *Heap; // rbx
  ULONG ResultLength; // [rsp+38h] [rbp-9h] BYREF
  _UNICODE_STRING DestinationString; // [rsp+40h] [rbp-1h] BYREF
  _UNICODE_STRING ValueName; // [rsp+50h] [rbp+Fh] BYREF
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+60h] [rbp+1Fh] BYREF
  HANDLE KeyHandle; // [rsp+B0h] [rbp+6Fh] BYREF

  KeyHandle = a2;
  ResultLength = 260;
  RtlInitUnicodeString(&DestinationString, L"\\Registry\\Machine\\SOFTWARE\\Microsoft\\Windows NT\\CurrentVersion");
  memset(&ObjectAttributes, 0, sizeof(ObjectAttributes));
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.Length = 48;
  ObjectAttributes.Attributes = 64;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v4 = NtOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes);
  if ( v4 < 0 )
    return (unsigned int)v4;
  v5 = 2LL * ResultLength;
  if ( v5 <= 0xFFFFFFFF )
  {
    Length = v5 + 12;
    if ( (int)v5 + 12 >= (unsigned int)v5 )
    {
      Heap = (unsigned int *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, Length);
      if ( Heap )
      {
        RtlInitUnicodeString(&ValueName, L"BuildLabEx");
        v4 = NtQueryValueKey(KeyHandle, &ValueName, KeyValuePartialInformation, Heap, Length, &ResultLength);
        if ( v4 >= 0 )
          memmove(a3, Heap + 3, Heap[2]);
        RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, Heap);
      }
      else
      {
        v4 = -1073741801;
      }
      NtClose(KeyHandle);
      return (unsigned int)v4;
    }
  }
  NtClose(KeyHandle);
  return 3221225621LL;
}
