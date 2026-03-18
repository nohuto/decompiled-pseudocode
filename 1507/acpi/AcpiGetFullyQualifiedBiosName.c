/*
 * XREFs of AcpiGetFullyQualifiedBiosName @ 0x1C007A7A0
 * Callers:
 *     <none>
 * Callees:
 *     AMLIDereferenceHandleEx @ 0x1C000C960 (AMLIDereferenceHandleEx.c)
 *     AMLIGetNameSpaceObject @ 0x1C000DA28 (AMLIGetNameSpaceObject.c)
 *     ACPIAmliBuildObjectPathname @ 0x1C0016898 (ACPIAmliBuildObjectPathname.c)
 *     OSConvertDeviceHandleToNSHANDLE @ 0x1C00180E0 (OSConvertDeviceHandleToNSHANDLE.c)
 *     ACPIInitUnicodeString @ 0x1C006A934 (ACPIInitUnicodeString.c)
 */

__int64 __fastcall AcpiGetFullyQualifiedBiosName(ULONG_PTR a1, __int64 a2, struct _UNICODE_STRING *a3, _DWORD *a4)
{
  int v7; // ebx
  unsigned __int16 Length; // cx
  UNICODE_STRING SourceString; // [rsp+20h] [rbp-10h] BYREF
  PVOID P; // [rsp+68h] [rbp+38h] BYREF
  __int64 *v12; // [rsp+78h] [rbp+48h]

  v12 = 0LL;
  *(_QWORD *)&SourceString.Length = 0LL;
  SourceString.Buffer = 0LL;
  P = 0LL;
  *a4 = 0;
  OSConvertDeviceHandleToNSHANDLE(a1);
  v7 = AMLIGetNameSpaceObject(*(_BYTE **)(a2 + 8));
  if ( v7 >= 0 )
  {
    v7 = ACPIAmliBuildObjectPathname(v12, &P, 1);
    if ( v7 >= 0 )
    {
      v7 = ACPIInitUnicodeString(&SourceString, (const char *)P);
      if ( v7 >= 0 )
      {
        Length = SourceString.Length;
        *a4 = SourceString.Length + 2;
        if ( Length <= a3->MaximumLength )
        {
          RtlCopyUnicodeString(a3, &SourceString);
          v7 = 0;
          a3->Buffer[(unsigned __int16)((a3->MaximumLength >> 1) - 1)] = 0;
        }
        else
        {
          v7 = -1073741789;
        }
      }
    }
    if ( P )
      ExFreePoolWithTag(P, 0);
  }
  if ( SourceString.Buffer )
    ExFreePoolWithTag(SourceString.Buffer, 0x53706341u);
  if ( v12 )
    AMLIDereferenceHandleEx((volatile signed __int32 *)v12);
  return (unsigned int)v7;
}
