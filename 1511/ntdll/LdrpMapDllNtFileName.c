/*
 * XREFs of LdrpMapDllNtFileName @ 0x180007960
 * Callers:
 *     LdrpMapDllFullPath @ 0x18000946C (LdrpMapDllFullPath.c)
 *     LdrpMapDllSearchPath @ 0x18000A018 (LdrpMapDllSearchPath.c)
 * Callees:
 *     LdrpLogError @ 0x180003CE8 (LdrpLogError.c)
 *     LdrpMapDllWithSectionHandle @ 0x18000E5C0 (LdrpMapDllWithSectionHandle.c)
 *     LdrpLogDllState @ 0x180012678 (LdrpLogDllState.c)
 *     RtlEndStrongEnumerationHashTable @ 0x180081AE0 (RtlEndStrongEnumerationHashTable.c)
 *     NtClose @ 0x1800A52A0 (NtClose.c)
 *     NtOpenFile @ 0x1800A5720 (NtOpenFile.c)
 *     NtCreateSection @ 0x1800A5A00 (NtCreateSection.c)
 *     NtRaiseHardError @ 0x1800A7AB0 (NtRaiseHardError.c)
 *     LdrAppxHandleIntegrityFailure @ 0x1800C7AE0 (LdrAppxHandleIntegrityFailure.c)
 *     LdrpCheckComponentOnDemandEtwEvent @ 0x1800C9B14 (LdrpCheckComponentOnDemandEtwEvent.c)
 *     LdrpLogEtwEvent @ 0x1800CA054 (LdrpLogEtwEvent.c)
 */

__int64 __fastcall LdrpMapDllNtFileName(__int64 a1, UNICODE_STRING *a2)
{
  __int64 v4; // rcx
  __int64 v5; // r14
  int v6; // r8d
  int v7; // r9d
  ULONG v8; // eax
  int i; // edi
  NTSTATUS v10; // eax
  int v11; // ebx
  int v12; // eax
  int v13; // r8d
  int v14; // r9d
  _QWORD v16[2]; // [rsp+40h] [rbp-29h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+50h] [rbp-19h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+60h] [rbp-9h] BYREF
  char v19; // [rsp+D0h] [rbp+67h] BYREF
  HANDLE FileHandle; // [rsp+D8h] [rbp+6Fh] BYREF
  HANDLE Handle; // [rsp+E0h] [rbp+77h] BYREF

  v4 = *(_QWORD *)(a1 + 48);
  v5 = v4 + 72;
  LdrpLogDllState(*(_QWORD *)(v4 + 48), v4 + 72, 5285LL);
  ObjectAttributes.Length = 48;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.ObjectName = a2;
  v8 = 64;
  if ( !LdrpUseImpersonatedDeviceMap )
    v8 = 2112;
  ObjectAttributes.Attributes = v8;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  if ( MEMORY[0x7FFE0384] && (NtCurrentPeb()->TracingFlags & 4) != 0 && (MEMORY[0x7FFE0385] & 0x20) != 0 )
  {
    LOBYTE(v7) = -1;
    LOBYTE(v6) = -1;
    LdrpLogEtwEvent(5253, -1, v6, v7, 0LL);
  }
  for ( i = 0; ; i = 1 )
  {
    v10 = NtOpenFile(&FileHandle, 0x100021u, &ObjectAttributes, &IoStatusBlock, 5u, 0x60u);
    v11 = v10;
    if ( v10 >= 0 )
      break;
    if ( v10 == -1073741772 || v10 == -1073741766 )
    {
      v11 = -1073741515;
LABEL_16:
      if ( v11 < 0 )
        return (unsigned int)v11;
      break;
    }
    if ( v10 != -1073741790 )
      goto LABEL_16;
    if ( i || !(unsigned __int8)LdrpCheckComponentOnDemandEtwEvent(a1) )
      return (unsigned int)v11;
  }
  v12 = NtCreateSection(&Handle, 15LL, 0LL);
  v11 = v12;
  if ( v12 < 0 )
  {
    if ( (unsigned int)(v12 + 1073740674) <= 1 || v12 == -1073740702 )
    {
      v11 = LdrAppxHandleIntegrityFailure((unsigned int)v12);
    }
    else if ( v12 != -1073741801 && v12 != -1073741670 && v12 != -1073741523 )
    {
      v16[0] = v5;
      v16[1] = v12;
      if ( (int)NtRaiseHardError(3221225595LL, 2LL, 1LL, v16, 1, &v19) >= 0 && LdrInitState != 3 )
        ++LdrpFatalHardErrorCount;
    }
    LdrpLogError(v11, 133, 0, v5);
    goto LABEL_40;
  }
  if ( MEMORY[0x7FFE0384] && (NtCurrentPeb()->TracingFlags & 4) != 0 && (MEMORY[0x7FFE0385] & 0x20) != 0 )
  {
    LOBYTE(v14) = -1;
    LOBYTE(v13) = -1;
    LdrpLogEtwEvent(5254, -1, v13, v14, 0LL);
  }
  if ( !UseWOW64 && (*(_DWORD *)(a1 + 24) & 0x100) == 0 )
  {
    if ( !LdrpAdvapi32DllHandle )
    {
LABEL_38:
      v11 = LdrpMapDllWithSectionHandle(a1, Handle);
      goto LABEL_39;
    }
    v11 = ((__int64 (__fastcall *)(HANDLE, UNICODE_STRING *))(__ROR8__(
                                                                LdrpSaferIsDllAllowedRoutine,
                                                                64 - (MEMORY[0x7FFE0330] & 0x3Fu)) ^ MEMORY[0x7FFE0330]))(
            FileHandle,
            a2);
    if ( v11 == -1073741275 )
      v11 = 0;
  }
  if ( v11 >= 0 )
    goto LABEL_38;
LABEL_39:
  NtClose(Handle);
LABEL_40:
  NtClose(FileHandle);
  return (unsigned int)v11;
}
