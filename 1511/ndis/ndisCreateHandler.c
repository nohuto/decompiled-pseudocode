/*
 * XREFs of ndisCreateHandler @ 0x1C0004CC4
 * Callers:
 *     ndisCreateIrpHandler @ 0x1C0004C20 (ndisCreateIrpHandler.c)
 *     NdisWdfCreateIrpHandler @ 0x1C005B7D0 (NdisWdfCreateIrpHandler.c)
 * Callees:
 *     ndisReferenceMiniport @ 0x1C0004C2C (ndisReferenceMiniport.c)
 *     ndisDereferenceMiniport @ 0x1C000B190 (ndisDereferenceMiniport.c)
 *     WPP_SF_qq @ 0x1C0026510 (WPP_SF_qq.c)
 *     _guard_dispatch_icall_nop @ 0x1C0026BE0 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_qqd @ 0x1C004C3E8 (WPP_SF_qqd.c)
 *     NdisWaitEvent @ 0x1C0093C70 (NdisWaitEvent.c)
 *     ?ndisIsSetupDevice@@YA_NPEBU_DEVICE_OBJECT@@@Z @ 0x1C0093CCC (-ndisIsSetupDevice@@YA_NPEBU_DEVICE_OBJECT@@@Z.c)
 *     ndisCheckAccess @ 0x1C009431C (ndisCheckAccess.c)
 *     ndisReferencePackage @ 0x1C00950DC (ndisReferencePackage.c)
 *     ndisDereferencePackage @ 0x1C009512C (ndisDereferencePackage.c)
 *     ndisDummyHandler @ 0x1C009762C (ndisDummyHandler.c)
 *     ?ndisSetupDeviceCreateIrp@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@@Z @ 0x1C00DC6F4 (-ndisSetupDeviceCreateIrp@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@@Z.c)
 */

int __fastcall ndisCreateHandler(struct _DEVICE_OBJECT *a1, __int64 a2, _IRP *a3)
{
  _QWORD *v4; // r14
  _IO_STACK_LOCATION *CurrentStackLocation; // rsi
  struct _DEVICE_OBJECT *v8; // rcx
  KIRQL v9; // dl
  unsigned int v10; // eax
  char v11; // r12
  KIRQL v12; // dl
  KSPIN_LOCK *v13; // rcx
  _QWORD *PoolWithTag; // rax
  _FILE_OBJECT *FileObject; // rax
  int v16; // esi
  __int64 v17; // rax
  __int64 v18; // rdx
  unsigned int v20; // eax
  __int64 v21; // rcx
  KIRQL v22; // al
  KIRQL v23; // al
  KIRQL v24; // al
  char v25; // [rsp+30h] [rbp-48h]
  char v26; // [rsp+31h] [rbp-47h]
  char v27; // [rsp+32h] [rbp-46h]
  char v28; // [rsp+90h] [rbp+18h]
  char v29; // [rsp+98h] [rbp+20h]

  v4 = 0LL;
  v26 = 0;
  v29 = 0;
  v25 = 0;
  if ( (unsigned __int8)byte_1C0083712 >= 4u )
    WPP_SF_qq(15LL, &WPP_16c28ebb9fa84dacc642b00af20fc2f4_Traceguids, a1, a3);
  CurrentStackLocation = a3->Tail.Overlay.CurrentStackLocation;
  if ( !CurrentStackLocation->FileObject )
  {
    a3->IoStatus.Status = -1073741823;
    IofCompleteRequest(a3, 2);
    return -1073741823;
  }
  if ( ndisIsSetupDevice(a1) )
    return ndisSetupDeviceCreateIrp(v8, a3);
  if ( *(_BYTE *)a2 != 17 )
    return ndisDummyHandler(a1, a2, a3);
  v27 = ndisCheckAccess(a3, CurrentStackLocation, *(_QWORD *)(a2 + 3840));
  ndisReferencePackage(&ndisPkgs);
  v9 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a2 + 4496));
  if ( v27 )
  {
    v20 = *(_DWORD *)(a2 + 3808);
    if ( v20 < 0x1000000 )
    {
      v29 = 1;
      *(_DWORD *)(a2 + 3808) = v20 + 1;
      goto LABEL_9;
    }
LABEL_27:
    v16 = -1073741670;
    KeReleaseSpinLock((PKSPIN_LOCK)(a2 + 4496), v9);
    goto LABEL_29;
  }
  v10 = *(_DWORD *)(a2 + 3724);
  if ( v10 >= 0x1000000 )
    goto LABEL_27;
  v25 = 1;
  *(_DWORD *)(a2 + 3724) = v10 + 1;
