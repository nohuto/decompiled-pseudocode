/*
 * XREFs of NtQuerySystemEnvironmentValueEx @ 0x14058417C
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     memmove @ 0x140195740 (memmove.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 *     SeSinglePrivilegeCheck @ 0x14046D4B8 (SeSinglePrivilegeCheck.c)
 *     ProbeForWrite @ 0x1404BE3C0 (ProbeForWrite.c)
 *     ExGetFirmwareEnvironmentVariable @ 0x1405C2A9C (ExGetFirmwareEnvironmentVariable.c)
 *     ExpGetFirmwareEnvironmentVariable @ 0x1406F1A38 (ExpGetFirmwareEnvironmentVariable.c)
 *     ExRaiseDatatypeMisalignment @ 0x1406F78A0 (ExRaiseDatatypeMisalignment.c)
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
  char *v11; // rdx
  _DWORD *v12; // rcx
  SIZE_T v13; // rdx
  _DWORD *v14; // rcx
  _WORD *PoolWithTag; // rax
  _WORD *v16; // rdi
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
  if ( dword_1403254D0 != 2 )
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
  if ( (unsigned __int64)v11 > MmUserProbeAddress || v11 < Src[1] )
    *(_BYTE *)MmUserProbeAddress = 0;
  if ( ((unsigned __int8)VendorGuid & 3) != 0 )
    ExRaiseDatatypeMisalignment();
  v12 = ReturnLength;
  if ( (unsigned __int64)ReturnLength >= MmUserProbeAddress )
    v12 = (_DWORD *)MmUserProbeAddress;
  *v12 = *v12;
  v13 = Value != 0LL ? *ReturnLength : 0;
  v18 = Value != 0LL ? *ReturnLength : 0;
  if ( v18 )
    ProbeForWrite(Value, v13, 1u);
  if ( Attributes )
  {
    v14 = Attributes;
    if ( (unsigned __int64)Attributes >= MmUserProbeAddress )
      v14 = (_DWORD *)MmUserProbeAddress;
    *v14 = *v14;
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
