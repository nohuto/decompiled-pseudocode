/*
 * XREFs of AcpiGetFullyQualifiedBiosName @ 0x1C009B700
 * Callers:
 *     <none>
 * Callees:
 *     AMLIDereferenceHandleEx @ 0x1C0013578 (AMLIDereferenceHandleEx.c)
 *     AMLIGetNameSpaceObject @ 0x1C0014844 (AMLIGetNameSpaceObject.c)
 *     ACPIAmliBuildObjectPathname @ 0x1C001E22C (ACPIAmliBuildObjectPathname.c)
 *     OSConvertDeviceHandleToNSHANDLE @ 0x1C001FBE8 (OSConvertDeviceHandleToNSHANDLE.c)
 *     ACPIInitUnicodeString @ 0x1C0087E38 (ACPIInitUnicodeString.c)
 */

__int64 __fastcall AcpiGetFullyQualifiedBiosName(ULONG_PTR a1, __int64 a2, struct _UNICODE_STRING *a3, _DWORD *a4)
{
  __int64 v7; // rdx
  int v8; // ebx
  unsigned __int16 Length; // cx
  UNICODE_STRING SourceString; // [rsp+20h] [rbp-10h] BYREF
  PVOID P; // [rsp+68h] [rbp+38h] BYREF
  __int64 *v13; // [rsp+78h] [rbp+48h]

  v13 = 0LL;
  *(_QWORD *)&SourceString.Length = 0LL;
  SourceString.Buffer = 0LL;
  P = 0LL;
  *a4 = 0;
  OSConvertDeviceHandleToNSHANDLE(a1);
  v8 = AMLIGetNameSpaceObject(*(_BYTE **)(a2 + 8));
  if ( v8 >= 0 )
  {
    v8 = ACPIAmliBuildObjectPathname(v13, &P, 1);
    if ( v8 >= 0 )
    {
      v8 = ACPIInitUnicodeString(&SourceString, (const char *)P);
      if ( v8 >= 0 )
      {
        Length = SourceString.Length;
        *a4 = SourceString.Length + 2;
        if ( Length <= a3->MaximumLength )
        {
          RtlCopyUnicodeString(a3, &SourceString);
          v8 = 0;
          v7 = (unsigned __int16)((a3->MaximumLength >> 1) - 1);
          a3->Buffer[v7] = 0;
        }
        else
        {
          v8 = -1073741789;
        }
      }
    }
    if ( P )
      ExFreePoolWithTag(P, 0);
  }
  if ( SourceString.Buffer )
    ExFreePoolWithTag(SourceString.Buffer, 0x53706341u);
  if ( v13 )
    AMLIDereferenceHandleEx((volatile signed __int32 *)v13, v7);
  return (unsigned int)v8;
}
