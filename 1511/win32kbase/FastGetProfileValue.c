/*
 * XREFs of FastGetProfileValue @ 0x1C006C300
 * Callers:
 *     <none>
 * Callees:
 *     Win32FreePool @ 0x1C0020110 (Win32FreePool.c)
 *     OpenCacheKeyEx @ 0x1C0020130 (OpenCacheKeyEx.c)
 *     Win32AllocPoolWithQuota @ 0x1C00211D0 (Win32AllocPoolWithQuota.c)
 *     RtlLoadStringOrError @ 0x1C006CA70 (RtlLoadStringOrError.c)
 *     __security_check_cookie @ 0x1C0088A80 (__security_check_cookie.c)
 *     memmove @ 0x1C0088D80 (memmove.c)
 */

__int64 __fastcall FastGetProfileValue(
        const UNICODE_STRING *a1,
        unsigned int a2,
        const WCHAR *a3,
        const void *a4,
        void *a5,
        unsigned int Size,
        int a7)
{
  const WCHAR *v8; // r14
  void *i; // rax
  void *v12; // rsi
  ULONG *v13; // rbx
  NTSTATUS v14; // eax
  ULONG Length; // [rsp+30h] [rbp-91h] BYREF
  int v17; // [rsp+34h] [rbp-8Dh] BYREF
  unsigned int v18; // [rsp+38h] [rbp-89h]
  struct _UNICODE_STRING DestinationString; // [rsp+40h] [rbp-81h] BYREF
  char v20; // [rsp+50h] [rbp-71h] BYREF
  _WORD v21[40]; // [rsp+60h] [rbp-61h] BYREF

  v8 = a3;
  v17 = a7 | gdwPolicyFlags;
  v18 = a2;
  if ( ((unsigned __int64)a3 & 0xFFFFFFFFFFFF0000uLL) == 0 )
  {
    v21[0] = 0;
    RtlLoadStringOrError((unsigned __int16)a3, v21);
    v8 = v21;
  }
  for ( i = OpenCacheKeyEx(a1, a2, 0x20019u, &v17); ; i = OpenCacheKeyEx(a1, v18, 0x20019u, &v17) )
  {
    v12 = i;
    if ( !i )
    {
      if ( (a7 & 0x10) == 0 )
      {
LABEL_12:
        if ( v12 )
          ZwClose(v12);
        if ( a4 )
        {
          memmove(a5, a4, Size);
          return Size;
        }
      }
      return 0LL;
    }
    if ( Size )
    {
      Length = Size + 12;
      v13 = (ULONG *)Win32AllocPoolWithQuota();
      if ( !v13 )
        goto LABEL_12;
    }
    else
    {
      Length = 16;
      v13 = (ULONG *)&v20;
    }
    RtlInitUnicodeString(&DestinationString, v8);
    v14 = ZwQueryValueKey(v12, &DestinationString, KeyValuePartialInformation, v13, Length, &Length);
    if ( v14 >= 0 )
      break;
    if ( v14 == -2147483643 && !Size )
    {
      ZwClose(v12);
      return v13[2];
    }
    if ( !v17 )
    {
      if ( Size )
        Win32FreePool();
      goto LABEL_12;
    }
    if ( Size )
      Win32FreePool();
    ZwClose(v12);
  }
  Length = v13[2];
  memmove(a5, v13 + 3, Length);
  if ( Size )
    Win32FreePool();
  ZwClose(v12);
  return Length;
}
