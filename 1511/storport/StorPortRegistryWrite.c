/*
 * XREFs of StorPortRegistryWrite @ 0x1C002A420
 * Callers:
 *     <none>
 * Callees:
 *     PortBuildRegKeyName @ 0x1C00137AC (PortBuildRegKeyName.c)
 *     StorpPortRegistryValidate @ 0x1C00138BC (StorpPortRegistryValidate.c)
 *     PortMiniportRegistryWrite @ 0x1C003D718 (PortMiniportRegistryWrite.c)
 */

bool __fastcall StorPortRegistryWrite(__int64 a1, const char *a2, int a3, unsigned int a4, __int64 a5, unsigned int a6)
{
  bool v9; // bl
  __int64 v11; // rax
  __int64 v12; // rsi
  _DWORD *v13; // rdi
  int v14; // edx
  __int64 v15; // r11
  unsigned int v16; // eax
  struct _UNICODE_STRING UnicodeString; // [rsp+20h] [rbp-30h] BYREF
  struct _UNICODE_STRING Destination; // [rsp+30h] [rbp-20h] BYREF
  struct _STRING DestinationString; // [rsp+40h] [rbp-10h] BYREF

  Destination.Length = 0;
  *(_QWORD *)&Destination.MaximumLength = 0LL;
  *(_DWORD *)((char *)&Destination.Buffer + 2) = 0;
  HIWORD(Destination.Buffer) = 0;
  v9 = 0;
  *(_QWORD *)&UnicodeString.MaximumLength = 0LL;
  *(_DWORD *)((char *)&UnicodeString.Buffer + 2) = 0;
  HIWORD(UnicodeString.Buffer) = 0;
  UnicodeString.Length = 0;
  if ( KeGetCurrentIrql() )
    return 0;
  v11 = *(_QWORD *)(a1 - 16);
  v12 = *(_QWORD *)(*(_QWORD *)v11 + 16LL);
  v13 = (_DWORD *)(*(_QWORD *)v11 + 2088LL);
  if ( !StorpPortRegistryValidate((__int64)v13, a5, &a6) )
    return 0;
  v16 = a6;
  v13[13] = v14 - v13[8];
  v13[11] = v16;
  if ( PortBuildRegKeyName((PCUNICODE_STRING)(v12 + 40), &Destination, *(_DWORD *)(v15 + 56), a3) >= 0 )
  {
    RtlInitAnsiString(&DestinationString, a2);
    if ( RtlAnsiStringToUnicodeString(&UnicodeString, &DestinationString, 1u) >= 0 )
      v9 = (int)((__int64 (__fastcall *)(struct _UNICODE_STRING *, struct _UNICODE_STRING *, _QWORD, _DWORD *))PortMiniportRegistryWrite)(
                  &Destination,
                  &UnicodeString,
                  a4,
                  v13) >= 0;
  }
  if ( UnicodeString.Buffer )
    RtlFreeUnicodeString(&UnicodeString);
  if ( Destination.Buffer )
    RtlFreeUnicodeString(&Destination);
  return v9;
}
