/*
 * XREFs of ndisDeviceControlHandler @ 0x1C0093CE0
 * Callers:
 *     ndisDeviceControlIrpHandler @ 0x1C0093CC0 (ndisDeviceControlIrpHandler.c)
 *     NdisWdfDeviceControlIrpHandler @ 0x1C00CCC10 (NdisWdfDeviceControlIrpHandler.c)
 * Callees:
 *     ndisDereferenceMiniportForNsi @ 0x1C00057E0 (ndisDereferenceMiniportForNsi.c)
 *     ndisQuerySetMiniport @ 0x1C00059C8 (ndisQuerySetMiniport.c)
 *     ndisReferenceTopMiniportByNameForNsi @ 0x1C0007B50 (ndisReferenceTopMiniportByNameForNsi.c)
 *     __security_check_cookie @ 0x1C00264F0 (__security_check_cookie.c)
 *     WPP_SF_qq @ 0x1C0026510 (WPP_SF_qq.c)
 *     memmove @ 0x1C0026C00 (memmove.c)
 *     memset @ 0x1C0026F40 (memset.c)
 *     ndisMGetLogData @ 0x1C00557DC (ndisMGetLogData.c)
 *     ndisGetPowerInfo @ 0x1C0057550 (ndisGetPowerInfo.c)
 *     ndisIovIoctlInvalidate @ 0x1C00646EC (ndisIovIoctlInvalidate.c)
 *     ndisIovIoctlNotification @ 0x1C00647D8 (ndisIovIoctlNotification.c)
 *     ?ndisGetPdInfo@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@@Z @ 0x1C006BA58 (-ndisGetPdInfo@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@@Z.c)
 *     ndisQueryDeviceOid @ 0x1C009383C (ndisQueryDeviceOid.c)
 *     ndisQueryStatisticsOids @ 0x1C00938D0 (ndisQueryStatisticsOids.c)
 *     ndisValidOid @ 0x1C0093C34 (ndisValidOid.c)
 *     ?ndisIsSetupDevice@@YA_NPEBU_DEVICE_OBJECT@@@Z @ 0x1C0093CCC (-ndisIsSetupDevice@@YA_NPEBU_DEVICE_OBJECT@@@Z.c)
 *     ndisReferencePackage @ 0x1C00950DC (ndisReferencePackage.c)
 *     ndisDummyHandler @ 0x1C009762C (ndisDummyHandler.c)
 *     ndisGetAdapterHardwareInfo @ 0x1C00C9E08 (ndisGetAdapterHardwareInfo.c)
 *     ndisGetAdapterRssInfo @ 0x1C00C9FF8 (ndisGetAdapterRssInfo.c)
 *     ndisGetHardwareInfo @ 0x1C00CA26C (ndisGetHardwareInfo.c)
 *     ndisGetPerformanceCounters @ 0x1C00CA6E0 (ndisGetPerformanceCounters.c)
 *     ndisMethodDeviceOid @ 0x1C00CA8C0 (ndisMethodDeviceOid.c)
 *     ndisSetPerfTrackParameters @ 0x1C00CA9C4 (ndisSetPerfTrackParameters.c)
 *     ndisMiniportFatalError @ 0x1C00CDFC8 (ndisMiniportFatalError.c)
 *     ndisGetRdmaCapabilities @ 0x1C00D0D44 (ndisGetRdmaCapabilities.c)
 *     ndisIovIoctlDetach @ 0x1C00D3490 (ndisIovIoctlDetach.c)
 */

