/*
 * XREFs of MmCreateMirror @ 0x1406A2C48
 * Callers:
 *     NtSetSystemInformation @ 0x140453DF8 (NtSetSystemInformation.c)
 *     VerifierMmCreateMirror @ 0x1407422F0 (VerifierMmCreateMirror.c)
 * Callees:
 *     ZwQueryLicenseValue @ 0x140181730 (ZwQueryLicenseValue.c)
 *     MmDuplicateMemory @ 0x1403F0578 (MmDuplicateMemory.c)
 *     SeSinglePrivilegeCheck @ 0x14046D4B8 (SeSinglePrivilegeCheck.c)
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
  if ( (dword_1403D00EC & 1) == 0 )
    return -1073741637;
  v3[0] = off_140321B90[0];
  v3[1] = off_140321B98[0];
  v3[2] = off_140321BA0[0];
  v3[3] = (unsigned __int64)off_140321BB0 & -(__int64)((dword_1403D00EC & 2) != 0);
  v4 = 2;
  return MmDuplicateMemory((__int64)v3);
}
