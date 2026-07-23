/*
 * XREFs of KiNmiInterruptStart @ 0x140169D80
 * Callers:
 *     KiNmiInterruptShadow @ 0x14023F100 (KiNmiInterruptShadow.c)
 * Callees:
 *     KiCheckForSListAddress @ 0x14008B8E0 (KiCheckForSListAddress.c)
 *     KeWakeProcessor @ 0x1400AFC88 (KeWakeProcessor.c)
 *     KiRestoreDebugRegisterState @ 0x14015DF00 (KiRestoreDebugRegisterState.c)
 *     KiSaveDebugRegisterState @ 0x14015DF70 (KiSaveDebugRegisterState.c)
 *     KiRestoreSetContextState @ 0x14015EAB0 (KiRestoreSetContextState.c)
 *     KiSetSpecCtrlNmi @ 0x140162170 (KiSetSpecCtrlNmi.c)
 *     KxNmiInterrupt @ 0x14016A0C0 (KxNmiInterrupt.c)
 *     KiBugCheckDispatch @ 0x140170100 (KiBugCheckDispatch.c)
 */

__int64 __fastcall KiNmiInterruptStart(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        int a6,
        __int64 a7,
        __int64 a8)
{
  __int64 v8; // rax
  __int64 v9; // r10
  __int64 v10; // r11
  __int128 v11; // xmm0
  __int128 v12; // xmm1
  __int128 v13; // xmm2
  __int128 v14; // xmm3
  bool v15; // zf
  unsigned __int32 v16; // eax
  int v17; // eax
  int v18; // r8d
  unsigned __int64 v19; // rdx
  unsigned __int64 v20; // rax
  __int128 v21; // xmm4
  __int128 v22; // xmm5
  __int64 v23; // r10
  unsigned __int8 CurrentIrql; // al
  unsigned __int8 v25; // cf
  __int64 v27; // rdx
  __int64 v28; // r8
  __int64 v29; // r9
  struct _KTHREAD *CurrentThread; // rcx
  int v31; // r9d
  int v32; // r8d
  int v33; // edx
  int v34; // ecx
  _BYTE v36[41]; // [rsp+0h] [rbp-80h] BYREF
  unsigned __int8 v37; // [rsp+29h] [rbp-57h]
  char v38; // [rsp+2Bh] [rbp-55h]
  unsigned int v39; // [rsp+2Ch] [rbp-54h]
  __int64 v40; // [rsp+30h] [rbp-50h]
  __int64 v41; // [rsp+38h] [rbp-48h]
  __int64 v42; // [rsp+40h] [rbp-40h]
  __int64 v43; // [rsp+48h] [rbp-38h]
  __int64 v44; // [rsp+50h] [rbp-30h]
  __int64 v45; // [rsp+58h] [rbp-28h]
  __int64 v46; // [rsp+60h] [rbp-20h]
  unsigned __int64 v47; // [rsp+68h] [rbp-18h]
  __int128 v48; // [rsp+70h] [rbp-10h]
  __int128 v49; // [rsp+80h] [rbp+0h]
  __int128 v50; // [rsp+90h] [rbp+10h]
  __int128 v51; // [rsp+A0h] [rbp+20h]
  __int128 v52; // [rsp+B0h] [rbp+30h]
  __int128 v53; // [rsp+C0h] [rbp+40h]
  unsigned __int64 v54; // [rsp+D0h] [rbp+50h]
  __int16 v55; // [rsp+100h] [rbp+80h]
  unsigned int v56; // [rsp+140h] [rbp+C0h]
  __int64 (__fastcall *retaddr)(); // [rsp+168h] [rbp+E8h]
  char v58; // [rsp+170h] [rbp+F0h]

  v38 = 0;
  v40 = v8;
  v41 = a1;
  v42 = a2;
  v43 = a3;
  v44 = a4;
  v45 = v9;
  v46 = v10;
  if ( (v58 & 1) != 0 )
  {
    if ( (KiKvaShadow & 1) == 0 )
      __asm { swapgs }
    _mm_lfence();
    ((void (*)(void))KiSetSpecCtrlNmi)();
    v15 = (*(_BYTE *)(v23 + 3) & 3) == 0;
    v55 = 0;
    if ( !v15 )
      *(double *)&v11 = KiSaveDebugRegisterState();
  }
  else
  {
    v47 = __readmsr(0xC0000101);
    v16 = __segmentlimit(0x50u);
    if ( v15 )
    {
      v18 = (v16 & 0x3FF) << 6;
      v17 = v16 >> 14;
    }
    else
    {
      __asm { rdtscp }
      v17 = 1;
      v18 = 805306432;
    }
    v19 = (unsigned __int64)(KiProcessorBlock[KiProcessorNumberToIndexMappingTable[v18 | v17]] - 384) >> 32;
    __writemsr(0xC0000101, KiProcessorBlock[KiProcessorNumberToIndexMappingTable[v18 | v17]] - 384);
    v20 = __readcr2();
    v54 = v20;
    KiSetSpecCtrlNmi(3221225729LL, v19);
  }
  v39 = _mm_getcsr();
  _mm_setcsr(KeGetPcr()->Prcb.MxCsr);
  v48 = v11;
  v49 = v12;
  v50 = v13;
  v51 = v14;
  v52 = v21;
  v53 = v22;
  if ( KeGetPcr()->Prcb.DeepSleep )
    KeWakeProcessor();
  if ( &ExpInterlockedPopEntrySListResume < (_UNKNOWN *)retaddr
    && &ExpInterlockedPopEntrySListEnd >= (_UNKNOWN *)retaddr )
  {
    KiCheckForSListAddress((__int64)v36);
  }
  __incgsdword(0x5C80u);
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(0xFuLL);
  v37 = CurrentIrql;
  v25 = _bittestandset16(MK_FP(__GS__, 23014LL), 0);
  if ( v25
    || (v58 & 1) == 0
    && (unsigned __int64)KiNmiInterruptStart <= (unsigned __int64)retaddr
    && &KiNmiInterruptEnd > (_UNKNOWN *)retaddr
    || (unsigned __int64)KiNmiInterruptShadow <= (unsigned __int64)retaddr
    && &KiNmiInterruptShadowEnd > (_UNKNOWN *)retaddr )
  {
    KiBugCheckDispatch(273LL, 0LL, 0LL, 0LL);
  }
  KxNmiInterrupt();
  __writegsbyte(0x59E6u, 0);
  __writecr8(v37);
  if ( (v58 & 1) != 0 )
  {
    CurrentThread = KeGetCurrentThread();
    if ( (CurrentThread->Header.LockNV & 0x8000000) != 0 )
      KiRestoreSetContextState((__int64)CurrentThread, v27, v28, v29, v36[32]);
    _mm_setcsr(v39);
    if ( v55 )
      KiRestoreDebugRegisterState();
    v31 = v44;
    v32 = v43;
    if ( KeGetPcr()->Prcb.BpbKernelSpecCtrl )
      __writemsr(0x48u, v56);
    v33 = v42;
    v34 = v41;
    if ( (KiKvaShadow & 1) == 0 )
    {
      if ( (KeGetPcr()->Prcb.BpbState & 0x80) != 0 )
        __asm { verw    [rsp+arg_18] }
      __asm
      {
        swapgs
        iretq
      }
    }
  }
  else
  {
    _mm_setcsr(v39);
    if ( KeGetPcr()->Prcb.BpbKernelSpecCtrl )
      __writemsr(0x48u, v56);
    __writemsr(0xC0000101, v47);
    __writecr2(v54);
    v31 = v44;
    v32 = v43;
    v33 = v42;
    v34 = v41;
    if ( (KiKvaShadow & 1) == 0 )
      __asm { iretq }
  }
  return KiKernelIstExit(v34, v33, v32, v31, a5, a6, a7, a8);
}
