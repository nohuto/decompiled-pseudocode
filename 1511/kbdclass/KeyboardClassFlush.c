/*
 * XREFs of KeyboardClassFlush @ 0x1C0004890
 * Callers:
 *     <none>
 * Callees:
 *     KbdInitializeDataQueue @ 0x1C0001FD0 (KbdInitializeDataQueue.c)
 *     WPP_RECORDER_SF_ @ 0x1C0005388 (WPP_RECORDER_SF_.c)
 */

__int64 __fastcall KeyboardClassFlush(__int64 a1, IRP *a2)
{
  IRP *v2; // rdi
  unsigned int v3; // ebx
  _QWORD *v5; // rdx
  __int64 v6; // rdx

  v2 = a2;
  v3 = 0;
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(a2) = 5;
    WPP_RECORDER_SF_(WPP_GLOBAL_Control->DeviceExtension, a2, 3LL);
  }
  v5 = *(_QWORD **)(a1 + 64);
  if ( *v5 == v5[1] )
  {
    if ( DriverEntry == v2->Tail.Overlay.CurrentStackLocation->FileObject->FsContext2 )
      KbdInitializeDataQueue(*(_QWORD *)(a1 + 64), (__int64)v5);
    else
      v3 = -1073741727;
  }
  else
  {
    v3 = -1073741637;
  }
  v2->IoStatus.Status = v3;
  v2->IoStatus.Information = 0LL;
  IofCompleteRequest(v2, 0);
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(v6) = 5;
    WPP_RECORDER_SF_(WPP_GLOBAL_Control->DeviceExtension, v6, 3LL);
  }
  return v3;
}
