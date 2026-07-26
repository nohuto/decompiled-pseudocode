/*
 * XREFs of ndisHandlePnPRequest @ 0x1C00E5000
 * Callers:
 *     ndisDispatchRequest @ 0x1C0098EF0 (ndisDispatchRequest.c)
 * Callees:
 *     ndisDereferenceMiniport @ 0x1C0003280 (ndisDereferenceMiniport.c)
 *     ?ndisAoAcRefMiniportForIoctl@@YAEPEAU_NDIS_DEVICE_OBJECT_OPEN_CONTEXT@@KPEAU_NDIS_PM_NIC_ACTIVE@@EW4_NDIS_MP_REFTAG@@PEAJPEAPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0008DA0 (-ndisAoAcRefMiniportForIoctl@@YAEPEAU_NDIS_DEVICE_OBJECT_OPEN_CONTEXT@@KPEAU_NDIS_PM_NIC_ACTIVE@.c)
 *     ndisConfigurePeriodicReceives @ 0x1C0008E54 (ndisConfigurePeriodicReceives.c)
 *     NdisGetVersion @ 0x1C0020610 (NdisGetVersion.c)
 *     ndisIfCreatePersistedInterface @ 0x1C0020620 (ndisIfCreatePersistedInterface.c)
 *     ndisIfSetIfDescr @ 0x1C0020978 (ndisIfSetIfDescr.c)
 *     ndisIfReferenceCompartmentForUser @ 0x1C0021CBC (ndisIfReferenceCompartmentForUser.c)
 *     memmove @ 0x1C0023700 (memmove.c)
 *     memset @ 0x1C0023A40 (memset.c)
 *     ndisIfDeletePersistedInterface @ 0x1C003E528 (ndisIfDeletePersistedInterface.c)
 *     ?ndisAoAcEnableRemoteWake@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PM_NIC_ACTIVE@@E@Z @ 0x1C0069698 (-ndisAoAcEnableRemoteWake@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PM_NIC_ACTIVE@@E@Z.c)
 *     ?ndisNicActiveAcquire@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_DEVICE_OBJECT_OPEN_CONTEXT@@PEAU_NDIS_PM_NIC_ACTIVE@@PEAU_IRP@@@Z @ 0x1C006A390 (-ndisNicActiveAcquire@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_DEVICE_OBJECT_OPEN_CONTEXT@@PEAU_N.c)
 *     ?ndisNicActiveRelease@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_DEVICE_OBJECT_OPEN_CONTEXT@@PEAU_NDIS_PM_NIC_ACTIVE@@@Z @ 0x1C006A630 (-ndisNicActiveRelease@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_DEVICE_OBJECT_OPEN_CONTEXT@@PEAU_N.c)
 *     ?NdisTraceLoggingRareFeaturePath@@YAXW4NdisTLRareFeature@@@Z @ 0x1C006ED60 (-NdisTraceLoggingRareFeaturePath@@YAXW4NdisTLRareFeature@@@Z.c)
 *     ndispConvVar @ 0x1C00992C8 (ndispConvVar.c)
 *     ndisHandleUModePnPOp @ 0x1C0099308 (ndisHandleUModePnPOp.c)
 *     ndispConvOffsetToPointer @ 0x1C009948C (ndispConvOffsetToPointer.c)
 *     ?ndisPnpRefresh@@YAXPEBU_NDIS_PNP_REFRESH_IN@@@Z @ 0x1C009BFC4 (-ndisPnpRefresh@@YAXPEBU_NDIS_PNP_REFRESH_IN@@@Z.c)
 *     ?ndisIsInNetSetupMode@@YA_NXZ @ 0x1C00A0A30 (-ndisIsInNetSetupMode@@YA_NXZ.c)
 *     ndisTraceRundownDeviceControl @ 0x1C00AD174 (ndisTraceRundownDeviceControl.c)
 *     ndisHandleLegacyTransport @ 0x1C00B14B0 (ndisHandleLegacyTransport.c)
 *     NdisIfAllocateNetLuidIndex @ 0x1C00B3900 (NdisIfAllocateNetLuidIndex.c)
 *     NdisIfFreeNetLuidIndex @ 0x1C00C63F0 (NdisIfFreeNetLuidIndex.c)
 *     ndisIfEnumerateNsiObjects @ 0x1C00C67BC (ndisIfEnumerateNsiObjects.c)
 *     ?ndisPnpInvokeTdi@@YAJW4_NDIS_TDI_VERB@@PEBU_UNICODE_STRING@@1PEAXK@Z @ 0x1C00CD13C (-ndisPnpInvokeTdi@@YAJW4_NDIS_TDI_VERB@@PEBU_UNICODE_STRING@@1PEAXK@Z.c)
 *     ?ndisValidateOffsetAndLength@@YA_NPEAU_IRP@@PEBU_NDIS_OFFSET_AND_LENGTH@@PEAPEAX@Z @ 0x1C00CD1B0 (-ndisValidateOffsetAndLength@@YA_NPEAU_IRP@@PEBU_NDIS_OFFSET_AND_LENGTH@@PEAPEAX@Z.c)
 *     ?ndisValidateUnicodeStringFromOffsetAndLength@@YA_NPEAU_IRP@@PEBU_NDIS_OFFSET_AND_LENGTH@@PEAU_UNICODE_STRING@@@Z @ 0x1C00CD20C (-ndisValidateUnicodeStringFromOffsetAndLength@@YA_NPEAU_IRP@@PEBU_NDIS_OFFSET_AND_LENGTH@@PEAU_U.c)
 *     ndisEnumerateInterfaces @ 0x1C00EB5EC (ndisEnumerateInterfaces.c)
 *     ndisEnumerateInterfaces32 @ 0x1C00F1D98 (ndisEnumerateInterfaces32.c)
 */

