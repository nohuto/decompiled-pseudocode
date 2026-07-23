/*
 * XREFs of PspLocateSystemDll @ 0x140554BC0
 * Callers:
 *     PsLocateSystemDlls @ 0x140554B44 (PsLocateSystemDlls.c)
 * Callees:
 *     ZwOpenFile @ 0x14015A850 (ZwOpenFile.c)
 *     KeBugCheckEx @ 0x14015DA70 (KeBugCheckEx.c)
 *     ObReferenceObjectByHandle @ 0x14044FC10 (ObReferenceObjectByHandle.c)
 *     MmCreateSpecialImageSection @ 0x14045CE40 (MmCreateSpecialImageSection.c)
 *     PspMapSystemDll @ 0x14046ADA8 (PspMapSystemDll.c)
 *     MmGetSectionInformation @ 0x140470AD8 (MmGetSectionInformation.c)
 *     ObInitializeFastReference @ 0x14047137C (ObInitializeFastReference.c)
 *     ObCloseHandle @ 0x1404EF6CC (ObCloseHandle.c)
 */

NTSTATUS __fastcall PspLocateSystemDll(__int64 a1, char a2)
{
  NTSTATUS result; // eax
  NTSTATUS v5; // eax
  NTSTATUS v6; // eax
  int SectionInformation; // eax
  PVOID v8; // rdx
  int v9; // eax
  __int64 v10; // [rsp+30h] [rbp-50h] BYREF
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
    v5 = MmCreateSpecialImageSection(&Handle, (__int64)&ObjectAttributes, 0LL, 0xCu, (__int64)FileHandle, a2 | 2);
    if ( v5 < 0 )
      KeBugCheckEx(0x6Bu, v5, 3uLL, 0LL, 0LL);
    ObCloseHandle(FileHandle, 0);
    v6 = ObReferenceObjectByHandle(Handle, 0xF001Fu, MmSectionObjectType, 0, &Object, 0LL);
    if ( v6 < 0 )
      KeBugCheckEx(0x6Bu, v6, 4uLL, 0LL, 0LL);
    ObCloseHandle(Handle, 0);
    SectionInformation = MmGetSectionInformation((__int64)Object, 2, &v10);
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
