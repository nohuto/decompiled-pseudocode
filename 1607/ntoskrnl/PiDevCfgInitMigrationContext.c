/*
 * XREFs of PiDevCfgInitMigrationContext @ 0x1406396C4
 * Callers:
 *     PiDevCfgMigrateDevice @ 0x14063A918 (PiDevCfgMigrateDevice.c)
 * Callees:
 *     ZwOpenKey @ 0x14015A430 (ZwOpenKey.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     _PnpCtxGetCachedContextBaseKey @ 0x1404E0C54 (_PnpCtxGetCachedContextBaseKey.c)
 *     PiDevCfgFreeMigrationContext @ 0x140638F50 (PiDevCfgFreeMigrationContext.c)
 */

__int64 __fastcall PiDevCfgInitMigrationContext(UNICODE_STRING *a1, void *a2, void **a3)
{
  int CachedContextBaseKey; // ebx
  NTSTATUS v7; // eax
  void *v8; // rax
  NTSTATUS v9; // eax
  void **v10; // rsi
  void *v11; // rax
  NTSTATUS v12; // eax
  void *v13; // rax
  int v15; // [rsp+20h] [rbp-40h] BYREF
  const wchar_t *v16; // [rsp+28h] [rbp-38h]
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+30h] [rbp-30h] BYREF
  void *v18; // [rsp+80h] [rbp+20h] BYREF

  v18 = 0LL;
  memset(a3, 0, 0x38uLL);
  a3[5] = a1;
  a3[6] = a2;
  CachedContextBaseKey = PnpCtxGetCachedContextBaseKey(*(__int64 **)&PiPnpRtlCtx, 4, (__int64 *)&v18);
  if ( CachedContextBaseKey < 0 )
    goto LABEL_16;
  *a3 = 0LL;
  v16 = L"Control\\DeviceMigration";
  ObjectAttributes.RootDirectory = v18;
  v15 = 3145774;
  ObjectAttributes.ObjectName = (PUNICODE_STRING)&v15;
  ObjectAttributes.Length = 48;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v7 = ZwOpenKey(a3, 0x20019u, &ObjectAttributes);
  CachedContextBaseKey = v7;
  if ( v7 == -1073741772 )
    return 0;
  if ( v7 < 0 )
    goto LABEL_16;
  v15 = 1048590;
  v16 = L"Devices";
  v8 = *a3;
  a3[1] = 0LL;
  ObjectAttributes.RootDirectory = v8;
  ObjectAttributes.Length = 48;
  ObjectAttributes.ObjectName = (PUNICODE_STRING)&v15;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v9 = ZwOpenKey(a3 + 1, 0x20019u, &ObjectAttributes);
  CachedContextBaseKey = v9;
  if ( v9 == -1073741772 )
  {
    a3[1] = 0LL;
  }
  else if ( v9 < 0 )
  {
    goto LABEL_16;
  }
  v15 = 1048590;
  v16 = L"Classes";
  v10 = a3 + 2;
  v11 = *a3;
  a3[2] = 0LL;
  ObjectAttributes.RootDirectory = v11;
  ObjectAttributes.Length = 48;
  ObjectAttributes.ObjectName = (PUNICODE_STRING)&v15;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v12 = ZwOpenKey(a3 + 2, 0x20019u, &ObjectAttributes);
  CachedContextBaseKey = v12;
  if ( v12 != -1073741772 )
  {
    if ( v12 >= 0 )
      goto LABEL_11;
LABEL_16:
    PiDevCfgFreeMigrationContext((__int64)a3);
    return (unsigned int)CachedContextBaseKey;
  }
  CachedContextBaseKey = 0;
  *v10 = 0LL;
LABEL_11:
  v13 = *v10;
  if ( *v10 )
  {
    if ( a1 )
    {
      ObjectAttributes.Length = 48;
      a3[3] = 0LL;
      ObjectAttributes.RootDirectory = v13;
      ObjectAttributes.Attributes = 576;
      ObjectAttributes.ObjectName = a1;
      *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
      CachedContextBaseKey = ZwOpenKey(a3 + 3, 0x20019u, &ObjectAttributes);
      if ( CachedContextBaseKey == -1073741772 )
      {
        CachedContextBaseKey = 0;
        a3[3] = 0LL;
      }
    }
  }
  if ( CachedContextBaseKey < 0 )
    goto LABEL_16;
  return (unsigned int)CachedContextBaseKey;
}
