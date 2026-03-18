/*
 * XREFs of KeSaveExtendedAndSupervisorState @ 0x140124FE8
 * Callers:
 *     KeSaveExtendedProcessorState @ 0x140124FA8 (KeSaveExtendedProcessorState.c)
 *     PopHandleNextState @ 0x1403F3750 (PopHandleNextState.c)
 * Callees:
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     RtlXSave @ 0x14012527C (RtlXSave.c)
 *     KeAllocateXStateContext @ 0x1401252C0 (KeAllocateXStateContext.c)
 *     RtlXRestore @ 0x140126714 (RtlXRestore.c)
 *     KeBugCheckEx @ 0x140182750 (KeBugCheckEx.c)
 *     XSaveSHelper @ 0x14018BDE0 (XSaveSHelper.c)
 *     memset @ 0x140195A80 (memset.c)
 */

__int64 __fastcall KeSaveExtendedAndSupervisorState(ULONG_PTR BugCheckParameter3, _DWORD *a2)
{
  unsigned __int8 CurrentIrql; // r14
  struct _KTHREAD *CurrentThread; // rbp
  unsigned __int8 v6; // r15
  _BYTE *SparePtr; // rax
  ULONG_PTR v8; // r12
  unsigned __int8 v9; // cl
  struct _KPRCB *CurrentPrcb; // rbx
  unsigned int v11; // eax
  __int64 result; // rax
  __int16 v13; // ax

  CurrentIrql = KeGetCurrentIrql();
  CurrentThread = KeGetCurrentThread();
  if ( CurrentIrql > 2u )
    KeBugCheckEx(0x131u, 1uLL, CurrentIrql, 0LL, 0LL);
  if ( (KeFeatureBits & 0x800000) != 0 )
  {
    if ( CurrentIrql == 2 && (MEMORY[0xFFFFF780000003EC] & 2) != 0 )
    {
      if ( (~(MEMORY[0xFFFFF780000003D8] | MEMORY[0xFFFFF780000005F0]) & BugCheckParameter3) == 0 )
        goto LABEL_6;
LABEL_41:
      KeBugCheckEx(0x131u, 0LL, KeFeatureBits & 0x800000, (unsigned int)BugCheckParameter3, HIDWORD(BugCheckParameter3));
    }
    if ( (~MEMORY[0xFFFFF780000003D8] & BugCheckParameter3) != 0 )
      goto LABEL_41;
  }
  else if ( (BugCheckParameter3 & 0xFFFFFFFFFFFFFFFCuLL) != 0 )
  {
    goto LABEL_41;
  }
  if ( !CurrentIrql && (CurrentThread->ApcState.InProgressFlags & 1) == 0 )
  {
    v6 = 0;
    goto LABEL_7;
  }
LABEL_6:
  v6 = CurrentIrql + 1;
LABEL_7:
  SparePtr = CurrentThread->WaitBlock[1].SparePtr;
  v8 = (BugCheckParameter3 | MEMORY[0xFFFFF780000003D8]) & 0xFFFFFFFFFFFFFFFCuLL;
  if ( SparePtr )
  {
    v9 = SparePtr[16];
    if ( v9 > v6 )
      KeBugCheckEx(0x131u, 2uLL, v9, v6, 0LL);
  }
  if ( v8 )
  {
    if ( CurrentIrql < 2u )
      goto LABEL_24;
    if ( !SparePtr || SparePtr[16] != v6 )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      memset(&CurrentPrcb->ExtendedState->Header, 0, sizeof(CurrentPrcb->ExtendedState->Header));
      a2[8] = KeXStateLength;
      *((_QWORD *)a2 + 6) = 0LL;
      *((_QWORD *)a2 + 5) = CurrentPrcb->ExtendedState;
      goto LABEL_26;
    }
    if ( (MEMORY[0xFFFFF780000003EC] & 2) != 0 )
      v11 = MEMORY[0xFFFFF78000000600];
    else
LABEL_24:
      v11 = MEMORY[0xFFFFF780000003E8];
    result = KeAllocateXStateContext(a2 + 6, BugCheckParameter3, v11);
    if ( (int)result < 0 )
      return result;
    goto LABEL_26;
  }
  a2[8] = 0;
  *((_QWORD *)a2 + 6) = 0LL;
  *((_QWORD *)a2 + 5) = 0LL;
LABEL_26:
  *((_QWORD *)a2 + 1) = CurrentThread;
  *((_BYTE *)a2 + 16) = v6;
  *((_QWORD *)a2 + 3) = v8;
  if ( !CurrentIrql )
    --CurrentThread->SpecialApcDisable;
  *(_QWORD *)a2 = CurrentThread->WaitBlock[1].SparePtr;
  if ( v8 && (KeFeatureBits & 0x800000) != 0 )
  {
    if ( CurrentIrql == 2 && (MEMORY[0xFFFFF780000003EC] & 2) != 0 )
    {
      RtlXRestore(*((_QWORD *)a2 + 5), 0LL);
      XSaveSHelper(*((_QWORD *)a2 + 5), v8);
    }
    else
    {
      RtlXSave(*((_QWORD *)a2 + 5), v8);
    }
  }
  CurrentThread->WaitBlock[1].SparePtr = a2;
  if ( !CurrentIrql )
  {
    v13 = CurrentThread->SpecialApcDisable + 1;
    CurrentThread->SpecialApcDisable = v13;
    if ( !v13
      && ($CD287064E7C9F7953DE243E927CFCB99 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
    {
      KiCheckForKernelApcDelivery();
    }
  }
  return 0LL;
}
