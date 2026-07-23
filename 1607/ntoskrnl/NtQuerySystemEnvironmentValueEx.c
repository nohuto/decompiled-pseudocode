/*
 * XREFs of NtQuerySystemEnvironmentValueEx @ 0x140548380
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     memmove @ 0x140171780 (memmove.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 *     SeSinglePrivilegeCheck @ 0x140412E30 (SeSinglePrivilegeCheck.c)
 *     ProbeForWrite @ 0x14044C990 (ProbeForWrite.c)
 *     ExGetFirmwareEnvironmentVariable @ 0x140581580 (ExGetFirmwareEnvironmentVariable.c)
 *     ExpGetFirmwareEnvironmentVariable @ 0x1406B0F7C (ExpGetFirmwareEnvironmentVariable.c)
 *     ExRaiseDatatypeMisalignment @ 0x1406B6190 (ExRaiseDatatypeMisalignment.c)
 */

NTSTATUS __stdcall NtQuerySystemEnvironmentValueEx(
        PUNICODE_STRING VariableName,
        LPGUID VendorGuid,
        PVOID Value,
        PULONG ReturnLength,
        PULONG Attributes)
{
  int v6; // r14d
  unsigned __int16 v9; // cx
  size_t v10; // rsi
  char *v11; // rcx
  __int64 v12; // rcx
  SIZE_T v13; // rdx
  __int64 v14; // rcx
  _WORD *PoolWithTag; // rax
  _WORD *v16; // rbx
  NTSTATUS FirmwareEnvironmentVariable; // esi
  ULONG v18; // [rsp+34h] [rbp-84h] BYREF
  ULONG v19; // [rsp+38h] [rbp-80h] BYREF
  PVOID P; // [rsp+40h] [rbp-78h]
  void *Src[2]; // [rsp+58h] [rbp-60h]
  GUID v22; // [rsp+68h] [rbp-50h] BYREF

  v6 = (int)Value;
  P = 0LL;
  if ( !KeGetCurrentThread()->PreviousMode )
    return ExGetFirmwareEnvironmentVariable(
             (_DWORD)VariableName,
             (_DWORD)VendorGuid,
             (_DWORD)Value,
             (_DWORD)ReturnLength,
             (__int64)Attributes);
  if ( dword_1402FD030 != 2 )
    return -1073741822;
  if ( ((unsigned __int8)VariableName & 3) != 0 )
    ExRaiseDatatypeMisalignment();
  *(UNICODE_STRING *)Src = *VariableName;
  v9 = _mm_cvtsi128_si32(*(__m128i *)Src);
  if ( !v9 )
    return -1073741819;
  if ( ((__int64)Src[1] & 1) != 0 )
    ExRaiseDatatypeMisalignment();
  v10 = v9;
  v11 = (char *)Src[1] + v9;
  if ( (unsigned __int64)v11 > 0x7FFFFFFF0000LL || v11 < Src[1] )
    MEMORY[0x7FFFFFFF0000] = 0;
  if ( ((unsigned __int8)VendorGuid & 3) != 0 )
    ExRaiseDatatypeMisalignment();
  v12 = (__int64)ReturnLength;
  if ( (unsigned __int64)ReturnLength >= 0x7FFFFFFF0000LL )
    v12 = 0x7FFFFFFF0000LL;
  *(_DWORD *)v12 = *(_DWORD *)v12;
  v13 = Value != 0LL ? *ReturnLength : 0;
  v18 = Value != 0LL ? *ReturnLength : 0;
  if ( v18 )
    ProbeForWrite(Value, v13, 1u);
  if ( Attributes )
  {
    v14 = (__int64)Attributes;
    if ( (unsigned __int64)Attributes >= 0x7FFFFFFF0000LL )
      v14 = 0x7FFFFFFF0000LL;
    *(_DWORD *)v14 = *(_DWORD *)v14;
  }
  if ( !SeSinglePrivilegeCheck(SeSystemEnvironmentPrivilege, 1) )
    return -1073741727;
  v22 = *VendorGuid;
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, v10 + 2, 0x72766E45u);
  v16 = PoolWithTag;
  P = PoolWithTag;
  if ( !PoolWithTag )
    return -1073741670;
  memmove(PoolWithTag, Src[1], v10);
  v16[v10 >> 1] = 0;
  FirmwareEnvironmentVariable = ExpGetFirmwareEnvironmentVariable(
                                  (_DWORD)v16,
                                  (unsigned int)&v22,
                                  v6,
                                  (unsigned int)&v18,
                                  (__int64)&v19,
                                  1);
  ExFreePoolWithTag(v16, 0);
  *ReturnLength = v18;
  if ( Attributes )
    *Attributes = v19;
  return FirmwareEnvironmentVariable;
}
