/*
 * XREFs of ?ReadPointerDeviceCfgDWORDSetting@@YAJPEAXPEAUtagDEVICECONFIG_SETTING@@@Z @ 0x1C003D594
 * Callers:
 *     ?GetPredictionSettings@@YAJPEAUtagDEVICECONFIG_SETTING@@KPEAGK@Z @ 0x1C003A7B0 (-GetPredictionSettings@@YAJPEAUtagDEVICECONFIG_SETTING@@KPEAGK@Z.c)
 *     ?GetDWORDSettingValues@@YAHPEAUtagDEVICECONFIG_SETTING@@KPEBGK@Z @ 0x1C003CD70 (-GetDWORDSettingValues@@YAHPEAUtagDEVICECONFIG_SETTING@@KPEBGK@Z.c)
 *     GetLocalMachineRegistryDWORDValues @ 0x1C003CE30 (GetLocalMachineRegistryDWORDValues.c)
 *     ?CreatePredictionSettings@@YAJPEAUtagDEVICECONFIG_SETTING@@KPEAGK@Z @ 0x1C0154030 (-CreatePredictionSettings@@YAJPEAUtagDEVICECONFIG_SETTING@@KPEAGK@Z.c)
 *     ?GetCustomFlick@@YAHPEAUtagCUSTOM_FLICK@@@Z @ 0x1C02253E0 (-GetCustomFlick@@YAHPEAUtagCUSTOM_FLICK@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ReadPointerDeviceCfgDWORDSetting(HANDLE KeyHandle, PCWSTR *a2)
{
  _DWORD *v4; // rbx
  NTSTATUS v5; // edi
  struct _UNICODE_STRING ValueName; // [rsp+30h] [rbp-18h] BYREF
  ULONG Length; // [rsp+58h] [rbp+10h] BYREF

  Length = 16;
  RtlInitUnicodeString(&ValueName, *a2);
  v4 = (_DWORD *)Win32AllocPool(Length, 2020635477LL);
  if ( v4 )
  {
    v5 = ZwQueryValueKey(KeyHandle, &ValueName, KeyValuePartialInformation, v4, Length, &Length);
    if ( v5 >= 0 && v4[1] == 4 )
      *((_DWORD *)a2 + 3) = v4[3];
    Win32FreePool(v4);
  }
  else
  {
    return (unsigned int)-1073741595;
  }
  return (unsigned int)v5;
}
