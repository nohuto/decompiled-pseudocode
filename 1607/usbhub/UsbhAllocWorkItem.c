/*
 * XREFs of UsbhAllocWorkItem @ 0x1C00251C0
 * Callers:
 *     UsbhFdoScheduleDeferredPowerRequest @ 0x1C0024F9C (UsbhFdoScheduleDeferredPowerRequest.c)
 *     UsbhQueueWorkItemEx @ 0x1C0025074 (UsbhQueueWorkItemEx.c)
 * Callees:
 *     Log @ 0x1C00159D0 (Log.c)
 *     FdoExt @ 0x1C0015EE0 (FdoExt.c)
 *     _guard_dispatch_icall_nop @ 0x1C00295A0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0029900 (memset.c)
 *     WPP_RECORDER_SF_d @ 0x1C0040A3C (WPP_RECORDER_SF_d.c)
 */

struct _LIST_ENTRY *__fastcall UsbhAllocWorkItem(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5, char a6)
{
  unsigned int v6; // esi
  _DWORD *v10; // r14
  struct _LIST_ENTRY *PoolWithTag; // rax
  struct _LIST_ENTRY *v12; // rbx
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 (__fastcall *v16)(__int64, __int64); // rax
  __int64 v17; // rdx
  __int64 v18; // rax

  v6 = a4;
  v10 = FdoExt(a1, a2, a3, a4);
  if ( a5 != 2001228627 )
    Log(a1, 8, 1633110861, v6, a3);
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_d(
      WPP_GLOBAL_Control->DeviceExtension,
      0,
      1,
      45,
      (__int64)&WPP_769f670b4daf3a39507e1b81909708b8_Traceguids,
      v6);
  PoolWithTag = (struct _LIST_ENTRY *)ExAllocatePoolWithTag(ExDefaultNonPagedPoolType, 0x48uLL, 0x42554855u);
  v12 = PoolWithTag;
  if ( !PoolWithTag )
    return 0LL;
  memset(PoolWithTag, 0, 0x48uLL);
  v16 = (__int64 (__fastcall *)(__int64, __int64))*((_QWORD *)FdoExt(a1, v13, v14, v15) + 596);
  if ( !v16 || (LOBYTE(v17) = a6, (v18 = v16(a1, v17)) == 0) )
  {
    ExFreePoolWithTag(v12, 0);
    return 0LL;
  }
  v12[2].Blink = (_LIST_ENTRY *)v18;
  LODWORD(v12->Flink) = 1230463592;
  HIDWORD(v12->Flink) = a5;
  HIDWORD(v12->Blink) = v6;
  v12[2].Flink = (_LIST_ENTRY *)a3;
  v12[1].Flink = (_LIST_ENTRY *)a1;
  v12[1].Blink = (_LIST_ENTRY *)a2;
  ExInterlockedInsertTailList((PLIST_ENTRY)v10 + 174, v12 + 3, (PKSPIN_LOCK)v10 + 350);
  if ( HIDWORD(v12->Flink) != 2001228627 )
    Log(a1, 8, 1464552747, 0LL, (__int64)v12);
  return v12;
}
