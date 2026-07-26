/*
 * XREFs of ndisDeviceControlHandler @ 0x1C009B358
 * Callers:
 *     ndisDeviceControlIrpHandler @ 0x1C009B9A0 (ndisDeviceControlIrpHandler.c)
 *     NdisWdfDeviceControlIrpHandler @ 0x1C00D2900 (NdisWdfDeviceControlIrpHandler.c)
 * Callees:
 *     ndisReferenceTopMiniportByNameForNsi @ 0x1C0009A10 (ndisReferenceTopMiniportByNameForNsi.c)
 *     ndisDereferenceMiniportForNsi @ 0x1C000A3BC (ndisDereferenceMiniportForNsi.c)
 *     ndisQuerySetMiniport @ 0x1C000A5A0 (ndisQuerySetMiniport.c)
 *     __security_check_cookie @ 0x1C0026780 (__security_check_cookie.c)
 *     memmove @ 0x1C00271C0 (memmove.c)
 *     memset @ 0x1C0027500 (memset.c)
 *     WPP_SF_qq @ 0x1C003C398 (WPP_SF_qq.c)
 *     ndisMGetLogData @ 0x1C0059FBC (ndisMGetLogData.c)
 *     ndisGetPowerInfo @ 0x1C005BCF0 (ndisGetPowerInfo.c)
 *     ndisIovIoctlInvalidate @ 0x1C0068C44 (ndisIovIoctlInvalidate.c)
 *     ndisIovIoctlNotification @ 0x1C0068D30 (ndisIovIoctlNotification.c)
 *     ?ndisGetPdInfo@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@@Z @ 0x1C00706A8 (-ndisGetPdInfo@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@@Z.c)
 *     ndisReferencePackage @ 0x1C009B308 (ndisReferencePackage.c)
 *     ?ndisIsSetupDevice@@YA_NPEBU_DEVICE_OBJECT@@@Z @ 0x1C009B98C (-ndisIsSetupDevice@@YA_NPEBU_DEVICE_OBJECT@@@Z.c)
 *     ndisQueryStatisticsOids @ 0x1C009BB34 (ndisQueryStatisticsOids.c)
 *     ndisValidOid @ 0x1C009BF40 (ndisValidOid.c)
 *     ndisQueryDeviceOid @ 0x1C009BF7C (ndisQueryDeviceOid.c)
 *     ndisDummyHandler @ 0x1C009C11C (ndisDummyHandler.c)
 *     ndisGetAdapterHardwareInfo @ 0x1C00CF828 (ndisGetAdapterHardwareInfo.c)
 *     ndisGetAdapterRssInfo @ 0x1C00CFA18 (ndisGetAdapterRssInfo.c)
 *     ndisGetHardwareInfo @ 0x1C00CFC8C (ndisGetHardwareInfo.c)
 *     ndisGetPerformanceCounters @ 0x1C00D0100 (ndisGetPerformanceCounters.c)
 *     ndisMethodDeviceOid @ 0x1C00D02E0 (ndisMethodDeviceOid.c)
 *     ndisSetPerfTrackParameters @ 0x1C00D03E4 (ndisSetPerfTrackParameters.c)
 *     ndisMiniportFatalError @ 0x1C00D3F88 (ndisMiniportFatalError.c)
 *     ndisGetRdmaCapabilities @ 0x1C00D6D94 (ndisGetRdmaCapabilities.c)
 *     ndisIovIoctlDetach @ 0x1C00D93D0 (ndisIovIoctlDetach.c)
 */

