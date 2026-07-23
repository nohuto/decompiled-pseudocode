/*
 * XREFs of _CmDeleteInstallerClassWorker @ 0x1406D90AC
 * Callers:
 *     _CmDeleteInstallerClass @ 0x1406D8F68 (_CmDeleteInstallerClass.c)
 * Callees:
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 *     _CmGetMatchingFilteredDeviceList @ 0x1404C08A4 (_CmGetMatchingFilteredDeviceList.c)
 *     _CmDeleteInstallerClassRegKey @ 0x1406D9088 (_CmDeleteInstallerClassRegKey.c)
 *     _CmRaiseDeleteEvent @ 0x1406DC09C (_CmRaiseDeleteEvent.c)
 *     _CmGetInstallerClassMappedPropertyKeys @ 0x1406DDFF0 (_CmGetInstallerClassMappedPropertyKeys.c)
 *     _CmSetInstallerClassMappedProperty @ 0x1406DF048 (_CmSetInstallerClassMappedProperty.c)
 */

__int64 __fastcall CmDeleteInstallerClassWorker(__int64 a1, __int64 a2, __int16 a3)
{
  int v3; // ebx
  unsigned int MatchingFilteredDeviceList; // eax
  int *v7; // r14
  int v8; // edi
  int v9; // eax
  int v10; // r9d
  PVOID PoolWithTag; // rdi
  int InstallerClassMappedPropertyKeys; // eax
  unsigned int v13; // r14d
  unsigned __int64 v14; // rbp
  int v15; // r9d
  __int64 v16; // rbp
  int v17; // eax
  unsigned int v19; // [rsp+50h] [rbp-48h] BYREF
  int v20; // [rsp+54h] [rbp-44h] BYREF
  _DWORD v21[4]; // [rsp+58h] [rbp-40h] BYREF

  v3 = 0;
  v20 = 0;
  if ( a3 )
    return (unsigned int)-1073741811;
  MatchingFilteredDeviceList = CmGetMatchingFilteredDeviceList(a1, a2, 128, 0LL, 0LL, 0LL, 0, (__int64)&v20);
  if ( MatchingFilteredDeviceList == -1073741789 )
    return (unsigned int)-1073741535;
  if ( MatchingFilteredDeviceList )
    return MatchingFilteredDeviceList;
  v21[0] = 800;
  v7 = v21;
  v21[1] = 544;
  v8 = 0;
  v21[2] = 288;
  while ( 1 )
  {
    v9 = CmDeleteInstallerClassRegKey(a1, a2, *v7);
    if ( v9 )
    {
      if ( v9 != -1073741772 && v9 != -1073741811 && v9 != -1073741637 )
        break;
    }
    ++v8;
    ++v7;
    if ( (unsigned __int64)v8 >= 3 )
      goto LABEL_15;
  }
  v3 = v9;
  if ( v9 < 0 )
    return (unsigned int)v3;
LABEL_15:
  PoolWithTag = 0LL;
  v19 = 0;
  LOBYTE(v10) = 1;
  InstallerClassMappedPropertyKeys = CmGetInstallerClassMappedPropertyKeys(a1, a2, 0, v10, 0LL, 0, (__int64)&v19);
  if ( InstallerClassMappedPropertyKeys == -1073741789 )
  {
    while ( 1 )
    {
      v13 = v19;
      v14 = 20LL * v19;
      if ( v14 > 0xFFFFFFFF )
        break;
      if ( PoolWithTag )
        ExFreePoolWithTag(PoolWithTag, 0);
      PoolWithTag = ExAllocatePoolWithTag(PagedPool, (unsigned int)v14, 0x52504E50u);
      if ( !PoolWithTag )
      {
        InstallerClassMappedPropertyKeys = -1073741801;
        goto LABEL_22;
      }
      LOBYTE(v15) = 1;
      InstallerClassMappedPropertyKeys = CmGetInstallerClassMappedPropertyKeys(
                                           a1,
                                           a2,
                                           0,
                                           v15,
                                           (__int64)PoolWithTag,
                                           v13,
                                           (__int64)&v19);
      if ( InstallerClassMappedPropertyKeys != -1073741789 )
        goto LABEL_21;
    }
    InstallerClassMappedPropertyKeys = -1073741811;
LABEL_24:
    v3 = InstallerClassMappedPropertyKeys;
    goto LABEL_41;
  }
LABEL_21:
  v13 = v19;
LABEL_22:
  if ( InstallerClassMappedPropertyKeys && InstallerClassMappedPropertyKeys != -1073741275 )
    goto LABEL_24;
  v16 = 0LL;
  if ( v13 )
  {
    while ( 1 )
    {
      v17 = CmSetInstallerClassMappedProperty(a1, a2, 0, 0, (__int64)PoolWithTag + 20 * v16, 0, 0LL, 0);
      if ( v17 )
      {
        if ( v17 != -1073741275 && v17 != -1073741790 && v17 != -1073741802 && v17 != -1073741637 )
          break;
      }
      v16 = (unsigned int)(v16 + 1);
      if ( (unsigned int)v16 >= v13 )
        goto LABEL_36;
    }
    v3 = v17;
  }
LABEL_36:
  if ( v3 < 0 )
    goto LABEL_41;
  InstallerClassMappedPropertyKeys = CmDeleteInstallerClassRegKey(a1, a2, 32);
  if ( InstallerClassMappedPropertyKeys )
  {
    if ( InstallerClassMappedPropertyKeys != -1073741772 && InstallerClassMappedPropertyKeys != -1073741811 )
      goto LABEL_24;
  }
  CmRaiseDeleteEvent(a1, a2, 2LL);
LABEL_41:
  if ( PoolWithTag )
    ExFreePoolWithTag(PoolWithTag, 0);
  return (unsigned int)v3;
}
