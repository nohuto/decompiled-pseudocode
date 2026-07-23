/*
 * XREFs of SmcCacheManagerStart @ 0x14069A060
 * Callers:
 *     SmcCacheCreatePrepare @ 0x140697448 (SmcCacheCreatePrepare.c)
 * Callees:
 *     ZwClose @ 0x14015A3D0 (ZwClose.c)
 *     ZwCreateKey @ 0x14015A590 (ZwCreateKey.c)
 *     SmKmKeyGenStart @ 0x140698898 (SmKmKeyGenStart.c)
 *     SmpUtilsGetControlDevice @ 0x14069B2B0 (SmpUtilsGetControlDevice.c)
 */

int __fastcall SmcCacheManagerStart(__int64 a1, __int64 a2)
{
  _DWORD *v2; // rbx
  unsigned int i; // edi
  int result; // eax
  __int64 v7; // rcx
  const wchar_t *v8; // rax
  const wchar_t *v9; // rcx
  __int64 v10; // rax
  struct _UNICODE_STRING v11; // [rsp+40h] [rbp-40h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+50h] [rbp-30h] BYREF
  HANDLE KeyHandle; // [rsp+C0h] [rbp+40h] BYREF

  v2 = &unk_1403BF0E0;
  for ( i = 0; i < 2; ++i )
  {
    if ( (*v2 & 1) == 0 )
    {
      if ( !i )
      {
        result = SmpUtilsGetControlDevice(a1, v2 + 2, v2 + 4);
        if ( result < 0 )
          return result;
      }
      *v2 |= 1u;
    }
    v2 += 6;
  }
  *(_DWORD *)&v11.Length = 0;
  v11.Buffer = 0LL;
  v7 = 0x7FFFLL;
  v8 = L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\Session Manager\\Memory Management\\StoreParameters";
  do
  {
    if ( !*v8 )
      break;
    ++v8;
    --v7;
  }
  while ( v7 );
  if ( v7 )
  {
    v11.Buffer = L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\Session Manager\\Memory Management\\StoreParameters";
    v11.Length = 2 * (0x7FFF - v7);
    v11.MaximumLength = v11.Length + 2;
  }
  ObjectAttributes.ObjectName = &v11;
  ObjectAttributes.Length = 48;
  ObjectAttributes.RootDirectory = 0LL;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  ObjectAttributes.Attributes = 576;
  result = ZwCreateKey(&KeyHandle, 0x20006u, &ObjectAttributes, 0, 0LL, 0, 0LL);
  if ( result >= 0 )
  {
    ZwClose(KeyHandle);
    *(_DWORD *)&v11.Length = 0;
    v9 = L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\Session Manager\\Memory Management\\StoreParameters\\CacheInfo";
    v11.Buffer = 0LL;
    v10 = 0x7FFFLL;
    do
    {
      if ( !*v9 )
        break;
      ++v9;
      --v10;
    }
    while ( v10 );
    if ( v10 )
    {
      v11.Buffer = L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\Session Manager\\Memory Management\\StorePar"
                    "ameters\\CacheInfo";
      v11.Length = 2 * (0x7FFF - v10);
      v11.MaximumLength = v11.Length + 2;
    }
    result = SmKmKeyGenStart(a1 + 512, &v11);
    if ( result >= 0 )
    {
      *(_QWORD *)(a1 + 552) = a2;
      return 0;
    }
  }
  return result;
}