__int64 __fastcall ndisDeviceControlHandler(struct _DEVICE_OBJECT *a1, void *a2, _IRP *a3)
{
  int StatisticsOids; // ebx
  void *v5; // r12
  unsigned int v6; // edi
  char v7; // r15
  char v9; // r13
  __int64 v10; // r8
  _IO_STACK_LOCATION *CurrentStackLocation; // r14
  _FILE_OBJECT *FileObject; // rcx
  _NDIS_MINIPORT_BLOCK *v13; // rax
  _QWORD *v14; // rcx
  _QWORD *v15; // r11
  unsigned int LowPart; // eax
  unsigned int v17; // eax
  unsigned int v18; // eax
  unsigned int Options; // r14d
  const void *MasterIrp; // r12
  unsigned int v21; // r14d
  PVOID v22; // rcx
  _MDL *MdlAddress; // rcx
  ULONG ByteCount; // ebx
  PVOID MappedSystemVa; // rax
  int v26; // edx
  int v27; // r9d
  __int64 v28; // r8
  NDIS_HANDLE v29; // r14
  unsigned int v31; // eax
  unsigned int v32; // eax
  unsigned int v33; // eax
  unsigned int v34; // eax
  __int64 v35; // r12
  unsigned int v36; // eax
  _IRP::<unnamed_type_AssociatedIrp> v37; // r14
  unsigned __int16 Blink; // r10
  unsigned int v39; // ecx
  unsigned __int16 v40; // r10
  __int64 v41; // r11
  void *v42; // r9
  unsigned int v43; // edx
  int v44; // eax
  int v45; // ecx
  int v46; // eax
  __int64 v47; // r11
  _MDL *v48; // rcx
  ULONG v49; // r14d
  PVOID v50; // rax
  PVOID PoolWithTag; // rax
  PVOID v52; // rbx
  unsigned int DeviceOid; // eax
  unsigned int v54; // ecx
  unsigned int v55; // ecx
  unsigned int v56; // r12d
  const void *v57; // r14
  unsigned int v58; // r12d
  __int64 v59; // rax
  __int64 v60; // rax
  unsigned int v61; // eax
  unsigned int v62; // eax
  unsigned int PowerInfo; // eax
  unsigned int *v64; // r12
  unsigned int Length; // ebx
  int v66; // ecx
  int v67; // ecx
  unsigned int PdInfo; // eax
  unsigned int v69; // eax
  unsigned int v70; // eax
  unsigned int v71; // eax
  unsigned int v72; // eax
  unsigned int v73; // eax
  void *v74; // rcx
  __int64 BugCheckOnFailure; // [rsp+20h] [rbp-E0h]
  SIZE_T Priority; // [rsp+28h] [rbp-D8h]
  char v77; // [rsp+38h] [rbp-C8h]
  int v78; // [rsp+50h] [rbp-B0h] BYREF
  NDIS_HANDLE NdisHandle; // [rsp+58h] [rbp-A8h]
  PVOID P; // [rsp+60h] [rbp-A0h]
  char v81; // [rsp+68h] [rbp-98h] BYREF
  unsigned int v82; // [rsp+6Ch] [rbp-94h]
  __int64 v83; // [rsp+70h] [rbp-90h] BYREF
  int v84[2]; // [rsp+78h] [rbp-88h]
  void *Src; // [rsp+80h] [rbp-80h]
  struct _DEVICE_OBJECT *v86; // [rsp+88h] [rbp-78h]
  _QWORD v87[4]; // [rsp+90h] [rbp-70h] BYREF
  _BYTE v88[248]; // [rsp+B0h] [rbp-50h] BYREF

  v86 = a1;
  NdisHandle = a2;
  StatisticsOids = -1073741823;
  v78 = -1073741823;
  LODWORD(v83) = 0;
  v5 = 0LL;
  P = 0LL;
  v6 = 0;
  Src = 0LL;
  v7 = 1;
  v81 = 0;
  v9 = 0;
  if ( (unsigned __int8)byte_1C00895D2 >= 4u )
    WPP_SF_qq(0x17u, &WPP_8ce524521b613c0e10407cfbf52a0b71_Traceguids, a2, a3);
  if ( ndisIsSetupDevice(a1) )
  {
    a3->IoStatus.Status = -1073741637;
    IofCompleteRequest(a3, 0);
    return 3221225659LL;
  }
  ndisReferencePackage((__int64)&ndisPkgs);
  a3->IoStatus.Information = 0LL;
  CurrentStackLocation = a3->Tail.Overlay.CurrentStackLocation;
  a3->IoStatus.Status = 259;
  FileObject = CurrentStackLocation->FileObject;
  if ( FileObject )
  {
    if ( *(_BYTE *)NdisHandle == 17 )
    {
      *(_QWORD *)v84 = FileObject->FsContext;
      v13 = ndisReferenceTopMiniportByNameForNsi((__int64)NdisHandle, 0, v10, 0, 0, 0x56u);
      v86 = (struct _DEVICE_OBJECT *)v13;
      if ( v13 )
      {
        NdisHandle = v13;
        memset(v87, 0, sizeof(v87));
        v14 = *(_QWORD **)v84;
        v15 = v87;
        v87[1] = v86;
        *(_QWORD *)v84 = v87;
        v87[2] = *(_QWORD *)&v86[5].Queue.Wcb.NumberOfChannels;
        LOBYTE(v87[3]) = *((_BYTE *)v14 + 24);
        v87[0] = *v14;
      }
      else
      {
        v15 = *(_QWORD **)v84;
      }
      if ( (*((_DWORD *)NdisHandle + 31) & 0x4010) != 0 )
      {
        v6 = -1073741436;
        v29 = NdisHandle;
LABEL_38:
        if ( v86 )
          ndisDereferenceMiniportForNsi((__int64)v86, 0, 0x56u);
        goto LABEL_40;
      }
      LowPart = CurrentStackLocation->Parameters.Read.ByteOffset.LowPart;
      if ( LowPart <= 0x170078 )
      {
        if ( LowPart == 1507448 )
        {
          v78 = 0;
          PowerInfo = ndisGetPowerInfo((__int64)NdisHandle, a3, (unsigned int *)&v78);
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
              v81 = 1;
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
                    LODWORD(MasterIrp) = (_DWORD)P;
LABEL_20:
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
                    }
                    else
                    {
                      MappedSystemVa = 0LL;
                    }
                    if ( MappedSystemVa )
                    {
                      v26 = v84[0];
                      v27 = v21;
                      v77 = 0;
                      LODWORD(v28) = (_DWORD)MasterIrp;
                      LODWORD(Priority) = ByteCount;
                      BugCheckOnFailure = (__int64)MappedSystemVa;
LABEL_27:
                      v29 = NdisHandle;
                      StatisticsOids = ndisQueryStatisticsOids(
                                         (int)NdisHandle,
                                         v26,
                                         v28,
                                         v27,
                                         BugCheckOnFailure,
                                         Priority,
                                         (__int64)&v83,
                                         v77,
                                         (__int64)&v81);
                      v78 = StatisticsOids;
                      v9 = 1;
                      a3->IoStatus.Information = (unsigned int)v83;
LABEL_28:
                      v22 = P;
LABEL_29:
                      if ( (v6 & 0xC0230000) == 0xC0230000 )
                        v6 = (unsigned __int16)v6 | 0xC0010000;
                      if ( v9 )
                      {
                        if ( StatisticsOids == -1073676268 )
                        {
                          v6 = -2147483643;
                        }
                        else if ( StatisticsOids == -1073741637 )
                        {
                          v6 = v81 == 0 ? 0xC00000BB : 0;
                        }
                        else if ( StatisticsOids )
                        {
                          v6 = -1073741823;
                        }
                      }
                      if ( v22 )
                        ExFreePoolWithTag(v22, 0);
                      goto LABEL_38;
                    }
                    StatisticsOids = -1073741670;
                    v78 = -1073741670;
LABEL_161:
                    v29 = NdisHandle;
                    goto LABEL_28;
                  }
LABEL_131:
                  v29 = NdisHandle;
                  StatisticsOids = -1073741670;
                  v78 = -1073741670;
                  goto LABEL_29;
                }
              }
              goto LABEL_132;
            }
            v61 = v18 - 42;
            if ( !v61 )
            {
              v78 = 0;
              PowerInfo = ndisSetPerfTrackParameters((struct _NDIS_MINIPORT_BLOCK *)NdisHandle);
              goto LABEL_144;
            }
            v62 = v61 - 4;
            if ( !v62 )
            {
              v78 = 0;
              PowerInfo = ndisGetPerformanceCounters((struct _NDIS_MINIPORT_BLOCK *)NdisHandle);
              goto LABEL_144;
            }
            if ( v62 == 4 )
            {
              v78 = 0;
              PowerInfo = ndisGetHardwareInfo(NdisHandle);
LABEL_144:
              StatisticsOids = v78;
              v6 = PowerInfo;
              v9 = 1;
              goto LABEL_125;
            }
            goto LABEL_116;
          }
          v64 = (unsigned int *)a3->AssociatedIrp.MasterIrp;
          v82 = CurrentStackLocation->Parameters.Create.Options;
          if ( v82 >= 0xC && ((unsigned __int8)v64 & 7) == 0 && (unsigned __int8)ndisValidOid(v15, *v64) )
          {
            Length = CurrentStackLocation->Parameters.Read.Length;
            memset(v88, 0, sizeof(v88));
            StatisticsOids = ndisMethodDeviceOid(*(_QWORD *)v84, v88, v64, v82, Length);
            v78 = StatisticsOids;
            a3->IoStatus.Information = (unsigned int)(*(_DWORD *)&v88[60] + 8);
            v9 = 1;
            goto LABEL_97;
          }
