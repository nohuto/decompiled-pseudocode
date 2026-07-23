/*
 * XREFs of _CmDeleteDeviceWorker @ 0x1406D8A6C
 * Callers:
 *     _CmDeleteDevice @ 0x1406D7DF8 (_CmDeleteDevice.c)
 * Callees:
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     ZwClose @ 0x14015A3D0 (ZwClose.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 *     _CmGetMatchingFilteredDeviceInterfaceList @ 0x1404D946C (_CmGetMatchingFilteredDeviceInterfaceList.c)
 *     _CmOpenDeviceRegKey @ 0x1404DFCC0 (_CmOpenDeviceRegKey.c)
 *     _CmGetDeviceRegProp @ 0x1404DFDDC (_CmGetDeviceRegProp.c)
 *     _CmSetDeviceMappedProperty @ 0x14050B6D4 (_CmSetDeviceMappedProperty.c)
 *     _PnpSetObjectProperty @ 0x140511490 (_PnpSetObjectProperty.c)
 *     _CmGetDeviceContainerIdFromBase @ 0x140513264 (_CmGetDeviceContainerIdFromBase.c)
 *     _CmGetMatchingDeviceList @ 0x140561EC4 (_CmGetMatchingDeviceList.c)
 *     _CmDeleteDeviceInterface @ 0x1406D7F18 (_CmDeleteDeviceInterface.c)
 *     _CmDeleteDeviceRegKey @ 0x1406D85AC (_CmDeleteDeviceRegKey.c)
 *     _CmRemoveDeviceFromContainer @ 0x1406DA9C4 (_CmRemoveDeviceFromContainer.c)
 *     _CmRaiseDeleteEvent @ 0x1406DC09C (_CmRaiseDeleteEvent.c)
 *     _CmGetDeviceMappedPropertyKeys @ 0x1406DD574 (_CmGetDeviceMappedPropertyKeys.c)
 */

