/*
 * XREFs of FastGetProfileStringW @ 0x1C001F400
 * Callers:
 *     FastGetProfileIntW @ 0x1C006C920 (FastGetProfileIntW.c)
 *     FastGetProfileStringFromIDW @ 0x1C006C9D0 (FastGetProfileStringFromIDW.c)
 *     InitCreateUserSubsystem @ 0x1C013C1B8 (InitCreateUserSubsystem.c)
 * Callees:
 *     Win32FreePool @ 0x1C0020110 (Win32FreePool.c)
 *     OpenCacheKeyEx @ 0x1C0020130 (OpenCacheKeyEx.c)
 *     Win32AllocPoolWithQuota @ 0x1C00211D0 (Win32AllocPoolWithQuota.c)
 *     ?RtlStringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x1C0071664 (-RtlStringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 */

__int64 __fastcall FastGetProfileStringW(
        __int64 a1,
        __int64 a2,
        const WCHAR *a3,
        const unsigned __int16 *a4,
        unsigned __int16 *a5,
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
          *a5 = 0;
        }
        else
        {
          *(_WORD *)(v12 + 2LL * (v16 - 1) + 12) = 0;
          RtlStringCchCopyW(a5, a6, (const unsigned __int16 *)(v12 + 12));
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
  while ( a5[v15] );
  return (unsigned int)(v15 + 1);
}
