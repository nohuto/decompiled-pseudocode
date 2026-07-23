/*
 * XREFs of PnpQueueQueryAndRemoveEvent @ 0x14064B4B0
 * Callers:
 *     PnpRequestDeviceEjectExWorker @ 0x14062A8E0 (PnpRequestDeviceEjectExWorker.c)
 *     PiCMQueryRemove @ 0x14064810C (PiCMQueryRemove.c)
 *     PiControlQueryAndRemoveDevice @ 0x14064A850 (PiControlQueryAndRemoveDevice.c)
 * Callees:
 *     PnpDiagnosticTraceObject @ 0x14000805C (PnpDiagnosticTraceObject.c)
 *     KeInitializeEvent @ 0x14002DA20 (KeInitializeEvent.c)
 *     KeWaitForSingleObject @ 0x14005C400 (KeWaitForSingleObject.c)
 *     ObfDereferenceObject @ 0x14006A780 (ObfDereferenceObject.c)
 *     PnpDiagnosticTraceDeviceOperation @ 0x1400AED24 (PnpDiagnosticTraceDeviceOperation.c)
 *     memmove @ 0x140171780 (memmove.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 *     PnpDeviceObjectFromDeviceInstance @ 0x1403F38F8 (PnpDeviceObjectFromDeviceInstance.c)
 *     PnpSetTargetDeviceRemove @ 0x140484C7C (PnpSetTargetDeviceRemove.c)
 *     PnpRemoveEventFromQueue @ 0x140642D34 (PnpRemoveEventFromQueue.c)
 */

__int64 __fastcall PnpQueueQueryAndRemoveEvent(unsigned __int16 *a1, char *a2, _WORD *a3, _WORD *a4, char a5, int a6)
{
  int v7; // r14d
  volatile __int32 *v9; // rdi
  int *v10; // r13
  unsigned __int16 *v11; // rsi
  _QWORD *v12; // rax
  int v13; // ebx
  __int64 v14; // rcx
  PVOID v15; // r12
  __int64 v16; // rax
  char *PoolWithTag; // rax
  int v18; // ebx
  int v19; // edi
  int v20; // r12d
  int v21; // r9d
  int v22; // eax
  char *v23; // r13
  int v24; // ecx
  _WORD *v25; // rax
  char v27; // [rsp+78h] [rbp-29h]
  __int64 v28; // [rsp+80h] [rbp-21h] BYREF
  PVOID P; // [rsp+88h] [rbp-19h] BYREF
  int *v30; // [rsp+90h] [rbp-11h]
  PVOID Object; // [rsp+98h] [rbp-9h]
  struct _KEVENT Event; // [rsp+A0h] [rbp-1h] BYREF

  v7 = a5 & 8;
  P = 0LL;
  v9 = 0LL;
  v27 = 0;
  v10 = 0LL;
  *(_DWORD *)a2 = 0;
  v11 = 0LL;
  if ( (a5 & 8) != 0 )
    PnpDiagnosticTraceObject(&KMPnPEvt_DeviceEject_Start, a1);
  v12 = PnpDeviceObjectFromDeviceInstance((__int64)a1);
  Object = v12;
  if ( !v12 )
  {
    v13 = -1073741810;
    goto LABEL_57;
  }
  v14 = *(_QWORD *)(v12[39] + 40LL);
  if ( v14 )
  {
    if ( v14 == IopRootDeviceNode )
    {
      v13 = -1073741790;
      goto LABEL_7;
    }
    v16 = *(unsigned int *)a4;
    if ( (_DWORD)v16 )
    {
      PoolWithTag = (char *)ExAllocatePoolWithTag(PagedPool, v16 + 20, 0x20207050u);
      v30 = (int *)PoolWithTag;
      v10 = (int *)PoolWithTag;
      if ( !PoolWithTag )
      {
        v15 = Object;
        v13 = -1073741670;
        goto LABEL_54;
      }
      v11 = (unsigned __int16 *)(PoolWithTag + 4);
      v27 = 1;
      *((_WORD *)PoolWithTag + 2) = 0;
      *(_QWORD *)(PoolWithTag + 12) = PoolWithTag + 20;
      v18 = 0;
      *((_WORD *)PoolWithTag + 3) = *a4;
    }
    else
    {
      v30 = 0LL;
      v18 = 1;
    }
    if ( v7 && a6 )
      v18 = 1;
    if ( (a5 & 2) != 0 )
    {
      v19 = 22;
    }
    else
    {
      if ( v7 )
      {
        v19 = 47;
        v20 = 1;
        goto LABEL_24;
      }
      v19 = 21;
    }
    v20 = 0;
LABEL_24:
    KeInitializeEvent(&Event, NotificationEvent, 0);
    v21 = v20;
    v15 = Object;
    v13 = PnpSetTargetDeviceRemove(
            Object,
            0,
            (a5 & 0xB) != 0,
            v21,
            v18,
            v19,
            0,
            (__int64)&Event,
            0LL,
            0LL,
            &v28,
            (__int64)v10,
            (__int64)v11,
            &P);
    if ( v13 >= 0 )
    {
      v13 = KeWaitForSingleObject(&Event, Executive, 0, 1u, 0LL);
      if ( v13 == 257 )
      {
        v9 = (volatile __int32 *)P;
        if ( (unsigned int)PnpRemoveEventFromQueue(P) )
        {
          v13 = -1073741536;
LABEL_53:
          v10 = v30;
          goto LABEL_54;
        }
        if ( !_InterlockedExchange(v9 + 17, 1) )
        {
          v13 = -1073741536;
          v27 = 0;
          *((_BYTE *)P + 72) = 1;
          _InterlockedExchange(v9 + 17, 0);
          goto LABEL_52;
        }
        v13 = KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
      }
      if ( v13 >= 0 )
        v13 = v28;
      if ( v10 )
      {
        v22 = *v10;
        v23 = a2;
        *(_DWORD *)a2 = v22;
      }
      else
      {
        v23 = a2;
      }
      if ( v11 )
      {
        if ( *v11 )
        {
          if ( (unsigned int)*v11 >= *(_DWORD *)a4 )
            *v11 = *a4 - 2;
          memmove(a3, *((const void **)v11 + 1), *v11);
          a3[(unsigned __int64)*v11 >> 1] = 0;
        }
        *(_DWORD *)a4 = *v11;
      }
      if ( *(_DWORD *)v23 == 6 )
      {
        if ( a3 )
        {
          v24 = 0;
          v25 = a3;
          if ( *a3 )
          {
            while ( *v25 != 92 || ++v24 != 3 )
            {
              if ( !*++v25 )
                goto LABEL_50;
            }
            *v25 = 0;
LABEL_50:
            if ( v24 == 3 )
              *(_DWORD *)a4 = (unsigned __int16)((_WORD)v25 - (_WORD)a3);
          }
        }
      }
    }
LABEL_52:
    v9 = (volatile __int32 *)P;
    goto LABEL_53;
  }
  v13 = -1073741810;
LABEL_7:
  v15 = Object;
LABEL_54:
  ObfDereferenceObject(v15);
  if ( v9 && _InterlockedExchangeAdd(v9 + 16, 0xFFFFFFFF) == 1 )
    ExFreePoolWithTag(P, 0x4B706E50u);
LABEL_57:
  if ( v7 )
    PnpDiagnosticTraceDeviceOperation(&KMPnPEvt_DeviceEject_Stop, a1, v13, (__int64)v11, *a2);
  if ( v27 )
    ExFreePoolWithTag(v10, 0);
  return (unsigned int)v13;
}
