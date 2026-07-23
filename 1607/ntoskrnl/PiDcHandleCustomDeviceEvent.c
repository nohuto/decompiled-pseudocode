/*
 * XREFs of PiDcHandleCustomDeviceEvent @ 0x140489514
 * Callers:
 *     PnpProcessCustomDeviceEvent @ 0x1404895A4 (PnpProcessCustomDeviceEvent.c)
 * Callees:
 *     KiLeaveCriticalRegionUnsafe @ 0x140055B20 (KiLeaveCriticalRegionUnsafe.c)
 *     ExAcquireResourceExclusiveLite @ 0x140067CE0 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x1400684C0 (ExReleaseResourceLite.c)
 *     ObfDereferenceObject @ 0x14006A780 (ObfDereferenceObject.c)
 *     RtlStringCbCopyW @ 0x1400C265C (RtlStringCbCopyW.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     _wcsicmp @ 0x14014DD0C (_wcsicmp.c)
 *     PnpQueryDeviceRelations @ 0x1403F0A08 (PnpQueryDeviceRelations.c)
 *     _CmIsLocalMachineContainer @ 0x1404D2870 (_CmIsLocalMachineContainer.c)
 *     _CmGetDeviceRegProp @ 0x1404DFDDC (_CmGetDeviceRegProp.c)
 *     PiPnpRtlEndOperation @ 0x1404E440C (PiPnpRtlEndOperation.c)
 *     PiPnpRtlBeginOperation @ 0x1404E46CC (PiPnpRtlBeginOperation.c)
 *     _CmGetDeviceContainerIdFromBase @ 0x140513264 (_CmGetDeviceContainerIdFromBase.c)
 *     PiDcContainerRequiresConfiguration @ 0x140630830 (PiDcContainerRequiresConfiguration.c)
 *     _CmMoveBaseContainer @ 0x1406DA8E8 (_CmMoveBaseContainer.c)
 */

