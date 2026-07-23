/*
 * XREFs of PiSwProcessRemove @ 0x140483A18
 * Callers:
 *     PiSwPdoPnPDispatch @ 0x1403F0544 (PiSwPdoPnPDispatch.c)
 *     PiSwProcessParentRemoveIrp @ 0x140484AEC (PiSwProcessParentRemoveIrp.c)
 * Callees:
 *     IofCompleteRequest @ 0x1400530E0 (IofCompleteRequest.c)
 *     ObfDereferenceObject @ 0x14006A780 (ObfDereferenceObject.c)
 *     IoInvalidateDeviceRelations @ 0x140085F2C (IoInvalidateDeviceRelations.c)
 *     RtlDeleteElementGenericTableAvl @ 0x1400C1E74 (RtlDeleteElementGenericTableAvl.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     PnpDeviceObjectFromDeviceInstance @ 0x1403F38F8 (PnpDeviceObjectFromDeviceInstance.c)
 *     PiSwDeviceInterfacesUpdateState @ 0x140483938 (PiSwDeviceInterfacesUpdateState.c)
 *     PiSwMakePdoInactive @ 0x140483A00 (PiSwMakePdoInactive.c)
 *     PiSwUnassociateDeviceObject @ 0x140483D1C (PiSwUnassociateDeviceObject.c)
 *     PiSwBusRelationRemove @ 0x140483D54 (PiSwBusRelationRemove.c)
 *     PiSwPnPInfoFree @ 0x140483E58 (PiSwPnPInfoFree.c)
 *     PiSwDeviceDereference @ 0x1404869A8 (PiSwDeviceDereference.c)
 *     PiSwFreeInterfaceList @ 0x1404878CC (PiSwFreeInterfaceList.c)
 *     PiSwBusRelationAdd @ 0x140487F84 (PiSwBusRelationAdd.c)
 *     PnpFreeDevPropertyArray @ 0x1404E56C0 (PnpFreeDevPropertyArray.c)
 *     PiSwQueuedCreateInfoFree @ 0x1406459FC (PiSwQueuedCreateInfoFree.c)
 */

__int64 __fastcall PiSwProcessRemove(__int64 a1, char a2)
{
  __int64 v2; // rbx
  __int64 result; // rax
  void *v6; // rcx
  __int64 v7; // rax
  __int64 v8; // rcx
  __int64 v9; // rax
  __int64 v10; // rdx
  void *v11; // rcx
  __int64 v12; // r9
  __int64 v13; // rdx
  int v14; // edx
  struct _DEVICE_OBJECT *v15; // rax
  struct _DEVICE_OBJECT *v16; // rbx
  __int64 v17; // rcx
  __int64 Buffer; // [rsp+30h] [rbp+10h] BYREF

  v2 = *(_QWORD *)(a1 + 64);
  Buffer = *(_QWORD *)v2;
  result = *(unsigned int *)(v2 + 8);
  if ( (result & 0x20) == 0 )
  {
    if ( (result & 1) != 0 )
    {
      *(_DWORD *)(v2 + 8) = result & 0xFFFFFFFE;
      result = PiSwDeviceInterfacesUpdateState(Buffer, 0);
    }
    if ( !a2 )
    {
      PiSwMakePdoInactive(a1);
      if ( (*(_DWORD *)(v2 + 8) & 8) == 0 )
        PiSwUnassociateDeviceObject(a1);
      result = *(unsigned int *)(Buffer + 4);
      if ( (result & 2) != 0 )
      {
        PiSwBusRelationRemove();
        result = Buffer;
        if ( *(_QWORD *)(Buffer + 88) )
        {
          v6 = *(void **)(Buffer + 80);
          if ( v6 )
          {
            ExFreePoolWithTag(v6, 0x57706E50u);
            v7 = Buffer;
            *(_QWORD *)(Buffer + 72) = 0LL;
            *(_QWORD *)(v7 + 80) = 0LL;
            result = Buffer;
          }
          PiSwPnPInfoFree(result + 24);
          v8 = Buffer;
          v9 = *(_QWORD *)(Buffer + 88);
          *(_OWORD *)(Buffer + 24) = *(_OWORD *)(v9 + 8);
          *(_OWORD *)(v8 + 40) = *(_OWORD *)(v9 + 24);
          *(_OWORD *)(v8 + 56) = *(_OWORD *)(v9 + 40);
          memset((void *)(*(_QWORD *)(Buffer + 88) + 8LL), 0, 0x30uLL);
          v10 = Buffer;
          v11 = *(void **)(Buffer + 152);
          if ( v11 )
          {
            ExFreePoolWithTag(v11, 0x57706E50u);
            v10 = Buffer;
          }
          *(_DWORD *)(v10 + 160) = *(_DWORD *)(*(_QWORD *)(v10 + 88) + 64LL);
          *(_QWORD *)(Buffer + 152) = *(_QWORD *)(*(_QWORD *)(Buffer + 88) + 56LL);
          *(_DWORD *)(*(_QWORD *)(Buffer + 88) + 64LL) = 0;
          *(_QWORD *)(*(_QWORD *)(Buffer + 88) + 56LL) = 0LL;
          v12 = Buffer;
          v13 = *(_QWORD *)(Buffer + 168);
          if ( v13 )
          {
            PnpFreeDevPropertyArray(*(unsigned int *)(Buffer + 176), v13, 1466986064LL);
            v12 = Buffer;
          }
          *(_DWORD *)(v12 + 176) = *(_DWORD *)(*(_QWORD *)(v12 + 88) + 80LL);
          *(_QWORD *)(Buffer + 168) = *(_QWORD *)(*(_QWORD *)(Buffer + 88) + 72LL);
          *(_DWORD *)(*(_QWORD *)(Buffer + 88) + 80LL) = 0;
          *(_QWORD *)(*(_QWORD *)(Buffer + 88) + 72LL) = 0LL;
          PiSwFreeInterfaceList(Buffer + 184);
          v14 = PiSwBusRelationAdd(**(_QWORD **)(Buffer + 88));
          if ( v14 < 0 )
          {
            v17 = *(_QWORD *)(Buffer + 144);
            if ( v17 && _InterlockedExchange64((volatile __int64 *)(v17 + 104), 0LL) )
            {
              *(_QWORD *)(*(_QWORD *)(Buffer + 144) + 56LL) = 0LL;
              *(_DWORD *)(*(_QWORD *)(Buffer + 144) + 48LL) = v14;
              IofCompleteRequest(*(PIRP *)(Buffer + 144), 0);
              *(_QWORD *)(Buffer + 144) = 0LL;
            }
          }
          else
          {
            *(_DWORD *)(Buffer + 4) &= ~2u;
            v15 = (struct _DEVICE_OBJECT *)PnpDeviceObjectFromDeviceInstance(*(_QWORD *)(Buffer + 112));
            v16 = v15;
            if ( v15 )
            {
              IoInvalidateDeviceRelations(v15, SingleBusRelations);
              ObfDereferenceObject(v16);
            }
          }
          PiSwQueuedCreateInfoFree(*(_QWORD *)(Buffer + 88));
          *(_QWORD *)(Buffer + 88) = 0LL;
          result = Buffer;
        }
        if ( !*(_QWORD *)(result + 112) )
        {
          RtlDeleteElementGenericTableAvl(&PiSwDeviceInstanceTable, &Buffer);
          return PiSwDeviceDereference(Buffer);
        }
      }
    }
  }
  return result;
}
