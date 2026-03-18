/*
 * XREFs of IovpLogStackTrace @ 0x140735B40
 * Callers:
 *     IoReuseIrp @ 0x14010B380 (IoReuseIrp.c)
 *     IovAllocateIrp @ 0x140734804 (IovAllocateIrp.c)
 *     IovCancelIrp @ 0x14073508C (IovCancelIrp.c)
 *     IovCompleteRequest @ 0x1407350CC (IovCompleteRequest.c)
 * Callees:
 *     KeExpandKernelStackAndCallout @ 0x14012F378 (KeExpandKernelStackAndCallout.c)
 *     RtlEnoughStackSpaceForStackCapture @ 0x140245BF8 (RtlEnoughStackSpaceForStackCapture.c)
 *     ViPoolLogStackCallout @ 0x1407463BC (ViPoolLogStackCallout.c)
 */

_QWORD *__fastcall IovpLogStackTrace(__int64 a1)
{
  _QWORD *v2; // rbx
  struct _KTHREAD *CurrentThread; // rax

  if ( !IovIrpTraces )
    return 0LL;
  v2 = (_QWORD *)(IovIrpTraces
                + ((unsigned __int64)(_InterlockedIncrement(&IovIrpTracesIndex) & (unsigned int)(IovIrpTracesLength - 1)) << 7));
  *v2 = a1;
  CurrentThread = KeGetCurrentThread();
  v2[1] = CurrentThread;
  *((_DWORD *)v2 + 4) = CurrentThread->WaitBlock[3].SpareLong;
  LOBYTE(CurrentThread) = KeGetCurrentIrql();
  *((_BYTE *)v2 + 20) = (_BYTE)CurrentThread;
  if ( (unsigned __int8)CurrentThread > 1u || (unsigned int)RtlEnoughStackSpaceForStackCapture() )
  {
    ViPoolLogStackCallout(v2);
  }
  else if ( KeExpandKernelStackAndCallout(ViPoolLogStackCallout, v2, 0xE30uLL) < 0 )
  {
    v2[3] = 0LL;
  }
  return v2;
}
