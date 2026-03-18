/*
 * XREFs of ACPIFilterIrpSetPower @ 0x1C002A600
 * Callers:
 *     <none>
 * Callees:
 *     ACPIInternalGetDeviceExtension @ 0x1C0004B60 (ACPIInternalGetDeviceExtension.c)
 *     ACPIInitDereferenceDeviceExtensionUnlocked @ 0x1C000D7F4 (ACPIInitDereferenceDeviceExtensionUnlocked.c)
 *     ACPIInitReferenceDeviceExtension @ 0x1C000D860 (ACPIInitReferenceDeviceExtension.c)
 *     AMLIDereferenceHandleEx @ 0x1C0013578 (AMLIDereferenceHandleEx.c)
 *     AMLIGetNamedChild @ 0x1C0013EA0 (AMLIGetNamedChild.c)
 *     ACPIDeviceIrpDeviceRequest @ 0x1C0028D38 (ACPIDeviceIrpDeviceRequest.c)
 *     ACPIBuildRegRequest @ 0x1C00453A4 (ACPIBuildRegRequest.c)
 *     ACPIDeviceIrpWarmEjectRequest @ 0x1C0049ADC (ACPIDeviceIrpWarmEjectRequest.c)
 *     ACPIDispatchForwardPowerIrp @ 0x1C004C1C0 (ACPIDispatchForwardPowerIrp.c)
 *     ACPIInternalCheckPowerReferences @ 0x1C004FDD4 (ACPIInternalCheckPowerReferences.c)
 */

