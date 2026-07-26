/*
 * XREFs of ?ndisMRawIndicateStatusEx@@YAXPEAUNDIS_MINIPORT_ADAPTER_HANDLE__@@PEAU_NDIS_STATUS_INDICATION@@@Z @ 0x1C001B908
 * Callers:
 *     ?ndisMpHookDefaultIndicateStatus@@YAXPEAXPEAUNDIS_MINIPORT_HOOK_ADAPTER_HANDLE__@@PEAUNDIS_MINIPORT_ADAPTER_HANDLE__@@PEAU_NDIS_STATUS_INDICATION@@@Z @ 0x1C0024E70 (-ndisMpHookDefaultIndicateStatus@@YAXPEAXPEAUNDIS_MINIPORT_HOOK_ADAPTER_HANDLE__@@PEAUNDIS_MINIP.c)
 *     ?ndisMpHookRawIndicateStatus@@YAXPEAUNDIS_MINIPORT_ADAPTER_HANDLE__@@PEAU_NDIS_STATUS_INDICATION@@@Z @ 0x1C006EE10 (-ndisMpHookRawIndicateStatus@@YAXPEAUNDIS_MINIPORT_ADAPTER_HANDLE__@@PEAU_NDIS_STATUS_INDICATION.c)
 *     ?ndisMApplyInterfaceChange@@YAXPEAU_NDIS_MINIPORT_BLOCK@@KPEAU_NDIS_STATUS_INDICATION@@@Z @ 0x1C00CABE8 (-ndisMApplyInterfaceChange@@YAXPEAU_NDIS_MINIPORT_BLOCK@@KPEAU_NDIS_STATUS_INDICATION@@@Z.c)
 * Callees:
 *     ndisReferenceMiniport @ 0x1C0004C2C (ndisReferenceMiniport.c)
 *     ndisSwapFilterHandlersForMediaDisconnect @ 0x1C001290C (ndisSwapFilterHandlersForMediaDisconnect.c)
 *     ndisMIndicateReceiveFilterCapsChange @ 0x1C001623C (ndisMIndicateReceiveFilterCapsChange.c)
 *     ndisMIndicateNicSwitchCapsChange @ 0x1C00162D4 (ndisMIndicateNicSwitchCapsChange.c)
 *     ndisFIndicateOffloadChange @ 0x1C00163C8 (ndisFIndicateOffloadChange.c)
 *     ndisMIndicateOffloadChange @ 0x1C00165A0 (ndisMIndicateOffloadChange.c)
 *     ndisGetHigherFilterWithPnpRef @ 0x1C001C5C8 (ndisGetHigherFilterWithPnpRef.c)
 *     ndisDereferenceRef @ 0x1C001C6C4 (ndisDereferenceRef.c)
 *     ndisFIndicateStatusToFilter @ 0x1C001C730 (ndisFIndicateStatusToFilter.c)
 *     ?ndisMReleaseStInLockAndSpinLock@@YAXPEAU_NDIS_MINIPORT_BLOCK@@E@Z @ 0x1C001C7AC (-ndisMReleaseStInLockAndSpinLock@@YAXPEAU_NDIS_MINIPORT_BLOCK@@E@Z.c)
 *     ndisIndicateStatusInternal @ 0x1C001CD04 (ndisIndicateStatusInternal.c)
 *     ?ndisMAcquireStInLockWithSpinLock@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z @ 0x1C001D9A4 (-ndisMAcquireStInLockWithSpinLock@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z.c)
 *     ndisRestoreFilterHandlersForMediaDisconnect @ 0x1C0023F44 (ndisRestoreFilterHandlersForMediaDisconnect.c)
 *     __security_check_cookie @ 0x1C00264F0 (__security_check_cookie.c)
 *     memmove @ 0x1C0026C00 (memmove.c)
 *     memset @ 0x1C0026F40 (memset.c)
 *     WPP_SF_q @ 0x1C00383F4 (WPP_SF_q.c)
 *     WPP_SF_qD @ 0x1C0038424 (WPP_SF_qD.c)
 *     ndisUpdateRcvFilterQueueParameters @ 0x1C003A8A8 (ndisUpdateRcvFilterQueueParameters.c)
 *     WPP_SF_ @ 0x1C003EBD4 (WPP_SF_.c)
 *     ndisFilterIndicatePMCapabilities @ 0x1C00459AC (ndisFilterIndicatePMCapabilities.c)
 *     ndisFilterIndicatePMOffloadReject @ 0x1C0045A44 (ndisFilterIndicatePMOffloadReject.c)
 *     ndisFilterIndicateWoLPatternReject @ 0x1C0045A8C (ndisFilterIndicateWoLPatternReject.c)
 *     ndisMIndicatePMCapabilities @ 0x1C0045B10 (ndisMIndicatePMCapabilities.c)
 *     ndisMIndicatePMHardwareCapabilities @ 0x1C0045BC0 (ndisMIndicatePMHardwareCapabilities.c)
 *     ndisMIndicatePMOffloadReject @ 0x1C0045CD0 (ndisMIndicatePMOffloadReject.c)
 *     ndisMIndicateWoLPatternReject @ 0x1C0045DBC (ndisMIndicateWoLPatternReject.c)
 *     ndisMValidatePMWakeReason @ 0x1C0046040 (ndisMValidatePMWakeReason.c)
 *     ?ndisValidateMacAddressChange@@YA_NPEAU_NDIS_MINIPORT_BLOCK@@PEBU_NDIS_STATUS_INDICATION@@@Z @ 0x1C0057CF0 (-ndisValidateMacAddressChange@@YA_NPEAU_NDIS_MINIPORT_BLOCK@@PEBU_NDIS_STATUS_INDICATION@@@Z.c)
 *     ndisMIndicateHDSplitChange @ 0x1C00599B8 (ndisMIndicateHDSplitChange.c)
 *     ndisMIndicateQosParametersChange @ 0x1C0059A7C (ndisMIndicateQosParametersChange.c)
 *     ndisMIndicateTcpConnectionOffloadChange @ 0x1C0060924 (ndisMIndicateTcpConnectionOffloadChange.c)
 *     ndisMIndicatePDConfigChange @ 0x1C006D1F0 (ndisMIndicatePDConfigChange.c)
 *     NdisMSleep @ 0x1C00AAAA0 (NdisMSleep.c)
 */

