/*
 * XREFs of ndisDeviceControlHandler @ 0x1C009652C
 * Callers:
 *     ndisDeviceControlIrpHandler @ 0x1C0096520 (ndisDeviceControlIrpHandler.c)
 *     NdisWdfDeviceControlIrpHandler @ 0x1C00D3480 (NdisWdfDeviceControlIrpHandler.c)
 * Callees:
 *     ndisDereferenceMiniportForNsi @ 0x1C00034D8 (ndisDereferenceMiniportForNsi.c)
 *     ndisQuerySetMiniport @ 0x1C00036AC (ndisQuerySetMiniport.c)
 *     ndisReferenceTopMiniportByNameForNsi @ 0x1C0006530 (ndisReferenceTopMiniportByNameForNsi.c)
 *     __security_check_cookie @ 0x1C0022840 (__security_check_cookie.c)
 *     WPP_SF_qq @ 0x1C0022860 (WPP_SF_qq.c)
 *     memmove @ 0x1C0023700 (memmove.c)
 *     memset @ 0x1C0023A40 (memset.c)
 *     ndisMGetLogData @ 0x1C0055934 (ndisMGetLogData.c)
 *     ndisGetPowerInfo @ 0x1C0057830 (ndisGetPowerInfo.c)
 *     ndisIovIoctlInvalidate @ 0x1C00656EC (ndisIovIoctlInvalidate.c)
 *     ndisIovIoctlNotification @ 0x1C00657D8 (ndisIovIoctlNotification.c)
 *     ?ndisGetPdInfo@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@@Z @ 0x1C006C934 (-ndisGetPdInfo@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@@Z.c)
 *     ndisValidOid @ 0x1C00960C8 (ndisValidOid.c)
 *     ndisQueryDeviceOid @ 0x1C0096104 (ndisQueryDeviceOid.c)
 *     ndisQueryStatisticsOids @ 0x1C0096198 (ndisQueryStatisticsOids.c)
 *     NdisMSleep @ 0x1C00AFE00 (NdisMSleep.c)
 *     ndisDummyHandler @ 0x1C00D09F8 (ndisDummyHandler.c)
 *     ndisGetAdapterHardwareInfo @ 0x1C00D0AB4 (ndisGetAdapterHardwareInfo.c)
 *     ndisGetAdapterRssInfo @ 0x1C00D0CA4 (ndisGetAdapterRssInfo.c)
 *     ndisGetHardwareInfo @ 0x1C00D0F10 (ndisGetHardwareInfo.c)
 *     ndisGetPerformanceCounters @ 0x1C00D137C (ndisGetPerformanceCounters.c)
 *     ndisMethodDeviceOid @ 0x1C00D155C (ndisMethodDeviceOid.c)
 *     ndisSetPerfTrackParameters @ 0x1C00D1660 (ndisSetPerfTrackParameters.c)
 *     ndisMiniportFatalError @ 0x1C00D4838 (ndisMiniportFatalError.c)
 *     ndisGetRdmaCapabilities @ 0x1C00D76D4 (ndisGetRdmaCapabilities.c)
 *     ndisIovIoctlDetach @ 0x1C00D9D50 (ndisIovIoctlDetach.c)
 */

