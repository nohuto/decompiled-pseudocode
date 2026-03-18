/*
 * XREFs of FastGetProfileValue @ 0x1C0055250
 * Callers:
 *     <none>
 * Callees:
 *     Win32FreePool @ 0x1C0036A50 (Win32FreePool.c)
 *     Win32AllocPoolWithQuota @ 0x1C003AA10 (Win32AllocPoolWithQuota.c)
 *     OpenCacheKeyEx @ 0x1C0055BA0 (OpenCacheKeyEx.c)
 *     RtlLoadStringOrError @ 0x1C0055EE0 (RtlLoadStringOrError.c)
 *     __security_check_cookie @ 0x1C0089A80 (__security_check_cookie.c)
 *     memmove @ 0x1C0089D40 (memmove.c)
 */

__int64 __fastcall FastGetProfileValue(
        PCUNICODE_STRING Source,
        int a2,
        const WCHAR *a3,
        const void *a4,
        void *a5,
        size_t Size,
        int a7)
{
  const WCHAR *v8; // r14
  __int64 i; // rax
  void *v11; // rsi
  ULONG *v12; // rbx
  NTSTATUS v13; // eax
  ULONG Length; // [rsp+30h] [rbp-91h] BYREF
  int v16; // [rsp+34h] [rbp-8Dh]
  int v17; // [rsp+38h] [rbp-89h]
  struct _UNICODE_STRING DestinationString; // [rsp+40h] [rbp-81h] BYREF
  char v19; // [rsp+50h] [rbp-71h] BYREF
  _WORD v20[40]; // [rsp+60h] [rbp-61h] BYREF

  v8 = a3;
  v16 = a7 | gdwPolicyFlags;
  v17 = a2;
  if ( ((unsigned __int64)a3 & 0xFFFFFFFFFFFF0000uLL) == 0 )
  {
    v20[0] = 0;
    RtlLoadStringOrError((unsigned __int16)a3, v20);
    v8 = v20;
  }
  for ( i = OpenCacheKeyEx(Source); ; i = OpenCacheKeyEx(Source) )
  {
    v11 = (void *)i;
    if ( !i )
    {
      if ( (a7 & 0x10) == 0 )
      {
LABEL_12:
        if ( v11 )
          ZwClose(v11);
        if ( a4 )
        {
          memmove(a5, a4, (unsigned int)Size);
          return (unsigned int)Size;
        }
      }
      return 0LL;
    }
    if ( (_DWORD)Size )
    {
      Length = Size + 12;
      v12 = (ULONG *)Win32AllocPoolWithQuota();
      if ( !v12 )
        goto LABEL_12;
    }
    else
    {
      Length = 16;
      v12 = (ULONG *)&v19;
    }
    RtlInitUnicodeString(&DestinationString, v8);
    v13 = ZwQueryValueKey(v11, &DestinationString, KeyValuePartialInformation, v12, Length, &Length);
    if ( v13 >= 0 )
      break;
    if ( v13 == -2147483643 && !(_DWORD)Size )
    {
      ZwClose(v11);
      return v12[2];
    }
    if ( !v16 )
    {
      if ( (_DWORD)Size )
        Win32FreePool();
      goto LABEL_12;
    }
    if ( (_DWORD)Size )
      Win32FreePool();
    ZwClose(v11);
  }
  Length = v12[2];
  memmove(a5, v12 + 3, Length);
  if ( (_DWORD)Size )
    Win32FreePool();
  ZwClose(v11);
  return Length;
}
