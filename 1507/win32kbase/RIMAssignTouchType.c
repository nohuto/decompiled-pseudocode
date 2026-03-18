/*
 * XREFs of RIMAssignTouchType @ 0x1C0073A74
 * Callers:
 *     RIMCreatePointerDeviceInfo @ 0x1C0073F6C (RIMCreatePointerDeviceInfo.c)
 * Callees:
 *     Win32AllocPoolZInit @ 0x1C004CEA0 (Win32AllocPoolZInit.c)
 *     RIMGetMaxCountFeatureDetails @ 0x1C0072EBC (RIMGetMaxCountFeatureDetails.c)
 *     rimHidP_GetSpecificButtonCaps @ 0x1C0073DA0 (rimHidP_GetSpecificButtonCaps.c)
 *     RIMRetrieveLinkCollection @ 0x1C0074AFC (RIMRetrieveLinkCollection.c)
 *     RIMIsParallelDevice @ 0x1C0074D48 (RIMIsParallelDevice.c)
 *     rimHidP_GetSpecificValueCaps @ 0x1C0074F80 (rimHidP_GetSpecificValueCaps.c)
 *     __security_check_cookie @ 0x1C0085840 (__security_check_cookie.c)
 */

__int64 __fastcall RIMAssignTouchType(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        _WORD *a4,
        struct _DEVICE_OBJECT *a5,
        struct _FILE_OBJECT *a6)
{
  int SpecificButtonCaps; // eax
  int SpecificValueCaps; // eax
  int v12; // r8d
  void *v13; // rax
  unsigned int v14; // ecx
  __int16 v16; // ax
  _WORD v17[2]; // [rsp+40h] [rbp-A9h] BYREF
  _DWORD v18[3]; // [rsp+44h] [rbp-A5h] BYREF
  _BYTE v19[6]; // [rsp+50h] [rbp-99h] BYREF
  __int16 v20; // [rsp+56h] [rbp-93h]
  _BYTE v21[80]; // [rsp+A0h] [rbp-49h] BYREF

  v17[0] = 1;
  SpecificButtonCaps = rimHidP_GetSpecificButtonCaps(0, 13, 0, 71, (__int64)v21, (__int64)v17, a3);
  if ( (int)(SpecificButtonCaps + 0x80000000) < 0 || SpecificButtonCaps == -1072627705 )
    *(_DWORD *)(a2 + 236) |= 4u;
  v17[0] = 1;
  SpecificValueCaps = rimHidP_GetSpecificValueCaps(0, 13, 0, 81, (__int64)v19, (__int64)v17, a3);
  v12 = SpecificValueCaps;
  if ( ((SpecificValueCaps + 0x80000000) & 0x80000000) != 0 || SpecificValueCaps == -1072627705 )
  {
    v17[0] = 1;
    v12 = rimHidP_GetSpecificValueCaps(2, 13, 0, 85, (__int64)v19, (__int64)v17, a3);
    if ( v12 < 0 )
    {
      v16 = v20;
      *(_DWORD *)(a2 + 236) |= 0x20u;
      *(_WORD *)(a2 + 716) = v16;
    }
    else
    {
      v18[0] = 0;
      *(_DWORD *)(a2 + 24) = 2;
      v13 = Win32AllocPoolZInit(0x40uLL);
      *(_QWORD *)(a2 + 696) = v13;
      if ( !v13
        || (unsigned int)RIMIsParallelDevice(a2, a3, v18) && !(unsigned int)RIMRetrieveLinkCollection(a2, a3, v18[0]) )
      {
        return (unsigned int)-1073741668;
      }
      v12 = RIMGetMaxCountFeatureDetails(a2, a3, a4, a5, a6, v19[2]);
    }
  }
  if ( *a4 != 5 )
  {
    v14 = v12;
    if ( (unsigned int)(*(_DWORD *)(a1 + 668) + *(_DWORD *)(a2 + 704)) > 0xA00 )
      return (unsigned int)-1073741668;
    return v14;
  }
  return (unsigned int)v12;
}
