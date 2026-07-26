/*
 * XREFs of ?ndisMRawIndicateStatusEx@@YAXPEAUNDIS_MINIPORT_ADAPTER_HANDLE__@@PEAU_NDIS_STATUS_INDICATION@@@Z @ 0x1C0016C08
 * Callers:
 *     ?ndisMpHookDefaultIndicateStatus@@YAXPEAXPEAUNDIS_MINIPORT_HOOK_ADAPTER_HANDLE__@@PEAUNDIS_MINIPORT_ADAPTER_HANDLE__@@PEAU_NDIS_STATUS_INDICATION@@@Z @ 0x1C0020280 (-ndisMpHookDefaultIndicateStatus@@YAXPEAXPEAUNDIS_MINIPORT_HOOK_ADAPTER_HANDLE__@@PEAUNDIS_MINIP.c)
 *     ?ndisMpHookRawIndicateStatus@@YAXPEAUNDIS_MINIPORT_ADAPTER_HANDLE__@@PEAU_NDIS_STATUS_INDICATION@@@Z @ 0x1C006F990 (-ndisMpHookRawIndicateStatus@@YAXPEAUNDIS_MINIPORT_ADAPTER_HANDLE__@@PEAU_NDIS_STATUS_INDICATION.c)
 *     ?ndisMApplyInterfaceChange@@YAXPEAU_NDIS_MINIPORT_BLOCK@@KPEAU_NDIS_STATUS_INDICATION@@@Z @ 0x1C00D1884 (-ndisMApplyInterfaceChange@@YAXPEAU_NDIS_MINIPORT_BLOCK@@KPEAU_NDIS_STATUS_INDICATION@@@Z.c)
 * Callees:
 *     ndisSwapFilterHandlersForMediaDisconnect @ 0x1C0010674 (ndisSwapFilterHandlersForMediaDisconnect.c)
 *     ndisRestoreFilterHandlersForMediaDisconnect @ 0x1C00138FC (ndisRestoreFilterHandlersForMediaDisconnect.c)
 *     ndisFIndicateStatusInternal @ 0x1C0014710 (ndisFIndicateStatusInternal.c)
 *     ndisIndicateStatusInternal @ 0x1C00152FC (ndisIndicateStatusInternal.c)
 *     ndisGetHigherFilterWithPnpRef @ 0x1C0017170 (ndisGetHigherFilterWithPnpRef.c)
 *     ndisFInvokeStatus @ 0x1C0017268 (ndisFInvokeStatus.c)
 *     ndisDereferenceRef @ 0x1C00172CC (ndisDereferenceRef.c)
 *     ?ndisMReleaseStInLockAndSpinLock@@YAXPEAU_NDIS_MINIPORT_BLOCK@@E@Z @ 0x1C0017338 (-ndisMReleaseStInLockAndSpinLock@@YAXPEAU_NDIS_MINIPORT_BLOCK@@E@Z.c)
 *     ?ndisMAcquireStInLockWithSpinLock@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z @ 0x1C001737C (-ndisMAcquireStInLockWithSpinLock@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z.c)
 *     ndisReferenceMiniport @ 0x1C0019084 (ndisReferenceMiniport.c)
 *     ndisMIndicateReceiveFilterCapsChange @ 0x1C0021D88 (ndisMIndicateReceiveFilterCapsChange.c)
 *     ndisMIndicateNicSwitchCapsChange @ 0x1C0021EB0 (ndisMIndicateNicSwitchCapsChange.c)
 *     ndisFIndicateOffloadChange @ 0x1C0022104 (ndisFIndicateOffloadChange.c)
 *     ndisMIndicateOffloadChange @ 0x1C00222D0 (ndisMIndicateOffloadChange.c)
 *     __security_check_cookie @ 0x1C0022840 (__security_check_cookie.c)
 *     WPP_SF_ @ 0x1C00228A0 (WPP_SF_.c)
 *     memmove @ 0x1C0023700 (memmove.c)
 *     memset @ 0x1C0023A40 (memset.c)
 *     WPP_SF_q @ 0x1C0037744 (WPP_SF_q.c)
 *     ndisUpdateRcvFilterQueueParameters @ 0x1C0039B70 (ndisUpdateRcvFilterQueueParameters.c)
 *     WPP_SF_qD @ 0x1C003F388 (WPP_SF_qD.c)
 *     ndisFilterIndicatePMCapabilities @ 0x1C0044414 (ndisFilterIndicatePMCapabilities.c)
 *     ndisFilterIndicatePMOffloadReject @ 0x1C00444AC (ndisFilterIndicatePMOffloadReject.c)
 *     ndisFilterIndicateWoLPatternReject @ 0x1C00444F4 (ndisFilterIndicateWoLPatternReject.c)
 *     ndisMIndicatePMCapabilities @ 0x1C0044578 (ndisMIndicatePMCapabilities.c)
 *     ndisMIndicatePMHardwareCapabilities @ 0x1C0044628 (ndisMIndicatePMHardwareCapabilities.c)
 *     ndisMIndicatePMOffloadReject @ 0x1C0044738 (ndisMIndicatePMOffloadReject.c)
 *     ndisMIndicateWoLPatternReject @ 0x1C0044824 (ndisMIndicateWoLPatternReject.c)
 *     ndisMValidatePMWakeReason @ 0x1C0044AA8 (ndisMValidatePMWakeReason.c)
 *     ?ndisValidateMacAddressChange@@YA_NPEAU_NDIS_MINIPORT_BLOCK@@PEBU_NDIS_STATUS_INDICATION@@@Z @ 0x1C0058000 (-ndisValidateMacAddressChange@@YA_NPEAU_NDIS_MINIPORT_BLOCK@@PEBU_NDIS_STATUS_INDICATION@@@Z.c)
 *     ndisMIndicateHDSplitChange @ 0x1C0059A18 (ndisMIndicateHDSplitChange.c)
 *     ndisMIndicateQosParametersChange @ 0x1C0059ADC (ndisMIndicateQosParametersChange.c)
 *     ndisMIndicateTcpConnectionOffloadChange @ 0x1C0061164 (ndisMIndicateTcpConnectionOffloadChange.c)
 *     ndisMIndicatePDConfigChange @ 0x1C006DD70 (ndisMIndicatePDConfigChange.c)
 *     NdisMSleep @ 0x1C00AFE00 (NdisMSleep.c)
 */

