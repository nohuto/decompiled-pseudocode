/*
 * XREFs of ACPIDispatchWmiLog @ 0x1C00233A0
 * Callers:
 *     <none>
 * Callees:
 *     ACPIDispatchForwardIrp @ 0x1C0003820 (ACPIDispatchForwardIrp.c)
 *     ACPIWmiRegisterGuids @ 0x1C002342C (ACPIWmiRegisterGuids.c)
 */

__int64 __fastcall ACPIDispatchWmiLog(ULONG_PTR BugCheckParameter3, PIRP Irp)
{
  _IO_STACK_LOCATION *CurrentStackLocation; // r8
  int v5; // edi
  __int64 v7; // rdx
  _NAMED_PIPE_CREATE_PARAMETERS *v8; // rcx
  unsigned int LowPart; // ecx
  _NAMED_PIPE_CREATE_PARAMETERS *Parameters; // rdx
  unsigned int v11; // [rsp+30h] [rbp+8h] BYREF

  CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
  if ( BugCheckParameter3 == CurrentStackLocation->Parameters.WMI.ProviderId )
  {
    switch ( CurrentStackLocation->MinorFunction )
    {
      case 4u:
        LowPart = CurrentStackLocation->Parameters.Read.ByteOffset.LowPart;
        Parameters = CurrentStackLocation->Parameters.CreatePipe.Parameters;
        _InterlockedExchange(&ACPIWmiTraceEnable, 1);
        if ( LowPart >= 0x30 )
        {
          ACPIWmiLoggerHandle = *(_QWORD *)&Parameters->CompletionMode;
          if ( ACPIWmiTraceGlobalEnable )
            ACPIWmiTraceGlobalEnable = 0;
        }
        v5 = 0;
        Irp->IoStatus.Status = 0;
        break;
      case 5u:
        v5 = 0;
        _InterlockedExchange(&ACPIWmiTraceEnable, 0);
        ACPIWmiLoggerHandle = 0LL;
        Irp->IoStatus.Status = 0;
        break;
      case 8u:
        v7 = CurrentStackLocation->Parameters.Read.ByteOffset.LowPart;
        v8 = CurrentStackLocation->Parameters.CreatePipe.Parameters;
        v11 = 0;
        v5 = ACPIWmiRegisterGuids(v8, v7, &v11, BugCheckParameter3);
        if ( v5 >= 0 )
          Irp->IoStatus.Information = v11;
        Irp->IoStatus.Status = v5;
        break;
      default:
        return (unsigned int)ACPIDispatchForwardIrp(BugCheckParameter3, Irp);
    }
    IofCompleteRequest(Irp, 0);
    return (unsigned int)v5;
  }
  return ACPIDispatchForwardIrp(BugCheckParameter3, Irp);
}