LABEL_9:
  KeReleaseSpinLock((PKSPIN_LOCK)(a2 + 4496), v9);
  if ( (*(_DWORD *)(a2 + 124) & 0x20100) == 0 )
  {
    NdisWaitEvent((PNDIS_EVENT)(a2 + 3784), 0x32u);
    v28 = ndisReferenceMiniport(a2);
    v11 = v28;
    if ( v28 )
    {
      v12 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a2 + 96));
      v13 = (KSPIN_LOCK *)(a2 + 96);
      *(_QWORD *)(a2 + 520) = KeGetCurrentThread();
      *(_QWORD *)(a2 + 520) = 0LL;
      *(_DWORD *)(a2 + 1856) = 918297;
      *(_DWORD *)(a2 + 1856) = 0;
      if ( *(_DWORD *)(a2 + 1520) == 2 )
      {
        v16 = -1073676282;
        KeReleaseSpinLock(v13, v12);
      }
      else
      {
        ++*(_DWORD *)(a2 + 1800);
        v26 = 1;
        KeReleaseSpinLock(v13, v12);
        PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x20uLL, 0x636F444Eu);
        v4 = PoolWithTag;
        if ( PoolWithTag )
        {
          PoolWithTag[2] = 0LL;
          *PoolWithTag = a1;
          PoolWithTag[1] = a2;
          *((_BYTE *)PoolWithTag + 24) = v27;
          FileObject = CurrentStackLocation->FileObject;
          v16 = 0;
          FileObject->FsContext = v4;
          v17 = *(_QWORD *)(a2 + 1776);
          if ( v17 )
          {
            v4[2] = v17;
          }
          else if ( a3->RequestorMode == 1 )
          {
            v16 = -1073741823;
          }
        }
        else
        {
          v16 = -1073741670;
        }
      }
      v11 = v28;
    }
    else
    {
      v16 = -1073676282;
    }
    goto LABEL_16;
  }
  v16 = -1073741823;
LABEL_29:
  v11 = 0;
LABEL_16:
  ndisDereferencePackage(&ndisPkgs);
  if ( v16 < 0 )
    goto LABEL_39;
  if ( (*(_DWORD *)(a2 + 124) & 0x2000) != 0 )
  {
    v21 = *(_QWORD *)(a2 + 4040);
    if ( v21 )
      (*(void (__fastcall **)(_QWORD))(v21 + 32))(*(_QWORD *)(v21 + 8));
    else
      v16 = -1073741823;
  }
  if ( v16 < 0 )
  {
LABEL_39:
    if ( v29 )
    {
      v22 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a2 + 4496));
      --*(_DWORD *)(a2 + 3808);
      KeReleaseSpinLock((PKSPIN_LOCK)(a2 + 4496), v22);
    }
    if ( v25 )
    {
      v23 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a2 + 4496));
      --*(_DWORD *)(a2 + 3724);
      KeReleaseSpinLock((PKSPIN_LOCK)(a2 + 4496), v23);
    }
    if ( v26 )
    {
      ndisReferencePackage(&ndisPkgs);
      v24 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a2 + 96));
      --*(_DWORD *)(a2 + 1800);
      *(_QWORD *)(a2 + 520) = 0LL;
      *(_DWORD *)(a2 + 1856) = 0;
      KeReleaseSpinLock((PKSPIN_LOCK)(a2 + 96), v24);
      ndisDereferencePackage(&ndisPkgs);
    }
    if ( v11 )
    {
      LOBYTE(v18) = 83;
      ndisDereferenceMiniport(a2, v18);
    }
    if ( v4 )
      ExFreePoolWithTag(v4, 0);
  }
  a3->IoStatus.Status = v16;
  IofCompleteRequest(a3, 2);
  if ( (unsigned __int8)byte_1C0083712 >= 4u )
    WPP_SF_qqd(16LL, &WPP_16c28ebb9fa84dacc642b00af20fc2f4_Traceguids, a1, a3, v16);
  return v16;
}
