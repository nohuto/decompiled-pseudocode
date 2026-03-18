/*
 * XREFs of _SetCalibrationData @ 0x1C01D4244
 * Callers:
 *     NtUserSetCalibrationData @ 0x1C021F890 (NtUserSetCalibrationData.c)
 * Callees:
 *     GetPointerDeviceKey @ 0x1C013AD88 (GetPointerDeviceKey.c)
 *     UpdateTiltCalData @ 0x1C01C2B48 (UpdateTiltCalData.c)
 *     ValidateCalibrationData @ 0x1C01C2C88 (ValidateCalibrationData.c)
 *     WriteTiltCalibrationData @ 0x1C01C2DC8 (WriteTiltCalibrationData.c)
 */

__int64 __fastcall SetCalibrationData(__int64 a1, ULONG a2, void *a3, int a4)
{
  const WCHAR *v4; // rsi
  unsigned int v5; // edi
  unsigned int updated; // eax
  __int64 v11; // rcx
  HANDLE KeyHandle; // [rsp+30h] [rbp-30h] BYREF
  struct _UNICODE_STRING v14; // [rsp+40h] [rbp-20h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+50h] [rbp-10h] BYREF
  unsigned int v16; // [rsp+A0h] [rbp+40h] BYREF

  v4 = 0LL;
  v5 = 0;
  v16 = 0;
  if ( a3 )
  {
    if ( ValidateCalibrationData(a2, (__int64)a3, a4) )
    {
      switch ( a4 )
      {
        case 1:
          v4 = L"LinearityData";
          break;
        case 2:
          v4 = L"UserLinearityData";
          break;
        case 3:
          v4 = L"Default";
          break;
      }
      updated = UpdateTiltCalData(*(_QWORD *)(a1 + 416), a2, (__int64)a3, a4, &v16);
      v5 = updated;
      if ( v4 && updated )
      {
        v11 = (unsigned int)(a4 - 1);
        if ( (unsigned int)v11 <= 1 )
        {
          RtlInitUnicodeString(&DestinationString, v4);
          v14 = *(struct _UNICODE_STRING *)(a1 + 208);
          if ( (unsigned int)GetPointerDeviceKey(&v14, &KeyHandle) )
          {
            if ( ZwSetValueKey(KeyHandle, &DestinationString, 0, 3u, a3, a2) >= 0 )
              v5 = 1;
            ZwClose(KeyHandle);
          }
        }
        else if ( a4 == 3 )
        {
          v14 = *(struct _UNICODE_STRING *)(a1 + 208);
          WriteTiltCalibrationData(v11, &v14, v16, a2, a3);
        }
      }
    }
  }
  else
  {
    return (unsigned int)UpdateTiltCalData(*(_QWORD *)(a1 + 416), a2, 0LL, a4, &v16);
  }
  return v5;
}
