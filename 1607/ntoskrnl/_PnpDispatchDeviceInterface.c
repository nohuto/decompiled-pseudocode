/*
 * XREFs of _PnpDispatchDeviceInterface @ 0x1404E4070
 * Callers:
 *     <none>
 * Callees:
 *     _CmOpenDeviceInterfaceRegKey @ 0x1404DBA84 (_CmOpenDeviceInterfaceRegKey.c)
 *     _CmValidateDeviceInterfaceName @ 0x1404DF4B0 (_CmValidateDeviceInterfaceName.c)
 *     _CmGetDeviceInterfaceMappedProperty @ 0x1404E6370 (_CmGetDeviceInterfaceMappedProperty.c)
 *     _CmSetDeviceInterfaceMappedProperty @ 0x140576F88 (_CmSetDeviceInterfaceMappedProperty.c)
 *     _CmGetMatchingDeviceInterfaceList @ 0x14057F348 (_CmGetMatchingDeviceInterfaceList.c)
 *     _CmCreateDeviceInterface @ 0x1406D7260 (_CmCreateDeviceInterface.c)
 *     _CmDeleteDeviceInterface @ 0x1406D7F18 (_CmDeleteDeviceInterface.c)
 *     _CmGetDeviceInterfaceMappedPropertyKeys @ 0x1406DD288 (_CmGetDeviceInterfaceMappedPropertyKeys.c)
 *     _CmGetDeviceInterfaceMappedPropertyLocales @ 0x1406DD4AC (_CmGetDeviceInterfaceMappedPropertyLocales.c)
 */

__int64 __fastcall PnpDispatchDeviceInterface(__int64 a1, __int64 (__fastcall *a2)(), __int64 a3, int a4, __int64 a5)
{
  __int64 v5; // r10
  _QWORD *v6; // r8
  int v7; // r9d
  __int64 v8; // r9
  int v9; // r9d
  int v10; // r9d
  int v11; // r9d
  int v12; // r9d
  int v13; // r9d
  int v14; // r9d
  unsigned int DeviceInterfaceMappedProperty; // eax
  _QWORD v17[3]; // [rsp+50h] [rbp-18h] BYREF

  v5 = (__int64)a2;
  LODWORD(a2) = 0;
  LODWORD(v6) = 0;
  v7 = a4 - 1;
  if ( v7 )
  {
    v8 = (unsigned int)(v7 - 1);
    if ( (_DWORD)v8 )
    {
      v9 = v8 - 1;
      if ( v9 )
      {
        v10 = v9 - 1;
        if ( v10 )
        {
          v11 = v10 - 1;
          if ( v11 )
          {
            v12 = v11 - 1;
            if ( v12 )
            {
              v13 = v12 - 1;
              if ( v13 )
              {
                v14 = v13 - 1;
                if ( v14 )
                {
                  if ( v14 != 1 )
                    return PnpMapCmStatusToDispatchStatus(0xC000000D);
                  DeviceInterfaceMappedProperty = CmSetDeviceInterfaceMappedProperty(
                                                    a1,
                                                    v5,
                                                    *(_QWORD *)a5,
                                                    *(_QWORD *)(a5 + 8),
                                                    *(_QWORD *)(a5 + 16),
                                                    *(_DWORD *)(a5 + 24),
                                                    *(_QWORD *)(a5 + 32),
                                                    *(_DWORD *)(a5 + 40));
                }
                else
                {
                  DeviceInterfaceMappedProperty = CmGetDeviceInterfaceMappedProperty(
                                                    a1,
                                                    v5,
                                                    *(_QWORD *)a5,
                                                    *(_QWORD *)(a5 + 8),
                                                    *(_QWORD *)(a5 + 16),
                                                    *(_QWORD *)(a5 + 24),
                                                    *(_QWORD *)(a5 + 32),
                                                    *(_DWORD *)(a5 + 40),
                                                    *(_QWORD *)(a5 + 48));
                }
              }
              else
              {
                DeviceInterfaceMappedProperty = CmGetDeviceInterfaceMappedPropertyLocales(
                                                  a1,
                                                  0,
                                                  0,
                                                  *(_QWORD *)(a5 + 8),
                                                  *(_QWORD *)(a5 + 16),
                                                  *(_DWORD *)(a5 + 24),
                                                  *(_QWORD *)(a5 + 32));
              }
            }
            else
            {
              DeviceInterfaceMappedProperty = CmGetDeviceInterfaceMappedPropertyKeys(
                                                a1,
                                                v5,
                                                *(_QWORD *)a5,
                                                0,
                                                *(_QWORD *)(a5 + 24),
                                                *(_DWORD *)(a5 + 32),
                                                *(_QWORD *)(a5 + 40));
            }
          }
          else
          {
            if ( *(_QWORD *)a5 )
            {
              v17[0] = *(_QWORD *)a5;
              a2 = PnpCmMatchCallbackRoutine;
              v6 = v17;
              v17[1] = *(_QWORD *)(a5 + 8);
            }
            DeviceInterfaceMappedProperty = CmGetMatchingDeviceInterfaceList(
                                              a1,
                                              (_DWORD)a2,
                                              (_DWORD)v6,
                                              *(_QWORD *)(a5 + 16),
                                              *(_DWORD *)(a5 + 24),
                                              *(_QWORD *)(a5 + 32),
                                              *(_DWORD *)(a5 + 40) & 0xFFFF0000);
          }
        }
        else
        {
          DeviceInterfaceMappedProperty = CmDeleteDeviceInterface(a1, v5, *(_DWORD *)a5 & 0xFFFF0000);
        }
      }
      else
      {
        DeviceInterfaceMappedProperty = CmCreateDeviceInterface(
                                          a1,
                                          v5,
                                          *(_DWORD *)a5,
                                          (int)a5 + 8,
                                          a5 + 16,
                                          *(_DWORD *)(a5 + 20) & 0xFFFF0000);
      }
    }
    else
    {
      DeviceInterfaceMappedProperty = CmOpenDeviceInterfaceRegKey(
                                        a1,
                                        v5,
                                        0x30u,
                                        v8,
                                        *(_DWORD *)a5,
                                        *(_BYTE *)(a5 + 4),
                                        *(_QWORD *)(a5 + 8),
                                        (_DWORD *)(a5 + 16));
    }
  }
  else
  {
    DeviceInterfaceMappedProperty = CmValidateDeviceInterfaceName(a1, v5);
  }
  return PnpMapCmStatusToDispatchStatus(DeviceInterfaceMappedProperty);
}
