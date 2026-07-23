/*
 * XREFs of DrvDbDispatchDeviceId @ 0x1404B8C04
 * Callers:
 *     <none>
 * Callees:
 *     DrvDbGetDeviceIdMappedProperty @ 0x1404B8CDC (DrvDbGetDeviceIdMappedProperty.c)
 *     DrvDbOpenObjectRegKey @ 0x1404DEEA4 (DrvDbOpenObjectRegKey.c)
 *     _PnpCtxGetObjectContext @ 0x1404E5A84 (_PnpCtxGetObjectContext.c)
 *     DrvDbDeleteObjectRegKey @ 0x1406E0C24 (DrvDbDeleteObjectRegKey.c)
 *     DrvDbGetDeviceIdMappedPropertyKeys @ 0x1406E1204 (DrvDbGetDeviceIdMappedPropertyKeys.c)
 *     DrvDbGetObjectList @ 0x1406E1A28 (DrvDbGetObjectList.c)
 *     DrvDbSetDeviceIdMappedProperty @ 0x1406E243C (DrvDbSetDeviceIdMappedProperty.c)
 *     DrvDbValidateDeviceIdName @ 0x1406E35E0 (DrvDbValidateDeviceIdName.c)
 */

__int64 __fastcall DrvDbDispatchDeviceId(__int64 a1, __int64 a2, unsigned int a3, __int64 a4, int *a5)
{
  int ObjectContext; // eax
  __int64 v7; // rcx
  int v8; // r10d
  __int64 v9; // r8
  int v10; // r11d
  int v11; // eax
  int v12; // r10d
  int v13; // r10d
  int v14; // r10d
  int v15; // r10d
  int v16; // r10d
  int v17; // r10d
  int v18; // r10d
  int DeviceIdMappedProperty; // eax
  int v21; // ecx
  _QWORD v22[3]; // [rsp+40h] [rbp-18h] BYREF

  v22[0] = 0LL;
  ObjectContext = PnpCtxGetObjectContext(a1, a3, v22);
  v9 = (unsigned int)ObjectContext;
  if ( ObjectContext < 0 )
    return (unsigned int)v9;
  v10 = v22[0];
  v11 = *(_DWORD *)(v22[0] + 12LL);
  if ( (v11 & 0x10000000) == 0 )
  {
    if ( !v11 )
    {
      LODWORD(v9) = -1073740697;
      return (unsigned int)v9;
    }
    if ( v8 == 2 )
    {
      if ( *((_BYTE *)a5 + 4) )
        goto LABEL_21;
    }
    else
    {
      if ( v8 <= 2 )
        goto LABEL_3;
      if ( v8 <= 4 )
        goto LABEL_21;
      if ( v8 > 6 && v8 != 8 )
      {
        if ( v8 != 9 )
          goto LABEL_3;
LABEL_21:
        if ( (v11 & 0x40000000) != 0 )
          goto LABEL_3;
        goto LABEL_25;
      }
    }
    if ( v11 < 0 )
      goto LABEL_3;
LABEL_25:
    LODWORD(v9) = -1073741790;
    return (unsigned int)v9;
  }
LABEL_3:
  v12 = v8 - 1;
  if ( !v12 )
  {
    DeviceIdMappedProperty = DrvDbValidateDeviceIdName(v7, a2, v9);
    goto LABEL_11;
  }
  v13 = v12 - 1;
  if ( !v13 )
  {
    DeviceIdMappedProperty = DrvDbOpenObjectRegKey(
                               v22[0],
                               0,
                               5,
                               a2,
                               *a5,
                               *((_BYTE *)a5 + 4),
                               *((_QWORD *)a5 + 1),
                               (__int64)(a5 + 4));
LABEL_11:
    LODWORD(v9) = DeviceIdMappedProperty;
    return (unsigned int)v9;
  }
  v14 = v13 - 1;
  if ( v14 )
  {
    v15 = v14 - 1;
    if ( v15 )
    {
      v16 = v15 - 1;
      if ( v16 )
      {
        v17 = v16 - 1;
        if ( v17 )
        {
          v18 = v17 - 2;
          if ( v18 )
          {
            if ( v18 != 1 )
            {
              LODWORD(v9) = -1073741811;
              return (unsigned int)v9;
            }
            DeviceIdMappedProperty = DrvDbSetDeviceIdMappedProperty(
                                       v22[0],
                                       a2,
                                       *(_QWORD *)a5,
                                       *((_QWORD *)a5 + 2),
                                       a5[6],
                                       *((_QWORD *)a5 + 4),
                                       a5[10]);
          }
          else
          {
            DeviceIdMappedProperty = DrvDbGetDeviceIdMappedProperty(
                                       v22[0],
                                       a2,
                                       *(_QWORD *)a5,
                                       *((_QWORD *)a5 + 2),
                                       *((_QWORD *)a5 + 3),
                                       *((_QWORD *)a5 + 4),
                                       a5[10],
                                       *((_QWORD *)a5 + 6));
          }
        }
        else
        {
          DeviceIdMappedProperty = DrvDbGetDeviceIdMappedPropertyKeys(
                                     v22[0],
                                     a2,
                                     *(_QWORD *)a5,
                                     *((_QWORD *)a5 + 3),
                                     a5[8],
                                     *((_QWORD *)a5 + 5));
        }
      }
      else
      {
        DeviceIdMappedProperty = DrvDbGetObjectList(
                                   v22[0],
                                   5,
                                   *(_QWORD *)a5,
                                   *((_QWORD *)a5 + 1),
                                   *((_QWORD *)a5 + 2),
                                   a5[6],
                                   *((_QWORD *)a5 + 4),
                                   2);
      }
    }
    else
    {
      DeviceIdMappedProperty = DrvDbDeleteObjectRegKey(v22[0], 5LL, a2);
    }
    goto LABEL_11;
  }
  v21 = *a5;
  LODWORD(v22[0]) = 0;
  LODWORD(v9) = DrvDbOpenObjectRegKey(v10, 0, 5, a2, v21, 1, (__int64)(a5 + 2), (__int64)v22);
  if ( (int)v9 >= 0 )
    *((_BYTE *)a5 + 16) = LODWORD(v22[0]) == 1;
  return (unsigned int)v9;
}