void __fastcall ndisMRawIndicateStatusEx(struct NDIS_MINIPORT_ADAPTER_HANDLE__ *a1, struct _NDIS_STATUS_INDICATION *a2)
{
  unsigned int StatusCode; // esi
  struct NDIS_MINIPORT_ADAPTER_HANDLE__ *StatusBuffer; // r15
  char updated; // r12
  size_t StatusBufferSize; // r13
  struct _NDIS_STATUS_INDICATION *v6; // r14
  __int64 v8; // r8
  bool v9; // zf
  char v10; // al
  KIRQL v11; // dl
  __int64 v12; // r8
  __int64 HigherFilterWithPnpRef; // rax
  __int64 v14; // rbx
  KIRQL v15; // al
  KIRQL v16; // dl
  int v17; // ecx
  int v18; // eax
  int v19; // ecx
  char v20; // bl
  __int64 v21; // rcx
  __int64 v22; // rcx
  char v23; // al
  KIRQL v24; // dl
  char v25; // al
  KIRQL v26; // dl
  __int64 v27; // rdx
  char v28; // bl
  KIRQL v29; // dl
  char v30; // al
  KIRQL v31; // dl
  NTSTATUS (__stdcall *SourceHandle)(_DRIVER_OBJECT *, PUNICODE_STRING); // rcx
  unsigned __int8 v33; // al
  unsigned int v34; // esi
  _OWORD *v35; // rax
  KIRQL v36; // dl
  int v37; // edx
  int v38; // r8d
  int v39; // eax
  int v40; // ecx
  KIRQL NewIrql[4]; // [rsp+30h] [rbp-50h] BYREF
  int v42; // [rsp+34h] [rbp-4Ch]
  char v43; // [rsp+38h] [rbp-48h]
  int v44; // [rsp+3Ch] [rbp-44h]
  unsigned int i; // [rsp+40h] [rbp-40h]
  struct _NDIS_STATUS_INDICATION *v46; // [rsp+48h] [rbp-38h]
  _QWORD v47[5]; // [rsp+50h] [rbp-30h] BYREF

  StatusCode = a2->StatusCode;
  StatusBuffer = (struct NDIS_MINIPORT_ADAPTER_HANDLE__ *)a2->StatusBuffer;
  updated = 1;
  StatusBufferSize = a2->StatusBufferSize;
  v6 = a2;
  v46 = a2;
  LOBYTE(v44) = 0;
  LOBYTE(v42) = 0;
  v43 = 0;
  if ( (unsigned __int8)byte_1C008371F >= 4u )
    WPP_SF_qD(166LL, &WPP_bb11c1e4a73cb58e8208f2e892716016_Traceguids, a1, StatusCode);
  memset(v47, 0, sizeof(v47));
  v9 = v6->Header.Type == 0x98;
  LODWORD(v47[1]) = a1[87];
  v47[2] = *((_QWORD *)a1 + 350);
  v47[3] = *((_QWORD *)a1 + 351);
  v47[4] = *(_QWORD *)(a1 + 203);
  LODWORD(v47[0]) = 2621824;
  if ( !v9 || v6->Header.Size < 0x70u )
  {
    if ( (unsigned __int8)byte_1C008371F < 4u )
      return;
    v21 = 167LL;
    goto LABEL_179;
  }
  if ( StatusCode == 1073807384 )
  {
    if ( (unsigned int)StatusBufferSize < 4 )
    {
      if ( (unsigned __int8)byte_1C008371F < 4u )
        return;
      v21 = 168LL;
      goto LABEL_179;
    }
    goto LABEL_31;
  }
  if ( StatusCode - 1073872902 <= 1 )
  {
    updated = ndisMIndicateOffloadChange((__int64)a1, StatusCode, StatusBuffer, StatusBufferSize);
    if ( !updated )
    {
      if ( (unsigned __int8)byte_1C008371F >= 4u )
      {
        v22 = 169LL;
LABEL_83:
        WPP_SF_(v22, &WPP_bb11c1e4a73cb58e8208f2e892716016_Traceguids, v8);
        return;
      }
      return;
    }
  }
  if ( StatusCode != 1073872908 )
  {
    if ( ((StatusCode - 1073872912) & 0xFFFFFFEF) == 0 )
    {
      NewIrql[0] = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)a1 + 12);
      *((_QWORD *)a1 + 65) = KeGetCurrentThread();
      *((_DWORD *)a1 + 464) = 732974;
      v23 = ndisMIndicateReceiveFilterCapsChange((__int64)a1, StatusCode, StatusBuffer, StatusBufferSize, 0);
      v24 = NewIrql[0];
      *((_QWORD *)a1 + 65) = 0LL;
      updated = v23;
      *((_DWORD *)a1 + 464) = 0;
      KeReleaseSpinLock((PKSPIN_LOCK)a1 + 12, v24);
      if ( !updated )
      {
        if ( (unsigned __int8)byte_1C008371F >= 4u )
        {
          v22 = 171LL;
          goto LABEL_83;
        }
        return;
      }
    }
    if ( ((StatusCode - 1073872960) & 0xFFFFFFEF) == 0 )
    {
      NewIrql[0] = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)a1 + 12);
      *((_QWORD *)a1 + 65) = KeGetCurrentThread();
      *((_DWORD *)a1 + 464) = 732993;
      v25 = ndisMIndicateNicSwitchCapsChange(a1, StatusCode, StatusBuffer, StatusBufferSize, 0);
      v26 = NewIrql[0];
      *((_QWORD *)a1 + 65) = 0LL;
      updated = v25;
      *((_DWORD *)a1 + 464) = 0;
      KeReleaseSpinLock((PKSPIN_LOCK)a1 + 12, v26);
      if ( !updated )
      {
        if ( (unsigned __int8)byte_1C008371F >= 4u )
        {
          v22 = 172LL;
          goto LABEL_83;
        }
        return;
      }
    }
    if ( StatusCode == 1073873408 )
    {
      updated = ndisMIndicatePDConfigChange((struct _NDIS_MINIPORT_BLOCK *)a1);
      if ( !updated )
      {
        if ( (unsigned __int8)byte_1C008371F >= 4u )
        {
          v22 = 173LL;
          goto LABEL_83;
        }
        return;
      }
    }
    else if ( StatusCode == 1076105216 )
    {
      NewIrql[0] = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)a1 + 12);
      v27 = *((_QWORD *)a1 + 69);
      *((_QWORD *)a1 + 65) = KeGetCurrentThread();
      *((_DWORD *)a1 + 464) = 733027;
      if ( v27 && (_DWORD)StatusBufferSize == *(unsigned __int16 *)(v27 + 12) )
      {
        memmove((void *)(v27 + *(unsigned int *)(v27 + 16)), StatusBuffer, StatusBufferSize);
        v28 = 1;
      }
      else
      {
        v28 = 0;
      }
      v29 = NewIrql[0];
      *((_QWORD *)a1 + 65) = 0LL;
      updated = 0;
      *((_DWORD *)a1 + 464) = 0;
      KeReleaseSpinLock((PKSPIN_LOCK)a1 + 12, v29);
      if ( !v28 )
      {
        if ( (unsigned __int8)byte_1C008371F >= 3u )
        {
          v22 = 174LL;
          goto LABEL_83;
        }
        return;
      }
    }
    else
    {
      if ( StatusCode - 1073873056 <= 1 )
      {
        NewIrql[0] = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)a1 + 12);
        *((_QWORD *)a1 + 65) = KeGetCurrentThread();
        *((_DWORD *)a1 + 464) = 733045;
        v30 = ndisMIndicateQosParametersChange((struct _NDIS_MINIPORT_BLOCK *)a1);
        v31 = NewIrql[0];
        *((_QWORD *)a1 + 65) = 0LL;
        updated = v30;
        *((_DWORD *)a1 + 464) = 0;
        KeReleaseSpinLock((PKSPIN_LOCK)a1 + 12, v31);
        if ( !updated )
        {
          if ( (unsigned __int8)byte_1C008371F >= 3u )
          {
            v22 = 175LL;
            goto LABEL_83;
          }
          return;
        }
      }
      if ( StatusCode == 1073872944 )
      {
        updated = 0;
        if ( (unsigned int)StatusBufferSize >= 0x444
          && *(_BYTE *)StatusBuffer == 0x80
          && *((_WORD *)StatusBuffer + 1) >= 0x444u
          && *((_BYTE *)StatusBuffer + 1) >= 2u
          && ((_DWORD)StatusBuffer[1] & 0xFFFF0000) == 0x100000 )
        {
          updated = ndisUpdateRcvFilterQueueParameters(a1, StatusBuffer);
        }
        if ( !updated )
        {
          if ( (unsigned __int8)byte_1C008371F >= 3u )
          {
            v22 = 176LL;
            goto LABEL_83;
          }
          return;
        }
      }
      else
      {
        if ( ((StatusCode - 1073872899) & 0xFFFFFFF7) == 0 )
        {
          updated = ndisMIndicateTcpConnectionOffloadChange(
                      a1,
                      StatusCode,
                      StatusBuffer,
                      (unsigned int)StatusBufferSize);
          if ( !updated )
          {
            if ( (unsigned __int8)byte_1C008371F >= 3u )
            {
              v22 = 177LL;
              goto LABEL_83;
            }
            return;
          }
        }
        if ( StatusCode == 1073938515 )
          ndisMIndicatePMCapabilities(a1, v6);
        if ( StatusCode == 1073938516 )
          ndisMIndicatePMHardwareCapabilities(a1, v6);
        if ( StatusCode == 1073938513 )
          ndisMIndicateWoLPatternReject(a1, v6);
        if ( StatusCode == 1073938514 )
          ndisMIndicatePMOffloadReject(a1, v6);
        if ( StatusCode == 1073938517 )
        {
          updated = ndisMValidatePMWakeReason(a1, v6);
          if ( !updated )
          {
            if ( (unsigned __int8)byte_1C008371F < 3u )
              return;
            v21 = 178LL;
            goto LABEL_179;
          }
        }
        else
        {
          if ( StatusCode - 1073873072 <= 1 )
          {
            SourceHandle = (NTSTATUS (__stdcall *)(_DRIVER_OBJECT *, PUNICODE_STRING))v6->SourceHandle;
            if ( SourceHandle != DriverEntry )
            {
              if ( StatusCode == 1073873072 )
              {
                if ( !ndisValidateMacAddressChange((struct _NDIS_MINIPORT_BLOCK *)a1, v6) )
                {
                  if ( (unsigned __int8)byte_1C008371F < 3u )
                    return;
                  v21 = 179LL;
                  goto LABEL_179;
                }
LABEL_139:
                NewIrql[0] = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)a1 + 12);
                *((_QWORD *)a1 + 65) = KeGetCurrentThread();
                *((_DWORD *)a1 + 464) = 733149;
                if ( !*((_BYTE *)a1 + 5416) )
                {
                  if ( !ndisReferenceMiniport((__int64)a1) )
                  {
LABEL_146:
                    v36 = NewIrql[0];
                    *((_QWORD *)a1 + 65) = 0LL;
                    *((_DWORD *)a1 + 464) = 0;
                    KeReleaseSpinLock((PKSPIN_LOCK)a1 + 12, v36);
                    return;
                  }
                  ExQueueWorkItem((PWORK_QUEUE_ITEM)(a1 + 1346), NormalWorkQueue);
                  *((_BYTE *)a1 + 5416) = 1;
                }
                v34 = StatusCode - 1073873072;
                if ( v34 )
                {
                  if ( v34 == 1 )
                  {
                    a1[1364] = *(_DWORD *)(struct NDIS_MINIPORT_ADAPTER_HANDLE__ *)v6->StatusBuffer;
                    *((_BYTE *)a1 + 5418) = 1;
                  }
                }
                else
                {
                  v35 = v6->StatusBuffer;
                  *(_OWORD *)(a1 + 1355) = *v35;
                  *(_OWORD *)(a1 + 1359) = v35[1];
                  *((_WORD *)a1 + 2726) = *((_WORD *)v35 + 16);
                  *((_BYTE *)a1 + 5417) = 1;
                }
                goto LABEL_146;
              }
              if ( StatusCode != 1073873073 )
                goto LABEL_139;
              v33 = *((_BYTE *)a1 + 32);
              if ( (v33 > 6u || v33 == 6 && *((_BYTE *)a1 + 33) >= 0x32u)
                && v6->Header.Type == 0x98
                && v6->Header.Revision
                && v6->Header.Size >= 0x70u
                && !v6->DestinationHandle
                && (char *)SourceHandle == (char *)a1
                && !v6->PortNumber
                && v6->StatusBufferSize == 4 )
              {
                goto LABEL_139;
              }
              if ( (unsigned __int8)byte_1C008371F < 3u )
                return;
              v21 = 180LL;
LABEL_179:
              WPP_SF_q(v21, &WPP_bb11c1e4a73cb58e8208f2e892716016_Traceguids, a1);
              return;
            }
          }
          if ( StatusCode == 1073807372 )
          {
            HIDWORD(v47[0]) = 2;
            v10 = 1;
          }
          else
          {
            v10 = v43;
          }
          if ( StatusCode == 1073807371 )
          {
            HIDWORD(v47[0]) = 1;
            v10 = 1;
          }
          if ( v10 )
          {
            v6->StatusBuffer = v47;
            StatusBuffer = (struct NDIS_MINIPORT_ADAPTER_HANDLE__ *)v47;
            v6->StatusCode = 1073807383;
            v6->StatusBufferSize = 40;
            LODWORD(StatusBufferSize) = 40;
            StatusCode = 1073807383;
          }
        }
      }
    }
