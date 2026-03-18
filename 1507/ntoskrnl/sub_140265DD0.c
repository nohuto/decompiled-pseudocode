/*
 * XREFs of sub_140265DD0 @ 0x140265DD0
 * Callers:
 *     OpenGlobalizationUserSettingsKey @ 0x14014FC60 (OpenGlobalizationUserSettingsKey.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140047FE0 (RtlInitUnicodeString.c)
 *     RtlFreeHeap @ 0x140109854 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x14010A1D0 (RtlAllocateHeap.c)
 *     ZwClose @ 0x14017F1D0 (ZwClose.c)
 *     ZwQueryValueKey @ 0x14017F2D0 (ZwQueryValueKey.c)
 *     sub_140265F48 @ 0x140265F48 (sub_140265F48.c)
 */

__int64 __fastcall sub_140265DD0(ULONG a1, unsigned int a2, __int64 a3, HANDLE *a4)
{
  __int64 v6; // rcx
  int v7; // edi
  NTSTATUS v8; // eax
  WCHAR *Heap; // rbx
  __int64 v10; // rcx
  void *v12; // [rsp+30h] [rbp-40h] BYREF
  UNICODE_STRING ValueName; // [rsp+38h] [rbp-38h] BYREF
  UNICODE_STRING DestinationString; // [rsp+48h] [rbp-28h] BYREF
  UNICODE_STRING v15; // [rsp+58h] [rbp-18h] BYREF
  ULONG ResultLength; // [rsp+90h] [rbp+20h] BYREF
  ULONG v17; // [rsp+A0h] [rbp+30h] BYREF
  int v18; // [rsp+A4h] [rbp+34h]

  v18 = HIDWORD(a3);
  ResultLength = a1;
  v17 = 0;
  RtlInitUnicodeString(
    &DestinationString,
    L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\CommonGlobUserSettings\\");
  v7 = sub_140265F48(v6, a2, &DestinationString, a4, &v17);
  if ( v7 >= 0 && v17 == 2 )
  {
    v12 = 0LL;
    ResultLength = 0;
    RtlInitUnicodeString(&ValueName, L"RedirectedKey");
    v8 = ZwQueryValueKey(*a4, &ValueName, KeyValuePartialInformation, 0LL, 0, &ResultLength);
    if ( ResultLength && (v8 == -1073741789 || v8 == -2147483643) )
    {
      v7 = 0;
      Heap = (WCHAR *)RtlAllocateHeap(*(PVOID *)(*(_QWORD *)&KeGetPcr()->MajorVersion + 48LL), 8u, ResultLength);
      if ( Heap )
      {
        if ( ZwQueryValueKey(*a4, &ValueName, KeyValuePartialInformation, Heap, ResultLength, &ResultLength) >= 0
          && *((_DWORD *)Heap + 1) == 1 )
        {
          RtlInitUnicodeString(&v15, Heap + 6);
          if ( (int)sub_140265F48(v10, a2, &v15, &v12, &v17) >= 0 )
          {
            ZwClose(*a4);
            *a4 = v12;
          }
        }
        RtlFreeHeap(*(PVOID *)(*(_QWORD *)&KeGetPcr()->MajorVersion + 48LL), 0, Heap);
      }
    }
    else
    {
      return 0;
    }
  }
  return (unsigned int)v7;
}
