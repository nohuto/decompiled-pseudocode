/*
 * XREFs of UsbhFreeBusyList @ 0x1C0056784
 * Callers:
 *     UsbhHubSSH_PnpStop @ 0x1C00568C0 (UsbhHubSSH_PnpStop.c)
 * Callees:
 *     Log @ 0x1C00159D0 (Log.c)
 *     FdoExt @ 0x1C0015EE0 (FdoExt.c)
 */

LONG __fastcall UsbhFreeBusyList(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  struct _KEVENT *v5; // rbx
  unsigned __int8 v6; // r9
  _LIST_ENTRY *p_WaitListHead; // rdi
  _LIST_ENTRY *Flink; // rax
  _LIST_ENTRY *v9; // rcx
  void *v10; // r10

  v5 = (struct _KEVENT *)FdoExt(a1, a2, a3, a4);
  v5[142].Header.Type = 1;
  KeWaitForSingleObject(&v5[139], Executive, 0, 0, 0LL);
  Log(a1, 0x10000, 1397113420, 0LL, v5[142].Header.Signalling);
  v5[142].Header.Signalling = v6;
  p_WaitListHead = &v5[129].Header.WaitListHead;
  while ( p_WaitListHead->Flink != p_WaitListHead )
  {
    Flink = p_WaitListHead->Flink;
    v9 = p_WaitListHead->Flink->Flink;
    if ( p_WaitListHead->Flink->Blink != p_WaitListHead || v9->Blink != Flink )
      __fastfail(3u);
    p_WaitListHead->Flink = v9;
    v9->Blink = p_WaitListHead;
    Log(a1, 0x10000, 1178749997, 0LL, (__int64)&Flink[-1].Blink);
    if ( v10 )
      ExFreePoolWithTag(v10, 0);
  }
  *(_QWORD *)&v5[137].Header.Lock = 0LL;
  v5[137].Header.WaitListHead.Blink = 0LL;
  v5[137].Header.WaitListHead.Flink = 0LL;
  *(_QWORD *)&v5[138].Header.Lock = 0LL;
  v5[130].Header.LockNV = 0;
  HIDWORD(v5[138].Header.WaitListHead.Blink) = 0;
  LODWORD(v5[138].Header.WaitListHead.Blink) = 0;
  HIDWORD(v5[138].Header.WaitListHead.Flink) = 0;
  LODWORD(v5[138].Header.WaitListHead.Flink) = 0;
  return KeSetEvent(v5 + 139, 0, 0);
}
