/*
 * XREFs of ndisPeriodicReceivesTimer @ 0x1C00013E0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00236D0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0023A40 (memset.c)
 */

void __fastcall ndisPeriodicReceivesTimer(
        PVOID SystemSpecific1,
        PVOID FunctionContext,
        PVOID SystemSpecific2,
        PVOID SystemSpecific3)
{
  _LIST_ENTRY **v4; // rdi
  char *v5; // rbx
  __int64 v6; // rax
  LARGE_INTEGER v7; // rdx
  _LIST_ENTRY **v8; // rax
  _QWORD v9[6]; // [rsp+28h] [rbp-19h] BYREF
  _QWORD WnodeEventItem[8]; // [rsp+58h] [rbp+17h] BYREF

  v4 = 0LL;
  v5 = (char *)qword_1C0084D80 + 64 * (unsigned __int64)KeGetPcr()->Prcb.Number;
  KeAcquireSpinLockAtDpcLevel((PKSPIN_LOCK)v5 + 2);
  if ( *(char **)v5 != v5 )
  {
    v4 = *(_LIST_ENTRY ***)v5;
    v6 = **(_QWORD **)v5;
    if ( *(char **)(*(_QWORD *)v5 + 8LL) != v5 || *(_LIST_ENTRY ***)(v6 + 8) != v4 )
      __fastfail(3u);
    *(_QWORD *)v5 = v6;
    *(_QWORD *)(v6 + 8) = v5;
    v4[1] = 0LL;
    *v4 = 0LL;
    --*((_DWORD *)v5 + 6);
  }
  if ( *(char **)v5 == v5 )
  {
    *((_DWORD *)qword_1C0084D78 + KeGetPcr()->Prcb.Number) = 0;
  }
  else
  {
    v7 = DueTime;
    if ( !DueTime.QuadPart )
      v7.QuadPart = -1LL;
    KeSetTimer(
      (PKTIMER)qword_1C0084D70 + 2 * (unsigned __int64)KeGetPcr()->Prcb.Number,
      v7,
      (PKDPC)qword_1C0084D70 + 2 * (unsigned __int64)KeGetPcr()->Prcb.Number + 1);
  }
  if ( v4 == &WPP_MAIN_CB.DeviceQueue.DeviceListHead.Flink[2 * KeGetPcr()->Prcb.Number].Flink )
  {
    v8 = *(_LIST_ENTRY ***)v5;
    *v4 = *(_LIST_ENTRY **)v5;
    v4[1] = (_LIST_ENTRY *)v5;
    if ( v8[1] != (_LIST_ENTRY *)v5 )
      __fastfail(3u);
    v8[1] = (_LIST_ENTRY *)v4;
    *(_QWORD *)v5 = v4;
    ++*((_DWORD *)v5 + 6);
    v4 = 0LL;
  }
  KeReleaseSpinLockFromDpcLevel((PKSPIN_LOCK)v5 + 2);
  if ( v4 )
  {
    if ( (_BYTE)word_1C00870DC )
    {
      memset((char *)WnodeEventItem + 2, 0, 0x36uLL);
      HIDWORD(WnodeEventItem[5]) = 0x20000;
      LOWORD(WnodeEventItem[0]) = 56;
      WnodeEventItem[1] = qword_1C00870D0;
      *(GUID *)&WnodeEventItem[3] = EtwGuidNdisReceive;
      BYTE4(WnodeEventItem[0]) = 22;
      LOBYTE(WnodeEventItem[6]) = 1;
      IoWMIWriteEvent(WnodeEventItem);
    }
    ((void (__fastcall *)(_LIST_ENTRY *))v4[2])(v4[3]);
    if ( (_BYTE)word_1C00870DC )
    {
      memset((char *)v9 + 2, 0, 0x2EuLL);
      HIDWORD(v9[5]) = 0x20000;
      LOWORD(v9[0]) = 48;
      v9[1] = qword_1C00870D0;
      *(GUID *)&v9[3] = EtwGuidNdisReceive;
      BYTE4(v9[0]) = 23;
      IoWMIWriteEvent(v9);
    }
  }
}