void __fastcall ndisMRawIndicateStatusEx(struct NDIS_MINIPORT_ADAPTER_HANDLE__ *a1, struct _NDIS_STATUS_INDICATION *a2)
{
  unsigned int StatusCode; // esi
  struct NDIS_MINIPORT_ADAPTER_HANDLE__ *StatusBuffer; // r15
  char updated; // r12
  size_t StatusBufferSize; // r13
  struct _NDIS_STATUS_INDICATION *v6; // r14
  bool v8; // zf
  char v9; // al
  KIRQL v10; // dl
  __int64 v11; // r8
  __int64 HigherFilterWithPnpRef; // rax
  __int64 v13; // rbx
  KIRQL v14; // al
  KIRQL v15; // dl
  int v16; // ecx
  int v17; // eax
  int v18; // ecx
  char v19; // bl
  __int64 v20; // rcx
  __int64 v21; // rcx
  char v22; // al
  KIRQL v23; // dl
  char v24; // al
  KIRQL v25; // dl
  __int64 v26; // rdx
  char v27; // bl
  KIRQL v28; // dl
  char v29; // al
  KIRQL v30; // dl
  NTSTATUS (__stdcall *SourceHandle)(_DRIVER_OBJECT *, PUNICODE_STRING); // rcx
  unsigned __int8 v32; // al
  __int64 v33; // rdx
  unsigned int v34; // esi
  _OWORD *v35; // rax
  KIRQL v36; // dl
  int v37; // edx
  int v38; // r8d
  int v39; // eax
  int v40; // ecx
  int v41; // [rsp+20h] [rbp-60h]
  KIRQL NewIrql[4]; // [rsp+30h] [rbp-50h] BYREF
  int v43; // [rsp+34h] [rbp-4Ch]
  char v44; // [rsp+38h] [rbp-48h]
  int v45; // [rsp+3Ch] [rbp-44h]
  unsigned int i; // [rsp+40h] [rbp-40h]
  struct _NDIS_STATUS_INDICATION *v47; // [rsp+48h] [rbp-38h]
  _QWORD v48[5]; // [rsp+50h] [rbp-30h] BYREF

  StatusCode = a2->StatusCode;
  StatusBuffer = (struct NDIS_MINIPORT_ADAPTER_HANDLE__ *)a2->StatusBuffer;
  updated = 1;
  StatusBufferSize = a2->StatusBufferSize;
  v6 = a2;
  v47 = a2;
  LOBYTE(v45) = 0;
  LOBYTE(v43) = 0;
  v44 = 0;
  if ( (unsigned __int8)byte_1C008531F >= 4u )
    WPP_SF_qD(163LL, &WPP_9f38f38531f8ddee2755f96b3c07d5ed_Traceguids, a1, StatusCode);
  memset(v48, 0, sizeof(v48));
  v8 = v6->Header.Type == 0x98;
  LODWORD(v48[1]) = a1[87];
  v48[2] = *((_QWORD *)a1 + 350);
  v48[3] = *((_QWORD *)a1 + 351);
  v48[4] = *(_QWORD *)(a1 + 203);
  LODWORD(v48[0]) = 2621824;
  if ( !v8 || v6->Header.Size < 0x70u )
  {
    if ( (unsigned __int8)byte_1C008531F < 4u )
      return;
    v20 = 164LL;
    goto LABEL_181;
  }
  if ( StatusCode == 1073807384 )
  {
    if ( (unsigned int)StatusBufferSize < 4 )
    {
      if ( (unsigned __int8)byte_1C008531F < 4u )
        return;
      v20 = 165LL;
      goto LABEL_181;
    }
    goto LABEL_31;
  }
  if ( StatusCode - 1073872902 <= 1 )
  {
    updated = ndisMIndicateOffloadChange(a1, StatusCode, StatusBuffer, (unsigned int)StatusBufferSize);
    if ( !updated )
    {
      if ( (unsigned __int8)byte_1C008531F >= 4u )
      {
        v21 = 166LL;
LABEL_85:
        WPP_SF_(v21, &WPP_9f38f38531f8ddee2755f96b3c07d5ed_Traceguids);
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
      *((_DWORD *)a1 + 464) = 732917;
      v22 = ndisMIndicateReceiveFilterCapsChange(a1, StatusCode, StatusBuffer, (unsigned int)StatusBufferSize, 0);
      v23 = NewIrql[0];
      *((_QWORD *)a1 + 65) = 0LL;
      updated = v22;
      *((_DWORD *)a1 + 464) = 0;
      KeReleaseSpinLock((PKSPIN_LOCK)a1 + 12, v23);
      if ( !updated )
      {
        if ( (unsigned __int8)byte_1C008531F >= 4u )
        {
          v21 = 168LL;
          goto LABEL_85;
        }
        return;
      }
    }
    if ( ((StatusCode - 1073872960) & 0xFFFFFFEF) == 0 )
    {
      LOBYTE(v41) = 0;
      NewIrql[0] = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)a1 + 12);
      *((_QWORD *)a1 + 65) = KeGetCurrentThread();
      *((_DWORD *)a1 + 464) = 732936;
      v24 = ndisMIndicateNicSwitchCapsChange(a1, StatusCode, StatusBuffer, (unsigned int)StatusBufferSize, v41);
      v25 = NewIrql[0];
      *((_QWORD *)a1 + 65) = 0LL;
      updated = v24;
      *((_DWORD *)a1 + 464) = 0;
      KeReleaseSpinLock((PKSPIN_LOCK)a1 + 12, v25);
      if ( !updated )
      {
        if ( (unsigned __int8)byte_1C008531F >= 4u )
        {
          v21 = 169LL;
          goto LABEL_85;
        }
        return;
      }
    }
    if ( StatusCode == 1073873408 )
    {
      updated = ndisMIndicatePDConfigChange((struct _NDIS_MINIPORT_BLOCK *)a1);
      if ( !updated )
      {
        if ( (unsigned __int8)byte_1C008531F >= 4u )
        {
          v21 = 170LL;
          goto LABEL_85;
        }
        return;
      }
    }
    else if ( StatusCode == 1076105216 )
    {
      NewIrql[0] = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)a1 + 12);
      v26 = *((_QWORD *)a1 + 69);
      *((_QWORD *)a1 + 65) = KeGetCurrentThread();
      *((_DWORD *)a1 + 464) = 732970;
      if ( (_DWORD)StatusBufferSize == *(unsigned __int16 *)(v26 + 12) )
      {
        memmove((void *)(v26 + *(unsigned int *)(v26 + 16)), StatusBuffer, StatusBufferSize);
        v27 = 1;
      }
      else
      {
        v27 = 0;
      }
      v28 = NewIrql[0];
      *((_QWORD *)a1 + 65) = 0LL;
      updated = 0;
      *((_DWORD *)a1 + 464) = 0;
      KeReleaseSpinLock((PKSPIN_LOCK)a1 + 12, v28);
      if ( !v27 )
      {
        if ( (unsigned __int8)byte_1C008531F >= 3u )
        {
          v21 = 171LL;
          goto LABEL_85;
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
        *((_DWORD *)a1 + 464) = 732988;
        v29 = ndisMIndicateQosParametersChange((struct _NDIS_MINIPORT_BLOCK *)a1);
        v30 = NewIrql[0];
        *((_QWORD *)a1 + 65) = 0LL;
        updated = v29;
        *((_DWORD *)a1 + 464) = 0;
        KeReleaseSpinLock((PKSPIN_LOCK)a1 + 12, v30);
        if ( !updated )
        {
          if ( (unsigned __int8)byte_1C008531F >= 3u )
          {
            v21 = 172LL;
            goto LABEL_85;
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
          if ( (unsigned __int8)byte_1C008531F >= 3u )
          {
            v21 = 173LL;
            goto LABEL_85;
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
            if ( (unsigned __int8)byte_1C008531F >= 3u )
            {
              v21 = 174LL;
              goto LABEL_85;
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
            if ( (unsigned __int8)byte_1C008531F < 3u )
              return;
            v20 = 175LL;
            goto LABEL_181;
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
                  if ( (unsigned __int8)byte_1C008531F < 3u )
                    return;
                  v20 = 176LL;
                  goto LABEL_181;
                }
LABEL_140:
                NewIrql[0] = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)a1 + 12);
                *((_QWORD *)a1 + 65) = KeGetCurrentThread();
                *((_DWORD *)a1 + 464) = 733092;
                if ( !*((_BYTE *)a1 + 5432) )
                {
                  LOBYTE(v33) = 56;
                  if ( !(unsigned __int8)ndisReferenceMiniport(a1, v33) )
                  {
LABEL_147:
                    v36 = NewIrql[0];
                    *((_QWORD *)a1 + 65) = 0LL;
                    *((_DWORD *)a1 + 464) = 0;
                    KeReleaseSpinLock((PKSPIN_LOCK)a1 + 12, v36);
                    return;
                  }
                  ExQueueWorkItem((PWORK_QUEUE_ITEM)(a1 + 1350), NormalWorkQueue);
                  *((_BYTE *)a1 + 5432) = 1;
                }
                v34 = StatusCode - 1073873072;
                if ( v34 )
                {
                  if ( v34 == 1 )
                  {
                    a1[1368] = *(_DWORD *)(struct NDIS_MINIPORT_ADAPTER_HANDLE__ *)v6->StatusBuffer;
                    *((_BYTE *)a1 + 5434) = 1;
                  }
                }
                else
                {
                  v35 = v6->StatusBuffer;
                  *(_OWORD *)(a1 + 1359) = *v35;
                  *(_OWORD *)(a1 + 1363) = v35[1];
                  *((_WORD *)a1 + 2734) = *((_WORD *)v35 + 16);
                  *((_BYTE *)a1 + 5433) = 1;
                }
                goto LABEL_147;
              }
              if ( StatusCode != 1073873073 )
                goto LABEL_140;
              v32 = *((_BYTE *)a1 + 32);
              if ( (v32 > 6u || v32 == 6 && *((_BYTE *)a1 + 33) >= 0x32u)
                && v6->Header.Type == 0x98
                && v6->Header.Revision
                && v6->Header.Size >= 0x70u
                && !v6->DestinationHandle
                && (char *)SourceHandle == (char *)a1
                && !v6->PortNumber
                && v6->StatusBufferSize == 4 )
              {
                goto LABEL_140;
              }
              if ( (unsigned __int8)byte_1C008531F < 3u )
                return;
              v20 = 177LL;
LABEL_181:
              WPP_SF_q(v20, &WPP_9f38f38531f8ddee2755f96b3c07d5ed_Traceguids, a1);
              return;
            }
          }
          if ( StatusCode == 1073807372 )
          {
            HIDWORD(v48[0]) = 2;
            v9 = 1;
          }
          else
          {
            v9 = v44;
          }
          if ( StatusCode == 1073807371 )
          {
            HIDWORD(v48[0]) = 1;
            v9 = 1;
          }
          if ( v9 )
          {
            v6->StatusBuffer = v48;
            StatusBuffer = (struct NDIS_MINIPORT_ADAPTER_HANDLE__ *)v48;
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
    *((_DWORD *)a1 + 464) = 733157;
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
    v10 = NewIrql[0];
    *((_QWORD *)a1 + 65) = 0LL;
    *((_DWORD *)a1 + 464) = 0;
    KeReleaseSpinLock((PKSPIN_LOCK)a1 + 12, v10);
    LOBYTE(v11) = 9;
    HigherFilterWithPnpRef = ndisGetHigherFilterWithPnpRef(a1, 0LL, v11);
    v13 = HigherFilterWithPnpRef;
    if ( HigherFilterWithPnpRef )
    {
      v14 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(HigherFilterWithPnpRef + 144));
      *(_QWORD *)(v13 + 152) = KeGetCurrentThread();
      NewIrql[0] = v14;
      *(_DWORD *)(v13 + 160) = 733185;
      if ( (*(_DWORD *)(v13 + 56) & 0x2000) != 0 )
      {
        do
        {
          *(_QWORD *)(v13 + 152) = 0LL;
          *(_DWORD *)(v13 + 160) = 0;
          KeReleaseSpinLock((PKSPIN_LOCK)(v13 + 144), NewIrql[0]);
          if ( KeGetCurrentIrql() == 2 )
          {
            for ( i = 0; i < 0x32; ++i )
              ;
          }
          else
          {
            NdisMSleep(0x32u);
          }
          NewIrql[0] = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v13 + 144));
          *(_QWORD *)(v13 + 152) = KeGetCurrentThread();
          *(_DWORD *)(v13 + 160) = 733185;
        }
        while ( (*(_DWORD *)(v13 + 56) & 0x2000) != 0 );
        v6 = v47;
      }
      *(_DWORD *)(v13 + 56) |= 0x2000u;
      *(_QWORD *)(v13 + 152) = 0LL;
      *(_DWORD *)(v13 + 160) = 0;
      KeReleaseSpinLockFromDpcLevel((PKSPIN_LOCK)(v13 + 144));
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
        v16 = *(_DWORD *)(v13 + 344);
        v17 = *((_DWORD *)StatusBuffer + 1);
        if ( v16 != v17 )
        {
          if ( v16 == 1 )
          {
            LOBYTE(v45) = 1;
          }
          else
          {
            v18 = (unsigned __int8)v43;
            if ( v17 == 1 )
              v18 = 1;
            v43 = v18;
          }
        }
        *(_DWORD *)(v13 + 344) = v17;
        *(_DWORD *)(struct NDIS_MINIPORT_ADAPTER_HANDLE__ *)(v13 + 348) = StatusBuffer[2];
        *(_QWORD *)(v13 + 360) = *((_QWORD *)StatusBuffer + 3);
        *(_QWORD *)(v13 + 352) = *((_QWORD *)StatusBuffer + 2);
        *(_DWORD *)(struct NDIS_MINIPORT_ADAPTER_HANDLE__ *)(v13 + 368) = StatusBuffer[8];
        *(_DWORD *)(struct NDIS_MINIPORT_ADAPTER_HANDLE__ *)(v13 + 372) = StatusBuffer[9];
      }