LABEL_31:
    NewIrql[0] = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)a1 + 12);
    *((_QWORD *)a1 + 65) = KeGetCurrentThread();
    *((_DWORD *)a1 + 464) = 733214;
    if ( StatusCode == 1073807383 )
    {
      *((_BYTE *)a1 + 88) |= 0x18u;
      if ( *((_DWORD *)StatusBuffer + 1) == 1 && *((_DWORD *)a1 + 86) != 1 )
        *((_QWORD *)a1 + 199) = MEMORY[0xFFFFF78000000320];
      a1[86] = StatusBuffer[1];
      a1[87] = StatusBuffer[2];
      *((_QWORD *)a1 + 350) = *((_QWORD *)StatusBuffer + 2);
      *((_QWORD *)a1 + 351) = *((_QWORD *)StatusBuffer + 3);
      a1[203] = StatusBuffer[8];
      a1[204] = StatusBuffer[9];
    }
    v11 = NewIrql[0];
    *((_QWORD *)a1 + 65) = 0LL;
    *((_DWORD *)a1 + 464) = 0;
    KeReleaseSpinLock((PKSPIN_LOCK)a1 + 12, v11);
    LOBYTE(v12) = 9;
    HigherFilterWithPnpRef = ndisGetHigherFilterWithPnpRef(a1, 0LL, v12);
    v14 = HigherFilterWithPnpRef;
    if ( HigherFilterWithPnpRef )
    {
      v15 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(HigherFilterWithPnpRef + 144));
      *(_QWORD *)(v14 + 152) = KeGetCurrentThread();
      NewIrql[0] = v15;
      *(_DWORD *)(v14 + 160) = 733242;
      if ( (*(_DWORD *)(v14 + 56) & 0x2000) != 0 )
      {
        do
        {
          *(_QWORD *)(v14 + 152) = 0LL;
          *(_DWORD *)(v14 + 160) = 0;
          KeReleaseSpinLock((PKSPIN_LOCK)(v14 + 144), NewIrql[0]);
          if ( KeGetCurrentIrql() == 2 )
          {
            for ( i = 0; i < 0x32; ++i )
              ;
          }
          else
          {
            NdisMSleep(0x32u);
          }
          NewIrql[0] = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v14 + 144));
          *(_QWORD *)(v14 + 152) = KeGetCurrentThread();
          *(_DWORD *)(v14 + 160) = 733242;
        }
        while ( (*(_DWORD *)(v14 + 56) & 0x2000) != 0 );
        v6 = v46;
      }
      *(_DWORD *)(v14 + 56) |= 0x2000u;
      *(_QWORD *)(v14 + 152) = 0LL;
      *(_DWORD *)(v14 + 160) = 0;
      KeReleaseSpinLockFromDpcLevel((PKSPIN_LOCK)(v14 + 144));
      if ( v6->SourceHandle == &ndisIntReqGeneric )
      {
        if ( StatusCode != 1073807383 )
          goto LABEL_36;
        StatusBuffer[1] = a1[86];
      }
      if ( StatusCode == 1073807383 )
      {
        if ( (_DWORD)StatusBufferSize == -2 )
        {
          LODWORD(StatusBufferSize) = 40;
          v6->StatusBufferSize = 40;
        }
        if ( !StatusBuffer || (unsigned int)StatusBufferSize < 0x28 )
          goto LABEL_44;
        v17 = *(_DWORD *)(v14 + 344);
        v18 = *((_DWORD *)StatusBuffer + 1);
        if ( v17 != v18 )
        {
          if ( v17 == 1 )
          {
            LOBYTE(v44) = 1;
          }
          else
          {
            v19 = (unsigned __int8)v42;
            if ( v18 == 1 )
              v19 = 1;
            v42 = v19;
          }
        }
        *(_DWORD *)(v14 + 344) = v18;
        *(_DWORD *)(struct NDIS_MINIPORT_ADAPTER_HANDLE__ *)(v14 + 348) = StatusBuffer[2];
        *(_QWORD *)(v14 + 360) = *((_QWORD *)StatusBuffer + 3);
        *(_QWORD *)(v14 + 352) = *((_QWORD *)StatusBuffer + 2);
        *(_DWORD *)(struct NDIS_MINIPORT_ADAPTER_HANDLE__ *)(v14 + 368) = StatusBuffer[8];
        *(_DWORD *)(struct NDIS_MINIPORT_ADAPTER_HANDLE__ *)(v14 + 372) = StatusBuffer[9];
      }
