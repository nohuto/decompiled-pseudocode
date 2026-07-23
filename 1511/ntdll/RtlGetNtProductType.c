/*
 * XREFs of RtlGetNtProductType @ 0x1800743D0
 * Callers:
 *     SbpUpdateCacheWithCurrentImpl @ 0x18000F440 (SbpUpdateCacheWithCurrentImpl.c)
 *     SwitchedRtlGetVersion @ 0x180074114 (SwitchedRtlGetVersion.c)
 *     RtlGetVersion @ 0x1800742A0 (RtlGetVersion.c)
 *     RtlCreateBootStatusDataFile @ 0x1800E2A00 (RtlCreateBootStatusDataFile.c)
 * Callees:
 *     RtlEqualUnicodeString @ 0x1800150E0 (RtlEqualUnicodeString.c)
 *     RtlInitUnicodeString @ 0x18001D1D0 (RtlInitUnicodeString.c)
 *     RtlFreeHeap @ 0x1800207C0 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x1800255D0 (RtlAllocateHeap.c)
 *     NtClose @ 0x1800A52A0 (NtClose.c)
 *     NtOpenKey @ 0x1800A5300 (NtOpenKey.c)
 *     NtQueryValueKey @ 0x1800A53A0 (NtQueryValueKey.c)
 */

BOOLEAN __cdecl RtlGetNtProductType(PNT_PRODUCT_TYPE NtProductType)
{
  BOOLEAN v3; // si
  NTSTATUS v4; // eax
  unsigned __int16 *Heap; // rbx
  unsigned __int16 *v6; // rax
  _UNICODE_STRING String1; // [rsp+30h] [rbp-49h] BYREF
  _UNICODE_STRING String2; // [rsp+40h] [rbp-39h] BYREF
  _UNICODE_STRING v9; // [rsp+50h] [rbp-29h] BYREF
  _UNICODE_STRING ValueName; // [rsp+60h] [rbp-19h] BYREF
  _UNICODE_STRING v11; // [rsp+70h] [rbp-9h] BYREF
  _UNICODE_STRING DestinationString; // [rsp+80h] [rbp+7h] BYREF
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+90h] [rbp+17h] BYREF
  ULONG ResultLength; // [rsp+E8h] [rbp+6Fh] BYREF
  HANDLE KeyHandle; // [rsp+F0h] [rbp+77h] BYREF

  if ( MEMORY[0x7FFE0268] )
  {
    *NtProductType = MEMORY[0x7FFE0264];
    return 1;
  }
  *NtProductType = NtProductWinNt;
  v3 = 0;
  RtlInitUnicodeString(&DestinationString, L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\ProductOptions");
  RtlInitUnicodeString(&ValueName, L"ProductType");
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.Length = 48;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v4 = NtOpenKey(&KeyHandle, 0x2000000u, &ObjectAttributes);
  Heap = 0LL;
  if ( v4 < 0 )
  {
    KeyHandle = 0LL;
    goto LABEL_7;
  }
  Heap = (unsigned __int16 *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, 0x100uLL);
  if ( Heap )
  {
    v4 = NtQueryValueKey(KeyHandle, &ValueName, KeyValueFullInformation, Heap, 0x100u, &ResultLength);
LABEL_7:
    if ( v4 >= 0 && *((_DWORD *)Heap + 1) == 1 )
    {
      v6 = (unsigned __int16 *)((char *)Heap + *((unsigned int *)Heap + 2));
      String1.MaximumLength = Heap[6];
      String1.Buffer = v6;
      String1.Length = String1.MaximumLength - 2;
      RtlInitUnicodeString(&String2, L"WinNt");
      RtlInitUnicodeString(&v9, L"LanmanNt");
      RtlInitUnicodeString(&v11, L"ServerNt");
      if ( RtlEqualUnicodeString(&String1, &String2, 1u) )
      {
        *NtProductType = NtProductWinNt;
      }
      else if ( RtlEqualUnicodeString(&String1, &v9, 1u) )
      {
        *NtProductType = NtProductLanManNt;
      }
      else
      {
        if ( !RtlEqualUnicodeString(&String1, &v11, 1u) )
          goto LABEL_16;
        *NtProductType = NtProductServer;
      }
      v3 = 1;
    }
LABEL_16:
    if ( Heap )
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, Heap);
  }
  if ( KeyHandle )
    NtClose(KeyHandle);
  return v3;
}
