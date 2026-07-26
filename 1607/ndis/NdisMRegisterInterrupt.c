/*
 * XREFs of NdisMRegisterInterrupt @ 0x1C00D33A0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_dd @ 0x1C0042EFC (WPP_SF_dd_ea_1C0042EFC.c)
 *     Template_jqxqqq @ 0x1C004439C (Template_jqxqqq.c)
 *     WPP_SF_qD @ 0x1C004451C (WPP_SF_qD.c)
 *     WPP_SF_qdD @ 0x1C0044560 (WPP_SF_qdD.c)
 *     ndisTranslateResources @ 0x1C00B2498 (ndisTranslateResources.c)
 */

NDIS_STATUS __stdcall NdisMRegisterInterrupt(
        PNDIS_MINIPORT_INTERRUPT Interrupt,
        NDIS_HANDLE MiniportAdapterHandle,
        UINT InterruptVector,
        UINT InterruptLevel,
        BOOLEAN RequestIsr,
        BOOLEAN SharedInterrupt,
        NDIS_INTERRUPT_MODE InterruptMode)
{
  __int64 v7; // r15
  unsigned __int8 v8; // r14
  NDIS_STATUS v11; // ebx
  BOOLEAN v12; // r12
  void (__fastcall *v13)(void *); // rcx
  __int64 v14; // rcx
  KAFFINITY v15; // rcx
  ULONG v16; // r15d
  _BOOL8 v17; // rdx
  _DEVICE_OBJECT *v18; // rax
  NTSTATUS v19; // eax
  __int64 v20; // rcx
  char v21; // r12
  __int64 v23; // [rsp+28h] [rbp-71h]
  __int64 v24; // [rsp+58h] [rbp-41h] BYREF
  _IO_CONNECT_INTERRUPT_PARAMETERS Parameters; // [rsp+68h] [rbp-31h] BYREF
  __int64 v26; // [rsp+F0h] [rbp+57h] BYREF

  v7 = InterruptLevel;
  v8 = 0;
  v26 = 0LL;
  if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
    WPP_SF_qD(0xCu, &WPP_7f4ef916cbec3728ab6689e92fcfc2a4_Traceguids, (__int64)MiniportAdapterHandle, InterruptLevel);
  if ( *((_BYTE *)MiniportAdapterHandle + 32) >= 6u )
  {
    v11 = -1071448020;
LABEL_22:
    _InterlockedDecrement((volatile signed __int32 *)MiniportAdapterHandle + 476);
    *((_QWORD *)MiniportAdapterHandle + 14) = 0LL;
    goto LABEL_23;
  }
  if ( (*((_DWORD *)MiniportAdapterHandle + 934) & 2) != 0 )
  {
    v11 = -1073741670;
    goto LABEL_22;
  }
  _InterlockedIncrement((volatile signed __int32 *)MiniportAdapterHandle + 476);
  v12 = SharedInterrupt;
  Interrupt->Reserved = (void *)*((_QWORD *)MiniportAdapterHandle + 3);
  *((_QWORD *)MiniportAdapterHandle + 14) = Interrupt;
  Interrupt->DpcCount = 0;
  Interrupt->IsDeregistered = 0;
  Interrupt->Miniport = (_NDIS_MINIPORT_BLOCK *)MiniportAdapterHandle;
  Interrupt->MiniportIsr = *(void (__fastcall **)(unsigned __int8 *, unsigned __int8 *, void *))(*((_QWORD *)MiniportAdapterHandle
                                                                                                 + 477)
                                                                                               + 168LL);
  v13 = *(void (__fastcall **)(void *))(*((_QWORD *)MiniportAdapterHandle + 477) + 152LL);
  Interrupt->IsrRequested = RequestIsr;
  Interrupt->MiniportDpc = v13;
  Interrupt->SharedInterrupt = v12;
  if ( !v12 )
    *((_DWORD *)MiniportAdapterHandle + 468) |= 0x4000000u;
  KeInitializeEvent(&Interrupt->DpcsCompletedEvent, SynchronizationEvent, 0);
  KeInitializeDpc(&Interrupt->InterruptDpc, (PKDEFERRED_ROUTINE)ndis5InterruptDpc, Interrupt);
  KeSetImportanceDpc(&Interrupt->InterruptDpc, MediumImportance);
  *((_QWORD *)MiniportAdapterHandle + 436) = MiniportAdapterHandle;
  *((_QWORD *)MiniportAdapterHandle + 435) = ndis5QueuedMiniportDpcWorkItem;
  *((_QWORD *)MiniportAdapterHandle + 433) = 0LL;
  *((_DWORD *)MiniportAdapterHandle + 30) &= ~0x20u;
  v11 = ndisTranslateResources((__int64)MiniportAdapterHandle, 2, v7, &v24, &v26);
  if ( v11 )
  {
    if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 2u )
      WPP_SF_qD(0xDu, &WPP_7f4ef916cbec3728ab6689e92fcfc2a4_Traceguids, (__int64)MiniportAdapterHandle, v7);
    if ( (Microsoft_Windows_NDISEnableBits & 0x100) != 0 )
      Template_jqxqqq(
        v14,
        &RegisterInterruptFailed,
        (const GUID *)MiniportAdapterHandle + 254,
        (unsigned __int64)MiniportAdapterHandle + 4064,
        *((_DWORD *)MiniportAdapterHandle + 1028),
        *((_QWORD *)MiniportAdapterHandle + 510),
        v11,
        170,
        0);
    v11 = -1073741823;
    goto LABEL_22;
  }
  if ( v26 )
  {
    v15 = *(_QWORD *)(v26 + 12);
    v8 = *(_BYTE *)(v26 + 4);
    v16 = *(_DWORD *)(v26 + 8);
    v17 = *(_WORD *)(v26 + 2) != 0;
    v18 = (_DEVICE_OBJECT *)*((_QWORD *)MiniportAdapterHandle + 486);
    *((_DWORD *)MiniportAdapterHandle + 31) |= 0x80000000;
    Parameters.FullySpecified.PhysicalDeviceObject = v18;
    Parameters.FullySpecified.ProcessorEnableMask = v15;
    Parameters.FullySpecified.ServiceRoutine = (PKSERVICE_ROUTINE)ndisMIsr;
    Parameters.Version = 1;
    Parameters.FullySpecified.InterruptObject = &Interrupt->InterruptObject;
    *(_OWORD *)&Parameters.MessageBased.ServiceContext = (unsigned __int64)Interrupt;
    Parameters.FullySpecified.Vector = v16;
    Parameters.FullySpecified.Irql = v8;
    *(_WORD *)&Parameters.MessageBased.SynchronizeIrql = v8;
    Parameters.FullySpecified.InterruptMode = v17;
    Parameters.FullySpecified.ShareVector = v12;
    v19 = IoConnectInterruptEx(&Parameters);
    v21 = v19;
    if ( v19 < 0 )
    {
      v11 = -1073741823;
      if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
        WPP_SF_dd(0xEu, &WPP_7f4ef916cbec3728ab6689e92fcfc2a4_Traceguids, v8, v16);
      if ( (Microsoft_Windows_NDISEnableBits & 0x100) != 0 )
        Template_jqxqqq(
          v20,
          &RegisterInterruptFailed,
          (const GUID *)MiniportAdapterHandle + 254,
          (unsigned __int64)MiniportAdapterHandle + 4064,
          *((_DWORD *)MiniportAdapterHandle + 1028),
          *((_QWORD *)MiniportAdapterHandle + 510),
          v21,
          240,
          v8);
      Interrupt->InterruptObject = 0LL;
      goto LABEL_22;
    }
  }
LABEL_23:
  if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
  {
    LODWORD(v23) = v11;
    WPP_SF_qdD(0xFu, &WPP_7f4ef916cbec3728ab6689e92fcfc2a4_Traceguids, (__int64)MiniportAdapterHandle, v8, v23);
  }
  return v11;
}
