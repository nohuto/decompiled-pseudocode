/*
 * XREFs of RtlpQueryPackageIdentityAttributes @ 0x18005E244
 * Callers:
 *     RtlQueryPackageClaims @ 0x18005E0C0 (RtlQueryPackageClaims.c)
 * Callees:
 *     ZwQuerySecurityAttributesToken @ 0x1800A8CF0 (ZwQuerySecurityAttributesToken.c)
 */

NTSTATUS __fastcall RtlpQueryPackageIdentityAttributes(
        HANDLE TokenHandle,
        ULONG a2,
        __int64 a3,
        _QWORD *a4,
        _QWORD *a5)
{
  _QWORD *v5; // rbx
  char v9; // si
  ULONG v10; // ebp
  NTSTATUS result; // eax
  __int64 v12; // rax
  ULONG ReturnLength; // [rsp+58h] [rbp+10h] BYREF

  ReturnLength = a2;
  v5 = a5;
  if ( a5 )
    *a5 = 0LL;
  v9 = 1;
  v10 = 1;
  if ( a4 || v5 )
    v10 = 2;
  result = ZwQuerySecurityAttributesToken(
             TokenHandle,
             (PUNICODE_STRING)&Attributes,
             v10,
             (PVOID)a3,
             0x330u,
             &ReturnLength);
  if ( result < 0 )
  {
    if ( v10 == 1 )
      return result;
    if ( result != -1073741275 )
      return result;
    result = ZwQuerySecurityAttributesToken(
               TokenHandle,
               (PUNICODE_STRING)&Attributes,
               1u,
               (PVOID)a3,
               0x330u,
               &ReturnLength);
    if ( result < 0 )
      return result;
    v9 = 0;
  }
  if ( !*(_DWORD *)(a3 + 4) )
    return -1073741275;
  if ( a4 )
  {
    if ( v9 )
      v12 = **(_QWORD **)(*(_QWORD *)(a3 + 8) + 72LL);
    else
      v12 = 0LL;
    *a4 = v12;
  }
  if ( v5 )
  {
    *v5 |= 1uLL;
    *v5 |= v9 != 0 ? 2 : 0;
    if ( ZwQuerySecurityAttributesToken(TokenHandle, (PUNICODE_STRING)&stru_180108448, 1u, 0LL, 0, &ReturnLength) == -1073741789 )
      *v5 |= 4uLL;
  }
  return 0;
}
