/*
 * XREFs of _ResCreateMutex @ 0x1800F9524
 * Callers:
 *     ResCRequestInitMutex @ 0x1800F89E0 (ResCRequestInitMutex.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x18001D1D0 (RtlInitUnicodeString.c)
 *     RtlSetLastWin32Error @ 0x180048BE0 (RtlSetLastWin32Error.c)
 *     RtlNtStatusToDosError @ 0x180048C10 (RtlNtStatusToDosError.c)
 *     NtCreateMutant @ 0x1800A65B0 (NtCreateMutant.c)
 *     BaseFormatObjectAttributes @ 0x1800F84E8 (BaseFormatObjectAttributes.c)
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
