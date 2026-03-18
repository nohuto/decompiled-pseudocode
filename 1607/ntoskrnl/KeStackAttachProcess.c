/*
 * XREFs of KeStackAttachProcess @ 0x1400CD110
 * Callers:
 *     ObpCreateHandle @ 0x140419C20 (ObpCreateHandle.c)
 *     PsCreateMinimalProcess @ 0x14057E30C (PsCreateMinimalProcess.c)
 *     MmCreateShadowMapping @ 0x14065BC98 (MmCreateShadowMapping.c)
 *     MmDeleteShadowMapping @ 0x14065BE04 (MmDeleteShadowMapping.c)
 *     EtwpTiQueryVad @ 0x1406A63DC (EtwpTiQueryVad.c)
 * Callees:
 *     KiAttachProcess @ 0x1400CD4F0 (KiAttachProcess.c)
 *     KiAcquireThreadLockRaiseToDpc @ 0x1400CEDEC (KiAcquireThreadLockRaiseToDpc.c)
 *     KeBugCheckEx @ 0x14015D500 (KeBugCheckEx.c)
 */

void __stdcall KeStackAttachProcess(PRKPROCESS PROCESS, PRKAPC_STATE ApcState)
{
  struct _KTHREAD *CurrentThread; // rdi
  int v4; // esi
  unsigned __int8 v5; // [rsp+50h] [rbp+18h] BYREF

  CurrentThread = KeGetCurrentThread();
  v4 = (int)PROCESS;
  if ( (KeGetPcr()->Prcb.DpcRequestSummary & 0x10001) != 0 )
    KeBugCheckEx(
      5u,
      (ULONG_PTR)PROCESS,
      (ULONG_PTR)CurrentThread->ApcState.Process,
      CurrentThread->ApcStateIndex,
      KeGetPcr()->Prcb.DpcRequestSummary & 0x10001);
  if ( CurrentThread->ApcState.Process == PROCESS )
  {
    ApcState->Process = (_KPROCESS *)1;
  }
  else
  {
    KiAcquireThreadLockRaiseToDpc(CurrentThread, &v5);
    if ( CurrentThread->ApcStateIndex )
    {
      KiAttachProcess((_DWORD)CurrentThread, v4, v5, 0, (__int64)ApcState);
    }
    else
    {
      KiAttachProcess((_DWORD)CurrentThread, v4, v5, 0, (__int64)&CurrentThread->600);
      ApcState->Process = 0LL;
    }
  }
}
