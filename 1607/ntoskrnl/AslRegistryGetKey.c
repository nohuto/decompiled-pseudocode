/*
 * XREFs of AslRegistryGetKey @ 0x140573500
 * Callers:
 *     SdbpQueryAppCompatFlagsByExeID @ 0x140573494 (SdbpQueryAppCompatFlagsByExeID.c)
 * Callees:
 *     ZwOpenKey @ 0x140159EC0 (ZwOpenKey.c)
 *     AslFree @ 0x14048538C (AslFree.c)
 *     AslRegistryBuildMachinePath @ 0x1405735D4 (AslRegistryBuildMachinePath.c)
 *     AslRegistryBuildUserPath @ 0x140573674 (AslRegistryBuildUserPath.c)
 *     AslLogCallPrintf @ 0x1406C5804 (AslLogCallPrintf.c)
 */

__int64 __fastcall AslRegistryGetKey(_QWORD *a1, __int64 a2, __int64 a3, int a4)
{
  NTSTATUS v5; // eax
  unsigned int v6; // ebx
  __int64 v7; // rcx
  const char *v9; // r9
  int v10; // r8d
  HANDLE v11; // rax
  NTSTATUS v12; // [rsp+28h] [rbp-48h]
  UNICODE_STRING Destination; // [rsp+30h] [rbp-40h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+40h] [rbp-30h] BYREF
  HANDLE KeyHandle; // [rsp+88h] [rbp+18h] BYREF

  *a1 = 0LL;
  KeyHandle = 0LL;
  *(_QWORD *)&Destination.Length = 0LL;
  Destination.Buffer = 0LL;
  if ( !a4 )
  {
    v5 = AslRegistryBuildUserPath(&Destination, L"\\Software\\Microsoft\\Windows NT\\CurrentVersion\\AppCompatFlags");
    v6 = v5;
    if ( v5 >= 0 )
      goto LABEL_3;
    v9 = "AslRegistryBuildUserPath failed for %ws [%x]";
    v10 = 1395;
LABEL_11:
    v12 = v5;
    AslLogCallPrintf(
      1,
      (unsigned int)"AslRegistryGetKey",
      v10,
      (_DWORD)v9,
      L"\\Software\\Microsoft\\Windows NT\\CurrentVersion\\AppCompatFlags",
      v12,
      *(_QWORD *)&Destination.Length);
    goto LABEL_5;
  }
  v5 = AslRegistryBuildMachinePath(&Destination, L"\\Software\\Microsoft\\Windows NT\\CurrentVersion\\AppCompatFlags");
  v6 = v5;
  if ( v5 < 0 )
  {
    v9 = "AslRegistryBuildMachinePath failed for %ws [%x]";
    v10 = 1388;
    goto LABEL_11;
  }
LABEL_3:
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.ObjectName = &Destination;
  ObjectAttributes.Length = 48;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v5 = ZwOpenKey(&KeyHandle, 0x80000100, &ObjectAttributes);
  v6 = v5;
  if ( v5 < 0 )
  {
    if ( v5 == -1073741772 )
      goto LABEL_5;
    v9 = "NtOpenKey failed for %ws [%x]";
    v10 = 1431;
    goto LABEL_11;
  }
  v11 = KeyHandle;
  v6 = 0;
  KeyHandle = 0LL;
  *a1 = v11;
LABEL_5:
  if ( Destination.Buffer )
    AslFree(v7, Destination.Buffer);
  return v6;
}
