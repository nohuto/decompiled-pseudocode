/*
 * XREFs of PiSwProcessRemove @ 0x140494C74
 * Callers:
 *     PiSwPdoPnPDispatch @ 0x14049479C (PiSwPdoPnPDispatch.c)
 *     PiSwProcessParentRemoveIrp @ 0x140496838 (PiSwProcessParentRemoveIrp.c)
 * Callees:
 *     ObfDereferenceObject @ 0x140042920 (ObfDereferenceObject.c)
 *     IofCompleteRequest @ 0x140084CE0 (IofCompleteRequest.c)
 *     RtlDeleteElementGenericTableAvl @ 0x140090710 (RtlDeleteElementGenericTableAvl.c)
 *     IoInvalidateDeviceRelations @ 0x1400D1570 (IoInvalidateDeviceRelations.c)
 *     memset @ 0x140166CC0 (memset.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 *     PnpFreeDevPropertyArray @ 0x140441B8C (PnpFreeDevPropertyArray.c)
 *     PnpDeviceObjectFromDeviceInstance @ 0x140458C7C (PnpDeviceObjectFromDeviceInstance.c)
 *     PiSwUnassociateDeviceObject @ 0x1404944B8 (PiSwUnassociateDeviceObject.c)
 *     PiSwBusRelationRemove @ 0x1404944F0 (PiSwBusRelationRemove.c)
 *     PiSwDeviceDereference @ 0x140494688 (PiSwDeviceDereference.c)
 *     PiSwDeviceInterfacesUpdateState @ 0x140494BAC (PiSwDeviceInterfacesUpdateState.c)
 *     PiSwFreeInterfaceList @ 0x140494DDC (PiSwFreeInterfaceList.c)
 *     PiSwPnPInfoFree @ 0x140494DF8 (PiSwPnPInfoFree.c)
 *     PiSwMakePdoInactive @ 0x140496820 (PiSwMakePdoInactive.c)
 *     PiSwBusRelationAdd @ 0x1404E4570 (PiSwBusRelationAdd.c)
 *     PiSwQueuedCreateInfoFree @ 0x1406114FC (PiSwQueuedCreateInfoFree.c)
 */

void __fastcall PiSwProcessRemove(__int64 a1, char a2)
{
  char **v2; // rbx
  int v5; // eax
  int v6; // eax
  char *v7; // rax
  void *v8; // rcx
  char *v9; // rax
  char *v10; // rcx
  __int64 v11; // rax
  char *v12; // rdx
  void *v13; // rcx
  char *v14; // r9
  char *v15; // rdx
  int v16; // edx
  struct _DEVICE_OBJECT *v17; // rax
  struct _DEVICE_OBJECT *v18; // rbx
  __int64 v19; // rcx
  char *Buffer; // [rsp+30h] [rbp+10h] BYREF

  v2 = *(char ***)(a1 + 64);
  Buffer = *v2;
  v5 = *((_DWORD *)v2 + 2);
  if ( (v5 & 0x20) == 0 )
  {
    if ( (v5 & 1) != 0 )
    {
      *((_DWORD *)v2 + 2) = v5 & 0xFFFFFFFE;
      PiSwDeviceInterfacesUpdateState((__int64)Buffer, 0);
    }
    if ( !a2 )
    {
      PiSwMakePdoInactive(a1);
      if ( ((_DWORD)v2[1] & 8) == 0 )
        PiSwUnassociateDeviceObject(a1);
      v6 = *((_DWORD *)Buffer + 1);
      if ( (v6 & 2) != 0 )
      {
        *((_DWORD *)Buffer + 1) = v6 & 0xFFFFFFFD;
        PiSwBusRelationRemove(Buffer);
        v7 = Buffer;
        if ( *((_QWORD *)Buffer + 11) )
        {
          v8 = (void *)*((_QWORD *)Buffer + 10);
          if ( v8 )
          {
            ExFreePoolWithTag(v8, 0x57706E50u);
            v9 = Buffer;
            *((_QWORD *)Buffer + 9) = 0LL;
            *((_QWORD *)v9 + 10) = 0LL;
            v7 = Buffer;
          }
          PiSwPnPInfoFree(v7 + 24);
          v10 = Buffer;
          v11 = *((_QWORD *)Buffer + 11);
          *(_OWORD *)(Buffer + 24) = *(_OWORD *)(v11 + 8);
          *(_OWORD *)(v10 + 40) = *(_OWORD *)(v11 + 24);
          *(_OWORD *)(v10 + 56) = *(_OWORD *)(v11 + 40);
          memset((void *)(*((_QWORD *)Buffer + 11) + 8LL), 0, 0x30uLL);
          v12 = Buffer;
          v13 = (void *)*((_QWORD *)Buffer + 19);
          if ( v13 )
          {
            ExFreePoolWithTag(v13, 0x57706E50u);
            v12 = Buffer;
          }
          *((_QWORD *)v12 + 19) = *(_QWORD *)(*((_QWORD *)v12 + 11) + 56LL);
          *(_QWORD *)(*((_QWORD *)Buffer + 11) + 56LL) = 0LL;
          v14 = Buffer;
          v15 = (char *)*((_QWORD *)Buffer + 21);
          if ( v15 )
          {
            PnpFreeDevPropertyArray(*((_DWORD *)Buffer + 44), v15, 0x57706E50u);
            v14 = Buffer;
          }
          *((_DWORD *)v14 + 44) = *(_DWORD *)(*((_QWORD *)v14 + 11) + 72LL);
          *((_QWORD *)Buffer + 21) = *(_QWORD *)(*((_QWORD *)Buffer + 11) + 64LL);
          *(_DWORD *)(*((_QWORD *)Buffer + 11) + 72LL) = 0;
          *(_QWORD *)(*((_QWORD *)Buffer + 11) + 64LL) = 0LL;
          PiSwFreeInterfaceList(Buffer + 184);
          v16 = PiSwBusRelationAdd(**((_QWORD **)Buffer + 11));
          if ( v16 < 0 )
          {
            v19 = *((_QWORD *)Buffer + 18);
            if ( v19 && _InterlockedExchange64((volatile __int64 *)(v19 + 104), 0LL) )
            {
              *(_QWORD *)(*((_QWORD *)Buffer + 18) + 56LL) = 0LL;
              *(_DWORD *)(*((_QWORD *)Buffer + 18) + 48LL) = v16;
              IofCompleteRequest(*((PIRP *)Buffer + 18), 0);
              *((_QWORD *)Buffer + 18) = 0LL;
            }
          }
          else
          {
            v17 = (struct _DEVICE_OBJECT *)PnpDeviceObjectFromDeviceInstance(*((_QWORD *)Buffer + 14));
            v18 = v17;
            if ( v17 )
            {
              IoInvalidateDeviceRelations(v17, SingleBusRelations);
              ObfDereferenceObject(v18);
            }
          }
          PiSwQueuedCreateInfoFree(*((_QWORD *)Buffer + 11));
          *((_QWORD *)Buffer + 11) = 0LL;
          v7 = Buffer;
        }
        if ( !*((_QWORD *)v7 + 14) )
        {
          RtlDeleteElementGenericTableAvl(&PiSwDeviceInstanceTable, &Buffer);
          PiSwDeviceDereference(Buffer);
        }
      }
    }
  }
}
