/*
 * XREFs of ?RtlUnicodeStringCatString@@YAJPEAU_UNICODE_STRING@@PEBG@Z @ 0x1C006ABA4
 * Callers:
 *     GetLocalMachineRegistryDWORDValues @ 0x1C006A9CC (GetLocalMachineRegistryDWORDValues.c)
 *     ?OpenDeviceCfgKey@@YAJKPEAGKPEAPEAXH@Z @ 0x1C006ACEC (-OpenDeviceCfgKey@@YAJKPEAGKPEAPEAXH@Z.c)
 *     ?CreatePredictionSettings@@YAJPEAUtagDEVICECONFIG_SETTING@@KPEAGK@Z @ 0x1C011D278 (-CreatePredictionSettings@@YAJPEAUtagDEVICECONFIG_SETTING@@KPEAGK@Z.c)
 *     ?GetPredictionSettings@@YAJPEAUtagDEVICECONFIG_SETTING@@KPEAGK@Z @ 0x1C011D3B8 (-GetPredictionSettings@@YAJPEAUtagDEVICECONFIG_SETTING@@KPEAGK@Z.c)
 *     ?_OpenDeviceKey@InteractiveControlSettings@@IEAAJKHPEAPEAX@Z @ 0x1C0123EE8 (-_OpenDeviceKey@InteractiveControlSettings@@IEAAJKHPEAPEAX@Z.c)
 *     AccessPTPEnabledStatus @ 0x1C0131F90 (AccessPTPEnabledStatus.c)
 *     ?OpenUserProfileKeyForPTP@@YAJPEAPEAX@Z @ 0x1C01322DC (-OpenUserProfileKeyForPTP@@YAJPEAPEAX@Z.c)
 *     ReadTiltCalibrationData @ 0x1C01C3364 (ReadTiltCalibrationData.c)
 *     WriteTiltCalibrationData @ 0x1C01C3BF4 (WriteTiltCalibrationData.c)
 *     ?WritePredictionSettings@@YAHPEAUtagDEVICECONFIG_SETTING@@KPEBGK@Z @ 0x1C0225A0C (-WritePredictionSettings@@YAHPEAUtagDEVICECONFIG_SETTING@@KPEBGK@Z.c)
 * Callees:
 *     RtlUnicodeStringValidateDestWorker @ 0x1C006AC4C (RtlUnicodeStringValidateDestWorker.c)
 */

__int64 __fastcall RtlUnicodeStringCatString(struct _UNICODE_STRING *a1, const unsigned __int16 *a2)
{
  NTSTATUS v4; // r8d
  __int16 v5; // r10
  __int64 v6; // r9
  __int16 v7; // cx
  size_t v8; // rdx
  char *v9; // r11
  size_t v11; // [rsp+20h] [rbp-28h]
  ULONG v12; // [rsp+28h] [rbp-20h]
  wchar_t *v13; // [rsp+30h] [rbp-18h] BYREF
  size_t v14; // [rsp+60h] [rbp+18h] BYREF
  size_t v15; // [rsp+68h] [rbp+20h] BYREF

  v4 = RtlUnicodeStringValidateDestWorker(a1, &v13, &v14, &v15, v11, v12);
  if ( v4 >= 0 )
  {
    v5 = v15;
    v6 = 0x7FFFLL;
    v4 = 0;
    v7 = 0;
    v8 = v14 - v15;
    if ( v14 == v15 )
      goto LABEL_16;
    v9 = (char *)v13 + 2 * v15 - (_QWORD)a2;
    do
    {
      if ( !v6 )
        break;
      if ( !*a2 )
        break;
      *(const unsigned __int16 *)((char *)a2 + (_QWORD)v9) = *a2;
      --v6;
      ++a2;
      ++v7;
      --v8;
    }
    while ( v8 );
    if ( !v8 && v6 )
    {
LABEL_16:
      if ( *a2 )
        v4 = -2147483643;
    }
    a1->Length = 2 * (v5 + v7);
  }
  return (unsigned int)v4;
}
