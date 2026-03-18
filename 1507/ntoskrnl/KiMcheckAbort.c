/*
 * XREFs of KiMcheckAbort @ 0x140191BC0
 * Callers:
 *     KiMcheckAbortShadow @ 0x140274880 (KiMcheckAbortShadow.c)
 * Callees:
 *     KiCheckForSListAddress @ 0x1401020C0 (KiCheckForSListAddress.c)
 *     KiRestoreDebugRegisterState @ 0x140182BC0 (KiRestoreDebugRegisterState.c)
 *     KiSaveDebugRegisterState @ 0x140182C30 (KiSaveDebugRegisterState.c)
 *     KiSetSpecCtrlNmi @ 0x1401869A0 (KiSetSpecCtrlNmi.c)
 *     KxMcheckAbort @ 0x140192000 (KxMcheckAbort.c)
 *     KiBugCheckDispatch @ 0x140194100 (KiBugCheckDispatch.c)
 *     KeWakeProcessor @ 0x140203EC8 (KeWakeProcessor.c)
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
  unsigned __int32 v15; // eax
  int v16; // r8d
  unsigned __int64 v17; // rdx
  unsigned __int64 v18; // rax
  __int64 v19; // rdx
  __int128 v20; // xmm4
  __int128 v21; // xmm5
  __int64 v22; // rcx
  __int64 v23; // r10
  bool v24; // zf
  unsigned __int8 CurrentIrql; // al
  int v26; // r9d
  int v27; // r8d
  __int64 (__fastcall **v28)(); // rcx
  __int64 (__fastcall *v29)(); // rax
  _KIDTENTRY64 *IdtBase; // rax
  int v31; // edx
  int v32; // ecx
  __m128i v34; // [rsp+0h] [rbp-90h] BYREF
  _BYTE v35[41]; // [rsp+10h] [rbp-80h] BYREF
  unsigned __int8 v36; // [rsp+39h] [rbp-57h]
  char v37; // [rsp+3Bh] [rbp-55h]
  unsigned int v38; // [rsp+3Ch] [rbp-54h]
  __int64 v39; // [rsp+40h] [rbp-50h]
  __int64 v40; // [rsp+48h] [rbp-48h]
  __int64 v41; // [rsp+50h] [rbp-40h]
  __int64 v42; // [rsp+58h] [rbp-38h]
  __int64 v43; // [rsp+60h] [rbp-30h]
  __int64 v44; // [rsp+68h] [rbp-28h]
  __int64 v45; // [rsp+70h] [rbp-20h]
  unsigned __int64 v46; // [rsp+78h] [rbp-18h]
  __int128 v47; // [rsp+80h] [rbp-10h]
  __int128 v48; // [rsp+90h] [rbp+0h]
  __int128 v49; // [rsp+A0h] [rbp+10h]
  __int128 v50; // [rsp+B0h] [rbp+20h]
  __int128 v51; // [rsp+C0h] [rbp+30h]
  __int128 v52; // [rsp+D0h] [rbp+40h]
  unsigned __int64 v53; // [rsp+E0h] [rbp+50h]
  __int16 v54; // [rsp+110h] [rbp+80h]
  unsigned int v55; // [rsp+150h] [rbp+C0h]
  __int64 (__fastcall *retaddr)(); // [rsp+178h] [rbp+E8h]
  unsigned __int16 v57; // [rsp+180h] [rbp+F0h]
  unsigned int v58; // [rsp+188h] [rbp+F8h]
  __int64 (__fastcall *v59)(); // [rsp+190h] [rbp+100h]
  unsigned __int16 v60; // [rsp+198h] [rbp+108h]

  v37 = 0;
  v39 = v8;
  v40 = a1;
  v41 = a2;
  v42 = a3;
  v43 = a4;
  v44 = v9;
  v45 = v10;
  if ( (v57 & 1) != 0 )
  {
    if ( (KiKvaShadow & 1) == 0 )
      __asm { swapgs }
    _mm_lfence();
    KiSetSpecCtrlNmi(a1, a2);
    v24 = (*(_BYTE *)(v23 + 3) & 3) == 0;
    v54 = 0;
    if ( !v24 )
      *(double *)&v11 = KiSaveDebugRegisterState(v22);
  }
  else
  {
    v46 = __readmsr(0xC0000101);
    v15 = __segmentlimit(0x50u);
    v16 = (v15 & 0x3FF) << 6;
    v17 = (unsigned __int64)(KiProcessorBlock[KiProcessorNumberToIndexMappingTable[v16 | (v15 >> 14)]] - 384) >> 32;
    __writemsr(0xC0000101, KiProcessorBlock[KiProcessorNumberToIndexMappingTable[v16 | (v15 >> 14)]] - 384);
    v18 = __readcr2();
    v53 = v18;
    KiSetSpecCtrlNmi(3221225729LL, v17);
  }
  v38 = _mm_getcsr();
  _mm_setcsr(KeGetPcr()->Prcb.MxCsr);
  v47 = v11;
  v48 = v12;
  v49 = v13;
  v50 = v14;
  v51 = v20;
  v52 = v21;
  if ( KeGetPcr()->Prcb.DeepSleep )
    KeWakeProcessor();
  if ( &ExpInterlockedPopEntrySListResume < (_UNKNOWN *)retaddr
    && &ExpInterlockedPopEntrySListEnd >= (_UNKNOWN *)retaddr )
  {
    KiCheckForSListAddress((__int64)v35);
  }
  __incgsdword(0x5C80u);
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(0xFuLL);
  v36 = CurrentIrql;
  _enable();
  if ( (v57 & 1) == 0 && &KiMcheckRecurseStart <= (_UNKNOWN *)retaddr && &KiMcheckRecurseEnd > (_UNKNOWN *)retaddr )
    KiBugCheckDispatch(251LL, 0LL, 0LL, 0LL);
  KxMcheckAbort(v35, v19, &v34);
  if ( (v34.m128i_i8[0] & 1) != 0 )
  {
    *((__m128i *)KeGetCurrentThread()->InitialStack - 26) = _mm_load_si128(&v34);
    v37 = 1;
  }
  __writemsr(0x17Au, 0LL);
  _disable();
  __writecr8(v36);
  _disable();
  if ( (v57 & 1) != 0 )
  {
    _mm_setcsr(v38);
    if ( v54 )
      KiRestoreDebugRegisterState(v36, 0LL);
    v26 = v43;
    v27 = v42;
    if ( v37 )
    {
      v28 = (__int64 (__fastcall **)())((char *)KeGetCurrentThread()->InitialStack - 40);
      *v28 = retaddr;
      v28[1] = (__int64 (__fastcall *)())v57;
      v28[2] = (__int64 (__fastcall *)())v58;
      v28[3] = v59;
      v28[4] = (__int64 (__fastcall *)())v60;
      v60 = 24;
      v29 = KxMcheckAlternateReturn;
      if ( (KiKvaShadow & 1) != 0 )
      {
        IdtBase = KeGetPcr()->IdtBase;
        *(&IdtBase[1119].Alignment + 1) = KeGetPcr()->Prcb.KernelDirectoryTableBase & 0x7FFFFFFFFFFFFFFFLL;
        IdtBase[1119].Alignment = (unsigned __int64)KeGetPcr();
        IdtBase = (_KIDTENTRY64 *)((char *)IdtBase + 16856);
        IdtBase->Alignment = (unsigned __int64)*v28;
        *(_KIDTENTRY64 *)((char *)IdtBase + 8) = *(_KIDTENTRY64 *)(v28 + 1);
        *(&IdtBase[1].Alignment + 1) = (unsigned __int64)v28[3];
        IdtBase[2].Alignment = (unsigned __int64)v28;
        v29 = KxMcheckAlternateReturnShadow;
      }
      retaddr = v29;
    }
    else if ( KeGetPcr()->Prcb.BpbKernelSpecCtrl )
    {
      __writemsr(0x48u, v55);
    }
    v31 = v41;
    v32 = v40;
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
    _mm_setcsr(v38);
    if ( KeGetPcr()->Prcb.BpbKernelSpecCtrl )
      __writemsr(0x48u, v55);
    __writemsr(0xC0000101, v46);
    __writecr2(v53);
    v26 = v43;
    v27 = v42;
    v31 = v41;
    v32 = v40;
    if ( (KiKvaShadow & 1) == 0 )
      __asm { iretq }
  }
  return KiKernelIstMceExit(v32, v31, v27, v26, a5, a6, a7, a8);
}