LABEL_36:
      if ( StatusCode == 1073938515 )
        ndisFilterIndicatePMCapabilities(v13, v6);
      if ( StatusCode == 1073938513 )
        updated = ndisFilterIndicateWoLPatternReject(v13, v6);
      if ( StatusCode == 1073938514 )
        updated = ndisFilterIndicatePMOffloadReject(v13, v6);
      if ( StatusCode == 1073872902 )
        updated = ndisFIndicateOffloadChange(v13, StatusBuffer, (unsigned int)StatusBufferSize);
LABEL_44:
      if ( updated )
      {
        if ( *(_QWORD *)(*(_QWORD *)(v13 + 16) + 288LL) )
          ndisFInvokeStatus(v13, v6);
        else
          ndisFIndicateStatusInternal(v13, (__int64)v6);
        KeAcquireSpinLockAtDpcLevel((PKSPIN_LOCK)a1 + 12);
        *((_QWORD *)a1 + 65) = KeGetCurrentThread();
        *((_DWORD *)a1 + 464) = 733267;
        if ( (_BYTE)v45 )
          ndisSwapFilterHandlersForMediaDisconnect((__int64)a1, 0LL, v13);
        if ( (_BYTE)v43 )
          ndisRestoreFilterHandlersForMediaDisconnect((__int64)a1, 0LL, v13);
        *((_QWORD *)a1 + 65) = 0LL;
        *((_DWORD *)a1 + 464) = 0;
        KeReleaseSpinLockFromDpcLevel((PKSPIN_LOCK)a1 + 12);
      }
      KeAcquireSpinLockAtDpcLevel((PKSPIN_LOCK)(v13 + 144));
      v15 = NewIrql[0];
      *(_DWORD *)(v13 + 56) &= ~0x2000u;
      *(_QWORD *)(v13 + 152) = 0LL;
      *(_DWORD *)(v13 + 160) = 0;
      KeReleaseSpinLock((PKSPIN_LOCK)(v13 + 144), v15);
      ndisDereferenceRef((PKSPIN_LOCK)(v13 + 312));
