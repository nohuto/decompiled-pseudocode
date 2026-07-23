/*
 * XREFs of CmpDoReDoCreateKey @ 0x1406118C0
 * Callers:
 *     CmpDoReDoRecord @ 0x1406119D8 (CmpDoReDoRecord.c)
 * Callees:
 *     ZwClose @ 0x14015A3D0 (ZwClose.c)
 *     ZwCreateKey @ 0x14015A590 (ZwCreateKey.c)
 *     CmpSplitParentKeyName @ 0x140606DD8 (CmpSplitParentKeyName.c)
 *     CmpDoReOpenTransKey @ 0x140611CD0 (CmpDoReOpenTransKey.c)
 */

__int64 __fastcall CmpDoReDoCreateKey(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  HANDLE v5; // rbx
  BOOL v6; // edx
  NTSTATUS v7; // edi
  __m128i v8; // [rsp+40h] [rbp-9h] BYREF
  __m128i v9; // [rsp+50h] [rbp+7h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+60h] [rbp+17h] BYREF
  ULONG Disposition; // [rsp+B8h] [rbp+6Fh] BYREF
  HANDLE Handle; // [rsp+C0h] [rbp+77h] BYREF
  HANDLE KeyHandle; // [rsp+C8h] [rbp+7Fh] BYREF

  CmpSplitParentKeyName((__m128i *)(a2 + 32), &v8, &v9);
  result = CmpDoReOpenTransKey(a1, &v8, 131078LL, &Handle);
  if ( (int)result >= 0 )
  {
    v5 = Handle;
    ObjectAttributes.Length = 48;
    ObjectAttributes.RootDirectory = Handle;
    ObjectAttributes.Attributes = 4928;
    v6 = *(_DWORD *)(a2 + 48) == 1;
    ObjectAttributes.SecurityQualityOfService = 0LL;
    ObjectAttributes.ObjectName = (PUNICODE_STRING)&v9;
    ObjectAttributes.SecurityDescriptor = *(PVOID *)(a2 + 56);
    v7 = ZwCreateKey(&KeyHandle, 0xF003Fu, &ObjectAttributes, 0, 0LL, v6 | 8, &Disposition);
    ZwClose(v5);
    if ( v7 >= 0 )
      ZwClose(KeyHandle);
    return (unsigned int)v7;
  }
  return result;
}
