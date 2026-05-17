/*
 * XREFs of LdrpMapDllNtFileName @ 0x18002D3AC
 * Callers:
 *     LdrpMapDllFullPath @ 0x18000E3A0 (LdrpMapDllFullPath.c)
 *     LdrpMapDllSearchPath @ 0x18000E5C8 (LdrpMapDllSearchPath.c)
 * Callees:
 *     LdrpLogDllState @ 0x180015E20 (LdrpLogDllState.c)
 *     LdrpMapDllWithSectionHandle @ 0x18002F26C (LdrpMapDllWithSectionHandle.c)
 *     LdrpLogError @ 0x180086114 (LdrpLogError.c)
 *     NtClose @ 0x1800A6600 (NtClose.c)
 *     NtOpenFile @ 0x1800A6A80 (NtOpenFile.c)
 *     NtCreateSection @ 0x1800A6D60 (NtCreateSection.c)
 *     NtRaiseHardError @ 0x1800A8E90 (NtRaiseHardError.c)
 *     _guard_dispatch_icall_nop @ 0x1800A9C80 (_guard_dispatch_icall_nop.c)
 *     LdrAppxHandleIntegrityFailure @ 0x1800CEEC0 (LdrAppxHandleIntegrityFailure.c)
 *     LdrpCheckComponentOnDemandEtwEvent @ 0x1800D0F94 (LdrpCheckComponentOnDemandEtwEvent.c)
 *     LdrpLogEtwEvent @ 0x1800D1538 (LdrpLogEtwEvent.c)
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
  int v12; // ecx
  int v13; // eax
  int v14; // r8d
  int v15; // r9d
  _QWORD v17[2]; // [rsp+40h] [rbp-29h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+50h] [rbp-19h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+60h] [rbp-9h] BYREF
  char v20; // [rsp+D0h] [rbp+67h] BYREF
  HANDLE FileHandle; // [rsp+D8h] [rbp+6Fh] BYREF
  HANDLE Handle; // [rsp+E0h] [rbp+77h] BYREF

  v4 = *(_QWORD *)(a1 + 48);
  v5 = v4 + 72;
  LdrpLogDllState(*(_QWORD *)(v4 + 48), v4 + 72, 0x14A5u);
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
    LdrpLogEtwEvent(5253, -1, v6, v7, 0LL, 0LL);
  }
  for ( i = 0; ; i = 1 )
  {
    v10 = NtOpenFile(&FileHandle, 0x100021u, &ObjectAttributes, &IoStatusBlock, 5u, 0x60u);
    v11 = v10;
    if ( v10 >= 0 )
      goto LABEL_6;
    if ( v10 == -1073741772 || v10 == -1073741766 )
      break;
    if ( v10 != -1073741790 )
      goto LABEL_29;
    if ( i || !(unsigned __int8)LdrpCheckComponentOnDemandEtwEvent(a1) )
      return (unsigned int)v11;
  }
  v11 = -1073741515;
LABEL_29:
  if ( v11 >= 0 )
  {
LABEL_6:
    v12 = 0x1000000;
    if ( UseWOW64 )
      v12 = 17825792;
    v13 = NtCreateSection(&Handle, 15LL, 0LL, 0LL, 16, v12, FileHandle);
    v11 = v13;
    if ( v13 < 0 )
    {
      if ( v13 == -1073740702 || (unsigned int)(v13 + 1073740674) <= 1 )
      {
        v11 = LdrAppxHandleIntegrityFailure((unsigned int)v13);
      }
      else if ( v13 != -1073741801 && v13 != -1073741670 && v13 != -1073741523 )
      {
        v17[0] = v5;
        v17[1] = v13;
        if ( (int)NtRaiseHardError(3221225595LL, 2LL, 1LL, v17, 1, &v20) >= 0 && LdrInitState != 3 )
          ++LdrpFatalHardErrorCount;
      }
      LdrpLogError((unsigned int)v11, 5253LL, 0LL, v5);
      goto LABEL_15;
    }
    if ( MEMORY[0x7FFE0384] && (NtCurrentPeb()->TracingFlags & 4) != 0 && (MEMORY[0x7FFE0385] & 0x20) != 0 )
    {
      LOBYTE(v15) = -1;
      LOBYTE(v14) = -1;
      LdrpLogEtwEvent(5254, -1, v14, v15, 0LL, 0LL);
    }
    if ( !UseWOW64 && (*(_DWORD *)(a1 + 24) & 0x100) == 0 )
    {
      if ( !LdrpAdvapi32DllHandle )
      {
LABEL_13:
        v11 = LdrpMapDllWithSectionHandle(a1, Handle);
LABEL_14:
        NtClose(Handle);
LABEL_15:
        NtClose(FileHandle);
        return (unsigned int)v11;
      }
      v11 = ((__int64 (__fastcall *)(HANDLE, UNICODE_STRING *))(__ROR8__(
                                                                  LdrpSaferIsDllAllowedRoutine,
                                                                  64 - (MEMORY[0x7FFE0330] & 0x3Fu)) ^ MEMORY[0x7FFE0330]))(
              FileHandle,
              a2);
      if ( v11 == -1073741275 )
        v11 = 0;
    }
    if ( v11 < 0 )
      goto LABEL_14;
    goto LABEL_13;
  }
  return (unsigned int)v11;
}
