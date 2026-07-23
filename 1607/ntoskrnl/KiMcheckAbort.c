/*
 * XREFs of KiMcheckAbort @ 0x14016D640
 * Callers:
 *     KiMcheckAbortShadow @ 0x14023F880 (KiMcheckAbortShadow.c)
 * Callees:
 *     KiCheckForSListAddress @ 0x14008B8E0 (KiCheckForSListAddress.c)
 *     KeWakeProcessor @ 0x1400AFC88 (KeWakeProcessor.c)
 *     KiRestoreDebugRegisterState @ 0x14015DF00 (KiRestoreDebugRegisterState.c)
 *     KiSaveDebugRegisterState @ 0x14015DF70 (KiSaveDebugRegisterState.c)
 *     KiRestoreSetContextState @ 0x14015EAB0 (KiRestoreSetContextState.c)
 *     KiSetSpecCtrlNmi @ 0x140162170 (KiSetSpecCtrlNmi.c)
 *     KxMcheckAbort @ 0x14016DA80 (KxMcheckAbort.c)
 *     KiBugCheckDispatch @ 0x140170100 (KiBugCheckDispatch.c)
 */

__int64 __fastcall KiMcheckAbort(
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
  __int64 v21; // rdx
  __int128 v22; // xmm4
  __int128 v23; // xmm5
  __int64 v24; // rcx
  __int64 v25; // r10
  unsigned __int8 CurrentIrql; // al
  __int64 v27; // r8
  __int64 v28; // r9
  __int64 v29; // rdx
  struct _KTHREAD *CurrentThread; // rcx
  int v31; // r9d
  int v32; // r8d
  __int64 (__fastcall **v33)(); // rcx
  __int64 (__fastcall *v34)(); // rax
  _KIDTENTRY64 *IdtBase; // rax
  int v36; // edx
  int v37; // ecx
  __m128i v39; // [rsp+0h] [rbp-90h] BYREF
  _BYTE v40[41]; // [rsp+10h] [rbp-80h] BYREF
  unsigned __int8 v41; // [rsp+39h] [rbp-57h]
  char v42; // [rsp+3Bh] [rbp-55h]
  unsigned int v43; // [rsp+3Ch] [rbp-54h]
  __int64 v44; // [rsp+40h] [rbp-50h]
  __int64 v45; // [rsp+48h] [rbp-48h]
  __int64 v46; // [rsp+50h] [rbp-40h]
  __int64 v47; // [rsp+58h] [rbp-38h]
  __int64 v48; // [rsp+60h] [rbp-30h]
  __int64 v49; // [rsp+68h] [rbp-28h]
  __int64 v50; // [rsp+70h] [rbp-20h]
  unsigned __int64 v51; // [rsp+78h] [rbp-18h]
  __int128 v52; // [rsp+80h] [rbp-10h]
  __int128 v53; // [rsp+90h] [rbp+0h]
  __int128 v54; // [rsp+A0h] [rbp+10h]
  __int128 v55; // [rsp+B0h] [rbp+20h]
  __int128 v56; // [rsp+C0h] [rbp+30h]
  __int128 v57; // [rsp+D0h] [rbp+40h]
  unsigned __int64 v58; // [rsp+E0h] [rbp+50h]
  __int16 v59; // [rsp+110h] [rbp+80h]
  unsigned int v60; // [rsp+150h] [rbp+C0h]
  __int64 (__fastcall *retaddr)(); // [rsp+178h] [rbp+E8h]
  unsigned __int16 v62; // [rsp+180h] [rbp+F0h]
  unsigned int v63; // [rsp+188h] [rbp+F8h]
  __int64 (__fastcall *v64)(); // [rsp+190h] [rbp+100h]
  unsigned __int16 v65; // [rsp+198h] [rbp+108h]

  v42 = 0;
  v44 = v8;
  v45 = a1;
  v46 = a2;
  v47 = a3;
  v48 = a4;
  v49 = v9;
  v50 = v10;
  if ( (v62 & 1) != 0 )
  {
    if ( (KiKvaShadow & 1) == 0 )
      __asm { swapgs }
    _mm_lfence();
    KiSetSpecCtrlNmi(a1, a2);
    v15 = (*(_BYTE *)(v25 + 3) & 3) == 0;
    v59 = 0;
    if ( !v15 )
      *(double *)&v11 = KiSaveDebugRegisterState(v24);
  }
  else
  {
    v51 = __readmsr(0xC0000101);
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
    v58 = v20;
    KiSetSpecCtrlNmi(3221225729LL, v19);
  }
  v43 = _mm_getcsr();
  _mm_setcsr(KeGetPcr()->Prcb.MxCsr);
  v52 = v11;
  v53 = v12;
  v54 = v13;
  v55 = v14;
  v56 = v22;
  v57 = v23;
  if ( KeGetPcr()->Prcb.DeepSleep )
    KeWakeProcessor();
  if ( &ExpInterlockedPopEntrySListResume < (_UNKNOWN *)retaddr
    && &ExpInterlockedPopEntrySListEnd >= (_UNKNOWN *)retaddr )
  {
    KiCheckForSListAddress((__int64)v40);
  }
  __incgsdword(0x5C80u);
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(0xFuLL);
  v41 = CurrentIrql;
  _enable();
  if ( (v62 & 1) == 0 && &KiMcheckRecurseStart <= (_UNKNOWN *)retaddr && &KiMcheckRecurseEnd > (_UNKNOWN *)retaddr )
    KiBugCheckDispatch(251LL, 0LL, 0LL, 0LL);
  KxMcheckAbort(v40, v21, &v39);
  if ( (v39.m128i_i8[0] & 1) != 0 )
  {
    *((__m128i *)KeGetCurrentThread()->InitialStack - 26) = _mm_load_si128(&v39);
    v42 = 1;
  }
  v29 = 0LL;
  __writemsr(0x17Au, 0LL);
  _disable();
  __writecr8(v41);
  _disable();
  if ( (v62 & 1) != 0 )
  {
    CurrentThread = KeGetCurrentThread();
    if ( (CurrentThread->Header.LockNV & 0x8000000) != 0 )
      KiRestoreSetContextState((__int64)CurrentThread, 0LL, v27, v28, v40[32]);
    _mm_setcsr(v43);
    if ( v59 )
      KiRestoreDebugRegisterState(CurrentThread, v29);
    v31 = v48;
    v32 = v47;
    if ( v42 )
    {
      v33 = (__int64 (__fastcall **)())((char *)KeGetCurrentThread()->InitialStack - 40);
      *v33 = retaddr;
      v33[1] = (__int64 (__fastcall *)())v62;
      v33[2] = (__int64 (__fastcall *)())v63;
      v33[3] = v64;
      v33[4] = (__int64 (__fastcall *)())v65;
      v65 = 24;
      v34 = KxMcheckAlternateReturn;
      if ( (KiKvaShadow & 1) != 0 )
      {
        IdtBase = KeGetPcr()->IdtBase;
        *(&IdtBase[1119].Alignment + 1) = KeGetPcr()->Prcb.KernelDirectoryTableBase & 0x7FFFFFFFFFFFFFFFLL;
        IdtBase[1119].Alignment = (unsigned __int64)KeGetPcr();
        IdtBase = (_KIDTENTRY64 *)((char *)IdtBase + 16856);
        IdtBase->Alignment = (unsigned __int64)*v33;
        *(_KIDTENTRY64 *)((char *)IdtBase + 8) = *(_KIDTENTRY64 *)(v33 + 1);
        *(&IdtBase[1].Alignment + 1) = (unsigned __int64)v33[3];
        IdtBase[2].Alignment = (unsigned __int64)v33;
        v34 = KxMcheckAlternateReturnShadow;
      }
      retaddr = v34;
    }
    else if ( KeGetPcr()->Prcb.BpbKernelSpecCtrl )
    {
      __writemsr(0x48u, v60);
    }
    v36 = v46;
    v37 = v45;
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
    _mm_setcsr(v43);
    if ( KeGetPcr()->Prcb.BpbKernelSpecCtrl )
      __writemsr(0x48u, v60);
    __writemsr(0xC0000101, v51);
    __writecr2(v58);
    v31 = v48;
    v32 = v47;
    v36 = v46;
    v37 = v45;
    if ( (KiKvaShadow & 1) == 0 )
      __asm { iretq }
  }
  return KiKernelIstMceExit(v37, v36, v32, v31, a5, a6, a7, a8);
}
