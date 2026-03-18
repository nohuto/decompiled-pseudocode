/*
 * XREFs of ACPIFilterIrpSetPower @ 0x1C0022F20
 * Callers:
 *     <none>
 * Callees:
 *     ACPIInternalGetDeviceExtension @ 0x1C0001538 (ACPIInternalGetDeviceExtension.c)
 *     ACPIInitDereferenceDeviceExtensionUnlocked @ 0x1C0008968 (ACPIInitDereferenceDeviceExtensionUnlocked.c)
 *     ACPIInitReferenceDeviceExtension @ 0x1C00089D4 (ACPIInitReferenceDeviceExtension.c)
 *     AMLIDereferenceHandleEx @ 0x1C000C960 (AMLIDereferenceHandleEx.c)
 *     AMLIGetNamedChild @ 0x1C000D460 (AMLIGetNamedChild.c)
 *     ACPIDeviceIrpDeviceRequest @ 0x1C0021D78 (ACPIDeviceIrpDeviceRequest.c)
 *     ACPIBuildRegRequest @ 0x1C00356E4 (ACPIBuildRegRequest.c)
 *     ACPIDeviceIrpWarmEjectRequest @ 0x1C0037F50 (ACPIDeviceIrpWarmEjectRequest.c)
 *     ACPIDispatchForwardPowerIrp @ 0x1C0039600 (ACPIDispatchForwardPowerIrp.c)
 *     ACPIInternalCheckPowerReferences @ 0x1C003C7E8 (ACPIInternalCheckPowerReferences.c)
 */

__int64 __fastcall ACPIFilterIrpSetPower(ULONG_PTR a1, IRP *a2)
{
  __int64 DeviceExtension; // rax
  _IO_STACK_LOCATION *CurrentStackLocation; // rsi
  __int64 v6; // rbx
  volatile signed __int32 *v7; // rbp
  _IO_STACK_LOCATION *v8; // rax
  _IO_STACK_LOCATION *v9; // rax
  _QWORD *v11; // rcx
  __int64 v12; // rdx
  _QWORD *v13; // r14
  __int64 v14; // rsi
  KIRQL v15; // al
  _QWORD *v16; // r12
  _QWORD *v17; // r15
  _QWORD *v18; // rcx
  __int64 v19; // rsi
  KIRQL v20; // al
  KIRQL v21; // r13
  void *v22; // r12
  __int64 (__fastcall *v23)(); // r8
  _QWORD *v25; // [rsp+68h] [rbp+10h]

  DeviceExtension = ACPIInternalGetDeviceExtension(a1);
  CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
  v6 = DeviceExtension;
  v7 = 0LL;
  CurrentStackLocation->Control |= 1u;
  if ( CurrentStackLocation->Parameters.Create.Options )
  {
    if ( (*(_QWORD *)DeviceExtension & 0x8000000000000LL) == 0 )
      v7 = (volatile signed __int32 *)AMLIGetNamedChild(*(_QWORD *)(DeviceExtension + 704), 1195725407);
    if ( CurrentStackLocation->Parameters.Read.ByteOffset.LowPart == 1 )
    {
      *(_BYTE *)(v6 + 500) = 1;
      a2->IoStatus.Status = 0;
      _InterlockedAdd((volatile signed __int32 *)(v6 + 672), 1u);
      v11 = *(_QWORD **)(v6 + 360);
      while ( v11 )
      {
        v12 = v11[1];
        v11 = (_QWORD *)*v11;
        if ( (*(_DWORD *)(v12 + 16) & 0x810LL) == 0 )
          _InterlockedOr64((volatile signed __int64 *)(v12 + 16), 0x800uLL);
      }
      v13 = *(_QWORD **)(v6 + 360);
      while ( v13 )
      {
        v14 = v13[1];
        v13 = (_QWORD *)*v13;
        if ( (*(_BYTE *)(v14 + 16) & 0x10) == 0 )
        {
          v15 = KeAcquireSpinLockRaiseToDpc(&AcpiPowerLock);
          v16 = (_QWORD *)(v14 + 48);
          v17 = *(_QWORD **)(v14 + 48);
          v25 = (_QWORD *)(v14 + 48);
          if ( v17 != (_QWORD *)(v14 + 48) )
          {
            do
            {
              v18 = v17 - 5;
              v17 = (_QWORD *)*v17;
              v19 = v18[4];
              if ( *((_DWORD *)v18 + 5) == 1 )
              {
                KeReleaseSpinLock(&AcpiPowerLock, v15);
                v20 = KeAcquireSpinLockRaiseToDpc(&AcpiDeviceTreeLock);
                v21 = v20;
                if ( !v19 || v19 == v6 || (unsigned int)(*(_DWORD *)(v19 + 312) - 2) > 1 || *(_BYTE *)(v19 + 500) )
                {
                  KeReleaseSpinLock(&AcpiDeviceTreeLock, v20);
                }
                else
                {
                  v22 = *(void **)(v19 + 728);
                  if ( v22 )
                  {
                    ACPIInitReferenceDeviceExtension(v19);
                    ObfReferenceObject(v22);
                    KeReleaseSpinLock(&AcpiDeviceTreeLock, v21);
                    if ( (unsigned __int8)ACPIInternalCheckPowerReferences(v19) == 1 )
                    {
                      *(_BYTE *)(v19 + 500) = 1;
                      PoFxNotifySurprisePowerOn(v22);
                    }
                    ObfDereferenceObject(v22);
                    ACPIInitDereferenceDeviceExtensionUnlocked((volatile signed __int32 *)v19);
                  }
                  else
                  {
                    KeReleaseSpinLock(&AcpiDeviceTreeLock, v20);
                  }
                  v16 = v25;
                }
                v15 = KeAcquireSpinLockRaiseToDpc(&AcpiPowerLock);
              }
            }
            while ( v17 != v16 );
          }
          KeReleaseSpinLock(&AcpiPowerLock, v15);
        }
      }
      v23 = (__int64 (__fastcall *)())&ACPIDeviceIrpForwardRequest;
      if ( v7 )
        v23 = (__int64 (__fastcall *)())&ACPIDeviceIrpDelayedDeviceOnRequest;
      ACPIDeviceIrpDeviceRequest(a1, (__int64)a2, v23);
    }
    else if ( v7 )
    {
      a2->IoStatus.Status = 0;
      _InterlockedAdd((volatile signed __int32 *)(v6 + 672), 1u);
      ACPIBuildRegRequest(a1, a2, &ACPIDeviceIrpDelayedDeviceOffRequest);
    }
    else
    {
      _InterlockedAdd((volatile signed __int32 *)(v6 + 672), 1u);
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
      PoCallDriver(*(PDEVICE_OBJECT *)(v6 + 720), a2);
    }
    if ( v7 )
      AMLIDereferenceHandleEx(v7);
  }
  else if ( CurrentStackLocation->Parameters.Create.EaLength == 7 )
  {
    a2->IoStatus.Status = 0;
    _InterlockedAdd((volatile signed __int32 *)(DeviceExtension + 672), 1u);
    ACPIDeviceIrpWarmEjectRequest(DeviceExtension, a2, &ACPIDeviceIrpForwardRequest, 0LL);
  }
  else
  {
    ACPIDispatchForwardPowerIrp(a1, a2);
  }
  return 259LL;
}