LABEL_36:
      if ( StatusCode == 1073938515 )
        ndisFilterIndicatePMCapabilities(v14, v6);
      if ( StatusCode == 1073938513 )
        updated = ndisFilterIndicateWoLPatternReject(v14, v6);
      if ( StatusCode == 1073938514 )
        updated = ndisFilterIndicatePMOffloadReject(v14, v6);
      if ( StatusCode == 1073872902 )
        updated = ndisFIndicateOffloadChange(v14, StatusBuffer, StatusBufferSize);
LABEL_44:
      if ( updated )
      {
        ndisFIndicateStatusToFilter(v14, v6);
        KeAcquireSpinLockAtDpcLevel((PKSPIN_LOCK)a1 + 12);
        *((_QWORD *)a1 + 65) = KeGetCurrentThread();
        *((_DWORD *)a1 + 464) = 733324;
        if ( (_BYTE)v44 )
          ndisSwapFilterHandlersForMediaDisconnect((__int64)a1, 0LL, v14);
        if ( (_BYTE)v42 )
          ndisRestoreFilterHandlersForMediaDisconnect(a1, 0LL, v14);
        *((_QWORD *)a1 + 65) = 0LL;
        *((_DWORD *)a1 + 464) = 0;
        KeReleaseSpinLockFromDpcLevel((PKSPIN_LOCK)a1 + 12);
      }
      KeAcquireSpinLockAtDpcLevel((PKSPIN_LOCK)(v14 + 144));
      v16 = NewIrql[0];
      *(_DWORD *)(v14 + 56) &= ~0x2000u;
      *(_QWORD *)(v14 + 152) = 0LL;
      *(_DWORD *)(v14 + 160) = 0;
      KeReleaseSpinLock((PKSPIN_LOCK)(v14 + 144), v16);
      ndisDereferenceRef((PKSPIN_LOCK)(v14 + 312));
