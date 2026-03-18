/*
 * XREFs of PiDcHandleCustomDeviceEvent @ 0x1403F0DB0
 * Callers:
 *     PnpProcessCustomDeviceEvent @ 0x1403EF2C8 (PnpProcessCustomDeviceEvent.c)
 * Callees:
 *     KiLeaveCriticalRegionUnsafe @ 0x140055FA0 (KiLeaveCriticalRegionUnsafe.c)
 *     ExAcquireResourceExclusiveLite @ 0x140068160 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x140068940 (ExReleaseResourceLite.c)
 *     ObfDereferenceObject @ 0x14006AC00 (ObfDereferenceObject.c)
 *     RtlStringCbCopyW @ 0x1400C47BC (RtlStringCbCopyW.c)
 *     __security_check_cookie @ 0x14014CA50 (__security_check_cookie.c)
 *     _wcsicmp @ 0x14014D79C (_wcsicmp.c)
 *     PnpQueryDeviceRelations @ 0x1403F1B44 (PnpQueryDeviceRelations.c)
 *     _CmGetDeviceContainerIdFromBase @ 0x140486454 (_CmGetDeviceContainerIdFromBase.c)
 *     _CmIsLocalMachineContainer @ 0x1404F077C (_CmIsLocalMachineContainer.c)
 *     _CmGetDeviceRegProp @ 0x1404FCE4C (_CmGetDeviceRegProp.c)
 *     PiPnpRtlEndOperation @ 0x14050147C (PiPnpRtlEndOperation.c)
 *     PiPnpRtlBeginOperation @ 0x14050173C (PiPnpRtlBeginOperation.c)
 *     PiDcContainerRequiresConfiguration @ 0x14063077C (PiDcContainerRequiresConfiguration.c)
 *     _CmMoveBaseContainer @ 0x1406DA7B0 (_CmMoveBaseContainer.c)
 */

__int64 __fastcall PiDcHandleCustomDeviceEvent(__int64 a1)
{
  __int64 v1; // rdx
  NTSTATUS DeviceContainerIdFromBase; // ebx
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
  DeviceContainerIdFromBase = 0;
  v24 = 0LL;
  P[0] = 0LL;
  v4 = *(_QWORD *)(v1 + 4) - *(_QWORD *)&GUID_TARGET_DEVICE_TRANSPORT_RELATIONS_CHANGED.Data1;
  if ( !v4 )
    v4 = *(_QWORD *)(v1 + 12) - *(_QWORD *)GUID_TARGET_DEVICE_TRANSPORT_RELATIONS_CHANGED.Data4;
  if ( !v4 )
  {
    DeviceContainerIdFromBase = PiPnpRtlBeginOperation(P);
    if ( DeviceContainerIdFromBase >= 0 )
    {
      DeviceContainerIdFromBase = PnpQueryDeviceRelations(*(_QWORD *)(a1 + 144), 6LL, 0LL, &v24);
      if ( DeviceContainerIdFromBase >= 0 )
      {
        v6 = v24;
        if ( !v24 )
        {
LABEL_40:
          if ( P[0] )
            PiPnpRtlEndOperation(P[0]);
          return (unsigned int)DeviceContainerIdFromBase;
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
          DeviceContainerIdFromBase = CmGetDeviceContainerIdFromBase(*(_QWORD *)&PiPnpRtlCtx, a1 + 160, Str1, Str2);
          if ( DeviceContainerIdFromBase >= 0 )
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
                  DeviceContainerIdFromBase = DeviceRegProp;
                  if ( DeviceRegProp != -1073741275 )
                  {
                    if ( DeviceRegProp < 0 || v23 != 1 || v22 != 78 )
                      goto LABEL_34;
                    DeviceContainerIdFromBase = CmGetDeviceContainerIdFromBase(
                                                  *(_QWORD *)&PiPnpRtlCtx,
                                                  v14,
                                                  v29,
                                                  pszSrc);
                    if ( DeviceContainerIdFromBase < 0 )
                      break;
                    if ( !v10 )
                    {
                      DeviceContainerIdFromBase = CmMoveBaseContainer(v16, Str1, Str2, pszSrc);
                      PiDcContainerRequiresConfiguration(pszSrc);
                      if ( DeviceContainerIdFromBase < 0 )
                        break;
                      DeviceContainerIdFromBase = RtlStringCbCopyW(Str2, 0x4EuLL, pszSrc);
                      if ( DeviceContainerIdFromBase < 0 )
                        break;
                      v10 = 1;
                    }
                    if ( wcsicmp(pszSrc, Str2) )
                    {
                      if ( !(unsigned __int8)CmIsLocalMachineContainer(*(_QWORD *)&PiPnpRtlCtx, pszSrc) )
                      {
                        DeviceContainerIdFromBase = CmMoveBaseContainer(v17, v29, pszSrc, Str2);
                        PiDcContainerRequiresConfiguration(Str2);
                        if ( DeviceContainerIdFromBase < 0 )
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
          DeviceContainerIdFromBase = -1073739509;
        }
        ExReleaseResourceLite(&PnpRegistryDeviceResource);
        KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v18, v19, v20);
      }
    }
    v6 = v24;
    goto LABEL_37;
  }
  return (unsigned int)DeviceContainerIdFromBase;
}
