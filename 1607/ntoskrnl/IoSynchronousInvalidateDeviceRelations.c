/*
 * XREFs of IoSynchronousInvalidateDeviceRelations @ 0x14062A35C
 * Callers:
 *     <none>
 * Callees:
 *     KeInitializeEvent @ 0x14002DA20 (KeInitializeEvent.c)
 *     KeWaitForSingleObject @ 0x14005C400 (KeWaitForSingleObject.c)
 *     PnpRequestDeviceAction @ 0x1400861B8 (PnpRequestDeviceAction.c)
 *     IoAddTriageDumpDataBlock @ 0x14014B924 (IoAddTriageDumpDataBlock.c)
 *     KeBugCheckEx @ 0x14015DA70 (KeBugCheckEx.c)
 */

__int64 __fastcall IoSynchronousInvalidateDeviceRelations(_QWORD *Object, int a2)
{
  int v3; // r8d
  __int64 v4; // rcx
  __int64 v6; // rcx
  _WORD *v7; // rcx
  __int64 v8; // rcx
  unsigned __int16 *v9; // rdi
  _WORD *v10; // rcx
  __int64 v11; // rax
  __int64 v12; // rcx
  struct _KEVENT Event; // [rsp+30h] [rbp-28h] BYREF

  v3 = 0;
  if ( !Object )
    goto LABEL_24;
  v4 = *(_QWORD *)(Object[39] + 40LL);
  if ( !v4 || (*(_DWORD *)(v4 + 396) & 0x20000) != 0 )
  {
    IoAddTriageDumpDataBlock((int)Object, *((unsigned __int16 *)Object + 1));
    v6 = Object[1];
    if ( v6 )
    {
      IoAddTriageDumpDataBlock(v6, *(__int16 *)(v6 + 2));
      v7 = (_WORD *)(Object[1] + 56LL);
      if ( *v7 )
      {
        IoAddTriageDumpDataBlock((int)v7, 2);
        IoAddTriageDumpDataBlock(*(_QWORD *)(Object[1] + 64LL), *(unsigned __int16 *)(Object[1] + 56LL));
      }
    }
    v8 = *(_QWORD *)(Object[39] + 40LL);
    if ( v8 )
    {
      v9 = (unsigned __int16 *)(v8 + 40);
      IoAddTriageDumpDataBlock(v8, 720);
      if ( *v9 )
      {
        IoAddTriageDumpDataBlock((int)v9, 2);
        IoAddTriageDumpDataBlock(*((_QWORD *)v9 + 1), *v9);
      }
      v10 = (_WORD *)(*(_QWORD *)(Object[39] + 40LL) + 56LL);
      if ( *v10 )
      {
        IoAddTriageDumpDataBlock((int)v10, 2);
        IoAddTriageDumpDataBlock(
          *(_QWORD *)(*(_QWORD *)(Object[39] + 40LL) + 64LL),
          *(unsigned __int16 *)(*(_QWORD *)(Object[39] + 40LL) + 56LL));
      }
      v11 = *(_QWORD *)(*(_QWORD *)(Object[39] + 40LL) + 16LL);
      if ( v11 && *(_WORD *)(v11 + 56) )
      {
        IoAddTriageDumpDataBlock(v11 + 56, 2);
        v12 = *(_QWORD *)(*(_QWORD *)(Object[39] + 40LL) + 16LL);
        IoAddTriageDumpDataBlock(*(_QWORD *)(v12 + 64), *(unsigned __int16 *)(v12 + 56));
      }
    }
LABEL_24:
    KeBugCheckEx(0xCAu, 2uLL, (ULONG_PTR)Object, 0LL, 0LL);
  }
  if ( a2 )
  {
    if ( (unsigned int)(a2 - 1) <= 1 )
      return (unsigned int)-1073741637;
  }
  else if ( PnPInitialized && *(_DWORD *)(v4 + 300) == 776 )
  {
    KeInitializeEvent(&Event, NotificationEvent, 0);
    v3 = PnpRequestDeviceAction(Object, 9, 0, 0LL, (__int64)&Event, 0LL);
    if ( v3 >= 0 )
      return (unsigned int)KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
  }
  else
  {
    return (unsigned int)-1073741823;
  }
  return (unsigned int)v3;
}
