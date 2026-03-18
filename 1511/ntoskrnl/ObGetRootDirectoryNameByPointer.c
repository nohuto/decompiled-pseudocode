/*
 * XREFs of ObGetRootDirectoryNameByPointer @ 0x140630A1C
 * Callers:
 *     NtQueryInformationJobObject @ 0x1403E9B88 (NtQueryInformationJobObject.c)
 *     PspConvertSiloToServerSilo @ 0x14063FFCC (PspConvertSiloToServerSilo.c)
 * Callees:
 *     ObfDereferenceObject @ 0x140042920 (ObfDereferenceObject.c)
 *     RtlCopyUnicodeString @ 0x140043CB0 (RtlCopyUnicodeString.c)
 *     ExAllocatePoolWithTag @ 0x140238380 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 *     ObQueryNameStringMode @ 0x14041FE90 (ObQueryNameStringMode.c)
 *     PsGetSiloObjectByPointer @ 0x14063F7B8 (PsGetSiloObjectByPointer.c)
 */

__int64 __fastcall ObGetRootDirectoryNameByPointer(__int64 a1, UNICODE_STRING *a2)
{
  int SiloObjectByPointer; // ebx
  UNICODE_STRING *PoolWithTag; // rax
  UNICODE_STRING *v6; // rsi
  wchar_t *v7; // rax
  unsigned int v8; // [rsp+58h] [rbp+10h] BYREF
  unsigned int v9; // [rsp+60h] [rbp+18h] BYREF
  PVOID Object; // [rsp+68h] [rbp+20h] BYREF

  if ( !a2 )
    return 3221225712LL;
  SiloObjectByPointer = PsGetSiloObjectByPointer(a1, &ObpDirectoryObjectType, &Object);
  if ( SiloObjectByPointer >= 0 )
  {
    SiloObjectByPointer = ObQueryNameStringMode((char *)Object, 0LL, 0, &v8, 0);
    if ( SiloObjectByPointer != -1073741820 )
    {
LABEL_15:
      ObfDereferenceObject(Object);
      return (unsigned int)SiloObjectByPointer;
    }
    v8 += 16;
    PoolWithTag = (UNICODE_STRING *)ExAllocatePoolWithTag(PagedPool, v8, 0x6D4E624Fu);
    v6 = PoolWithTag;
    if ( !PoolWithTag )
    {
      SiloObjectByPointer = -1073741670;
      goto LABEL_15;
    }
    SiloObjectByPointer = ObQueryNameStringMode((char *)Object, (__int64)PoolWithTag, v8, &v9, 0);
    if ( SiloObjectByPointer >= 0 )
    {
      if ( a2->Buffer )
      {
        if ( a2->MaximumLength < v6->MaximumLength )
        {
          SiloObjectByPointer = -1073741789;
          goto LABEL_13;
        }
      }
      else
      {
        v9 += a2->Length;
        v7 = (wchar_t *)ExAllocatePoolWithTag(PagedPool, v9, 0x6D4E624Fu);
        a2->Buffer = v7;
        if ( !v7 )
          goto LABEL_13;
        a2->MaximumLength = v9;
        a2->Length = 0;
      }
      RtlCopyUnicodeString(a2, v6);
    }
LABEL_13:
    ExFreePoolWithTag(v6, 0);
    goto LABEL_15;
  }
  return (unsigned int)SiloObjectByPointer;
}
