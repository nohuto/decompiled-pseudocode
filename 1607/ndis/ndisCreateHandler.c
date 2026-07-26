/*
 * XREFs of ndisCreateHandler @ 0x1C000CEDC
 * Callers:
 *     ndisCreateIrpHandler @ 0x1C000D3F0 (ndisCreateIrpHandler.c)
 *     NdisWdfCreateIrpHandler @ 0x1C005F610 (NdisWdfCreateIrpHandler.c)
 * Callees:
 *     ndisDereferenceMiniport @ 0x1C000CD90 (ndisDereferenceMiniport.c)
 *     ndisReferenceMiniport @ 0x1C000D160 (ndisReferenceMiniport.c)
 *     ndisIsCompartmentAccessibleByClient @ 0x1C000D2AC (ndisIsCompartmentAccessibleByClient.c)
 *     ndisGetNsiClientInfo @ 0x1C000D2C0 (ndisGetNsiClientInfo.c)
 *     __security_check_cookie @ 0x1C0026780 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0027180 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_qq @ 0x1C003C398 (WPP_SF_qq.c)
 *     WPP_SF_qqd @ 0x1C0050E4C (WPP_SF_qqd.c)
 *     ndisDereferencePackage @ 0x1C009B138 (ndisDereferencePackage.c)
 *     ndisReferencePackage @ 0x1C009B308 (ndisReferencePackage.c)
 *     ?ndisIsSetupDevice@@YA_NPEBU_DEVICE_OBJECT@@@Z @ 0x1C009B98C (-ndisIsSetupDevice@@YA_NPEBU_DEVICE_OBJECT@@@Z.c)
 *     NdisWaitEvent @ 0x1C009B9B0 (NdisWaitEvent.c)
 *     ndisCheckAccess @ 0x1C009BA00 (ndisCheckAccess.c)
 *     ndisDummyHandler @ 0x1C009C11C (ndisDummyHandler.c)
 *     ?ndisSetupDeviceCreateIrp@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@@Z @ 0x1C00E2588 (-ndisSetupDeviceCreateIrp@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@@Z.c)
 */

int __fastcall ndisCreateHandler(struct _DEVICE_OBJECT *a1, __int64 a2, struct _IRP *a3)
{
  _QWORD *v4; // r14
  _IO_STACK_LOCATION *CurrentStackLocation; // rsi
  struct _DEVICE_OBJECT *v8; // rcx
  __int64 v9; // r8
  char IsCompartmentAccessibleByClient; // al
  _IRP *v11; // rcx
  KIRQL v12; // dl
  unsigned int v13; // eax
  __int64 v14; // rdx
  char v15; // r12
  KIRQL v16; // dl
  KSPIN_LOCK *v17; // rcx
  _QWORD *PoolWithTag; // rax
  _FILE_OBJECT *FileObject; // rax
  int v20; // esi
  __int64 v21; // rax
  unsigned int v23; // eax
  int v24; // ebx
  __int64 v25; // rcx
  KIRQL v26; // al
  KIRQL v27; // al
  KIRQL v28; // al
  char v29; // [rsp+30h] [rbp-68h]
  char v30; // [rsp+31h] [rbp-67h]
  char v31; // [rsp+32h] [rbp-66h]
  char v32; // [rsp+33h] [rbp-65h]
  char v33; // [rsp+34h] [rbp-64h]
  _BYTE v34[24]; // [rsp+38h] [rbp-60h] BYREF

  v4 = 0LL;
  v32 = 0;
  v30 = 0;
  v31 = 0;
  if ( (unsigned __int8)byte_1C00895D2 >= 4u )
    WPP_SF_qq(15LL, &WPP_8ce524521b613c0e10407cfbf52a0b71_Traceguids, a1, a3);
  ndisGetNsiClientInfo(v34);
  CurrentStackLocation = a3->Tail.Overlay.CurrentStackLocation;
  if ( !CurrentStackLocation->FileObject )
  {
    v24 = -1073741823;
    v11 = a3;
LABEL_27:
    a3->IoStatus.Status = v24;
    IofCompleteRequest(v11, 2);
    return v24;
  }
  if ( ndisIsSetupDevice(a1) )
    return ndisSetupDeviceCreateIrp(v8, a3);
  if ( *(_BYTE *)a2 != 17 )
    return ndisDummyHandler(a1, a2, a3);
  LOBYTE(v9) = 1;
  IsCompartmentAccessibleByClient = ndisIsCompartmentAccessibleByClient(
                                      *(_QWORD *)(*(_QWORD *)(a2 + 4096) + 1384LL),
                                      v34,
                                      v9);
  v11 = a3;
  if ( !IsCompartmentAccessibleByClient )
  {
    v24 = -1073741772;
    goto LABEL_27;
  }
  v33 = ndisCheckAccess(a3, CurrentStackLocation, *(_QWORD *)(a2 + 3840));
  ndisReferencePackage(&ndisPkgs);
  v12 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a2 + 4496));
  if ( v33 )
  {
    v23 = *(_DWORD *)(a2 + 3808);
    if ( v23 < 0x1000000 )
    {
      v30 = 1;
      *(_DWORD *)(a2 + 3808) = v23 + 1;
      goto LABEL_10;
    }
LABEL_30:
    v20 = -1073741670;
    KeReleaseSpinLock((PKSPIN_LOCK)(a2 + 4496), v12);
    goto LABEL_32;
  }
  v13 = *(_DWORD *)(a2 + 3724);
  if ( v13 >= 0x1000000 )
    goto LABEL_30;
  v31 = 1;
  *(_DWORD *)(a2 + 3724) = v13 + 1;
