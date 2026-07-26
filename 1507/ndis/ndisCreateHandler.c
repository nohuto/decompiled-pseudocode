/*
 * XREFs of ndisCreateHandler @ 0x1C00086B0
 * Callers:
 *     ndisCreateIrpHandler @ 0x1C0008950 (ndisCreateIrpHandler.c)
 *     NdisWdfCreateIrpHandler @ 0x1C005BA60 (NdisWdfCreateIrpHandler.c)
 * Callees:
 *     ndisDereferenceMiniport @ 0x1C0003280 (ndisDereferenceMiniport.c)
 *     ndisReferenceWithTag @ 0x1C00068E0 (ndisReferenceWithTag.c)
 *     WPP_SF_qq @ 0x1C0022860 (WPP_SF_qq.c)
 *     _guard_dispatch_icall_nop @ 0x1C00236D0 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_qD @ 0x1C003F388 (WPP_SF_qD.c)
 *     WPP_SF_qqd @ 0x1C004BBA8 (WPP_SF_qqd.c)
 *     ?ndisIsSetupDevice@@YA_NPEBU_DEVICE_OBJECT@@@Z @ 0x1C0096504 (-ndisIsSetupDevice@@YA_NPEBU_DEVICE_OBJECT@@@Z.c)
 *     ndisReferencePackage @ 0x1C0097740 (ndisReferencePackage.c)
 *     ndisDereferencePackage @ 0x1C0097790 (ndisDereferencePackage.c)
 *     NdisWaitEvent @ 0x1C0098DA0 (NdisWaitEvent.c)
 *     ndisCheckAccess @ 0x1C0098DF0 (ndisCheckAccess.c)
 *     ndisDummyHandler @ 0x1C00D09F8 (ndisDummyHandler.c)
 *     ?ndisSetupDeviceCreateIrp@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@@Z @ 0x1C00E29A4 (-ndisSetupDeviceCreateIrp@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@@Z.c)
 */