LABEL_155:
          v6 = -1073741811;
          goto LABEL_161;
        }
        if ( LowPart == 1507372 )
          goto LABEL_106;
        if ( LowPart != 1507330 )
        {
          if ( LowPart == 1507334 )
          {
            v59 = v15[2];
            if ( v59 )
            {
              v21 = *(_DWORD *)v59;
              MasterIrp = *(const void **)(v59 + 8);
              goto LABEL_20;
            }
            v6 = -1073741808;
            goto LABEL_117;
          }
          if ( LowPart == 1507342 )
            goto LABEL_15;
          if ( LowPart != 1507358 )
          {
            if ( LowPart == 1507368 )
            {
LABEL_106:
              v55 = CurrentStackLocation->Parameters.Read.Length;
              v56 = CurrentStackLocation->Parameters.Create.Options;
              v57 = a3->AssociatedIrp.MasterIrp;
              v82 = v55;
              if ( LowPart != 1507372 )
              {
                v60 = v15[2];
                if ( !v60 )
                {
                  v6 = -1073741808;
                  goto LABEL_134;
                }
                v58 = *(_DWORD *)v60;
                v28 = *(_QWORD *)(v60 + 8);
LABEL_137:
                v27 = v58;
                v26 = (int)v15;
                v77 = 1;
                LODWORD(Priority) = v55;
                BugCheckOnFailure = (__int64)v57;
                goto LABEL_27;
              }
              if ( v56 >= 4 && ((unsigned __int8)v57 & 3) == 0 && (v56 & 3) == 0 )
              {
                v58 = v56 >> 2;
                P = ExAllocatePoolWithTag(NonPagedPoolNx, 4LL * v58, 0x6D61444Eu);
                v22 = P;
                if ( !P )
                  goto LABEL_131;
                memmove(P, v57, 4LL * v58);
                LODWORD(v28) = (_DWORD)P;
                v55 = v82;
                LODWORD(v15) = v84[0];
                goto LABEL_137;
              }
LABEL_132:
              v6 = -1073741811;
LABEL_134:
              v29 = NdisHandle;
              goto LABEL_28;
            }
LABEL_116:
            v6 = -1073741822;
            goto LABEL_117;
          }
          if ( a3->MdlAddress )
          {
            v29 = NdisHandle;
            v6 = ndisMGetLogData((__int64)NdisHandle, (__int64)a3);
            v78 = v6;
            StatisticsOids = v6;
            if ( v6 != 259 )
              v9 = 1;
            goto LABEL_114;
          }
LABEL_115:
          v6 = -1073741811;
LABEL_117:
          v29 = NdisHandle;
LABEL_114:
          v22 = 0LL;
          goto LABEL_29;
        }
        if ( CurrentStackLocation->Parameters.Create.Options < 4 )
          goto LABEL_115;
        v82 = *(_DWORD *)a3->AssociatedIrp.MasterIrp;
        if ( (unsigned __int8)ndisValidOid(v15, v82) )
        {
          v48 = a3->MdlAddress;
          if ( v48 )
            v49 = v48->ByteCount;
          else
            v49 = 0;
          if ( v49 )
          {
            if ( (v48->MdlFlags & 5) != 0 )
              v50 = v48->MappedSystemVa;
            else
              v50 = MmMapLockedPagesSpecifyCache(v48, 0, MmCached, 0LL, 0, ndisMdlMappingNxFlag);
            Src = v50;
            if ( !v50 )
            {
              StatisticsOids = -1073741670;
              v78 = -1073741670;
              goto LABEL_97;
            }
            PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, v49, 0x6D61444Eu);
            v5 = PoolWithTag;
            if ( !PoolWithTag )
            {
              v6 = -1073741670;
              goto LABEL_161;
            }
            v52 = PoolWithTag;
            memmove(PoolWithTag, Src, v49);
            v47 = *(_QWORD *)v84;
          }
          else
          {
            v52 = 0LL;
          }
          DeviceOid = ndisQueryDeviceOid(v47, v88, v82, v52, v49);
          v54 = *(_DWORD *)&v88[52];
          StatisticsOids = DeviceOid;
          v78 = DeviceOid;
          LODWORD(v83) = *(_DWORD *)&v88[52];
          if ( *(_DWORD *)&v88[52] > v49 )
          {
            v54 = 0;
            StatisticsOids = -1073676266;
            LODWORD(v83) = 0;
            v78 = -1073676266;
          }
          v9 = 1;
          a3->IoStatus.Information = v54;
          if ( StatisticsOids || !v54 || !Src )
            goto LABEL_95;
          if ( v5 )
          {
            memmove(Src, v5, v54);
LABEL_95:
            if ( v5 )
              ExFreePoolWithTag(v5, 0);
          }