__int64 __fastcall ndisHandlePnPRequest(struct _IRP *a1)
{
  unsigned int v2; // r15d
  _IO_STACK_LOCATION *CurrentStackLocation; // rdx
  char *FsContext; // rbx
  unsigned int LowPart; // eax
  char v6; // r12
  unsigned __int64 Options; // r14
  unsigned __int64 Length; // r13
  __int64 MasterIrp; // rdi
  unsigned int v10; // eax
  unsigned int v11; // eax
  unsigned int v12; // eax
  unsigned int NetLuidIndex; // ebx
  unsigned int v16; // eax
  unsigned int v17; // eax
  unsigned int v18; // eax
  unsigned int v19; // eax
  unsigned int v20; // eax
  __int64 v21; // r15
  __int64 v22; // r8
  unsigned int *v23; // r12
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // rcx
  __int64 v29; // r8
  unsigned int v30; // eax
  unsigned int v31; // eax
  const WCHAR *p_Type; // rdx
  unsigned int v33; // eax
  unsigned int v34; // eax
  unsigned int v35; // eax
  unsigned int v36; // eax
  unsigned int v37; // eax
  int v38; // eax
  unsigned int v39; // eax
  __int64 v40; // rdx
  __int64 v41; // r8
  __int64 v42; // r10
  __int64 v43; // r9
  PVOID PoolWithTag; // rax
  _DWORD *v45; // rsi
  char *v46; // rbx
  char *v47; // rbx
  __int64 v48; // rcx
  char *v49; // rcx
  unsigned int active; // eax
  unsigned __int8 v51; // dl
  _UNICODE_STRING DestinationString; // [rsp+40h] [rbp-30h] BYREF
  struct _UNICODE_STRING v53; // [rsp+50h] [rbp-20h] BYREF
  struct _UNICODE_STRING v54; // [rsp+60h] [rbp-10h] BYREF
  struct _NDIS_MINIPORT_BLOCK *pNetLuidIndex; // [rsp+B0h] [rbp+40h] BYREF
  int v56; // [rsp+B8h] [rbp+48h] BYREF
  PVOID P; // [rsp+C0h] [rbp+50h]

  v56 = 0;
  v2 = 0;
  LODWORD(pNetLuidIndex) = 0;
  P = 0LL;
  CurrentStackLocation = a1->Tail.Overlay.CurrentStackLocation;
  FsContext = (char *)CurrentStackLocation->FileObject->FsContext;
  if ( !FsContext )
    return 3221225487LL;
  LowPart = CurrentStackLocation->Parameters.Read.ByteOffset.LowPart;
  v6 = *FsContext;
  if ( (LowPart & 3) == 0 )
  {
    Options = CurrentStackLocation->Parameters.Create.Options;
    Length = CurrentStackLocation->Parameters.Read.Length;
    MasterIrp = (__int64)a1->AssociatedIrp.MasterIrp;
    if ( LowPart > 0x170054 )
    {
      if ( LowPart > 0x1700A0 )
      {
        v10 = LowPart - 1507492;
        if ( v10 )
        {
          v11 = v10 - 8;
          if ( !v11 )
          {
            if ( v6 )
            {
              if ( (unsigned int)Options >= 0x18 )
              {
                if ( *((_QWORD *)FsContext + 9) )
                  return (unsigned int)-1073740024;
                return (unsigned int)ndisIfReferenceCompartmentForUser(
                                       (struct _GUID *)(MasterIrp + 4),
                                       *(unsigned int *)(MasterIrp + 20),
                                       (struct _NDIS_IF_COMPARTMENT_BLOCK **)FsContext + 9);
              }
              return (unsigned int)-1073741789;
            }
            return (unsigned int)-1073741790;
          }
          v12 = v11 - 1880;
          if ( v12 )
          {
            if ( v12 != 4 )
              return (unsigned int)ndisTraceRundownDeviceControl(
                                     0LL,
                                     (__int64)CurrentStackLocation,
                                     (__int64)(FsContext + 48));
            if ( FsContext[1] )
            {
              if ( (unsigned int)Options >= 0x1C )
              {
                pNetLuidIndex = 0LL;
                if ( !ndisValidateUnicodeStringFromOffsetAndLength(
                        a1,
                        (const struct _NDIS_OFFSET_AND_LENGTH *)(MasterIrp + 4),
                        &v54)
                  || !ndisValidateUnicodeStringFromOffsetAndLength(
                        a1,
                        (const struct _NDIS_OFFSET_AND_LENGTH *)(MasterIrp + 12),
                        &v53)
                  || !ndisValidateOffsetAndLength(
                        a1,
                        (const struct _NDIS_OFFSET_AND_LENGTH *)(MasterIrp + 20),
                        (const struct _NDIS_OFFSET_AND_LENGTH **)&pNetLuidIndex) )
                {
                  return (unsigned int)-1073741811;
                }
                return (unsigned int)ndisPnpInvokeTdi(*(_DWORD *)MasterIrp, (__int64)&v54, (__int64)&v53);
              }
              return (unsigned int)-1073741789;
            }
            return (unsigned int)-1073741790;
          }
          if ( !FsContext[1] )
            return (unsigned int)-1073741790;
          if ( (unsigned int)Options < 0x10 )
            return (unsigned int)-1073741789;
          NetLuidIndex = 0;
          if ( ndisIsInNetSetupMode() )
          {
            ndisPnpRefresh((struct _GUID *)MasterIrp);
            return NetLuidIndex;
          }
          return (unsigned int)-1073741637;
        }
        if ( ndisAoAcRefMiniportForIoctl(
               (struct _NDIS_DEVICE_OBJECT_OPEN_CONTEXT *)FsContext,
               Options,
               (enum _NDIS_PM_COMPONENT_ID *)MasterIrp,
               1,
               MPREF_AOAC_WAKE_DISABLE,
               &v56,
               &pNetLuidIndex) )
        {
          NetLuidIndex = ndisAoAcEnableRemoteWake(pNetLuidIndex, (struct _NDIS_PM_NIC_ACTIVE *)MasterIrp, 0);
          ndisDereferenceMiniport((__int64)pNetLuidIndex, 6u);
          goto LABEL_35;
        }
        return (unsigned int)v56;
      }
      if ( LowPart == 1507488 )
      {
        if ( !ndisAoAcRefMiniportForIoctl(
                (struct _NDIS_DEVICE_OBJECT_OPEN_CONTEXT *)FsContext,
                Options,
                (enum _NDIS_PM_COMPONENT_ID *)MasterIrp,
                1,
                MPREF_AOAC_WAKE_ENABLE,
                &v56,
                &pNetLuidIndex) )
          return (unsigned int)v56;
        active = ndisAoAcEnableRemoteWake(pNetLuidIndex, (struct _NDIS_PM_NIC_ACTIVE *)MasterIrp, 1u);
        v51 = 5;
      }
      else
      {
        v16 = LowPart - 1507416;
        if ( !v16 )
          return (unsigned int)-1073741637;
        v17 = v16 - 4;
        if ( !v17 )
          return (unsigned int)-1073741637;
        v18 = v17 - 4;
        if ( !v18 )
          return (unsigned int)-1073741637;
        v19 = v18 - 40;
        if ( v19 )
        {
          if ( v19 != 4 )
            return (unsigned int)ndisTraceRundownDeviceControl(
                                   0LL,
                                   (__int64)CurrentStackLocation,
                                   (__int64)(FsContext + 48));
          if ( !ndisAoAcRefMiniportForIoctl(
                  (struct _NDIS_DEVICE_OBJECT_OPEN_CONTEXT *)FsContext,
                  Options,
                  (enum _NDIS_PM_COMPONENT_ID *)MasterIrp,
                  0,
                  MPREF_AOAC_NA_RELEASE,
                  &v56,
                  &pNetLuidIndex) )
            return (unsigned int)v56;
          active = ndisNicActiveRelease(
                     pNetLuidIndex,
                     (struct _NDIS_DEVICE_OBJECT_OPEN_CONTEXT *)FsContext,
                     (struct _NDIS_PM_NIC_ACTIVE *)MasterIrp);
          v51 = 1;
        }
        else
        {
          if ( !ndisAoAcRefMiniportForIoctl(
                  (struct _NDIS_DEVICE_OBJECT_OPEN_CONTEXT *)FsContext,
                  Options,
                  (enum _NDIS_PM_COMPONENT_ID *)MasterIrp,
                  1,
                  MPREF_AOAC_NA_ACQUIRE,
                  &v56,
                  &pNetLuidIndex) )
            return (unsigned int)v56;
          active = ndisNicActiveAcquire(
                     pNetLuidIndex,
                     (struct _NDIS_DEVICE_OBJECT_OPEN_CONTEXT *)FsContext,
                     (struct _NDIS_PM_NIC_ACTIVE *)MasterIrp,
                     a1);
          v51 = 0;
        }
      }
      NetLuidIndex = active;
      ndisDereferenceMiniport((__int64)pNetLuidIndex, v51);
      return NetLuidIndex;
    }
    if ( LowPart == 1507412 )
    {
      if ( !v6 )
        return 3221225506LL;
      if ( IoIs32bitProcess(a1) )
        return (unsigned int)-1073741637;
      if ( (unsigned int)Options >= 0x20C )
      {
        v37 = ndisIfSetIfDescr(MasterIrp);
LABEL_60:
        NetLuidIndex = v37;
LABEL_61:
        a1->IoStatus.Information = 0LL;
        return NetLuidIndex;
      }
    }
    else
    {
      if ( LowPart <= 0x170040 )
      {
        if ( LowPart != 1507392 )
        {
          v20 = LowPart - 1507336;
          if ( !v20 )
          {
            if ( v6 )
            {
              NetLuidIndex = -1073741789;
              v21 = (__int64)a1->AssociatedIrp.MasterIrp;
              if ( IoIs32bitProcess(a1) )
              {
                if ( (unsigned int)Options < 0x28 )
                  return NetLuidIndex;
                v40 = *(unsigned __int16 *)(MasterIrp + 18);
                v41 = *(unsigned int *)(MasterIrp + 12);
                v42 = *(unsigned __int16 *)(MasterIrp + 34);
                v43 = *(unsigned __int16 *)(MasterIrp + 26);
                if ( Options < v43 + v40 + v41 + v42 + 40 )
                  return NetLuidIndex;
                LODWORD(Options) = v42 + 80 + v40 + v41 + v43;
                PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, (unsigned int)Options, 0x2020444Eu);
                P = PoolWithTag;
                v45 = PoolWithTag;
                if ( !PoolWithTag )
                  return (unsigned int)-1073741670;
                memset(PoolWithTag, 0, (unsigned int)Options);
                *v45 = *(_DWORD *)MasterIrp;
                v21 = (__int64)v45;
                v45[1] = *(_DWORD *)(MasterIrp + 4);
                *((_WORD *)v45 + 13) = *(_WORD *)(MasterIrp + 18);
                *((_WORD *)v45 + 12) = *(_WORD *)(MasterIrp + 16);
                *((_QWORD *)v45 + 4) = 72LL;
                memmove(
                  v45 + 18,
                  (const void *)(MasterIrp + *(unsigned int *)(MasterIrp + 20)),
                  *(unsigned __int16 *)(MasterIrp + 18));
                v46 = (char *)v45 + *((unsigned __int16 *)v45 + 13) + 72;
                *((_WORD *)v45 + 21) = *(_WORD *)(MasterIrp + 26);
                *((_WORD *)v45 + 20) = *(_WORD *)(MasterIrp + 24);
                *((_QWORD *)v45 + 6) = v46 - (char *)v45;
                memmove(
                  v46,
                  (const void *)(MasterIrp + *(unsigned int *)(MasterIrp + 28)),
                  *(unsigned __int16 *)(MasterIrp + 26));
                v47 = &v46[*((unsigned __int16 *)v45 + 21)];
                *((_WORD *)v45 + 29) = *(_WORD *)(MasterIrp + 34);
                *((_WORD *)v45 + 28) = *(_WORD *)(MasterIrp + 32);
                *((_QWORD *)v45 + 8) = v47 - (char *)v45;
                memmove(
                  v47,
                  (const void *)(MasterIrp + *(unsigned int *)(MasterIrp + 36)),
                  *(unsigned __int16 *)(MasterIrp + 34));
                v23 = v45 + 4;
                v48 = *((unsigned __int16 *)v45 + 29);
                v45[4] = *(_DWORD *)(MasterIrp + 12);
                v49 = (char *)((unsigned __int64)&v47[v48 + 7] & 0xFFFFFFFFFFFFFFF8uLL);
                *((_QWORD *)v45 + 1) = v49 - (char *)v45;
                memmove(
                  v49,
                  (const void *)(MasterIrp + *(unsigned int *)(MasterIrp + 8)),
                  *(unsigned int *)(MasterIrp + 12));
              }
              else
              {
                if ( (unsigned int)Options < 0x48 )
                  return NetLuidIndex;
                v23 = (unsigned int *)(MasterIrp + 16);
                if ( Options < *(unsigned int *)(MasterIrp + 16)
                             + 72LL
                             + *(unsigned __int16 *)(MasterIrp + 26)
                             + *(unsigned __int16 *)(MasterIrp + 42)
                             + (unsigned __int64)*(unsigned __int16 *)(MasterIrp + 58) )
                  return NetLuidIndex;
              }
              NetLuidIndex = ndispConvVar(v21, Options, v22, (unsigned __int16 *)(v21 + 24));
              if ( (NetLuidIndex & 0x80000000) == 0 )
              {
                NetLuidIndex = ndispConvVar(v24, Options, v25, (unsigned __int16 *)(v21 + 40));
                if ( (NetLuidIndex & 0x80000000) == 0 )
                {
                  NetLuidIndex = ndispConvVar(v26, Options, v27, (unsigned __int16 *)(v21 + 56));
                  if ( (NetLuidIndex & 0x80000000) == 0 )
                  {
                    NetLuidIndex = ndispConvOffsetToPointer(v28, Options, v29, (unsigned __int64 *)(v21 + 8), *v23, 8);
                    if ( (NetLuidIndex & 0x80000000) == 0 )
                      NetLuidIndex = ndisHandleUModePnPOp(v21);
                  }
                }
              }
LABEL_35:
              if ( P )
                ExFreePoolWithTag(P, 0);
              return NetLuidIndex;
            }
            return 3221225506LL;
          }
          v30 = v20 - 8;
          if ( v30 )
          {
            v31 = v30 - 4;
            if ( !v31 )
            {
              if ( v6 )
              {
                NetLuidIndex = -1073741811;
                if ( !(_DWORD)Options || (Options & 1) != 0 )
                  return NetLuidIndex;
                p_Type = &a1->AssociatedIrp.MasterIrp->Type;
                *(_WORD *)(MasterIrp + 2 * (Options >> 1) - 2) = 0;
                RtlInitUnicodeString(&DestinationString, p_Type);
                return (unsigned int)ndisHandleLegacyTransport((__int64)&DestinationString);
              }
              return 3221225506LL;
            }
            v39 = v31 - 12;
            if ( v39 )
            {
              if ( v39 != 20 )
                return (unsigned int)ndisTraceRundownDeviceControl(
                                       0LL,
                                       (__int64)CurrentStackLocation,
                                       (__int64)(FsContext + 48));
              NdisTraceLoggingRareFeaturePath(0LL);
              if ( !v6 )
                return 3221225506LL;
              if ( (unsigned int)Options >= 0x30 && (unsigned int)Length >= 0x30 )
              {
                v33 = ndisIfEnumerateNsiObjects((NET_LUID *)MasterIrp, Length, &pNetLuidIndex);
                goto LABEL_46;
              }
            }
            else if ( (unsigned int)Length >= 4 )
            {
              *(_DWORD *)MasterIrp = NdisGetVersion();
              v2 = 4;
              if ( (unsigned int)Length >= 8 )
              {
                v2 = 8;
                *(_DWORD *)(MasterIrp + 4) = ndisChecked;
              }
              NetLuidIndex = 0;
              goto LABEL_47;
            }
          }
          else if ( IoIs32bitProcess(a1) )
          {
            if ( (unsigned int)Length >= 0x20 )
            {
              v33 = ndisEnumerateInterfaces32(MasterIrp, (unsigned int)Length, &pNetLuidIndex);
              a1->IoStatus.Information = Length;
              goto LABEL_46;
            }
          }
          else if ( (unsigned int)Length >= 0x30 )
          {
            v33 = ndisEnumerateInterfaces(MasterIrp, (unsigned int)Length, &pNetLuidIndex);
LABEL_46:
            v2 = (unsigned int)pNetLuidIndex;
            NetLuidIndex = v33;
LABEL_47:
            a1->IoStatus.Information = v2;
            return NetLuidIndex;
          }
LABEL_91:
          NetLuidIndex = -1073741789;
          goto LABEL_47;
        }
        if ( v6 )
        {
          if ( IoIs32bitProcess(a1) )
            return (unsigned int)-1073741637;
          if ( (unsigned int)Options >= 0x10 )
          {
            if ( ndisPeriodicReceives )
            {
              if ( *(_WORD *)MasterIrp == 1 && *(_WORD *)(MasterIrp + 2) == 16 )
              {
                v38 = *(_DWORD *)(MasterIrp + 4);
                if ( v38 && (v38 == -1 || *(_QWORD *)(MasterIrp + 8)) )
                {
                  ndisConfigurePeriodicReceives((LARGE_INTEGER *)MasterIrp);
                  NetLuidIndex = 0;
                }
                else
                {
                  NetLuidIndex = -1073741811;
                }
              }
              else
              {
                NetLuidIndex = -1073741735;
              }
            }
            else
            {
              NetLuidIndex = -1073741823;
            }
            goto LABEL_55;
          }
          goto LABEL_105;
        }
        return 3221225506LL;
      }
      v34 = LowPart - 1507396;
      if ( !v34 )
      {
        if ( v6 )
        {
          if ( IoIs32bitProcess(a1) )
            return (unsigned int)-1073741637;
          if ( (unsigned int)Options >= 2 && (unsigned int)Length >= 4 )
          {
            NetLuidIndex = NdisIfAllocateNetLuidIndex(*(_WORD *)MasterIrp, (PUINT32)&pNetLuidIndex);
            if ( !NetLuidIndex )
            {
              v2 = 4;
              *(_DWORD *)MasterIrp = (_DWORD)pNetLuidIndex;
            }
            goto LABEL_47;
          }
          goto LABEL_91;
        }
        return 3221225506LL;
      }
      v35 = v34 - 4;
      if ( v35 )
      {
        v36 = v35 - 4;
        if ( !v36 )
        {
          if ( v6 )
          {
            if ( IoIs32bitProcess(a1) )
              return (unsigned int)-1073741637;
            if ( (unsigned int)Options >= 0x490 )
            {
              NetLuidIndex = ndisIfCreatePersistedInterface(
                               (union _NET_LUID_LH *)MasterIrp,
                               NdisIfBlockSourcePersistedNsi);
LABEL_55:
              a1->IoStatus.Information = 0LL;
              return NetLuidIndex;
            }
LABEL_105:
            NetLuidIndex = -1073741789;
            goto LABEL_55;
          }
          return 3221225506LL;
        }
        if ( v36 != 4 )
          return (unsigned int)ndisTraceRundownDeviceControl(
                                 0LL,
                                 (__int64)CurrentStackLocation,
                                 (__int64)(FsContext + 48));
        if ( !v6 )
          return 3221225506LL;
        if ( IoIs32bitProcess(a1) )
          return (unsigned int)-1073741637;
        if ( (unsigned int)Options >= 8 )
        {
          v37 = ndisIfDeletePersistedInterface(MasterIrp);
          goto LABEL_60;
        }
      }
      else
      {
        if ( !v6 )
          return 3221225506LL;
        if ( IoIs32bitProcess(a1) )
          return (unsigned int)-1073741637;
        if ( (unsigned int)Options >= 8 )
        {
          v37 = NdisIfFreeNetLuidIndex(*(_WORD *)(MasterIrp + 4), *(_DWORD *)MasterIrp);
          goto LABEL_60;
        }
      }
    }
    NetLuidIndex = -1073741789;
    goto LABEL_61;
  }
  return 3221225485LL;
}
