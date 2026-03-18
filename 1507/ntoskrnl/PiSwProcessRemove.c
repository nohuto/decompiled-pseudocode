/*
 * XREFs of PiSwProcessRemove @ 0x140539C30
 * Callers:
 *     PiSwPdoPnPDispatch @ 0x14045ADD4 (PiSwPdoPnPDispatch.c)
 *     PiSwProcessParentRemoveIrp @ 0x1405386E4 (PiSwProcessParentRemoveIrp.c)
 * Callees:
 *     RtlDeleteElementGenericTableAvl @ 0x140018004 (RtlDeleteElementGenericTableAvl.c)
 *     IoInvalidateDeviceRelations @ 0x140026498 (IoInvalidateDeviceRelations.c)
 *     IofCompleteRequest @ 0x140048F70 (IofCompleteRequest.c)
 *     ObfDereferenceObject @ 0x14004ED50 (ObfDereferenceObject.c)
 *     memset @ 0x140195A80 (memset.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     PnpFreeDevPropertyArray @ 0x14043E844 (PnpFreeDevPropertyArray.c)
 *     PiSwDeviceInterfacesUpdateState @ 0x14045B774 (PiSwDeviceInterfacesUpdateState.c)
 *     PiSwFreeInterfaceList @ 0x14045B83C (PiSwFreeInterfaceList.c)
 *     PiSwBusRelationAdd @ 0x14045BB44 (PiSwBusRelationAdd.c)
 *     PnpDeviceObjectFromDeviceInstance @ 0x1404E1F9C (PnpDeviceObjectFromDeviceInstance.c)
 *     PiSwUnassociateDeviceObject @ 0x140539D20 (PiSwUnassociateDeviceObject.c)
 *     PiSwBusRelationRemove @ 0x140539D58 (PiSwBusRelationRemove.c)
 *     PiSwDeviceDereference @ 0x140539DD0 (PiSwDeviceDereference.c)
 *     PiSwPnPInfoFree @ 0x140539EAC (PiSwPnPInfoFree.c)
 *     PiSwMakePdoInactive @ 0x14053A1C0 (PiSwMakePdoInactive.c)
 *     PiSwQueuedCreateInfoFree @ 0x1406912C0 (PiSwQueuedCreateInfoFree.c)
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
  char *v13; // rdx
  int v14; // eax
  __int64 v15; // r8
  __int64 v16; // r9
  struct _DEVICE_OBJECT *v17; // rax
  struct _DEVICE_OBJECT *v18; // rbx
  __int64 v19; // rcx
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
        *(_DWORD *)(Buffer + 4) = result & 0xFFFFFFFD;
        PiSwBusRelationRemove(Buffer);
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
          *(_QWORD *)(v10 + 152) = *(_QWORD *)(*(_QWORD *)(v10 + 88) + 56LL);
          *(_QWORD *)(*(_QWORD *)(Buffer + 88) + 56LL) = 0LL;
          v12 = Buffer;
          v13 = *(char **)(Buffer + 168);
          if ( v13 )
          {
            PnpFreeDevPropertyArray(*(_DWORD *)(Buffer + 176), v13, 0x57706E50u);
            v12 = Buffer;
          }
          *(_DWORD *)(v12 + 176) = *(_DWORD *)(*(_QWORD *)(v12 + 88) + 72LL);
          *(_QWORD *)(Buffer + 168) = *(_QWORD *)(*(_QWORD *)(Buffer + 88) + 64LL);
          *(_DWORD *)(*(_QWORD *)(Buffer + 88) + 72LL) = 0;
          *(_QWORD *)(*(_QWORD *)(Buffer + 88) + 64LL) = 0LL;
          PiSwFreeInterfaceList((__int64 **)(Buffer + 184));
          v14 = PiSwBusRelationAdd(**(const wchar_t ***)(Buffer + 88), Buffer);
          if ( v14 < 0 )
          {
            v19 = *(_QWORD *)(Buffer + 144);
            if ( v19 && _InterlockedExchange64((volatile __int64 *)(v19 + 104), 0LL) )
            {
              *(_QWORD *)(*(_QWORD *)(Buffer + 144) + 56LL) = 0LL;
              *(_DWORD *)(*(_QWORD *)(Buffer + 144) + 48LL) = v14;
              IofCompleteRequest(*(PIRP *)(Buffer + 144), 0);
              *(_QWORD *)(Buffer + 144) = 0LL;
            }
          }
          else
          {
            v17 = (struct _DEVICE_OBJECT *)PnpDeviceObjectFromDeviceInstance(
                                             *(_QWORD *)(Buffer + 112),
                                             (unsigned int)v14,
                                             v15,
                                             v16);
            v18 = v17;
            if ( v17 )
            {
              IoInvalidateDeviceRelations(v17, SingleBusRelations);
              ObfDereferenceObject(v18);
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
