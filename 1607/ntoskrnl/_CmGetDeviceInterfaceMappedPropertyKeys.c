/*
 * XREFs of _CmGetDeviceInterfaceMappedPropertyKeys @ 0x1406DD288
 * Callers:
 *     _PnpDispatchDeviceInterface @ 0x1404E4070 (_PnpDispatchDeviceInterface.c)
 *     _CmDeleteDeviceInterfaceWorker @ 0x1406D8330 (_CmDeleteDeviceInterfaceWorker.c)
 * Callees:
 *     _CmGetDeviceInterfaceMappedPropertyFromRegValue @ 0x1404BFAF8 (_CmGetDeviceInterfaceMappedPropertyFromRegValue.c)
 *     _CmGetDeviceInterfaceMappedPropertyFromComposite @ 0x1404E64C8 (_CmGetDeviceInterfaceMappedPropertyFromComposite.c)
 */

__int64 __fastcall CmGetDeviceInterfaceMappedPropertyKeys(
        __int64 *a1,
        __int64 a2,
        __int64 a3,
        char a4,
        __int64 a5,
        unsigned int a6,
        unsigned int *a7)
{
  unsigned int *v7; // rbx
  __int64 *v8; // r14
  int v9; // r10d
  __int64 v11; // rax
  unsigned int v12; // ebp
  __int64 v13; // rsi
  char v14; // di
  int DeviceInterfaceMappedPropertyFromRegValue; // eax
  __int64 v16; // rax
  __int64 v17; // rcx
  unsigned int v18; // ecx
  unsigned int v19; // ebp
  __int64 *v20; // rsi
  __int64 v21; // r14
  char v22; // di
  int DeviceInterfaceMappedPropertyFromComposite; // eax
  __int64 v24; // rax
  __int64 v25; // rcx
  unsigned int v26; // ecx
  _DWORD v28[18]; // [rsp+40h] [rbp-48h] BYREF
  __int64 v29; // [rsp+90h] [rbp+8h]
  __int64 v30; // [rsp+98h] [rbp+10h]

  v30 = a2;
  v29 = (__int64)a1;
  v7 = a7;
  v8 = (__int64 *)&off_1406E9BB0;
  v9 = 0;
  v11 = a3;
  *a7 = 0;
  v12 = 0;
  while ( 1 )
  {
    v13 = *v8;
    v14 = 0;
    if ( !*v8 )
      goto LABEL_17;
    if ( a4 )
      break;
    DeviceInterfaceMappedPropertyFromRegValue = CmGetDeviceInterfaceMappedPropertyFromRegValue(
                                                  a1,
                                                  a2,
                                                  v11,
                                                  *v8,
                                                  v28,
                                                  0LL,
                                                  0,
                                                  &a7);
    v9 = DeviceInterfaceMappedPropertyFromRegValue;
    if ( DeviceInterfaceMappedPropertyFromRegValue == -1073741789 || !DeviceInterfaceMappedPropertyFromRegValue )
    {
      v14 = 1;
    }
    else if ( DeviceInterfaceMappedPropertyFromRegValue == -1073741811
           || (unsigned int)(DeviceInterfaceMappedPropertyFromRegValue + 1073741767) <= 1 )
    {
      goto LABEL_20;
    }
    v9 = 0;
    if ( v14 )
      break;
LABEL_16:
    a1 = (__int64 *)v29;
    v11 = a3;
LABEL_17:
    ++v12;
    v8 += 2;
    if ( v12 >= 3 )
      goto LABEL_21;
    a2 = v30;
  }
  if ( a5 )
  {
    v16 = *v7;
    if ( (unsigned int)v16 < a6 )
    {
      v17 = 5 * v16;
      *(_OWORD *)(a5 + 4 * v17) = *(_OWORD *)v13;
      *(_DWORD *)(a5 + 4 * v17 + 16) = *(_DWORD *)(v13 + 16);
    }
  }
  v18 = *v7 + 1;
  if ( v18 >= *v7 )
  {
    *v7 = v18;
    v9 = 0;
    goto LABEL_16;
  }
  *v7 = -1;
  v9 = -1073741675;
LABEL_20:
  *v7 = 0;
LABEL_21:
  if ( v9 < 0 )
    return (unsigned int)v9;
  v19 = 0;
  v20 = (__int64 *)&off_1406E9FB0;
  while ( 2 )
  {
    v21 = *v20;
    v22 = 0;
    if ( !a4 )
    {
      DeviceInterfaceMappedPropertyFromComposite = CmGetDeviceInterfaceMappedPropertyFromComposite(
                                                     v29,
                                                     v30,
                                                     a3,
                                                     *v20,
                                                     v28,
                                                     0LL,
                                                     0,
                                                     &a7);
      v9 = DeviceInterfaceMappedPropertyFromComposite;
      if ( DeviceInterfaceMappedPropertyFromComposite == -1073741789 || !DeviceInterfaceMappedPropertyFromComposite )
      {
        v22 = 1;
      }
      else if ( DeviceInterfaceMappedPropertyFromComposite == -1073741811
             || (unsigned int)(DeviceInterfaceMappedPropertyFromComposite + 1073741767) <= 1 )
      {
        goto LABEL_39;
      }
      v9 = 0;
      if ( !v22 )
      {
LABEL_36:
        ++v19;
        v20 += 2;
        if ( v19 >= 4 )
          goto LABEL_40;
        continue;
      }
    }
    break;
  }
  if ( a5 )
  {
    v24 = *v7;
    if ( (unsigned int)v24 < a6 )
    {
      v25 = 5 * v24;
      *(_OWORD *)(a5 + 4 * v25) = *(_OWORD *)v21;
      *(_DWORD *)(a5 + 4 * v25 + 16) = *(_DWORD *)(v21 + 16);
    }
  }
  v26 = *v7 + 1;
  if ( v26 >= *v7 )
  {
    *v7 = v26;
    v9 = 0;
    goto LABEL_36;
  }
  *v7 = -1;
  v9 = -1073741675;
LABEL_39:
  *v7 = 0;
LABEL_40:
  if ( v9 >= 0 )
    return a6 < *v7 ? 0xC0000023 : 0;
  return (unsigned int)v9;
}
