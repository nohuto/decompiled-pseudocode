/*
 * XREFs of KeUserModeCallback @ 0x1403F17A0
 * Callers:
 *     <none>
 * Callees:
 *     MmCreateKernelStack @ 0x14002CB50 (MmCreateKernelStack.c)
 *     MmDeleteKernelStack @ 0x14002CF40 (MmDeleteKernelStack.c)
 *     KeBugCheckEx @ 0x140153DC0 (KeBugCheckEx.c)
 *     KiCallUserMode @ 0x140156DB0 (KiCallUserMode.c)
 *     memmove @ 0x140166980 (memmove.c)
 *     ExCallCallBack @ 0x1403F6504 (ExCallCallBack.c)
 *     ExRaiseAccessViolation @ 0x140673340 (ExRaiseAccessViolation.c)
 *     ExRaiseDatatypeMisalignment @ 0x140673350 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall KeUserModeCallback(int a1, const void *a2, unsigned int a3, __int64 a4, __int64 a5)
{
  __int64 v5; // rdi
  struct _KTHREAD *CurrentThread; // rbx
  unsigned __int8 ApcStateIndex; // al
  unsigned __int8 v8; // al
  __int64 KernelStack; // rax
  char *v10; // r14
  _KTRAP_FRAME *TrapFrame; // r15
  unsigned __int64 Rsp; // r12
  unsigned __int64 v13; // rax
  unsigned __int64 v14; // rsi
  unsigned __int64 v15; // rdx
  ULONG64 v16; // rcx
  unsigned __int64 v17; // rcx
  unsigned int v18; // edi
  _DWORD *Teb; // rcx
  unsigned __int8 CurrentIrql; // al
  int BugCheckParameter4; // [rsp+20h] [rbp-78h]
  int v23; // [rsp+28h] [rbp-70h]
  int v24; // [rsp+30h] [rbp-68h]
  int v25; // [rsp+40h] [rbp-58h]
  int v26; // [rsp+58h] [rbp-40h]
  int v27; // [rsp+60h] [rbp-38h]
  int v28; // [rsp+68h] [rbp-30h]
  int v29; // [rsp+70h] [rbp-28h]
  char v30; // [rsp+78h] [rbp-20h]
  ULONG_PTR retaddr; // [rsp+98h] [rbp+0h]

  v5 = a3;
  CurrentThread = KeGetCurrentThread();
  if ( (CurrentThread->MiscFlags & 0x1000) != 0 )
    KeBugCheckEx(0x107u, (ULONG_PTR)CurrentThread, 0LL, 0LL, 0LL);
  if ( KeGetCurrentIrql() )
  {
    CurrentIrql = KeGetCurrentIrql();
    KeBugCheckEx(0x4Au, retaddr, CurrentIrql, 0LL, 0LL);
  }
  ApcStateIndex = CurrentThread->ApcStateIndex;
  if ( ApcStateIndex || CurrentThread->WaitBlock[3].SpareLong )
    KeBugCheckEx(1u, retaddr, ApcStateIndex, CurrentThread->CombinedApcDisable, 0LL);
  v8 = ++CurrentThread->CallbackNestingLevel;
  if ( v8 > 0x1Fu )
  {
    CurrentThread->CallbackNestingLevel = v8 - 1;
    return 3221225725LL;
  }
  else
  {
    KernelStack = MmCreateKernelStack(
                    0,
                    *(_WORD *)(*(_QWORD *)(KiProcessorBlock[CurrentThread->IdealProcessor] + 1600) + 146LL),
                    (__int64)CurrentThread);
    v10 = (char *)KernelStack;
    v25 = KernelStack;
    if ( KernelStack )
    {
      *(_QWORD *)(KernelStack - 48) = KernelStack;
      *(_QWORD *)(KernelStack - 40) = KernelStack - (unsigned int)KeKernelStackSize;
      *(_QWORD *)(KernelStack - 32) = CurrentThread->StackBase;
      *(_QWORD *)(KernelStack - 24) = CurrentThread->StackLimit;
      *(_QWORD *)(KernelStack - 8) = CurrentThread->InitialStack;
      TrapFrame = CurrentThread->TrapFrame;
      Rsp = TrapFrame->Rsp;
      v13 = ((v5 + 15) & 0xFFFFFFFFFFFFFFF0uLL) + 88;
      v14 = (Rsp - v13) & 0xFFFFFFFFFFFFFFF0uLL;
      if ( ((v5 + 15) & 0xFFFFFFFFFFFFFFF0uLL) != 0xFFFFFFFFFFFFFFA8uLL )
      {
        v15 = (Rsp - v13) & 0xFFFFFFFFFFFFFFF0uLL;
        v16 = v14 + ((v5 + 15) & 0xFFFFFFFFFFFFFFF0uLL) + 87;
        if ( v14 > v16 || v16 >= MmUserProbeAddress )
        {
          if ( !KeGetCurrentThread()->ApcState.Process->SecurePid )
            ExRaiseAccessViolation();
        }
        else
        {
          v17 = (v16 & 0xFFFFFFFFFFFFF000uLL) + 4096;
          do
          {
            *(_BYTE *)v15 = *(_BYTE *)v15;
            v15 = (v15 & 0xFFFFFFFFFFFFF000uLL) + 4096;
          }
          while ( v15 != v17 );
        }
      }
      memmove((void *)(v14 + 88), a2, (unsigned int)v5);
      *(_QWORD *)(v14 + 32) = v14 + 88;
      *(_DWORD *)(v14 + 40) = a3;
      *(_DWORD *)(v14 + 44) = a1;
      *(_QWORD *)(v14 + 72) = Rsp;
      *(_QWORD *)(v14 + 48) = TrapFrame->Rip;
      TrapFrame->Rsp = v14;
      v18 = KiCallUserMode(
              a4,
              a5,
              (unsigned __int64)(v10 - 48),
              v10,
              BugCheckParameter4,
              v23,
              v24,
              (int)CurrentThread,
              v25,
              (int)TrapFrame,
              Rsp,
              v26,
              v27,
              v28,
              v29,
              v30);
      Teb = CurrentThread->Teb;
      if ( Teb[1488] )
      {
        TrapFrame->Rsp -= 256LL;
        ExCallCallBack(Teb, 7LL);
      }
      TrapFrame->Rsp = Rsp;
      --CurrentThread->CallbackNestingLevel;
      MmDeleteKernelStack((unsigned __int64)v10, 0);
      return v18;
    }
    else
    {
      --CurrentThread->CallbackNestingLevel;
      return 3221225495LL;
    }
  }
}
