/*
 * XREFs of KiCallUserMode @ 0x140156DB0
 * Callers:
 *     KeUserModeCallback @ 0x1403F17A0 (KeUserModeCallback.c)
 * Callees:
 *     KiRestoreDebugRegisterState @ 0x140154240 (KiRestoreDebugRegisterState.c)
 */

__int64 __fastcall KiCallUserMode(
        __int64 a1,
        __int64 a2,
        unsigned __int64 a3,
        char *a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9,
        int a10,
        int a11,
        int a12,
        int a13,
        int a14,
        int a15,
        char a16)
{
  __int64 v16; // rbx
  __int64 v17; // rbp
  __int64 v18; // rdi
  __int64 v19; // rsi
  __int64 v20; // r12
  __int64 v21; // r13
  __int64 v22; // r14
  __int64 v23; // r15
  __int128 v24; // xmm6
  __int128 v25; // xmm7
  __int128 v26; // xmm8
  __int128 v27; // xmm9
  __int128 v28; // xmm10
  __int128 v29; // xmm11
  __int128 v30; // xmm12
  __int128 v31; // xmm13
  __int128 v32; // xmm14
  __int128 v33; // xmm15
  struct _KTHREAD *CurrentThread; // rbx
  _KTRAP_FRAME *TrapFrame; // rsi
  __int64 v36; // rcx
  char *v37; // r9
  __int64 InstrumentationCallback; // r9
  unsigned int Signalling; // eax
  _OWORD v41[13]; // [rsp+0h] [rbp-138h] BYREF
  _KTRAP_FRAME *v42; // [rsp+D0h] [rbp-68h]
  __int64 v43; // [rsp+D8h] [rbp-60h]
  __int64 v44; // [rsp+E0h] [rbp-58h]
  __int64 v45; // [rsp+F8h] [rbp-40h]
  __int64 v46; // [rsp+100h] [rbp-38h]
  __int64 v47; // [rsp+108h] [rbp-30h]
  __int64 v48; // [rsp+110h] [rbp-28h]
  __int64 v49; // [rsp+118h] [rbp-20h]
  __int64 v50; // [rsp+120h] [rbp-18h]
  __int64 v51; // [rsp+128h] [rbp-10h]
  __int64 v52; // [rsp+130h] [rbp-8h]
  _UNKNOWN *retaddr; // [rsp+138h] [rbp+0h] BYREF

  v41[3] = v24;
  v41[4] = v25;
  v41[5] = v26;
  v41[6] = v27;
  v41[7] = v28;
  v41[8] = v29;
  v41[9] = v30;
  v41[10] = v31;
  v41[11] = v32;
  v41[12] = v33;
  v45 = v17;
  v46 = v16;
  v47 = v18;
  v48 = v19;
  v49 = v20;
  v50 = v21;
  v51 = v22;
  v52 = v23;
  v43 = a1;
  v44 = a2;
  CurrentThread = KeGetCurrentThread();
  *(_QWORD *)(a3 + 32) = v41;
  TrapFrame = CurrentThread->TrapFrame;
  v42 = TrapFrame;
  _disable();
  CurrentThread->InitialStack = (void *)a3;
  CurrentThread->StackBase = a4;
  if ( (KiKvaShadow & 1) != 0 )
    __writegsqword(0x7008u, a3);
  else
    *(_QWORD *)((char *)KeGetPcr()->NtTib.StackBase + 4) = a3;
  v36 = (unsigned int)KeKernelStackSize;
  v37 = &a4[-(unsigned int)KeKernelStackSize];
  __writegsqword(0x1A8u, a3);
  CurrentThread->StackLimit = v37;
  if ( CurrentThread->ApcState.UserApcPending || (CurrentThread->Header.LockNV & 0x40010000) != 0 )
  {
    qmemcpy(&retaddr, TrapFrame, 0x190uLL);
    JUMPOUT(0x14016580BLL);
  }
  _mm_setcsr(TrapFrame->MxCsr);
  if ( (CurrentThread->Header.Reserved1 & 3) != 0 )
  {
    KiRestoreDebugRegisterState(v36);
    InstrumentationCallback = (__int64)CurrentThread->ApcState.Process->InstrumentationCallback;
    if ( !InstrumentationCallback )
      InstrumentationCallback = KeUserCallbackDispatcher;
  }
  else
  {
    InstrumentationCallback = KeUserCallbackDispatcher;
  }
  Signalling = KeGetCurrentThread()->Header.Signalling;
  if ( (Signalling & 1) == 0 )
    __writemsr(0x48u, Signalling);
  if ( (KiKvaShadow & 1) == 0 )
  {
    __asm
    {
      swapgs
      sysret
    }
  }
  return KiKernelSysretExit(InstrumentationCallback, 0LL, TrapFrame->Rsp, TrapFrame->Rbp);
}
