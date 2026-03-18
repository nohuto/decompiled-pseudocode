/*
 * XREFs of NtQueryFullAttributesFile @ 0x140524CA0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     memset @ 0x140195A80 (memset.c)
 *     ObOpenObjectByName @ 0x1404902E0 (ObOpenObjectByName.c)
 *     ObCloseHandle @ 0x1404A4D60 (ObCloseHandle.c)
 *     FsRtlpCleanupEcps @ 0x14050AD28 (FsRtlpCleanupEcps.c)
 *     ExRaiseDatatypeMisalignment @ 0x1406F78A0 (ExRaiseDatatypeMisalignment.c)
 */

NTSTATUS __stdcall NtQueryFullAttributesFile(
        POBJECT_ATTRIBUTES ObjectAttributes,
        PFILE_NETWORK_OPEN_INFORMATION FileInformation)
{
  char PreviousMode; // di
  _BYTE *v5; // rcx
  struct _KTHREAD *CurrentThread; // rax
  NTSTATUS v7; // esi
  NTSTATUS result; // eax
  HANDLE Handle[2]; // [rsp+40h] [rbp-248h] BYREF
  _QWORD v10[24]; // [rsp+50h] [rbp-238h] BYREF
  _OWORD v11[4]; // [rsp+110h] [rbp-178h] BYREF
  char v12; // [rsp+150h] [rbp-138h] BYREF

  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode )
  {
    v5 = FileInformation;
    if ( ((unsigned __int8)FileInformation & 7) != 0 )
      ExRaiseDatatypeMisalignment();
    if ( (unsigned __int64)FileInformation >= MmUserProbeAddress )
      v5 = (_BYTE *)MmUserProbeAddress;
    *v5 = *v5;
    v5[55] = v5[55];
  }
  memset(v10, 0, 0xB8uLL);
  memset(v11, 0, 0x38uLL);
  LODWORD(v10[0]) = 12058632;
  HIWORD(v10[8]) = 7;
  LODWORD(v10[11]) = 1;
  LODWORD(v10[8]) = 2113536;
  BYTE1(v10[16]) = 1;
  BYTE3(v10[16]) = 1;
  v10[17] = &v12;
  v10[6] = ObjectAttributes;
  LODWORD(v10[18]) = 32;
  if ( PreviousMode )
    v10[13] = v11;
  else
    v10[13] = FileInformation;
  CurrentThread = KeGetCurrentThread();
  ++CurrentThread->OtherOperationCount;
  __incgsdword(0x2E64u);
  v7 = ObOpenObjectByName(
         (__int64)ObjectAttributes,
         (__int64)IoFileObjectType,
         PreviousMode,
         0LL,
         0x80u,
         (__int64)v10,
         Handle);
  if ( v10[20] && FsRtlpCleanupEcps((struct _ECP_LIST *)v10[20]) )
    v10[20] = 0LL;
  if ( LODWORD(v10[4]) == -1096154543 )
  {
    result = v10[2];
    if ( SLODWORD(v10[2]) >= 0 )
    {
      if ( PreviousMode )
      {
        *(_OWORD *)&FileInformation->CreationTime.LowPart = v11[0];
        *(_OWORD *)&FileInformation->LastWriteTime.LowPart = v11[1];
        *(_OWORD *)&FileInformation->AllocationSize.LowPart = v11[2];
        *(_QWORD *)&FileInformation->FileAttributes = *(_QWORD *)&v11[3];
      }
    }
  }
  else
  {
    if ( v7 >= 0 )
    {
      ObCloseHandle(Handle[0], PreviousMode);
      return -1073741788;
    }
    return v7;
  }
  return result;
}
