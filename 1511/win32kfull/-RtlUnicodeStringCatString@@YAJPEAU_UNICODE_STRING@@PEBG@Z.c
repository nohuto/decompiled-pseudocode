/*
 * XREFs of ?RtlUnicodeStringCatString@@YAJPEAU_UNICODE_STRING@@PEBG@Z @ 0x1C0125D94
 * Callers:
 *     ?CreatePredictionSettings@@YAJPEAUtagDEVICECONFIG_SETTING@@KPEAGK@Z @ 0x1C0110824 (-CreatePredictionSettings@@YAJPEAUtagDEVICECONFIG_SETTING@@KPEAGK@Z.c)
 *     AccessPTPEnabledStatus @ 0x1C0110FA8 (AccessPTPEnabledStatus.c)
 *     ?OpenUserProfileKeyForPTP@@YAJPEAPEAX@Z @ 0x1C0111688 (-OpenUserProfileKeyForPTP@@YAJPEAPEAX@Z.c)
 *     ?GetPredictionSettings@@YAJPEAUtagDEVICECONFIG_SETTING@@KPEAGK@Z @ 0x1C01240E0 (-GetPredictionSettings@@YAJPEAUtagDEVICECONFIG_SETTING@@KPEAGK@Z.c)
 *     ?OpenDeviceCfgKey@@YAJKPEAGKPEAPEAXH@Z @ 0x1C0125A64 (-OpenDeviceCfgKey@@YAJKPEAGKPEAPEAXH@Z.c)
 *     GetLocalMachineRegistryDWORDValues @ 0x1C0125BB4 (GetLocalMachineRegistryDWORDValues.c)
 *     ReadTiltCalibrationData @ 0x1C01C3C84 (ReadTiltCalibrationData.c)
 *     WriteTiltCalibrationData @ 0x1C01C4988 (WriteTiltCalibrationData.c)
 *     ComputePTPCurtainRegions @ 0x1C01D09CC (ComputePTPCurtainRegions.c)
 *     ?WritePredictionSettings@@YAHPEAUtagDEVICECONFIG_SETTING@@KPEBGK@Z @ 0x1C0224E4C (-WritePredictionSettings@@YAHPEAUtagDEVICECONFIG_SETTING@@KPEBGK@Z.c)
 * Callees:
 *     RtlUnicodeStringValidateDestWorker @ 0x1C0125E3C (RtlUnicodeStringValidateDestWorker.c)
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
