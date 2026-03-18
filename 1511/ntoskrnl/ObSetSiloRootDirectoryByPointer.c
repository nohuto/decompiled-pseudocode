/*
 * XREFs of ObSetSiloRootDirectoryByPointer @ 0x140630B4C
 * Callers:
 *     PsSetSiloObjectRootDirectoryByPointer @ 0x14063FCE8 (PsSetSiloObjectRootDirectoryByPointer.c)
 * Callees:
 *     ObfDereferenceObject @ 0x140042920 (ObfDereferenceObject.c)
 *     RtlInitUnicodeString @ 0x140043C70 (RtlInitUnicodeString.c)
 *     ZwClose @ 0x140150800 (ZwClose.c)
 *     ZwOpenDirectoryObject @ 0x140151120 (ZwOpenDirectoryObject.c)
 *     memset @ 0x140166CC0 (memset.c)
 *     ExAllocatePoolWithTag @ 0x140238380 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 *     ObReferenceObjectByHandle @ 0x14040B9B0 (ObReferenceObjectByHandle.c)
 *     PsInsertSiloObjectByPointer @ 0x14063F8F0 (PsInsertSiloObjectByPointer.c)
 */

NTSTATUS __fastcall ObSetSiloRootDirectoryByPointer(__int64 a1, void *a2, KPROCESSOR_MODE a3)
{
  NTSTATUS result; // eax
  int inserted; // ebx
  NTSTATUS v7; // edi
  _DWORD *PoolWithTag; // rax
  _DWORD *v9; // rbx
  volatile signed __int64 *v10; // rcx
  PVOID v11; // [rsp+30h] [rbp-50h] BYREF
  PVOID Object; // [rsp+38h] [rbp-48h] BYREF
  UNICODE_STRING DestinationString; // [rsp+40h] [rbp-40h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+50h] [rbp-30h] BYREF
  HANDLE DirectoryHandle; // [rsp+A8h] [rbp+28h] BYREF

  result = ObReferenceObjectByHandle(a2, 2u, ObpDirectoryObjectType, a3, &Object, 0LL);
  if ( result >= 0 )
  {
    inserted = PsInsertSiloObjectByPointer(a1, &ObpDirectoryObjectType, Object);
    if ( inserted < 0 )
    {
      ObfDereferenceObject(Object);
      return inserted;
    }
    RtlInitUnicodeString(&DestinationString, L"Global??");
    ObjectAttributes.Length = 48;
    ObjectAttributes.ObjectName = &DestinationString;
    ObjectAttributes.RootDirectory = a2;
    ObjectAttributes.Attributes = 576;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    result = ZwOpenDirectoryObject(&DirectoryHandle, 0xF000Fu, &ObjectAttributes);
    if ( result >= 0 )
    {
      v7 = ObReferenceObjectByHandle(DirectoryHandle, 2u, ObpDirectoryObjectType, 0, &v11, 0LL);
      if ( v7 >= 0 )
      {
        PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x40uLL, 0x6D44624Fu);
        v9 = PoolWithTag;
        if ( !PoolWithTag )
        {
          ZwClose(DirectoryHandle);
          ObfDereferenceObject(v11);
          return -1073741670;
        }
        memset(PoolWithTag, 0, 0x40uLL);
        v10 = (volatile signed __int64 *)v11;
        *(_QWORD *)v9 = v11;
        v9[6] = 1;
        if ( _InterlockedCompareExchange64(v10 + 38, (signed __int64)v9, 0LL) )
        {
          ExFreePoolWithTag(v9, 0);
          ObfDereferenceObject(v11);
        }
      }
      ZwClose(DirectoryHandle);
      return v7;
    }
  }
  return result;
}