int __fastcall ndisCreateHandler(struct _DEVICE_OBJECT *a1, __int64 a2, _IRP *a3)
{
  _QWORD *v4; // r15
  char v5; // r12
  _IO_STACK_LOCATION *CurrentStackLocation; // rsi
  struct _DEVICE_OBJECT *v9; // rcx
  KIRQL v10; // dl
  unsigned int v11; // eax
  KIRQL v12; // r12
  struct _NDIS_REFCOUNT_BLOCK *v13; // rcx
  KIRQL v15; // al
  KSPIN_LOCK *v16; // rcx
  _QWORD *PoolWithTag; // rax
  _FILE_OBJECT *FileObject; // rax
  int v19; // esi
  __int64 v20; // rax
  unsigned int v22; // ecx
  __int64 v23; // rcx
  KIRQL v24; // al
  KIRQL v25; // al
  KIRQL v26; // al
  char v27; // [rsp+30h] [rbp-48h]
  char v28; // [rsp+31h] [rbp-47h]
  char v29; // [rsp+32h] [rbp-46h]
  char v30; // [rsp+90h] [rbp+18h]
  char v31; // [rsp+98h] [rbp+20h]

  v4 = 0LL;
  v29 = 0;
  v5 = 0;
  v27 = 0;
  v28 = 0;
  if ( (unsigned __int8)byte_1C0085312 >= 4u )
    WPP_SF_qq(15LL, &WPP_99d55c594fb658073ac0709936c97fa5_Traceguids, a1, a3);
  CurrentStackLocation = a3->Tail.Overlay.CurrentStackLocation;
  if ( !CurrentStackLocation->FileObject )
  {
    a3->IoStatus.Status = -1073741823;
    IofCompleteRequest(a3, 2);
    return -1073741823;
  }
  if ( ndisIsSetupDevice(a1) )
    return ndisSetupDeviceCreateIrp(v9, a3);
  if ( *(_BYTE *)a2 != 17 )
    return ndisDummyHandler(a1, a2, a3);
  v31 = ndisCheckAccess(a3, CurrentStackLocation, *(_QWORD *)(a2 + 3840));
  ndisReferencePackage(&ndisPkgs);
  v10 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a2 + 4496));
  if ( v31 )
  {
    v22 = *(_DWORD *)(a2 + 3808);
    if ( v22 < 0x1000000 )
    {
      v27 = 1;
      *(_DWORD *)(a2 + 3808) = v22 + 1;
LABEL_9:
      KeReleaseSpinLock((PKSPIN_LOCK)(a2 + 4496), v10);
      if ( (*(_DWORD *)(a2 + 124) & 0x20100) != 0 )
      {
        v19 = -1073741823;
      }
      else
      {
        NdisWaitEvent((PNDIS_EVENT)(a2 + 3784), 0x32u);
        v30 = 1;
        v12 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a2 + 4496));
        if ( *(_BYTE *)(a2 + 4508) )
        {
          v30 = 0;
        }
        else
        {
          v13 = *(struct _NDIS_REFCOUNT_BLOCK **)(a2 + 4952);
          if ( v13 )
            ndisReferenceWithTag(v13, 0x53u);
          if ( (*(_DWORD *)(a2 + 4504))++ == -1 )
          {
            *(_DWORD *)(a2 + 4504) = -1;
            v30 = 0;
          }
        }
        if ( (unsigned __int8)byte_1C008531B >= 4u )
          WPP_SF_qD(12LL, &WPP_99d55c594fb658073ac0709936c97fa5_Traceguids, a2, *(unsigned int *)(a2 + 4504));
        KeReleaseSpinLock((PKSPIN_LOCK)(a2 + 4496), v12);
        v5 = v30;
        if ( v30 )
        {
          v15 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a2 + 96));
          v16 = (KSPIN_LOCK *)(a2 + 96);
          *(_QWORD *)(a2 + 520) = KeGetCurrentThread();
          *(_QWORD *)(a2 + 520) = 0LL;
          *(_DWORD *)(a2 + 1856) = 918297;
          *(_DWORD *)(a2 + 1856) = 0;
          if ( *(_DWORD *)(a2 + 1520) == 2 )
          {
            v19 = -1073676282;
            KeReleaseSpinLock(v16, v15);
          }
          else
          {
            ++*(_DWORD *)(a2 + 1800);
            v29 = 1;
            KeReleaseSpinLock(v16, v15);
            PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x20uLL, 0x636F444Eu);
            v4 = PoolWithTag;
            if ( PoolWithTag )
            {
              PoolWithTag[2] = 0LL;
              *PoolWithTag = a1;
              PoolWithTag[1] = a2;
              *((_BYTE *)PoolWithTag + 24) = v31;
              FileObject = CurrentStackLocation->FileObject;
              v19 = 0;
              FileObject->FsContext = v4;
              v20 = *(_QWORD *)(a2 + 1776);
              if ( v20 )
              {
                v4[2] = v20;
              }
              else if ( a3->RequestorMode == 1 )
              {
                v19 = -1073741823;
              }
            }
            else
            {
              v19 = -1073741670;
            }
          }
          v5 = v30;
        }
        else
        {
          v19 = -1073676282;
        }
      }
      goto LABEL_23;
    }
  }
  else
  {
    v11 = *(_DWORD *)(a2 + 3724);
    if ( v11 < 0x1000000 )
    {
      v28 = 1;
      *(_DWORD *)(a2 + 3724) = v11 + 1;
      goto LABEL_9;
    }
  }
  v19 = -1073741670;
  KeReleaseSpinLock((PKSPIN_LOCK)(a2 + 4496), v10);
LABEL_23:
  ndisDereferencePackage(&ndisPkgs);
  if ( v19 < 0 )
    goto LABEL_47;
  if ( (*(_DWORD *)(a2 + 124) & 0x2000) != 0 )
  {
    v23 = *(_QWORD *)(a2 + 4040);
    if ( v23 )
      (*(void (__fastcall **)(_QWORD))(v23 + 32))(*(_QWORD *)(v23 + 8));
    else
      v19 = -1073741823;
  }
  if ( v19 < 0 )
  {
LABEL_47:
    if ( v27 )
    {
      v24 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a2 + 4496));
      --*(_DWORD *)(a2 + 3808);
      KeReleaseSpinLock((PKSPIN_LOCK)(a2 + 4496), v24);
    }
    if ( v28 )
    {
      v25 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a2 + 4496));
      --*(_DWORD *)(a2 + 3724);
      KeReleaseSpinLock((PKSPIN_LOCK)(a2 + 4496), v25);
    }
    if ( v29 )
    {
      ndisReferencePackage(&ndisPkgs);
      v26 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a2 + 96));
      --*(_DWORD *)(a2 + 1800);
      *(_QWORD *)(a2 + 520) = 0LL;
      *(_DWORD *)(a2 + 1856) = 0;
      KeReleaseSpinLock((PKSPIN_LOCK)(a2 + 96), v26);
      ndisDereferencePackage(&ndisPkgs);
    }
    if ( v5 )
      ndisDereferenceMiniport(a2, 0x53u);
    if ( v4 )
      ExFreePoolWithTag(v4, 0);
  }
  a3->IoStatus.Status = v19;
  IofCompleteRequest(a3, 2);
  if ( (unsigned __int8)byte_1C0085312 >= 4u )
    WPP_SF_qqd(16LL, &WPP_99d55c594fb658073ac0709936c97fa5_Traceguids, a1, a3, v19);
  return v19;
}
