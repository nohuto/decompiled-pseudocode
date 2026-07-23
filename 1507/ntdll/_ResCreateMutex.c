/*
 * XREFs of _ResCreateMutex @ 0x1800F9C0C
 * Callers:
 *     ResCRequestInitMutex @ 0x1800F90C8 (ResCRequestInitMutex.c)
 * Callees:
 *     RtlSetLastWin32Error @ 0x18000F090 (RtlSetLastWin32Error.c)
 *     RtlNtStatusToDosError @ 0x18000F0C0 (RtlNtStatusToDosError.c)
 *     RtlInitUnicodeString @ 0x18001F3D0 (RtlInitUnicodeString.c)
 *     NtCreateMutant @ 0x180094370 (NtCreateMutant.c)
 *     BaseFormatObjectAttributes @ 0x1800F8B10 (BaseFormatObjectAttributes.c)
 */

HANDLE __fastcall ResCreateMutex(_OBJECT_ATTRIBUTES *a1, __int64 a2, _UNICODE_STRING *p_DestinationString)
{
  NTSTATUS v3; // eax
  LONG v4; // ecx
  LONG v6; // eax
  _UNICODE_STRING DestinationString; // [rsp+20h] [rbp-48h] BYREF
  _BYTE v8[56]; // [rsp+30h] [rbp-38h] BYREF
  POBJECT_ATTRIBUTES ObjectAttributes; // [rsp+70h] [rbp+8h] BYREF
  HANDLE MutantHandle; // [rsp+80h] [rbp+18h] BYREF

  ObjectAttributes = a1;
  if ( p_DestinationString )
  {
    RtlInitUnicodeString(&DestinationString, &p_DestinationString->Length);
    p_DestinationString = &DestinationString;
  }
  v3 = BaseFormatObjectAttributes((__int64)v8, 0LL, (__int64)p_DestinationString, &ObjectAttributes);
  if ( v3 < 0 || (v3 = NtCreateMutant(&MutantHandle, 0x1F0001u, ObjectAttributes, 1u), v3 < 0) )
  {
    v6 = RtlNtStatusToDosError(v3);
    RtlSetLastWin32Error(v6);
    return 0LL;
  }
  else
  {
    if ( v3 == 0x40000000 )
      v4 = 183;
    else
      v4 = 0;
    RtlSetLastWin32Error(v4);
    return MutantHandle;
  }
}
