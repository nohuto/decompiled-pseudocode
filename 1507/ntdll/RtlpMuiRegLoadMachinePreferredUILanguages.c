/*
 * XREFs of RtlpMuiRegLoadMachinePreferredUILanguages @ 0x180047AF0
 * Callers:
 *     RtlpMuiRegLoadPreferredUILanguages @ 0x1800495D8 (RtlpMuiRegLoadPreferredUILanguages.c)
 * Callees:
 *     RtlpMuiRegAddMultiSzToLangFallbackList @ 0x18001E948 (RtlpMuiRegAddMultiSzToLangFallbackList.c)
 *     RtlInitUnicodeString @ 0x18001F3D0 (RtlInitUnicodeString.c)
 *     RtlFreeHeap @ 0x18002AB90 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x18002ED40 (RtlAllocateHeap.c)
 *     LdrpQueryValueKey @ 0x1800499D4 (LdrpQueryValueKey.c)
 *     NtClose @ 0x1800939F0 (NtClose.c)
 *     NtOpenKey @ 0x180093A20 (NtOpenKey.c)
 */

__int64 __fastcall RtlpMuiRegLoadMachinePreferredUILanguages(__int64 a1, __int64 a2, _BYTE *a3, __int64 *a4)
{
  WCHAR *Heap; // rsi
  int v8; // ebx
  int v9; // ecx
  unsigned int v11; // r8d
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
    Heap = (WCHAR *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, (unsigned int)(v15 + 2));
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
        v8 = RtlpMuiRegAddMultiSzToLangFallbackList(a1, Heap, v11, 8, 3, 1u, a4);
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
