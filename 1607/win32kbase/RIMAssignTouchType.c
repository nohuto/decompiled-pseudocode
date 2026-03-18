/*
 * XREFs of RIMAssignTouchType @ 0x1C0007A34
 * Callers:
 *     RIMCreatePointerDeviceInfo @ 0x1C0008C38 (RIMCreatePointerDeviceInfo.c)
 * Callees:
 *     rimHidP_GetSpecificButtonCaps @ 0x1C0008A6C (rimHidP_GetSpecificButtonCaps.c)
 *     RIMRetrieveLinkCollection @ 0x1C00097F0 (RIMRetrieveLinkCollection.c)
 *     RIMIsParallelDevice @ 0x1C0009A3C (RIMIsParallelDevice.c)
 *     rimHidP_GetSpecificValueCaps @ 0x1C0009C68 (rimHidP_GetSpecificValueCaps.c)
 *     Win32AllocPoolZInit @ 0x1C0037AC0 (Win32AllocPoolZInit.c)
 *     __security_check_cookie @ 0x1C0089A80 (__security_check_cookie.c)
 */

__int64 __fastcall RIMAssignTouchType(__int64 a1, __int64 a2)
{
  int SpecificButtonCaps; // eax
  int SpecificValueCaps; // eax
  int v6; // ebx
  __int64 v7; // rax
  __int16 v9; // ax
  _WORD v10[2]; // [rsp+40h] [rbp-91h] BYREF
  _DWORD v11[3]; // [rsp+44h] [rbp-8Dh] BYREF
  _BYTE v12[6]; // [rsp+50h] [rbp-81h] BYREF
  __int16 v13; // [rsp+56h] [rbp-7Bh]
  _BYTE v14[80]; // [rsp+A0h] [rbp-31h] BYREF

  v10[0] = 1;
  SpecificButtonCaps = rimHidP_GetSpecificButtonCaps(0, 13, 0, 71, (__int64)v14, (__int64)v10, a2);
  if ( (int)(SpecificButtonCaps + 0x80000000) < 0 || SpecificButtonCaps == -1072627705 )
    *(_DWORD *)(a1 + 252) |= 0x10u;
  v10[0] = 1;
  SpecificValueCaps = rimHidP_GetSpecificValueCaps(0, 13, 0, 81, (__int64)v12, (__int64)v10, a2);
  v6 = SpecificValueCaps;
  if ( ((SpecificValueCaps + 0x80000000) & 0x80000000) != 0 || SpecificValueCaps == -1072627705 )
  {
    v10[0] = 1;
    v6 = rimHidP_GetSpecificValueCaps(2, 13, 0, 85, (__int64)v12, (__int64)v10, a2);
    if ( v6 < 0 )
    {
      v9 = v13;
      *(_DWORD *)(a1 + 252) |= 0x80u;
      *(_WORD *)(a1 + 700) = v9;
    }
    else
    {
      v11[0] = 0;
      *(_DWORD *)(a1 + 24) = 2;
      v7 = Win32AllocPoolZInit(0x28uLL);
      *(_QWORD *)(a1 + 680) = v7;
      if ( !v7
        || (unsigned int)RIMIsParallelDevice(a1, a2, v11) && !(unsigned int)RIMRetrieveLinkCollection(a1, a2, v11[0]) )
      {
        return (unsigned int)-1073741668;
      }
    }
  }
  return (unsigned int)v6;
}
