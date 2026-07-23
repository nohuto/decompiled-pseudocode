/*
 * XREFs of RtlpQueryPackageIdentityAttributes @ 0x180064A9C
 * Callers:
 *     RtlQueryPackageClaims @ 0x180064930 (RtlQueryPackageClaims.c)
 * Callees:
 *     ZwQuerySecurityAttributesToken @ 0x180094D10 (ZwQuerySecurityAttributesToken.c)
 */

NTSTATUS __fastcall RtlpQueryPackageIdentityAttributes(HANDLE TokenHandle, ULONG a2, __int64 a3, _QWORD *a4)
{
  char v4; // bl
  ULONG v7; // ebp
  NTSTATUS result; // eax
  __int64 v10; // rax
  ULONG ReturnLength; // [rsp+58h] [rbp+10h] BYREF

  ReturnLength = a2;
  v4 = 1;
  v7 = 1;
  if ( a4 )
    v7 = 2;
  result = ZwQuerySecurityAttributesToken(
             TokenHandle,
             (PUNICODE_STRING)&Attributes,
             v7,
             (PVOID)a3,
             0x2A0u,
             &ReturnLength);
  if ( result < 0 )
  {
    if ( result != -1073741275 )
      return result;
    if ( v7 == 1 )
      return result;
    result = ZwQuerySecurityAttributesToken(
               TokenHandle,
               (PUNICODE_STRING)&Attributes,
               1u,
               (PVOID)a3,
               0x2A0u,
               &ReturnLength);
    if ( result < 0 )
      return result;
    v4 = 0;
  }
  if ( !*(_DWORD *)(a3 + 4) )
    return -1073741275;
  if ( a4 )
  {
    if ( v4 )
      v10 = **(_QWORD **)(*(_QWORD *)(a3 + 8) + 72LL);
    else
      v10 = 0LL;
    *a4 = v10;
  }
  return 0;
}