LABEL_97:
          v29 = NdisHandle;
          v22 = 0LL;
          goto LABEL_29;
        }
        v6 = -1073741811;
LABEL_125:
        v29 = NdisHandle;
        goto LABEL_114;
      }
      if ( LowPart <= 0x1700B0 )
      {
        if ( LowPart == 1507504 )
        {
          PdInfo = ndisGetPdInfo((struct _NDIS_MINIPORT_BLOCK *)NdisHandle, a3);
        }
        else
        {
          v31 = LowPart - 1507472;
          if ( v31 )
          {
            v32 = v31 - 4;
            if ( !v32 )
            {
              v78 = 0;
              PowerInfo = ndisGetAdapterHardwareInfo(NdisHandle, a3, &v78);
              goto LABEL_144;
            }
            v33 = v32 - 4;
            if ( !v33 )
            {
              v78 = 0;
              PowerInfo = ndisGetAdapterRssInfo(NdisHandle);
              goto LABEL_144;
            }
            v34 = v33 - 4;
            if ( !v34 )
            {
              v35 = CurrentStackLocation->Parameters.Create.Options;
              v36 = CurrentStackLocation->Parameters.Read.Length;
              v37.MasterIrp = (_IRP *)a3->AssociatedIrp;
              v82 = v36;
              if ( (unsigned int)v35 < 0x2C )
                goto LABEL_132;
              if ( v36 < 0x2C )
                goto LABEL_132;
              if ( LOBYTE(v37.MasterIrp->Type) != 0xB9 )
                goto LABEL_132;
              if ( v37.MasterIrp->Size < 0x2Cu )
                goto LABEL_132;
              Blink = (unsigned __int16)v37.MasterIrp->ThreadListEntry.Blink;
              if ( Blink < 0x2Cu )
                goto LABEL_132;
              v39 = v36;
              if ( (unsigned int)v35 < v36 )
                v39 = v35;
              if ( Blink > v39 )
                goto LABEL_132;
              if ( !HIBYTE(v37.MasterIrp->Type) )
              {
                v6 = -1071448060;
                goto LABEL_134;
              }
              if ( !(unsigned __int8)ndisValidOid(v15, HIDWORD(v37.MasterIrp->MdlAddress)) )
              {
                v6 = -1073741637;
                goto LABEL_161;
              }
              Src = (char *)v37.MasterIrp + v40;
              if ( ((unsigned __int8)Src & 3) != 0 )
              {
                v6 = -2147483646;
                goto LABEL_161;
              }
              if ( !*(_BYTE *)(v41 + 24) && (*(_DWORD *)&v37.MasterIrp->AllocationProcessorNumber & 0xFFFFFFFD) != 0 )
              {
                v6 = -1073741790;
                goto LABEL_161;
              }
              memset(v88, 0, sizeof(v88));
              *(_DWORD *)&v88[88] |= 8u;
              v42 = Src;
              v43 = v82;
              *(_QWORD *)&v88[104] = &ndisIntReqIoctl;
              *(_DWORD *)v88 = 15466902;
              *(_DWORD *)&v88[32] = HIDWORD(v37.MasterIrp->MdlAddress);
              *(_DWORD *)&v88[4] = *(_DWORD *)&v37.MasterIrp->AllocationProcessorNumber;
              v44 = (int)v37.MasterIrp->MdlAddress;
              *(_DWORD *)&v88[48] = 0;
              *(_DWORD *)&v88[8] = v44;
              *(_QWORD *)&v88[40] = Src;
              if ( (unsigned int)v35 < v82 )
              {
                memset((char *)v37.MasterIrp + v35, 0, v82 - (unsigned int)v35);
                v43 = v82;
                v42 = Src;
              }
              v45 = *(_DWORD *)&v37.MasterIrp->AllocationProcessorNumber;
              if ( !v45 )
                goto LABEL_67;
              v66 = v45 - 1;
              if ( v66 )
              {
                v67 = v66 - 1;
                if ( !v67 )
                {
LABEL_67:
                  *(_DWORD *)&v88[48] = v43 - LOWORD(v37.MasterIrp->ThreadListEntry.Blink);
                  memset(v42, 0, *(unsigned int *)&v88[48]);
                  goto LABEL_68;
                }
                if ( v67 != 10 )
                  goto LABEL_155;
                *(_DWORD *)&v88[48] = v35 - LOWORD(v37.MasterIrp->ThreadListEntry.Blink);
                *(_DWORD *)&v88[52] = v43 - LOWORD(v37.MasterIrp->ThreadListEntry.Blink);
                *(_DWORD *)&v88[56] = v37.MasterIrp->Flags;
              }
              else
              {
                *(_DWORD *)&v88[48] = v35 - LOWORD(v37.MasterIrp->ThreadListEntry.Blink);
              }
LABEL_68:
              *(_DWORD *)&v88[12] = *(&v37.MasterIrp->Flags + 1);
              HIDWORD(v37.MasterIrp->ThreadListEntry.Flink) = ndisQuerySetMiniport(
                                                                *(void **)(*(_QWORD *)v84 + 8LL),
                                                                0LL,
                                                                (struct _NDIS_OID_REQUEST *)v88,
                                                                0LL,
                                                                0LL);
              if ( *(_DWORD *)&v88[4] )
              {
                if ( *(_DWORD *)&v88[4] == 1 )
                {
                  HIDWORD(v37.MasterIrp->AssociatedIrp.SystemBuffer) = *(_DWORD *)&v88[52];
                  goto LABEL_70;
                }
                if ( *(_DWORD *)&v88[4] != 2 )
                {
                  if ( *(_DWORD *)&v88[4] != 12 )
                    goto LABEL_72;
                  v37.MasterIrp->AssociatedIrp.IrpCount = *(_DWORD *)&v88[60];
                  HIDWORD(v37.MasterIrp->AssociatedIrp.SystemBuffer) = *(_DWORD *)&v88[64];
                  v46 = *(_DWORD *)&v88[68];
LABEL_71:
                  LODWORD(v37.MasterIrp->ThreadListEntry.Flink) = v46;
LABEL_72:
                  StatisticsOids = 0;
                  v29 = NdisHandle;
                  v22 = 0LL;
                  a3->IoStatus.Information = v82;
                  v9 = 1;
                  v78 = 0;
                  goto LABEL_29;
                }
              }
              v37.MasterIrp->AssociatedIrp.IrpCount = *(_DWORD *)&v88[52];
LABEL_70:
              v46 = *(_DWORD *)&v88[56];
              goto LABEL_71;
            }
            if ( v34 != 12 )
              goto LABEL_116;
            if ( *((_BYTE *)v15 + 24) )
            {
              ndisMiniportFatalError(NdisHandle, 70LL);
              StatisticsOids = 0;
            }
            else
            {
              v6 = -1073741790;
              StatisticsOids = -1073741790;
            }
            v78 = StatisticsOids;
LABEL_124:
            v9 = 1;
            goto LABEL_125;
          }
          PdInfo = ndisGetRdmaCapabilities(NdisHandle, a3);
        }
        StatisticsOids = PdInfo;
        v78 = PdInfo;
        v6 = PdInfo;
        goto LABEL_124;
      }
      v69 = LowPart - 2252868;
      if ( v69 )
      {
        v70 = v69 - 4;
        if ( !v70 || (v71 = v70 - 4) == 0 || (v72 = v71 - 4) == 0 )
        {
          v73 = ndisIovIoctlDetach(NdisHandle, a3);
          v29 = v74;
          goto LABEL_189;
        }
        if ( v72 != 4 )
          goto LABEL_116;
        v73 = ndisIovIoctlInvalidate((__int64)NdisHandle, (__int64)a3);
      }
      else
      {
        v73 = ndisIovIoctlNotification((__int64)NdisHandle, (__int64)a3);
      }
      v29 = NdisHandle;
LABEL_189:
      v78 = v73;
      StatisticsOids = v73;
      v6 = v73;
      v22 = 0LL;
      if ( v73 == 259 )
        v7 = 0;
      else
        v9 = 1;
      goto LABEL_29;
    }
    v7 = 0;
    v6 = ndisDummyHandler(v86, NdisHandle, a3);
  }
  else
  {
    v6 = -1073741823;
  }
  v29 = NdisHandle;
LABEL_40:
  MmUnlockPagableImageSection(ImageSectionHandle);
  _InterlockedDecrement((volatile signed __int32 *)&ndisPkgs);
  if ( v7 && v6 != 259 )
  {
    a3->IoStatus.Status = v6;
    IofCompleteRequest(a3, 2);
  }
  if ( (unsigned __int8)byte_1C00895D2 >= 4u )
    WPP_SF_qq(0x18u, &WPP_8ce524521b613c0e10407cfbf52a0b71_Traceguids, v29, a3);
  return v6;
}
