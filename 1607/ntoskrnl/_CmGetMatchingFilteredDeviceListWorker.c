/*
 * XREFs of _CmGetMatchingFilteredDeviceListWorker @ 0x1406DBA58
 * Callers:
 *     _CmGetMatchingFilteredDeviceList @ 0x1404C08A4 (_CmGetMatchingFilteredDeviceList.c)
 * Callees:
 *     memset @ 0x140171AC0 (memset.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     _CmGetMatchingDeviceListForSubkey @ 0x140561FD8 (_CmGetMatchingDeviceListForSubkey.c)
 *     _CmGetDeviceRelationsList @ 0x1406DB9B8 (_CmGetDeviceRelationsList.c)
 */

__int64 __fastcall CmGetMatchingFilteredDeviceListWorker(
        __int64 *a1,
        const WCHAR *a2,
        int a3,
        char (__fastcall *a4)(__int64 a1, __int64 a2, unsigned int a3, __int64 a4),
        _QWORD *a5,
        _WORD *a6,
        unsigned int a7,
        unsigned int *a8,
        __int16 a9)
{
  char (__fastcall *v10)(__int64, __int64, unsigned int, __int64); // r13
  const WCHAR *v11; // rbx
  unsigned int MatchingDeviceListForSubkey; // ebx
  char v13; // r15
  _QWORD *v14; // rax
  _QWORD v17[3]; // [rsp+40h] [rbp-40h] BYREF
  _QWORD v18[5]; // [rsp+58h] [rbp-28h] BYREF

  v10 = a4;
  v11 = a2;
  *a8 = 0;
  if ( a7 )
    *a6 = 0;
  if ( (a3 & 0xFFFFFE00) != 0 || a9 )
    return (unsigned int)-1073741811;
  v13 = (a3 & 0x100) != 0;
  if ( (a3 & 0x7C) != 0 )
  {
    if ( !a2 )
      return (unsigned int)-1073741811;
    return (unsigned int)CmGetDeviceRelationsList((int)a1, a2, a3, (int)a6, a7, (__int64)a8);
  }
  if ( (a3 & 2) == 0 )
  {
    if ( (a3 & 0x80u) == 0 )
    {
      if ( (a3 & 1) != 0 )
      {
        if ( !a2 )
          return (unsigned int)-1073741811;
        v14 = a5;
        return (unsigned int)CmGetMatchingDeviceListForSubkey(a1, a2, v13, (__int64)a4, (__int64)v14, a6, a7, a8);
      }
      v14 = a5;
    }
    else
    {
      if ( !a2 )
        return (unsigned int)-1073741811;
      v17[2] = a5;
      v14 = v17;
      v17[1] = a4;
      a4 = CmClassFilterCallback;
      v17[0] = a2;
    }
    a2 = 0LL;
    return (unsigned int)CmGetMatchingDeviceListForSubkey(a1, a2, v13, (__int64)a4, (__int64)v14, a6, a7, a8);
  }
  if ( !a2 )
    return (unsigned int)-1073741811;
  memset(v18, 0, sizeof(v18));
  v18[1] = 0LL;
  LODWORD(v18[2]) = 0;
  v18[4] = a5;
  v18[0] = v11;
  v18[3] = v10;
  MatchingDeviceListForSubkey = CmGetMatchingDeviceListForSubkey(
                                  a1,
                                  0LL,
                                  v13,
                                  (__int64)CmServiceFilterCallback,
                                  (__int64)v18,
                                  a6,
                                  a7,
                                  a8);
  if ( v18[1] )
    ExFreePoolWithTag((PVOID)v18[1], 0);
  return MatchingDeviceListForSubkey;
}
