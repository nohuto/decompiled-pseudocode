/*
 * XREFs of FastGetProfileStringW @ 0x1C00559C0
 * Callers:
 *     FastGetProfileStringFromIDW @ 0x1C0055870 (FastGetProfileStringFromIDW.c)
 *     FastGetProfileIntW @ 0x1C0055910 (FastGetProfileIntW.c)
 *     InitCreateUserSubsystem @ 0x1C0155588 (InitCreateUserSubsystem.c)
 * Callees:
 *     Win32FreePool @ 0x1C0036A50 (Win32FreePool.c)
 *     Win32AllocPoolWithQuota @ 0x1C003AA10 (Win32AllocPoolWithQuota.c)
 *     OpenCacheKeyEx @ 0x1C0055BA0 (OpenCacheKeyEx.c)
 *     ?RtlStringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x1C0055E90 (-RtlStringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 */

__int64 __fastcall FastGetProfileStringW(
        PCUNICODE_STRING Source,
        __int64 a2,
        const WCHAR *a3,
        const unsigned __int16 *a4,
        unsigned __int16 *a5,
        unsigned __int64 a6,
        int a7)
{
  void *v10; // rdi
  __int64 v11; // rbx
  NTSTATUS v12; // eax
  unsigned int v14; // esi
  __int64 v15; // rax
  int v16; // [rsp+30h] [rbp-48h]
  ULONG Length; // [rsp+34h] [rbp-44h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+38h] [rbp-40h] BYREF

  v16 = a7 | gdwPolicyFlags;
  v10 = (void *)OpenCacheKeyEx(Source);
  if ( v10 )
  {
    while ( 1 )
    {
      Length = 2 * a6 + 12;
      v11 = Win32AllocPoolWithQuota();
      if ( !v11 )
        break;
      RtlInitUnicodeString(&DestinationString, a3);
      v12 = ZwQueryValueKey(v10, &DestinationString, KeyValuePartialInformation, (PVOID)v11, Length, &Length);
      if ( v12 == -2147483643 )
        v12 = 0;
      if ( v12 >= 0 )
      {
        v14 = a6;
        if ( *(_DWORD *)(v11 + 8) >> 1 < (unsigned int)a6 )
          v14 = *(_DWORD *)(v11 + 8) >> 1;
        if ( *(_DWORD *)(v11 + 8) < 2u )
        {
          *a5 = 0;
        }
        else
        {
          *(_WORD *)(v11 + 2LL * (v14 - 1) + 12) = 0;
          RtlStringCchCopyW(a5, (unsigned int)a6, (const unsigned __int16 *)(v11 + 12));
        }
        Win32FreePool();
        ZwClose(v10);
        return v14;
      }
      if ( !v16 )
      {
        Win32FreePool();
        break;
      }
      Win32FreePool();
      ZwClose(v10);
      v10 = (void *)OpenCacheKeyEx(Source);
      if ( !v10 )
        goto LABEL_12;
    }
  }
  else
  {
LABEL_12:
    if ( (a7 & 0x10) != 0 )
      return 0LL;
  }
  if ( v10 )
    ZwClose(v10);
  if ( !a4 || RtlStringCchCopyW(a5, (unsigned int)a6, a4) < 0 )
    return 0LL;
  v15 = -1LL;
  do
    ++v15;
  while ( a5[v15] );
  return (unsigned int)(v15 + 1);
}
