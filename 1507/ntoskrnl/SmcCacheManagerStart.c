/*
 * XREFs of SmcCacheManagerStart @ 0x1406DB050
 * Callers:
 *     SmcCacheCreatePrepare @ 0x1406DA4B0 (SmcCacheCreatePrepare.c)
 * Callees:
 *     ZwClose @ 0x14017F1D0 (ZwClose.c)
 *     ZwCreateKey @ 0x14017F390 (ZwCreateKey.c)
 *     SmpUtilsGetControlDevice @ 0x1406DC5F4 (SmpUtilsGetControlDevice.c)
 *     SmKmKeyGenStart @ 0x1406DD3E0 (SmKmKeyGenStart.c)
 */

NTSTATUS __fastcall SmcCacheManagerStart(__int64 a1, __int64 a2)
{
  _DWORD *v2; // rbx
  unsigned int i; // edi
  NTSTATUS result; // eax
  __int64 v7; // rcx
  const wchar_t *v8; // rax
  const wchar_t *v9; // rcx
  __int64 v10; // rax
  int v11; // [rsp+40h] [rbp-40h] BYREF
  const wchar_t *v12; // [rsp+48h] [rbp-38h]
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+50h] [rbp-30h] BYREF
  HANDLE KeyHandle; // [rsp+C0h] [rbp+40h] BYREF

  v2 = &unk_140352CD0;
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
  v11 = 0;
  v12 = 0LL;
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
    v12 = L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\Session Manager\\Memory Management\\StoreParameters";
    LOWORD(v11) = 2 * (0x7FFF - v7);
    HIWORD(v11) = v11 + 2;
  }
  ObjectAttributes.ObjectName = (PUNICODE_STRING)&v11;
  ObjectAttributes.Length = 48;
  ObjectAttributes.RootDirectory = 0LL;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  ObjectAttributes.Attributes = 576;
  result = ZwCreateKey(&KeyHandle, 0x20006u, &ObjectAttributes, 0, 0LL, 0, 0LL);
  if ( result >= 0 )
  {
    ZwClose(KeyHandle);
    v11 = 0;
    v9 = L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\Session Manager\\Memory Management\\StoreParameters\\CacheInfo";
    v12 = 0LL;
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
      v12 = L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\Session Manager\\Memory Management\\StoreParameters\\CacheInfo";
      LOWORD(v11) = 2 * (0x7FFF - v10);
      HIWORD(v11) = v11 + 2;
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
