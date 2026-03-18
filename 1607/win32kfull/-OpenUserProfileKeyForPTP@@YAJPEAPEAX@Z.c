/*
 * XREFs of ?OpenUserProfileKeyForPTP@@YAJPEAPEAX@Z @ 0x1C01322DC
 * Callers:
 *     ?OpenDeviceCfgKey@@YAJKPEAGKPEAPEAXH@Z @ 0x1C006ACEC (-OpenDeviceCfgKey@@YAJKPEAGKPEAPEAXH@Z.c)
 * Callees:
 *     ?RtlUnicodeStringCopy@@YAJPEAU_UNICODE_STRING@@PEBU1@@Z @ 0x1C006AAE8 (-RtlUnicodeStringCopy@@YAJPEAU_UNICODE_STRING@@PEBU1@@Z.c)
 *     ?RtlUnicodeStringCatString@@YAJPEAU_UNICODE_STRING@@PEBG@Z @ 0x1C006ABA4 (-RtlUnicodeStringCatString@@YAJPEAU_UNICODE_STRING@@PEBG@Z.c)
 *     __security_check_cookie @ 0x1C0158CD0 (__security_check_cookie.c)
 */

__int64 __fastcall OpenUserProfileKeyForPTP(void **a1)
{
  int v2; // ecx
  void *KeyHandle; // [rsp+20h] [rbp-E0h] BYREF
  struct _UNICODE_STRING v5; // [rsp+28h] [rbp-D8h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+38h] [rbp-C8h] BYREF
  char v7; // [rsp+70h] [rbp-90h] BYREF

  KeyHandle = 0LL;
  if ( !grpWinStaList )
    return 3221225701LL;
  *(_DWORD *)&v5.Length = 45875200;
  v5.Buffer = (PWSTR)&v7;
  v2 = RtlUnicodeStringCopy(&v5, (const struct _UNICODE_STRING *)(grpWinStaList + 168LL));
  if ( v2 >= 0 )
  {
    v2 = RtlUnicodeStringCatString(&v5, L"Software\\Microsoft\\Windows\\CurrentVersion\\PrecisionTouchPad");
    if ( v2 >= 0 )
    {
      ObjectAttributes.Length = 48;
      ObjectAttributes.ObjectName = &v5;
      ObjectAttributes.RootDirectory = 0LL;
      ObjectAttributes.Attributes = 576;
      *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
      v2 = ZwOpenKey(&KeyHandle, 1u, &ObjectAttributes);
      if ( v2 >= 0 )
        *a1 = KeyHandle;
    }
  }
  return (unsigned int)v2;
}
