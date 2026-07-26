/*
 * XREFs of ndisHandlePnPRequest @ 0x1C00EBC18
 * Callers:
 *     ndisDispatchRequest @ 0x1C00AD4B0 (ndisDispatchRequest.c)
 * Callees:
 *     ndisDereferenceMiniport @ 0x1C000CD90 (ndisDereferenceMiniport.c)
 *     ?ndisAoAcRefMiniportForIoctl@@YAEPEAU_NDIS_DEVICE_OBJECT_OPEN_CONTEXT@@KPEAU_NDIS_PM_NIC_ACTIVE@@EW4_NDIS_MP_REFTAG@@PEAJPEAPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C001C12C (-ndisAoAcRefMiniportForIoctl@@YAEPEAU_NDIS_DEVICE_OBJECT_OPEN_CONTEXT@@KPEAU_NDIS_PM_NIC_ACTIVE@.c)
 *     ndisConfigurePeriodicReceives @ 0x1C001C1A4 (ndisConfigurePeriodicReceives.c)
 *     NdisGetVersion @ 0x1C0020680 (NdisGetVersion.c)
 *     memmove @ 0x1C00271C0 (memmove.c)
 *     memset @ 0x1C0027500 (memset.c)
 *     ndisIfCreatePersistedInterface @ 0x1C0043470 (ndisIfCreatePersistedInterface.c)
 *     ndisIfDeletePersistedInterface @ 0x1C0043658 (ndisIfDeletePersistedInterface.c)
 *     ndisIfReferenceCompartmentForUser @ 0x1C0043988 (ndisIfReferenceCompartmentForUser.c)
 *     ndisIfSetIfDescr @ 0x1C0043A74 (ndisIfSetIfDescr.c)
 *     ?ndisAoAcEnableRemoteWake@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PM_NIC_ACTIVE@@E@Z @ 0x1C006D1B4 (-ndisAoAcEnableRemoteWake@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PM_NIC_ACTIVE@@E@Z.c)
 *     ?ndisNicActiveAcquire@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_DEVICE_OBJECT_OPEN_CONTEXT@@PEAU_NDIS_PM_NIC_ACTIVE@@PEAU_IRP@@@Z @ 0x1C006DF84 (-ndisNicActiveAcquire@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_DEVICE_OBJECT_OPEN_CONTEXT@@PEAU_N.c)
 *     ?ndisNicActiveRelease@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_DEVICE_OBJECT_OPEN_CONTEXT@@PEAU_NDIS_PM_NIC_ACTIVE@@@Z @ 0x1C006E224 (-ndisNicActiveRelease@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_DEVICE_OBJECT_OPEN_CONTEXT@@PEAU_N.c)
 *     ?NdisTraceLoggingRareFeaturePath@@YAXW4NdisTLRareFeature@@@Z @ 0x1C00730DC (-NdisTraceLoggingRareFeaturePath@@YAXW4NdisTLRareFeature@@@Z.c)
 *     NdisIfFreeNetLuidIndex @ 0x1C009CBB0 (NdisIfFreeNetLuidIndex.c)
 *     ?ndisPnpRefresh@@YAXPEBU_NDIS_PNP_REFRESH_IN@@@Z @ 0x1C009CF00 (-ndisPnpRefresh@@YAXPEBU_NDIS_PNP_REFRESH_IN@@@Z.c)
 *     ?ndisIsInNetSetupMode@@YA_NXZ @ 0x1C00A8C10 (-ndisIsInNetSetupMode@@YA_NXZ.c)
 *     ndispConvVar @ 0x1C00AD648 (ndispConvVar.c)
 *     ndispConvOffsetToPointer @ 0x1C00AD66C (ndispConvOffsetToPointer.c)
 *     ndisHandleLegacyTransport @ 0x1C00AD6B0 (ndisHandleLegacyTransport.c)
 *     ndisHandleUModePnPOp @ 0x1C00AD7C4 (ndisHandleUModePnPOp.c)
 *     NdisIfAllocateNetLuidIndex @ 0x1C00C4490 (NdisIfAllocateNetLuidIndex.c)
 *     ndisIfEnumerateNsiObjects @ 0x1C00C477C (ndisIfEnumerateNsiObjects.c)
 *     ?ndisPnpInvokeTdi@@YAJW4_NDIS_TDI_VERB@@PEBU_UNICODE_STRING@@1PEAXK@Z @ 0x1C00CBFFC (-ndisPnpInvokeTdi@@YAJW4_NDIS_TDI_VERB@@PEBU_UNICODE_STRING@@1PEAXK@Z.c)
 *     ?ndisValidateOffsetAndLength@@YA_NPEAU_IRP@@PEBU_NDIS_OFFSET_AND_LENGTH@@PEAPEAX@Z @ 0x1C00CC070 (-ndisValidateOffsetAndLength@@YA_NPEAU_IRP@@PEBU_NDIS_OFFSET_AND_LENGTH@@PEAPEAX@Z.c)
 *     ?ndisValidateUnicodeStringFromOffsetAndLength@@YA_NPEAU_IRP@@PEBU_NDIS_OFFSET_AND_LENGTH@@PEAU_UNICODE_STRING@@@Z @ 0x1C00CC0CC (-ndisValidateUnicodeStringFromOffsetAndLength@@YA_NPEAU_IRP@@PEBU_NDIS_OFFSET_AND_LENGTH@@PEAU_U.c)
 *     ndisEnumerateInterfaces @ 0x1C00EBFE0 (ndisEnumerateInterfaces.c)
 *     ndisEnumerateInterfaces32 @ 0x1C00F2580 (ndisEnumerateInterfaces32.c)
 */

