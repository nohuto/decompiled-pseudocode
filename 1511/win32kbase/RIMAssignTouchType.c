/*
 * XREFs of RIMAssignTouchType @ 0x1C0007760
 * Callers:
 *     RIMCreatePointerDeviceInfo @ 0x1C0007C58 (RIMCreatePointerDeviceInfo.c)
 * Callees:
 *     rimHidP_GetSpecificButtonCaps @ 0x1C0007A8C (rimHidP_GetSpecificButtonCaps.c)
 *     RIMRetrieveLinkCollection @ 0x1C00087E4 (RIMRetrieveLinkCollection.c)
 *     RIMIsParallelDevice @ 0x1C0008A30 (RIMIsParallelDevice.c)
 *     rimHidP_GetSpecificValueCaps @ 0x1C0008C68 (rimHidP_GetSpecificValueCaps.c)
 *     RIMGetMaxCountFeatureDetails @ 0x1C0009EAC (RIMGetMaxCountFeatureDetails.c)
 *     Win32AllocPoolZInit @ 0x1C004F690 (Win32AllocPoolZInit.c)
 *     __security_check_cookie @ 0x1C0088A80 (__security_check_cookie.c)
 */

__int64 __fastcall RIMAssignTouchType(__int64 a1, __int64 a2, __int64 a3, _WORD *a4, __int64 a5, __int64 a6)
{
  int SpecificButtonCaps; // eax
  int SpecificValueCaps; // eax
  int v12; // r8d
  __int64 v13; // rax
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
    *(_DWORD *)(a2 + 252) |= 0x10u;
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
      *(_DWORD *)(a2 + 252) |= 0x80u;
      *(_WORD *)(a2 + 732) = v16;
    }
    else
    {
      v18[0] = 0;
      *(_DWORD *)(a2 + 24) = 2;
      v13 = Win32AllocPoolZInit(0x40uLL);
      *(_QWORD *)(a2 + 712) = v13;
      if ( !v13
        || (unsigned int)RIMIsParallelDevice(a2, a3, v18) && !(unsigned int)RIMRetrieveLinkCollection(a2, a3, v18[0]) )
      {
        return (unsigned int)-1073741668;
      }
      v12 = RIMGetMaxCountFeatureDetails(a2, a3, (_DWORD)a4, a5, a6, v19[2]);
    }
  }
  if ( *a4 != 5 )
  {
    v14 = v12;
    if ( (unsigned int)(*(_DWORD *)(a1 + 700) + *(_DWORD *)(a2 + 720)) > 0xA00 )
      return (unsigned int)-1073741668;
    return v14;
  }
  return (unsigned int)v12;
}
