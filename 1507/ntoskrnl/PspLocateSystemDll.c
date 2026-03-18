/*
 * XREFs of PspLocateSystemDll @ 0x1405B57F8
 * Callers:
 *     PsLocateSystemDlls @ 0x1405B5788 (PsLocateSystemDlls.c)
 * Callees:
 *     ZwOpenFile @ 0x14017F650 (ZwOpenFile.c)
 *     KeBugCheckEx @ 0x140182750 (KeBugCheckEx.c)
 *     PspMapSystemDll @ 0x140466740 (PspMapSystemDll.c)
 *     ObInitializeFastReference @ 0x14046A3B8 (ObInitializeFastReference.c)
 *     ObReferenceObjectByHandle @ 0x140496770 (ObReferenceObjectByHandle.c)
 *     ObCloseHandle @ 0x1404A4D60 (ObCloseHandle.c)
 *     MmCreateSpecialImageSection @ 0x140508F84 (MmCreateSpecialImageSection.c)
 *     MmGetSectionInformation @ 0x140510EFC (MmGetSectionInformation.c)
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
    v5 = MmCreateSpecialImageSection(&Handle, (__int64)&ObjectAttributes, 12, (__int64)FileHandle, a2 | 2);
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
    v9 = PspMapSystemDll(KeGetCurrentThread()->ApcState.Process, (_QWORD *)a1, 0, 1);
    if ( v9 < 0 )
      KeBugCheckEx(0x6Bu, v9, 5uLL, 0LL, 0LL);
    return 0;
  }
  return result;
}
