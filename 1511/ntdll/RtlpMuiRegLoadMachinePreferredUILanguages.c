/*
 * XREFs of RtlpMuiRegLoadMachinePreferredUILanguages @ 0x1800044FC
 * Callers:
 *     RtlpMuiRegLoadPreferredUILanguages @ 0x180006844 (RtlpMuiRegLoadPreferredUILanguages.c)
 * Callees:
 *     LdrpQueryValueKey @ 0x180006C48 (LdrpQueryValueKey.c)
 *     RtlInitUnicodeString @ 0x18001D1D0 (RtlInitUnicodeString.c)
 *     RtlpMuiRegAddMultiSzToLangFallbackList @ 0x18001D214 (RtlpMuiRegAddMultiSzToLangFallbackList.c)
 *     RtlFreeHeap @ 0x1800207C0 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x1800255D0 (RtlAllocateHeap.c)
 *     NtClose @ 0x1800A52A0 (NtClose.c)
 *     NtOpenKey @ 0x1800A5300 (NtOpenKey.c)
 */

__int64 __fastcall RtlpMuiRegLoadMachinePreferredUILanguages(__int64 a1, __int64 a2, _BYTE *a3, __int64 a4)
{
  PVOID Heap; // rsi
  int v8; // ebx
  int v9; // ecx
  __int64 v11; // r8
  HANDLE KeyHandle; // [rsp+40h] [rbp-19h] BYREF
  _UNICODE_STRING DestinationString; // [rsp+48h] [rbp-11h] BYREF
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+58h] [rbp-1h] BYREF
  __int64 v15; // [rsp+C0h] [rbp+67h] BYREF
  int v16; // [rsp+C8h] [rbp+6Fh]

  KeyHandle = 0LL;
  Heap = 0LL;
  LODWORD(v15) = 0;
  v16 = 7;
  if ( a1 && a3 && a4 )
  {
    RtlInitUnicodeString(&DestinationString, L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\MUI\\Settings");
    KeyHandle = 0LL;
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.ObjectName = &DestinationString;
    ObjectAttributes.Length = 48;
    ObjectAttributes.Attributes = 64;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    if ( NtOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes) < 0 )
      goto LABEL_6;
    RtlInitUnicodeString(&DestinationString, L"PreferredUILanguages");
    v8 = -1073741772;
    v9 = LdrpQueryValueKey(KeyHandle, &DestinationString, (__int64)&v15);
    if ( v9 == -1073741772 || !(_DWORD)v15 )
      goto LABEL_6;
    if ( v9 != -2147483643 )
      goto LABEL_7;
    Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, (unsigned int)(v15 + 2));
    if ( !Heap )
    {
      v8 = -1073741801;
      goto LABEL_7;
    }
    v8 = LdrpQueryValueKey(KeyHandle, &DestinationString, (__int64)&v15);
    if ( v8 >= 0 )
    {
      if ( v16 == 7 || v16 == 1 )
      {
        v11 = (unsigned int)v15 >> 1;
        *a3 = 0;
        v8 = RtlpMuiRegAddMultiSzToLangFallbackList(a1, Heap, v11, 8LL, 3, 1, a4);
        goto LABEL_7;
      }
LABEL_6:
      v8 = 0;
      *a3 = 1;
    }
  }
  else
  {
    v8 = -1073741811;
  }
LABEL_7:
  if ( KeyHandle )
    NtClose(KeyHandle);
  if ( Heap )
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, Heap);
  return (unsigned int)v8;
}
