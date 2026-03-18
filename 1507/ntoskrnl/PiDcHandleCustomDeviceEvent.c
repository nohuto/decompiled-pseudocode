/*
 * XREFs of PiDcHandleCustomDeviceEvent @ 0x14045D640
 * Callers:
 *     PnpProcessCustomDeviceEvent @ 0x14045D6DC (PnpProcessCustomDeviceEvent.c)
 * Callees:
 *     ObfDereferenceObject @ 0x14004ED50 (ObfDereferenceObject.c)
 *     ExAcquireResourceExclusiveLite @ 0x1400C8A30 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x1400C92D0 (ExReleaseResourceLite.c)
 *     RtlStringCbCopyW @ 0x1400CF240 (RtlStringCbCopyW.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     _wcsicmp @ 0x1401723FC (_wcsicmp.c)
 *     PiPnpRtlBeginOperation @ 0x14043B8C8 (PiPnpRtlBeginOperation.c)
 *     PiPnpRtlEndOperation @ 0x14043BCB0 (PiPnpRtlEndOperation.c)
 *     _CmGetDeviceRegProp @ 0x14043C46C (_CmGetDeviceRegProp.c)
 *     PnpQueryDeviceRelations @ 0x140461830 (PnpQueryDeviceRelations.c)
 *     _CmGetDeviceContainerIdFromBase @ 0x140537BF4 (_CmGetDeviceContainerIdFromBase.c)
 *     _CmIsLocalMachineContainer @ 0x1405382C8 (_CmIsLocalMachineContainer.c)
 *     PiDcContainerRequiresConfiguration @ 0x140584570 (PiDcContainerRequiresConfiguration.c)
 *     _CmMoveBaseContainer @ 0x140715420 (_CmMoveBaseContainer.c)
 */

