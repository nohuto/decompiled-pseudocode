/*
 * XREFs of ?ReadPointerDeviceCfgDWORDSetting@@YAJPEAXPEAUtagDEVICECONFIG_SETTING@@@Z @ 0x1C011D4E0
 * Callers:
 *     ?GetDWORDSettingValuesEx@@YAHPEAUtagDEVICECONFIG_SETTING@@KPEBGKH@Z @ 0x1C006A818 (-GetDWORDSettingValuesEx@@YAHPEAUtagDEVICECONFIG_SETTING@@KPEBGKH@Z.c)
 *     GetLocalMachineRegistryDWORDValues @ 0x1C006A9CC (GetLocalMachineRegistryDWORDValues.c)
 *     ?CreatePredictionSettings@@YAJPEAUtagDEVICECONFIG_SETTING@@KPEAGK@Z @ 0x1C011D278 (-CreatePredictionSettings@@YAJPEAUtagDEVICECONFIG_SETTING@@KPEAGK@Z.c)
 *     ?GetPredictionSettings@@YAJPEAUtagDEVICECONFIG_SETTING@@KPEAGK@Z @ 0x1C011D3B8 (-GetPredictionSettings@@YAJPEAUtagDEVICECONFIG_SETTING@@KPEAGK@Z.c)
 *     ?GetCustomFlick@@YAHPEAUtagCUSTOM_FLICK@@@Z @ 0x1C02254B0 (-GetCustomFlick@@YAHPEAUtagCUSTOM_FLICK@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ReadPointerDeviceCfgDWORDSetting(HANDLE KeyHandle, PCWSTR *a2)
{
  _DWORD *v4; // rbx
  __int64 v5; // rdx
  NTSTATUS v6; // edi
  __int64 v7; // r8
  struct _UNICODE_STRING ValueName; // [rsp+30h] [rbp-18h] BYREF
  ULONG Length; // [rsp+58h] [rbp+10h] BYREF

  Length = 16;
  RtlInitUnicodeString(&ValueName, *a2);
  v4 = (_DWORD *)Win32AllocPool(Length, 2020635477LL);
  if ( v4 )
  {
    v6 = ZwQueryValueKey(KeyHandle, &ValueName, KeyValuePartialInformation, v4, Length, &Length);
    if ( v6 >= 0 && v4[1] == 4 )
      *((_DWORD *)a2 + 3) = v4[3];
    Win32FreePool(v4, v5, v7);
  }
  else
  {
    return (unsigned int)-1073741595;
  }
  return (unsigned int)v6;
}