LABEL_51:
      if ( (unsigned __int8)byte_1C008371F >= 4u )
        WPP_SF_qD(181LL, &WPP_bb11c1e4a73cb58e8208f2e892716016_Traceguids, a1, (unsigned int)v6->StatusCode);
      return;
    }
    ndisMAcquireStInLockWithSpinLock((struct _NDIS_MINIPORT_BLOCK *)a1, NewIrql);
    if ( v6->SourceHandle == &ndisIntReqGeneric )
    {
      if ( StatusCode != 1073807383 )
        goto LABEL_72;
      StatusBuffer[1] = a1[86];
    }
    if ( StatusCode == 1073807383 && StatusBuffer && (unsigned int)StatusBufferSize >= 0x28 )
    {
      if ( *((_DWORD *)StatusBuffer + 1) == 1 )
        goto LABEL_167;
      v37 = (unsigned __int8)v44;
      if ( ((_DWORD)a1[30] & 0x20000000) != 0 )
        v37 = 1;
      *((_DWORD *)a1 + 30) &= ~0x20000000u;
      v44 = v37;
      if ( *((_DWORD *)StatusBuffer + 1) == 1 )
      {
LABEL_167:
        v38 = (unsigned __int8)v42;
        if ( ((_DWORD)a1[30] & 0x20000000) == 0 )
          v38 = 1;
        *((_DWORD *)a1 + 30) |= 0x20000000u;
        v42 = v38;
      }
      else
      {
        LOBYTE(v38) = v42;
      }
      v39 = *((_DWORD *)a1 + 120);
      v40 = *((_DWORD *)StatusBuffer + 1);
      if ( v39 != v40 )
      {
        if ( v39 != 1 )
        {
          v20 = v38;
          if ( v40 == 1 )
            v20 = 1;
          goto LABEL_73;
        }
        LOBYTE(v44) = 1;
      }
    }
LABEL_72:
    v20 = v42;
LABEL_73:
    v6->Flags |= 2u;
    ndisIndicateStatusInternal((struct _NDIS_MINIPORT_BLOCK *)a1, (int)v6);
    if ( (_BYTE)v44 )
      ndisSwapFilterHandlersForMediaDisconnect((__int64)a1, 0LL, 0LL);
    if ( v20 )
      ndisRestoreFilterHandlersForMediaDisconnect(a1, 0LL, 0LL);
    ndisMReleaseStInLockAndSpinLock((struct _NDIS_MINIPORT_BLOCK *)a1, NewIrql[0]);
    goto LABEL_51;
  }
  updated = ndisMIndicateHDSplitChange(a1, StatusBuffer, (unsigned int)StatusBufferSize);
  if ( updated )
    goto LABEL_31;
  if ( (unsigned __int8)byte_1C008371F >= 4u )
  {
    v22 = 170LL;
    goto LABEL_83;
  }
}