LABEL_53:
      if ( (unsigned __int8)byte_1C008531F >= 4u )
        WPP_SF_qD(178LL, &WPP_9f38f38531f8ddee2755f96b3c07d5ed_Traceguids, a1, (unsigned int)v6->StatusCode);
      return;
    }
    ndisMAcquireStInLockWithSpinLock((struct _NDIS_MINIPORT_BLOCK *)a1, NewIrql);
    if ( v6->SourceHandle == &ndisIntReqGeneric )
    {
      if ( StatusCode != 1073807383 )
        goto LABEL_74;
      StatusBuffer[1] = a1[86];
    }
    if ( StatusCode == 1073807383 && StatusBuffer && (unsigned int)StatusBufferSize >= 0x28 )
    {
      if ( *((_DWORD *)StatusBuffer + 1) == 1 )
        goto LABEL_169;
      v37 = (unsigned __int8)v45;
      if ( ((_DWORD)a1[30] & 0x20000000) != 0 )
        v37 = 1;
      *((_DWORD *)a1 + 30) &= ~0x20000000u;
      v45 = v37;
      if ( *((_DWORD *)StatusBuffer + 1) == 1 )
      {
LABEL_169:
        v38 = (unsigned __int8)v43;
        if ( ((_DWORD)a1[30] & 0x20000000) == 0 )
          v38 = 1;
        *((_DWORD *)a1 + 30) |= 0x20000000u;
        v43 = v38;
      }
      else
      {
        LOBYTE(v38) = v43;
      }
      v39 = *((_DWORD *)a1 + 120);
      v40 = *((_DWORD *)StatusBuffer + 1);
      if ( v39 != v40 )
      {
        if ( v39 != 1 )
        {
          v19 = v38;
          if ( v40 == 1 )
            v19 = 1;
          goto LABEL_75;
        }
        LOBYTE(v45) = 1;
      }
    }
LABEL_74:
    v19 = v43;
LABEL_75:
    v6->Flags |= 2u;
    ndisIndicateStatusInternal((struct _NDIS_MINIPORT_BLOCK *)a1, (__int128 *)v6);
    if ( (_BYTE)v45 )
      ndisSwapFilterHandlersForMediaDisconnect((__int64)a1, 0LL, 0LL);
    if ( v19 )
      ndisRestoreFilterHandlersForMediaDisconnect((__int64)a1, 0LL, 0LL);
    ndisMReleaseStInLockAndSpinLock((struct _NDIS_MINIPORT_BLOCK *)a1, NewIrql[0]);
    goto LABEL_53;
  }
  updated = ndisMIndicateHDSplitChange(a1, StatusBuffer, (unsigned int)StatusBufferSize);
  if ( updated )
    goto LABEL_31;
  if ( (unsigned __int8)byte_1C008531F >= 4u )
  {
    v21 = 167LL;
    goto LABEL_85;
  }
}
