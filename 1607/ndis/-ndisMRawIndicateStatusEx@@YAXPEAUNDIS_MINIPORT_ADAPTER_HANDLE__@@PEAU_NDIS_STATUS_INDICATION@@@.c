/*
 * XREFs of ?ndisMRawIndicateStatusEx@@YAXPEAUNDIS_MINIPORT_ADAPTER_HANDLE__@@PEAU_NDIS_STATUS_INDICATION@@@Z @ 0x1C0018568
 * Callers:
 *     ?ndisMpHookDefaultIndicateStatus@@YAXPEAXPEAUNDIS_MINIPORT_HOOK_ADAPTER_HANDLE__@@PEAUNDIS_MINIPORT_ADAPTER_HANDLE__@@PEAU_NDIS_STATUS_INDICATION@@@Z @ 0x1C0019F20 (-ndisMpHookDefaultIndicateStatus@@YAXPEAXPEAUNDIS_MINIPORT_HOOK_ADAPTER_HANDLE__@@PEAUNDIS_MINIP.c)
 *     ?ndisMpHookRawIndicateStatus@@YAXPEAUNDIS_MINIPORT_ADAPTER_HANDLE__@@PEAU_NDIS_STATUS_INDICATION@@@Z @ 0x1C0073CC0 (-ndisMpHookRawIndicateStatus@@YAXPEAUNDIS_MINIPORT_ADAPTER_HANDLE__@@PEAU_NDIS_STATUS_INDICATION.c)
 *     ?ndisMApplyInterfaceChange@@YAXPEAU_NDIS_MINIPORT_BLOCK@@KPEAU_NDIS_STATUS_INDICATION@@@Z @ 0x1C00D05F8 (-ndisMApplyInterfaceChange@@YAXPEAU_NDIS_MINIPORT_BLOCK@@KPEAU_NDIS_STATUS_INDICATION@@@Z.c)
 * Callees:
 *     ndisReferenceMiniport @ 0x1C000D160 (ndisReferenceMiniport.c)
 *     ?ndisMAcquireStInLockWithSpinLock@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z @ 0x1C0015590 (-ndisMAcquireStInLockWithSpinLock@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z.c)
 *     ndisGetHigherFilterWithPnpRef @ 0x1C0015B70 (ndisGetHigherFilterWithPnpRef.c)
 *     ndisDereferenceRef @ 0x1C001612C (ndisDereferenceRef.c)
 *     ndisFIndicateStatusToFilter @ 0x1C00162B8 (ndisFIndicateStatusToFilter.c)
 *     ?ndisMReleaseStInLockAndSpinLock@@YAXPEAU_NDIS_MINIPORT_BLOCK@@E@Z @ 0x1C0016334 (-ndisMReleaseStInLockAndSpinLock@@YAXPEAU_NDIS_MINIPORT_BLOCK@@E@Z.c)
 *     ndisIndicateStatusInternal @ 0x1C0016D10 (ndisIndicateStatusInternal.c)
 *     ndisRestoreFilterHandlersForMediaDisconnect @ 0x1C001F710 (ndisRestoreFilterHandlersForMediaDisconnect.c)
 *     ndisFIndicateOffloadChange @ 0x1C0024DF0 (ndisFIndicateOffloadChange.c)
 *     ndisMIndicateReceiveFilterCapsChange @ 0x1C0024E7C (ndisMIndicateReceiveFilterCapsChange.c)
 *     ndisMIndicateNicSwitchCapsChange @ 0x1C0024FFC (ndisMIndicateNicSwitchCapsChange.c)
 *     ndisMIndicateOffloadChange @ 0x1C00250E8 (ndisMIndicateOffloadChange.c)
 *     __security_check_cookie @ 0x1C0026780 (__security_check_cookie.c)
 *     WPP_SF_ @ 0x1C00267A0 (WPP_SF_.c)
 *     memmove @ 0x1C00271C0 (memmove.c)
 *     memset @ 0x1C0027500 (memset.c)
 *     WPP_SF_q @ 0x1C003C368 (WPP_SF_q.c)
 *     ndisUpdateRcvFilterQueueParameters @ 0x1C003E828 (ndisUpdateRcvFilterQueueParameters.c)
 *     WPP_SF_qD @ 0x1C004451C (WPP_SF_qD.c)
 *     ndisFilterIndicatePMCapabilities @ 0x1C0048FF0 (ndisFilterIndicatePMCapabilities.c)
 *     ndisFilterIndicatePMOffloadReject @ 0x1C0049094 (ndisFilterIndicatePMOffloadReject.c)
 *     ndisFilterIndicateWoLPatternReject @ 0x1C00490DC (ndisFilterIndicateWoLPatternReject.c)
 *     ndisMIndicatePMCapabilities @ 0x1C00491BC (ndisMIndicatePMCapabilities.c)
 *     ndisMIndicatePMHardwareCapabilities @ 0x1C004926C (ndisMIndicatePMHardwareCapabilities.c)
 *     ndisMIndicatePMOffloadReject @ 0x1C004937C (ndisMIndicatePMOffloadReject.c)
 *     ndisMIndicateWoLPatternReject @ 0x1C0049468 (ndisMIndicateWoLPatternReject.c)
 *     ndisMValidatePMWakeReason @ 0x1C004980C (ndisMValidatePMWakeReason.c)
 *     ndisSwapFilterHandlersForMediaDisconnect @ 0x1C00593D4 (ndisSwapFilterHandlersForMediaDisconnect.c)
 *     ?ndisValidateMacAddressChange@@YA_NPEAU_NDIS_MINIPORT_BLOCK@@PEBU_NDIS_STATUS_INDICATION@@@Z @ 0x1C005C490 (-ndisValidateMacAddressChange@@YA_NPEAU_NDIS_MINIPORT_BLOCK@@PEBU_NDIS_STATUS_INDICATION@@@Z.c)
 *     ndisMIndicateHDSplitChange @ 0x1C005DE58 (ndisMIndicateHDSplitChange.c)
 *     ndisMIndicateQosParametersChange @ 0x1C005DF1C (ndisMIndicateQosParametersChange.c)
 *     ndisMIndicateTcpConnectionOffloadChange @ 0x1C0064C64 (ndisMIndicateTcpConnectionOffloadChange.c)
 *     ndisMIndicatePDConfigChange @ 0x1C0071D64 (ndisMIndicatePDConfigChange.c)
 *     NdisMSleep @ 0x1C00B1AA0 (NdisMSleep.c)
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
  __int64 HigherFilterWithPnpRef; // rax
  __int64 v13; // rbx
  KIRQL v14; // al
  __int64 v15; // r8
  KIRQL v16; // dl
  char v17; // bl
  int v18; // ecx
  int v19; // eax
  int v20; // ecx
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
  int v37; // eax
  int v38; // ecx
  int v39; // edx
  int v40; // ecx
  int v41; // eax
  int v42; // ecx
  int v43; // [rsp+20h] [rbp-60h]
  KIRQL NewIrql[4]; // [rsp+30h] [rbp-50h] BYREF
  int v45; // [rsp+34h] [rbp-4Ch]
  char v46; // [rsp+38h] [rbp-48h]
  int v47; // [rsp+3Ch] [rbp-44h]
  unsigned int i; // [rsp+40h] [rbp-40h]
  struct _NDIS_STATUS_INDICATION *v49; // [rsp+48h] [rbp-38h]
  _QWORD v50[5]; // [rsp+50h] [rbp-30h] BYREF

  StatusCode = a2->StatusCode;
  StatusBuffer = (struct NDIS_MINIPORT_ADAPTER_HANDLE__ *)a2->StatusBuffer;
  updated = 1;
  StatusBufferSize = a2->StatusBufferSize;
  v6 = a2;
  v49 = a2;
  LOBYTE(v47) = 0;
  LOBYTE(v45) = 0;
  v46 = 0;
  if ( (unsigned __int8)byte_1C00895DF >= 4u )
    WPP_SF_qD(166LL, &WPP_6aaf1c75542c3fb73373be6b27303be0_Traceguids, a1, StatusCode);
  memset(v50, 0, sizeof(v50));
  v9 = v6->Header.Type == 0x98;
  LODWORD(v50[1]) = a1[87];
  v50[2] = *((_QWORD *)a1 + 350);
  v50[3] = *((_QWORD *)a1 + 351);
  v50[4] = *(_QWORD *)(a1 + 203);
  LODWORD(v50[0]) = 2621824;
  if ( !v9 || v6->Header.Size < 0x70u )
  {
    if ( (unsigned __int8)byte_1C00895DF < 4u )
      return;
    v21 = 167LL;
    goto LABEL_179;
  }
  if ( StatusCode == 1073807384 )
  {
    if ( (unsigned int)StatusBufferSize < 4 )
    {
      if ( (unsigned __int8)byte_1C00895DF < 4u )
        return;
      v21 = 168LL;
      goto LABEL_179;
    }
    goto LABEL_31;
  }
  if ( StatusCode - 1073872902 <= 1 )
  {
    updated = ndisMIndicateOffloadChange(a1, StatusCode, StatusBuffer, (unsigned int)StatusBufferSize);
    if ( !updated )
    {
      if ( (unsigned __int8)byte_1C00895DF >= 4u )
      {
        v22 = 169LL;
LABEL_83:
        WPP_SF_(v22, &WPP_6aaf1c75542c3fb73373be6b27303be0_Traceguids, v8);
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
      *((_DWORD *)a1 + 464) = 733024;
      v23 = ndisMIndicateReceiveFilterCapsChange(a1, StatusCode, StatusBuffer, (unsigned int)StatusBufferSize, 0);
      v24 = NewIrql[0];
      *((_QWORD *)a1 + 65) = 0LL;
      updated = v23;
      *((_DWORD *)a1 + 464) = 0;
      KeReleaseSpinLock((PKSPIN_LOCK)a1 + 12, v24);
      if ( !updated )
      {
        if ( (unsigned __int8)byte_1C00895DF >= 4u )
        {
          v22 = 171LL;
          goto LABEL_83;
        }
        return;
      }
    }
    if ( ((StatusCode - 1073872960) & 0xFFFFFFEF) == 0 )
    {
      LOBYTE(v43) = 0;
      NewIrql[0] = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)a1 + 12);
      *((_QWORD *)a1 + 65) = KeGetCurrentThread();
      *((_DWORD *)a1 + 464) = 733043;
      v25 = ndisMIndicateNicSwitchCapsChange(a1, StatusCode, StatusBuffer, (unsigned int)StatusBufferSize, v43);
      v26 = NewIrql[0];
      *((_QWORD *)a1 + 65) = 0LL;
      updated = v25;
      *((_DWORD *)a1 + 464) = 0;
      KeReleaseSpinLock((PKSPIN_LOCK)a1 + 12, v26);
      if ( !updated )
      {
        if ( (unsigned __int8)byte_1C00895DF >= 4u )
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
        if ( (unsigned __int8)byte_1C00895DF >= 4u )
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
      *((_DWORD *)a1 + 464) = 733077;
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
        if ( (unsigned __int8)byte_1C00895DF >= 3u )
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
        *((_DWORD *)a1 + 464) = 733095;
        v30 = ndisMIndicateQosParametersChange((struct _NDIS_MINIPORT_BLOCK *)a1);
        v31 = NewIrql[0];
        *((_QWORD *)a1 + 65) = 0LL;
        updated = v30;
        *((_DWORD *)a1 + 464) = 0;
        KeReleaseSpinLock((PKSPIN_LOCK)a1 + 12, v31);
        if ( !updated )
        {
          if ( (unsigned __int8)byte_1C00895DF >= 3u )
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
          if ( (unsigned __int8)byte_1C00895DF >= 3u )
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
            if ( (unsigned __int8)byte_1C00895DF >= 3u )
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
            if ( (unsigned __int8)byte_1C00895DF < 3u )
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
                  if ( (unsigned __int8)byte_1C00895DF < 3u )
                    return;
                  v21 = 179LL;
                  goto LABEL_179;
                }
LABEL_139:
                NewIrql[0] = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)a1 + 12);
                *((_QWORD *)a1 + 65) = KeGetCurrentThread();
                *((_DWORD *)a1 + 464) = 733199;
                if ( !*((_BYTE *)a1 + 5416) )
                {
                  if ( !ndisReferenceMiniport((__int64)a1, 0x3Au) )
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
              if ( (unsigned __int8)byte_1C00895DF < 3u )
                return;
              v21 = 180LL;
LABEL_179:
              WPP_SF_q(v21, &WPP_6aaf1c75542c3fb73373be6b27303be0_Traceguids, a1);
              return;
            }
          }
          if ( StatusCode == 1073807372 )
          {
            HIDWORD(v50[0]) = 2;
            v10 = 1;
          }
          else
          {
            v10 = v46;
          }
          if ( StatusCode == 1073807371 )
          {
            HIDWORD(v50[0]) = 1;
            v10 = 1;
          }
          if ( v10 )
          {
            v6->StatusBuffer = v50;
            StatusBuffer = (struct NDIS_MINIPORT_ADAPTER_HANDLE__ *)v50;
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
    *((_DWORD *)a1 + 464) = 733264;
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
    HigherFilterWithPnpRef = ndisGetHigherFilterWithPnpRef((__int64)a1, 0LL);
    v13 = HigherFilterWithPnpRef;
    if ( HigherFilterWithPnpRef )
    {
      v14 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(HigherFilterWithPnpRef + 144));
      *(_QWORD *)(v13 + 152) = KeGetCurrentThread();
      NewIrql[0] = v14;
      *(_DWORD *)(v13 + 160) = 733292;
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
          *(_DWORD *)(v13 + 160) = 733292;
        }
        while ( (*(_DWORD *)(v13 + 56) & 0x2000) != 0 );
        v6 = v49;
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
        v18 = *(_DWORD *)(v13 + 344);
        v19 = *((_DWORD *)StatusBuffer + 1);
        if ( v18 != v19 )
        {
          if ( v18 == 1 )
          {
            LOBYTE(v47) = 1;
          }
          else
          {
            v20 = (unsigned __int8)v45;
            if ( v19 == 1 )
              v20 = 1;
            v45 = v20;
          }
        }
        *(_DWORD *)(v13 + 344) = v19;
        *(_DWORD *)(struct NDIS_MINIPORT_ADAPTER_HANDLE__ *)(v13 + 348) = StatusBuffer[2];
        *(_QWORD *)(v13 + 360) = *((_QWORD *)StatusBuffer + 3);
        *(_QWORD *)(v13 + 352) = *((_QWORD *)StatusBuffer + 2);
        *(_DWORD *)(struct NDIS_MINIPORT_ADAPTER_HANDLE__ *)(v13 + 368) = StatusBuffer[8];
        *(_DWORD *)(struct NDIS_MINIPORT_ADAPTER_HANDLE__ *)(v13 + 372) = StatusBuffer[9];
      }
LABEL_36:
      if ( StatusCode == 1073938515 )
        ndisFilterIndicatePMCapabilities(v13, v6, v15);
      if ( StatusCode == 1073938513 )
        updated = ndisFilterIndicateWoLPatternReject(v13, v6, v15);
      if ( StatusCode == 1073938514 )
        updated = ndisFilterIndicatePMOffloadReject(v13, v6, v15);
      if ( StatusCode == 1073872902 )
        updated = ndisFIndicateOffloadChange(v13, StatusBuffer, (unsigned int)StatusBufferSize);
LABEL_44:
      if ( updated )
      {
        ndisFIndicateStatusToFilter(v13, (__int64)v6);
        KeAcquireSpinLockAtDpcLevel((PKSPIN_LOCK)a1 + 12);
        *((_QWORD *)a1 + 65) = KeGetCurrentThread();
        *((_DWORD *)a1 + 464) = 733374;
        if ( (_BYTE)v47 )
          ndisSwapFilterHandlersForMediaDisconnect(a1, 0LL, v13);
        if ( (_BYTE)v45 )
          ndisRestoreFilterHandlersForMediaDisconnect(a1, 0LL, v13);
        *((_QWORD *)a1 + 65) = 0LL;
        *((_DWORD *)a1 + 464) = 0;
        KeReleaseSpinLockFromDpcLevel((PKSPIN_LOCK)a1 + 12);
      }
      KeAcquireSpinLockAtDpcLevel((PKSPIN_LOCK)(v13 + 144));
      v16 = NewIrql[0];
      *(_DWORD *)(v13 + 56) &= ~0x2000u;
      *(_QWORD *)(v13 + 152) = 0LL;
      *(_DWORD *)(v13 + 160) = 0;
      KeReleaseSpinLock((PKSPIN_LOCK)(v13 + 144), v16);
      ndisDereferenceRef((PKSPIN_LOCK)(v13 + 312), 9u);
LABEL_51:
      if ( (unsigned __int8)byte_1C00895DF >= 4u )
        WPP_SF_qD(181LL, &WPP_6aaf1c75542c3fb73373be6b27303be0_Traceguids, a1, (unsigned int)v6->StatusCode);
      return;
    }
    ndisMAcquireStInLockWithSpinLock((struct _NDIS_MINIPORT_BLOCK *)a1, NewIrql);
    if ( v6->SourceHandle == &ndisIntReqGeneric )
    {
      if ( StatusCode != 1073807383 )
        goto LABEL_55;
      StatusBuffer[1] = a1[86];
    }
    if ( StatusCode == 1073807383 && StatusBuffer && (unsigned int)StatusBufferSize >= 0x28 )
    {
      if ( *((_DWORD *)StatusBuffer + 1) == 1 )
        goto LABEL_167;
      v37 = *((_DWORD *)a1 + 30);
      v38 = (unsigned __int8)v47;
      if ( (v37 & 0x20000000) != 0 )
        v38 = 1;
      *((_DWORD *)a1 + 30) = v37 & 0xDFFFFFFF;
      v47 = v38;
      if ( *((_DWORD *)StatusBuffer + 1) == 1 )
      {
LABEL_167:
        v40 = *((_DWORD *)a1 + 30);
        v39 = (unsigned __int8)v45;
        if ( (v40 & 0x20000000) == 0 )
          v39 = 1;
        *((_DWORD *)a1 + 30) = v40 | 0x20000000;
        v45 = v39;
      }
      else
      {
        LOBYTE(v39) = v45;
      }
      v41 = *((_DWORD *)a1 + 120);
      v42 = *((_DWORD *)StatusBuffer + 1);
      if ( v41 != v42 )
      {
        if ( v41 != 1 )
        {
          v17 = v39;
          if ( v42 == 1 )
            v17 = 1;
          goto LABEL_56;
        }
        LOBYTE(v47) = 1;
      }
    }
LABEL_55:
    v17 = v45;
LABEL_56:
    v6->Flags |= 2u;
    ndisIndicateStatusInternal((struct _NDIS_MINIPORT_BLOCK *)a1, (__int128 *)v6);
    if ( (_BYTE)v47 )
      ndisSwapFilterHandlersForMediaDisconnect(a1, 0LL, 0LL);
    if ( v17 )
      ndisRestoreFilterHandlersForMediaDisconnect(a1, 0LL, 0LL);
    ndisMReleaseStInLockAndSpinLock((struct _NDIS_MINIPORT_BLOCK *)a1, NewIrql[0]);
    goto LABEL_51;
  }
  updated = ndisMIndicateHDSplitChange(a1, StatusBuffer, (unsigned int)StatusBufferSize);
  if ( updated )
    goto LABEL_31;
  if ( (unsigned __int8)byte_1C00895DF >= 4u )
  {
    v22 = 170LL;
    goto LABEL_83;
  }
}
