/*
 * XREFs of PinCreate @ 0x1C0015430
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C0001000 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_qd @ 0x1C0001248 (WPP_RECORDER_SF_qd.c)
 *     WPP_RECORDER_SF_ @ 0x1C0001EE8 (WPP_RECORDER_SF_.c)
 *     PinAddPinToList @ 0x1C00020B8 (PinAddPinToList.c)
 *     __security_check_cookie @ 0x1C0006850 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0007440 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0008380 (memset.c)
 *     PinValidateDataFormat @ 0x1C001510C (PinValidateDataFormat.c)
 */

__int64 __fastcall PinCreate(PKSPIN Pin)
{
  const KSPIN_DESCRIPTOR_EX *Descriptor; // rbp
  ULONG v2; // edi
  char v3; // bl
  __int64 v5; // r13
  NTSTATUS v6; // ebx
  PKSDATAFORMAT ConnectionFormat; // r12
  char v8; // r9
  __int64 v9; // rax
  unsigned __int64 v10; // rcx
  unsigned int v11; // r11d
  char *v12; // rdx
  unsigned __int64 v13; // rcx
  int v14; // r10d
  unsigned __int64 v15; // r8
  char v16; // r9
  ULONG DataRangesCount; // r15d
  __int64 v18; // r14
  int v19; // eax
  unsigned int Interfaces; // edx
  unsigned int v21; // ecx
  unsigned int v22; // eax
  size_t v23; // r14
  char *PoolWithTag; // rax
  char *v25; // rdi
  char v27; // [rsp+40h] [rbp-58h]
  PKSDEVICE Device; // [rsp+48h] [rbp-50h]
  GUID v29; // [rsp+50h] [rbp-48h]

  Descriptor = Pin->Descriptor;
  v2 = 0;
  v3 = 0;
  v27 = 0;
  v5 = 0LL;
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_q(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      5u,
      8u,
      0xEu,
      (__int64)&WPP_89771fce86223ed4814147843477e0f4_Traceguids,
      Pin);
  Device = KsGetDevice(Pin);
  if ( !Device )
    goto LABEL_4;
  if ( HIDWORD(Descriptor[1].Dispatch) >= LODWORD(Descriptor[1].Dispatch) )
  {
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      2u,
      9u,
      0xFu,
      (__int64)&WPP_89771fce86223ed4814147843477e0f4_Traceguids);
LABEL_7:
    v6 = -1073741670;
    goto LABEL_46;
  }
  ConnectionFormat = Pin->ConnectionFormat;
  if ( (ConnectionFormat->Flags & 2) != 0 )
  {
    v8 = 0;
    v9 = (ConnectionFormat->FormatSize + 7) & 0xFFFFFFF8;
    v29 = AUDIO_SIGNALPROCESSINGMODE_RAW;
    v10 = *(unsigned int *)((char *)&ConnectionFormat->FormatSize + v9);
    if ( v10 < 8 )
    {
LABEL_4:
      v6 = -1073741811;
LABEL_46:
      WPP_RECORDER_SF_qd(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        2u,
        8u,
        0x10u,
        (__int64)&WPP_89771fce86223ed4814147843477e0f4_Traceguids,
        Pin,
        v6);
      return (unsigned int)v6;
    }
    v11 = *(ULONG *)((char *)&ConnectionFormat->Flags + v9);
    v12 = (char *)&ConnectionFormat->Alignment + v9 + 8;
    v13 = v10 - 8;
    v14 = 0;
    if ( v11 )
    {
      while ( v13 >= 0x18 )
      {
        if ( *((_QWORD *)v12 + 1) == *(_QWORD *)&KSATTRIBUTEID_AUDIOSIGNALPROCESSING_MODE.Data1
          && *((_QWORD *)v12 + 2) == *(_QWORD *)KSATTRIBUTEID_AUDIOSIGNALPROCESSING_MODE.Data4 )
        {
          if ( v13 < 0x28 || *(_DWORD *)v12 != 40 )
            goto LABEL_4;
          v8 = 1;
          v29 = *(GUID *)(v12 + 24);
        }
        v15 = (*(_DWORD *)v12 + 7) & 0xFFFFFFF8;
        if ( v13 < v15 )
          goto LABEL_4;
        v12 += v15;
        v13 -= v15;
        if ( ++v14 >= v11 )
        {
          v2 = 0;
          goto LABEL_20;
        }
      }
      goto LABEL_4;
    }
LABEL_20:
    v16 = -v8;
    v6 = v16 == 0 ? 0xC0000225 : 0;
    if ( v16 )
    {
      Interfaces = (unsigned int)Descriptor[1].PinDescriptor.Interfaces;
      v6 = -1073741198;
      if ( !Interfaces )
        goto LABEL_46;
      v21 = 0;
      while ( *(_OWORD *)&v29 != *(_OWORD *)(*(_QWORD *)&Descriptor[1].PinDescriptor.MediumsCount + 16LL * v21) )
      {
        if ( ++v21 >= Interfaces )
          goto LABEL_46;
      }
    }
    else if ( v6 != -1073741275 )
    {
      goto LABEL_43;
    }
    v3 = 0;
  }
  DataRangesCount = Descriptor->PinDescriptor.DataRangesCount;
  if ( !DataRangesCount )
    goto LABEL_45;
  do
  {
    if ( v3 )
      break;
    v18 = (__int64)Descriptor->PinDescriptor.DataRanges[v2];
    v19 = PinValidateDataFormat((__int64)Descriptor, v18, (__int64)ConnectionFormat);
    v6 = v19;
    if ( v19 < 0 )
    {
      if ( v19 != -1073741198 )
        goto LABEL_43;
      v3 = v27;
    }
    else
    {
      v3 = 1;
      v5 = v18;
      v27 = 1;
    }
    v2 += ((*(_DWORD *)(v18 + 4) & 2) != 0) + 1;
  }
  while ( v2 < DataRangesCount );
  if ( !v5 )
  {
LABEL_45:
    v6 = -1073741198;
    goto LABEL_46;
  }
  v22 = *(_DWORD *)(v5 + 112) + 160;
  if ( v22 < 0xA0 )
  {
    v6 = -1073741811;
  }
  else
  {
    v23 = v22;
    PoolWithTag = (char *)ExAllocatePoolWithTag((POOL_TYPE)512, v22, 0x41627845u);
    Pin->Context = PoolWithTag;
    v25 = PoolWithTag;
    if ( !PoolWithTag )
      goto LABEL_7;
    v6 = KsAddItemToObjectBag(Pin->Bag, PoolWithTag, ExFreePool);
    if ( v6 >= 0 )
    {
      memset(v25, 0, v23);
      *((_QWORD *)v25 + 2) = Device;
      *((_QWORD *)v25 + 17) = v25 + 160;
      *((_QWORD *)v25 + 3) = Descriptor;
      *((_QWORD *)v25 + 16) = v5;
      *((_QWORD *)v25 + 7) = v25 + 48;
      *((_QWORD *)v25 + 6) = v25 + 48;
      KeInitializeSpinLock((PKSPIN_LOCK)v25 + 12);
      KeInitializeEvent((PRKEVENT)(v25 + 104), NotificationEvent, 0);
      v6 = (**(__int64 (__fastcall ***)(PKSPIN))(*((_QWORD *)v25 + 16) + 128LL))(Pin);
      if ( v6 < 0 )
        goto LABEL_46;
      ++HIDWORD(Descriptor[1].Dispatch);
      v25[152] = 1;
      KsPinRegisterPowerCallbacks(Pin, (PFNKSPINPOWER)PinGoToLowPowerState, (PFNKSPINPOWER)PinGoToFullPowerState);
      v6 = PinAddPinToList(Pin);
    }
    else
    {
      ExFreePool(v25);
    }
  }
LABEL_43:
  if ( v6 < 0 )
    goto LABEL_46;
  return (unsigned int)v6;
}
