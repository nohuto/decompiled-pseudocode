/*
 * XREFs of StorPortRegistryRead @ 0x1C0016310
 * Callers:
 *     <none>
 * Callees:
 *     PortMiniportRegistryRead @ 0x1C0016454 (PortMiniportRegistryRead.c)
 *     PortBuildRegKeyName @ 0x1C00165A8 (PortBuildRegKeyName.c)
 *     StorpPortRegistryValidate @ 0x1C00166CC (StorpPortRegistryValidate.c)
 */

char __fastcall StorPortRegistryRead(__int64 a1, const char *a2, __int64 a3, unsigned int a4, __int64 a5, int *a6)
{
  char v6; // si
  __int64 v9; // rax
  __int64 v10; // r14
  _DWORD *v11; // rdi
  int v12; // edx
  int v13; // eax
  int v14; // eax
  struct _UNICODE_STRING UnicodeString; // [rsp+20h] [rbp-30h] BYREF
  struct _UNICODE_STRING Destination; // [rsp+30h] [rbp-20h] BYREF
  struct _STRING DestinationString; // [rsp+40h] [rbp-10h] BYREF

  v6 = 0;
  Destination.Length = 0;
  *(_QWORD *)&Destination.MaximumLength = 0LL;
  *(_DWORD *)((char *)&Destination.Buffer + 2) = 0;
  HIWORD(Destination.Buffer) = 0;
  *(_QWORD *)&UnicodeString.MaximumLength = 0LL;
  *(_DWORD *)((char *)&UnicodeString.Buffer + 2) = 0;
  HIWORD(UnicodeString.Buffer) = 0;
  UnicodeString.Length = 0;
  if ( KeGetCurrentIrql() )
  {
    *a6 = 0;
    return 0;
  }
  v9 = *(_QWORD *)(a1 - 16);
  v10 = *(_QWORD *)(*(_QWORD *)v9 + 16LL);
  v11 = (_DWORD *)(*(_QWORD *)v9 + 2088LL);
  if ( !(unsigned __int8)StorpPortRegistryValidate(v11, a5, a6) )
    return 0;
  v13 = *a6;
  v11[13] = v12 - v11[8];
  v11[11] = v13;
  *a6 = 0;
  if ( (int)PortBuildRegKeyName((PCUNICODE_STRING)(v10 + 40), &Destination) >= 0 )
  {
    RtlInitAnsiString(&DestinationString, a2);
    if ( RtlAnsiStringToUnicodeString(&UnicodeString, &DestinationString, 1u) >= 0 )
    {
      v14 = ((__int64 (__fastcall *)(struct _UNICODE_STRING *, struct _UNICODE_STRING *, _QWORD, _DWORD *))PortMiniportRegistryRead)(
              &Destination,
              &UnicodeString,
              a4,
              v11);
      if ( v14 >= 0 )
      {
        v6 = 1;
        *a6 = v11[11];
      }
      else if ( v14 == -1073741789 )
      {
        *a6 = v11[12];
      }
      else
      {
        *a6 = 0;
      }
    }
  }
  if ( UnicodeString.Buffer )
    RtlFreeUnicodeString(&UnicodeString);
  if ( Destination.Buffer )
    RtlFreeUnicodeString(&Destination);
  return v6;
}
