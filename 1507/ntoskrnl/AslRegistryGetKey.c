/*
 * XREFs of AslRegistryGetKey @ 0x1405C518C
 * Callers:
 *     SdbpQueryAppCompatFlagsByExeID @ 0x1405C5120 (SdbpQueryAppCompatFlagsByExeID.c)
 * Callees:
 *     ZwOpenKey @ 0x14017F230 (ZwOpenKey.c)
 *     AslFree @ 0x1405783C4 (AslFree.c)
 *     AslLogCallPrintf @ 0x1405AB1C4 (AslLogCallPrintf.c)
 *     AslRegistryBuildMachinePath @ 0x1405C5260 (AslRegistryBuildMachinePath.c)
 *     AslRegistryBuildUserPath @ 0x1405C5300 (AslRegistryBuildUserPath.c)
 */

__int64 __fastcall AslRegistryGetKey(_QWORD *a1, __int64 a2, __int64 a3, int a4)
{
  int v5; // ebx
  NTSTATUS v6; // eax
  __int64 v7; // rcx
  HANDLE v9; // rax
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
    if ( v5 >= 0 )
      goto LABEL_3;
LABEL_9:
    AslLogCallPrintf(1LL);
    goto LABEL_5;
  }
  v5 = AslRegistryBuildMachinePath(&Destination, L"\\Software\\Microsoft\\Windows NT\\CurrentVersion\\AppCompatFlags");
  if ( v5 < 0 )
    goto LABEL_9;
LABEL_3:
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.ObjectName = &Destination;
  ObjectAttributes.Length = 48;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v6 = ZwOpenKey(&KeyHandle, 0x80000100, &ObjectAttributes);
  v5 = v6;
  if ( v6 < 0 )
  {
    if ( v6 == -1073741772 )
      goto LABEL_5;
    goto LABEL_9;
  }
  v9 = KeyHandle;
  v5 = 0;
  KeyHandle = 0LL;
  *a1 = v9;
LABEL_5:
  if ( Destination.Buffer )
    AslFree(v7, Destination.Buffer);
  return (unsigned int)v5;
}
