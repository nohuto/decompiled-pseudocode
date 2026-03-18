/*
 * XREFs of KxInitializeProcessorState @ 0x14052F9AC
 * Callers:
 *     KiStartDynamicProcessor @ 0x140619E80 (KiStartDynamicProcessor.c)
 *     KeStartAllProcessors @ 0x140762F20 (KeStartAllProcessors.c)
 * Callees:
 *     KiAddProcessorToGroupDatabase @ 0x1401368D4 (KiAddProcessorToGroupDatabase.c)
 *     KiCommitNodeAssignment @ 0x140136A8C (KiCommitNodeAssignment.c)
 *     memmove @ 0x140166980 (memmove.c)
 *     memset @ 0x140166CC0 (memset.c)
 *     KiEnableKvaShadowing @ 0x1403B186C (KiEnableKvaShadowing.c)
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
  unsigned __int64 v22; // rdx
  __int64 v23; // r9
  __int64 v24; // rcx
  __int64 v25; // rdi
  __int64 *v26; // rax
  __int64 *v27; // r8
  _OWORD *v28; // rcx
  __int64 v29; // rbx
  _OWORD *v30; // rax
  __int128 v31; // xmm1
  __int64 result; // rax
  int v33; // ecx
  int v34; // eax
  unsigned __int64 v35; // rax
  unsigned __int64 v36; // rcx
  unsigned __int64 v37; // rcx

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
  v22 = v21 - 8112;
  *(_BYTE *)(a3 + 82) = a7;
  v23 = 2LL;
  *(_DWORD *)(a3 + 420) = a7;
  *(_DWORD *)(a3 + 1908) = KeGetCurrentPrcb()->MHz;
  v24 = 2LL;
  *(_BYTE *)(v21 + 68) = (unsigned int)(v21 - 8112) >> 16;
  *(_BYTE *)(v21 + 71) = (unsigned int)(v21 - 8112) >> 24;
  *(_DWORD *)(v21 + 72) = (v21 - 8112) >> 32;
  v25 = ((((a8 - 1) << 6) + 32895) & 0xFFFFFFC0) + a3 + 0x2000;
  *(_WORD *)(v21 + 66) = v21 - 8112;
  v26 = (__int64 *)(v21 - 8112 + 36);
  do
  {
    *v26 = v25;
    v25 += 0x2000LL;
    ++v26;
    --v24;
  }
  while ( v24 );
  *(_QWORD *)(v22 + 52) = v25;
  *(_QWORD *)(a3 + 25624) = a13;
  *(_QWORD *)(v22 + 4) = a11;
  v27 = (__int64 *)(0x140000000LL + 8LL * a6 + 3757120);
  v28 = (_OWORD *)((char *)&KiNodeInit + 256 * (unsigned __int64)a6);
  v29 = *v27;
  if ( (_OWORD *)*v27 == v28 )
  {
    v29 = v25 + 1984;
    v30 = (_OWORD *)(v25 + 1984);
    do
    {
      *v30 = *v28;
      v30[1] = v28[1];
      v30[2] = v28[2];
      v30[3] = v28[3];
      v30[4] = v28[4];
      v30[5] = v28[5];
      v30[6] = v28[6];
      v30 += 8;
      v31 = v28[7];
      v28 += 8;
      *(v30 - 1) = v31;
      --v23;
    }
    while ( v23 );
    *v27 = v29;
  }
  if ( (*(_BYTE *)(v29 + 173) & 4) == 0 )
    KiCommitNodeAssignment(v29);
  if ( !(unsigned int)KiEnableKvaShadowing(a3 + 384) )
    return 0LL;
  *(_QWORD *)(a3 + 1984) = v29;
  KiAddProcessorToGroupDatabase(a3 + 384, a4);
  v33 = *(unsigned __int8 *)(a3 + 2000) | (*(unsigned __int8 *)(a3 + 2001) << 14) | 0x3C00;
  v34 = *(_DWORD *)(v21 + 84);
  *(_WORD *)(v21 + 80) = v33;
  *(_DWORD *)(v21 + 84) ^= (v33 ^ v34) & 0xF0000;
  *(_QWORD *)(a11 - 8) = 0LL;
  *((_DWORD *)a1 + 73) = 0;
  a1[44] = (unsigned __int64)a2;
  a1[59] = (unsigned __int64)KiSystemStartup;
  a1[47] = a11 - 8;
  *((_DWORD *)a1 + 70) = 2818064;
  *((_DWORD *)a1 + 71) = 5439531;
  *((_DWORD *)a1 + 72) = 1572907;
  v35 = __readcr0();
  *a1 = v35;
  v36 = __readcr3();
  a1[2] = v36 & 0xFFFFFFFFFFFFF000uLL;
  *((_WORD *)a1 + 56) = 64;
  *(_BYTE *)(v21 + 69) = -119;
  v37 = __readcr4();
  a1[3] = v37;
  a2[18] = &KiInitialProcess;
  result = a3 + 384;
  a2[16] = a12;
  a2[19] = v25;
  a2[17] = a3 + 384;
  return result;
}
