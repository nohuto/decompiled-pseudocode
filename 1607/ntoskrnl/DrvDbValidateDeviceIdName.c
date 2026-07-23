/*
 * XREFs of DrvDbValidateDeviceIdName @ 0x1406E35E0
 * Callers:
 *     DrvDbDispatchDeviceId @ 0x1404B8C04 (DrvDbDispatchDeviceId.c)
 * Callees:
 *     RtlUnalignedStringCchLengthW @ 0x1400C1760 (RtlUnalignedStringCchLengthW.c)
 *     wcschr @ 0x14014F504 (wcschr.c)
 */

__int64 __fastcall DrvDbValidateDeviceIdName(__int64 a1, const wchar_t *a2)
{
  NTSTATUS v3; // ebx
  wchar_t *v4; // rax
  size_t pcchLength; // [rsp+30h] [rbp+8h] BYREF

  v3 = RtlUnalignedStringCchLengthW(a2, 0xC8uLL, &pcchLength);
  if ( v3 < 0 || (v4 = wcschr(a2, 0x5Cu)) != 0LL && (v4 == a2 || !v4[1] || wcschr(v4 + 1, 0x5Cu)) )
    return (unsigned int)-1073741773;
  return (unsigned int)v3;
}