__int64 __fastcall PiDcHandleCustomDeviceEvent(__int64 a1)
{
  __int64 v1; // rdx
  int DeviceRelations; // ebx
  __int64 v4; // rax
  _DWORD *v6; // rax
  struct _KTHREAD *CurrentThread; // rax
  int v8; // eax
  _DWORD *v9; // rcx
  bool v10; // r14
  __int64 i; // rdi
  __int64 v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rsi
  int DeviceRegProp; // eax
  __int64 v16; // rcx
  __int64 v17; // rcx
  __int64 v18; // rdx
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 v21; // rdi
  int v22; // [rsp+40h] [rbp-C0h] BYREF
  int v23; // [rsp+44h] [rbp-BCh] BYREF
  _DWORD *v24; // [rsp+48h] [rbp-B8h] BYREF
  PVOID P[2]; // [rsp+50h] [rbp-B0h] BYREF
  wchar_t pszSrc[40]; // [rsp+60h] [rbp-A0h] BYREF
  wchar_t Str2[40]; // [rsp+B0h] [rbp-50h] BYREF
  wchar_t Str1[40]; // [rsp+100h] [rbp+0h] BYREF
  _BYTE v29[80]; // [rsp+150h] [rbp+50h] BYREF

  v1 = *(_QWORD *)(a1 + 152);
  DeviceRelations = 0;
  v24 = 0LL;
  P[0] = 0LL;
  v4 = *(_QWORD *)(v1 + 4) - *(_QWORD *)&GUID_TARGET_DEVICE_TRANSPORT_RELATIONS_CHANGED.Data1;
  if ( !v4 )
    v4 = *(_QWORD *)(v1 + 12) - *(_QWORD *)GUID_TARGET_DEVICE_TRANSPORT_RELATIONS_CHANGED.Data4;
  if ( !v4 )
  {
    DeviceRelations = PiPnpRtlBeginOperation(P);
    if ( DeviceRelations >= 0 )
    {
      DeviceRelations = PnpQueryDeviceRelations(*(_QWORD *)(a1 + 144), 6, 0LL, (__int64)&v24);
      if ( DeviceRelations >= 0 )
      {
        v6 = v24;
        if ( !v24 )
        {
LABEL_40:
          if ( P[0] )
            PiPnpRtlEndOperation(P[0]);
          return (unsigned int)DeviceRelations;
        }
        if ( !*v24 )
        {
LABEL_37:
          if ( v6 )
          {
            v21 = 0LL;
            if ( *v6 )
            {
              do
              {
                ObfDereferenceObject(*(PVOID *)&v6[2 * v21 + 2]);
                v6 = v24;
                v21 = (unsigned int)(v21 + 1);
              }
              while ( (unsigned int)v21 < *v24 );
            }
          }
          goto LABEL_40;
        }
        CurrentThread = KeGetCurrentThread();
        --CurrentThread->KernelApcDisable;
        ExAcquireResourceExclusiveLite(&PnpRegistryDeviceResource, 1u);
        v22 = 78;
        if ( (int)CmGetDeviceRegProp(PiPnpRtlCtx, (int)a1 + 160, 0, 37, (__int64)&v23, (__int64)Str1, (__int64)&v22, 0) >= 0
          && v23 == 1
          && v22 == 78 )
        {
          DeviceRelations = CmGetDeviceContainerIdFromBase(*(_QWORD *)&PiPnpRtlCtx, a1 + 160, Str1, Str2);
          if ( DeviceRelations >= 0 )
          {
            v8 = wcsicmp(Str1, Str2);
            v9 = v24;
            v10 = v8 != 0;
            for ( i = 0LL; (unsigned int)i < *v9; i = (unsigned int)(i + 1) )
            {
              v12 = *(_QWORD *)&v9[2 * i + 2];
              if ( v12 )
                v13 = *(_QWORD *)(*(_QWORD *)(v12 + 312) + 40LL);
              else
                v13 = 0LL;
              if ( v13 )
              {
                v14 = *(_QWORD *)(v13 + 48);
                if ( v14 )
                {
                  v22 = 78;
                  DeviceRegProp = CmGetDeviceRegProp(
                                    PiPnpRtlCtx,
                                    v14,
                                    0,
                                    37,
                                    (__int64)&v23,
                                    (__int64)v29,
                                    (__int64)&v22,
                                    0);
                  DeviceRelations = DeviceRegProp;
                  if ( DeviceRegProp != -1073741275 )
                  {
                    if ( DeviceRegProp < 0 || v23 != 1 || v22 != 78 )
                      goto LABEL_34;
                    DeviceRelations = CmGetDeviceContainerIdFromBase(*(_QWORD *)&PiPnpRtlCtx, v14, v29, pszSrc);
                    if ( DeviceRelations < 0 )
                      break;
                    if ( !v10 )
                    {
                      DeviceRelations = CmMoveBaseContainer(v16, Str1, Str2, pszSrc);
                      PiDcContainerRequiresConfiguration(pszSrc);
                      if ( DeviceRelations < 0 )
                        break;
                      DeviceRelations = RtlStringCbCopyW(Str2, 0x4EuLL, pszSrc);
                      if ( DeviceRelations < 0 )
                        break;
                      v10 = 1;
                    }
                    if ( wcsicmp(pszSrc, Str2) )
                    {
                      if ( !(unsigned __int8)CmIsLocalMachineContainer(*(_QWORD *)&PiPnpRtlCtx, pszSrc) )
                      {
                        DeviceRelations = CmMoveBaseContainer(v17, v29, pszSrc, Str2);
                        PiDcContainerRequiresConfiguration(Str2);
                        if ( DeviceRelations < 0 )
                          break;
                      }
                    }
                  }
                  v9 = v24;
                }
              }
            }
          }
        }
        else
        {
LABEL_34:
          DeviceRelations = -1073739509;
        }
        ExReleaseResourceLite(&PnpRegistryDeviceResource);
        KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v18, v19, v20);
      }
    }
    v6 = v24;
    goto LABEL_37;
  }
  return (unsigned int)DeviceRelations;
}