__int64 __fastcall ndisDeviceControlHandler(struct _DEVICE_OBJECT *a1, void *a2, _IRP *a3)
{
  int v4; // ebx
  void *v5; // r12
  unsigned int v6; // edi
  char v7; // r15
  char v9; // r13
  __int64 v10; // r8
  _IO_STACK_LOCATION *CurrentStackLocation; // r14
  _FILE_OBJECT *FileObject; // rcx
  struct _DEVICE_OBJECT *v13; // rax
  _QWORD *v14; // rcx
  _QWORD *v15; // r11
  unsigned int LowPart; // eax
  unsigned int v17; // eax
  unsigned int v18; // eax
  unsigned int Options; // r14d
  const void *MasterIrp; // r12
  unsigned int v21; // r14d
  PVOID v22; // rcx
  PVOID v23; // r12
  _MDL *MdlAddress; // rcx
  ULONG ByteCount; // ebx
  _IRP *MappedSystemVa; // rax
  __int64 v27; // rdx
  unsigned int v28; // r9d
  PVOID v29; // r8
  NDIS_HANDLE v30; // r14
  unsigned int v32; // eax
  unsigned int v33; // eax
  unsigned int v34; // eax
  unsigned int v35; // eax
  __int64 v36; // r12
  unsigned int v37; // eax
  _IRP::<unnamed_type_AssociatedIrp> v38; // r14
  unsigned __int16 Blink; // r10
  unsigned int v40; // ecx
  unsigned __int16 v41; // r10
  __int64 v42; // r11
  void *v43; // r9
  unsigned int v44; // edx
  int v45; // eax
  int v46; // ecx
  int v47; // eax
  __int64 v48; // r11
  _MDL *v49; // rcx
  unsigned int v50; // r14d
  PVOID v51; // rax
  PVOID PoolWithTag; // rax
  __int64 v53; // rbx
  unsigned int DeviceOid; // eax
  unsigned int v55; // ecx
  unsigned int v56; // ecx
  unsigned int v57; // r12d
  _IRP *v58; // r14
  unsigned int v59; // r12d
  __int64 v60; // rax
  __int64 v61; // rax
  unsigned int v62; // eax
  unsigned int v63; // eax
  unsigned int PowerInfo; // eax
  _IRP *v65; // r12
  unsigned int Length; // ebx
  int v67; // ecx
  int v68; // ecx
  unsigned int PdInfo; // eax
  unsigned int v70; // eax
  unsigned int v71; // eax
  unsigned int v72; // eax
  unsigned int v73; // eax
  unsigned int v74; // eax
  void *v75; // rcx
  _IRP *BugCheckOnFailure; // [rsp+20h] [rbp-E0h]
  SIZE_T Priority; // [rsp+28h] [rbp-D8h]
  char v78; // [rsp+38h] [rbp-C8h]
  int v79; // [rsp+50h] [rbp-B0h] BYREF
  NDIS_HANDLE NdisHandle; // [rsp+58h] [rbp-A8h]
  PVOID P; // [rsp+60h] [rbp-A0h]
  char v82; // [rsp+68h] [rbp-98h] BYREF
  unsigned int v83; // [rsp+6Ch] [rbp-94h]
  __int64 v84; // [rsp+70h] [rbp-90h] BYREF
  int v85[2]; // [rsp+78h] [rbp-88h]
  void *Src; // [rsp+80h] [rbp-80h]
  struct _DEVICE_OBJECT *v87; // [rsp+88h] [rbp-78h]
  _QWORD v88[4]; // [rsp+90h] [rbp-70h] BYREF
  _BYTE v89[248]; // [rsp+B0h] [rbp-50h] BYREF

  v87 = a1;
  NdisHandle = a2;
  v4 = -1073741823;
  v79 = -1073741823;
  LODWORD(v84) = 0;
  v5 = 0LL;
  P = 0LL;
  v6 = 0;
  Src = 0LL;
  v7 = 1;
  v82 = 0;
  v9 = 0;
  if ( (unsigned __int8)byte_1C0083712 >= 4u )
    WPP_SF_qq(0x17u, &WPP_16c28ebb9fa84dacc642b00af20fc2f4_Traceguids, a2, a3);
  if ( ndisIsSetupDevice(a1) )
  {
    a3->IoStatus.Status = -1073741637;
    IofCompleteRequest(a3, 0);
    return 3221225659LL;
  }
  ndisReferencePackage(&ndisPkgs);
  a3->IoStatus.Information = 0LL;
  CurrentStackLocation = a3->Tail.Overlay.CurrentStackLocation;
  a3->IoStatus.Status = 259;
  FileObject = CurrentStackLocation->FileObject;
  if ( FileObject )
  {
    if ( *(_BYTE *)NdisHandle == 17 )
    {
      *(_QWORD *)v85 = FileObject->FsContext;
      v13 = (struct _DEVICE_OBJECT *)ndisReferenceTopMiniportByNameForNsi((__int64)NdisHandle, 0, v10, 0, 0, 0x54u);
      v87 = v13;
      if ( v13 )
      {
        NdisHandle = v13;
        memset(v88, 0, sizeof(v88));
        v14 = *(_QWORD **)v85;
        v15 = v88;
        v88[1] = v87;
        *(_QWORD *)v85 = v88;
        v88[2] = *(_QWORD *)&v87[5].Queue.Wcb.NumberOfChannels;
        LOBYTE(v88[3]) = *((_BYTE *)v14 + 24);
        v88[0] = *v14;
      }
      else
      {
        v15 = *(_QWORD **)v85;
      }
      if ( (*((_DWORD *)NdisHandle + 31) & 0x4010) != 0 )
      {
        v6 = -1073741436;
        v30 = NdisHandle;
LABEL_38:
        if ( v87 )
          ndisDereferenceMiniportForNsi((__int64)v87, 0, 0x54u);
        goto LABEL_40;
      }
      LowPart = CurrentStackLocation->Parameters.Read.ByteOffset.LowPart;
      if ( LowPart <= 0x170078 )
      {
        if ( LowPart == 1507448 )
        {
          v79 = 0;
          PowerInfo = ndisGetPowerInfo((__int64)NdisHandle, a3, (unsigned int *)&v79);
          goto LABEL_144;
        }
        if ( LowPart > 0x17002C )
        {
          v17 = LowPart - 1507376;
          if ( v17 )
          {
            v18 = v17 - 14;
            if ( !v18 )
            {
              v82 = 1;
LABEL_15:
              Options = CurrentStackLocation->Parameters.Create.Options;
              if ( Options >= 4 && (Options & 3) == 0 )
              {
                MasterIrp = a3->AssociatedIrp.MasterIrp;
                if ( ((unsigned __int8)MasterIrp & 3) == 0 )
                {
                  v21 = Options >> 2;
                  P = ExAllocatePoolWithTag(NonPagedPoolNx, 4LL * v21, 0x6D61444Eu);
                  v22 = P;
                  if ( P )
                  {
                    memmove(P, MasterIrp, 4LL * v21);
                    v23 = P;
LABEL_20:
                    MdlAddress = a3->MdlAddress;
                    if ( MdlAddress )
                      ByteCount = MdlAddress->ByteCount;
                    else
                      ByteCount = 0;
                    if ( ByteCount )
                    {
                      if ( (MdlAddress->MdlFlags & 5) != 0 )
                        MappedSystemVa = (_IRP *)MdlAddress->MappedSystemVa;
                      else
                        MappedSystemVa = (_IRP *)MmMapLockedPagesSpecifyCache(
                                                   MdlAddress,
                                                   0,
                                                   MmCached,
                                                   0LL,
                                                   0,
                                                   ndisMdlMappingNxFlag);
                    }
                    else
                    {
                      MappedSystemVa = 0LL;
                    }
                    if ( MappedSystemVa )
                    {
                      v27 = *(_QWORD *)v85;
                      v28 = v21;
                      v78 = 0;
                      v29 = v23;
                      LODWORD(Priority) = ByteCount;
                      BugCheckOnFailure = MappedSystemVa;
LABEL_27:
                      v30 = NdisHandle;
                      v4 = ndisQueryStatisticsOids(
                             (__int64)NdisHandle,
                             v27,
                             (__int64)v29,
                             v28,
                             BugCheckOnFailure,
                             Priority,
                             &v84,
                             v78,
                             &v82);
                      v79 = v4;
                      v9 = 1;
                      a3->IoStatus.Information = (unsigned int)v84;
LABEL_28:
                      v22 = P;
LABEL_29:
                      if ( (v6 & 0xC0230000) == 0xC0230000 )
                        v6 = (unsigned __int16)v6 | 0xC0010000;
                      if ( v9 )
                      {
                        if ( v4 == -1073676268 )
                        {
                          v6 = -2147483643;
                        }
                        else if ( v4 == -1073741637 )
                        {
                          v6 = v82 == 0 ? 0xC00000BB : 0;
                        }
                        else if ( v4 )
                        {
                          v6 = -1073741823;
                        }
                      }
                      if ( v22 )
                        ExFreePoolWithTag(v22, 0);
                      goto LABEL_38;
                    }
                    v4 = -1073741670;
                    v79 = -1073741670;
LABEL_161:
                    v30 = NdisHandle;
                    goto LABEL_28;
                  }
LABEL_131:
                  v30 = NdisHandle;
                  v4 = -1073741670;
                  v79 = -1073741670;
                  goto LABEL_29;
                }
              }
              goto LABEL_132;
            }
            v62 = v18 - 42;
            if ( !v62 )
            {
              v79 = 0;
              PowerInfo = ndisSetPerfTrackParameters((struct _NDIS_MINIPORT_BLOCK *)NdisHandle);
              goto LABEL_144;
            }
            v63 = v62 - 4;
            if ( !v63 )
            {
              v79 = 0;
              PowerInfo = ndisGetPerformanceCounters((struct _NDIS_MINIPORT_BLOCK *)NdisHandle);
              goto LABEL_144;
            }
            if ( v63 == 4 )
            {
              v79 = 0;
              PowerInfo = ndisGetHardwareInfo(NdisHandle);
LABEL_144:
              v4 = v79;
              v6 = PowerInfo;
              v9 = 1;
              goto LABEL_125;
            }
            goto LABEL_116;
          }
          v65 = a3->AssociatedIrp.MasterIrp;
          v83 = CurrentStackLocation->Parameters.Create.Options;
          if ( v83 >= 0xC && ((unsigned __int8)v65 & 7) == 0 && ndisValidOid((__int64)v15, *(_DWORD *)&v65->Type) )
          {
            Length = CurrentStackLocation->Parameters.Read.Length;
            memset(v89, 0, sizeof(v89));
            v4 = ndisMethodDeviceOid(*(_QWORD *)v85, v89, v65, v83, Length);
            v79 = v4;
            a3->IoStatus.Information = (unsigned int)(*(_DWORD *)&v89[60] + 8);
            v9 = 1;
            goto LABEL_94;
          }
LABEL_155:
          v6 = -1073741811;
          goto LABEL_161;
        }
        switch ( LowPart )
        {
          case 0x17002Cu:
            goto LABEL_106;
          case 0x170002u:
            if ( CurrentStackLocation->Parameters.Create.Options >= 4 )
            {
              v83 = *(_DWORD *)a3->AssociatedIrp.MasterIrp;
              if ( ndisValidOid((__int64)v15, v83) )
              {
                v49 = a3->MdlAddress;
                if ( v49 )
                  v50 = v49->ByteCount;
                else
                  v50 = 0;
                if ( v50 )
                {
                  if ( (v49->MdlFlags & 5) != 0 )
                    v51 = v49->MappedSystemVa;
                  else
                    v51 = MmMapLockedPagesSpecifyCache(v49, 0, MmCached, 0LL, 0, ndisMdlMappingNxFlag);
                  Src = v51;
                  if ( !v51 )
                  {
                    v4 = -1073741670;
                    v79 = -1073741670;
                    goto LABEL_94;
                  }
                  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, v50, 0x6D61444Eu);
                  v5 = PoolWithTag;
                  if ( !PoolWithTag )
                  {
                    v6 = -1073741670;
                    goto LABEL_161;
                  }
                  v53 = (__int64)PoolWithTag;
                  memmove(PoolWithTag, Src, v50);
                  v48 = *(_QWORD *)v85;
                }
                else
                {
                  v53 = 0LL;
                }
                DeviceOid = ndisQueryDeviceOid(v48, v89, v83, v53, v50);
                v55 = *(_DWORD *)&v89[52];
                v4 = DeviceOid;
                v79 = DeviceOid;
                LODWORD(v84) = *(_DWORD *)&v89[52];
                if ( *(_DWORD *)&v89[52] > v50 )
                {
                  v55 = 0;
                  v4 = -1073676266;
                  LODWORD(v84) = 0;
                  v79 = -1073676266;
                }
                v9 = 1;
                a3->IoStatus.Information = v55;
                if ( v4 || !v55 || !Src )
                  goto LABEL_92;
                if ( v5 )
                {
                  memmove(Src, v5, v55);
LABEL_92:
                  if ( v5 )
                    ExFreePoolWithTag(v5, 0);
                }
LABEL_94:
                v30 = NdisHandle;
                v22 = 0LL;
                goto LABEL_29;
              }
              v6 = -1073741811;
LABEL_125:
              v30 = NdisHandle;
              goto LABEL_114;
            }
LABEL_115:
            v6 = -1073741811;
LABEL_117:
            v30 = NdisHandle;
LABEL_114:
            v22 = 0LL;
            goto LABEL_29;
          case 0x170006u:
            v60 = v15[2];
            if ( v60 )
            {
              v21 = *(_DWORD *)v60;
              v23 = *(PVOID *)(v60 + 8);
              goto LABEL_20;
            }
            v6 = -1073741808;
            goto LABEL_117;
          case 0x17000Eu:
            goto LABEL_15;
          case 0x17001Eu:
            if ( a3->MdlAddress )
            {
              v30 = NdisHandle;
              v6 = ndisMGetLogData((__int64)NdisHandle, (__int64)a3);
              v79 = v6;
              v4 = v6;
              if ( v6 != 259 )
                v9 = 1;
              goto LABEL_114;
            }
            goto LABEL_115;
          case 0x170028u:
LABEL_106:
            v56 = CurrentStackLocation->Parameters.Read.Length;
            v57 = CurrentStackLocation->Parameters.Create.Options;
            v58 = a3->AssociatedIrp.MasterIrp;
            v83 = v56;
            if ( LowPart != 1507372 )
            {
              v61 = v15[2];
              if ( !v61 )
              {
                v6 = -1073741808;
                goto LABEL_134;
              }
              v59 = *(_DWORD *)v61;
              v29 = *(PVOID *)(v61 + 8);
LABEL_137:
              v28 = v59;
              v27 = (__int64)v15;
              v78 = 1;
              LODWORD(Priority) = v56;
              BugCheckOnFailure = v58;
              goto LABEL_27;
            }
            if ( v57 >= 4 && ((unsigned __int8)v58 & 3) == 0 && (v57 & 3) == 0 )
            {
              v59 = v57 >> 2;
              P = ExAllocatePoolWithTag(NonPagedPoolNx, 4LL * v59, 0x6D61444Eu);
              v22 = P;
              if ( !P )
                goto LABEL_131;
              memmove(P, v58, 4LL * v59);
              v29 = P;
              v56 = v83;
              v15 = *(_QWORD **)v85;
              goto LABEL_137;
            }
LABEL_132:
            v6 = -1073741811;
LABEL_134:
            v30 = NdisHandle;
            goto LABEL_28;
        }
LABEL_116:
        v6 = -1073741822;
        goto LABEL_117;
      }
      if ( LowPart <= 0x1700B0 )
      {
        if ( LowPart == 1507504 )
        {
          PdInfo = ndisGetPdInfo((struct _NDIS_MINIPORT_BLOCK *)NdisHandle, a3);
        }
        else
        {
          v32 = LowPart - 1507472;
          if ( v32 )
          {
            v33 = v32 - 4;
            if ( !v33 )
            {
              v79 = 0;
              PowerInfo = ndisGetAdapterHardwareInfo(NdisHandle, a3, &v79);
              goto LABEL_144;
            }
            v34 = v33 - 4;
            if ( !v34 )
            {
              v79 = 0;
              PowerInfo = ndisGetAdapterRssInfo(NdisHandle);
              goto LABEL_144;
            }
            v35 = v34 - 4;
            if ( !v35 )
            {
              v36 = CurrentStackLocation->Parameters.Create.Options;
              v37 = CurrentStackLocation->Parameters.Read.Length;
              v38.MasterIrp = (_IRP *)a3->AssociatedIrp;
              v83 = v37;
              if ( (unsigned int)v36 < 0x2C )
                goto LABEL_132;
              if ( v37 < 0x2C )
                goto LABEL_132;
              if ( LOBYTE(v38.MasterIrp->Type) != 0xB9 )
                goto LABEL_132;
              if ( v38.MasterIrp->Size < 0x2Cu )
                goto LABEL_132;
              Blink = (unsigned __int16)v38.MasterIrp->ThreadListEntry.Blink;
              if ( Blink < 0x2Cu )
                goto LABEL_132;
              v40 = v37;
              if ( (unsigned int)v36 < v37 )
                v40 = v36;
              if ( Blink > v40 )
                goto LABEL_132;
              if ( !HIBYTE(v38.MasterIrp->Type) )
              {
                v6 = -1071448060;
                goto LABEL_134;
              }
              if ( !ndisValidOid((__int64)v15, HIDWORD(v38.MasterIrp->MdlAddress)) )
              {
                v6 = -1073741637;
                goto LABEL_161;
              }
              Src = (char *)v38.MasterIrp + v41;
              if ( ((unsigned __int8)Src & 3) != 0 )
              {
                v6 = -2147483646;
                goto LABEL_161;
              }
              if ( !*(_BYTE *)(v42 + 24) && (*(_DWORD *)&v38.MasterIrp->AllocationProcessorNumber & 0xFFFFFFFD) != 0 )
              {
                v6 = -1073741790;
                goto LABEL_161;
              }
              memset(v89, 0, sizeof(v89));
              *(_DWORD *)&v89[88] |= 8u;
              v43 = Src;
              v44 = v83;
              *(_QWORD *)&v89[104] = &ndisIntReqIoctl;
              *(_DWORD *)v89 = 15466902;
              *(_DWORD *)&v89[32] = HIDWORD(v38.MasterIrp->MdlAddress);
              *(_DWORD *)&v89[4] = *(_DWORD *)&v38.MasterIrp->AllocationProcessorNumber;
              v45 = (int)v38.MasterIrp->MdlAddress;
              *(_DWORD *)&v89[48] = 0;
              *(_DWORD *)&v89[8] = v45;
              *(_QWORD *)&v89[40] = Src;
              if ( (unsigned int)v36 < v83 )
              {
                memset((char *)v38.MasterIrp + v36, 0, v83 - (unsigned int)v36);
                v44 = v83;
                v43 = Src;
              }
              v46 = *(_DWORD *)&v38.MasterIrp->AllocationProcessorNumber;
              if ( !v46 )
                goto LABEL_67;
              v67 = v46 - 1;
              if ( v67 )
              {
                v68 = v67 - 1;
                if ( !v68 )
                {
LABEL_67:
                  *(_DWORD *)&v89[48] = v44 - LOWORD(v38.MasterIrp->ThreadListEntry.Blink);
                  memset(v43, 0, *(unsigned int *)&v89[48]);
                  goto LABEL_68;
                }
                if ( v68 != 10 )
                  goto LABEL_155;
                *(_DWORD *)&v89[48] = v36 - LOWORD(v38.MasterIrp->ThreadListEntry.Blink);
                *(_DWORD *)&v89[52] = v44 - LOWORD(v38.MasterIrp->ThreadListEntry.Blink);
                *(_DWORD *)&v89[56] = v38.MasterIrp->Flags;
              }
              else
              {
                *(_DWORD *)&v89[48] = v36 - LOWORD(v38.MasterIrp->ThreadListEntry.Blink);
              }
LABEL_68:
              *(_DWORD *)&v89[12] = *(&v38.MasterIrp->Flags + 1);
              HIDWORD(v38.MasterIrp->ThreadListEntry.Flink) = ndisQuerySetMiniport(
                                                                *(void **)(*(_QWORD *)v85 + 8LL),
                                                                0LL,
                                                                (struct _NDIS_OID_REQUEST *)v89,
                                                                0LL,
                                                                0LL);
              if ( *(_DWORD *)&v89[4] )
              {
                if ( *(_DWORD *)&v89[4] == 1 )
                {
                  HIDWORD(v38.MasterIrp->AssociatedIrp.SystemBuffer) = *(_DWORD *)&v89[52];
                  goto LABEL_70;
                }
                if ( *(_DWORD *)&v89[4] != 2 )
                {
                  if ( *(_DWORD *)&v89[4] != 12 )
                    goto LABEL_72;
                  v38.MasterIrp->AssociatedIrp.IrpCount = *(_DWORD *)&v89[60];
                  HIDWORD(v38.MasterIrp->AssociatedIrp.SystemBuffer) = *(_DWORD *)&v89[64];
                  v47 = *(_DWORD *)&v89[68];
LABEL_71:
                  LODWORD(v38.MasterIrp->ThreadListEntry.Flink) = v47;
LABEL_72:
                  v4 = 0;
                  v30 = NdisHandle;
                  v22 = 0LL;
                  a3->IoStatus.Information = v83;
                  v9 = 1;
                  v79 = 0;
                  goto LABEL_29;
                }
              }
              v38.MasterIrp->AssociatedIrp.IrpCount = *(_DWORD *)&v89[52];
LABEL_70:
              v47 = *(_DWORD *)&v89[56];
              goto LABEL_71;
            }
            if ( v35 != 12 )
              goto LABEL_116;
            if ( *((_BYTE *)v15 + 24) )
            {
              ndisMiniportFatalError(NdisHandle, 70LL);
              v4 = 0;
            }
            else
            {
              v6 = -1073741790;
              v4 = -1073741790;
            }
            v79 = v4;
LABEL_124:
            v9 = 1;
            goto LABEL_125;
          }
          PdInfo = ndisGetRdmaCapabilities(NdisHandle, a3);
        }
        v4 = PdInfo;
        v79 = PdInfo;
        v6 = PdInfo;
        goto LABEL_124;
      }
      v70 = LowPart - 2252868;
      if ( v70 )
      {
        v71 = v70 - 4;
        if ( !v71 || (v72 = v71 - 4) == 0 || (v73 = v72 - 4) == 0 )
        {
          v74 = ndisIovIoctlDetach(NdisHandle, a3);
          v30 = v75;
          goto LABEL_189;
        }
        if ( v73 != 4 )
          goto LABEL_116;
        v74 = ndisIovIoctlInvalidate((__int64)NdisHandle, (__int64)a3);
      }
      else
      {
        v74 = ndisIovIoctlNotification((__int64)NdisHandle, (__int64)a3);
      }
      v30 = NdisHandle;
LABEL_189:
      v79 = v74;
      v4 = v74;
      v6 = v74;
      v22 = 0LL;
      if ( v74 == 259 )
        v7 = 0;
      else
        v9 = 1;
      goto LABEL_29;
    }
    v7 = 0;
    v6 = ndisDummyHandler(v87, NdisHandle, a3);
  }
  else
  {
    v6 = -1073741823;
  }
  v30 = NdisHandle;
LABEL_40:
  MmUnlockPagableImageSection(ImageSectionHandle);
  _InterlockedDecrement((volatile signed __int32 *)&ndisPkgs);
  if ( v7 && v6 != 259 )
  {
    a3->IoStatus.Status = v6;
    IofCompleteRequest(a3, 2);
  }
  if ( (unsigned __int8)byte_1C0083712 >= 4u )
    WPP_SF_qq(0x18u, &WPP_16c28ebb9fa84dacc642b00af20fc2f4_Traceguids, v30, a3);
  return v6;
}
