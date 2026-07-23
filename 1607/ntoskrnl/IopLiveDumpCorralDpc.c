/*
 * XREFs of IopLiveDumpCorralDpc @ 0x1403DAA24
 * Callers:
 *     <none>
 * Callees:
 *     KiSaveProcessorControlState @ 0x14015DDB0 (KiSaveProcessorControlState.c)
 *     RtlCaptureContext @ 0x140167490 (RtlCaptureContext.c)
 *     IopLiveDumpProcessCorralStateChange @ 0x1403DB824 (IopLiveDumpProcessCorralStateChange.c)
 */

void __fastcall IopLiveDumpCorralDpc(
        struct _KDPC *Dpc,
        PVOID DeferredContext,
        PVOID SystemArgument1,
        PVOID SystemArgument2)
{
  struct _KPRCB *CurrentPrcb; // rbx
  int v6; // edx
  unsigned int Number; // [rsp+20h] [rbp-18h] BYREF
  __int64 v8; // [rsp+24h] [rbp-14h]

  CurrentPrcb = KeGetCurrentPrcb();
  v8 = 0LL;
  Number = CurrentPrcb->Number;
  RtlCaptureContext(CurrentPrcb->Context);
  KiSaveProcessorControlState((__int64)&CurrentPrcb->ProcessorState, v6);
  do
    IopLiveDumpProcessCorralStateChange(DeferredContext, &Number);
  while ( (_DWORD)v8 != -1 );
}
