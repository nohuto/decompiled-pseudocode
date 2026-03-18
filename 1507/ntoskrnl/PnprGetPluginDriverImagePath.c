/*
 * XREFs of PnprGetPluginDriverImagePath @ 0x14068FE44
 * Callers:
 *     PnprLoadPluginDriver @ 0x1406904E8 (PnprLoadPluginDriver.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140047FE0 (RtlInitUnicodeString.c)
 *     wcscpy_s @ 0x140177D84 (wcscpy_s.c)
 *     wcsncat_s @ 0x140177E08 (wcsncat_s.c)
 *     ZwClose @ 0x14017F1D0 (ZwClose.c)
 *     ZwOpenKey @ 0x14017F230 (ZwOpenKey.c)
 *     ZwQueryValueKey @ 0x14017F2D0 (ZwQueryValueKey.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 *     _PnpCtxGetCachedContextBaseKey @ 0x14043D1B0 (_PnpCtxGetCachedContextBaseKey.c)
 */

__int64 __fastcall PnprGetPluginDriverImagePath(PUNICODE_STRING DestinationString)
{
  wchar_t *PoolWithTag; // rdi
  int CachedContextBaseKey; // ebx
  NTSTATUS v4; // eax
  __int64 v5; // rax
  rsize_t v6; // r14
  wchar_t *v7; // rax
  wchar_t *v8; // rsi
  UNICODE_STRING ValueName; // [rsp+30h] [rbp-50h] BYREF
  UNICODE_STRING DestinationStringa; // [rsp+40h] [rbp-40h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+50h] [rbp-30h] BYREF
  ULONG ResultLength; // [rsp+B8h] [rbp+38h] BYREF
  HANDLE KeyHandle; // [rsp+C0h] [rbp+40h] BYREF
  void *v15; // [rsp+C8h] [rbp+48h] BYREF

  KeyHandle = 0LL;
  PoolWithTag = 0LL;
  CachedContextBaseKey = PnpCtxGetCachedContextBaseKey(*(_QWORD **)&PiPnpRtlCtx, 4, &v15);
  if ( CachedContextBaseKey >= 0 )
  {
    RtlInitUnicodeString(&DestinationStringa, L"Control\\Pnp");
    ObjectAttributes.RootDirectory = v15;
    ObjectAttributes.Length = 48;
    ObjectAttributes.ObjectName = &DestinationStringa;
    ObjectAttributes.Attributes = 576;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    CachedContextBaseKey = ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes);
    if ( CachedContextBaseKey >= 0 )
    {
      RtlInitUnicodeString(&ValueName, L"ReplaceDriver");
      v4 = ZwQueryValueKey(KeyHandle, &ValueName, KeyValuePartialInformation, 0LL, 0, &ResultLength);
      CachedContextBaseKey = v4;
      if ( v4 == -2147483643 || v4 == -1073741789 )
      {
        PoolWithTag = (wchar_t *)ExAllocatePoolWithTag(PagedPool, ResultLength, 0x51706E50u);
        if ( PoolWithTag )
        {
          CachedContextBaseKey = ZwQueryValueKey(
                                   KeyHandle,
                                   &ValueName,
                                   KeyValuePartialInformation,
                                   PoolWithTag,
                                   ResultLength,
                                   &ResultLength);
          if ( CachedContextBaseKey >= 0 )
          {
            if ( (unsigned int)(*((_DWORD *)PoolWithTag + 1) - 1) > 1
              || (v5 = *((unsigned int *)PoolWithTag + 2), (v5 & 1) != 0) )
            {
              CachedContextBaseKey = -1073741811;
            }
            else
            {
              v6 = (unsigned int)((unsigned __int64)(v5 + 26) >> 1);
              v7 = (wchar_t *)ExAllocatePoolWithTag(PagedPool, 2 * v6, 0x51706E50u);
              v8 = v7;
              if ( DestinationString )
              {
                wcscpy_s(v7, v6, L"\\systemroot\\");
                wcsncat_s(v8, v6, PoolWithTag + 6, (unsigned __int64)*((unsigned int *)PoolWithTag + 2) >> 1);
                RtlInitUnicodeString(DestinationString, v8);
              }
              else
              {
                CachedContextBaseKey = -1073741670;
                if ( v7 )
                  ExFreePoolWithTag(v7, 0x51706E50u);
              }
            }
          }
        }
        else
        {
          CachedContextBaseKey = -1073741670;
        }
      }
      else if ( v4 >= 0 )
      {
        CachedContextBaseKey = -1073741823;
      }
    }
  }
  if ( KeyHandle )
    ZwClose(KeyHandle);
  if ( PoolWithTag )
    ExFreePoolWithTag(PoolWithTag, 0x51706E50u);
  return (unsigned int)CachedContextBaseKey;
}