__int64 __fastcall CmDeleteDeviceWorker(__int64 *a1, const WCHAR *a2, __int16 a3)
{
  int v5; // ebx
  PVOID PoolWithTag; // r13
  PVOID v7; // rsi
  PVOID v8; // r14
  int v9; // edi
  int DeviceRegProp; // eax
  int MatchingFilteredDeviceInterfaceList; // ebx
  unsigned __int64 v12; // rbx
  _WORD *i; // rbx
  __int64 v14; // rax
  int j; // eax
  int MatchingDeviceList; // ebx
  unsigned __int64 v17; // rbx
  _WORD *k; // rbx
  __int64 v19; // rax
  int *v20; // r14
  int v21; // esi
  int v22; // eax
  int v23; // r9d
  unsigned int v24; // esi
  unsigned __int64 v25; // r14
  int DeviceMappedPropertyKeys; // eax
  unsigned int v27; // ebx
  int v28; // eax
  PVOID v30; // [rsp+20h] [rbp-E0h]
  unsigned int v31; // [rsp+28h] [rbp-D8h]
  unsigned int v32; // [rsp+50h] [rbp-B0h] BYREF
  unsigned int v33; // [rsp+54h] [rbp-ACh] BYREF
  unsigned int v34; // [rsp+58h] [rbp-A8h] BYREF
  HANDLE Handle; // [rsp+60h] [rbp-A0h] BYREF
  PVOID P; // [rsp+68h] [rbp-98h]
  int v37; // [rsp+70h] [rbp-90h] BYREF
  PVOID v38; // [rsp+78h] [rbp-88h]
  _BYTE v39[8]; // [rsp+80h] [rbp-80h] BYREF
  _OWORD v40[2]; // [rsp+88h] [rbp-78h] BYREF
  wchar_t v41[40]; // [rsp+B0h] [rbp-50h] BYREF
  wchar_t v42[40]; // [rsp+100h] [rbp+0h] BYREF

  Handle = 0LL;
  v5 = 0;
  v38 = 0LL;
  PoolWithTag = 0LL;
  v32 = 0;
  v7 = 0LL;
  v33 = 0;
  v8 = 0LL;
  if ( a3 )
    return (unsigned int)-1073741811;
  v9 = CmOpenDeviceRegKey((__int64)a1, (__int64)a2, 0x10u, 0, 33619970, 0, (__int64)&Handle, 0LL);
  if ( v9 >= 0 )
  {
    v37 = 78;
    DeviceRegProp = CmGetDeviceRegProp(
                      (__int64)a1,
                      (__int64)a2,
                      (__int64)Handle,
                      37,
                      (__int64)v39,
                      (__int64)v41,
                      (__int64)&v37,
                      0);
    if ( DeviceRegProp < 0 )
    {
      if ( DeviceRegProp == -1073741275 )
        goto LABEL_10;
    }
    else
    {
      DeviceRegProp = CmGetDeviceContainerIdFromBase(a1, (__int64)a2, v41, v42);
      if ( DeviceRegProp >= 0 )
      {
        DeviceRegProp = CmRemoveDeviceFromContainer(a1, v42, v41, a2);
        if ( DeviceRegProp >= 0 )
        {
          while ( 1 )
          {
LABEL_10:
            MatchingFilteredDeviceInterfaceList = CmGetMatchingFilteredDeviceInterfaceList(
                                                    (__int64)a1,
                                                    0LL,
                                                    (__int64)a2,
                                                    0,
                                                    0LL,
                                                    0LL,
                                                    (__int64)PoolWithTag,
                                                    v5,
                                                    (__int64)&v32,
                                                    0);
            if ( MatchingFilteredDeviceInterfaceList != -1073741789 )
              goto LABEL_18;
            v12 = 2LL * v32;
            if ( v12 > 0xFFFFFFFF )
            {
              MatchingFilteredDeviceInterfaceList = -1073741811;
              goto LABEL_19;
            }
            if ( PoolWithTag )
              ExFreePoolWithTag(PoolWithTag, 0);
            PoolWithTag = ExAllocatePoolWithTag(PagedPool, (unsigned int)v12, 0x52504E50u);
            if ( !PoolWithTag )
              break;
            v5 = v32;
          }
          MatchingFilteredDeviceInterfaceList = -1073741801;
LABEL_18:
          if ( MatchingFilteredDeviceInterfaceList )
          {
LABEL_19:
            v9 = MatchingFilteredDeviceInterfaceList;
            goto LABEL_77;
          }
          if ( v32 )
          {
            for ( i = PoolWithTag; *i; i += v14 + 1 )
            {
              CmDeleteDeviceInterface((__int64)a1, (__int64)i, 0);
              v14 = -1LL;
              do
                ++v14;
              while ( i[v14] );
            }
          }
          for ( j = 0; ; j = v33 )
          {
            MatchingDeviceList = CmGetMatchingDeviceList(
                                   (__int64)a1,
                                   (__int64)&CmMatchLastKnownParentCallback,
                                   (__int64)a2,
                                   (__int64)v7,
                                   j,
                                   (__int64)&v33,
                                   0);
            if ( MatchingDeviceList != -1073741789 )
              goto LABEL_34;
            v17 = 2LL * v33;
            if ( v17 > 0xFFFFFFFF )
            {
              MatchingDeviceList = -1073741811;
              goto LABEL_35;
            }
            if ( v7 )
              ExFreePoolWithTag(v7, 0);
            v38 = ExAllocatePoolWithTag(PagedPool, (unsigned int)v17, 0x52504E50u);
            v7 = v38;
            if ( !v38 )
              break;
          }
          MatchingDeviceList = -1073741801;
LABEL_34:
          if ( MatchingDeviceList )
          {
LABEL_35:
            v9 = MatchingDeviceList;
            goto LABEL_75;
          }
          if ( v33 )
          {
            for ( k = v7; *k; k += v19 + 1 )
            {
              PnpSetObjectProperty(
                (__int64)a1,
                (__int64)k,
                1u,
                0LL,
                0LL,
                (__int64)&DEVPKEY_Device_LastKnownParent,
                0,
                0LL,
                0,
                0);
              v19 = -1LL;
              do
                ++v19;
              while ( k[v19] );
            }
          }
          v20 = (int *)v40;
          v21 = 0;
          v40[0] = _mm_load_si128((const __m128i *)&_xmm);
          v40[1] = _mm_load_si128((const __m128i *)&_xmm);
          while ( 1 )
          {
            v22 = CmDeleteDeviceRegKey((__int64)a1, (__int64)a2, *v20, 0);
            if ( v22 )
            {
              if ( v22 != -1073741772 && v22 != -1073741811 && v22 != -1073741637 )
                break;
            }
            ++v21;
            ++v20;
            if ( (unsigned __int64)v21 >= 8 )
              goto LABEL_49;
          }
          v9 = v22;
LABEL_49:
          v8 = 0LL;
          if ( v9 >= 0 )
          {
            P = 0LL;
            v31 = 0;
            v30 = 0LL;
            v34 = 0;
            while ( 1 )
            {
              LOBYTE(v23) = 1;
              DeviceMappedPropertyKeys = CmGetDeviceMappedPropertyKeys(
                                           (_DWORD)a1,
                                           (_DWORD)a2,
                                           (_DWORD)Handle,
                                           v23,
                                           (__int64)v30,
                                           v31,
                                           (__int64)&v34);
              if ( DeviceMappedPropertyKeys != -1073741789 )
                break;
              v24 = v34;
              v25 = 20LL * v34;
              if ( v25 > 0xFFFFFFFF )
              {
                DeviceMappedPropertyKeys = -1073741811;
                goto LABEL_60;
              }
              if ( P )
                ExFreePoolWithTag(P, 0);
              P = ExAllocatePoolWithTag(PagedPool, (unsigned int)v25, 0x52504E50u);
              v8 = P;
              if ( !P )
              {
                DeviceMappedPropertyKeys = -1073741801;
                goto LABEL_58;
              }
              v31 = v24;
              v30 = P;
            }
            v24 = v34;
LABEL_58:
            if ( DeviceMappedPropertyKeys && DeviceMappedPropertyKeys != -1073741275 )
            {
LABEL_60:
              v8 = P;
              v9 = DeviceMappedPropertyKeys;
              goto LABEL_75;
            }
            v27 = 0;
            if ( v24 )
            {
              while ( 1 )
              {
                v28 = CmSetDeviceMappedProperty(
                        (__int64)a1,
                        a2,
                        (__int64)Handle,
                        0LL,
                        (__int64)v8 + 20 * v27,
                        0,
                        0LL,
                        0);
                if ( v28 )
                {
                  if ( v28 != -1073741275 && v28 != -1073741790 && v28 != -1073741802 && v28 != -1073741637 )
                    break;
                }
                if ( ++v27 >= v24 )
                  goto LABEL_72;
              }
              v9 = v28;
            }
LABEL_72:
            if ( v9 >= 0 )
            {
              v9 = CmDeleteDeviceRegKey((__int64)a1, (__int64)a2, 16, 0);
              if ( v9 >= 0 )
                CmRaiseDeleteEvent(a1, a2, 1LL);
            }
          }
LABEL_75:
          if ( v38 )
            ExFreePoolWithTag(v38, 0);
LABEL_77:
          if ( PoolWithTag )
            ExFreePoolWithTag(PoolWithTag, 0);
          if ( v8 )
            ExFreePoolWithTag(v8, 0);
          goto LABEL_81;
        }
      }
    }
    v9 = DeviceRegProp;
  }
LABEL_81:
  if ( Handle )
    ZwClose(Handle);
  return (unsigned int)v9;
}
