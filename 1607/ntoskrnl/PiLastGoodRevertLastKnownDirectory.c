/*
 * XREFs of PiLastGoodRevertLastKnownDirectory @ 0x1407CEF34
 * Callers:
 *     PpLastGoodDoBootProcessing @ 0x1407B901C (PpLastGoodDoBootProcessing.c)
 * Callees:
 *     RtlAppendUnicodeToString @ 0x1400C17B0 (RtlAppendUnicodeToString.c)
 *     RtlAppendUnicodeStringToString @ 0x14010B80C (RtlAppendUnicodeStringToString.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     ZwClose @ 0x14015A3D0 (ZwClose.c)
 *     ZwOpenKey @ 0x14015A430 (ZwOpenKey.c)
 *     ZwEnumerateValueKey @ 0x14015A450 (ZwEnumerateValueKey.c)
 *     ZwDeleteFile @ 0x14015BAD0 (ZwDeleteFile.c)
 *     ZwDeleteKey @ 0x14015BAF0 (ZwDeleteKey.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 *     IopFileUtilClearAttributes @ 0x14064C06C (IopFileUtilClearAttributes.c)
 *     IopFileUtilWalkDirectoryTreeTopDown @ 0x1407CF920 (IopFileUtilWalkDirectoryTreeTopDown.c)
 */

void __fastcall PiLastGoodRevertLastKnownDirectory(__int64 a1, UNICODE_STRING *a2)
{
  __int64 v4; // rdx
  _WORD *PoolWithTag; // rbx
  __int64 v6; // r8
  int v7; // edi
  ULONG i; // edx
  unsigned int v9; // eax
  _WORD *v10; // rcx
  __int64 v11; // rdx
  ULONG ResultLength; // [rsp+30h] [rbp-D0h] BYREF
  HANDLE KeyHandle; // [rsp+38h] [rbp-C8h] BYREF
  UNICODE_STRING Destination; // [rsp+40h] [rbp-C0h] BYREF
  UNICODE_STRING Source; // [rsp+50h] [rbp-B0h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+60h] [rbp-A0h] BYREF
  OBJECT_ATTRIBUTES v17; // [rsp+90h] [rbp-70h] BYREF
  _BYTE v18[544]; // [rsp+C0h] [rbp-40h] BYREF

  memset(v18, 0, 0x218uLL);
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x21CuLL, 0x674C7050u);
  if ( PoolWithTag )
  {
    IopFileUtilWalkDirectoryTreeTopDown(a1, v4, v6, a1);
    ObjectAttributes.Length = 48;
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.Attributes = 576;
    ObjectAttributes.ObjectName = a2;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    if ( ZwOpenKey(&KeyHandle, 0xF003Fu, &ObjectAttributes) >= 0 )
    {
      v7 = 1;
      for ( i = 0;
            ZwEnumerateValueKey(KeyHandle, i, KeyValueFullInformation, PoolWithTag, 0x21Cu, &ResultLength) >= 0;
            i = v7++ )
      {
        if ( ResultLength
          && *((_DWORD *)PoolWithTag + 1) == 4
          && *((_DWORD *)PoolWithTag + 3) == 4
          && (unsigned __int8)*(_DWORD *)((char *)PoolWithTag + *((unsigned int *)PoolWithTag + 2)) == 1 )
        {
          *(_DWORD *)&Destination.Length = 35127296;
          Destination.Buffer = (wchar_t *)v18;
          Source.Buffer = PoolWithTag + 10;
          Source.Length = PoolWithTag[8];
          Source.MaximumLength = Source.Length;
          RtlAppendUnicodeToString(&Destination, L"\\SystemRoot\\");
          RtlAppendUnicodeStringToString(&Destination, &Source);
          v9 = Destination.Length >> 1;
          if ( v9 > 0xD )
          {
            v10 = &v18[26];
            v11 = v9 - 13;
            do
            {
              if ( *v10 == 47 )
                *v10 = 92;
              ++v10;
              --v11;
            }
            while ( v11 );
          }
          IopFileUtilClearAttributes(&Destination);
          v17.Length = 48;
          v17.ObjectName = &Destination;
          v17.RootDirectory = 0LL;
          *(_OWORD *)&v17.SecurityDescriptor = 0LL;
          v17.Attributes = 576;
          ZwDeleteFile(&v17);
        }
      }
      ZwDeleteKey(KeyHandle);
      ZwClose(KeyHandle);
    }
    ExFreePoolWithTag(PoolWithTag, 0x674C7050u);
  }
}
