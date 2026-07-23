/*
 * XREFs of LdrpMapDllNtFileName @ 0x18003F1F8
 * Callers:
 *     LdrpMapDllSearchPath @ 0x180042A04 (LdrpMapDllSearchPath.c)
 *     LdrpMapDllFullPath @ 0x180042CB4 (LdrpMapDllFullPath.c)
 * Callees:
 *     LdrpLogDllState @ 0x180021298 (LdrpLogDllState.c)
 *     LdrpMapDllWithSectionHandle @ 0x180040678 (LdrpMapDllWithSectionHandle.c)
 *     RtlEndStrongEnumerationHashTable @ 0x180075B10 (RtlEndStrongEnumerationHashTable.c)
 *     LdrpLogError @ 0x180075B80 (LdrpLogError.c)
 *     NtClose @ 0x1800939F0 (NtClose.c)
 *     NtOpenFile @ 0x180093C30 (NtOpenFile.c)
 *     NtCreateSection @ 0x180093DA0 (NtCreateSection.c)
 *     NtRaiseHardError @ 0x180094DD0 (NtRaiseHardError.c)
 *     LdrAppxHandleIntegrityFailure @ 0x1800BADC0 (LdrAppxHandleIntegrityFailure.c)
 *     LdrpCheckComponentOnDemandEtwEvent @ 0x1800BCDF4 (LdrpCheckComponentOnDemandEtwEvent.c)
 *     LdrpLogEtwEvent @ 0x1800BD334 (LdrpLogEtwEvent.c)
 */

__int64 __fastcall LdrpMapDllNtFileName(__int64 a1, _UNICODE_STRING *a2)
{
  __int64 v4; // rcx
  unsigned __int64 v5; // r14
  int v6; // r8d
  int v7; // r9d
  ULONG v8; // eax
  int i; // edi
  NTSTATUS v10; // eax
  int v11; // ebx
  ULONG v12; // ecx
  NTSTATUS v13; // eax
  int v14; // r8d
  int v15; // r9d
  unsigned __int64 Parameters[2]; // [rsp+40h] [rbp-29h] BYREF
  _IO_STATUS_BLOCK IoStatusBlock; // [rsp+50h] [rbp-19h] BYREF
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+60h] [rbp-9h] BYREF
  ULONG Response; // [rsp+D0h] [rbp+67h] BYREF
  HANDLE FileHandle; // [rsp+D8h] [rbp+6Fh] BYREF
  HANDLE SectionHandle; // [rsp+E0h] [rbp+77h] BYREF

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
    LdrpLogEtwEvent(5253, -1, v6, v7, 0LL);
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
    v13 = NtCreateSection(&SectionHandle, 0xFu, 0LL, 0LL, 0x10u, v12, FileHandle);
    v11 = v13;
    if ( v13 < 0 )
    {
      if ( v13 == -1073740702 || (unsigned int)(v13 + 1073740674) <= 1 )
      {
        v11 = LdrAppxHandleIntegrityFailure((unsigned int)v13);
      }
      else if ( v13 != -1073741801 && v13 != -1073741670 && v13 != -1073741523 )
      {
        Parameters[0] = v5;
        Parameters[1] = v13;
        if ( NtRaiseHardError(-1073741701, 2u, 1u, Parameters, 1u, &Response) >= 0 && LdrInitState != 3 )
          ++LdrpFatalHardErrorCount;
      }
      LdrpLogError((unsigned int)v11, 5253LL, 0LL, v5);
      goto LABEL_15;
    }
    if ( MEMORY[0x7FFE0384] && (NtCurrentPeb()->TracingFlags & 4) != 0 && (MEMORY[0x7FFE0385] & 0x20) != 0 )
    {
      LOBYTE(v15) = -1;
      LOBYTE(v14) = -1;
      LdrpLogEtwEvent(5254, -1, v14, v15, 0LL);
    }
    if ( !UseWOW64 && (*(_DWORD *)(a1 + 24) & 0x100) == 0 )
    {
      if ( !LdrpAdvapi32DllHandle )
      {
LABEL_13:
        v11 = LdrpMapDllWithSectionHandle(a1, SectionHandle);
LABEL_14:
        NtClose(SectionHandle);
LABEL_15:
        NtClose(FileHandle);
        return (unsigned int)v11;
      }
      v11 = ((__int64 (__fastcall *)(HANDLE, _UNICODE_STRING *))(__ROR8__(
                                                                   LdrpSaferIsDllAllowedRoutine,
                                                                   64 - ((unsigned __int8)MEMORY[0x7FFE0330] & 0x3Fu)) ^ (unsigned int)MEMORY[0x7FFE0330]))(
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
