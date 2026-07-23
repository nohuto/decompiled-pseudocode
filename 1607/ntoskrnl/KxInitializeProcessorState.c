/*
 * XREFs of KxInitializeProcessorState @ 0x14054E9DC
 * Callers:
 *     KiStartDynamicProcessor @ 0x14064F124 (KiStartDynamicProcessor.c)
 *     KeStartAllProcessors @ 0x140792860 (KeStartAllProcessors.c)
 * Callees:
 *     KiAddProcessorToGroupDatabase @ 0x140139934 (KiAddProcessorToGroupDatabase.c)
 *     KiCommitNodeAssignment @ 0x140139BC0 (KiCommitNodeAssignment.c)
 *     memmove @ 0x140171780 (memmove.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     KiEnableKvaShadowing @ 0x1403DDF40 (KiEnableKvaShadowing.c)
 */

__int64 __fastcall KxInitializeProcessorState(
        unsigned __int64 *a1,
        _QWORD *a2,
        __int64 a3,
        int a4,
        size_t Size,
        unsigned int a6,
        int a7,
        int a8,
        unsigned int a9,
        unsigned int a10,
        __int64 a11,
        __int64 a12,
        __int64 a13)
{
  KPCR *Pcr; // rbx
  void *v17; // rcx
  unsigned __int16 Limit; // ax
  const void *v19; // rdx
  void *v20; // rcx
  unsigned __int64 v21; // r15
  __int64 v22; // r9
  __int64 v23; // rdx
  unsigned __int64 v24; // rcx
  __int64 v25; // rbx
  __int64 *v26; // rax
  __int64 v27; // rbx
  __int64 v28; // rdi
  _OWORD *v29; // rcx
  _OWORD *v30; // rax
  __int128 v31; // xmm1
  __int128 v32; // xmm0
  __int64 result; // rax
  int v34; // ecx
  int v35; // eax
  unsigned __int64 v36; // rax
  unsigned __int64 v37; // rcx
  unsigned __int64 v38; // rcx

  Pcr = KeGetPcr();
  memset((void *)a3, 0, (unsigned int)Size);
  memset(a1, 0, 0x5B0uLL);
  *((_WORD *)a1 + 43) = Pcr->Prcb.ProcessorState.SpecialRegisters.Gdtr.Limit;
  v17 = (void *)(a3 + a9);
  a1[11] = (unsigned __int64)v17;
  memmove(
    v17,
    Pcr->Prcb.ProcessorState.SpecialRegisters.Gdtr.Base,
    Pcr->Prcb.ProcessorState.SpecialRegisters.Gdtr.Limit + 1);
  Limit = Pcr->Prcb.ProcessorState.SpecialRegisters.Idtr.Limit;
  v19 = KiBootProcessorIdt;
  v20 = (void *)(a3 + a10);
  v21 = a1[11];
  a1[13] = (unsigned __int64)v20;
  *((_WORD *)a1 + 51) = Limit;
  memmove(v20, v19, (unsigned int)KiBootProcessorIdtSize);
  *(_BYTE *)(a3 + 82) = a7;
  v22 = 2LL;
  *(_DWORD *)(a3 + 420) = a7;
  v23 = 2LL;
  *(_DWORD *)(a3 + 1908) = KeGetCurrentPrcb()->MHz;
  *(_QWORD *)(a3 + 11776) = KeGetCurrentPrcb()->MsrIa32TsxCtrl;
  v24 = v21 - 8112;
  *(_WORD *)(v21 + 66) = v21 - 8112;
  *(_BYTE *)(v21 + 68) = (unsigned int)(v21 - 8112) >> 16;
  *(_BYTE *)(v21 + 71) = (unsigned int)(v21 - 8112) >> 24;
  *(_DWORD *)(v21 + 72) = (v21 - 8112) >> 32;
  v25 = ((((a8 - 1) << 6) + 32895) & 0xFFFFFFC0) + a3 + 0x2000;
  v26 = (__int64 *)(v21 - 8112 + 36);
  do
  {
    *v26 = v25;
    v25 += 0x2000LL;
    ++v26;
    --v23;
  }
  while ( v23 );
  *(_QWORD *)(v24 + 60) = v25;
  v27 = v25 + 0x2000;
  *(_QWORD *)(v24 + 52) = v27;
  *(_QWORD *)(a3 + 25752) = a13;
  *(_QWORD *)(v24 + 4) = a11;
  v28 = KeNodeBlock[a6];
  v29 = (_OWORD *)((char *)&KiNodeInit + 320 * a6);
  if ( (_OWORD *)v28 == v29 )
  {
    v28 = v27 + 2048;
    v30 = (_OWORD *)(v27 + 2048);
    do
    {
      *v30 = *v29;
      v30[1] = v29[1];
      v30[2] = v29[2];
      v30[3] = v29[3];
      v30[4] = v29[4];
      v30[5] = v29[5];
      v30[6] = v29[6];
      v30 += 8;
      v31 = v29[7];
      v29 += 8;
      *(v30 - 1) = v31;
      --v22;
    }
    while ( v22 );
    v32 = *v29;
    KeNodeBlock[a6] = v28;
    *v30 = v32;
    v30[1] = v29[1];
    v30[2] = v29[2];
    v30[3] = v29[3];
  }
  if ( (*(_BYTE *)(v28 + 173) & 4) == 0 )
    KiCommitNodeAssignment(v28);
  if ( !(unsigned int)KiEnableKvaShadowing(a3 + 384) )
    return 0LL;
  *(_QWORD *)(a3 + 1984) = v28;
  KiAddProcessorToGroupDatabase(a3 + 384, a4);
  v34 = *(unsigned __int8 *)(a3 + 2000) | (*(unsigned __int8 *)(a3 + 2001) << 14) | 0x3C00;
  v35 = *(_DWORD *)(v21 + 84);
  *(_WORD *)(v21 + 80) = v34;
  *(_DWORD *)(v21 + 84) ^= (v34 ^ v35) & 0xF0000;
  *(_QWORD *)(a11 - 8) = 0LL;
  *((_DWORD *)a1 + 73) = 0;
  a1[44] = (unsigned __int64)a2;
  a1[59] = (unsigned __int64)KiSystemStartup;
  a1[47] = a11 - 8;
  *((_DWORD *)a1 + 70) = 2818064;
  *((_DWORD *)a1 + 71) = 5439531;
  *((_DWORD *)a1 + 72) = 1572907;
  v36 = __readcr0();
  *a1 = v36;
  v37 = __readcr3();
  a1[2] = v37 & 0xFFFFFFFFFFFFF000uLL;
  *((_WORD *)a1 + 56) = 64;
  *(_BYTE *)(v21 + 69) = -119;
  v38 = __readcr4();
  a1[3] = v38;
  a2[18] = &KiInitialProcess;
  result = a3 + 384;
  a2[16] = a12;
  a2[19] = v27;
  a2[17] = a3 + 384;
  return result;
}
