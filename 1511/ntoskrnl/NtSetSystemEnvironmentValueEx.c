/*
 * XREFs of NtSetSystemEnvironmentValueEx @ 0x140672C68
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     _wcsnicmp @ 0x140144480 (_wcsnicmp.c)
 *     memmove @ 0x140166980 (memmove.c)
 *     ExAllocatePoolWithTag @ 0x140238380 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 *     SeSinglePrivilegeCheck @ 0x140471360 (SeSinglePrivilegeCheck.c)
 *     ExSetFirmwareEnvironmentVariable @ 0x14066D1A8 (ExSetFirmwareEnvironmentVariable.c)
 *     ExpSetFirmwareEnvironmentVariable @ 0x14066F738 (ExpSetFirmwareEnvironmentVariable.c)
 *     ExRaiseDatatypeMisalignment @ 0x140673350 (ExRaiseDatatypeMisalignment.c)
 */

NTSTATUS __stdcall NtSetSystemEnvironmentValueEx(
        PUNICODE_STRING VariableName,
        LPGUID VendorGuid,
        PVOID Value,
        PULONG ReturnLength,
        PULONG Attributes)
{
  unsigned __int16 v8; // cx
  size_t v9; // rbx
  ULONG64 v10; // rdx
  unsigned int v11; // esi
  char *v12; // rcx
  _WORD *PoolWithTag; // rax
  _WORD *v14; // rdi
  __int64 v15; // rax
  NTSTATUS v16; // ebx
  void *Src[2]; // [rsp+50h] [rbp-58h]
  GUID v18; // [rsp+60h] [rbp-48h] BYREF

  if ( !KeGetCurrentThread()->PreviousMode )
    return ExSetFirmwareEnvironmentVariable(
             (__int64)VariableName,
             (int)VendorGuid,
             (__int64)Value,
             (int)ReturnLength,
             (int)Attributes);
  if ( dword_1402D6390 != 2 )
    return -1073741822;
  if ( ((unsigned __int8)VariableName & 3) != 0 )
    ExRaiseDatatypeMisalignment();
  *(UNICODE_STRING *)Src = *VariableName;
  v8 = _mm_cvtsi128_si32(*(__m128i *)VariableName);
  if ( !v8 )
    return -1073741819;
  if ( ((__int64)Src[1] & 1) != 0 )
    ExRaiseDatatypeMisalignment();
  v9 = v8;
  v10 = (ULONG64)Src[1] + v8;
  if ( v10 > MmUserProbeAddress || (void *)v10 < Src[1] )
    *(_BYTE *)MmUserProbeAddress = 0;
  if ( ((unsigned __int8)VendorGuid & 3) != 0 )
    ExRaiseDatatypeMisalignment();
  v11 = Value != 0LL ? (unsigned int)ReturnLength : 0;
  if ( v11 )
  {
    v12 = (char *)Value + v11;
    if ( (unsigned __int64)v12 > MmUserProbeAddress || v12 < Value )
      *(_BYTE *)MmUserProbeAddress = 0;
  }
  if ( !SeSinglePrivilegeCheck(SeSystemEnvironmentPrivilege, 1) )
    return -1073741727;
  v18 = *VendorGuid;
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, v9 + 2, 0x72766E45u);
  v14 = PoolWithTag;
  if ( !PoolWithTag )
    return -1073741670;
  memmove(PoolWithTag, Src[1], v9);
  v14[v9 >> 1] = 0;
  v15 = *(_QWORD *)&v18.Data1 - ExpSecureBootVendorGuid;
  if ( *(_QWORD *)&v18.Data1 == ExpSecureBootVendorGuid )
    v15 = *(_QWORD *)v18.Data4 - 0x4B788FE7F42860BDLL;
  if ( v15 || wcsnicmp(v14, L"Kernel_", 7uLL) )
  {
    v16 = ExpSetFirmwareEnvironmentVariable(
            (__int64)v14,
            (__int64)&v18,
            (unsigned __int64)Value,
            v11,
            (int)Attributes,
            1);
    ExFreePoolWithTag(v14, 0);
    return v16;
  }
  else
  {
    ExFreePoolWithTag(v14, 0);
    return -1073741790;
  }
}