__int64 __fastcall ndisHandlePnPRequest(struct _IRP *a1)
{
  _IO_STACK_LOCATION *CurrentStackLocation; // rcx
  unsigned int NetLuidIndex; // ebx
  unsigned int v4; // r15d
  char *FsContext; // r12
  unsigned int LowPart; // eax
  char v7; // r13
  unsigned __int64 Options; // r14
  const struct _TlgProvider_t *Length; // rcx
  __int64 MasterIrp; // rdi
  unsigned int v11; // eax
  unsigned int v12; // eax
  unsigned int v13; // eax
  unsigned int v14; // eax
  unsigned int v16; // eax
  unsigned int v17; // eax
  unsigned int v18; // eax
  unsigned int v20; // eax
  __int64 v21; // r15
  int v22; // r8d
  unsigned int *v23; // r12
  int v24; // r8d
  int v25; // r8d
  __int64 v26; // r8
  int v27; // eax
  unsigned int v28; // eax
  unsigned int v29; // eax
  unsigned int v30; // eax
  unsigned int v31; // eax
  UINT Version; // eax
  bool v33; // cf
  unsigned __int64 v34; // r14
  __int64 v35; // rdx
  __int64 v36; // r8
  __int64 v37; // r10
  __int64 v38; // r9
  PVOID PoolWithTag; // rax
  _DWORD *v40; // rsi
  char *v41; // rbx
  char *v42; // rbx
  __int64 v43; // rcx
  char *v44; // rcx
  unsigned int v45; // eax
  unsigned int v46; // eax
  unsigned int v47; // eax
  unsigned int v48; // eax
  unsigned int active; // eax
  _UNICODE_STRING DestinationString; // [rsp+40h] [rbp-38h] BYREF
  struct _UNICODE_STRING v51; // [rsp+50h] [rbp-28h] BYREF
  struct _UNICODE_STRING v52; // [rsp+60h] [rbp-18h] BYREF
  struct _NDIS_MINIPORT_BLOCK *pNetLuidIndex; // [rsp+C0h] [rbp+48h] BYREF
  size_t Size; // [rsp+C8h] [rbp+50h]
  int v55; // [rsp+D0h] [rbp+58h] BYREF
  PVOID P; // [rsp+D8h] [rbp+60h]

  CurrentStackLocation = a1->Tail.Overlay.CurrentStackLocation;
  NetLuidIndex = 0;
  v55 = 0;
  v4 = 0;
  LODWORD(pNetLuidIndex) = 0;
  P = 0LL;
  FsContext = (char *)CurrentStackLocation->FileObject->FsContext;
  if ( !FsContext )
    return 3221225487LL;
  LowPart = CurrentStackLocation->Parameters.Read.ByteOffset.LowPart;
  v7 = *FsContext;
  if ( (LowPart & 3) == 0 )
  {
    Options = CurrentStackLocation->Parameters.Create.Options;
    Length = (const struct _TlgProvider_t *)CurrentStackLocation->Parameters.Read.Length;
    MasterIrp = (__int64)a1->AssociatedIrp.MasterIrp;
    LODWORD(Size) = (_DWORD)Length;
    if ( LowPart > 0x170054 )
    {
      if ( LowPart == 1507488 )
      {
        if ( !ndisAoAcRefMiniportForIoctl(
                (struct _NDIS_DEVICE_OBJECT_OPEN_CONTEXT *)FsContext,
                Options,
                (struct _NDIS_PM_NIC_ACTIVE *)MasterIrp,
                1,
                MPREF_AOAC_WAKE_ENABLE,
                &v55,
                &pNetLuidIndex) )
          return (unsigned int)v55;
        active = ndisAoAcEnableRemoteWake(pNetLuidIndex, (struct _NDIS_PM_NIC_ACTIVE *)MasterIrp, 1u);
        goto LABEL_117;
      }
      if ( LowPart <= 0x1700A0 )
      {
        v11 = LowPart - 1507416;
        if ( v11 )
        {
          v12 = v11 - 4;
          if ( v12 )
          {
            v13 = v12 - 4;
            if ( v13 )
            {
              v14 = v13 - 40;
              if ( v14 )
              {
                if ( v14 != 4 )
                  return NetLuidIndex;
                if ( !ndisAoAcRefMiniportForIoctl(
                        (struct _NDIS_DEVICE_OBJECT_OPEN_CONTEXT *)FsContext,
                        Options,
                        (struct _NDIS_PM_NIC_ACTIVE *)MasterIrp,
                        0,
                        MPREF_AOAC_NA_RELEASE,
                        &v55,
                        &pNetLuidIndex) )
                  return (unsigned int)v55;
                active = ndisNicActiveRelease(
                           pNetLuidIndex,
                           (struct _NDIS_DEVICE_OBJECT_OPEN_CONTEXT *)FsContext,
                           (struct _NDIS_PM_NIC_ACTIVE *)MasterIrp);
              }
              else
              {
                if ( !ndisAoAcRefMiniportForIoctl(
                        (struct _NDIS_DEVICE_OBJECT_OPEN_CONTEXT *)FsContext,
                        Options,
                        (struct _NDIS_PM_NIC_ACTIVE *)MasterIrp,
                        1,
                        MPREF_AOAC_NA_ACQUIRE,
                        &v55,
                        &pNetLuidIndex) )
                  return (unsigned int)v55;
                active = ndisNicActiveAcquire(
                           pNetLuidIndex,
                           (struct _NDIS_DEVICE_OBJECT_OPEN_CONTEXT *)FsContext,
                           (struct _NDIS_PM_NIC_ACTIVE *)MasterIrp,
                           a1);
              }
LABEL_117:
              NetLuidIndex = active;
              ndisDereferenceMiniport((__int64)pNetLuidIndex);
              return NetLuidIndex;
            }
          }
        }
        return (unsigned int)-1073741637;
      }
      v28 = LowPart - 1507492;
      if ( v28 )
      {
        v29 = v28 - 8;
        if ( v29 )
        {
          v30 = v29 - 1880;
          if ( !v30 )
          {
            if ( FsContext[1] )
            {
              if ( (unsigned int)Options >= 0x10 )
              {
                if ( ndisIsInNetSetupMode() )
                {
                  ndisPnpRefresh((struct _GUID *)MasterIrp);
                  return NetLuidIndex;
                }
                return (unsigned int)-1073741637;
              }
              return (unsigned int)-1073741789;
            }
            return (unsigned int)-1073741790;
          }
          if ( v30 != 4 )
            return NetLuidIndex;
          if ( !FsContext[1] )
            return (unsigned int)-1073741790;
          if ( (unsigned int)Options < 0x1C )
            return (unsigned int)-1073741789;
          pNetLuidIndex = 0LL;
          if ( !ndisValidateUnicodeStringFromOffsetAndLength(
                  a1,
                  (const struct _NDIS_OFFSET_AND_LENGTH *)(MasterIrp + 4),
                  &v52)
            || !ndisValidateUnicodeStringFromOffsetAndLength(
                  a1,
                  (const struct _NDIS_OFFSET_AND_LENGTH *)(MasterIrp + 12),
                  &v51)
            || !ndisValidateOffsetAndLength(
                  a1,
                  (const struct _NDIS_OFFSET_AND_LENGTH *)(MasterIrp + 20),
                  (const struct _NDIS_OFFSET_AND_LENGTH **)&pNetLuidIndex) )
          {
            return (unsigned int)-1073741811;
          }
          return (unsigned int)ndisPnpInvokeTdi(*(_DWORD *)MasterIrp, (__int64)&v52, (__int64)&v51);
        }
        else
        {
          if ( !v7 )
            return (unsigned int)-1073741790;
          if ( (unsigned int)Options < 0x18 )
            return (unsigned int)-1073741789;
          if ( *((_QWORD *)FsContext + 6) )
            return (unsigned int)-1073740024;
          return (unsigned int)ndisIfReferenceCompartmentForUser(
                                 (struct _GUID *)(MasterIrp + 4),
                                 *(unsigned int *)(MasterIrp + 20),
                                 (struct _NDIS_IF_COMPARTMENT_BLOCK **)FsContext + 6);
        }
      }
      if ( !ndisAoAcRefMiniportForIoctl(
              (struct _NDIS_DEVICE_OBJECT_OPEN_CONTEXT *)FsContext,
              Options,
              (struct _NDIS_PM_NIC_ACTIVE *)MasterIrp,
              1,
              MPREF_AOAC_WAKE_DISABLE,
              &v55,
              &pNetLuidIndex) )
        return (unsigned int)v55;
      NetLuidIndex = ndisAoAcEnableRemoteWake(pNetLuidIndex, (struct _NDIS_PM_NIC_ACTIVE *)MasterIrp, 0);
      ndisDereferenceMiniport((__int64)pNetLuidIndex);
LABEL_41:
      if ( P )
        ExFreePoolWithTag(P, 0);
      return NetLuidIndex;
    }
    if ( LowPart == 1507412 )
    {
      if ( !v7 )
        return 3221225506LL;
      if ( IoIs32bitProcess(a1) )
        return (unsigned int)-1073741637;
      if ( (unsigned int)Options >= 0x20C )
      {
        v48 = ndisIfSetIfDescr(MasterIrp);
        goto LABEL_97;
      }
      goto LABEL_96;
    }
    if ( LowPart == 1507392 )
    {
      if ( !v7 )
        return 3221225506LL;
      if ( IoIs32bitProcess(a1) )
        return (unsigned int)-1073741637;
      if ( (unsigned int)Options >= 0x10 )
      {
        if ( LOBYTE(WPP_MAIN_CB.DeviceQueue.Type) )
        {
          if ( *(_WORD *)MasterIrp == 1 && *(_WORD *)(MasterIrp + 2) == 16 )
          {
            v27 = *(_DWORD *)(MasterIrp + 4);
            if ( v27 && (v27 == -1 || *(_QWORD *)(MasterIrp + 8)) )
              ndisConfigurePeriodicReceives(MasterIrp);
            else
              NetLuidIndex = -1073741811;
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
        goto LABEL_53;
      }
    }
    else
    {
      if ( LowPart <= 0x170040 )
      {
        v16 = LowPart - 1507336;
        if ( !v16 )
        {
          if ( v7 )
          {
            NetLuidIndex = -1073741789;
            v21 = MasterIrp;
            if ( IoIs32bitProcess(a1) )
            {
              if ( (unsigned int)Options < 0x28 )
                return NetLuidIndex;
              v35 = *(unsigned __int16 *)(MasterIrp + 18);
              v36 = *(unsigned int *)(MasterIrp + 12);
              v37 = *(unsigned __int16 *)(MasterIrp + 34);
              v38 = *(unsigned __int16 *)(MasterIrp + 26);
              if ( Options < v38 + v35 + v36 + v37 + 40 )
                return NetLuidIndex;
              LODWORD(Options) = v37 + 80 + v35 + v36 + v38;
              PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, (unsigned int)Options, 0x2020444Eu);
              P = PoolWithTag;
              v40 = PoolWithTag;
              if ( !PoolWithTag )
                return (unsigned int)-1073741670;
              memset(PoolWithTag, 0, (unsigned int)Options);
              *v40 = *(_DWORD *)MasterIrp;
              v21 = (__int64)v40;
              v40[1] = *(_DWORD *)(MasterIrp + 4);
              *((_WORD *)v40 + 13) = *(_WORD *)(MasterIrp + 18);
              *((_WORD *)v40 + 12) = *(_WORD *)(MasterIrp + 16);
              *((_QWORD *)v40 + 4) = 72LL;
              memmove(
                v40 + 18,
                (const void *)(MasterIrp + *(unsigned int *)(MasterIrp + 20)),
                *(unsigned __int16 *)(MasterIrp + 18));
              v41 = (char *)v40 + *((unsigned __int16 *)v40 + 13) + 72;
              *((_WORD *)v40 + 21) = *(_WORD *)(MasterIrp + 26);
              *((_WORD *)v40 + 20) = *(_WORD *)(MasterIrp + 24);
              *((_QWORD *)v40 + 6) = v41 - (char *)v40;
              memmove(
                v41,
                (const void *)(MasterIrp + *(unsigned int *)(MasterIrp + 28)),
                *(unsigned __int16 *)(MasterIrp + 26));
              v42 = &v41[*((unsigned __int16 *)v40 + 21)];
              *((_WORD *)v40 + 29) = *(_WORD *)(MasterIrp + 34);
              *((_WORD *)v40 + 28) = *(_WORD *)(MasterIrp + 32);
              *((_QWORD *)v40 + 8) = v42 - (char *)v40;
              memmove(
                v42,
                (const void *)(MasterIrp + *(unsigned int *)(MasterIrp + 36)),
                *(unsigned __int16 *)(MasterIrp + 34));
              v23 = v40 + 4;
              v43 = *((unsigned __int16 *)v40 + 29);
              v40[4] = *(_DWORD *)(MasterIrp + 12);
              v44 = (char *)((unsigned __int64)&v42[v43 + 7] & 0xFFFFFFFFFFFFFFF8uLL);
              *((_QWORD *)v40 + 1) = v44 - (char *)v40;
              memmove(
                v44,
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
              NetLuidIndex = ndispConvVar(v21, Options, v24, (unsigned __int16 *)(v21 + 40));
              if ( (NetLuidIndex & 0x80000000) == 0 )
              {
                NetLuidIndex = ndispConvVar(v21, Options, v25, (unsigned __int16 *)(v21 + 56));
                if ( (NetLuidIndex & 0x80000000) == 0 )
                {
                  NetLuidIndex = ndispConvOffsetToPointer(v21, Options, v26, (unsigned __int64 *)(v21 + 8), *v23, 8);
                  if ( (NetLuidIndex & 0x80000000) == 0 )
                    NetLuidIndex = ndisHandleUModePnPOp(v21);
                }
              }
            }
            goto LABEL_41;
          }
          return 3221225506LL;
        }
        v17 = v16 - 8;
        if ( !v17 )
        {
          if ( IoIs32bitProcess(a1) )
          {
            v34 = (unsigned int)Size;
            if ( (unsigned int)Size >= 0x20 )
            {
              v20 = ndisEnumerateInterfaces32((void *)MasterIrp, (unsigned int)Size);
              a1->IoStatus.Information = v34;
              goto LABEL_30;
            }
          }
          else if ( (unsigned int)Size >= 0x30 )
          {
            v20 = ndisEnumerateInterfaces((void *)MasterIrp, (unsigned int)Size);
LABEL_30:
            v4 = (unsigned int)pNetLuidIndex;
            NetLuidIndex = v20;
LABEL_31:
            a1->IoStatus.Information = v4;
            return NetLuidIndex;
          }
LABEL_70:
          NetLuidIndex = -1073741789;
          goto LABEL_31;
        }
        v18 = v17 - 4;
        if ( !v18 )
        {
          if ( v7 )
          {
            NetLuidIndex = -1073741811;
            if ( !(_DWORD)Options || (Options & 1) != 0 )
              return NetLuidIndex;
            *(_WORD *)(MasterIrp + 2 * (Options >> 1) - 2) = 0;
            RtlInitUnicodeString(&DestinationString, (PCWSTR)MasterIrp);
            return (unsigned int)ndisHandleLegacyTransport((__int64)&DestinationString);
          }
          return 3221225506LL;
        }
        v31 = v18 - 12;
        if ( !v31 )
        {
          if ( (unsigned int)Length >= 4 )
          {
            Version = NdisGetVersion();
            v33 = (unsigned int)Size < 8;
            v4 = 4;
            *(_DWORD *)MasterIrp = Version;
            if ( !v33 )
            {
              v4 = 8;
              *(_DWORD *)(MasterIrp + 4) = ndisChecked;
            }
            goto LABEL_31;
          }
          goto LABEL_70;
        }
        if ( v31 != 20 )
          return NetLuidIndex;
        NdisTraceLoggingRareFeaturePath(Length);
        if ( v7 )
        {
          if ( (unsigned int)Options >= 0x30 && (unsigned int)Size >= 0x30 )
          {
            v20 = ndisIfEnumerateNsiObjects((NET_LUID *)MasterIrp, Size, &pNetLuidIndex);
            goto LABEL_30;
          }
          goto LABEL_70;
        }
        return 3221225506LL;
      }
      v45 = LowPart - 1507396;
      if ( !v45 )
      {
        if ( v7 )
        {
          if ( IoIs32bitProcess(a1) )
            return (unsigned int)-1073741637;
          if ( (unsigned int)Options >= 2 && (unsigned int)Size >= 4 )
          {
            NetLuidIndex = NdisIfAllocateNetLuidIndex(*(_WORD *)MasterIrp, (PUINT32)&pNetLuidIndex);
            if ( !NetLuidIndex )
            {
              v4 = 4;
              *(_DWORD *)MasterIrp = (_DWORD)pNetLuidIndex;
            }
            goto LABEL_31;
          }
          goto LABEL_70;
        }
        return 3221225506LL;
      }
      v46 = v45 - 4;
      if ( !v46 )
      {
        if ( !v7 )
          return 3221225506LL;
        if ( IoIs32bitProcess(a1) )
          return (unsigned int)-1073741637;
        if ( (unsigned int)Options >= 8 )
        {
          v48 = NdisIfFreeNetLuidIndex(*(_WORD *)(MasterIrp + 4), *(_DWORD *)MasterIrp);
          goto LABEL_97;
        }
LABEL_96:
        NetLuidIndex = -1073741789;
LABEL_98:
        a1->IoStatus.Information = 0LL;
        return NetLuidIndex;
      }
      v47 = v46 - 4;
      if ( v47 )
      {
        if ( v47 != 4 )
          return NetLuidIndex;
        if ( !v7 )
          return 3221225506LL;
        if ( IoIs32bitProcess(a1) )
          return (unsigned int)-1073741637;
        if ( (unsigned int)Options >= 8 )
        {
          v48 = ndisIfDeletePersistedInterface(MasterIrp);
LABEL_97:
          NetLuidIndex = v48;
          goto LABEL_98;
        }
        goto LABEL_96;
      }
      if ( !v7 )
        return 3221225506LL;
      if ( IoIs32bitProcess(a1) )
        return (unsigned int)-1073741637;
      if ( (unsigned int)Options >= 0x490 )
      {
        NetLuidIndex = ndisIfCreatePersistedInterface((union _NET_LUID_LH *)MasterIrp, NdisIfBlockSourcePersistedNsi);
        goto LABEL_53;
      }
    }
    NetLuidIndex = -1073741789;
LABEL_53:
    a1->IoStatus.Information = 0LL;
    return NetLuidIndex;
  }
  return 3221225485LL;
}