__int64 __fastcall PiDcHandleCustomDeviceEvent(__int64 a1)
{
  __int64 v1; // rdx
  int DeviceContainerIdFromBase; // ebx
  __int64 v4; // rax
  unsigned int *v6; // rax
  struct _KTHREAD *CurrentThread; // rax
  int v8; // eax
  unsigned int *v9; // rcx
  unsigned int v10; // edi
  bool i; // r14
  __int64 v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rsi
  int DeviceRegProp; // eax
  __int64 v16; // rcx
  __int64 v17; // rcx
  struct _KTHREAD *v18; // rcx
  __int16 v19; // ax
  unsigned int v20; // edi
  __int64 v21; // [rsp+48h] [rbp-C0h] BYREF
  unsigned int *v22; // [rsp+50h] [rbp-B8h] BYREF
  PVOID P; // [rsp+58h] [rbp-B0h] BYREF
  wchar_t Str2[40]; // [rsp+68h] [rbp-A0h] BYREF
  wchar_t pszSrc[40]; // [rsp+B8h] [rbp-50h] BYREF
  wchar_t Str1[40]; // [rsp+108h] [rbp+0h] BYREF
  _BYTE v27[80]; // [rsp+158h] [rbp+50h] BYREF

  v1 = *(_QWORD *)(a1 + 152);
  v22 = 0LL;
  DeviceContainerIdFromBase = 0;
  P = 0LL;
  v4 = *(_QWORD *)(v1 + 4) - *(_QWORD *)&GUID_TARGET_DEVICE_TRANSPORT_RELATIONS_CHANGED.Data1;
  if ( !v4 )
    v4 = *(_QWORD *)(v1 + 12) - *(_QWORD *)GUID_TARGET_DEVICE_TRANSPORT_RELATIONS_CHANGED.Data4;
  if ( !v4 )
  {
    DeviceContainerIdFromBase = PiPnpRtlBeginOperation((__int64 **)&P);
    if ( DeviceContainerIdFromBase >= 0 )
    {
      DeviceContainerIdFromBase = PnpQueryDeviceRelations(*(_QWORD *)(a1 + 144), 6LL, 0LL, &v22);
      if ( DeviceContainerIdFromBase >= 0 )
      {
        v6 = v22;
        if ( !v22 )
        {
LABEL_41:
          if ( P )
            PiPnpRtlEndOperation((char *)P);
          return (unsigned int)DeviceContainerIdFromBase;
        }
        if ( !*v22 )
        {
LABEL_38:
          if ( v6 )
          {
            v20 = 0;
            if ( *v6 )
            {
              do
              {
                ObfDereferenceObject(*(PVOID *)&v6[2 * v20 + 2]);
                v6 = v22;
                ++v20;
              }
              while ( v20 < *v22 );
            }
          }
          goto LABEL_41;
        }
        CurrentThread = KeGetCurrentThread();
        --CurrentThread->KernelApcDisable;
        ExAcquireResourceExclusiveLite(&PnpRegistryDeviceResource, 1u);
        LODWORD(v21) = 78;
        if ( (int)CmGetDeviceRegProp(
                    *(__int64 *)&PiPnpRtlCtx,
                    a1 + 160,
                    0LL,
                    37,
                    (__int64)&v21 + 4,
                    (__int64)Str1,
                    (__int64)&v21) >= 0
          && v21 == 0x10000004ELL )
        {
          DeviceContainerIdFromBase = CmGetDeviceContainerIdFromBase(*(_QWORD *)&PiPnpRtlCtx, a1 + 160, Str1, Str2);
          if ( DeviceContainerIdFromBase >= 0 )
          {
            v8 = wcsicmp(Str1, Str2);
            v9 = v22;
            v10 = 0;
            for ( i = v8 != 0; v10 < *v9; ++v10 )
            {
              v12 = *(_QWORD *)&v9[2 * v10 + 2];
              if ( v12 )
                v13 = *(_QWORD *)(*(_QWORD *)(v12 + 312) + 40LL);
              else
                v13 = 0LL;
              if ( v13 )
              {
                v14 = *(_QWORD *)(v13 + 48);
                if ( v14 )
                {
                  LODWORD(v21) = 78;
                  DeviceRegProp = CmGetDeviceRegProp(
                                    *(__int64 *)&PiPnpRtlCtx,
                                    v14,
                                    0LL,
                                    37,
                                    (__int64)&v21 + 4,
                                    (__int64)v27,
                                    (__int64)&v21);
                  DeviceContainerIdFromBase = DeviceRegProp;
                  if ( DeviceRegProp != -1073741275 )
                  {
                    if ( DeviceRegProp < 0 || v21 != 0x10000004ELL )
                      goto LABEL_32;
                    DeviceContainerIdFromBase = CmGetDeviceContainerIdFromBase(
                                                  *(_QWORD *)&PiPnpRtlCtx,
                                                  v14,
                                                  v27,
                                                  pszSrc);
                    if ( DeviceContainerIdFromBase < 0 )
                      break;
                    if ( !i )
                    {
                      DeviceContainerIdFromBase = CmMoveBaseContainer(v16, Str1, Str2, pszSrc);
                      PiDcContainerRequiresConfiguration(pszSrc);
                      if ( DeviceContainerIdFromBase < 0 )
                        break;
                      DeviceContainerIdFromBase = RtlStringCbCopyW(Str2, 0x4EuLL, pszSrc);
                      if ( DeviceContainerIdFromBase < 0 )
                        break;
                      i = 1;
                    }
                    if ( wcsicmp(pszSrc, Str2) )
                    {
                      if ( !(unsigned __int8)CmIsLocalMachineContainer(*(_QWORD *)&PiPnpRtlCtx, pszSrc) )
                      {
                        DeviceContainerIdFromBase = CmMoveBaseContainer(v17, v27, pszSrc, Str2);
                        PiDcContainerRequiresConfiguration(Str2);
                        if ( DeviceContainerIdFromBase < 0 )
                          break;
                      }
                    }
                  }
                  v9 = v22;
                }
              }
            }
          }
        }
        else
        {
LABEL_32:
          DeviceContainerIdFromBase = -1073739509;
        }
        ExReleaseResourceLite(&PnpRegistryDeviceResource);
        v18 = KeGetCurrentThread();
        v19 = v18->KernelApcDisable + 1;
        v18->KernelApcDisable = v19;
        if ( !v19
          && ($CD287064E7C9F7953DE243E927CFCB99 *)v18->ApcState.ApcListHead[0].Flink != &v18->152
          && !v18->SpecialApcDisable )
        {
          KiCheckForKernelApcDelivery();
        }
      }
    }
    v6 = v22;
    goto LABEL_38;
  }
  return (unsigned int)DeviceContainerIdFromBase;
}
