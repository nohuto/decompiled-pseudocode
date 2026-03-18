/*
 * XREFs of FastGetProfileStringW @ 0x1C00317C0
 * Callers:
 *     FastGetProfileIntW @ 0x1C007CDE0 (FastGetProfileIntW.c)
 *     FastGetProfileStringFromIDW @ 0x1C007E110 (FastGetProfileStringFromIDW.c)
 *     InitCreateUserSubsystem @ 0x1C013939C (InitCreateUserSubsystem.c)
 * Callees:
 *     ?RtlStringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x1C000F670 (-RtlStringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     OpenCacheKeyEx @ 0x1C0032120 (OpenCacheKeyEx.c)
 *     Win32AllocPoolWithQuota @ 0x1C0032870 (Win32AllocPoolWithQuota.c)
 *     Win32FreePool @ 0x1C0033BB0 (Win32FreePool.c)
 */

__int64 __fastcall FastGetProfileStringW(
        __int64 a1,
        __int64 a2,
        const WCHAR *a3,
        char *a4,
        char *a5,
        unsigned int a6,
        int a7)
{
  unsigned int v9; // r15d
  void *v11; // rdi
  __int64 v12; // rbx
  NTSTATUS v13; // eax
  __int64 v15; // rax
  unsigned int v16; // esi
  int v17; // [rsp+30h] [rbp-48h] BYREF
  ULONG Length; // [rsp+34h] [rbp-44h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+38h] [rbp-40h] BYREF

  v17 = a7 | gdwPolicyFlags;
  v9 = a2;
  v11 = (void *)OpenCacheKeyEx(a1, a2, 131097LL, &v17);
  if ( v11 )
  {
    while ( 1 )
    {
      Length = 2 * a6 + 12;
      v12 = Win32AllocPoolWithQuota(Length, 1919972181LL);
      if ( !v12 )
        break;
      RtlInitUnicodeString(&DestinationString, a3);
      v13 = ZwQueryValueKey(v11, &DestinationString, KeyValuePartialInformation, (PVOID)v12, Length, &Length);
      if ( v13 == -2147483643 )
        v13 = 0;
      if ( v13 >= 0 )
      {
        v16 = a6;
        if ( *(_DWORD *)(v12 + 8) >> 1 < a6 )
          v16 = *(_DWORD *)(v12 + 8) >> 1;
        if ( *(_DWORD *)(v12 + 8) < 2u )
        {
          *(_WORD *)a5 = 0;
        }
        else
        {
          *(_WORD *)(v12 + 2LL * (v16 - 1) + 12) = 0;
          RtlStringCchCopyW(a5, a6, (char *)(v12 + 12));
        }
        Win32FreePool(v12);
        ZwClose(v11);
        return v16;
      }
      if ( !v17 )
      {
        Win32FreePool(v12);
        break;
      }
      Win32FreePool(v12);
      ZwClose(v11);
      v11 = (void *)OpenCacheKeyEx(a1, v9, 131097LL, &v17);
      if ( !v11 )
        goto LABEL_16;
    }
  }
  else
  {
LABEL_16:
    if ( (a7 & 0x10) != 0 )
      return 0LL;
  }
  if ( v11 )
    ZwClose(v11);
  if ( !a4 || (int)RtlStringCchCopyW(a5, a6, a4) < 0 )
    return 0LL;
  v15 = -1LL;
  do
    ++v15;
  while ( *(_WORD *)&a5[2 * v15] );
  return (unsigned int)(v15 + 1);
}
