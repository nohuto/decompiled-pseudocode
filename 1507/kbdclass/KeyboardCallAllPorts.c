/*
 * XREFs of KeyboardCallAllPorts @ 0x1C0004060
 * Callers:
 *     KeyboardClassDeviceControl @ 0x1C000C7F0 (KeyboardClassDeviceControl.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KeyboardCallAllPorts(__int64 a1, IRP *a2, unsigned int *a3)
{
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rcx
  bool v6; // bp
  unsigned int v7; // r8d
  __int64 v8; // rax
  unsigned int v9; // eax
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // rdi
  struct _IO_STACK_LOCATION *v13; // rax
  unsigned int v14; // ebx
  __int64 result; // rax

  CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
  v6 = a3[1] == 0;
  *(_OWORD *)&CurrentStackLocation[-1].MajorFunction = *(_OWORD *)&CurrentStackLocation->MajorFunction;
  *(_OWORD *)&CurrentStackLocation[-1].Parameters.NotifyDirectoryEx.CompletionFilter = *(_OWORD *)&CurrentStackLocation->Parameters.NotifyDirectoryEx.CompletionFilter;
  *(_OWORD *)(&CurrentStackLocation[-1].Parameters.SetQuota + 6) = *(_OWORD *)(&CurrentStackLocation->Parameters.SetQuota
                                                                             + 6);
  CurrentStackLocation[-1].FileObject = CurrentStackLocation->FileObject;
  CurrentStackLocation[-1].Control = 0;
  CurrentStackLocation[-1].MajorFunction = 15;
  v7 = *a3;
  if ( a3[1] < v7 )
  {
    do
    {
      v8 = a3[1];
      if ( LOBYTE(a3[6 * v8 + 6]) && !HIBYTE(a3[6 * v8 + 6]) )
        break;
      v9 = v8 + 1;
      a3[1] = v9;
    }
    while ( v9 < v7 );
  }
  v10 = a3[1];
  if ( (unsigned int)v10 >= v7 )
  {
    if ( a2->PendingReturned )
      a2->Tail.Overlay.CurrentStackLocation->Control |= 1u;
    IoReleaseRemoveLockEx((PIO_REMOVE_LOCK)(*(_QWORD *)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels + 32LL), a2, 0x20u);
    ExFreePoolWithTag(a3, 0);
    return 0LL;
  }
  else
  {
    v11 = 3 * v10;
    v12 = *(_QWORD *)&a3[2 * v11 + 4];
    CurrentStackLocation[-1].FileObject = *(PFILE_OBJECT *)&a3[2 * v11 + 2];
    ++a3[1];
    v13 = a2->Tail.Overlay.CurrentStackLocation;
    v13[-1].CompletionRoutine = (PIO_COMPLETION_ROUTINE)&KeyboardCallAllPorts;
    v13[-1].Context = a3;
    v13[-1].Control = -32;
    v14 = IofCallDriver(*(PDEVICE_OBJECT *)(v12 + 16), a2);
    IoReleaseRemoveLockEx((PIO_REMOVE_LOCK)(v12 + 32), a2, 0x20u);
    result = 3221225494LL;
    if ( v6 )
      return v14;
  }
  return result;
}
