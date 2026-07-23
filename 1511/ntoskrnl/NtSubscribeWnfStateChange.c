/*
 * XREFs of NtSubscribeWnfStateChange @ 0x1403E493C
 * Callers:
 *     <none>
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140042660 (KeLeaveCriticalRegion.c)
 *     ExpWnfSubscribeWnfStateChange @ 0x1403E4A00 (ExpWnfSubscribeWnfStateChange.c)
 *     ProbeForWrite @ 0x14042F1F0 (ProbeForWrite.c)
 */

NTSTATUS __cdecl NtSubscribeWnfStateChange(
        PCWNF_STATE_NAME StateName,
        WNF_CHANGE_STAMP ChangeStamp,
        ULONG EventMask,
        PULONG64 SubscriptionId)
{
  int v7; // r14d
  struct _KTHREAD *CurrentThread; // rax
  NTSTATUS v9; // edi
  unsigned __int64 v11; // [rsp+88h] [rbp+20h] BYREF

  v7 = (int)StateName;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v11 = 0LL;
  if ( SubscriptionId )
  {
    ProbeForWrite(SubscriptionId, 8uLL, 1u);
    *SubscriptionId = 0LL;
  }
  v9 = ExpWnfSubscribeWnfStateChange(
         (unsigned __int64)&v11 & -(__int64)(SubscriptionId != 0LL),
         0,
         v7,
         ChangeStamp,
         0LL,
         0LL,
         EventMask,
         1);
  if ( v9 >= 0 && SubscriptionId )
    *SubscriptionId = v11;
  KeLeaveCriticalRegion();
  return v9;
}
