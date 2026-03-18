/*
 * XREFs of PspLocateSystemDll @ 0x14053F9A8
 * Callers:
 *     PsLocateSystemDlls @ 0x14053F938 (PsLocateSystemDlls.c)
 * Callees:
 *     ZwOpenFile @ 0x140150C80 (ZwOpenFile.c)
 *     KeBugCheckEx @ 0x140153DC0 (KeBugCheckEx.c)
 *     ObCloseHandle @ 0x1403F6F34 (ObCloseHandle.c)
 *     ObReferenceObjectByHandle @ 0x14040B9B0 (ObReferenceObjectByHandle.c)
 *     MmGetSectionInformation @ 0x14044F1E4 (MmGetSectionInformation.c)
 *     ObInitializeFastReference @ 0x14044F95C (ObInitializeFastReference.c)
 *     MmCreateSpecialImageSection @ 0x14044FAE0 (MmCreateSpecialImageSection.c)
 *     PspMapSystemDll @ 0x1404643E4 (PspMapSystemDll.c)
 */

NTSTATUS __fastcall PspLocateSystemDll(__int64 a1, char a2)
{
  NTSTATUS result; // eax
  ULONG_PTR v5; // rbx
  ULONG_PTR v6; // rbx
  int SectionInformation; // eax
  PVOID v8; // rdx
  int v9; // eax
  __int64 v10; // [rsp+30h] [rbp-50h]
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+38h] [rbp-48h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+48h] [rbp-38h] BYREF
  HANDLE FileHandle; // [rsp+A0h] [rbp+20h] BYREF
  HANDLE Handle; // [rsp+B0h] [rbp+30h] BYREF
  PVOID Object; // [rsp+B8h] [rbp+38h] BYREF

  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.ObjectName = (PUNICODE_STRING)(a1 + 24);
  ObjectAttributes.Length = 48;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  result = ZwOpenFile(&FileHandle, 0x100020u, &ObjectAttributes, &IoStatusBlock, 1u, 0);
  if ( result >= 0 )
  {
    ObjectAttributes.ObjectName = 0LL;
    v5 = MmCreateSpecialImageSection(&Handle, (int)&ObjectAttributes, 12, FileHandle, a2 | 2);
    ObCloseHandle(FileHandle, 0);
    if ( (v5 & 0x80000000) != 0LL )
      KeBugCheckEx(0x6Bu, v5, 3uLL, 0LL, 0LL);
    v6 = ObReferenceObjectByHandle(Handle, 0xF001Fu, MmSectionObjectType, 0, &Object, 0LL);
    ObCloseHandle(Handle, 0);
    if ( (v6 & 0x80000000) != 0LL )
      KeBugCheckEx(0x6Bu, v6, 4uLL, 0LL, 0LL);
    SectionInformation = MmGetSectionInformation((__int64)Object, 2);
    if ( SectionInformation < 0 )
      KeBugCheckEx(0x6Bu, SectionInformation, 8uLL, 0LL, 0LL);
    v8 = Object;
    *(_QWORD *)(a1 + 64) = v10;
    ObInitializeFastReference((_QWORD *)a1, (__int64)v8);
    *(_QWORD *)(a1 + 8) = 0LL;
    v9 = PspMapSystemDll(KeGetCurrentThread()->ApcState.Process, (signed __int64 *)a1, 0, 1);
    if ( v9 < 0 )
      KeBugCheckEx(0x6Bu, v9, 5uLL, 0LL, 0LL);
    return 0;
  }
  return result;
}