__int64 __fastcall ACPIFilterIrpSetPower(ULONG_PTR a1, IRP *a2)
{
  __int64 DeviceExtension; // rax
  _IO_STACK_LOCATION *CurrentStackLocation; // rsi
  __int64 v6; // rbx
  __int64 *v7; // rbp
  _IO_STACK_LOCATION *v8; // rax
  _IO_STACK_LOCATION *v9; // rax
  __int64 v10; // rdx
  _QWORD *v12; // rcx
  __int64 v13; // rdx
  _QWORD *v14; // r14
  __int64 v15; // rsi
  KIRQL v16; // al
  _QWORD *v17; // r12
  _QWORD *v18; // r15
  _QWORD *v19; // rcx
  __int64 v20; // rsi
  KIRQL v21; // al
  KIRQL v22; // r13
  void *v23; // r12
  __int64 (__fastcall *v24)(); // r8
  _QWORD *v26; // [rsp+68h] [rbp+10h]

  DeviceExtension = ACPIInternalGetDeviceExtension(a1);
  CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
  v6 = DeviceExtension;
  v7 = 0LL;
  CurrentStackLocation->Control |= 1u;
  if ( CurrentStackLocation->Parameters.Create.Options )
  {
    if ( (*(_QWORD *)(DeviceExtension + 8) & 0x8000000000000LL) == 0 )
      v7 = AMLIGetNamedChild(*(__int64 **)(DeviceExtension + 712), 1195725407);
    if ( CurrentStackLocation->Parameters.Read.ByteOffset.LowPart == 1 )
    {
      *(_BYTE *)(v6 + 508) = 1;
      a2->IoStatus.Status = 0;
      _InterlockedAdd((volatile signed __int32 *)(v6 + 680), 1u);
      v12 = *(_QWORD **)(v6 + 368);
      while ( v12 )
      {
        v13 = v12[1];
        v12 = (_QWORD *)*v12;
        if ( (*(_DWORD *)(v13 + 16) & 0x810LL) == 0 )
          _InterlockedOr64((volatile signed __int64 *)(v13 + 16), 0x800uLL);
      }
      v14 = *(_QWORD **)(v6 + 368);
      while ( v14 )
      {
        v15 = v14[1];
        v14 = (_QWORD *)*v14;
        if ( (*(_BYTE *)(v15 + 16) & 0x10) == 0 )
        {
          v16 = KeAcquireSpinLockRaiseToDpc(&AcpiPowerLock);
          v17 = (_QWORD *)(v15 + 48);
          v18 = *(_QWORD **)(v15 + 48);
          v26 = (_QWORD *)(v15 + 48);
          if ( v18 != (_QWORD *)(v15 + 48) )
          {
            do
            {
              v19 = v18 - 5;
              v18 = (_QWORD *)*v18;
              v20 = v19[4];
              if ( *((_DWORD *)v19 + 5) == 1 )
              {
                KeReleaseSpinLock(&AcpiPowerLock, v16);
                v21 = KeAcquireSpinLockRaiseToDpc(&AcpiDeviceTreeLock);
                v22 = v21;
                if ( !v20 || v20 == v6 || (unsigned int)(*(_DWORD *)(v20 + 320) - 2) > 1 || *(_BYTE *)(v20 + 508) )
                {
                  KeReleaseSpinLock(&AcpiDeviceTreeLock, v21);
                }
                else
                {
                  v23 = *(void **)(v20 + 736);
                  if ( v23 )
                  {
                    ACPIInitReferenceDeviceExtension(v20);
                    ObfReferenceObject(v23);
                    KeReleaseSpinLock(&AcpiDeviceTreeLock, v22);
                    if ( (unsigned __int8)ACPIInternalCheckPowerReferences(v20) == 1 )
                    {
                      *(_BYTE *)(v20 + 508) = 1;
                      PoFxNotifySurprisePowerOn(v23);
                    }
                    ObfDereferenceObject(v23);
                    ACPIInitDereferenceDeviceExtensionUnlocked((volatile signed __int32 *)v20);
                  }
                  else
                  {
                    KeReleaseSpinLock(&AcpiDeviceTreeLock, v21);
                  }
                  v17 = v26;
                }
                v16 = KeAcquireSpinLockRaiseToDpc(&AcpiPowerLock);
              }
            }
            while ( v18 != v17 );
          }
          KeReleaseSpinLock(&AcpiPowerLock, v16);
        }
      }
      v24 = (__int64 (__fastcall *)())&ACPIDeviceIrpForwardRequest;
      if ( v7 )
        v24 = (__int64 (__fastcall *)())&ACPIDeviceIrpDelayedDeviceOnRequest;
      ACPIDeviceIrpDeviceRequest(a1, (__int64)a2, v24);
    }
    else if ( v7 )
    {
      a2->IoStatus.Status = 0;
      _InterlockedAdd((volatile signed __int32 *)(v6 + 680), 1u);
      ACPIBuildRegRequest(a1, a2, &ACPIDeviceIrpDelayedDeviceOffRequest);
    }
    else
    {
      _InterlockedAdd((volatile signed __int32 *)(v6 + 680), 1u);
      v8 = a2->Tail.Overlay.CurrentStackLocation;
      *(_OWORD *)&v8[-1].MajorFunction = *(_OWORD *)&v8->MajorFunction;
      *(_OWORD *)&v8[-1].Parameters.QueryFile.FileInformationClass = *(_OWORD *)&v8->Parameters.QueryFile.FileInformationClass;
      *(_OWORD *)(&v8[-1].Parameters.QueryDeviceRelations + 6) = *(_OWORD *)(&v8->Parameters.QueryDeviceRelations + 6);
      v8[-1].FileObject = v8->FileObject;
      v8[-1].Control = 0;
      v9 = a2->Tail.Overlay.CurrentStackLocation;
      v9[-1].CompletionRoutine = (int (__fastcall *)(_DEVICE_OBJECT *, _IRP *, void *))ACPIDeviceIrpDeviceFilterRequest;
      v9[-1].Context = ACPIDeviceIrpCompleteRequest;
      v9[-1].Control = -32;
      PoCallDriver(*(PDEVICE_OBJECT *)(v6 + 728), a2);
    }
    if ( v7 )
      AMLIDereferenceHandleEx((volatile signed __int32 *)v7, v10);
  }
  else if ( CurrentStackLocation->Parameters.Create.EaLength == 7 )
  {
    a2->IoStatus.Status = 0;
    _InterlockedAdd((volatile signed __int32 *)(DeviceExtension + 680), 1u);
    ACPIDeviceIrpWarmEjectRequest(DeviceExtension, a2, &ACPIDeviceIrpForwardRequest, 0LL);
  }
  else
  {
    ACPIDispatchForwardPowerIrp(a1, a2);
  }
  return 259LL;
}
