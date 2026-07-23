/*
 * XREFs of IoWMICompleteRequest @ 0x1404AA288
 * Callers:
 *     IoWMISystemControl @ 0x1404A9E3C (IoWMISystemControl.c)
 *     WmipQueryWmiDataBlock @ 0x1404AA13C (WmipQueryWmiDataBlock.c)
 * Callees:
 *     IofCompleteRequest @ 0x1400530E0 (IofCompleteRequest.c)
 */

__int64 __fastcall IoWMICompleteRequest(__int64 a1, __int64 a2, IRP *a3, int a4, int a5)
{
  struct _IO_STACK_LOCATION *CurrentStackLocation; // r9
  PNAMED_PIPE_CREATE_PARAMETERS Parameters; // rdx
  unsigned int CompletionMode; // r10d
  unsigned int v10; // r8d
  __int64 MaximumInstances; // r11
  unsigned int *p_OutboundQuota; // r9
  int v13; // edx
  __int64 v14; // rcx
  int v15; // r10d

  CurrentStackLocation = a3->Tail.Overlay.CurrentStackLocation;
  Parameters = CurrentStackLocation->Parameters.CreatePipe.Parameters;
  if ( CurrentStackLocation->MinorFunction )
  {
    if ( CurrentStackLocation->MinorFunction == 1 )
    {
      v10 = Parameters[1].InboundQuota + a5;
      if ( a4 >= 0 )
      {
        Parameters->NamedPipeType = v10;
        *(_QWORD *)&Parameters->InboundQuota = MEMORY[0xFFFFF78000000014];
        goto LABEL_10;
      }
    }
    else
    {
      if ( CurrentStackLocation->MinorFunction != 9 )
        goto LABEL_13;
      v10 = a5 + Parameters[1].OutboundQuota;
      if ( a4 >= 0 )
      {
        Parameters->NamedPipeType = v10;
        *(_QWORD *)&Parameters->InboundQuota = MEMORY[0xFFFFF78000000014];
        Parameters[1].DefaultTimeout.LowPart = a5;
        goto LABEL_10;
      }
    }
LABEL_11:
    if ( a4 == -1073741789 )
    {
      Parameters[1].CompletionMode = v10;
      Parameters->NamedPipeType = 56;
      v10 = 56;
      Parameters[1].ReadMode = 32;
      a4 = 0;
      goto LABEL_10;
    }
LABEL_13:
    v10 = 0;
    goto LABEL_10;
  }
  CompletionMode = Parameters[1].CompletionMode;
  v10 = CompletionMode + a5;
  MaximumInstances = Parameters[1].MaximumInstances;
  if ( a4 < 0 )
    goto LABEL_11;
  if ( v10 > CurrentStackLocation->Parameters.Read.ByteOffset.LowPart )
    a4 = -1073741789;
  if ( a4 < 0 )
    goto LABEL_11;
  p_OutboundQuota = &Parameters[1].OutboundQuota;
  *(_QWORD *)&Parameters->InboundQuota = MEMORY[0xFFFFF78000000014];
  Parameters->NamedPipeType = v10;
  v13 = MaximumInstances;
  if ( (_DWORD)MaximumInstances )
  {
    do
    {
      --v13;
      p_OutboundQuota[2 * v13 + 1] = p_OutboundQuota[v13];
    }
    while ( v13 );
    v14 = MaximumInstances;
    do
    {
      *p_OutboundQuota = CompletionMode;
      v15 = p_OutboundQuota[1] + CompletionMode + 7;
      p_OutboundQuota += 2;
      CompletionMode = v15 & 0xFFFFFFF8;
      --v14;
    }
    while ( v14 );
  }
LABEL_10:
  a3->IoStatus.Information = v10;
  a3->IoStatus.Status = a4;
  IofCompleteRequest(a3, 0);
  return (unsigned int)a4;
}
