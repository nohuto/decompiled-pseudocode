/*
 * XREFs of EtwpCapturePreviousRegistryData @ 0x1406A485C
 * Callers:
 *     EtwpRegTraceCallback @ 0x1406A49F4 (EtwpRegTraceCallback.c)
 * Callees:
 *     ZwClose @ 0x14015A3D0 (ZwClose.c)
 *     ZwQueryValueKey @ 0x14015A4D0 (ZwQueryValueKey.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 *     ObOpenObjectByPointer @ 0x14041F280 (ObOpenObjectByPointer.c)
 */

void __fastcall EtwpCapturePreviousRegistryData(__int64 a1)
{
  PVOID PoolWithTag; // rbx
  void *v3; // rcx
  ULONG Length; // eax
  NTSTATUS v5; // eax
  UNICODE_STRING ValueName; // [rsp+40h] [rbp-18h] BYREF
  SIZE_T NumberOfBytes; // [rsp+60h] [rbp+8h] BYREF
  HANDLE KeyHandle; // [rsp+68h] [rbp+10h] BYREF

  KeyHandle = 0LL;
  LODWORD(NumberOfBytes) = 0;
  PoolWithTag = 0LL;
  v3 = *(void **)a1;
  ValueName = *(UNICODE_STRING *)*(_QWORD *)(a1 + 8);
  if ( ObOpenObjectByPointer(v3, 0x200u, 0LL, 0x20019u, (POBJECT_TYPE)CmKeyObjectType, 0, &KeyHandle) >= 0 )
  {
    do
    {
      Length = NumberOfBytes;
      if ( (_DWORD)NumberOfBytes )
      {
        if ( PoolWithTag )
        {
          ExFreePoolWithTag(PoolWithTag, 0);
          Length = NumberOfBytes;
        }
        PoolWithTag = ExAllocatePoolWithTag(PagedPool, Length, 0x31777445u);
        if ( !PoolWithTag )
          goto LABEL_13;
        Length = NumberOfBytes;
      }
      v5 = ZwQueryValueKey(
             KeyHandle,
             &ValueName,
             KeyValuePartialInformation,
             PoolWithTag,
             Length,
             (PULONG)&NumberOfBytes);
    }
    while ( v5 == -2147483643 || v5 == -1073741789 );
    if ( v5 < 0 )
    {
      if ( PoolWithTag )
        ExFreePoolWithTag(PoolWithTag, 0);
    }
    else
    {
      *(_QWORD *)(a1 + 40) = PoolWithTag;
    }
  }
LABEL_13:
  if ( KeyHandle )
    ZwClose(KeyHandle);
}
