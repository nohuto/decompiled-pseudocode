/*
 * XREFs of KiNmiInterruptStart @ 0x14018E380
 * Callers:
 *     KiNmiInterruptShadow @ 0x140274100 (KiNmiInterruptShadow.c)
 * Callees:
 *     KiCheckForSListAddress @ 0x1401020C0 (KiCheckForSListAddress.c)
 *     KiRestoreDebugRegisterState @ 0x140182BC0 (KiRestoreDebugRegisterState.c)
 *     KiSaveDebugRegisterState @ 0x140182C30 (KiSaveDebugRegisterState.c)
 *     KiSetSpecCtrlNmi @ 0x1401869A0 (KiSetSpecCtrlNmi.c)
 *     KxNmiInterrupt @ 0x14018E6C0 (KxNmiInterrupt.c)
 *     KiBugCheckDispatch @ 0x140194100 (KiBugCheckDispatch.c)
 *     KeWakeProcessor @ 0x140203EC8 (KeWakeProcessor.c)
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
  unsigned __int32 v15; // eax
  int v16; // r8d
  unsigned __int64 v17; // rdx
  unsigned __int64 v18; // rax
  __int128 v19; // xmm4
  __int128 v20; // xmm5
  __int64 v21; // r10
  bool v22; // zf
  unsigned __int8 CurrentIrql; // al
  unsigned __int8 v24; // cf
  int v26; // r9d
  int v27; // r8d
  int v28; // edx
  int v29; // ecx
  _BYTE v31[41]; // [rsp+0h] [rbp-80h] BYREF
  unsigned __int8 v32; // [rsp+29h] [rbp-57h]
  char v33; // [rsp+2Bh] [rbp-55h]
  unsigned int v34; // [rsp+2Ch] [rbp-54h]
  __int64 v35; // [rsp+30h] [rbp-50h]
  __int64 v36; // [rsp+38h] [rbp-48h]
  __int64 v37; // [rsp+40h] [rbp-40h]
  __int64 v38; // [rsp+48h] [rbp-38h]
  __int64 v39; // [rsp+50h] [rbp-30h]
  __int64 v40; // [rsp+58h] [rbp-28h]
  __int64 v41; // [rsp+60h] [rbp-20h]
  unsigned __int64 v42; // [rsp+68h] [rbp-18h]
  __int128 v43; // [rsp+70h] [rbp-10h]
  __int128 v44; // [rsp+80h] [rbp+0h]
  __int128 v45; // [rsp+90h] [rbp+10h]
  __int128 v46; // [rsp+A0h] [rbp+20h]
  __int128 v47; // [rsp+B0h] [rbp+30h]
  __int128 v48; // [rsp+C0h] [rbp+40h]
  unsigned __int64 v49; // [rsp+D0h] [rbp+50h]
  __int16 v50; // [rsp+100h] [rbp+80h]
  unsigned int v51; // [rsp+140h] [rbp+C0h]
  __int64 (__fastcall *retaddr)(); // [rsp+168h] [rbp+E8h]
  char v53; // [rsp+170h] [rbp+F0h]

  v33 = 0;
  v35 = v8;
  v36 = a1;
  v37 = a2;
  v38 = a3;
  v39 = a4;
  v40 = v9;
  v41 = v10;
  if ( (v53 & 1) != 0 )
  {
    if ( (KiKvaShadow & 1) == 0 )
      __asm { swapgs }
    _mm_lfence();
    ((void (*)(void))KiSetSpecCtrlNmi)();
    v22 = (*(_BYTE *)(v21 + 3) & 3) == 0;
    v50 = 0;
    if ( !v22 )
      *(double *)&v11 = KiSaveDebugRegisterState();
  }
  else
  {
    v42 = __readmsr(0xC0000101);
    v15 = __segmentlimit(0x50u);
    v16 = (v15 & 0x3FF) << 6;
    v17 = (unsigned __int64)(KiProcessorBlock[KiProcessorNumberToIndexMappingTable[v16 | (v15 >> 14)]] - 384) >> 32;
    __writemsr(0xC0000101, KiProcessorBlock[KiProcessorNumberToIndexMappingTable[v16 | (v15 >> 14)]] - 384);
    v18 = __readcr2();
    v49 = v18;
    KiSetSpecCtrlNmi(3221225729LL, v17);
  }
  v34 = _mm_getcsr();
  _mm_setcsr(KeGetPcr()->Prcb.MxCsr);
  v43 = v11;
  v44 = v12;
  v45 = v13;
  v46 = v14;
  v47 = v19;
  v48 = v20;
  if ( KeGetPcr()->Prcb.DeepSleep )
    KeWakeProcessor();
  if ( &ExpInterlockedPopEntrySListResume < (_UNKNOWN *)retaddr
    && &ExpInterlockedPopEntrySListEnd >= (_UNKNOWN *)retaddr )
  {
    KiCheckForSListAddress((__int64)v31);
  }
  __incgsdword(0x5C80u);
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(0xFuLL);
  v32 = CurrentIrql;
  v24 = _bittestandset16(MK_FP(__GS__, 23014LL), 0);
  if ( v24
    || (v53 & 1) == 0
    && (unsigned __int64)KiNmiInterruptStart <= (unsigned __int64)retaddr
    && &KiNmiInterruptEnd > (_UNKNOWN *)retaddr
    || (unsigned __int64)KiNmiInterruptShadow <= (unsigned __int64)retaddr
    && &KiNmiInterruptShadowEnd > (_UNKNOWN *)retaddr )
  {
    KiBugCheckDispatch(273LL, 0LL, 0LL, 0LL);
  }
  KxNmiInterrupt();
  __writegsbyte(0x59E6u, 0);
  _disable();
  __writecr8(v32);
  _disable();
  if ( (v53 & 1) != 0 )
  {
    _mm_setcsr(v34);
    if ( v50 )
      KiRestoreDebugRegisterState();
    v26 = v39;
    v27 = v38;
    if ( KeGetPcr()->Prcb.BpbKernelSpecCtrl )
      __writemsr(0x48u, v51);
    v28 = v37;
    v29 = v36;
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
    _mm_setcsr(v34);
    if ( KeGetPcr()->Prcb.BpbKernelSpecCtrl )
      __writemsr(0x48u, v51);
    __writemsr(0xC0000101, v42);
    __writecr2(v49);
    v26 = v39;
    v27 = v38;
    v28 = v37;
    v29 = v36;
    if ( (KiKvaShadow & 1) == 0 )
      __asm { iretq }
  }
  return KiKernelIstExit(v29, v28, v27, v26, a5, a6, a7, a8);
}
