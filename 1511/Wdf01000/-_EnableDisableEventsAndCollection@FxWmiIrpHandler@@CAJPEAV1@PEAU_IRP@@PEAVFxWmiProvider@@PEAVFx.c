/*
 * XREFs of ?_EnableDisableEventsAndCollection@FxWmiIrpHandler@@CAJPEAV1@PEAU_IRP@@PEAVFxWmiProvider@@PEAVFxWmiInstance@@@Z @ 0x1C002AF40
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall FxWmiIrpHandler::_EnableDisableEventsAndCollection(
        FxWmiIrpHandler *This,
        _IRP *Irp,
        FxWmiProvider *Provider,
        FxWmiInstance *Instance)
{
  unsigned __int64 v5; // rbx
  _IO_STACK_LOCATION *CurrentStackLocation; // rdx
  unsigned int v7; // eax
  unsigned int v8; // esi
  int Status; // edi
  unsigned __int64 v11; // rcx
  int (__fastcall *v12)(WDFWMIPROVIDER__ *, _WDF_WMI_PROVIDER_CONTROL, unsigned __int8); // rax
  unsigned int v13; // eax

  Irp->IoStatus.Information = 0LL;
  v5 = (unsigned __int64)Provider;
  CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
  if ( CurrentStackLocation->Parameters.Read.ByteOffset.LowPart < 0x30 )
  {
    Status = -1073741811;
    goto $Done_22;
  }
  if ( CurrentStackLocation->MinorFunction == 4 )
  {
    LOBYTE(Provider) = 1;
  }
  else
  {
    if ( CurrentStackLocation->MinorFunction != 5 )
    {
      if ( CurrentStackLocation->MinorFunction == 6 )
      {
        LOBYTE(Provider) = 1;
      }
      else
      {
        if ( CurrentStackLocation->MinorFunction != 7 )
        {
          Status = Irp->IoStatus.Status;
          goto $Done_22;
        }
        LOBYTE(Provider) = 0;
      }
      v8 = 2;
      *(_BYTE *)(v5 + 209) = (_BYTE)Provider;
      goto LABEL_6;
    }
    LOBYTE(Provider) = 0;
  }
  v7 = *(_DWORD *)(v5 + 196);
  v8 = 1;
  *(_BYTE *)(v5 + 208) = (_BYTE)Provider;
  if ( (v7 & 4) != 0 )
    *(_QWORD *)(v5 + 184) = *(_QWORD *)&CurrentStackLocation->Parameters.CreatePipe.Parameters->CompletionMode;
LABEL_6:
  if ( *(_QWORD *)(v5 + 200)
    && (!*(_WORD *)(v5 + 10) ? (v11 = 0LL) : (v11 = v5 ^ 0xFFFFFFFFFFFFFFF8uLL),
        (v12 = *(int (__fastcall **)(WDFWMIPROVIDER__ *, _WDF_WMI_PROVIDER_CONTROL, unsigned __int8))(v5 + 200)) != 0LL) )
  {
    Status = ((__int64 (__fastcall *)(unsigned __int64, _QWORD, FxWmiProvider *, FxWmiInstance *))v12)(
               v11,
               v8,
               Provider,
               Instance);
  }
  else
  {
    Status = 0;
  }
  if ( Status == 259 )
    Status = -1073741823;
  if ( Status < 0 )
  {
    if ( v8 == 1 )
    {
      v13 = *(_DWORD *)(v5 + 196);
      *(_BYTE *)(v5 + 208) = 0;
      if ( (v13 & 4) != 0 )
        *(_QWORD *)(v5 + 184) = 0LL;
    }
    else
    {
      *(_BYTE *)(v5 + 209) = 0;
    }
  }
$Done_22:
  Irp->IoStatus.Status = Status;
  IofCompleteRequest(Irp, 0);
  return (unsigned int)Status;
}
