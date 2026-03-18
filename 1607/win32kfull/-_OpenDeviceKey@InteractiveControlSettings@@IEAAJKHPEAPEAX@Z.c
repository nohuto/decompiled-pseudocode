/*
 * XREFs of ?_OpenDeviceKey@InteractiveControlSettings@@IEAAJKHPEAPEAX@Z @ 0x1C0123EE8
 * Callers:
 *     ?ReadSettings@InteractiveControlSettings@@QEAAJXZ @ 0x1C0123FE0 (-ReadSettings@InteractiveControlSettings@@QEAAJXZ.c)
 *     ?WriteSettings@InteractiveControlSettings@@QEAAJXZ @ 0x1C023C70C (-WriteSettings@InteractiveControlSettings@@QEAAJXZ.c)
 * Callees:
 *     ?RtlUnicodeStringCopy@@YAJPEAU_UNICODE_STRING@@PEBU1@@Z @ 0x1C006AAE8 (-RtlUnicodeStringCopy@@YAJPEAU_UNICODE_STRING@@PEBU1@@Z.c)
 *     ?RtlUnicodeStringCatString@@YAJPEAU_UNICODE_STRING@@PEBG@Z @ 0x1C006ABA4 (-RtlUnicodeStringCatString@@YAJPEAU_UNICODE_STRING@@PEBG@Z.c)
 *     __security_check_cookie @ 0x1C0158CD0 (__security_check_cookie.c)
 */

__int64 __fastcall InteractiveControlSettings::_OpenDeviceKey(
        InteractiveControlSettings *this,
        ACCESS_MASK a2,
        __int64 a3,
        void **a4)
{
  int v6; // ecx
  void *KeyHandle; // [rsp+40h] [rbp-C0h] BYREF
  struct _UNICODE_STRING v9; // [rsp+48h] [rbp-B8h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+58h] [rbp-A8h] BYREF
  char v11; // [rsp+90h] [rbp-70h] BYREF

  KeyHandle = 0LL;
  if ( grpWinStaList )
  {
    *(_DWORD *)&v9.Length = 45875200;
    v9.Buffer = (PWSTR)&v11;
    v6 = RtlUnicodeStringCopy(&v9, (const struct _UNICODE_STRING *)(grpWinStaList + 168LL));
    if ( v6 >= 0 )
    {
      v6 = RtlUnicodeStringCatString(
             &v9,
             L"\\Software\\Microsoft\\Windows NT\\CurrentVersion\\Windows\\InteractiveControl");
      if ( v6 >= 0 )
      {
        ObjectAttributes.Length = 48;
        ObjectAttributes.ObjectName = &v9;
        ObjectAttributes.RootDirectory = 0LL;
        ObjectAttributes.Attributes = 576;
        *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
        v6 = ZwOpenKey(&KeyHandle, a2, &ObjectAttributes);
        if ( v6 < 0 )
          v6 = ZwCreateKey(&KeyHandle, a2, &ObjectAttributes, 0, 0LL, 0, 0LL);
        *a4 = KeyHandle;
      }
    }
  }
  else
  {
    return (unsigned int)-1073741595;
  }
  return (unsigned int)v6;
}
