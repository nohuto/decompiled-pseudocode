/*
 * XREFs of MmCreateMirror @ 0x140623954
 * Callers:
 *     NtSetSystemInformation @ 0x1404D4654 (NtSetSystemInformation.c)
 *     VerifierMmCreateMirror @ 0x1406C0AB0 (VerifierMmCreateMirror.c)
 * Callees:
 *     ZwQueryLicenseValue @ 0x140152DC0 (ZwQueryLicenseValue.c)
 *     MmDuplicateMemory @ 0x14039E1A0 (MmDuplicateMemory.c)
 *     SeSinglePrivilegeCheck @ 0x140471360 (SeSinglePrivilegeCheck.c)
 */

NTSTATUS MmCreateMirror(void)
{
  KPROCESSOR_MODE PreviousMode; // dl
  UNICODE_STRING ValueName; // [rsp+30h] [rbp-40h] BYREF
  _QWORD v3[4]; // [rsp+40h] [rbp-30h] BYREF
  int v4; // [rsp+60h] [rbp-10h]
  int Data; // [rsp+80h] [rbp+10h] BYREF
  ULONG ResultDataSize; // [rsp+88h] [rbp+18h] BYREF
  ULONG Type; // [rsp+90h] [rbp+20h] BYREF

  Data = 0;
  ValueName.Buffer = L"Kernel-MemoryMirroringSupported";
  *(_DWORD *)&ValueName.Length = 4194366;
  ResultDataSize = 4;
  if ( ZwQueryLicenseValue(&ValueName, &Type, &Data, 4u, &ResultDataSize) < 0 || Data != 1 )
    return -1073741206;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode && !SeSinglePrivilegeCheck(SeShutdownPrivilege, PreviousMode) )
    return -1073741727;
  if ( (dword_1403810FC & 1) == 0 )
    return -1073741637;
  v3[0] = off_1402D2A40[0];
  v3[1] = off_1402D2A48[0];
  v3[2] = off_1402D2A50[0];
  v3[3] = (unsigned __int64)off_1402D2A60 & -(__int64)((dword_1403810FC & 2) != 0);
  v4 = 2;
  return MmDuplicateMemory((__int64)v3);
}