__int64 __fastcall ndisDeviceControlHandler(__int64 a1, __int64 a2, _IRP *a3)
{
  char v5; // r14
  void *v6; // r12
  unsigned int v7; // edi
  char v8; // r13
  PVOID v9; // rcx
  signed __int32 v10; // eax
  __int64 v11; // r8
  _IO_STACK_LOCATION *CurrentStackLocation; // rbx
  _FILE_OBJECT *FileObject; // rax
  struct _NDIS_MINIPORT_BLOCK *v14; // r15
  __int64 v15; // rax
  _QWORD *v16; // rcx
  _QWORD *v17; // r10
  unsigned int LowPart; // eax
  unsigned int v19; // eax
  unsigned int v20; // eax
  unsigned int v21; // ebx
  const void *v22; // r12
  unsigned int v23; // ebx
  PVOID v24; // rcx
  PVOID v25; // r12
  _MDL *v26; // rcx
  ULONG v27; // r15d
  _DWORD *v28; // rax
  __int64 v29; // rdx
  unsigned int v30; // r9d
  PVOID v31; // r8
  __int64 v32; // rbx
  unsigned int v33; // eax
  unsigned int v35; // eax
  unsigned int v36; // eax
  unsigned int v37; // eax
  unsigned int v38; // eax
  __int64 v39; // r15
  unsigned int v40; // eax
  _IRP::<unnamed_type_AssociatedIrp> v41; // rbx
  unsigned __int16 Blink; // r8
  unsigned int v43; // ecx
  int MdlAddress_high; // r9d
  __int64 v45; // rax
  __int64 v46; // rcx
  unsigned int v47; // edx
  char *v48; // r12
  unsigned int v49; // edx
  int v50; // eax
  int v51; // ecx
  int v52; // eax
  __int64 v53; // r10
  _MDL *MdlAddress; // rcx
  unsigned int ByteCount; // ebx
  PVOID MappedSystemVa; // rax
  PVOID PoolWithTag; // rax
  __int64 v58; // r15
  unsigned int v59; // eax
  unsigned int v60; // ecx
  unsigned int v61; // r15d
  const void *v62; // r12
  unsigned int v63; // r15d
  __int64 v64; // rax
  __int64 v65; // rax
  unsigned int v66; // eax
  unsigned int v67; // eax
  unsigned int PowerInfo; // eax
  unsigned int Options; // r12d
  _IRP *MasterIrp; // r15
  unsigned int Length; // ebx
  int v72; // ecx
  int v73; // ecx
  unsigned int v74; // eax
  unsigned int v75; // eax
  unsigned int v76; // eax
  unsigned int v77; // eax
  unsigned int v78; // eax
  _DWORD *BugCheckOnFailure; // [rsp+20h] [rbp-E0h]
  SIZE_T Priority; // [rsp+28h] [rbp-D8h]
  char v81; // [rsp+38h] [rbp-C8h]
  unsigned int DeviceOid; // [rsp+50h] [rbp-B0h] BYREF
  int v83[2]; // [rsp+58h] [rbp-A8h]
  PVOID P; // [rsp+60h] [rbp-A0h]
  char v85; // [rsp+68h] [rbp-98h] BYREF
  unsigned int v86; // [rsp+6Ch] [rbp-94h]
  __int64 v87; // [rsp+70h] [rbp-90h] BYREF
  int v88[2]; // [rsp+78h] [rbp-88h]
  void *Src; // [rsp+80h] [rbp-80h]
  __int64 v90; // [rsp+88h] [rbp-78h]
  _QWORD v91[4]; // [rsp+90h] [rbp-70h] BYREF
  _BYTE v92[248]; // [rsp+B0h] [rbp-50h] BYREF

  *(_QWORD *)v83 = a2;
  P = 0LL;
  LODWORD(v87) = 0;
  DeviceOid = -1073741823;
  v5 = 1;
  Src = 0LL;
  v6 = 0LL;
  v85 = 0;
  v7 = 0;
  v8 = 0;
  if ( (unsigned __int8)byte_1C0085312 >= 4u )
    WPP_SF_qq(0x17u, &WPP_99d55c594fb658073ac0709936c97fa5_Traceguids, a2, a3);
  if ( a1 && **(_BYTE **)(a1 + 64) == 23 )
  {
    a3->IoStatus.Status = -1073741637;
    IofCompleteRequest(a3, 0);
    return 3221225659LL;
  }
  v9 = ImageSectionHandle;
  v10 = _InterlockedIncrement((volatile signed __int32 *)&ndisPkgs);
  if ( !ImageSectionHandle )
  {
    if ( v10 == 1 )
    {
      ImageSectionHandle = MmLockPagableDataSection(AddressWithinSection);
      MmUnlockPagableImageSection(ImageSectionHandle);
      v9 = ImageSectionHandle;
    }
    else
    {
      do
      {
        NdisMSleep(0x32u);
        v9 = ImageSectionHandle;
      }
      while ( !ImageSectionHandle );
    }
  }
  MmLockPagableSectionByHandle(v9);
  a3->IoStatus.Information = 0LL;
  CurrentStackLocation = a3->Tail.Overlay.CurrentStackLocation;
  a3->IoStatus.Status = 259;
  FileObject = CurrentStackLocation->FileObject;
  if ( FileObject )
  {
    if ( **(_BYTE **)v83 == 17 )
    {
      *(_QWORD *)v88 = FileObject->FsContext;
      v14 = *(struct _NDIS_MINIPORT_BLOCK **)v83;
      v15 = ndisReferenceTopMiniportByNameForNsi(*(__int64 *)v83, 0, v11, 0, 0, 0x54u);
      v90 = v15;
      if ( v15 )
      {
        *(_QWORD *)v83 = v15;
        v14 = (struct _NDIS_MINIPORT_BLOCK *)v15;
        memset(v91, 0, sizeof(v91));
        v16 = *(_QWORD **)v88;
        v17 = v91;
        *(_QWORD *)v88 = v91;
        v91[1] = v14;
        v91[2] = v14->OidList;
        LOBYTE(v91[3]) = *((_BYTE *)v16 + 24);
        v91[0] = *v16;
      }
      else
      {
        v17 = *(_QWORD **)v88;
      }
      if ( (v14->PnPFlags & 0x4010) != 0 )
      {
        v32 = *(_QWORD *)v83;
        v7 = -1073741436;
LABEL_39:
        if ( v90 )
          ndisDereferenceMiniportForNsi(v90, 0, 0x54u);
        goto LABEL_41;
      }
      LowPart = CurrentStackLocation->Parameters.Read.ByteOffset.LowPart;
      if ( LowPart <= 0x170078 )
      {
        if ( LowPart == 1507448 )
        {
          DeviceOid = 0;
          PowerInfo = ndisGetPowerInfo((__int64)v14, a3, &DeviceOid);
          goto LABEL_146;
        }
        if ( LowPart > 0x17002C )
        {
          v19 = LowPart - 1507376;
          if ( v19 )
          {
            v20 = v19 - 14;
            if ( !v20 )
            {
              v85 = 1;
              goto LABEL_17;
            }
            v66 = v20 - 42;
            if ( !v66 )
            {
              DeviceOid = 0;
              PowerInfo = ndisSetPerfTrackParameters(v14);
              goto LABEL_146;
            }
            v67 = v66 - 4;
            if ( !v67 )
            {
              DeviceOid = 0;
              PowerInfo = ndisGetPerformanceCounters(v14);
              goto LABEL_146;
            }
            if ( v67 == 4 )
            {
              DeviceOid = 0;
              PowerInfo = ndisGetHardwareInfo(v14);
LABEL_146:
              v7 = PowerInfo;
LABEL_128:
              v8 = 1;
              goto LABEL_196;
            }
LABEL_187:
            v7 = -1073741822;
            goto LABEL_196;
          }
          Options = CurrentStackLocation->Parameters.Create.Options;
          MasterIrp = a3->AssociatedIrp.MasterIrp;
          if ( Options >= 0xC
            && ((unsigned __int8)MasterIrp & 7) == 0
            && ndisValidOid((__int64)v17, *(_DWORD *)&MasterIrp->Type) )
          {
            Length = CurrentStackLocation->Parameters.Read.Length;
            memset(v92, 0, sizeof(v92));
            DeviceOid = ndisMethodDeviceOid(*(_QWORD *)v88, v92, MasterIrp, Options, Length);
            a3->IoStatus.Information = (unsigned int)(*(_DWORD *)&v92[60] + 8);
            goto LABEL_79;
          }
LABEL_137:
          v7 = -1073741811;
          goto LABEL_134;
        }
        if ( LowPart != 1507372 )
        {
          switch ( LowPart )
          {
            case 0x170002u:
              if ( CurrentStackLocation->Parameters.Create.Options >= 4 )
              {
                v86 = *(_DWORD *)a3->AssociatedIrp.MasterIrp;
                if ( ndisValidOid((__int64)v17, v86) )
                {
                  MdlAddress = a3->MdlAddress;
                  if ( MdlAddress )
                    ByteCount = MdlAddress->ByteCount;
                  else
                    ByteCount = 0;
                  if ( ByteCount )
                  {
                    if ( (MdlAddress->MdlFlags & 5) != 0 )
                      MappedSystemVa = MdlAddress->MappedSystemVa;
                    else
                      MappedSystemVa = MmMapLockedPagesSpecifyCache(
                                         MdlAddress,
                                         0,
                                         MmCached,
                                         0LL,
                                         0,
                                         ndisMdlMappingNxFlag);
                    Src = MappedSystemVa;
                    if ( !MappedSystemVa )
                    {
                      DeviceOid = -1073741670;
                      goto LABEL_80;
                    }
                    PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, ByteCount, 0x6D61444Eu);
                    v6 = PoolWithTag;
                    if ( !PoolWithTag )
                    {
                      v7 = -1073741670;
                      goto LABEL_134;
                    }
                    v58 = (__int64)PoolWithTag;
                    memmove(PoolWithTag, Src, ByteCount);
                    v53 = *(_QWORD *)v88;
                  }
                  else
                  {
                    v58 = 0LL;
                  }
                  DeviceOid = ndisQueryDeviceOid(v53, v92, v86, v58, ByteCount);
                  v59 = *(_DWORD *)&v92[52];
                  LODWORD(v87) = *(_DWORD *)&v92[52];
                  if ( *(_DWORD *)&v92[52] > ByteCount )
                  {
                    v59 = 0;
                    DeviceOid = -1073676266;
                    LODWORD(v87) = 0;
                  }
                  v8 = 1;
                  a3->IoStatus.Information = v59;
                  if ( !DeviceOid && v59 && Src )
                  {
                    if ( !v6 )
                      goto LABEL_134;
                    memmove(Src, v6, v59);
                  }
                  if ( v6 )
                  {
                    ExFreePoolWithTag(v6, 0);
                    goto LABEL_80;
                  }
LABEL_134:
                  v24 = P;
                  goto LABEL_81;
                }
              }
LABEL_126:
              v7 = -1073741811;
LABEL_196:
              v24 = 0LL;
              goto LABEL_81;
            case 0x170006u:
              v64 = v17[2];
              v23 = *(_DWORD *)v64;
              v25 = *(PVOID *)(v64 + 8);
              goto LABEL_22;
            case 0x17000Eu:
LABEL_17:
              v21 = CurrentStackLocation->Parameters.Create.Options;
              if ( v21 >= 4 && (v21 & 3) == 0 )
              {
                v22 = a3->AssociatedIrp.MasterIrp;
                if ( ((unsigned __int8)v22 & 3) == 0 )
                {
                  v23 = v21 >> 2;
                  P = ExAllocatePoolWithTag(NonPagedPoolNx, 4LL * v23, 0x6D61444Eu);
                  v24 = P;
                  if ( P )
                  {
                    memmove(P, v22, 4LL * v23);
                    v25 = P;
LABEL_22:
                    v26 = a3->MdlAddress;
                    if ( v26 )
                      v27 = v26->ByteCount;
                    else
                      v27 = 0;
                    if ( v27 )
                    {
                      if ( (v26->MdlFlags & 5) != 0 )
                        v28 = v26->MappedSystemVa;
                      else
                        v28 = MmMapLockedPagesSpecifyCache(v26, 0, MmCached, 0LL, 0, ndisMdlMappingNxFlag);
                    }
                    else
                    {
                      v28 = 0LL;
                    }
                    if ( v28 )
                    {
                      v29 = *(_QWORD *)v88;
                      v30 = v23;
                      v81 = 0;
                      v31 = v25;
                      LODWORD(Priority) = v27;
                      BugCheckOnFailure = v28;
LABEL_29:
                      v32 = *(_QWORD *)v83;
                      v33 = ndisQueryStatisticsOids(
                              *(__int64 *)v83,
                              v29,
                              (__int64)v31,
                              v30,
                              BugCheckOnFailure,
                              Priority,
                              &v87,
                              v81,
                              &v85);
                      v24 = P;
                      v8 = 1;
                      DeviceOid = v33;
                      a3->IoStatus.Information = (unsigned int)v87;
LABEL_30:
                      if ( (v7 & 0xC0230000) == 0xC0230000 )
                        v7 = (unsigned __int16)v7 | 0xC0010000;
                      if ( v8 )
                      {
                        if ( DeviceOid == -1073676268 )
                        {
                          v7 = -2147483643;
                        }
                        else if ( DeviceOid == -1073741637 )
                        {
                          v7 = v85 == 0 ? 0xC00000BB : 0;
                        }
                        else if ( DeviceOid )
                        {
                          v7 = -1073741823;
                        }
                      }
                      if ( v24 )
                        ExFreePoolWithTag(v24, 0);
                      goto LABEL_39;
                    }
                    DeviceOid = -1073741670;
                    goto LABEL_134;
                  }
LABEL_136:
                  DeviceOid = -1073741670;
                  goto LABEL_81;
                }
              }
              goto LABEL_137;
            case 0x17001Eu:
              if ( a3->MdlAddress )
              {
                DeviceOid = ndisMGetLogData((__int64)v14, (__int64)a3);
                v7 = DeviceOid;
                if ( DeviceOid == 259 )
                  goto LABEL_134;
                goto LABEL_128;
              }
              goto LABEL_126;
          }
          if ( LowPart != 1507368 )
            goto LABEL_187;
        }
        v60 = CurrentStackLocation->Parameters.Read.Length;
        v61 = CurrentStackLocation->Parameters.Create.Options;
        v62 = a3->AssociatedIrp.MasterIrp;
        v86 = v60;
        if ( LowPart == 1507372 )
        {
          if ( v61 < 4 || ((unsigned __int8)v62 & 3) != 0 || (v61 & 3) != 0 )
            goto LABEL_137;
          v63 = v61 >> 2;
          P = ExAllocatePoolWithTag(NonPagedPoolNx, 4LL * v63, 0x6D61444Eu);
          v24 = P;
          if ( !P )
            goto LABEL_136;
          memmove(P, v62, 4LL * v63);
          v31 = P;
          v60 = v86;
          v17 = *(_QWORD **)v88;
        }
        else
        {
          v65 = v17[2];
          v63 = *(_DWORD *)v65;
          v31 = *(PVOID *)(v65 + 8);
        }
        v30 = v63;
        v29 = (__int64)v17;
        v81 = 1;
        LODWORD(Priority) = v60;
        BugCheckOnFailure = v62;
        goto LABEL_29;
      }
      if ( LowPart > 0x1700B0 )
      {
        v74 = LowPart - 2252868;
        if ( !v74 )
        {
          DeviceOid = ndisIovIoctlNotification((__int64)v14, (__int64)a3);
          v7 = DeviceOid;
          if ( DeviceOid == 259 )
          {
            v5 = 0;
            goto LABEL_196;
          }
          goto LABEL_128;
        }
        v75 = v74 - 4;
        if ( v75 && (v76 = v75 - 4) != 0 && (v77 = v76 - 4) != 0 )
        {
          if ( v77 != 4 )
            goto LABEL_187;
          v78 = ndisIovIoctlInvalidate((__int64)v14, (__int64)a3);
        }
        else
        {
          v78 = ndisIovIoctlDetach(v14, a3);
        }
        v32 = *(_QWORD *)v83;
        v7 = v78;
        DeviceOid = v78;
        v24 = 0LL;
        if ( v78 == 259 )
          v5 = 0;
        else
          v8 = 1;
        goto LABEL_30;
      }
      if ( LowPart == 1507504 )
      {
        PowerInfo = ndisGetPdInfo(v14, a3);
      }
      else
      {
        v35 = LowPart - 1507472;
        if ( v35 )
        {
          v36 = v35 - 4;
          if ( !v36 )
          {
            DeviceOid = 0;
            PowerInfo = ndisGetAdapterHardwareInfo(v14, a3, &DeviceOid);
            goto LABEL_146;
          }
          v37 = v36 - 4;
          if ( !v37 )
          {
            DeviceOid = 0;
            PowerInfo = ndisGetAdapterRssInfo(v14);
            goto LABEL_146;
          }
          v38 = v37 - 4;
          if ( v38 )
          {
            if ( v38 == 12 )
            {
              if ( *((_BYTE *)v17 + 24) )
              {
                ndisMiniportFatalError(v14, 70LL);
                DeviceOid = 0;
              }
              else
              {
                v7 = -1073741790;
                DeviceOid = -1073741790;
              }
              goto LABEL_128;
            }
            goto LABEL_187;
          }
          v39 = CurrentStackLocation->Parameters.Create.Options;
          v40 = CurrentStackLocation->Parameters.Read.Length;
          v41.MasterIrp = (_IRP *)a3->AssociatedIrp;
          v86 = v40;
          if ( (unsigned int)v39 < 0x2C )
            goto LABEL_126;
          if ( v40 < 0x2C )
            goto LABEL_126;
          if ( LOBYTE(v41.MasterIrp->Type) != 0xB9 )
            goto LABEL_126;
          if ( v41.MasterIrp->Size < 0x2Cu )
            goto LABEL_126;
          Blink = (unsigned __int16)v41.MasterIrp->ThreadListEntry.Blink;
          if ( Blink < 0x2Cu )
            goto LABEL_126;
          v43 = v40;
          if ( (unsigned int)v39 < v40 )
            v43 = v39;
          if ( Blink > v43 )
            goto LABEL_126;
          if ( !HIBYTE(v41.MasterIrp->Type) )
          {
            v7 = -1071448060;
            goto LABEL_196;
          }
          MdlAddress_high = HIDWORD(v41.MasterIrp->MdlAddress);
          if ( *(_BYTE *)(v17[1] + 32LL) >= 6u || (MdlAddress_high & 0xFF000000) != 0xFF000000 )
          {
            v45 = v17[2];
            v46 = 0LL;
            v47 = *(_DWORD *)(v45 + 4);
            if ( v47 )
            {
              do
              {
                if ( *(_DWORD *)(*(_QWORD *)(v45 + 16) + 4 * v46) == MdlAddress_high )
                  break;
                v46 = (unsigned int)(v46 + 1);
              }
              while ( (unsigned int)v46 < v47 );
              v17 = *(_QWORD **)v88;
            }
            if ( (unsigned int)v46 >= v47 )
            {
              v7 = -1073741637;
              goto LABEL_196;
            }
          }
          v48 = (char *)v41.MasterIrp + Blink;
          if ( ((unsigned __int8)v48 & 3) != 0 )
          {
            v7 = -2147483646;
            goto LABEL_134;
          }
          if ( !*((_BYTE *)v17 + 24) && (*(_DWORD *)&v41.MasterIrp->AllocationProcessorNumber & 0xFFFFFFFD) != 0 )
          {
            v7 = -1073741790;
            goto LABEL_134;
          }
          memset(v92, 0, sizeof(v92));
          *(_DWORD *)&v92[88] |= 8u;
          v49 = v86;
          *(_QWORD *)&v92[104] = &ndisIntReqIoctl;
          *(_DWORD *)v92 = 15466902;
          *(_DWORD *)&v92[32] = HIDWORD(v41.MasterIrp->MdlAddress);
          *(_DWORD *)&v92[4] = *(_DWORD *)&v41.MasterIrp->AllocationProcessorNumber;
          v50 = (int)v41.MasterIrp->MdlAddress;
          *(_DWORD *)&v92[48] = 0;
          *(_DWORD *)&v92[8] = v50;
          *(_QWORD *)&v92[40] = v48;
          if ( (unsigned int)v39 < v86 )
          {
            memset((char *)v41.MasterIrp + v39, 0, v86 - (unsigned int)v39);
            v49 = v86;
          }
          v51 = *(_DWORD *)&v41.MasterIrp->AllocationProcessorNumber;
          if ( !v51 )
            goto LABEL_73;
          v72 = v51 - 1;
          if ( v72 )
          {
            v73 = v72 - 1;
            if ( !v73 )
            {
LABEL_73:
              *(_DWORD *)&v92[48] = v49 - LOWORD(v41.MasterIrp->ThreadListEntry.Blink);
              memset(v48, 0, *(unsigned int *)&v92[48]);
              goto LABEL_74;
            }
            if ( v73 != 10 )
              goto LABEL_137;
            *(_DWORD *)&v92[48] = v39 - LOWORD(v41.MasterIrp->ThreadListEntry.Blink);
            *(_DWORD *)&v92[52] = v49 - LOWORD(v41.MasterIrp->ThreadListEntry.Blink);
            *(_DWORD *)&v92[56] = v41.MasterIrp->Flags;
          }
          else
          {
            *(_DWORD *)&v92[48] = v39 - LOWORD(v41.MasterIrp->ThreadListEntry.Blink);
          }
LABEL_74:
          *(_DWORD *)&v92[12] = *(&v41.MasterIrp->Flags + 1);
          HIDWORD(v41.MasterIrp->ThreadListEntry.Flink) = ndisQuerySetMiniport(
                                                            *(void **)(*(_QWORD *)v88 + 8LL),
                                                            0LL,
                                                            (struct _NDIS_OID_REQUEST *)v92,
                                                            0LL,
                                                            0LL);
          if ( *(_DWORD *)&v92[4] )
          {
            if ( *(_DWORD *)&v92[4] == 1 )
            {
              HIDWORD(v41.MasterIrp->AssociatedIrp.SystemBuffer) = *(_DWORD *)&v92[52];
              goto LABEL_76;
            }
            if ( *(_DWORD *)&v92[4] != 2 )
            {
              if ( *(_DWORD *)&v92[4] != 12 )
                goto LABEL_78;
              v41.MasterIrp->AssociatedIrp.IrpCount = *(_DWORD *)&v92[60];
              HIDWORD(v41.MasterIrp->AssociatedIrp.SystemBuffer) = *(_DWORD *)&v92[64];
              v52 = *(_DWORD *)&v92[68];
LABEL_77:
              LODWORD(v41.MasterIrp->ThreadListEntry.Flink) = v52;
LABEL_78:
              DeviceOid = 0;
              a3->IoStatus.Information = v86;
LABEL_79:
              v8 = 1;
LABEL_80:
              v24 = 0LL;
LABEL_81:
              v32 = *(_QWORD *)v83;
              goto LABEL_30;
            }
          }
          v41.MasterIrp->AssociatedIrp.IrpCount = *(_DWORD *)&v92[52];
LABEL_76:
          v52 = *(_DWORD *)&v92[56];
          goto LABEL_77;
        }
        PowerInfo = ndisGetRdmaCapabilities(v14, a3);
      }
      DeviceOid = PowerInfo;
      goto LABEL_146;
    }
    v5 = 0;
    v7 = ndisDummyHandler(a1, *(_QWORD *)v83, a3);
  }
  else
  {
    v7 = -1073741823;
  }
  v32 = *(_QWORD *)v83;
LABEL_41:
  MmUnlockPagableImageSection(ImageSectionHandle);
  _InterlockedDecrement((volatile signed __int32 *)&ndisPkgs);
  if ( v5 && v7 != 259 )
  {
    a3->IoStatus.Status = v7;
    IofCompleteRequest(a3, 2);
  }
  if ( (unsigned __int8)byte_1C0085312 >= 4u )
    WPP_SF_qq(0x18u, &WPP_99d55c594fb658073ac0709936c97fa5_Traceguids, v32, a3);
  return v7;
}
