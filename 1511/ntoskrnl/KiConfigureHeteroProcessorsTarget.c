/*
 * XREFs of KiConfigureHeteroProcessorsTarget @ 0x1403B0E78
 * Callers:
 *     <none>
 * Callees:
 *     KeIsEmptyAffinityEx @ 0x140077130 (KeIsEmptyAffinityEx.c)
 *     KeSignalCallDpcSynchronize @ 0x1401C74A4 (KeSignalCallDpcSynchronize.c)
 */

__int64 __fastcall KiConfigureHeteroProcessorsTarget(
        __int64 a1,
        unsigned __int16 *a2,
        volatile signed __int32 *a3,
        __int64 a4)
{
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // rbx
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // rcx
  unsigned int v13; // r9d
  __int64 v14; // r10
  unsigned __int64 v15; // rax
  char v16; // cl
  unsigned __int64 v17; // rdx
  __int64 v18; // rax
  __int64 v19; // rcx
  unsigned __int16 v20; // ax
  __int64 v21; // rax
  __int64 v22; // rbx
  unsigned int v23; // r9d
  __int64 *v24; // rcx
  __int64 result; // rax

  KeSignalCallDpcSynchronize(a4, (__int64)a2, (__int64)a3);
  v9 = 0LL;
  if ( !KeGetPcr()->Prcb.Number )
  {
    if ( (unsigned int)KeIsEmptyAffinityEx(a2) )
    {
      v7 = 0LL;
      if ( (_DWORD)KeNumberProcessors_0 )
      {
        v8 = 0x140000000uLL;
        do
        {
          v10 = (unsigned int)v7;
          v7 = (unsigned int)(v7 + 1);
          v11 = KiProcessorBlock[v10];
          v12 = *(unsigned __int8 *)(v11 + 1616);
          *(_BYTE *)(v11 + 23858) = 0;
          qword_1403848F8[2 * v12] &= ~*(_QWORD *)(v11 + 1608);
        }
        while ( (unsigned int)v7 < (unsigned int)KeNumberProcessors_0 );
      }
    }
    else
    {
      v13 = 0;
      if ( (_DWORD)KeNumberProcessors_0 )
      {
        v8 = 0x140000000uLL;
        do
        {
          v14 = KiProcessorBlock[v13];
          v15 = (unsigned int)KiProcessorIndexToNumberMappingTable[v13];
          v16 = v15 & 0x3F;
          v17 = *(_QWORD *)&a2[4 * (v15 >> 6) + 4];
          v18 = *(_QWORD *)(v14 + 1608);
          v7 = v17 >> v16;
          v19 = 2LL * *(unsigned __int8 *)(v14 + 1616);
          if ( (v7 & 1) != 0 )
          {
            *(_BYTE *)(v14 + 23858) = 0;
            qword_1403848F8[v19] |= v18;
          }
          else
          {
            *(_BYTE *)(v14 + 23858) = 1;
            qword_1403848F8[v19] &= ~v18;
          }
          ++v13;
        }
        while ( v13 < (unsigned int)KeNumberProcessors_0 );
      }
    }
    KiHeteroSystem = 0;
    if ( KeNumberNodes == 1 )
    {
      v8 = KeNodeBlock[0];
      v20 = *(_WORD *)(KeNodeBlock[0] + 144);
      if ( v20 < *a2 )
        v9 = *(_QWORD *)&a2[4 * v20 + 4];
      v21 = *(_QWORD *)(KeNodeBlock[0] + 136);
      v22 = v21 & v9;
      if ( !v22 || v22 == v21 )
      {
        v22 = *(_QWORD *)(KeNodeBlock[0] + 136);
        v7 = v22;
      }
      else
      {
        KiHeteroSystem = 1;
        v7 = v21 & ~v22;
      }
      v23 = 1;
      v24 = (__int64 *)(KeNodeBlock[0] + 192);
      do
      {
        *v24 = *(_QWORD *)(v8 + 136);
        v24[1] = *(_QWORD *)(v8 + 136);
        if ( v23 == 1 )
        {
          v24[1] = v7;
        }
        else if ( v23 != 2 )
        {
          if ( v23 == 3 )
          {
            *v24 = v22;
            v24[1] = v22;
          }
          else if ( v23 == 4 )
          {
            *v24 = v22;
          }
          goto LABEL_29;
        }
        *v24 = v7;
LABEL_29:
        ++v23;
        v24 += 2;
      }
      while ( v23 < 5 );
    }
  }
  result = KeSignalCallDpcSynchronize(a4, v7, v8);
  _InterlockedDecrement(a3);
  return result;
}
