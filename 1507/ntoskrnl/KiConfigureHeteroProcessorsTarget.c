/*
 * XREFs of KiConfigureHeteroProcessorsTarget @ 0x140401684
 * Callers:
 *     <none>
 * Callees:
 *     KeSignalCallDpcSynchronize @ 0x140204168 (KeSignalCallDpcSynchronize.c)
 */

__int64 __fastcall KiConfigureHeteroProcessorsTarget(
        __int64 a1,
        unsigned __int16 *a2,
        volatile signed __int32 *a3,
        __int64 a4)
{
  __int64 v7; // r10
  unsigned __int16 v8; // cx
  unsigned int j; // edx
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // rcx
  __int64 v13; // r8
  unsigned __int16 v14; // ax
  __int64 v15; // rax
  __int64 v16; // r10
  __int64 v17; // rdx
  unsigned int i; // r9d
  __int64 v19; // r11
  unsigned __int64 v20; // rax
  char v21; // cl
  unsigned __int64 v22; // rdx
  __int64 v23; // rax
  unsigned __int64 v24; // rdx
  __int64 v25; // rcx
  unsigned int v26; // r9d
  __int64 *v27; // rcx
  __int64 result; // rax

  KeSignalCallDpcSynchronize(a4);
  v7 = 0LL;
  if ( !KeGetPcr()->Prcb.Number )
  {
    v8 = 0;
    if ( *a2 )
    {
      while ( !*(_QWORD *)&a2[4 * v8 + 4] )
      {
        if ( ++v8 >= *a2 )
          goto LABEL_5;
      }
      for ( i = 0; i < (unsigned int)KeNumberProcessors_0; ++i )
      {
        v19 = KiProcessorBlock[i];
        v20 = (unsigned int)KiProcessorIndexToNumberMappingTable[i];
        v21 = v20 & 0x3F;
        v22 = *(_QWORD *)&a2[4 * (v20 >> 6) + 4];
        v23 = *(_QWORD *)(v19 + 1608);
        v24 = v22 >> v21;
        v25 = 2LL * *(unsigned __int8 *)(v19 + 1616);
        if ( (v24 & 1) != 0 )
        {
          *(_BYTE *)(v19 + 23858) = 0;
          qword_1403D3988[v25] |= v23;
        }
        else
        {
          *(_BYTE *)(v19 + 23858) = 1;
          qword_1403D3988[v25] &= ~v23;
        }
      }
    }
    else
    {
LABEL_5:
      for ( j = 0; j < (unsigned int)KeNumberProcessors_0; qword_1403D3988[2 * v12] &= ~*(_QWORD *)(v11 + 1608) )
      {
        v10 = j++;
        v11 = KiProcessorBlock[v10];
        v12 = *(unsigned __int8 *)(v11 + 1616);
        *(_BYTE *)(v11 + 23858) = 0;
      }
    }
    KiHeteroSystem = 0;
    if ( KeNumberNodes == 1 )
    {
      v13 = KeNodeBlock[0];
      v14 = *(_WORD *)(KeNodeBlock[0] + 144);
      if ( v14 < *a2 )
        v7 = *(_QWORD *)&a2[4 * v14 + 4];
      v15 = *(_QWORD *)(KeNodeBlock[0] + 136);
      v16 = v15 & v7;
      if ( !v16 || v16 == v15 )
      {
        v16 = *(_QWORD *)(KeNodeBlock[0] + 136);
        v17 = v16;
      }
      else
      {
        KiHeteroSystem = 1;
        v17 = v15 & ~v16;
      }
      v26 = 1;
      v27 = (__int64 *)(KeNodeBlock[0] + 192);
      do
      {
        *v27 = *(_QWORD *)(v13 + 136);
        v27[1] = *(_QWORD *)(v13 + 136);
        if ( v26 == 1 )
        {
          v27[1] = v17;
        }
        else if ( v26 != 2 )
        {
          if ( v26 == 3 )
          {
            *v27 = v16;
            v27[1] = v16;
          }
          else if ( v26 == 4 )
          {
            *v27 = v16;
          }
          goto LABEL_29;
        }
        *v27 = v17;
LABEL_29:
        ++v26;
        v27 += 2;
      }
      while ( v26 < 5 );
    }
  }
  result = KeSignalCallDpcSynchronize(a4);
  _InterlockedDecrement(a3);
  return result;
}
