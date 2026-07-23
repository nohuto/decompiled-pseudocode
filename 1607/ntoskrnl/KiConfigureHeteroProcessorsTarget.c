/*
 * XREFs of KiConfigureHeteroProcessorsTarget @ 0x1403DD1E8
 * Callers:
 *     <none>
 * Callees:
 *     KeAddProcessorAffinityEx @ 0x1400D1E28 (KeAddProcessorAffinityEx.c)
 *     KeIsEmptyAffinityEx @ 0x1400D26B0 (KeIsEmptyAffinityEx.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     KeSignalCallDpcSynchronize @ 0x1401D627C (KeSignalCallDpcSynchronize.c)
 *     PoGetProcessorPerformanceClass @ 0x14020A2CC (PoGetProcessorPerformanceClass.c)
 */

__int64 __fastcall KiConfigureHeteroProcessorsTarget(__int64 a1, __int64 a2, volatile signed __int32 *a3, __int64 a4)
{
  volatile signed __int32 *v5; // r15
  __int64 v7; // rbx
  unsigned __int16 *v8; // rbp
  unsigned int v9; // edi
  __int64 v10; // rax
  __int64 v11; // rcx
  int v12; // esi
  __int64 v13; // rdi
  __int64 v14; // rax
  __int64 v15; // rcx
  char ProcessorPerformanceClass; // al
  __int64 v17; // r8
  unsigned __int16 v18; // r9
  unsigned __int64 v19; // rcx
  unsigned __int16 v20; // r10
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // rdx
  __int64 v24; // r9
  __int64 v25; // rbx
  unsigned int v26; // r10d
  __int64 *v27; // rcx
  __int64 result; // rax
  _DWORD v30[44]; // [rsp+30h] [rbp-F8h] BYREF

  v5 = a3;
  KeSignalCallDpcSynchronize(a4);
  v7 = 0LL;
  if ( KeGetPcr()->Prcb.Number )
    goto LABEL_47;
  v8 = *(unsigned __int16 **)a2;
  v30[0] = 1310721;
  memset(&v30[1], 0, 0xA4uLL);
  if ( (unsigned int)KeIsEmptyAffinityEx(v8) )
  {
    v9 = 0;
    if ( (_DWORD)KeNumberProcessors_0 )
    {
      do
      {
        v10 = KiProcessorBlock[v9];
        v11 = *(unsigned __int8 *)(v10 + 1616);
        *(_WORD *)(v10 + 23858) = 0;
        qword_1403AC7C8[2 * v11] &= ~*(_QWORD *)(v10 + 1608);
        KeAddProcessorAffinityEx(v30, v9++);
      }
      while ( v9 < (unsigned int)KeNumberProcessors_0 );
LABEL_16:
      v5 = a3;
    }
    goto LABEL_17;
  }
  v12 = 0;
  if ( (_DWORD)KeNumberProcessors_0 )
  {
    while ( 1 )
    {
      v13 = KiProcessorBlock[v12];
      if ( ((*(_QWORD *)&v8[4 * ((unsigned __int64)(unsigned int)KiProcessorIndexToNumberMappingTable[v12] >> 6) + 4] >> (KiProcessorIndexToNumberMappingTable[v12] & 0x3F)) & 1) == 0 )
        break;
      v14 = *(_QWORD *)(v13 + 1608);
      v15 = 2LL * *(unsigned __int8 *)(v13 + 1616);
      *(_WORD *)(v13 + 23858) = 0;
      qword_1403AC7C8[v15] |= v14;
LABEL_15:
      if ( ++v12 >= (unsigned int)KeNumberProcessors_0 )
        goto LABEL_16;
    }
    if ( *(_DWORD *)(a2 + 8) )
    {
      *(_WORD *)(v13 + 23858) = 257;
    }
    else
    {
      ProcessorPerformanceClass = PoGetProcessorPerformanceClass(KiProcessorBlock[v12]);
      *(_BYTE *)(v13 + 23859) = ProcessorPerformanceClass;
      *(_BYTE *)(v13 + 23858) = 0;
      if ( ProcessorPerformanceClass != *(_BYTE *)(a2 + 12) )
      {
LABEL_14:
        qword_1403AC7C8[2 * *(unsigned __int8 *)(v13 + 1616)] &= ~*(_QWORD *)(v13 + 1608);
        goto LABEL_15;
      }
    }
    KeAddProcessorAffinityEx(v30, v12);
    goto LABEL_14;
  }
LABEL_17:
  v17 = 0LL;
  v18 = 0;
  if ( !KeNumberNodes )
    goto LABEL_24;
  while ( 1 )
  {
    v19 = *(_QWORD *)(KeNodeBlock[v18] + 136) - ((*(_QWORD *)(KeNodeBlock[v18] + 136) >> 1) & 0x5555555555555555LL);
    if ( (unsigned int)((0x101010101010101LL
                       * (((v19 & 0x3333333333333333LL)
                         + ((v19 >> 2) & 0x3333333333333333LL)
                         + (((v19 & 0x3333333333333333LL) + ((v19 >> 2) & 0x3333333333333333LL)) >> 4)) & 0xF0F0F0F0F0F0F0FLL)) >> 32) >> 24 )
      break;
LABEL_21:
    if ( ++v18 >= (unsigned __int16)KeNumberNodes )
      goto LABEL_24;
  }
  if ( !v17 )
  {
    v17 = KeNodeBlock[v18];
    goto LABEL_21;
  }
  v17 = 0LL;
LABEL_24:
  KiHeteroSystem = 0;
  if ( v17 )
  {
    v20 = *(_WORD *)(v17 + 144);
    if ( v20 >= *v8 )
      v21 = 0LL;
    else
      v21 = *(_QWORD *)&v8[4 * v20 + 4];
    v22 = *(_QWORD *)(v17 + 136);
    v23 = v22 & v21;
    if ( !v23 || v23 == v22 )
    {
      v23 = *(_QWORD *)(v17 + 136);
      v24 = v23;
      v25 = v23;
    }
    else
    {
      v24 = v22 & ~v23;
      if ( v20 < LOWORD(v30[0]) )
        v7 = *(_QWORD *)&v30[2 * v20 + 2];
      v25 = v22 & v7;
      KiHeteroSystem = 1;
      if ( !v25 )
        v25 = v22 & ~v23;
    }
    v26 = 1;
    v27 = (__int64 *)(v17 + 216);
    while ( 1 )
    {
      if ( v26 == 1 )
      {
        *(v27 - 2) = v25;
        *(v27 - 1) = v24;
        *v27 = v24;
        goto LABEL_46;
      }
      if ( v26 == 2 )
        break;
      if ( v26 == 3 )
      {
        *(v27 - 2) = v23;
        *(v27 - 1) = v23;
        *v27 = v23;
      }
      else if ( v26 == 4 )
      {
        *(v27 - 2) = v23;
        *(v27 - 1) = v23;
LABEL_44:
        *v27 = *(_QWORD *)(v17 + 136);
      }
LABEL_46:
      ++v26;
      v27 += 3;
      if ( v26 >= 5 )
        goto LABEL_47;
    }
    *(v27 - 2) = v25;
    *(v27 - 1) = v24;
    goto LABEL_44;
  }
LABEL_47:
  result = KeSignalCallDpcSynchronize(a4);
  _InterlockedDecrement(v5);
  return result;
}