LABEL_10:
  KeReleaseSpinLock((PKSPIN_LOCK)(a2 + 4496), v12);
  if ( (*(_DWORD *)(a2 + 124) & 0x20100) == 0 )
  {
    NdisWaitEvent((PNDIS_EVENT)(a2 + 3784), 0x32u);
    LOBYTE(v14) = 85;
    v29 = ndisReferenceMiniport(a2, v14);
    v15 = v29;
    if ( v29 )
    {
      v16 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a2 + 96));
      v17 = (KSPIN_LOCK *)(a2 + 96);
      *(_QWORD *)(a2 + 520) = KeGetCurrentThread();
      *(_QWORD *)(a2 + 520) = 0LL;
      *(_DWORD *)(a2 + 1856) = 918306;
      *(_DWORD *)(a2 + 1856) = 0;
      if ( *(_DWORD *)(a2 + 1520) == 2 )
      {
        v20 = -1073676282;
        KeReleaseSpinLock(v17, v16);
      }
      else
      {
        ++*(_DWORD *)(a2 + 1800);
        v32 = 1;
        KeReleaseSpinLock(v17, v16);
        PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x20uLL, 0x636F444Eu);
        v4 = PoolWithTag;
        if ( PoolWithTag )
        {
          PoolWithTag[2] = 0LL;
          *PoolWithTag = a1;
          PoolWithTag[1] = a2;
          *((_BYTE *)PoolWithTag + 24) = v33;
          FileObject = CurrentStackLocation->FileObject;
          v20 = 0;
          FileObject->FsContext = v4;
          v21 = *(_QWORD *)(a2 + 1776);
          if ( v21 )
          {
            v4[2] = v21;
          }
          else if ( a3->RequestorMode == 1 )
          {
            v20 = -1073741823;
          }
        }
        else
        {
          v20 = -1073741670;
        }
      }
      v15 = v29;
    }
    else
    {
      v20 = -1073676282;
    }
    goto LABEL_17;
  }
  v20 = -1073741823;
LABEL_32:
  v15 = 0;
LABEL_17:
  ndisDereferencePackage(&ndisPkgs);
  if ( v20 < 0 )
    goto LABEL_42;
  if ( (*(_DWORD *)(a2 + 124) & 0x2000) != 0 )
  {
    v25 = *(_QWORD *)(a2 + 4040);
    if ( v25 )
      (*(void (__fastcall **)(_QWORD))(v25 + 32))(*(_QWORD *)(v25 + 8));
    else
      v20 = -1073741823;
  }
  if ( v20 < 0 )
  {
LABEL_42:
    if ( v30 )
    {
      v26 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a2 + 4496));
      --*(_DWORD *)(a2 + 3808);
      KeReleaseSpinLock((PKSPIN_LOCK)(a2 + 4496), v26);
    }
    if ( v31 )
    {
      v27 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a2 + 4496));
      --*(_DWORD *)(a2 + 3724);
      KeReleaseSpinLock((PKSPIN_LOCK)(a2 + 4496), v27);
    }
    if ( v32 )
    {
      ndisReferencePackage(&ndisPkgs);
      v28 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a2 + 96));
      --*(_DWORD *)(a2 + 1800);
      *(_QWORD *)(a2 + 520) = 0LL;
      *(_DWORD *)(a2 + 1856) = 0;
      KeReleaseSpinLock((PKSPIN_LOCK)(a2 + 96), v28);
      ndisDereferencePackage(&ndisPkgs);
    }
    if ( v15 )
      ndisDereferenceMiniport(a2);
    if ( v4 )
      ExFreePoolWithTag(v4, 0);
  }
  a3->IoStatus.Status = v20;
  IofCompleteRequest(a3, 2);
  if ( (unsigned __int8)byte_1C00895D2 >= 4u )
    WPP_SF_qqd(16LL, &WPP_8ce524521b613c0e10407cfbf52a0b71_Traceguids, a1, a3, v20);
  return v20;
}
