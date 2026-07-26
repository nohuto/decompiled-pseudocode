/*
 * XREFs of ndisQueryPowerCapabilities @ 0x1C00ABFD8
 * Callers:
 *     ndisMInitializeAdapter @ 0x1C00E9E1C (ndisMInitializeAdapter.c)
 * Callees:
 *     NdisWriteErrorLogEntry @ 0x1C0022190 (NdisWriteErrorLogEntry.c)
 *     __security_check_cookie @ 0x1C0022840 (__security_check_cookie.c)
 *     memset @ 0x1C0023A40 (memset.c)
 *     WPP_SF_q @ 0x1C0037744 (WPP_SF_q.c)
 *     WPP_SF_qD @ 0x1C003F388 (WPP_SF_qD.c)
 */

__int64 __fastcall ndisQueryPowerCapabilities(char *NdisAdapterHandle)
{
  unsigned int v2; // ebx
  PIRP Irp; // rsi
  _IO_STACK_LOCATION *CurrentStackLocation; // rbx
  _IO_STACK_LOCATION *v5; // rax
  int v6; // eax
  int v7; // ecx
  __int128 v8; // xmm3
  __int128 v9; // xmm2
  __int128 v10; // xmm1
  __int128 v11; // xmm0
  __int64 v12; // rax
  _BYTE Data[4]; // [rsp+40h] [rbp-39h] BYREF
  ULONG Type; // [rsp+44h] [rbp-35h] BYREF
  ULONG RequiredSize; // [rsp+48h] [rbp-31h] BYREF
  struct _KEVENT Event; // [rsp+50h] [rbp-29h] BYREF
  int v18; // [rsp+68h] [rbp-11h]
  _OWORD v19[4]; // [rsp+70h] [rbp-9h] BYREF

  v2 = 0;
  if ( (unsigned __int8)byte_1C0085315 >= 4u )
    WPP_SF_q(0xDu, &WPP_c4e795ca9bdbbe3c2f2c5e0647b399a0_Traceguids, (__int64)NdisAdapterHandle);
  *((_DWORD *)NdisAdapterHandle + 31) &= ~1u;
  if ( *((_QWORD *)NdisAdapterHandle + 487) )
  {
    if ( IoGetDevicePropertyData(
           *((PDEVICE_OBJECT *)NdisAdapterHandle + 486),
           &DEVPKEY_PciDevice_S0WakeupSupported,
           0,
           0,
           1u,
           Data,
           &RequiredSize,
           &Type) >= 0
      && Type == 17 )
    {
      NdisAdapterHandle[1288] = Data[0] != 0;
    }
    Irp = IoAllocateIrp(*(_BYTE *)(*((_QWORD *)NdisAdapterHandle + 487) + 76LL) + 1, 0);
    if ( Irp )
    {
      memset(v19, 0, sizeof(v19));
      LODWORD(v19[0]) = 65600;
      *((_QWORD *)&v19[0] + 1) = -1LL;
      CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
      memset(&CurrentStackLocation[-1], 0, sizeof(_IO_STACK_LOCATION));
      *(_WORD *)&CurrentStackLocation[-1].MajorFunction = 2331;
      CurrentStackLocation[-1].Parameters.WMI.ProviderId = (unsigned __int64)v19;
      Irp->IoStatus.Status = -1073741637;
      KeInitializeEvent(&Event, NotificationEvent, 0);
      v5 = Irp->Tail.Overlay.CurrentStackLocation;
      v5[-1].CompletionRoutine = (int (__fastcall *)(_DEVICE_OBJECT *, _IRP *, void *))ndisCompletionRoutine;
      v5[-1].Context = &Event;
      v5[-1].Control = -32;
      v2 = IofCallDriver(*((PDEVICE_OBJECT *)NdisAdapterHandle + 487), Irp);
      if ( v2 == 259 )
        KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
      if ( v18 < 0 )
      {
        if ( (unsigned __int8)byte_1C0085315 >= 4u )
          WPP_SF_qD(0xFu, &WPP_c4e795ca9bdbbe3c2f2c5e0647b399a0_Traceguids, (__int64)NdisAdapterHandle, v18);
        goto LABEL_17;
      }
      if ( (*(_DWORD *)(*((_QWORD *)NdisAdapterHandle + 477) + 120LL) & 8) != 0 )
      {
        DWORD1(v19[0]) |= 0x3C00u;
        v6 = 4;
        *((_QWORD *)&v19[1] + 1) = 0x400000004LL;
        LODWORD(v19[3]) = 4;
        *(_QWORD *)&v19[2] = 0x400000004LL;
        *((_QWORD *)&v19[2] + 1) = 0x600000004LL;
        v7 = 6;
      }
      else
      {
        v6 = v19[3];
        v7 = HIDWORD(v19[2]);
      }
      v8 = v19[0];
      v9 = v19[1];
      v10 = v19[2];
      v11 = v19[3];
      *(_OWORD *)(NdisAdapterHandle + 1224) = v19[0];
      *(_OWORD *)(NdisAdapterHandle + 1160) = v8;
      *(_OWORD *)(NdisAdapterHandle + 1240) = v9;
      *(_OWORD *)(NdisAdapterHandle + 1176) = v9;
      *(_OWORD *)(NdisAdapterHandle + 1256) = v10;
      *(_OWORD *)(NdisAdapterHandle + 1192) = v10;
      *(_OWORD *)(NdisAdapterHandle + 1272) = v11;
      *(_OWORD *)(NdisAdapterHandle + 1208) = v11;
      if ( *((_DWORD *)NdisAdapterHandle + 942) == 1 )
      {
        if ( !v6 || !v7 )
          goto LABEL_17;
      }
      else
      {
        v12 = 2LL;
        while ( !*((_DWORD *)&v19[1] + v12) )
        {
          if ( ++v12 >= 7 )
            goto LABEL_17;
        }
      }
      *((_DWORD *)NdisAdapterHandle + 31) |= 1u;
LABEL_17:
      IoFreeIrp(Irp);
      goto LABEL_18;
    }
    if ( (unsigned __int8)byte_1C0085315 >= 2u )
      WPP_SF_q(0xEu, &WPP_c4e795ca9bdbbe3c2f2c5e0647b399a0_Traceguids, (__int64)NdisAdapterHandle);
    NdisWriteErrorLogEntry(NdisAdapterHandle, 0xC0001389, 0);
    v2 = -1073741670;
  }
LABEL_18:
  if ( (unsigned __int8)byte_1C0085315 >= 4u )
    WPP_SF_qD(0x10u, &WPP_c4e795ca9bdbbe3c2f2c5e0647b399a0_Traceguids, (__int64)NdisAdapterHandle, v2);
  return v2;
}
