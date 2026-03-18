/*
 * XREFs of ?WritePointerDeviceCfgSetting@@YAJPEAXPEBGIPEAEI@Z @ 0x1C0224DF8
 * Callers:
 *     ?SetFlickMap@@YAHPEAUtagFLICK_MAP@@H@Z @ 0x1C0224C9C (-SetFlickMap@@YAHPEAUtagFLICK_MAP@@H@Z.c)
 *     ?WritePredictionSettings@@YAHPEAUtagDEVICECONFIG_SETTING@@KPEBGK@Z @ 0x1C0224E4C (-WritePredictionSettings@@YAHPEAUtagDEVICECONFIG_SETTING@@KPEBGK@Z.c)
 *     ?WriteSettingValues@@YAHPEAUtagDEVICECONFIG_SETTING@@KPEBGK@Z @ 0x1C0224F94 (-WriteSettingValues@@YAHPEAUtagDEVICECONFIG_SETTING@@KPEBGK@Z.c)
 * Callees:
 *     <none>
 */

NTSTATUS __fastcall WritePointerDeviceCfgSetting(
        HANDLE KeyHandle,
        const unsigned __int16 *a2,
        ULONG a3,
        unsigned __int8 *a4,
        ULONG DataSize)
{
  struct _UNICODE_STRING DestinationString; // [rsp+30h] [rbp-18h] BYREF

  RtlInitUnicodeString(&DestinationString, a2);
  return ZwSetValueKey(KeyHandle, &DestinationString, 0, a3, a4, DataSize);
}
