/*
 * XREFs of AssignTouchType @ 0x1C01C74C0
 * Callers:
 *     CreatePointerDeviceInfo @ 0x1C01C7A40 (CreatePointerDeviceInfo.c)
 * Callees:
 *     __security_check_cookie @ 0x1C015BB90 (__security_check_cookie.c)
 *     ?GetMaxCountFeatureDetails@@YAJPEAUtagHID_POINTER_DEVICE_INFO@@PEAU_HIDP_PREPARSED_DATA@@PEAU_HIDP_CAPS@@PEAU_DEVICE_OBJECT@@PEAU_FILE_OBJECT@@E@Z @ 0x1C01C4EF8 (-GetMaxCountFeatureDetails@@YAJPEAUtagHID_POINTER_DEVICE_INFO@@PEAU_HIDP_PREPARSED_DATA@@PEAU_HI.c)
 *     IsParallelDevice @ 0x1C01CC030 (IsParallelDevice.c)
 *     RetrieveLinkCollection @ 0x1C01CC58C (RetrieveLinkCollection.c)
 *     UserLogDeviceCategorySpecificError @ 0x1C01CD244 (UserLogDeviceCategorySpecificError.c)
 */

__int64 __fastcall AssignTouchType(
        struct tagHID_POINTER_DEVICE_INFO *a1,
        struct _HIDP_PREPARSED_DATA *PreparsedData,
        struct _HIDP_CAPS *a3,
        struct _DEVICE_OBJECT *a4,
        struct _FILE_OBJECT *a5)
{
  NTSTATUS SpecificButtonCaps; // eax
  int SpecificValueCaps; // ebx
  __int64 v11; // rax
  USHORT LinkCollection; // ax
  USHORT ValueCapsLength[2]; // [rsp+40h] [rbp-A1h] BYREF
  _DWORD v15[3]; // [rsp+44h] [rbp-9Dh] BYREF
  struct _HIDP_VALUE_CAPS ValueCaps; // [rsp+50h] [rbp-91h] BYREF
  struct _HIDP_BUTTON_CAPS ButtonCaps; // [rsp+A0h] [rbp-41h] BYREF

  ValueCapsLength[0] = 1;
  SpecificButtonCaps = HidP_GetSpecificButtonCaps(
                         HidP_Input,
                         0xDu,
                         0,
                         0x47u,
                         &ButtonCaps,
                         ValueCapsLength,
                         PreparsedData);
  if ( (int)(SpecificButtonCaps + 0x80000000) < 0 || SpecificButtonCaps == -1072627705 )
    *((_DWORD *)a1 + 59) |= 4u;
  ValueCapsLength[0] = 1;
  SpecificValueCaps = HidP_GetSpecificValueCaps(HidP_Input, 0xDu, 0, 0x51u, &ValueCaps, ValueCapsLength, PreparsedData);
  if ( (int)(SpecificValueCaps + 0x80000000) < 0 || SpecificValueCaps == -1072627705 )
  {
    ValueCapsLength[0] = 1;
    SpecificValueCaps = HidP_GetSpecificValueCaps(
                          HidP_Feature,
                          0xDu,
                          0,
                          0x55u,
                          &ValueCaps,
                          ValueCapsLength,
                          PreparsedData);
    if ( SpecificValueCaps < 0 )
    {
      UserLogDeviceCategorySpecificError(1LL, a3->Usage);
      LinkCollection = ValueCaps.LinkCollection;
      *((_DWORD *)a1 + 59) |= 0x20u;
      *((_WORD *)a1 + 358) = LinkCollection;
    }
    else
    {
      v15[0] = 0;
      *((_DWORD *)a1 + 6) = 2;
      v11 = Win32AllocPoolZInit(64LL, 1903194965LL);
      *((_QWORD *)a1 + 87) = v11;
      if ( !v11
        || (unsigned int)IsParallelDevice(a1, PreparsedData, v15)
        && !(unsigned int)RetrieveLinkCollection(a1, PreparsedData) )
      {
        return (unsigned int)-1073741668;
      }
      SpecificValueCaps = GetMaxCountFeatureDetails((ULONG *)a1, PreparsedData, a3, a4, a5, ValueCaps.ReportID);
    }
  }
  else
  {
    UserLogError(1073742074LL);
  }
  if ( a3->Usage != 5 && gulPointerDeviceContactCount + *((_DWORD *)a1 + 176) > 0xA00 )
  {
    UserLogError(3221225740LL);
    return (unsigned int)-1073741668;
  }
  return (unsigned int)SpecificValueCaps;
}
