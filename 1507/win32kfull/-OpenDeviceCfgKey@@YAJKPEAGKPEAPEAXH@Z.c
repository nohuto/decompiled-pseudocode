/*
 * XREFs of ?OpenDeviceCfgKey@@YAJKPEAGKPEAPEAXH@Z @ 0x1C003CF54
 * Callers:
 *     ?GetDWORDSettingValues@@YAHPEAUtagDEVICECONFIG_SETTING@@KPEBGK@Z @ 0x1C003CD70 (-GetDWORDSettingValues@@YAHPEAUtagDEVICECONFIG_SETTING@@KPEBGK@Z.c)
 *     ?GetFlickMap@@YAHPEAUtagFLICK_MAP@@@Z @ 0x1C003D368 (-GetFlickMap@@YAHPEAUtagFLICK_MAP@@@Z.c)
 *     ?GetCustomFlick@@YAHPEAUtagCUSTOM_FLICK@@@Z @ 0x1C02253E0 (-GetCustomFlick@@YAHPEAUtagCUSTOM_FLICK@@@Z.c)
 *     ?SetCustomFlick@@YAHPEAUtagCUSTOM_FLICK@@@Z @ 0x1C0225624 (-SetCustomFlick@@YAHPEAUtagCUSTOM_FLICK@@@Z.c)
 *     ?SetFlickMap@@YAHPEAUtagFLICK_MAP@@H@Z @ 0x1C022578C (-SetFlickMap@@YAHPEAUtagFLICK_MAP@@H@Z.c)
 *     ?WriteSettingValues@@YAHPEAUtagDEVICECONFIG_SETTING@@KPEBGK@Z @ 0x1C0225A84 (-WriteSettingValues@@YAHPEAUtagDEVICECONFIG_SETTING@@KPEBGK@Z.c)
 * Callees:
 *     ?RtlUnicodeStringCopy@@YAJPEAU_UNICODE_STRING@@PEBU1@@Z @ 0x1C003D0A4 (-RtlUnicodeStringCopy@@YAJPEAU_UNICODE_STRING@@PEBU1@@Z.c)
 *     ?RtlUnicodeStringCatString@@YAJPEAU_UNICODE_STRING@@PEBG@Z @ 0x1C003D160 (-RtlUnicodeStringCatString@@YAJPEAU_UNICODE_STRING@@PEBG@Z.c)
 *     ?OpenUserProfileKeyForPTP@@YAJPEAPEAX@Z @ 0x1C015544C (-OpenUserProfileKeyForPTP@@YAJPEAPEAX@Z.c)
 *     __security_check_cookie @ 0x1C015BB90 (__security_check_cookie.c)
 */

__int64 __fastcall OpenDeviceCfgKey(unsigned int a1, unsigned __int16 *a2, ACCESS_MASK a3, void **a4, int a5)
{
  NTSTATUS v9; // ebx
  NTSTATUS v11; // eax
  void *KeyHandle; // [rsp+40h] [rbp-C0h] BYREF
  struct _UNICODE_STRING v13; // [rsp+48h] [rbp-B8h] BYREF
  ULONG Disposition; // [rsp+58h] [rbp-A8h] BYREF
  struct _UNICODE_STRING KeyPath; // [rsp+60h] [rbp-A0h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+70h] [rbp-90h] BYREF
  char v17; // [rsp+A0h] [rbp-60h] BYREF

  KeyHandle = 0LL;
  if ( a1 <= 0x15E )
  {
    v9 = RtlFormatCurrentUserKeyPath(&KeyPath);
    if ( v9 < 0 )
      return (unsigned int)v9;
    *(_DWORD *)&v13.Length = 45875200;
    v13.Buffer = (PWSTR)&v17;
    v9 = RtlUnicodeStringCopy(&v13, &KeyPath);
    if ( v9 >= 0 )
    {
      v9 = RtlUnicodeStringCatString(&v13, a2);
      if ( v9 >= 0 )
      {
        ObjectAttributes.ObjectName = &v13;
        ObjectAttributes.Length = 48;
        ObjectAttributes.RootDirectory = 0LL;
        *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
        ObjectAttributes.Attributes = 576;
        if ( a5 )
        {
          v11 = ZwCreateKey(&KeyHandle, a3, &ObjectAttributes, 0, 0LL, 0, &Disposition);
        }
        else
        {
          v9 = ZwOpenKey(&KeyHandle, a3, &ObjectAttributes);
          if ( v9 >= 0
            || a1 != 122
            || RtlCompareMemory(L"\\Software\\Microsoft\\Windows\\CurrentVersion\\PrecisionTouchPad", a2, 0x7AuLL) != 122 )
          {
            goto LABEL_8;
          }
          v11 = OpenUserProfileKeyForPTP(&KeyHandle);
        }
        v9 = v11;
      }
    }
LABEL_8:
    RtlFreeUnicodeString(&KeyPath);
    if ( v9 >= 0 )
      *a4 = KeyHandle;
    return (unsigned int)v9;
  }
  return 2147483653LL;
}
