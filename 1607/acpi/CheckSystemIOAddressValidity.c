/*
 * XREFs of CheckSystemIOAddressValidity @ 0x1C001E360
 * Callers:
 *     WriteSystemIO @ 0x1C001E318 (WriteSystemIO.c)
 *     ReadSystemIO @ 0x1C0020344 (ReadSystemIO.c)
 * Callees:
 *     ACPIGetRootDeviceObject @ 0x1C0008444 (ACPIGetRootDeviceObject.c)
 *     PrintDebugMessage @ 0x1C0025680 (PrintDebugMessage.c)
 *     _guard_dispatch_icall_nop @ 0x1C002BE40 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CheckSystemIOAddressValidity(unsigned __int8 a1, unsigned int a2, unsigned int a3, unsigned int *a4)
{
  unsigned __int8 v8; // r14
  __int64 v9; // rbx
  unsigned int *v10; // rax
  void (__fastcall *v12)(_QWORD, _QWORD, _QWORD, unsigned int *); // rax
  const char *v13; // r9
  const char *v14; // rdx
  struct _DEVICE_OBJECT *v15; // rax
  struct _IO_WORKITEM *WorkItem; // rsi
  _DWORD *PoolWithTag; // rax

  v8 = 1;
  if ( gpBadIOAddressList )
  {
    v9 = 0LL;
    if ( *((_DWORD *)gpBadIOAddressList + 1) )
    {
      v10 = (unsigned int *)gpBadIOAddressList;
      while ( a2 < *v10 || a2 >= *v10 + v10[1] )
      {
        v9 = (unsigned int)(v9 + 1);
        v10 = (unsigned int *)((char *)gpBadIOAddressList + 24 * v9);
        if ( !v10[1] )
          return v8;
      }
      if ( *((_DWORD *)gpBadIOAddressList + 6 * v9 + 2) > (unsigned int)gdwHighestOSVerQueried )
      {
        PrintDebugMessage(24, a2, 0, 0, 0LL);
        v12 = (void (__fastcall *)(_QWORD, _QWORD, _QWORD, unsigned int *))*((_QWORD *)gpBadIOAddressList + 3 * v9 + 2);
        if ( v12 )
        {
          v8 = 0;
          v12(a1, a2, a3, a4);
          if ( a1 )
          {
            v13 = "Read";
            v14 = "read";
          }
          else
          {
            v13 = "Wrote";
            v14 = "write";
          }
          PrintDebugMessage(23, (_DWORD)v14, a2, (_DWORD)v13, *a4);
        }
      }
      else
      {
        v8 = 0;
        PrintDebugMessage(25, a2, 0, 0, 0LL);
      }
      v15 = (struct _DEVICE_OBJECT *)ACPIGetRootDeviceObject();
      if ( v15 )
      {
        WorkItem = IoAllocateWorkItem(v15);
        if ( WorkItem )
        {
          PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x18uLL, 0x496C6D41u);
          if ( PoolWithTag )
          {
            *(_BYTE *)PoolWithTag = a1;
            PoolWithTag[1] = a2;
            PoolWithTag[2] = v9;
            *((_QWORD *)PoolWithTag + 2) = WorkItem;
            IoQueueWorkItem(WorkItem, DelayedLogInErrorLog, DelayedWorkQueue, PoolWithTag);
          }
          else
          {
            PrintDebugMessage(20, 0, 0, 0, 0LL);
            IoFreeWorkItem(WorkItem);
          }
        }
        else
        {
          PrintDebugMessage(21, 0, 0, 0, 0LL);
        }
      }
      else
      {
        PrintDebugMessage(22, 0, 0, 0, 0LL);
      }
    }
  }
  return v8;
}
