/*
 * XREFs of ?_EnableDisableEventsAndCollection@FxWmiIrpHandler@@CAJPEAV1@PEAU_IRP@@PEAVFxWmiProvider@@PEAVFxWmiInstance@@@Z @ 0x1C00338C0
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
  int (__fastcall *v11)(WDFWMIPROVIDER__ *, _WDF_WMI_PROVIDER_CONTROL, unsigned __int8); // rax
  unsigned __int64 v12; // rcx
  unsigned int v13; // eax

  Irp->IoStatus.Information = 0LL;
  v5 = (unsigned __int64)Provider;
  CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
  if ( CurrentStackLocation->Parameters.Read.ByteOffset.LowPart < 0x30 )
  {
    Status = -1073741811;
    goto $Done_27;
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
          goto $Done_27;
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
    && (v11 = *(int (__fastcall **)(WDFWMIPROVIDER__ *, _WDF_WMI_PROVIDER_CONTROL, unsigned __int8))(v5 + 200)) != 0LL )
  {
    v12 = v5 ^ 0xFFFFFFFFFFFFFFF8uLL;
    if ( !*(_WORD *)(v5 + 10) )
      v12 = 0LL;
    Status = ((__int64 (__fastcall *)(unsigned __int64, _QWORD, FxWmiProvider *, FxWmiInstance *))v11)(
               v12,
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
$Done_27:
  Irp->IoStatus.Status = Status;
  IofCompleteRequest(Irp, 0);
  return (unsigned int)Status;
}
